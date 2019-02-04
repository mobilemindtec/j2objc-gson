#!/usr/bin/env bash

if [ -z $J2OBJC_HOME ]; then
    J2OBJC_HOME="/opt/j2objc"
    PATH=$PATH:$J2OBJC_HOME
fi


BUILD="./build/j2objc"

rm -rf $BUILD

mkdir -p $BUILD/{java,objc,bin}

find "./src/main" -name '*.java' -type f -exec cp {} "$BUILD/java/" \;
find "./src/main" -type f -name 'packages.properties' -exec cat {} + >> "$BUILD/java/packages.properties" ;

CLASS_PATH="./src/main/java"

for f in $BUILD/java/*.java; do

  FILE_NAME=`basename $f`
	NAME=${FILE_NAME//".java"/""}
	FILE_M="${NAME}.m"

	echo "** j2objc compile $FILE_NAME"

	j2objc -d $BUILD/objc \
    -sourcepath "$BUILD/java/**.java" \
    -classpath $CLASS_PATH \
    --prefixes $BUILD/java/packages.properties \
    --swift-friendly \
    --no-segmented-headers \
    -use-arc \
    --nullability \
    --no-package-directories $f

done

# prepare and copy ios sources to pod project

APP_IOS_SOURCES=ios/J2ObjCGson/Classes
rm -R $APP_IOS_SOURCES/*
cp $BUILD/objc/* $APP_IOS_SOURCES/

#APP_SHARE_DEF_HEADER=$APP_IOS_SOURCES/J2ObjCGson.h
#
#for f in $APP_IOS_SOURCES/*.h; do
#	FILE_NAME=`basename $f`
#
#  if [ $FILE_NAME == "J2ObjCGson.h" ]; then
#    continue
#  fi
#
#	echo "#include \"$FILE_NAME\"" >> $APP_SHARE_DEF_HEADER
#done

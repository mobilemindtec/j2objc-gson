//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/$Gson$Preconditions.java
//

#ifndef $Gson$Preconditions_H
#define $Gson$Preconditions_H

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#include "J2ObjC_header.h"

@interface Gson_Gson_Preconditions : NSObject

#pragma mark Public

+ (void)checkArgumentWithBoolean:(jboolean)condition;

+ (id)checkNotNullWithId:(id)obj;

@end

J2OBJC_EMPTY_STATIC_INIT(Gson_Gson_Preconditions)

FOUNDATION_EXPORT id Gson_Gson_Preconditions_checkNotNullWithId_(id obj);

FOUNDATION_EXPORT void Gson_Gson_Preconditions_checkArgumentWithBoolean_(jboolean condition);

J2OBJC_TYPE_LITERAL_HEADER(Gson_Gson_Preconditions)

@compatibility_alias ComGoogleGsonInternal$Gson$Preconditions Gson_Gson_Preconditions;


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#endif // $Gson$Preconditions_H

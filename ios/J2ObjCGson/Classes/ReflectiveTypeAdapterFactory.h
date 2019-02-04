//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/ReflectiveTypeAdapterFactory.java
//

#ifndef ReflectiveTypeAdapterFactory_H
#define ReflectiveTypeAdapterFactory_H

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#include "J2ObjC_header.h"
#include "TypeAdapter.h"
#include "TypeAdapterFactory.h"

@class GsonConstructorConstructor;
@class GsonExcluder;
@class GsonGson;
@class GsonJsonAdapterAnnotationTypeAdapterFactory;
@class GsonJsonReader;
@class GsonJsonWriter;
@class GsonTypeAdapter;
@class GsonTypeToken;
@class JavaLangReflectField;
@protocol GsonFieldNamingStrategy;
@protocol GsonObjectConstructor;
@protocol JavaUtilMap;

@interface GsonReflectiveTypeAdapterFactory : NSObject < GsonTypeAdapterFactory >

#pragma mark Public

- (instancetype __nonnull)initWithGsonConstructorConstructor:(GsonConstructorConstructor *)constructorConstructor
                                 withGsonFieldNamingStrategy:(id<GsonFieldNamingStrategy>)fieldNamingPolicy
                                            withGsonExcluder:(GsonExcluder *)excluder
             withGsonJsonAdapterAnnotationTypeAdapterFactory:(GsonJsonAdapterAnnotationTypeAdapterFactory *)jsonAdapterFactory;

- (GsonTypeAdapter *)createWithGsonGson:(GsonGson *)gson
                      withGsonTypeToken:(GsonTypeToken *)type;

- (jboolean)excludeFieldWithJavaLangReflectField:(JavaLangReflectField *)f
                                     withBoolean:(jboolean)serialize;

#pragma mark Package-Private

+ (jboolean)excludeFieldWithJavaLangReflectField:(JavaLangReflectField *)f
                                     withBoolean:(jboolean)serialize
                                withGsonExcluder:(GsonExcluder *)excluder;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GsonReflectiveTypeAdapterFactory)

FOUNDATION_EXPORT void GsonReflectiveTypeAdapterFactory_initWithGsonConstructorConstructor_withGsonFieldNamingStrategy_withGsonExcluder_withGsonJsonAdapterAnnotationTypeAdapterFactory_(GsonReflectiveTypeAdapterFactory *self, GsonConstructorConstructor *constructorConstructor, id<GsonFieldNamingStrategy> fieldNamingPolicy, GsonExcluder *excluder, GsonJsonAdapterAnnotationTypeAdapterFactory *jsonAdapterFactory);

FOUNDATION_EXPORT GsonReflectiveTypeAdapterFactory *new_GsonReflectiveTypeAdapterFactory_initWithGsonConstructorConstructor_withGsonFieldNamingStrategy_withGsonExcluder_withGsonJsonAdapterAnnotationTypeAdapterFactory_(GsonConstructorConstructor *constructorConstructor, id<GsonFieldNamingStrategy> fieldNamingPolicy, GsonExcluder *excluder, GsonJsonAdapterAnnotationTypeAdapterFactory *jsonAdapterFactory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonReflectiveTypeAdapterFactory *create_GsonReflectiveTypeAdapterFactory_initWithGsonConstructorConstructor_withGsonFieldNamingStrategy_withGsonExcluder_withGsonJsonAdapterAnnotationTypeAdapterFactory_(GsonConstructorConstructor *constructorConstructor, id<GsonFieldNamingStrategy> fieldNamingPolicy, GsonExcluder *excluder, GsonJsonAdapterAnnotationTypeAdapterFactory *jsonAdapterFactory);

FOUNDATION_EXPORT jboolean GsonReflectiveTypeAdapterFactory_excludeFieldWithJavaLangReflectField_withBoolean_withGsonExcluder_(JavaLangReflectField *f, jboolean serialize, GsonExcluder *excluder);

J2OBJC_TYPE_LITERAL_HEADER(GsonReflectiveTypeAdapterFactory)

@compatibility_alias ComGoogleGsonInternalBindReflectiveTypeAdapterFactory GsonReflectiveTypeAdapterFactory;

@interface GsonReflectiveTypeAdapterFactory_BoundField : NSObject {
 @public
  NSString *name_;
  jboolean serialized_;
  jboolean deserialized_;
}

#pragma mark Protected

- (instancetype __nonnull)initWithNSString:(NSString *)name
                               withBoolean:(jboolean)serialized
                               withBoolean:(jboolean)deserialized;

#pragma mark Package-Private

- (void)readWithGsonJsonReader:(GsonJsonReader *)reader
                        withId:(id)value;

- (void)writeWithGsonJsonWriter:(GsonJsonWriter *)writer
                         withId:(id)value;

- (jboolean)writeFieldWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(GsonReflectiveTypeAdapterFactory_BoundField)

J2OBJC_FIELD_SETTER(GsonReflectiveTypeAdapterFactory_BoundField, name_, NSString *)

FOUNDATION_EXPORT void GsonReflectiveTypeAdapterFactory_BoundField_initWithNSString_withBoolean_withBoolean_(GsonReflectiveTypeAdapterFactory_BoundField *self, NSString *name, jboolean serialized, jboolean deserialized);

J2OBJC_TYPE_LITERAL_HEADER(GsonReflectiveTypeAdapterFactory_BoundField)

@interface GsonReflectiveTypeAdapterFactory_Adapter : GsonTypeAdapter

#pragma mark Public

- (id)readWithGsonJsonReader:(GsonJsonReader *)inArg;

- (void)writeWithGsonJsonWriter:(GsonJsonWriter *)outArg
                         withId:(id)value;

#pragma mark Package-Private

- (instancetype __nonnull)initWithGsonObjectConstructor:(id<GsonObjectConstructor>)constructor
                                        withJavaUtilMap:(id<JavaUtilMap>)boundFields;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GsonReflectiveTypeAdapterFactory_Adapter)

FOUNDATION_EXPORT void GsonReflectiveTypeAdapterFactory_Adapter_initWithGsonObjectConstructor_withJavaUtilMap_(GsonReflectiveTypeAdapterFactory_Adapter *self, id<GsonObjectConstructor> constructor, id<JavaUtilMap> boundFields);

FOUNDATION_EXPORT GsonReflectiveTypeAdapterFactory_Adapter *new_GsonReflectiveTypeAdapterFactory_Adapter_initWithGsonObjectConstructor_withJavaUtilMap_(id<GsonObjectConstructor> constructor, id<JavaUtilMap> boundFields) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonReflectiveTypeAdapterFactory_Adapter *create_GsonReflectiveTypeAdapterFactory_Adapter_initWithGsonObjectConstructor_withJavaUtilMap_(id<GsonObjectConstructor> constructor, id<JavaUtilMap> boundFields);

J2OBJC_TYPE_LITERAL_HEADER(GsonReflectiveTypeAdapterFactory_Adapter)


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#endif // ReflectiveTypeAdapterFactory_H

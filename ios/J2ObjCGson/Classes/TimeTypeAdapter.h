//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/TimeTypeAdapter.java
//

#ifndef TimeTypeAdapter_H
#define TimeTypeAdapter_H

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#include "J2ObjC_header.h"
#include "TypeAdapter.h"

@class GsonJsonElement;
@class GsonJsonReader;
@class GsonJsonWriter;
@class JavaIoReader;
@class JavaSqlTime;
@protocol GsonTypeAdapterFactory;

@interface GsonTimeTypeAdapter : GsonTypeAdapter
@property (readonly, class) id<GsonTypeAdapterFactory> FACTORY NS_SWIFT_NAME(FACTORY);

+ (id<GsonTypeAdapterFactory>)FACTORY;

#pragma mark Public

- (instancetype __nonnull)init;

- (JavaSqlTime *)fromJsonTreeWithGsonJsonElement:(GsonJsonElement *)arg0;

- (JavaSqlTime *)fromJsonWithJavaIoReader:(JavaIoReader *)arg0;

- (JavaSqlTime *)fromJsonWithNSString:(NSString *)arg0;

- (JavaSqlTime *)readWithGsonJsonReader:(GsonJsonReader *)inArg;

- (void)writeWithGsonJsonWriter:(GsonJsonWriter *)outArg
                         withId:(JavaSqlTime *)value;

@end

J2OBJC_STATIC_INIT(GsonTimeTypeAdapter)

inline id<GsonTypeAdapterFactory> GsonTimeTypeAdapter_get_FACTORY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<GsonTypeAdapterFactory> GsonTimeTypeAdapter_FACTORY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(GsonTimeTypeAdapter, FACTORY, id<GsonTypeAdapterFactory>)

FOUNDATION_EXPORT void GsonTimeTypeAdapter_init(GsonTimeTypeAdapter *self);

FOUNDATION_EXPORT GsonTimeTypeAdapter *new_GsonTimeTypeAdapter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonTimeTypeAdapter *create_GsonTimeTypeAdapter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(GsonTimeTypeAdapter)

@compatibility_alias ComGoogleGsonInternalBindTimeTypeAdapter GsonTimeTypeAdapter;


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#endif // TimeTypeAdapter_H

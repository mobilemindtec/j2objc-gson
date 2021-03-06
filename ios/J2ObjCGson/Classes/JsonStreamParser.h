//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/JsonStreamParser.java
//

#ifndef JsonStreamParser_H
#define JsonStreamParser_H

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#include "J2ObjC_header.h"
#include "java/util/Iterator.h"

@class GsonJsonElement;
@class JavaIoReader;
@protocol JavaUtilFunctionConsumer;

@interface GsonJsonStreamParser : NSObject < JavaUtilIterator >

#pragma mark Public

- (instancetype __nonnull)initWithJavaIoReader:(JavaIoReader *)reader;

- (instancetype __nonnull)initWithNSString:(NSString *)json;

- (jboolean)hasNext;

- (GsonJsonElement *)next;

- (void)remove;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(GsonJsonStreamParser)

FOUNDATION_EXPORT void GsonJsonStreamParser_initWithNSString_(GsonJsonStreamParser *self, NSString *json);

FOUNDATION_EXPORT GsonJsonStreamParser *new_GsonJsonStreamParser_initWithNSString_(NSString *json) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonJsonStreamParser *create_GsonJsonStreamParser_initWithNSString_(NSString *json);

FOUNDATION_EXPORT void GsonJsonStreamParser_initWithJavaIoReader_(GsonJsonStreamParser *self, JavaIoReader *reader);

FOUNDATION_EXPORT GsonJsonStreamParser *new_GsonJsonStreamParser_initWithJavaIoReader_(JavaIoReader *reader) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonJsonStreamParser *create_GsonJsonStreamParser_initWithJavaIoReader_(JavaIoReader *reader);

J2OBJC_TYPE_LITERAL_HEADER(GsonJsonStreamParser)

@compatibility_alias ComGoogleGsonJsonStreamParser GsonJsonStreamParser;


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#endif // JsonStreamParser_H

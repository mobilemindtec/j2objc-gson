//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/Streams.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Streams")
#ifdef RESTRICT_Streams
#define INCLUDE_ALL_Streams 0
#else
#define INCLUDE_ALL_Streams 1
#endif
#undef RESTRICT_Streams

#if !defined (GsonStreams_) && (INCLUDE_ALL_Streams || defined(INCLUDE_GsonStreams))
#define GsonStreams_

@class GsonJsonElement;
@class GsonJsonReader;
@class GsonJsonWriter;
@class JavaIoWriter;
@protocol JavaLangAppendable;

@interface GsonStreams : NSObject

#pragma mark Public

- (instancetype)init;

+ (GsonJsonElement *)parseWithGsonJsonReader:(GsonJsonReader *)reader;

+ (void)writeWithGsonJsonElement:(GsonJsonElement *)element
              withGsonJsonWriter:(GsonJsonWriter *)writer;

+ (JavaIoWriter *)writerForAppendableWithJavaLangAppendable:(id<JavaLangAppendable>)appendable;

@end

J2OBJC_EMPTY_STATIC_INIT(GsonStreams)

FOUNDATION_EXPORT void GsonStreams_init(GsonStreams *self);

FOUNDATION_EXPORT GsonStreams *new_GsonStreams_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonStreams *create_GsonStreams_init(void);

FOUNDATION_EXPORT GsonJsonElement *GsonStreams_parseWithGsonJsonReader_(GsonJsonReader *reader);

FOUNDATION_EXPORT void GsonStreams_writeWithGsonJsonElement_withGsonJsonWriter_(GsonJsonElement *element, GsonJsonWriter *writer);

FOUNDATION_EXPORT JavaIoWriter *GsonStreams_writerForAppendableWithJavaLangAppendable_(id<JavaLangAppendable> appendable);

J2OBJC_TYPE_LITERAL_HEADER(GsonStreams)

@compatibility_alias ComGoogleGsonInternalStreams GsonStreams;

#endif

#pragma pop_macro("INCLUDE_ALL_Streams")
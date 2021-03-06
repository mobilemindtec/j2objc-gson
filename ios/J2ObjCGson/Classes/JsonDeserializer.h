//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/JsonDeserializer.java
//

#ifndef JsonDeserializer_H
#define JsonDeserializer_H

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#include "J2ObjC_header.h"

@class GsonJsonElement;
@protocol GsonJsonDeserializationContext;
@protocol JavaLangReflectType;

@protocol GsonJsonDeserializer < JavaObject >

- (id)deserializeWithGsonJsonElement:(GsonJsonElement *)json
             withJavaLangReflectType:(id<JavaLangReflectType>)typeOfT
  withGsonJsonDeserializationContext:(id<GsonJsonDeserializationContext>)context;

@end

J2OBJC_EMPTY_STATIC_INIT(GsonJsonDeserializer)

J2OBJC_TYPE_LITERAL_HEADER(GsonJsonDeserializer)

#define ComGoogleGsonJsonDeserializer GsonJsonDeserializer


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#endif // JsonDeserializer_H

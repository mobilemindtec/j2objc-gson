//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/Since.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Since")
#ifdef RESTRICT_Since
#define INCLUDE_ALL_Since 0
#else
#define INCLUDE_ALL_Since 1
#endif
#undef RESTRICT_Since

#if !defined (GsonSince_) && (INCLUDE_ALL_Since || defined(INCLUDE_GsonSince))
#define GsonSince_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol GsonSince < JavaLangAnnotationAnnotation >

@property (readonly) jdouble value;

@end

@interface GsonSince : NSObject < GsonSince > {
 @public
  jdouble value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(GsonSince)

FOUNDATION_EXPORT id<GsonSince> create_GsonSince(jdouble value);

J2OBJC_TYPE_LITERAL_HEADER(GsonSince)

#define ComGoogleGsonAnnotationsSince GsonSince

#endif

#pragma pop_macro("INCLUDE_ALL_Since")

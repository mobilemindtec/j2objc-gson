//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/VersionUtils.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_VersionUtils")
#ifdef RESTRICT_VersionUtils
#define INCLUDE_ALL_VersionUtils 0
#else
#define INCLUDE_ALL_VersionUtils 1
#endif
#undef RESTRICT_VersionUtils

#if !defined (ComGoogleGsonUtilVersionUtils_) && (INCLUDE_ALL_VersionUtils || defined(INCLUDE_ComGoogleGsonUtilVersionUtils))
#define ComGoogleGsonUtilVersionUtils_

@interface ComGoogleGsonUtilVersionUtils : NSObject

#pragma mark Public

- (instancetype)init;

+ (jint)getMajorJavaVersion;

+ (jboolean)isJava9OrLater;

@end

J2OBJC_STATIC_INIT(ComGoogleGsonUtilVersionUtils)

FOUNDATION_EXPORT void ComGoogleGsonUtilVersionUtils_init(ComGoogleGsonUtilVersionUtils *self);

FOUNDATION_EXPORT ComGoogleGsonUtilVersionUtils *new_ComGoogleGsonUtilVersionUtils_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleGsonUtilVersionUtils *create_ComGoogleGsonUtilVersionUtils_init(void);

FOUNDATION_EXPORT jint ComGoogleGsonUtilVersionUtils_getMajorJavaVersion(void);

FOUNDATION_EXPORT jboolean ComGoogleGsonUtilVersionUtils_isJava9OrLater(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleGsonUtilVersionUtils)

#endif

#pragma pop_macro("INCLUDE_ALL_VersionUtils")
//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/JsonPrimitive.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JsonPrimitive")
#ifdef RESTRICT_JsonPrimitive
#define INCLUDE_ALL_JsonPrimitive 0
#else
#define INCLUDE_ALL_JsonPrimitive 1
#endif
#undef RESTRICT_JsonPrimitive

#if !defined (GsonJsonPrimitive_) && (INCLUDE_ALL_JsonPrimitive || defined(INCLUDE_GsonJsonPrimitive))
#define GsonJsonPrimitive_

#define RESTRICT_JsonElement 1
#define INCLUDE_GsonJsonElement 1
#include "JsonElement.h"

@class JavaLangBoolean;
@class JavaLangCharacter;
@class JavaMathBigDecimal;
@class JavaMathBigInteger;

@interface GsonJsonPrimitive : GsonJsonElement

#pragma mark Public

- (instancetype)initWithJavaLangBoolean:(JavaLangBoolean *)bool_;

- (instancetype)initWithJavaLangCharacter:(JavaLangCharacter *)c;

- (instancetype)initWithNSNumber:(NSNumber *)number;

- (instancetype)initWithNSString:(NSString *)string;

- (jboolean)isEqual:(id)obj;

- (JavaMathBigDecimal *)getAsBigDecimal;

- (JavaMathBigInteger *)getAsBigInteger;

- (jboolean)getAsBoolean;

- (jbyte)getAsByte;

- (jchar)getAsCharacter;

- (jdouble)getAsDouble;

- (jfloat)getAsFloat;

- (jint)getAsInt;

- (jlong)getAsLong;

- (NSNumber *)getAsNumber;

- (jshort)getAsShort;

- (NSString *)getAsString;

- (NSUInteger)hash;

- (jboolean)isBoolean;

- (jboolean)isNumber;

- (jboolean)isString;

#pragma mark Package-Private

- (instancetype)initWithId:(id)primitive;

- (GsonJsonPrimitive *)deepCopy;

- (JavaLangBoolean *)getAsBooleanWrapper;

- (void)setValueWithId:(id)primitive;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(GsonJsonPrimitive)

FOUNDATION_EXPORT void GsonJsonPrimitive_initWithJavaLangBoolean_(GsonJsonPrimitive *self, JavaLangBoolean *bool_);

FOUNDATION_EXPORT GsonJsonPrimitive *new_GsonJsonPrimitive_initWithJavaLangBoolean_(JavaLangBoolean *bool_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonJsonPrimitive *create_GsonJsonPrimitive_initWithJavaLangBoolean_(JavaLangBoolean *bool_);

FOUNDATION_EXPORT void GsonJsonPrimitive_initWithNSNumber_(GsonJsonPrimitive *self, NSNumber *number);

FOUNDATION_EXPORT GsonJsonPrimitive *new_GsonJsonPrimitive_initWithNSNumber_(NSNumber *number) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonJsonPrimitive *create_GsonJsonPrimitive_initWithNSNumber_(NSNumber *number);

FOUNDATION_EXPORT void GsonJsonPrimitive_initWithNSString_(GsonJsonPrimitive *self, NSString *string);

FOUNDATION_EXPORT GsonJsonPrimitive *new_GsonJsonPrimitive_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonJsonPrimitive *create_GsonJsonPrimitive_initWithNSString_(NSString *string);

FOUNDATION_EXPORT void GsonJsonPrimitive_initWithJavaLangCharacter_(GsonJsonPrimitive *self, JavaLangCharacter *c);

FOUNDATION_EXPORT GsonJsonPrimitive *new_GsonJsonPrimitive_initWithJavaLangCharacter_(JavaLangCharacter *c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonJsonPrimitive *create_GsonJsonPrimitive_initWithJavaLangCharacter_(JavaLangCharacter *c);

FOUNDATION_EXPORT void GsonJsonPrimitive_initWithId_(GsonJsonPrimitive *self, id primitive);

FOUNDATION_EXPORT GsonJsonPrimitive *new_GsonJsonPrimitive_initWithId_(id primitive) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT GsonJsonPrimitive *create_GsonJsonPrimitive_initWithId_(id primitive);

J2OBJC_TYPE_LITERAL_HEADER(GsonJsonPrimitive)

@compatibility_alias ComGoogleGsonJsonPrimitive GsonJsonPrimitive;

#endif

#pragma pop_macro("INCLUDE_ALL_JsonPrimitive")

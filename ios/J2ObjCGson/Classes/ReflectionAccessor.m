//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/ReflectionAccessor.java
//

#include "J2ObjC_source.h"
#include "PreJava9ReflectionAccessor.h"
#include "ReflectionAccessor.h"
#include "UnsafeReflectionAccessor.h"
#include "VersionUtils.h"
#include "java/lang/reflect/AccessibleObject.h"

inline ComGoogleGsonInternalReflectReflectionAccessor *ComGoogleGsonInternalReflectReflectionAccessor_get_instance(void);
static ComGoogleGsonInternalReflectReflectionAccessor *ComGoogleGsonInternalReflectReflectionAccessor_instance;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleGsonInternalReflectReflectionAccessor, instance, ComGoogleGsonInternalReflectReflectionAccessor *)

J2OBJC_INITIALIZED_DEFN(ComGoogleGsonInternalReflectReflectionAccessor)

@implementation ComGoogleGsonInternalReflectReflectionAccessor

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ComGoogleGsonInternalReflectReflectionAccessor_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (void)makeAccessibleWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject *)ao {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
}

+ (ComGoogleGsonInternalReflectReflectionAccessor *)getInstance {
  return ComGoogleGsonInternalReflectReflectionAccessor_getInstance();
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "V", 0x401, 0, 1, -1, -1, -1, -1 },
    { NULL, "LComGoogleGsonInternalReflectReflectionAccessor;", 0x9, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(makeAccessibleWithJavaLangReflectAccessibleObject:);
  methods[2].selector = @selector(getInstance);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "instance", "LComGoogleGsonInternalReflectReflectionAccessor;", .constantValue.asLong = 0, 0x1a, -1, 2, -1, -1 },
  };
  static const void *ptrTable[] = { "makeAccessible", "LJavaLangReflectAccessibleObject;", &ComGoogleGsonInternalReflectReflectionAccessor_instance };
  static const J2ObjcClassInfo _ComGoogleGsonInternalReflectReflectionAccessor = { "ReflectionAccessor", "com.google.gson.internal.reflect", ptrTable, methods, fields, 7, 0x401, 3, 1, -1, -1, -1, -1, -1 };
  return &_ComGoogleGsonInternalReflectReflectionAccessor;
}

+ (void)initialize {
  if (self == [ComGoogleGsonInternalReflectReflectionAccessor class]) {
    ComGoogleGsonInternalReflectReflectionAccessor_instance = ComGoogleGsonUtilVersionUtils_getMajorJavaVersion() < 9 ? new_ComGoogleGsonInternalReflectPreJava9ReflectionAccessor_init() : (id) new_ComGoogleGsonInternalReflectUnsafeReflectionAccessor_init();
    J2OBJC_SET_INITIALIZED(ComGoogleGsonInternalReflectReflectionAccessor)
  }
}

@end

void ComGoogleGsonInternalReflectReflectionAccessor_init(ComGoogleGsonInternalReflectReflectionAccessor *self) {
  NSObject_init(self);
}

ComGoogleGsonInternalReflectReflectionAccessor *ComGoogleGsonInternalReflectReflectionAccessor_getInstance() {
  ComGoogleGsonInternalReflectReflectionAccessor_initialize();
  return ComGoogleGsonInternalReflectReflectionAccessor_instance;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ComGoogleGsonInternalReflectReflectionAccessor)

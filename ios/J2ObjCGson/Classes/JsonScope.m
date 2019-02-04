//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/JsonScope.java
//

#include "J2ObjC_source.h"
#include "JsonScope.h"

@implementation GsonJsonScope

+ (jint)EMPTY_ARRAY {
  return GsonJsonScope_EMPTY_ARRAY;
}

+ (jint)NONEMPTY_ARRAY {
  return GsonJsonScope_NONEMPTY_ARRAY;
}

+ (jint)EMPTY_OBJECT {
  return GsonJsonScope_EMPTY_OBJECT;
}

+ (jint)DANGLING_NAME {
  return GsonJsonScope_DANGLING_NAME;
}

+ (jint)NONEMPTY_OBJECT {
  return GsonJsonScope_NONEMPTY_OBJECT;
}

+ (jint)EMPTY_DOCUMENT {
  return GsonJsonScope_EMPTY_DOCUMENT;
}

+ (jint)NONEMPTY_DOCUMENT {
  return GsonJsonScope_NONEMPTY_DOCUMENT;
}

+ (jint)CLOSED {
  return GsonJsonScope_CLOSED;
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  GsonJsonScope_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x0, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(init);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "EMPTY_ARRAY", "I", .constantValue.asInt = GsonJsonScope_EMPTY_ARRAY, 0x18, -1, -1, -1, -1 },
    { "NONEMPTY_ARRAY", "I", .constantValue.asInt = GsonJsonScope_NONEMPTY_ARRAY, 0x18, -1, -1, -1, -1 },
    { "EMPTY_OBJECT", "I", .constantValue.asInt = GsonJsonScope_EMPTY_OBJECT, 0x18, -1, -1, -1, -1 },
    { "DANGLING_NAME", "I", .constantValue.asInt = GsonJsonScope_DANGLING_NAME, 0x18, -1, -1, -1, -1 },
    { "NONEMPTY_OBJECT", "I", .constantValue.asInt = GsonJsonScope_NONEMPTY_OBJECT, 0x18, -1, -1, -1, -1 },
    { "EMPTY_DOCUMENT", "I", .constantValue.asInt = GsonJsonScope_EMPTY_DOCUMENT, 0x18, -1, -1, -1, -1 },
    { "NONEMPTY_DOCUMENT", "I", .constantValue.asInt = GsonJsonScope_NONEMPTY_DOCUMENT, 0x18, -1, -1, -1, -1 },
    { "CLOSED", "I", .constantValue.asInt = GsonJsonScope_CLOSED, 0x18, -1, -1, -1, -1 },
  };
  static const J2ObjcClassInfo _GsonJsonScope = { "JsonScope", "com.google.gson.stream", NULL, methods, fields, 7, 0x10, 1, 8, -1, -1, -1, -1, -1 };
  return &_GsonJsonScope;
}

@end

void GsonJsonScope_init(GsonJsonScope *self) {
  NSObject_init(self);
}

GsonJsonScope *new_GsonJsonScope_init() {
  J2OBJC_NEW_IMPL(GsonJsonScope, init)
}

GsonJsonScope *create_GsonJsonScope_init() {
  J2OBJC_CREATE_IMPL(GsonJsonScope, init)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GsonJsonScope)

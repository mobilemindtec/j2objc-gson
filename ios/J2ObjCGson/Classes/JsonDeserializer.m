//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/JsonDeserializer.java
//

#include "J2ObjC_source.h"
#include "JsonDeserializer.h"

@interface GsonJsonDeserializer : NSObject

@end

@implementation GsonJsonDeserializer

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "LNSObject;", 0x401, 0, 1, 2, 3, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(deserializeWithGsonJsonElement:withJavaLangReflectType:withGsonJsonDeserializationContext:);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "deserialize", "LGsonJsonElement;LJavaLangReflectType;LGsonJsonDeserializationContext;", "LGsonJsonParseException;", "(Lcom/google/gson/JsonElement;Ljava/lang/reflect/Type;Lcom/google/gson/JsonDeserializationContext;)TT;", "<T:Ljava/lang/Object;>Ljava/lang/Object;" };
  static const J2ObjcClassInfo _GsonJsonDeserializer = { "JsonDeserializer", "j2objc.gson", ptrTable, methods, NULL, 7, 0x609, 1, 0, -1, -1, -1, 4, -1 };
  return &_GsonJsonDeserializer;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(GsonJsonDeserializer)

J2OBJC_NAME_MAPPING(GsonJsonDeserializer, "j2objc.gson", "Gson")

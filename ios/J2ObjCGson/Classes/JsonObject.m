//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./build/j2objc/java/JsonObject.java
//

#include "J2ObjC_source.h"
#include "JsonArray.h"
#include "JsonElement.h"
#include "JsonNull.h"
#include "JsonObject.h"
#include "JsonPrimitive.h"
#include "LinkedTreeMap.h"
#include "java/lang/Boolean.h"
#include "java/lang/Character.h"
#include "java/util/Map.h"
#include "java/util/Set.h"

@interface GsonJsonObject () {
 @public
  GsonLinkedTreeMap *members_;
}

- (GsonJsonElement *)createJsonElementWithId:(id)value;

@end

J2OBJC_FIELD_SETTER(GsonJsonObject, members_, GsonLinkedTreeMap *)

__attribute__((unused)) static GsonJsonElement *GsonJsonObject_createJsonElementWithId_(GsonJsonObject *self, id value);

@implementation GsonJsonObject

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  GsonJsonObject_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (GsonJsonObject *)deepCopy {
  GsonJsonObject *result = new_GsonJsonObject_init();
  for (id<JavaUtilMap_Entry> __strong entry_ in nil_chk([((GsonLinkedTreeMap *) nil_chk(members_)) entrySet])) {
    [result addWithNSString:[((id<JavaUtilMap_Entry>) nil_chk(entry_)) getKey] withGsonJsonElement:[((GsonJsonElement *) nil_chk([entry_ getValue])) deepCopy]];
  }
  return result;
}

- (void)addWithNSString:(NSString *)property
    withGsonJsonElement:(GsonJsonElement *)value {
  if (value == nil) {
    value = JreLoadStatic(GsonJsonNull, INSTANCE);
  }
  (void) [((GsonLinkedTreeMap *) nil_chk(members_)) putWithId:property withId:value];
}

- (GsonJsonElement *)removeWithNSString:(NSString *)property {
  return [((GsonLinkedTreeMap *) nil_chk(members_)) removeWithId:property];
}

- (void)addPropertyWithNSString:(NSString *)property
                   withNSString:(NSString *)value {
  [self addWithNSString:property withGsonJsonElement:GsonJsonObject_createJsonElementWithId_(self, value)];
}

- (void)addPropertyWithNSString:(NSString *)property
                   withNSNumber:(NSNumber *)value {
  [self addWithNSString:property withGsonJsonElement:GsonJsonObject_createJsonElementWithId_(self, value)];
}

- (void)addPropertyWithNSString:(NSString *)property
            withJavaLangBoolean:(JavaLangBoolean *)value {
  [self addWithNSString:property withGsonJsonElement:GsonJsonObject_createJsonElementWithId_(self, value)];
}

- (void)addPropertyWithNSString:(NSString *)property
          withJavaLangCharacter:(JavaLangCharacter *)value {
  [self addWithNSString:property withGsonJsonElement:GsonJsonObject_createJsonElementWithId_(self, value)];
}

- (GsonJsonElement *)createJsonElementWithId:(id)value {
  return GsonJsonObject_createJsonElementWithId_(self, value);
}

- (id<JavaUtilSet>)entrySet {
  return [((GsonLinkedTreeMap *) nil_chk(members_)) entrySet];
}

- (id<JavaUtilSet>)keySet {
  return [((GsonLinkedTreeMap *) nil_chk(members_)) keySet];
}

- (jint)size {
  return [((GsonLinkedTreeMap *) nil_chk(members_)) size];
}

- (jboolean)hasWithNSString:(NSString *)memberName {
  return [((GsonLinkedTreeMap *) nil_chk(members_)) containsKeyWithId:memberName];
}

- (GsonJsonElement *)getWithNSString:(NSString *)memberName {
  return [((GsonLinkedTreeMap *) nil_chk(members_)) getWithId:memberName];
}

- (GsonJsonPrimitive *)getAsJsonPrimitiveWithNSString:(NSString *)memberName {
  return (GsonJsonPrimitive *) cast_chk([((GsonLinkedTreeMap *) nil_chk(members_)) getWithId:memberName], [GsonJsonPrimitive class]);
}

- (GsonJsonArray *)getAsJsonArrayWithNSString:(NSString *)memberName {
  return (GsonJsonArray *) cast_chk([((GsonLinkedTreeMap *) nil_chk(members_)) getWithId:memberName], [GsonJsonArray class]);
}

- (GsonJsonObject *)getAsJsonObjectWithNSString:(NSString *)memberName {
  return (GsonJsonObject *) cast_chk([((GsonLinkedTreeMap *) nil_chk(members_)) getWithId:memberName], [GsonJsonObject class]);
}

- (jboolean)isEqual:(id)o {
  return (o == self) || ([o isKindOfClass:[GsonJsonObject class]] && [((GsonLinkedTreeMap *) nil_chk(((GsonJsonObject *) nil_chk(((GsonJsonObject *) cast_chk(o, [GsonJsonObject class]))))->members_)) isEqual:members_]);
}

- (NSUInteger)hash {
  return ((jint) [((GsonLinkedTreeMap *) nil_chk(members_)) hash]);
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LGsonJsonObject;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 0, 1, -1, -1, -1, -1 },
    { NULL, "LGsonJsonElement;", 0x1, 2, 3, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 4, 5, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 4, 6, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 4, 7, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 4, 8, -1, -1, -1, -1 },
    { NULL, "LGsonJsonElement;", 0x2, 9, 10, -1, -1, -1, -1 },
    { NULL, "LJavaUtilSet;", 0x1, -1, -1, -1, 11, -1, -1 },
    { NULL, "LJavaUtilSet;", 0x1, -1, -1, -1, 12, -1, -1 },
    { NULL, "I", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, 13, 3, -1, -1, -1, -1 },
    { NULL, "LGsonJsonElement;", 0x1, 14, 3, -1, -1, -1, -1 },
    { NULL, "LGsonJsonPrimitive;", 0x1, 15, 3, -1, -1, -1, -1 },
    { NULL, "LGsonJsonArray;", 0x1, 16, 3, -1, -1, -1, -1 },
    { NULL, "LGsonJsonObject;", 0x1, 17, 3, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, 18, 10, -1, -1, -1, -1 },
    { NULL, "I", 0x1, 19, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(deepCopy);
  methods[2].selector = @selector(addWithNSString:withGsonJsonElement:);
  methods[3].selector = @selector(removeWithNSString:);
  methods[4].selector = @selector(addPropertyWithNSString:withNSString:);
  methods[5].selector = @selector(addPropertyWithNSString:withNSNumber:);
  methods[6].selector = @selector(addPropertyWithNSString:withJavaLangBoolean:);
  methods[7].selector = @selector(addPropertyWithNSString:withJavaLangCharacter:);
  methods[8].selector = @selector(createJsonElementWithId:);
  methods[9].selector = @selector(entrySet);
  methods[10].selector = @selector(keySet);
  methods[11].selector = @selector(size);
  methods[12].selector = @selector(hasWithNSString:);
  methods[13].selector = @selector(getWithNSString:);
  methods[14].selector = @selector(getAsJsonPrimitiveWithNSString:);
  methods[15].selector = @selector(getAsJsonArrayWithNSString:);
  methods[16].selector = @selector(getAsJsonObjectWithNSString:);
  methods[17].selector = @selector(isEqual:);
  methods[18].selector = @selector(hash);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "members_", "LGsonLinkedTreeMap;", .constantValue.asLong = 0, 0x12, -1, -1, 20, -1 },
  };
  static const void *ptrTable[] = { "add", "LNSString;LGsonJsonElement;", "remove", "LNSString;", "addProperty", "LNSString;LNSString;", "LNSString;LNSNumber;", "LNSString;LJavaLangBoolean;", "LNSString;LJavaLangCharacter;", "createJsonElement", "LNSObject;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;Lcom/google/gson/JsonElement;>;>;", "()Ljava/util/Set<Ljava/lang/String;>;", "has", "get", "getAsJsonPrimitive", "getAsJsonArray", "getAsJsonObject", "equals", "hashCode", "Lcom/google/gson/internal/LinkedTreeMap<Ljava/lang/String;Lcom/google/gson/JsonElement;>;" };
  static const J2ObjcClassInfo _GsonJsonObject = { "JsonObject", "j2objc.gson", ptrTable, methods, fields, 7, 0x11, 19, 1, -1, -1, -1, -1, -1 };
  return &_GsonJsonObject;
}

@end

void GsonJsonObject_init(GsonJsonObject *self) {
  GsonJsonElement_init(self);
  self->members_ = new_GsonLinkedTreeMap_init();
}

GsonJsonObject *new_GsonJsonObject_init() {
  J2OBJC_NEW_IMPL(GsonJsonObject, init)
}

GsonJsonObject *create_GsonJsonObject_init() {
  J2OBJC_CREATE_IMPL(GsonJsonObject, init)
}

GsonJsonElement *GsonJsonObject_createJsonElementWithId_(GsonJsonObject *self, id value) {
  return value == nil ? JreLoadStatic(GsonJsonNull, INSTANCE) : (id) new_GsonJsonPrimitive_initWithId_(value);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(GsonJsonObject)

J2OBJC_NAME_MAPPING(GsonJsonObject, "j2objc.gson", "Gson")

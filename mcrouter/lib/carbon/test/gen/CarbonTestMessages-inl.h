/*
 *  Copyright (c) 2017, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */

namespace carbon {
namespace test {

template <class V>
void TestRequest::visitFields(V&& v) {
  if (v.enterMixin(1, "Base", _carbon_simplestruct_)) {
    _carbon_simplestruct_.visitFields(std::forward<V>(v));
  }
  if (!v.leaveMixin()) {
    return;
  }
  if (!v.visitField(1, "key", key_)) {
    return;
  }
  if (!v.visitField(2, "testEnum", testEnum_)) {
    return;
  }
  if (!v.visitField(3, "testBool", testBool_)) {
    return;
  }
  if (!v.visitField(4, "testChar", testChar_)) {
    return;
  }
  if (!v.visitField(5, "testInt8", testInt8_)) {
    return;
  }
  if (!v.visitField(6, "testInt16", testInt16_)) {
    return;
  }
  if (!v.visitField(7, "testInt32", testInt32_)) {
    return;
  }
  if (!v.visitField(8, "testInt64", testInt64_)) {
    return;
  }
  if (!v.visitField(9, "testUInt8", testUInt8_)) {
    return;
  }
  if (!v.visitField(10, "testUInt16", testUInt16_)) {
    return;
  }
  if (!v.visitField(11, "testUInt32", testUInt32_)) {
    return;
  }
  if (!v.visitField(12, "testUInt64", testUInt64_)) {
    return;
  }
  if (!v.visitField(13, "testFloat", testFloat_)) {
    return;
  }
  if (!v.visitField(14, "testDouble", testDouble_)) {
    return;
  }
  if (!v.visitField(15, "testShortString", testShortString_)) {
    return;
  }
  if (!v.visitField(16, "testLongString", testLongString_)) {
    return;
  }
  if (!v.visitField(17, "testIobuf", testIobuf_)) {
    return;
  }
  if (!v.visitField(18, "testStruct", testStruct_)) {
    return;
  }
  if (!v.visitField(19, "testList", testList_)) {
    return;
  }
  if (!v.visitField(20, "testOptionalString", testOptionalString_)) {
    return;
  }
  if (!v.visitField(21, "testOptionalIobuf", testOptionalIobuf_)) {
    return;
  }
  if (!v.visitField(22, "testEnumVec", testEnumVec_)) {
    return;
  }
}

template <class V>
void TestRequest::visitFields(V&& v) const {
  if (v.enterMixin(1, "Base", _carbon_simplestruct_)) {
    _carbon_simplestruct_.visitFields(std::forward<V>(v));
  }
  if (!v.leaveMixin()) {
    return;
  }
  if (!v.visitField(1, "key", key_)) {
    return;
  }
  if (!v.visitField(2, "testEnum", testEnum_)) {
    return;
  }
  if (!v.visitField(3, "testBool", testBool_)) {
    return;
  }
  if (!v.visitField(4, "testChar", testChar_)) {
    return;
  }
  if (!v.visitField(5, "testInt8", testInt8_)) {
    return;
  }
  if (!v.visitField(6, "testInt16", testInt16_)) {
    return;
  }
  if (!v.visitField(7, "testInt32", testInt32_)) {
    return;
  }
  if (!v.visitField(8, "testInt64", testInt64_)) {
    return;
  }
  if (!v.visitField(9, "testUInt8", testUInt8_)) {
    return;
  }
  if (!v.visitField(10, "testUInt16", testUInt16_)) {
    return;
  }
  if (!v.visitField(11, "testUInt32", testUInt32_)) {
    return;
  }
  if (!v.visitField(12, "testUInt64", testUInt64_)) {
    return;
  }
  if (!v.visitField(13, "testFloat", testFloat_)) {
    return;
  }
  if (!v.visitField(14, "testDouble", testDouble_)) {
    return;
  }
  if (!v.visitField(15, "testShortString", testShortString_)) {
    return;
  }
  if (!v.visitField(16, "testLongString", testLongString_)) {
    return;
  }
  if (!v.visitField(17, "testIobuf", testIobuf_)) {
    return;
  }
  if (!v.visitField(18, "testStruct", testStruct_)) {
    return;
  }
  if (!v.visitField(19, "testList", testList_)) {
    return;
  }
  if (!v.visitField(20, "testOptionalString", testOptionalString_)) {
    return;
  }
  if (!v.visitField(21, "testOptionalIobuf", testOptionalIobuf_)) {
    return;
  }
  if (!v.visitField(22, "testEnumVec", testEnumVec_)) {
    return;
  }
}

template <class V>
void TestReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", result_)) {
    return;
  }
}

template <class V>
void TestReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", result_)) {
    return;
  }
}

template <class V>
void TestRequestStringKey::visitFields(V&& v) {
  if (!v.visitField(1, "key", key_)) {
    return;
  }
}

template <class V>
void TestRequestStringKey::visitFields(V&& v) const {
  if (!v.visitField(1, "key", key_)) {
    return;
  }
}

template <class V>
void TestReplyStringKey::visitFields(V&& v) {
  if (!v.visitField(1, "result", result_)) {
    return;
  }
}

template <class V>
void TestReplyStringKey::visitFields(V&& v) const {
  if (!v.visitField(1, "result", result_)) {
    return;
  }
}

} // test
} // carbon

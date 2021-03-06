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
namespace test2 {
namespace util {

template <class V>
void SimpleStruct::visitFields(V&& v) {
  if (!v.visitField(1, "member1", member1_)) {
    return;
  }
}

template <class V>
void SimpleStruct::visitFields(V&& v) const {
  if (!v.visitField(1, "member1", member1_)) {
    return;
  }
}

template <class V>
void YetAnotherRequest::visitFields(V&& v) {
  if (!v.visitField(1, "key", key_)) {
    return;
  }
}

template <class V>
void YetAnotherRequest::visitFields(V&& v) const {
  if (!v.visitField(1, "key", key_)) {
    return;
  }
}

template <class V>
void YetAnotherReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", result_)) {
    return;
  }
}

template <class V>
void YetAnotherReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", result_)) {
    return;
  }
}

} // util
} // test2
} // carbon

// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from janus-client.djinni

#pragma once

#include "djinni_support.hpp"
#include "jsep.hpp"

namespace djinni_generated {

class NativeJsep final : ::djinni::JniInterface<::Janus::Jsep, NativeJsep> {
public:
    using CppType = std::shared_ptr<::Janus::Jsep>;
    using CppOptType = std::shared_ptr<::Janus::Jsep>;
    using JniType = jobject;

    using Boxed = NativeJsep;

    ~NativeJsep();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeJsep>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeJsep>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeJsep();
    friend ::djinni::JniClass<NativeJsep>;
    friend ::djinni::JniInterface<::Janus::Jsep, NativeJsep>;

};

}  // namespace djinni_generated
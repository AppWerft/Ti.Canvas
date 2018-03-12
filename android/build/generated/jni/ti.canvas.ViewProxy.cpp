/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2017 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ti.canvas.ViewProxy.h"

#include "AndroidUtil.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "TypeConverter.h"
#include "V8Util.h"


#include "org.appcelerator.titanium.proxy.TiViewProxy.h"

#define TAG "ViewProxy"

using namespace v8;

namespace ti {
namespace canvas {
	namespace canvas {


Persistent<FunctionTemplate> ViewProxy::proxyTemplate;
jclass ViewProxy::javaClass = NULL;

ViewProxy::ViewProxy() : titanium::Proxy()
{
}

void ViewProxy::bindProxy(Local<Object> exports, Local<Context> context)
{
	Isolate* isolate = context->GetIsolate();

	Local<FunctionTemplate> pt = getProxyTemplate(isolate);

	v8::TryCatch tryCatch(isolate);
	Local<Function> constructor;
	MaybeLocal<Function> maybeConstructor = pt->GetFunction(context);
	if (!maybeConstructor.ToLocal(&constructor)) {
		titanium::V8Util::fatalException(isolate, tryCatch);
		return;
	}

	Local<String> nameSymbol = NEW_SYMBOL(isolate, "View"); // use symbol over string for efficiency
	exports->Set(nameSymbol, constructor);
}

void ViewProxy::dispose(Isolate* isolate)
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Reset();
	}

	titanium::TiViewProxy::dispose(isolate);
}

Local<FunctionTemplate> ViewProxy::getProxyTemplate(Isolate* isolate)
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate.Get(isolate);
	}

	LOGD(TAG, "ViewProxy::getProxyTemplate()");

	javaClass = titanium::JNIUtil::findClass("ti/canvas/ViewProxy");
	EscapableHandleScope scope(isolate);

	// use symbol over string for efficiency
	Local<String> nameSymbol = NEW_SYMBOL(isolate, "View");

	Local<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(isolate,
		titanium::TiViewProxy::getProxyTemplate(isolate)
, javaClass, nameSymbol);

	proxyTemplate.Reset(isolate, t);
	t->Set(titanium::Proxy::inheritSymbol.Get(isolate),
		FunctionTemplate::New(isolate, titanium::Proxy::inherit<ViewProxy>));

	// Method bindings --------------------------------------------------------
	titanium::SetProtoMethod(isolate, t, "drawTextOnPath", ViewProxy::drawTextOnPath);
	titanium::SetProtoMethod(isolate, t, "rotate", ViewProxy::rotate);
	titanium::SetProtoMethod(isolate, t, "setTextStyle", ViewProxy::setTextStyle);
	titanium::SetProtoMethod(isolate, t, "clearShadow", ViewProxy::clearShadow);
	titanium::SetProtoMethod(isolate, t, "closePath", ViewProxy::closePath);
	titanium::SetProtoMethod(isolate, t, "fillRect", ViewProxy::fillRect);
	titanium::SetProtoMethod(isolate, t, "translate", ViewProxy::translate);
	titanium::SetProtoMethod(isolate, t, "fillTextOnPath", ViewProxy::fillTextOnPath);
	titanium::SetProtoMethod(isolate, t, "setTextScaleX", ViewProxy::setTextScaleX);
	titanium::SetProtoMethod(isolate, t, "drawRoundRect", ViewProxy::drawRoundRect);
	titanium::SetProtoMethod(isolate, t, "setShadowColor", ViewProxy::setShadowColor);
	titanium::SetProtoMethod(isolate, t, "setStrokeStyle", ViewProxy::setStrokeStyle);
	titanium::SetProtoMethod(isolate, t, "setTextSkewX", ViewProxy::setTextSkewX);
	titanium::SetProtoMethod(isolate, t, "drawText", ViewProxy::drawText);
	titanium::SetProtoMethod(isolate, t, "setLineJoin", ViewProxy::setLineJoin);
	titanium::SetProtoMethod(isolate, t, "setTextAlign", ViewProxy::setTextAlign);
	titanium::SetProtoMethod(isolate, t, "setAlpha", ViewProxy::setAlpha);
	titanium::SetProtoMethod(isolate, t, "addRect", ViewProxy::addRect);
	titanium::SetProtoMethod(isolate, t, "fill", ViewProxy::fill);
	titanium::SetProtoMethod(isolate, t, "setShadowBlur", ViewProxy::setShadowBlur);
	titanium::SetProtoMethod(isolate, t, "setLineCap", ViewProxy::setLineCap);
	titanium::SetProtoMethod(isolate, t, "reset", ViewProxy::reset);
	titanium::SetProtoMethod(isolate, t, "setFillStyle", ViewProxy::setFillStyle);
	titanium::SetProtoMethod(isolate, t, "setMiterLimit", ViewProxy::setMiterLimit);
	titanium::SetProtoMethod(isolate, t, "begin", ViewProxy::begin);
	titanium::SetProtoMethod(isolate, t, "toggleInverseFillType", ViewProxy::toggleInverseFillType);
	titanium::SetProtoMethod(isolate, t, "setFillType", ViewProxy::setFillType);
	titanium::SetProtoMethod(isolate, t, "drawPoint", ViewProxy::drawPoint);
	titanium::SetProtoMethod(isolate, t, "setDither", ViewProxy::setDither);
	titanium::SetProtoMethod(isolate, t, "setStrokeWidth", ViewProxy::setStrokeWidth);
	titanium::SetProtoMethod(isolate, t, "save", ViewProxy::save);
	titanium::SetProtoMethod(isolate, t, "lineTo", ViewProxy::lineTo);
	titanium::SetProtoMethod(isolate, t, "scale", ViewProxy::scale);
	titanium::SetProtoMethod(isolate, t, "setLineWidth", ViewProxy::setLineWidth);
	titanium::SetProtoMethod(isolate, t, "setGlobalAlpha", ViewProxy::setGlobalAlpha);
	titanium::SetProtoMethod(isolate, t, "arc", ViewProxy::arc);
	titanium::SetProtoMethod(isolate, t, "setTypeface", ViewProxy::setTypeface);
	titanium::SetProtoMethod(isolate, t, "setUnderlineText", ViewProxy::setUnderlineText);
	titanium::SetProtoMethod(isolate, t, "strokeRect", ViewProxy::strokeRect);
	titanium::SetProtoMethod(isolate, t, "fillText", ViewProxy::fillText);
	titanium::SetProtoMethod(isolate, t, "arcTo", ViewProxy::arcTo);
	titanium::SetProtoMethod(isolate, t, "strokeText", ViewProxy::strokeText);
	titanium::SetProtoMethod(isolate, t, "restore", ViewProxy::restore);
	titanium::SetProtoMethod(isolate, t, "beginPath", ViewProxy::beginPath);
	titanium::SetProtoMethod(isolate, t, "drawCircle", ViewProxy::drawCircle);
	titanium::SetProtoMethod(isolate, t, "clear", ViewProxy::clear);
	titanium::SetProtoMethod(isolate, t, "quadraticCurveTo", ViewProxy::quadraticCurveTo);
	titanium::SetProtoMethod(isolate, t, "drawArc", ViewProxy::drawArc);
	titanium::SetProtoMethod(isolate, t, "drawLine", ViewProxy::drawLine);
	titanium::SetProtoMethod(isolate, t, "bezierCurveTo", ViewProxy::bezierCurveTo);
	titanium::SetProtoMethod(isolate, t, "stroke", ViewProxy::stroke);
	titanium::SetProtoMethod(isolate, t, "setStrikeThruText", ViewProxy::setStrikeThruText);
	titanium::SetProtoMethod(isolate, t, "clearRect", ViewProxy::clearRect);
	titanium::SetProtoMethod(isolate, t, "setTextSize", ViewProxy::setTextSize);
	titanium::SetProtoMethod(isolate, t, "drawImage", ViewProxy::drawImage);
	titanium::SetProtoMethod(isolate, t, "setShadowOffsetX", ViewProxy::setShadowOffsetX);
	titanium::SetProtoMethod(isolate, t, "setAntiAlias", ViewProxy::setAntiAlias);
	titanium::SetProtoMethod(isolate, t, "drawRect", ViewProxy::drawRect);
	titanium::SetProtoMethod(isolate, t, "getContext", ViewProxy::getContext);
	titanium::SetProtoMethod(isolate, t, "clip", ViewProxy::clip);
	titanium::SetProtoMethod(isolate, t, "setShadowOffsetY", ViewProxy::setShadowOffsetY);
	titanium::SetProtoMethod(isolate, t, "moveTo", ViewProxy::moveTo);

	Local<ObjectTemplate> prototypeTemplate = t->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = t->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "underlineText"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_underlineText,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "strokeWidth"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_strokeWidth,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "shadowOffsetX"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_shadowOffsetX,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "shadowOffsetY"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_shadowOffsetY,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "dither"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_dither,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "shadowBlur"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_shadowBlur,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "lineWidth"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_lineWidth,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "fillType"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_fillType,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "globalAlpha"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_globalAlpha,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "alpha"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_alpha,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "context"),
			ViewProxy::getter_context,
			titanium::Proxy::onPropertyChanged,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "textSkewX"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_textSkewX,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "shadowColor"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_shadowColor,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "strokeStyle"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_strokeStyle,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "textSize"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_textSize,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "textAlign"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_textAlign,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "lineJoin"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_lineJoin,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "miterLimit"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_miterLimit,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "typeface"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_typeface,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "strikeThruText"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_strikeThruText,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "textScaleX"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_textScaleX,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "lineCap"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_lineCap,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "fillStyle"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_fillStyle,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "antiAlias"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_antiAlias,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "textStyle"),
			titanium::Proxy::getProperty,
			ViewProxy::setter_textStyle,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);

	// Accessors --------------------------------------------------------------

	return scope.Escape(t);
}

// Methods --------------------------------------------------------------------
void ViewProxy::drawTextOnPath(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "drawTextOnPath()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "drawTextOnPath", "(Ljava/lang/String;FF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'drawTextOnPath' with signature '(Ljava/lang/String;FF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 3) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "drawTextOnPath: Invalid number of arguments. Expected 3 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[3];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::rotate(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "rotate()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "rotate", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'rotate' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "rotate: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setTextStyle(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setTextStyle()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTextStyle", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTextStyle' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setTextStyle: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::clearShadow(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "clearShadow()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "clearShadow", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'clearShadow' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::closePath(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "closePath()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "closePath", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'closePath' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::fillRect(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "fillRect()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "fillRect", "(FFFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'fillRect' with signature '(FFFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 4) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "fillRect: Invalid number of arguments. Expected 4 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[4];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::translate(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "translate()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "translate", "(FF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'translate' with signature '(FF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 2) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "translate: Invalid number of arguments. Expected 2 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[2];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::fillTextOnPath(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "fillTextOnPath()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "fillTextOnPath", "(Ljava/lang/String;FF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'fillTextOnPath' with signature '(Ljava/lang/String;FF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 3) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "fillTextOnPath: Invalid number of arguments. Expected 3 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[3];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setTextScaleX(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setTextScaleX()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTextScaleX", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTextScaleX' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setTextScaleX: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::drawRoundRect(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "drawRoundRect()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "drawRoundRect", "(FFFFFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'drawRoundRect' with signature '(FFFFFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 6) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "drawRoundRect: Invalid number of arguments. Expected 6 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[6];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[4]) && !args[4]->IsUndefined()) || args[4]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[4]->IsNull()) {
		Local<Number> arg_4 = args[4]->ToNumber(isolate);
		jArguments[4].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_4);
	} else {
		jArguments[4].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[5]) && !args[5]->IsUndefined()) || args[5]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[5]->IsNull()) {
		Local<Number> arg_5 = args[5]->ToNumber(isolate);
		jArguments[5].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_5);
	} else {
		jArguments[5].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setShadowColor(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setShadowColor()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setShadowColor", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setShadowColor' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setShadowColor: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setStrokeStyle(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setStrokeStyle()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setStrokeStyle", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setStrokeStyle' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setStrokeStyle: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setTextSkewX(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setTextSkewX()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTextSkewX", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTextSkewX' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setTextSkewX: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::drawText(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "drawText()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "drawText", "(Ljava/lang/String;FF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'drawText' with signature '(Ljava/lang/String;FF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 3) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "drawText: Invalid number of arguments. Expected 3 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[3];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setLineJoin(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setLineJoin()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setLineJoin", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setLineJoin' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setLineJoin: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setTextAlign(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setTextAlign()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTextAlign", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTextAlign' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setTextAlign: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setAlpha(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setAlpha()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setAlpha", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setAlpha' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setAlpha: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::addRect(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "addRect()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "addRect", "(FFFFI)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'addRect' with signature '(FFFFI)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 4) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "addRect: Invalid number of arguments. Expected 4 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[5];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	
	if (args.Length() <= 4) {
		jArguments[4].i = -1;

	} else {

		if ((titanium::V8Util::isNaN(isolate, args[4]) && !args[4]->IsUndefined()) || args[4]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[4]->IsNull()) {
		Local<Number> arg_4 = args[4]->ToNumber(isolate);
		jArguments[4].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_4);
	} else {
		jArguments[4].i = NULL;
	}
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::fill(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "fill()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "fill", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'fill' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setShadowBlur(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setShadowBlur()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setShadowBlur", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setShadowBlur' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setShadowBlur: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setLineCap(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setLineCap()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setLineCap", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setLineCap' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setLineCap: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::reset(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "reset()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "reset", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'reset' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setFillStyle(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setFillStyle()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setFillStyle", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setFillStyle' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setFillStyle: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setMiterLimit(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setMiterLimit()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setMiterLimit", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setMiterLimit' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setMiterLimit: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::begin(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "begin()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "begin", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'begin' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::toggleInverseFillType(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "toggleInverseFillType()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "toggleInverseFillType", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'toggleInverseFillType' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setFillType(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setFillType()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setFillType", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setFillType' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setFillType: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::drawPoint(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "drawPoint()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "drawPoint", "(FF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'drawPoint' with signature '(FF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 2) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "drawPoint: Invalid number of arguments. Expected 2 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[2];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setDither(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setDither()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setDither", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setDither' with signature '(Z)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setDither: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	if (!args[0]->IsBoolean() && !args[0]->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
		titanium::JSException::Error(isolate, error);
		return;
	}
	

	if (!args[0]->IsNull()) {
		Local<Boolean> arg_0 = args[0]->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setStrokeWidth(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setStrokeWidth()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setStrokeWidth", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setStrokeWidth' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setStrokeWidth: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::save(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "save()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "save", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'save' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::lineTo(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "lineTo()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "lineTo", "(FF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'lineTo' with signature '(FF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 2) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "lineTo: Invalid number of arguments. Expected 2 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[2];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::scale(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "scale()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "scale", "(FF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'scale' with signature '(FF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 2) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "scale: Invalid number of arguments. Expected 2 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[2];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setLineWidth(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setLineWidth()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setLineWidth", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setLineWidth' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setLineWidth: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setGlobalAlpha(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setGlobalAlpha()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setGlobalAlpha", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setGlobalAlpha' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setGlobalAlpha: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::arc(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "arc()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "arc", "(FFFFFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'arc' with signature '(FFFFFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 6) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "arc: Invalid number of arguments. Expected 6 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[6];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[4]) && !args[4]->IsUndefined()) || args[4]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[4]->IsNull()) {
		Local<Number> arg_4 = args[4]->ToNumber(isolate);
		jArguments[4].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_4);
	} else {
		jArguments[4].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[5]) && !args[5]->IsUndefined()) || args[5]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[5]->IsNull()) {
		Local<Number> arg_5 = args[5]->ToNumber(isolate);
		jArguments[5].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_5);
	} else {
		jArguments[5].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setTypeface(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setTypeface()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTypeface", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTypeface' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setTypeface: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setUnderlineText(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setUnderlineText()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setUnderlineText", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setUnderlineText' with signature '(Z)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setUnderlineText: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	if (!args[0]->IsBoolean() && !args[0]->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
		titanium::JSException::Error(isolate, error);
		return;
	}
	

	if (!args[0]->IsNull()) {
		Local<Boolean> arg_0 = args[0]->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::strokeRect(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "strokeRect()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "strokeRect", "(IIII)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'strokeRect' with signature '(IIII)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 4) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "strokeRect: Invalid number of arguments. Expected 4 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[4];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_1);
	} else {
		jArguments[1].i = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_2);
	} else {
		jArguments[2].i = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_3);
	} else {
		jArguments[3].i = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::fillText(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "fillText()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "fillText", "(Ljava/lang/String;FF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'fillText' with signature '(Ljava/lang/String;FF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 3) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "fillText: Invalid number of arguments. Expected 3 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[3];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::arcTo(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "arcTo()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "arcTo", "(FFFFFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'arcTo' with signature '(FFFFFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 6) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "arcTo: Invalid number of arguments. Expected 6 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[6];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[4]) && !args[4]->IsUndefined()) || args[4]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[4]->IsNull()) {
		Local<Number> arg_4 = args[4]->ToNumber(isolate);
		jArguments[4].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_4);
	} else {
		jArguments[4].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[5]) && !args[5]->IsUndefined()) || args[5]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[5]->IsNull()) {
		Local<Number> arg_5 = args[5]->ToNumber(isolate);
		jArguments[5].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_5);
	} else {
		jArguments[5].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::strokeText(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "strokeText()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "strokeText", "(Ljava/lang/String;FF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'strokeText' with signature '(Ljava/lang/String;FF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 3) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "strokeText: Invalid number of arguments. Expected 3 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[3];




	

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::restore(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "restore()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "restore", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'restore' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::beginPath(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "beginPath()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "beginPath", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'beginPath' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::drawCircle(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "drawCircle()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "drawCircle", "(FFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'drawCircle' with signature '(FFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 3) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "drawCircle: Invalid number of arguments. Expected 3 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[3];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::clear(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "clear()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "clear", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'clear' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::quadraticCurveTo(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "quadraticCurveTo()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "quadraticCurveTo", "(FFFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'quadraticCurveTo' with signature '(FFFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 4) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "quadraticCurveTo: Invalid number of arguments. Expected 4 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[4];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::drawArc(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "drawArc()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "drawArc", "(FFFFFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'drawArc' with signature '(FFFFFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 6) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "drawArc: Invalid number of arguments. Expected 6 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[6];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[4]) && !args[4]->IsUndefined()) || args[4]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[4]->IsNull()) {
		Local<Number> arg_4 = args[4]->ToNumber(isolate);
		jArguments[4].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_4);
	} else {
		jArguments[4].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[5]) && !args[5]->IsUndefined()) || args[5]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[5]->IsNull()) {
		Local<Number> arg_5 = args[5]->ToNumber(isolate);
		jArguments[5].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_5);
	} else {
		jArguments[5].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::drawLine(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "drawLine()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "drawLine", "(FFFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'drawLine' with signature '(FFFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 4) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "drawLine: Invalid number of arguments. Expected 4 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[4];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::bezierCurveTo(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "bezierCurveTo()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "bezierCurveTo", "(FFFFFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'bezierCurveTo' with signature '(FFFFFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 6) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "bezierCurveTo: Invalid number of arguments. Expected 6 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[6];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[4]) && !args[4]->IsUndefined()) || args[4]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[4]->IsNull()) {
		Local<Number> arg_4 = args[4]->ToNumber(isolate);
		jArguments[4].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_4);
	} else {
		jArguments[4].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[5]) && !args[5]->IsUndefined()) || args[5]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[5]->IsNull()) {
		Local<Number> arg_5 = args[5]->ToNumber(isolate);
		jArguments[5].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_5);
	} else {
		jArguments[5].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::stroke(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "stroke()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "stroke", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'stroke' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setStrikeThruText(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setStrikeThruText()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setStrikeThruText", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setStrikeThruText' with signature '(Z)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setStrikeThruText: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	if (!args[0]->IsBoolean() && !args[0]->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
		titanium::JSException::Error(isolate, error);
		return;
	}
	

	if (!args[0]->IsNull()) {
		Local<Boolean> arg_0 = args[0]->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::clearRect(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "clearRect()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "clearRect", "(IIII)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'clearRect' with signature '(IIII)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 4) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "clearRect: Invalid number of arguments. Expected 4 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[4];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_1);
	} else {
		jArguments[1].i = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_2);
	} else {
		jArguments[2].i = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_3);
	} else {
		jArguments[3].i = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setTextSize(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setTextSize()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTextSize", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTextSize' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setTextSize: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::drawImage(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "drawImage()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "drawImage", "(Ljava/lang/Object;FFFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'drawImage' with signature '(Ljava/lang/Object;FFFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 5) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "drawImage: Invalid number of arguments. Expected 5 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[5];




	bool isNew_0;

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(
				isolate,
				env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[4]) && !args[4]->IsUndefined()) || args[4]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[4]->IsNull()) {
		Local<Number> arg_4 = args[4]->ToNumber(isolate);
		jArguments[4].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_4);
	} else {
		jArguments[4].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setShadowOffsetX(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setShadowOffsetX()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setShadowOffsetX", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setShadowOffsetX' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setShadowOffsetX: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setAntiAlias(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setAntiAlias()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setAntiAlias", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setAntiAlias' with signature '(Z)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setAntiAlias: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	if (!args[0]->IsBoolean() && !args[0]->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
		titanium::JSException::Error(isolate, error);
		return;
	}
	

	if (!args[0]->IsNull()) {
		Local<Boolean> arg_0 = args[0]->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::drawRect(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "drawRect()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "drawRect", "(FFFF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'drawRect' with signature '(FFFF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 4) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "drawRect: Invalid number of arguments. Expected 4 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[4];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[2]) && !args[2]->IsUndefined()) || args[2]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[2]->IsNull()) {
		Local<Number> arg_2 = args[2]->ToNumber(isolate);
		jArguments[2].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_2);
	} else {
		jArguments[2].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[3]) && !args[3]->IsUndefined()) || args[3]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[3]->IsNull()) {
		Local<Number> arg_3 = args[3]->ToNumber(isolate);
		jArguments[3].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_3);
	} else {
		jArguments[3].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::getContext(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getContext()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "getContext", "()Lti/canvas/ViewProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getContext' with signature '()Lti/canvas/ViewProxy;'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}
void ViewProxy::clip(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "clip()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "clip", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'clip' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::setShadowOffsetY(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setShadowOffsetY()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setShadowOffsetY", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setShadowOffsetY' with signature '(F)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setShadowOffsetY: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void ViewProxy::moveTo(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "moveTo()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "moveTo", "(FF)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'moveTo' with signature '(FF)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);

	if (args.Length() < 2) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "moveTo: Invalid number of arguments. Expected 2 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[2];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	

		if ((titanium::V8Util::isNaN(isolate, args[1]) && !args[1]->IsUndefined()) || args[1]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[1]->IsNull()) {
		Local<Number> arg_1 = args[1]->ToNumber(isolate);
		jArguments[1].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_1);
	} else {
		jArguments[1].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}

// Dynamic property accessors -------------------------------------------------


void ViewProxy::setter_underlineText(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, underlineText wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setUnderlineText", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setUnderlineText' with signature '(Z)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	if (!value->IsBoolean() && !value->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
	}
	

	if (!value->IsNull()) {
		Local<Boolean> arg_0 = value->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_strokeWidth(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, strokeWidth wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setStrokeWidth", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setStrokeWidth' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_shadowOffsetX(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, shadowOffsetX wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setShadowOffsetX", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setShadowOffsetX' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_shadowOffsetY(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, shadowOffsetY wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setShadowOffsetY", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setShadowOffsetY' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_dither(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, dither wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setDither", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setDither' with signature '(Z)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	if (!value->IsBoolean() && !value->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
	}
	

	if (!value->IsNull()) {
		Local<Boolean> arg_0 = value->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_shadowBlur(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, shadowBlur wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setShadowBlur", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setShadowBlur' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_lineWidth(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, lineWidth wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setLineWidth", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setLineWidth' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_fillType(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, fillType wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setFillType", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setFillType' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_globalAlpha(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, globalAlpha wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setGlobalAlpha", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setGlobalAlpha' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_alpha(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, alpha wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setAlpha", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setAlpha' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}


void ViewProxy::getter_context(Local<Name> property, const PropertyCallbackInfo<Value>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "getContext", "()Lti/canvas/ViewProxy;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getContext' with signature '()Lti/canvas/ViewProxy;'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());

	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jobject jResult = (jobject)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Value> v8Result = titanium::TypeConverter::javaObjectToJsValue(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}




void ViewProxy::setter_textSkewX(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, textSkewX wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTextSkewX", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTextSkewX' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_shadowColor(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, shadowColor wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setShadowColor", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setShadowColor' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_strokeStyle(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, strokeStyle wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setStrokeStyle", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setStrokeStyle' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_textSize(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, textSize wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTextSize", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTextSize' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_textAlign(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, textAlign wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTextAlign", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTextAlign' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_lineJoin(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, lineJoin wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setLineJoin", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setLineJoin' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_miterLimit(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, miterLimit wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setMiterLimit", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setMiterLimit' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_typeface(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, typeface wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTypeface", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTypeface' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_strikeThruText(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, strikeThruText wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setStrikeThruText", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setStrikeThruText' with signature '(Z)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	if (!value->IsBoolean() && !value->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
	}
	

	if (!value->IsNull()) {
		Local<Boolean> arg_0 = value->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_textScaleX(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, textScaleX wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTextScaleX", "(F)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTextScaleX' with signature '(F)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].f =
			titanium::TypeConverter::jsNumberToJavaFloat(
				env, arg_0);
	} else {
		jArguments[0].f = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_lineCap(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, lineCap wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setLineCap", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setLineCap' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_fillStyle(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, fillStyle wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setFillStyle", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setFillStyle' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_antiAlias(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, antiAlias wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setAntiAlias", "(Z)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setAntiAlias' with signature '(Z)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	if (!value->IsBoolean() && !value->IsNull()) {
		const char *error = "Invalid value, expected type Boolean.";
		LOGE(TAG, error);
	}
	

	if (!value->IsNull()) {
		Local<Boolean> arg_0 = value->ToBoolean(isolate);
		jArguments[0].z =
			titanium::TypeConverter::jsBooleanToJavaBoolean(
				env, arg_0);
	} else {
		jArguments[0].z = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



void ViewProxy::setter_textStyle(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, textStyle wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(ViewProxy::javaClass, "setTextStyle", "(Ljava/lang/String;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTextStyle' with signature '(Ljava/lang/String;)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

	if (!value->IsNull()) {
		Local<Value> arg_0 = value;
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaString(
				isolate,
				env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	Proxy::setProperty(property, value, args);
}



	} // namespace canvas
} // canvas
} // ti

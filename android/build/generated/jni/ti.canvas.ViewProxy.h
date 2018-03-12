/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

namespace ti {
namespace canvas {
	namespace canvas {

class ViewProxy : public titanium::Proxy
{
public:
	explicit ViewProxy();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void drawTextOnPath(const v8::FunctionCallbackInfo<v8::Value>&);
	static void rotate(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setTextStyle(const v8::FunctionCallbackInfo<v8::Value>&);
	static void clearShadow(const v8::FunctionCallbackInfo<v8::Value>&);
	static void closePath(const v8::FunctionCallbackInfo<v8::Value>&);
	static void fillRect(const v8::FunctionCallbackInfo<v8::Value>&);
	static void translate(const v8::FunctionCallbackInfo<v8::Value>&);
	static void fillTextOnPath(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setTextScaleX(const v8::FunctionCallbackInfo<v8::Value>&);
	static void drawRoundRect(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setShadowColor(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setStrokeStyle(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setTextSkewX(const v8::FunctionCallbackInfo<v8::Value>&);
	static void drawText(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setLineJoin(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setTextAlign(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setAlpha(const v8::FunctionCallbackInfo<v8::Value>&);
	static void addRect(const v8::FunctionCallbackInfo<v8::Value>&);
	static void fill(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setShadowBlur(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setLineCap(const v8::FunctionCallbackInfo<v8::Value>&);
	static void reset(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setFillStyle(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setMiterLimit(const v8::FunctionCallbackInfo<v8::Value>&);
	static void begin(const v8::FunctionCallbackInfo<v8::Value>&);
	static void toggleInverseFillType(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setFillType(const v8::FunctionCallbackInfo<v8::Value>&);
	static void drawPoint(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setDither(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setStrokeWidth(const v8::FunctionCallbackInfo<v8::Value>&);
	static void save(const v8::FunctionCallbackInfo<v8::Value>&);
	static void lineTo(const v8::FunctionCallbackInfo<v8::Value>&);
	static void scale(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setLineWidth(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setGlobalAlpha(const v8::FunctionCallbackInfo<v8::Value>&);
	static void arc(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setTypeface(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setUnderlineText(const v8::FunctionCallbackInfo<v8::Value>&);
	static void strokeRect(const v8::FunctionCallbackInfo<v8::Value>&);
	static void fillText(const v8::FunctionCallbackInfo<v8::Value>&);
	static void arcTo(const v8::FunctionCallbackInfo<v8::Value>&);
	static void strokeText(const v8::FunctionCallbackInfo<v8::Value>&);
	static void restore(const v8::FunctionCallbackInfo<v8::Value>&);
	static void beginPath(const v8::FunctionCallbackInfo<v8::Value>&);
	static void drawCircle(const v8::FunctionCallbackInfo<v8::Value>&);
	static void clear(const v8::FunctionCallbackInfo<v8::Value>&);
	static void quadraticCurveTo(const v8::FunctionCallbackInfo<v8::Value>&);
	static void drawArc(const v8::FunctionCallbackInfo<v8::Value>&);
	static void drawLine(const v8::FunctionCallbackInfo<v8::Value>&);
	static void bezierCurveTo(const v8::FunctionCallbackInfo<v8::Value>&);
	static void stroke(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setStrikeThruText(const v8::FunctionCallbackInfo<v8::Value>&);
	static void clearRect(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setTextSize(const v8::FunctionCallbackInfo<v8::Value>&);
	static void drawImage(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setShadowOffsetX(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setAntiAlias(const v8::FunctionCallbackInfo<v8::Value>&);
	static void drawRect(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getContext(const v8::FunctionCallbackInfo<v8::Value>&);
	static void clip(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setShadowOffsetY(const v8::FunctionCallbackInfo<v8::Value>&);
	static void moveTo(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void setter_underlineText(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_strokeWidth(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_shadowOffsetX(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_shadowOffsetY(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_dither(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_shadowBlur(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_lineWidth(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_fillType(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_globalAlpha(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_alpha(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_context(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_textSkewX(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_shadowColor(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_strokeStyle(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_textSize(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_textAlign(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_lineJoin(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_miterLimit(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_typeface(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_strikeThruText(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_textScaleX(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_lineCap(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_fillStyle(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_antiAlias(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void setter_textStyle(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);

};

	} // namespace canvas
} // canvas
} // ti

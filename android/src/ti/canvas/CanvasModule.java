/**
 * This file was auto-generated by the Titanium Module SDK helper for Android
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 */
package ti.canvas;

import org.appcelerator.kroll.KrollModule;
import org.appcelerator.kroll.annotations.Kroll;
import org.appcelerator.titanium.TiApplication;

import android.graphics.Paint;

@Kroll.module(name = "Canvas", id = "ti.canvas")
public class CanvasModule extends KrollModule {
	// Module constants
	@Kroll.constant
	public static final int VERTEX_MODE_TRIANGLES = 0;
	@Kroll.constant
	public static final int VERTEX_MODE_TRIANGLES_FAN = 1;
	@Kroll.constant
	public static final int VERTEX_MODE_TRIANGLES_STRIP = 2;
	// Constructor
	public CanvasModule() {
		super();
	}

	@Kroll.onAppCreate
	public static void onAppCreate(TiApplication app) {
	}
}
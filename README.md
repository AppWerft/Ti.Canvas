# Ti.Canvas

## Usage

```
var CanvasView = require("ti.canvas").createView();
CanvasView.beginPath();
CanvasView.setAntiAlias(true);
CanvasView.setTextSize(10);
CanvasView.fillStyle = '#aaaaaa';
CanvasView.fillRect(0, 0, 100, 200);
```

Please look into sources for available methods.

The [Hyperloop example app](https://github.com/appcelerator/hyperloop-examples) contains a hyperloop version:

[iOS](https://github.com/appcelerator/hyperloop-examples/blob/master/app/controllers/ios/drawrect.js) | [Android](https://github.com/appcelerator/hyperloop-examples/blob/master/app/controllers/android/drawrect.js)

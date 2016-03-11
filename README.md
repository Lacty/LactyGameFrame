
# LactyGameFrame

### >>>
this is Game Framework.

### Graphic
- OpenGL
- GLFW
- FTGL
- FreeType

### Sounds
- OpenAL

### Parameter
- AntTweakBar


## <<<
Lacty/GetSpeed2を作るにあたって作成したフレームワークです
CMakeに対応しています（vs2015, xcodeディレクトリ参照

マウス、キー入力はAppNativeが管理
```
  AppNative app; // 引数省略
  if (app.isPressKey(GLFW_KEY_W))
    std::cout << "press W key";

  std::cout << "mouse pos = " << app.mousePos();
```

文字の描画
```
  Font font(loadAsset("font.ttf"));
  font.setSize(50);
  font.draw("Test", Vec2f(100, 300));
```

などなど。ω。
drawXXX系はまだまだ実装しきれていません

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
Lacty/GetSpeed2�����ɂ������č쐬�����t���[�����[�N�ł�
CMake�ɑΉ����Ă��܂��ivs2015, xcode�f�B���N�g���Q��

�}�E�X�A�L�[���͂�AppNative���Ǘ�
```
  AppNative app; // �����ȗ�
  if (app.isPressKey(GLFW_KEY_W))
    std::cout << "press W key";

  std::cout << "mouse pos = " << app.mousePos();
```

�����̕`��
```
  Font font(loadAsset("font.ttf"));
  font.setSize(50);
  font.draw("Test", Vec2f(100, 300));
```

�ȂǂȂǁB�ցB
drawXXX�n�͂܂��܂�����������Ă��܂���
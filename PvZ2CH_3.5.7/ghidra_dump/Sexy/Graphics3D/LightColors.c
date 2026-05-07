// Class: Sexy::Graphics3D::LightColors


/* Sexy::Graphics3D::LightColors::LightColors() */

void __thiscall Sexy::Graphics3D::LightColors::LightColors(LightColors *this)

{
  Color::Color((Color *)this,1);
  Color::Color((Color *)(this + 0x10),0);
  Color::Color((Color *)(this + 0x20),0);
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  return;
}


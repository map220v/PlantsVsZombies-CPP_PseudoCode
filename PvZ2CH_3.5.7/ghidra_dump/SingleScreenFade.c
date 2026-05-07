// Class: SingleScreenFade


/* SingleScreenFade::SingleScreenFade() */

void __thiscall SingleScreenFade::SingleScreenFade(SingleScreenFade *this)

{
  *(undefined4 *)this = 0;
  Sexy::Color::Color((Color *)(this + 4));
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* SingleScreenFade::SingleScreenFade(SingleScreenFade const&) */

void __thiscall SingleScreenFade::SingleScreenFade(SingleScreenFade *this,SingleScreenFade *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Insets::Insets((Insets *)(this + 4),(Insets *)(param_1 + 4));
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar3;
  return;
}


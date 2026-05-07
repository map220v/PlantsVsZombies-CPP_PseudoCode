// Class: AndroidAppOrientationChangeEvent


/* AndroidAppOrientationChangeEvent::AndroidAppOrientationChangeEvent(Sexy::UI_ORIENTATION,
   Sexy::UI_ORIENTATION, int, int) */

void __thiscall
AndroidAppOrientationChangeEvent::AndroidAppOrientationChangeEvent
          (AndroidAppOrientationChangeEvent *this,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5)

{
  AndroidAppEvent::AndroidAppEvent((AndroidAppEvent *)this,1);
  *(undefined4 *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x14) = param_4;
  *(undefined ***)this = &PTR_nop_06a32c30;
  *(undefined4 *)(this + 0x18) = param_5;
  return;
}


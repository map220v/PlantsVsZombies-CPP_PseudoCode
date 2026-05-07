// Class: WalkPixelsPerSecondHelper


/* WalkPixelsPerSecondHelper::WalkPixelsPerSecondHelper(float&, Sexy::PopAnim const*) */

void __thiscall
WalkPixelsPerSecondHelper::WalkPixelsPerSecondHelper
          (WalkPixelsPerSecondHelper *this,float *param_1,PopAnim *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x50);
  *(float **)this = param_1;
  uVar1 = *(undefined4 *)(lVar2 + 0xc);
  *(PopAnim **)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = uVar1;
  FUN_042fffcc(0xbf800000,param_1);
  return;
}


/* WalkPixelsPerSecondHelper::~WalkPixelsPerSecondHelper() */

void __thiscall
WalkPixelsPerSecondHelper::~WalkPixelsPerSecondHelper(WalkPixelsPerSecondHelper *this)

{
  *(undefined4 *)(*(long *)(*(long *)(this + 8) + 0x50) + 0xc) = *(undefined4 *)(this + 0x10);
  return;
}


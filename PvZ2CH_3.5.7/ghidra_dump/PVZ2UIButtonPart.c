// Class: PVZ2UIButtonPart


/* PVZ2UIButtonPart::~PVZ2UIButtonPart() */

void __thiscall PVZ2UIButtonPart::~PVZ2UIButtonPart(PVZ2UIButtonPart *this)

{
  FUN_05476c50(this + 0x18);
  return;
}


/* PVZ2UIButtonPart::PVZ2UIButtonPart() */

void __thiscall PVZ2UIButtonPart::PVZ2UIButtonPart(PVZ2UIButtonPart *this)

{
  Sexy::Insets::Insets((Insets *)(this + 4));
  FUN_05476574(this + 0x18);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)(this + 0x20));
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  return;
}


/* PVZ2UIButtonPart::PVZ2UIButtonPart(PVZ2UIButtonPart const&) */

void __thiscall PVZ2UIButtonPart::PVZ2UIButtonPart(PVZ2UIButtonPart *this,PVZ2UIButtonPart *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Insets::Insets((Insets *)(this + 4),(Insets *)(param_1 + 4));
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  FUN_05477b24(this + 0x18,param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x48) = uVar3;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined8 *)(this + 0x58) = uVar4;
  *(undefined8 *)(this + 0x60) = uVar3;
  *(undefined4 *)(this + 0x68) = uVar1;
  *(undefined4 *)(this + 0x70) = uVar2;
  return;
}


// Class: Sexy::PAImage


/* Sexy::PAImage::PAImage() */

void __thiscall Sexy::PAImage::PAImage(PAImage *this)

{
  Set8BytesTo0(this + 0x18);
  PATransform::PATransform((PATransform *)(this + 0x24));
  return;
}


/* Sexy::PAImage::PAImage(Sexy::PAImage&&) */

void __thiscall Sexy::PAImage::PAImage(PAImage *this,PAImage *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)this = uVar5;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x24);
  uVar1 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x24) = uVar5;
  *(undefined8 *)(this + 0x2c) = uVar1;
  *(undefined8 *)(this + 0x34) = *(undefined8 *)(param_1 + 0x34);
  return;
}


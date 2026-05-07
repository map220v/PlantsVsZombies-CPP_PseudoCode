// Class: Sexy::SexyMathHermite


/* Sexy::SexyMathHermite::SexyMathHermite() */

void __thiscall Sexy::SexyMathHermite::SexyMathHermite(SexyMathHermite *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  this[0x30] = (SexyMathHermite)0x0;
  return;
}


/* Sexy::SexyMathHermite::~SexyMathHermite() */

void __thiscall Sexy::SexyMathHermite::~SexyMathHermite(SexyMathHermite *this)

{
  std::vector<Sexy::SexyMathHermite::SPiece,std::allocator<Sexy::SexyMathHermite::SPiece>>::~vector
            ((vector<Sexy::SexyMathHermite::SPiece,std::allocator<Sexy::SexyMathHermite::SPiece>> *)
             (this + 0x18));
  std::vector<Sexy::SexyMathHermite::SPoint,std::allocator<Sexy::SexyMathHermite::SPoint>>::~vector
            ((vector<Sexy::SexyMathHermite::SPoint,std::allocator<Sexy::SexyMathHermite::SPoint>> *)
             this);
  return;
}


/* Sexy::SexyMathHermite::SexyMathHermite(Sexy::SexyMathHermite&&) */

void __thiscall
Sexy::SexyMathHermite::SexyMathHermite(SexyMathHermite *this,SexyMathHermite *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  this[0x30] = param_1[0x30];
  return;
}


/* Sexy::SexyMathHermite::BuildCurve() */

undefined8 __thiscall Sexy::SexyMathHermite::BuildCurve(SexyMathHermite *this)

{
  vector<Sexy::SexyMathHermite::SPiece,std::allocator<Sexy::SexyMathHermite::SPiece>> *this_00;
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  this_00 = (vector<Sexy::SexyMathHermite::SPiece,std::allocator<Sexy::SexyMathHermite::SPiece>> *)
            (this + 0x18);
  std::vector<Sexy::SexyMathHermite::SPiece,std::allocator<Sexy::SexyMathHermite::SPiece>>::clear
            (this_00);
  uVar2 = FUN_05127fe4(*(undefined8 *)this,*(undefined8 *)(this + 8));
  if (1 < uVar2) {
    uVar2 = uVar2 - 1;
    std::vector<Sexy::SexyMathHermite::SPiece,std::allocator<Sexy::SexyMathHermite::SPiece>>::
    reserve(this_00,(ulong)uVar2);
    std::vector<Sexy::SexyMathHermite::SPiece,std::allocator<Sexy::SexyMathHermite::SPiece>>::resize
              (this_00,(ulong)uVar2);
    lVar5 = 0;
    do {
      uVar3 = FUN_05127fd0(*(undefined8 *)this,lVar5);
      lVar1 = lVar5 + 1;
      uVar4 = FUN_05127fdc(*(undefined8 *)(this + 0x18),lVar5);
      FUN_05127e88(uVar3,uVar4);
      lVar5 = lVar1;
    } while ((uint)lVar1 < uVar2);
    return 1;
  }
  return 0;
}


/* Sexy::SexyMathHermite::Evaluate(float) */

undefined1  [16] __thiscall Sexy::SexyMathHermite::Evaluate(SexyMathHermite *this,float param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar9 [16];
  
  if (this[0x30] == (SexyMathHermite)0x0) {
    cVar2 = BuildCurve(this);
    if (cVar2 == '\0') {
      return ZEXT816(0);
    }
    this[0x30] = (SexyMathHermite)0x1;
  }
  uVar8 = *(undefined8 *)(this + 0x18);
  iVar3 = FUN_05127fc4(uVar8,*(undefined8 *)(this + 0x20));
  uVar7 = *(undefined8 *)this;
  iVar6 = 0;
  if (iVar3 != 0) {
    do {
      iVar1 = iVar6 + 1;
      pfVar4 = (float *)FUN_05127fd0(uVar7);
      if (param_1 < *pfVar4) {
        uVar7 = FUN_05127fd0(uVar7,iVar6);
        uVar8 = FUN_05127fdc(uVar8,iVar6);
        FUN_05127f94(param_1,uVar7,uVar8);
        auVar9._4_4_ = extraout_var;
        auVar9._0_4_ = extraout_s0;
        auVar9._8_8_ = extraout_var_00;
        return auVar9;
      }
      iVar6 = iVar1;
    } while (iVar3 != iVar1);
  }
  lVar5 = FUN_05127fe4(uVar7,*(undefined8 *)(this + 8));
  lVar5 = FUN_05127fd0(uVar7,lVar5 + -1);
  return ZEXT416(*(uint *)(lVar5 + 4));
}


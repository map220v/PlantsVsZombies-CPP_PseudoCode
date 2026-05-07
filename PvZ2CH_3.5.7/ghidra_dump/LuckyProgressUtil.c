// Class: LuckyProgressUtil


/* LuckyProgressUtil::LuckyProgressUtil() */

void __thiscall LuckyProgressUtil::LuckyProgressUtil(LuckyProgressUtil *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* LuckyProgressUtil::refreshUI(float) */

void __thiscall LuckyProgressUtil::refreshUI(LuckyProgressUtil *this,float param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  lVar4 = *(long *)(this + 8);
  lVar3 = *(long *)this;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  iVar1 = *(int *)(lVar3 + 0x54);
  fVar5 = (float)NEON_fminnm(param_1,0x3f800000);
  iVar2 = (int)(fVar5 * (float)*(int *)(lVar4 + 0x54));
  *(int *)(lVar3 + 0x54) = iVar2;
  *(int *)(lVar3 + 0x4c) = (*(int *)(lVar3 + 0x4c) + iVar1) - iVar2;
  *(int *)(lVar4 + 0x4c) = iVar2 - *(int *)(lVar4 + 0x54);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckyProgressUtil::updateAnimation() */

void __thiscall LuckyProgressUtil::updateAnimation(LuckyProgressUtil *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  char *__s;
  float fVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)Sexy::SexyMath::Fabs(*(float *)(this + 0x1c) - 1.0);
  if (fVar3 < 0.01) {
    __s = "play";
  }
  else {
    __s = "idle";
  }
  std::string::string(asStack_40,__s);
  nop();
  if (((*(long *)(this + 0x10) != 0) &&
      (pPVar2 = (PopAnimRig *)FUN_04b91f64(*(undefined8 *)(*(long *)(this + 0x10) + 0xd8)),
      pPVar2 != (PopAnimRig *)0x0)) &&
     (cVar1 = PopAnimRig::IsAnimStringActive(pPVar2,asStack_40), cVar1 == '\0')) {
    pPVar2 = (PopAnimRig *)FUN_04b91f64(*(undefined8 *)(*(long *)(this + 0x10) + 0xd8));
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LuckyProgressUtil::SetProgerss(float, bool) */

void __thiscall LuckyProgressUtil::SetProgerss(LuckyProgressUtil *this,float param_1,bool param_2)

{
  *(float *)(this + 0x18) = param_1;
  if (!param_2) {
    *(float *)(this + 0x1c) = param_1;
    refreshUI(this,param_1);
  }
  updateAnimation(this);
  return;
}


/* LuckyProgressUtil::Update() */

void __thiscall LuckyProgressUtil::Update(LuckyProgressUtil *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(this + 0x1c);
  fVar3 = *(float *)(this + 0x18);
  fVar1 = (float)Sexy::SexyMath::Fabs(fVar2 - fVar3);
  if (fVar1 <= 0.001) {
    return;
  }
  if (fVar2 < fVar3) {
    fVar2 = fVar2 + 0.01;
    fVar1 = (float)Sexy::SexyMath::Fabs(fVar2 - fVar3);
  }
  else {
    fVar2 = fVar2 + -0.01;
    fVar1 = (float)Sexy::SexyMath::Fabs(fVar2 - fVar3);
  }
  if (0.01 <= fVar1) {
    *(float *)(this + 0x1c) = fVar2;
    refreshUI(this,fVar2);
    return;
  }
  *(float *)(this + 0x1c) = fVar3;
  updateAnimation(this);
  refreshUI(this,*(float *)(this + 0x1c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckyProgressUtil::Init(Sexy::Widget*, Sexy::Widget*, UIWidgetAnim*) */

void __thiscall
LuckyProgressUtil::Init
          (LuckyProgressUtil *this,Widget *param_1,Widget *param_2,UIWidgetAnim *param_3)

{
  undefined4 uVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(Widget **)(this + 8) = param_2;
  *(UIWidgetAnim **)(this + 0x10) = param_3;
  local_8 = ___stack_chk_guard;
  *(Widget **)this = param_1;
  if ((param_3 != (UIWidgetAnim *)0x0) &&
     (pPVar2 = (PopAnimRig *)FUN_04b91f64(*(undefined8 *)(param_3 + 0xd8)),
     pPVar2 != (PopAnimRig *)0x0)) {
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    param_1 = *(Widget **)this;
    param_2 = *(Widget **)(this + 8);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  SetProgerss(this,0.0,false);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


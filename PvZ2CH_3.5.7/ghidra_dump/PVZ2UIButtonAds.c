// Class: PVZ2UIButtonAds


/* PVZ2UIButtonAds::~PVZ2UIButtonAds() */

void __thiscall PVZ2UIButtonAds::~PVZ2UIButtonAds(PVZ2UIButtonAds *this)

{
  *(undefined ***)this = &PTR_GetClass_0675f000;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UIButtonAds_0675f358;
  if (*(long **)(this + 0x300) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x300) + 0x18))();
    *(undefined8 *)(this + 0x300) = 0;
  }
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PVZ2UIButtonAds::~PVZ2UIButtonAds() */

void __thiscall PVZ2UIButtonAds::~PVZ2UIButtonAds(PVZ2UIButtonAds *this)

{
  ~PVZ2UIButtonAds(this + -0x198);
  return;
}


/* PVZ2UIButtonAds::~PVZ2UIButtonAds() */

void __thiscall PVZ2UIButtonAds::~PVZ2UIButtonAds(PVZ2UIButtonAds *this)

{
  ~PVZ2UIButtonAds(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ2UIButtonAds::~PVZ2UIButtonAds() */

void __thiscall PVZ2UIButtonAds::~PVZ2UIButtonAds(PVZ2UIButtonAds *this)

{
  ~PVZ2UIButtonAds(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButtonAds::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIButtonAds::Draw(PVZ2UIButtonAds *this,Graphics *param_1)

{
  float fVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x300) != 0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
    if ((this[0x2b8] == (PVZ2UIButtonAds)0x0) || (this[0x6e] != (PVZ2UIButtonAds)0x0)) {
      fVar1 = (float)FUN_03cc4344(*(undefined4 *)(this + 0x308));
      UIUtil::SetPopAnimTransform
                (*(PopAnimRig **)(this + 0x300),*(int *)(this + 0x50) / 2,*(int *)(this + 0x54) / 2,
                 fVar1,0.5,0.5);
    }
    else {
      fVar1 = (float)FUN_03cc4344(*(undefined4 *)(this + 0x308));
      UIUtil::SetPopAnimTransform
                (*(PopAnimRig **)(this + 0x300),*(int *)(this + 0x50) / 2,*(int *)(this + 0x54) / 2,
                 fVar1 * 1.1,0.5,0.5);
    }
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x300),param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIButtonAds::PVZ2UIButtonAds(int, Sexy::ButtonListener*, std::wstring const&, Sexy::Color
   const&) */

void __thiscall
PVZ2UIButtonAds::PVZ2UIButtonAds
          (PVZ2UIButtonAds *this,int param_1,ButtonListener *param_2,wstring *param_3,Color *param_4
          )

{
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,param_3,param_4);
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined ***)this = &PTR_GetClass_0675f000;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UIButtonAds_0675f358;
  *(undefined4 *)(this + 0x308) = 0x3f800000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButtonAds::SetScale(float) */

void __thiscall PVZ2UIButtonAds::SetScale(PVZ2UIButtonAds *this,float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x300) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(this + 0x300) + 0x20);
    *(float *)(this + 0x308) = param_1;
    lVar2 = FUN_03cc4338(uVar1);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_10,(float)*(int *)(lVar2 + 0x3c),(float)*(int *)(lVar2 + 0x40));
    fVar3 = *(float *)(lVar2 + 0x28);
    *(int *)(this + 0x54) = (int)(fVar3 * local_c * param_1);
    *(int *)(this + 0x50) = (int)(fVar3 * local_10 * param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIButtonAds::SetSize(int, int) */

void __thiscall PVZ2UIButtonAds::SetSize(PVZ2UIButtonAds *this,int param_1,int param_2)

{
  *(int *)(this + 0x50) = param_1;
  *(int *)(this + 0x54) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButtonAds::PlayAndStop(std::string const&, AnimSelectionMethod, Sexy::Delegate1<std::string
   const&>) */

void __thiscall
PVZ2UIButtonAds::PlayAndStop
          (PVZ2UIButtonAds *this,undefined8 param_1,undefined8 param_3,Delegate1 *param_4)

{
  PopAnimRig *pPVar1;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  pPVar1 = *(PopAnimRig **)(this + 0x300);
  local_8 = ___stack_chk_guard;
  if (pPVar1 != (PopAnimRig *)0x0) {
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_4);
    PopAnimRig::PlayAndStop(pPVar1,param_1,param_3,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIButtonAds::SetAnimRig(std::string const&) */

void __thiscall PVZ2UIButtonAds::SetAnimRig(PVZ2UIButtonAds *this,string *param_1)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  undefined8 uVar3;
  long *plVar4;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  plVar4 = *(long **)(this + 0x300);
  local_8 = ___stack_chk_guard;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    *(undefined8 *)(this + 0x300) = 0;
  }
  GetPAMByName(param_1);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  uVar3 = PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar1,pRVar2);
  *(undefined8 *)(this + 0x300) = uVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  SetScale(this,1.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIButtonAds::Update() */

void __thiscall PVZ2UIButtonAds::Update(PVZ2UIButtonAds *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  PVZ2UIButton::Update((PVZ2UIButton *)this);
  this_00 = *(PopAnimRig **)(this + 0x300);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar1 = (float)PVZ_T();
    fVar2 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    return;
  }
  return;
}


// Class: ZombieAnimRig_CamelAlmanac


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CamelAlmanac::onPreDraw(Sexy::Graphics*) */

void __thiscall
ZombieAnimRig_CamelAlmanac::onPreDraw(ZombieAnimRig_CamelAlmanac *this,Graphics *param_1)

{
  long lVar1;
  PopAnimRig *pPVar2;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  SexyTransform2D aSStack_a8 [8];
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [20];
  SexyTransform2D aSStack_80 [8];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [20];
  SexyMatrix3 aSStack_58 [40];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_045f8774(*(undefined8 *)(this + 0x20));
  local_b0 = *(undefined4 *)(lVar1 + 0x8c);
  local_c0 = *(undefined8 *)(lVar1 + 0x7c);
  uStack_b8 = *(undefined8 *)(lVar1 + 0x84);
  local_d0 = *(undefined8 *)(lVar1 + 0x6c);
  uStack_c8 = *(undefined8 *)(lVar1 + 0x74);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_a8);
  FUN_045f877c(0x42f00000,auStack_a0,auStack_94);
  pPVar2 = *(PopAnimRig **)(this + 0x248);
  Sexy::SexyMatrix3::operator*((SexyMatrix3 *)&local_d0,(SexyMatrix3 *)aSStack_a8);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,aSStack_58);
  PopAnimRig::Draw(pPVar2,param_1,aSStack_30);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_80);
  FUN_045f877c(0x42700000,auStack_78,auStack_6c);
  pPVar2 = *(PopAnimRig **)(this + 0x240);
  Sexy::SexyMatrix3::operator*((SexyMatrix3 *)&local_d0,(SexyMatrix3 *)aSStack_80);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,aSStack_58);
  PopAnimRig::Draw(pPVar2,param_1,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_CamelAlmanac::StaticGetClass() */

long * ZombieAnimRig_CamelAlmanac::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig_Camel::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_CamelAlmanac",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_CamelAlmanac::GetClass() const */

long * ZombieAnimRig_CamelAlmanac::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig_Camel::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_CamelAlmanac",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_CamelAlmanac::~ZombieAnimRig_CamelAlmanac() */

void __thiscall
ZombieAnimRig_CamelAlmanac::~ZombieAnimRig_CamelAlmanac(ZombieAnimRig_CamelAlmanac *this)

{
  *(undefined ***)this = &PTR_GetClass_0686dac0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CamelAlmanac_0686dd38;
  if (*(long **)(this + 0x240) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x240) + 0x18))();
    *(undefined8 *)(this + 0x240) = 0;
  }
  if (*(long **)(this + 0x248) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x248) + 0x18))();
    *(undefined8 *)(this + 0x248) = 0;
  }
  ZombieAnimRig_Camel::~ZombieAnimRig_Camel((ZombieAnimRig_Camel *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CamelAlmanac::~ZombieAnimRig_CamelAlmanac() */

void __thiscall
ZombieAnimRig_CamelAlmanac::~ZombieAnimRig_CamelAlmanac(ZombieAnimRig_CamelAlmanac *this)

{
  ~ZombieAnimRig_CamelAlmanac(this + -0x10);
  return;
}


/* ZombieAnimRig_CamelAlmanac::~ZombieAnimRig_CamelAlmanac() */

void __thiscall
ZombieAnimRig_CamelAlmanac::~ZombieAnimRig_CamelAlmanac(ZombieAnimRig_CamelAlmanac *this)

{
  ~ZombieAnimRig_CamelAlmanac(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_CamelAlmanac::~ZombieAnimRig_CamelAlmanac() */

void __thiscall
ZombieAnimRig_CamelAlmanac::~ZombieAnimRig_CamelAlmanac(ZombieAnimRig_CamelAlmanac *this)

{
  ~ZombieAnimRig_CamelAlmanac(this + -0x10);
  return;
}


/* ZombieAnimRig_CamelAlmanac::ZombieAnimRig_CamelAlmanac() */

void __thiscall
ZombieAnimRig_CamelAlmanac::ZombieAnimRig_CamelAlmanac(ZombieAnimRig_CamelAlmanac *this)

{
  ZombieAnimRig_Camel::ZombieAnimRig_Camel((ZombieAnimRig_Camel *)this);
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined ***)this = &PTR_GetClass_0686dac0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_CamelAlmanac_0686dd38;
  return;
}


/* ZombieAnimRig_CamelAlmanac::StaticNew() */

ZombieAnimRig_CamelAlmanac * ZombieAnimRig_CamelAlmanac::StaticNew(void)

{
  ZombieAnimRig_CamelAlmanac *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_CamelAlmanac(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CamelAlmanac::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_CamelAlmanac::onPopAnimInitialized(ZombieAnimRig_CamelAlmanac *this)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  undefined8 extraout_x0;
  undefined8 extraout_x0_00;
  string *psVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig_Camel::onPopAnimInitialized((ZombieAnimRig_Camel *)this);
  pPVar1 = (PopAnim *)FUN_045f8778(*(undefined8 *)(this + 0x20));
  pRVar2 = (RtClass *)ZombieAnimRig_Camel::StaticGetClass();
  PopAnimRig::CreateRigOutsideTable(pPVar1,pRVar2);
  nop();
  *(undefined8 *)(this + 0x240) = extraout_x0;
  pPVar1 = (PopAnim *)FUN_045f8778(*(undefined8 *)(this + 0x20));
  pRVar2 = (RtClass *)ZombieAnimRig_Camel::StaticGetClass();
  PopAnimRig::CreateRigOutsideTable(pPVar1,pRVar2);
  nop();
  *(undefined8 *)(this + 0x248) = extraout_x0_00;
  psVar3 = *(string **)(this + 0x240);
  std::string::string(asStack_10,"ground_swatch");
  CreatureAnimRig::SetGroundTrackName(psVar3);
  std::string::~string(asStack_10);
  nop();
  CreatureAnimRig::HideGroundTrack(*(CreatureAnimRig **)(this + 0x240));
  psVar3 = *(string **)(this + 0x248);
  std::string::string(asStack_10,"ground_swatch");
  CreatureAnimRig::SetGroundTrackName(psVar3);
  std::string::~string(asStack_10);
  nop();
  CreatureAnimRig::HideGroundTrack(*(CreatureAnimRig **)(this + 0x248));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_CamelAlmanac::onUpdate() */

void __thiscall ZombieAnimRig_CamelAlmanac::onUpdate(ZombieAnimRig_CamelAlmanac *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  float fVar3;
  
  pPVar1 = *(PopAnimRig **)(this + 0x240);
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  pPVar1 = *(PopAnimRig **)(this + 0x248);
  fVar2 = (float)PVZ_T();
  fVar3 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(pPVar1,fVar2,fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CamelAlmanac::PlayStreetIdle(RtReflectionDelegate<Sexy::Delegate3<std::string
   const&, std::string const&, int> >) */

void ZombieAnimRig_CamelAlmanac::PlayStreetIdle(ZombieAnimRig *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  plVar2 = *(long **)(param_1 + 0x240);
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar3)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  ZombieAnimRig_Camel::SetIdleAnimFrame(*(ZombieAnimRig_Camel **)(param_1 + 0x240),-10);
  plVar2 = *(long **)(param_1 + 0x248);
  pcVar3 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar3)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  ZombieAnimRig_Camel::SetIdleAnimFrame(*(ZombieAnimRig_Camel **)(param_1 + 0x248),-0x14);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  uVar1 = ZombieAnimRig::PlayStreetIdle(param_1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_CamelAlmanac::CalcRigDrawingRect(Sexy::TRect<int>&) */

void __thiscall
ZombieAnimRig_CamelAlmanac::CalcRigDrawingRect(ZombieAnimRig_CamelAlmanac *this,TRect *param_1)

{
  bool bVar1;
  int local_38 [4];
  int local_28 [4];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopAnimRig::CalcRigDrawingRect((PopAnimRig *)this,param_1);
  Sexy::Insets::Insets((Insets *)local_38);
  (**(code **)(**(long **)(this + 0x240) + 0x90))(*(long **)(this + 0x240),(Insets *)local_38);
  local_38[0] = local_38[0] + 0x3c;
  Sexy::TRect<int>::Union(param_1);
  *(undefined8 *)param_1 = local_18;
  *(undefined8 *)(param_1 + 8) = uStack_10;
  Sexy::Insets::Insets((Insets *)local_28);
  (**(code **)(**(long **)(this + 0x248) + 0x90))(*(long **)(this + 0x248),(Insets *)local_28);
  local_28[0] = local_28[0] + 0x78;
  Sexy::TRect<int>::Union(param_1);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)param_1 = local_18;
  *(undefined8 *)(param_1 + 8) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: PlantAnimRig_Strawburst


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Strawburst::CalcPlantFoodDuration(int) */

void __thiscall
PlantAnimRig_Strawburst::CalcPlantFoodDuration(PlantAnimRig_Strawburst *this,int param_1)

{
  float fVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"plantfood");
  fVar1 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1 * (float)param_1);
}


/* PlantAnimRig_Strawburst::growthAnimComplete(std::string const&) */

void PlantAnimRig_Strawburst::growthAnimComplete(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* PlantAnimRig_Strawburst::getIdleAnimationName() */

void PlantAnimRig_Strawburst::getIdleAnimationName(void)

{
  long in_x0;
  
  Sexy::StrFormat("stage%d_idle",(ulong)(*(byte *)(in_x0 + 0x3b8) + 1));
  return;
}


/* PlantAnimRig_Strawburst::~PlantAnimRig_Strawburst() */

void __thiscall PlantAnimRig_Strawburst::~PlantAnimRig_Strawburst(PlantAnimRig_Strawburst *this)

{
  *(undefined ***)this = &PTR_GetClass_0681f680;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Strawburst_0681f8e8;
  std::string::~string((string *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Strawburst::~PlantAnimRig_Strawburst() */

void __thiscall PlantAnimRig_Strawburst::~PlantAnimRig_Strawburst(PlantAnimRig_Strawburst *this)

{
  ~PlantAnimRig_Strawburst(this + -0x10);
  return;
}


/* PlantAnimRig_Strawburst::~PlantAnimRig_Strawburst() */

void __thiscall PlantAnimRig_Strawburst::~PlantAnimRig_Strawburst(PlantAnimRig_Strawburst *this)

{
  ~PlantAnimRig_Strawburst(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Strawburst::~PlantAnimRig_Strawburst() */

void __thiscall PlantAnimRig_Strawburst::~PlantAnimRig_Strawburst(PlantAnimRig_Strawburst *this)

{
  ~PlantAnimRig_Strawburst(this + -0x10);
  return;
}


/* PlantAnimRig_Strawburst::PlantAnimRig_Strawburst() */

void __thiscall PlantAnimRig_Strawburst::PlantAnimRig_Strawburst(PlantAnimRig_Strawburst *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0681f680;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Strawburst_0681f8e8;
  Set8BytesTo0(this + 0x3c0);
  this[0x3b8] = (PlantAnimRig_Strawburst)0x0;
  return;
}


/* PlantAnimRig_Strawburst::StaticNew() */

PlantAnimRig_Strawburst * PlantAnimRig_Strawburst::StaticNew(void)

{
  PlantAnimRig_Strawburst *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Strawburst(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Strawburst::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Strawburst::PlayAttack(PlantAnimRig_Strawburst *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("stage%d_attack",asStack_58,(ulong)((byte)this[0x3b8] + 1));
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Strawburst::StaticClassInit() */

void PlantAnimRig_Strawburst::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PlantAnimRig_Strawburst");
    (*pcVar2)(plVar1,asStack_10,FUN_0426b27c,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Strawburst::StaticGetClass() */

long * PlantAnimRig_Strawburst::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Strawburst",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Strawburst::GetClass() const */

long * PlantAnimRig_Strawburst::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Strawburst",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Strawburst::PlayRecoverEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Strawburst::PlayRecoverEnd(PlantAnimRig_Strawburst *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"stage1_spawn");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Strawburst::getSelfDestructAnimationName() */

void PlantAnimRig_Strawburst::getSelfDestructAnimationName(void)

{
  long in_x0;
  
  Sexy::StrFormat("stage%d_explode",(ulong)(*(byte *)(in_x0 + 0x3b8) + 1));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Strawburst::PlaySelfDestruct(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Strawburst::PlaySelfDestruct
          (PlantAnimRig_Strawburst *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getSelfDestructAnimationName();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Strawburst::PlayPlantFoodStart(int) */

void __thiscall
PlantAnimRig_Strawburst::PlayPlantFoodStart(PlantAnimRig_Strawburst *this,int param_1)

{
  int iVar1;
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,4);
    *(int *)(this + 0x228) = param_1;
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x298),
               (RtReflectionDelegate *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
              ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)(this + 0x328),
               (RtReflectionDelegate *)aDStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Strawburst::PlayRecoverLooped() */

void __thiscall PlantAnimRig_Strawburst::PlayRecoverLooped(PlantAnimRig_Strawburst *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"stage1_cooldown");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Strawburst::PlayPlantFoodEnd() */

void __thiscall PlantAnimRig_Strawburst::PlayPlantFoodEnd(PlantAnimRig_Strawburst *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"stage1_cooldown");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Strawburst::SetGrowthStage(unsigned char,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Strawburst::SetGrowthStage
          (PlantAnimRig_Strawburst *this,PlantAnimRig_Strawburst param_1,
          RtReflectionDelegate *param_3)

{
  int iVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] != param_1) {
    this[0x3b8] = param_1;
    if ((byte)param_1 == 0) {
      (**(code **)(*(long *)this + 0x118))();
    }
    else {
      Sexy::StrFormat("stage%d_transform",asStack_70,(ulong)(uint)(byte)param_1);
      iVar1 = ::RtReflectionDelegate::operator_cast_to_int(param_3);
      if (iVar1 == 0) {
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"growthAnimComplete");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  (aRStack_50,aRStack_60,asStack_58);
        RtReflectionDelegate<Sexy::Delegate1<Plant*>>::operator=
                  ((RtReflectionDelegate<Sexy::Delegate1<Plant*>> *)param_3,
                   (RtReflectionDelegate *)aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,param_3);
      PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_70);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAnimRig_Strawburst::PlayPreviewAnim(bool) */

void PlantAnimRig_Strawburst::PlayPreviewAnim(bool param_1)

{
  ((BoardEntity *)(ulong)param_1)[0x3b8] = (BoardEntity)0x2;
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  return;
}


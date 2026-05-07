// Class: PlantAnimRig_GhostPepper


/* PlantAnimRig_GhostPepper::~PlantAnimRig_GhostPepper() */

void __thiscall PlantAnimRig_GhostPepper::~PlantAnimRig_GhostPepper(PlantAnimRig_GhostPepper *this)

{
  *(undefined ***)this = &PTR_GetClass_067cddc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GhostPepper_067ce028;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GhostPepper::~PlantAnimRig_GhostPepper() */

void __thiscall PlantAnimRig_GhostPepper::~PlantAnimRig_GhostPepper(PlantAnimRig_GhostPepper *this)

{
  ~PlantAnimRig_GhostPepper(this + -0x10);
  return;
}


/* PlantAnimRig_GhostPepper::~PlantAnimRig_GhostPepper() */

void __thiscall PlantAnimRig_GhostPepper::~PlantAnimRig_GhostPepper(PlantAnimRig_GhostPepper *this)

{
  ~PlantAnimRig_GhostPepper(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_GhostPepper::~PlantAnimRig_GhostPepper() */

void __thiscall PlantAnimRig_GhostPepper::~PlantAnimRig_GhostPepper(PlantAnimRig_GhostPepper *this)

{
  ~PlantAnimRig_GhostPepper(this + -0x10);
  return;
}


/* PlantAnimRig_GhostPepper::PlantAnimRig_GhostPepper() */

void __thiscall PlantAnimRig_GhostPepper::PlantAnimRig_GhostPepper(PlantAnimRig_GhostPepper *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067cddc0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_GhostPepper_067ce028;
  return;
}


/* PlantAnimRig_GhostPepper::StaticNew() */

PlantAnimRig_GhostPepper * PlantAnimRig_GhostPepper::StaticNew(void)

{
  PlantAnimRig_GhostPepper *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_GhostPepper(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GhostPepper::StaticClassInit() */

void PlantAnimRig_GhostPepper::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_GhostPepper");
    (*pcVar2)(plVar1,asStack_10,FUN_04091c54,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_GhostPepper::StaticGetClass() */

long * PlantAnimRig_GhostPepper::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GhostPepper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_GhostPepper::GetClass() const */

long * PlantAnimRig_GhostPepper::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_GhostPepper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GhostPepper::StopAttacking(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_GhostPepper::StopAttacking
          (PlantAnimRig_GhostPepper *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_end");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GhostPepper::StartDeathExplosion(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_GhostPepper::StartDeathExplosion
          (PlantAnimRig_GhostPepper *this,RtReflectionDelegate *param_2)

{
  long lVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"Fade_out");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xe;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GhostPepper::onAttackStartFinished(std::string const&) */

void PlantAnimRig_GhostPepper::onAttackStartFinished(string *param_1)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_GhostPepper::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void PlantAnimRig_GhostPepper::PlayAttack(PopAnimRig *param_1)

{
  int iVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"attack_start");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onAttackStartFinished");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  iVar1 = PopAnimRig::PlayAndStop(param_1,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


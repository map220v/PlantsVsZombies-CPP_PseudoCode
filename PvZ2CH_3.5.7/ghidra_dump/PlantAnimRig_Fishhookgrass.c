// Class: PlantAnimRig_Fishhookgrass


/* PlantAnimRig_Fishhookgrass::onChewingContinued(std::string const&) */

void PlantAnimRig_Fishhookgrass::onChewingContinued(string *param_1)

{
  return;
}


/* PlantAnimRig_Fishhookgrass::~PlantAnimRig_Fishhookgrass() */

void __thiscall
PlantAnimRig_Fishhookgrass::~PlantAnimRig_Fishhookgrass(PlantAnimRig_Fishhookgrass *this)

{
  *(undefined ***)this = &PTR_GetClass_067b6ce0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Fishhookgrass_067b6f48;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Fishhookgrass::~PlantAnimRig_Fishhookgrass() */

void __thiscall
PlantAnimRig_Fishhookgrass::~PlantAnimRig_Fishhookgrass(PlantAnimRig_Fishhookgrass *this)

{
  ~PlantAnimRig_Fishhookgrass(this + -0x10);
  return;
}


/* PlantAnimRig_Fishhookgrass::~PlantAnimRig_Fishhookgrass() */

void __thiscall
PlantAnimRig_Fishhookgrass::~PlantAnimRig_Fishhookgrass(PlantAnimRig_Fishhookgrass *this)

{
  ~PlantAnimRig_Fishhookgrass(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Fishhookgrass::~PlantAnimRig_Fishhookgrass() */

void __thiscall
PlantAnimRig_Fishhookgrass::~PlantAnimRig_Fishhookgrass(PlantAnimRig_Fishhookgrass *this)

{
  ~PlantAnimRig_Fishhookgrass(this + -0x10);
  return;
}


/* PlantAnimRig_Fishhookgrass::PlantAnimRig_Fishhookgrass() */

void __thiscall
PlantAnimRig_Fishhookgrass::PlantAnimRig_Fishhookgrass(PlantAnimRig_Fishhookgrass *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_067b6ce0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Fishhookgrass_067b6f48;
  *(undefined4 *)(this + 0x3bc) = 0xffffffff;
  return;
}


/* PlantAnimRig_Fishhookgrass::StaticNew() */

PlantAnimRig_Fishhookgrass * PlantAnimRig_Fishhookgrass::StaticNew(void)

{
  PlantAnimRig_Fishhookgrass *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Fishhookgrass(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::StaticClassInit() */

void PlantAnimRig_Fishhookgrass::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Fishhookgrass");
    (*pcVar2)(plVar1,asStack_10,FUN_0401c6bc,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Fishhookgrass::StaticGetClass() */

long * PlantAnimRig_Fishhookgrass::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Fishhookgrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Fishhookgrass::GetClass() const */

long * PlantAnimRig_Fishhookgrass::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Fishhookgrass",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::PlayBeginTongueAttack(bool) */

void __thiscall
PlantAnimRig_Fishhookgrass::PlayBeginTongueAttack(PlantAnimRig_Fishhookgrass *this,bool param_1)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    std::string::string(asStack_40,"attack_lv5");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    *(undefined4 *)(this + 0x3bc) = uVar1;
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"attack");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    *(undefined4 *)(this + 0x3bc) = uVar1;
    std::string::~string(asStack_40);
    nop();
  }
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::PlayReceiveHook(bool) */

void __thiscall
PlantAnimRig_Fishhookgrass::PlayReceiveHook(PlantAnimRig_Fishhookgrass *this,bool param_1)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    std::string::string(asStack_40,"attack_l_lv5");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    *(undefined4 *)(this + 0x3bc) = uVar1;
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"attack_l");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
    *(undefined4 *)(this + 0x3bc) = uVar1;
    std::string::~string(asStack_40);
    nop();
  }
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::PlayBeginPFTongueAttack() */

void __thiscall
PlantAnimRig_Fishhookgrass::PlayBeginPFTongueAttack(PlantAnimRig_Fishhookgrass *this)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3bc) = uVar1;
  std::string::~string(asStack_40);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::PlayPFReceiveHook() */

void __thiscall PlantAnimRig_Fishhookgrass::PlayPFReceiveHook(PlantAnimRig_Fishhookgrass *this)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_l");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3bc) = uVar1;
  std::string::~string(asStack_40);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::PlayPlantfoodTongueGrab() */

void __thiscall
PlantAnimRig_Fishhookgrass::PlayPlantfoodTongueGrab(PlantAnimRig_Fishhookgrass *this)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_swallow");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(undefined4 *)(this + 0x3bc) = uVar1;
  std::string::~string(asStack_40);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::PlayBeginthrow(bool) */

void __thiscall
PlantAnimRig_Fishhookgrass::PlayBeginthrow(PlantAnimRig_Fishhookgrass *this,bool param_1)

{
  undefined4 uVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    std::string::string(asStack_68,"attack_t_lv5");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onChewingContinued");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_68,0,aRStack_50);
    *(undefined4 *)(this + 0x3bc) = uVar1;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
  }
  else {
    std::string::string(asStack_68,"attack_t");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onChewingContinued");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_68,0,aRStack_50);
    *(undefined4 *)(this + 0x3bc) = uVar1;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
  }
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::PlayBeginPFthrow() */

void __thiscall PlantAnimRig_Fishhookgrass::PlayBeginPFthrow(PlantAnimRig_Fishhookgrass *this)

{
  undefined4 uVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"plantfood_t");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onChewingContinued");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_68,0,aRStack_50);
  *(undefined4 *)(this + 0x3bc) = uVar1;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::onTongueAttackContinued(std::string const&) */

void PlantAnimRig_Fishhookgrass::onTongueAttackContinued(string *param_1)

{
  undefined4 uVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(param_1 + 0x3b8) - 2U & 0xfffffffd) == 0) {
    std::string::string(asStack_68,"attack_open_loop");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onTongueAttackContinued");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_68,0,aRStack_50);
    *(undefined4 *)(param_1 + 0x3bc) = uVar1;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)param_1,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::onBitingCompleted(std::string const&) */

void PlantAnimRig_Fishhookgrass::onBitingCompleted(string *param_1)

{
  undefined4 uVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x3b8) == 1) {
    std::string::string(asStack_68,"idle");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onBitingCompleted");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_68,0,aRStack_50);
    *(undefined4 *)(param_1 + 0x3bc) = uVar1;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)param_1,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::onPlantfoodTongueAttackContinued(std::string const&) */

void PlantAnimRig_Fishhookgrass::onPlantfoodTongueAttackContinued(string *param_1)

{
  undefined4 uVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(uint *)(param_1 + 0x3b8) & 0xfffffffd) == 9) {
    std::string::string(asStack_68,"plantfood_open_loop");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onPlantfoodTongueAttackContinued");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_68,0,aRStack_50);
    *(undefined4 *)(param_1 + 0x3bc) = uVar1;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)param_1,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::onPlantfoodChewingContinued(std::string const&) */

void PlantAnimRig_Fishhookgrass::onPlantfoodChewingContinued(string *param_1)

{
  undefined4 uVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x3b8) == 0xd) {
    std::string::string(asStack_68,"plantfood_loop chew");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onPlantfoodChewingContinued");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_60,
               asStack_58);
    uVar1 = PopAnimRig::PlayAndStop
                      ((PopAnimRig *)param_1,asStack_68,0,
                       (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aDStack_50);
    *(undefined4 *)(param_1 + 0x3bc) = uVar1;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aDStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)param_1,0xe);
  }
  else {
    std::string::string(asStack_58,"plantfood_swallow");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
    uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)param_1,asStack_58,0,aDStack_50);
    *(undefined4 *)(param_1 + 0x3bc) = uVar1;
    std::string::~string(asStack_58);
    nop();
    PlantAnimRig::SetState((PlantAnimRig *)param_1,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Fishhookgrass::PlayIdleLooped() */

void __thiscall PlantAnimRig_Fishhookgrass::PlayIdleLooped(PlantAnimRig_Fishhookgrass *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"idle");
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ae8290,asStack_40,0x41)
  ;
  std::string::~string(asStack_40);
  nop();
  ProbabilitySet<std::string>::PickItem();
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  *(int *)(this + 0x3bc) = iVar1;
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,1);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


// Class: PlantAnimRig_Toadstool


/* PlantAnimRig_Toadstool::CurrentAnimationIsFinished() */

void __thiscall PlantAnimRig_Toadstool::CurrentAnimationIsFinished(PlantAnimRig_Toadstool *this)

{
  PopAnimRig::IsAnimFinished(this,*(undefined4 *)(this + 0x3bc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Toadstool::PlayTongueGrab() */

void __thiscall PlantAnimRig_Toadstool::PlayTongueGrab(PlantAnimRig_Toadstool *this)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_grab");
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
/* PlantAnimRig_Toadstool::PlayBite() */

void __thiscall PlantAnimRig_Toadstool::PlayBite(PlantAnimRig_Toadstool *this)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack");
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
/* PlantAnimRig_Toadstool::PlayPlantfoodEndSwallowing() */

void __thiscall PlantAnimRig_Toadstool::PlayPlantfoodEndSwallowing(PlantAnimRig_Toadstool *this)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood_end");
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
/* PlantAnimRig_Toadstool::PlayPlantfoodBurp() */

void __thiscall PlantAnimRig_Toadstool::PlayPlantfoodBurp(PlantAnimRig_Toadstool *this)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"dg");
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
/* PlantAnimRig_Toadstool::PlayBiteContinued() */

void __thiscall PlantAnimRig_Toadstool::PlayBiteContinued(PlantAnimRig_Toadstool *this)

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
  if (*(int *)(this + 0x3b8) == 1) {
    std::string::string(asStack_68,"attack_grab");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onBitingCompleted");
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
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Toadstool::PlayBeginChewing() */

void __thiscall PlantAnimRig_Toadstool::PlayBeginChewing(PlantAnimRig_Toadstool *this)

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
  std::string::string(asStack_68,"attack_loop chew");
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
/* PlantAnimRig_Toadstool::PlayPlantfoodBeginTongueAttack() */

void __thiscall PlantAnimRig_Toadstool::PlayPlantfoodBeginTongueAttack(PlantAnimRig_Toadstool *this)

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
  std::string::string(asStack_68,"plantfood");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onPlantfoodTongueAttackContinued");
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
/* PlantAnimRig_Toadstool::PlayPlantfoodTongueAttackLoop() */

void __thiscall PlantAnimRig_Toadstool::PlayPlantfoodTongueAttackLoop(PlantAnimRig_Toadstool *this)

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
  std::string::string(asStack_68,"plantfood_open_loop");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onPlantfoodTongueAttackContinued");
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
/* PlantAnimRig_Toadstool::PlayPlantfoodBeginChewing() */

void __thiscall PlantAnimRig_Toadstool::PlayPlantfoodBeginChewing(PlantAnimRig_Toadstool *this)

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
  std::string::string(asStack_68,"plantfood_loop chew");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onPlantfoodChewingContinued");
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


/* PlantAnimRig_Toadstool::~PlantAnimRig_Toadstool() */

void __thiscall PlantAnimRig_Toadstool::~PlantAnimRig_Toadstool(PlantAnimRig_Toadstool *this)

{
  *(undefined ***)this = &PTR_GetClass_067eb250;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Toadstool_067eb4b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Toadstool::~PlantAnimRig_Toadstool() */

void __thiscall PlantAnimRig_Toadstool::~PlantAnimRig_Toadstool(PlantAnimRig_Toadstool *this)

{
  ~PlantAnimRig_Toadstool(this + -0x10);
  return;
}


/* PlantAnimRig_Toadstool::~PlantAnimRig_Toadstool() */

void __thiscall PlantAnimRig_Toadstool::~PlantAnimRig_Toadstool(PlantAnimRig_Toadstool *this)

{
  ~PlantAnimRig_Toadstool(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Toadstool::~PlantAnimRig_Toadstool() */

void __thiscall PlantAnimRig_Toadstool::~PlantAnimRig_Toadstool(PlantAnimRig_Toadstool *this)

{
  ~PlantAnimRig_Toadstool(this + -0x10);
  return;
}


/* PlantAnimRig_Toadstool::PlantAnimRig_Toadstool() */

void __thiscall PlantAnimRig_Toadstool::PlantAnimRig_Toadstool(PlantAnimRig_Toadstool *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_067eb250;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Toadstool_067eb4b8;
  *(undefined4 *)(this + 0x3bc) = 0xffffffff;
  return;
}


/* PlantAnimRig_Toadstool::StaticNew() */

PlantAnimRig_Toadstool * PlantAnimRig_Toadstool::StaticNew(void)

{
  PlantAnimRig_Toadstool *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Toadstool(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Toadstool::StaticClassInit() */

void PlantAnimRig_Toadstool::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Toadstool");
    (*pcVar2)(plVar1,asStack_10,FUN_0412b204,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Toadstool::StaticGetClass() */

long * PlantAnimRig_Toadstool::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Toadstool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Toadstool::GetClass() const */

long * PlantAnimRig_Toadstool::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Toadstool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Toadstool::PlayPlantfoodTongueGrab() */

void __thiscall PlantAnimRig_Toadstool::PlayPlantfoodTongueGrab(PlantAnimRig_Toadstool *this)

{
  undefined4 uVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"pantfood_grab");
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
/* PlantAnimRig_Toadstool::PlayBeginTongueAttack() */

void __thiscall PlantAnimRig_Toadstool::PlayBeginTongueAttack(PlantAnimRig_Toadstool *this)

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
  std::string::string(asStack_68,"attack");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onTongueAttackContinued");
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
/* PlantAnimRig_Toadstool::onTongueAttackContinued(std::string const&) */

void PlantAnimRig_Toadstool::onTongueAttackContinued(string *param_1)

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
/* PlantAnimRig_Toadstool::onBitingCompleted(std::string const&) */

void PlantAnimRig_Toadstool::onBitingCompleted(string *param_1)

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
/* PlantAnimRig_Toadstool::onChewingContinued(std::string const&) */

void PlantAnimRig_Toadstool::onChewingContinued(string *param_1)

{
  undefined4 uVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x3b8) == 6) {
    std::string::string(asStack_68,"attack_loop chew");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onChewingContinued");
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
    std::string::string(asStack_58,"attack_swallow");
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
/* PlantAnimRig_Toadstool::onPlantfoodTongueAttackContinued(std::string const&) */

void PlantAnimRig_Toadstool::onPlantfoodTongueAttackContinued(string *param_1)

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
/* PlantAnimRig_Toadstool::onPlantfoodChewingContinued(std::string const&) */

void PlantAnimRig_Toadstool::onPlantfoodChewingContinued(string *param_1)

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
/* PlantAnimRig_Toadstool::PlayIdleLooped() */

void __thiscall PlantAnimRig_Toadstool::PlayIdleLooped(PlantAnimRig_Toadstool *this)

{
  int iVar1;
  long lVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06aee130);
  if (lVar2 == 0) {
    std::string::string(asStack_40,"idle");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06aee130,asStack_40,0x41);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"idle2");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06aee130,asStack_40,0x23);
    std::string::~string(asStack_40);
    nop();
  }
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


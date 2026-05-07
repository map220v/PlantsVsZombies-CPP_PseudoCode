// Class: GridItemGroundLava


/* GridItemGroundLava::onAnimStopped(std::string const&) */

void GridItemGroundLava::onAnimStopped(string *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGroundLava::StaticClassInit() */

void GridItemGroundLava::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemGroundLava");
    (*pcVar2)(plVar1,asStack_10,FUN_04123f04,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGroundLava::StaticGetClass() */

long * GridItemGroundLava::StaticGetClass(void)

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
  uVar2 = GridItemLava::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGroundLava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemGroundLava::GetClass() const */

long * GridItemGroundLava::GetClass(void)

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
  uVar2 = GridItemLava::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemGroundLava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGroundLava::onSplatFinished(std::string const&) */

void GridItemGroundLava::onSplatFinished(string *param_1)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"idle2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  (**(code **)(*(long *)param_1 + 0x2c0))(param_1,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemGroundLava::setState(GridItemLavaState) */

void __thiscall GridItemGroundLava::setState(GridItemGroundLava *this,int param_2)

{
  char *__s;
  PopAnimRig *local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"idle");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    __s = "onSplatFinished";
  }
  else {
    if (param_2 != 3) goto LAB_04126034;
    GridItemAnimation::GetAnimRig();
    local_a0 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_68,"idle3");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    __s = "onSplatFaded";
  }
  std::string::string(asStack_58,__s);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(local_a0,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
LAB_04126034:
  *(int *)(this + 0x1b4) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemGroundLava::~GridItemGroundLava() */

void __thiscall GridItemGroundLava::~GridItemGroundLava(GridItemGroundLava *this)

{
  *(undefined ***)this = &PTR_GetClass_067ea0e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGroundLava_067ea3c8;
  GridItemLava::~GridItemLava((GridItemLava *)this);
  return;
}


/* non-virtual thunk to GridItemGroundLava::~GridItemGroundLava() */

void __thiscall GridItemGroundLava::~GridItemGroundLava(GridItemGroundLava *this)

{
  ~GridItemGroundLava(this + -0x10);
  return;
}


/* GridItemGroundLava::~GridItemGroundLava() */

void __thiscall GridItemGroundLava::~GridItemGroundLava(GridItemGroundLava *this)

{
  ~GridItemGroundLava(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemGroundLava::~GridItemGroundLava() */

void __thiscall GridItemGroundLava::~GridItemGroundLava(GridItemGroundLava *this)

{
  ~GridItemGroundLava(this + -0x10);
  return;
}


/* GridItemGroundLava::GridItemGroundLava() */

void __thiscall GridItemGroundLava::GridItemGroundLava(GridItemGroundLava *this)

{
  GridItemLava::GridItemLava((GridItemLava *)this);
  *(undefined ***)this = &PTR_GetClass_067ea0e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemGroundLava_067ea3c8;
  return;
}


/* GridItemGroundLava::StaticNew() */

GridItemGroundLava * GridItemGroundLava::StaticNew(void)

{
  GridItemGroundLava *this;
  
  this = ::operator_new(0x1e0);
  GridItemGroundLava(this);
  return this;
}


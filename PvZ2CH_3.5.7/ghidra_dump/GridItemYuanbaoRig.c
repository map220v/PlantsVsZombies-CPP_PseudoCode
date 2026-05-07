// Class: GridItemYuanbaoRig


/* GridItemYuanbaoRig::~GridItemYuanbaoRig() */

void __thiscall GridItemYuanbaoRig::~GridItemYuanbaoRig(GridItemYuanbaoRig *this)

{
  *(undefined ***)this = &PTR_GetClass_0663b9d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemYuanbaoRig_0663baf0;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemYuanbaoRig::~GridItemYuanbaoRig() */

void __thiscall GridItemYuanbaoRig::~GridItemYuanbaoRig(GridItemYuanbaoRig *this)

{
  ~GridItemYuanbaoRig(this + -0x10);
  return;
}


/* GridItemYuanbaoRig::~GridItemYuanbaoRig() */

void __thiscall GridItemYuanbaoRig::~GridItemYuanbaoRig(GridItemYuanbaoRig *this)

{
  ~GridItemYuanbaoRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemYuanbaoRig::~GridItemYuanbaoRig() */

void __thiscall GridItemYuanbaoRig::~GridItemYuanbaoRig(GridItemYuanbaoRig *this)

{
  ~GridItemYuanbaoRig(this + -0x10);
  return;
}


/* GridItemYuanbaoRig::GridItemYuanbaoRig() */

void __thiscall GridItemYuanbaoRig::GridItemYuanbaoRig(GridItemYuanbaoRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0663b9d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemYuanbaoRig_0663baf0;
  return;
}


/* GridItemYuanbaoRig::StaticNew() */

GridItemYuanbaoRig * GridItemYuanbaoRig::StaticNew(void)

{
  GridItemYuanbaoRig *this;
  
  this = ::operator_new(0x210);
  GridItemYuanbaoRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbaoRig::StaticClassInit() */

void GridItemYuanbaoRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemYuanbaoRig");
    (*pcVar2)(plVar1,asStack_10,FUN_034700bc,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemYuanbaoRig::StaticGetClass() */

long * GridItemYuanbaoRig::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemYuanbaoRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemYuanbaoRig::GetClass() const */

long * GridItemYuanbaoRig::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemYuanbaoRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbaoRig::playIdle1Anim() */

void __thiscall GridItemYuanbaoRig::playIdle1Anim(GridItemYuanbaoRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"money_idle_1");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbaoRig::playIdle2Anim() */

void __thiscall GridItemYuanbaoRig::playIdle2Anim(GridItemYuanbaoRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"money_idle_2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbaoRig::playIdle3Anim() */

void __thiscall GridItemYuanbaoRig::playIdle3Anim(GridItemYuanbaoRig *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"money_idle_3");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemYuanbaoRig::playBirthAnim(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
GridItemYuanbaoRig::playBirthAnim(GridItemYuanbaoRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined8 local_68 [3];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"money_birth1");
  std::string::string(asStack_48,"money_birth2");
  std::string::string(asStack_40,"money_birth3");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_68,asStack_50,3,auStack_70);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  nop();
  nop();
  nop();
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_68);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_68);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar2,uVar3);
  uVar2 = FUN_0346f478(local_68[0]);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)asStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,uVar2,0,asStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)asStack_50);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


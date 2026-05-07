// Class: GridItemVaseAnimRig


/* GridItemVaseAnimRig::~GridItemVaseAnimRig() */

void __thiscall GridItemVaseAnimRig::~GridItemVaseAnimRig(GridItemVaseAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_06919250;
  *(undefined ***)(this + 0x10) = &PTR__GridItemVaseAnimRig_06919370;
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to GridItemVaseAnimRig::~GridItemVaseAnimRig() */

void __thiscall GridItemVaseAnimRig::~GridItemVaseAnimRig(GridItemVaseAnimRig *this)

{
  ~GridItemVaseAnimRig(this + -0x10);
  return;
}


/* GridItemVaseAnimRig::~GridItemVaseAnimRig() */

void __thiscall GridItemVaseAnimRig::~GridItemVaseAnimRig(GridItemVaseAnimRig *this)

{
  ~GridItemVaseAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemVaseAnimRig::~GridItemVaseAnimRig() */

void __thiscall GridItemVaseAnimRig::~GridItemVaseAnimRig(GridItemVaseAnimRig *this)

{
  ~GridItemVaseAnimRig(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVaseAnimRig::StaticClassInit() */

void GridItemVaseAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemVaseAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_0498fea0,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVaseAnimRig::StaticGetClass() */

long * GridItemVaseAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemVaseAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVaseAnimRig::GetClass() const */

long * GridItemVaseAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemVaseAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemVaseAnimRig::GridItemVaseAnimRig() */

void __thiscall GridItemVaseAnimRig::GridItemVaseAnimRig(GridItemVaseAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  this[0x20d] = (GridItemVaseAnimRig)0x0;
  *(undefined ***)this = &PTR_GetClass_06919250;
  *(undefined ***)(this + 0x10) = &PTR__GridItemVaseAnimRig_06919370;
  return;
}


/* GridItemVaseAnimRig::StaticNew() */

GridItemVaseAnimRig * GridItemVaseAnimRig::StaticNew(void)

{
  GridItemVaseAnimRig *this;
  
  this = ::operator_new(0x210);
  GridItemVaseAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVaseAnimRig::SetRevealedAndTransition(bool,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
GridItemVaseAnimRig::SetRevealedAndTransition
          (GridItemVaseAnimRig *this,GridItemVaseAnimRig param_1,RtReflectionDelegate *param_3)

{
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this[0x20d] = param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 == (GridItemVaseAnimRig)0x0) {
    __s = "close";
  }
  else {
    __s = "open";
  }
  std::string::string(asStack_58,__s);
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemVaseAnimRig::SetRevealedImmediately(bool) */

void __thiscall GridItemVaseAnimRig::SetRevealedImmediately(GridItemVaseAnimRig *this,bool param_1)

{
  this[0x20d] = (GridItemVaseAnimRig)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVaseAnimRig::Break(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall GridItemVaseAnimRig::Break(GridItemVaseAnimRig *this,RtReflectionDelegate *param_2)

{
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"break");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVaseAnimRig::CalcDropAnimLength() */

void __thiscall GridItemVaseAnimRig::CalcDropAnimLength(GridItemVaseAnimRig *this)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"drop");
  uVar1 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVaseAnimRig::PlayIdle() */

void __thiscall GridItemVaseAnimRig::PlayIdle(GridItemVaseAnimRig *this)

{
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x20d] == (GridItemVaseAnimRig)0x0) {
    __s = "idle";
  }
  else {
    __s = "reveal";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVaseAnimRig::onDropCompleted(std::string const&) */

void GridItemVaseAnimRig::onDropCompleted(string *param_1)

{
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1[0x20d] == (string)0x0) {
    __s = "idle";
  }
  else {
    __s = "reveal";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemVaseAnimRig::PlayDrop() */

void __thiscall GridItemVaseAnimRig::PlayDrop(GridItemVaseAnimRig *this)

{
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"drop");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onDropCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


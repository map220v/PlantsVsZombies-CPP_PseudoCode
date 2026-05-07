// Class: PlantAnimRig_PotatoMine


/* PlantAnimRig_PotatoMine::onPopAnimInitialized() */

void __thiscall PlantAnimRig_PotatoMine::onPopAnimInitialized(PlantAnimRig_PotatoMine *this)

{
  this[0x3b8] = (PlantAnimRig_PotatoMine)0x1;
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  return;
}


/* PlantAnimRig_PotatoMine::~PlantAnimRig_PotatoMine() */

void __thiscall PlantAnimRig_PotatoMine::~PlantAnimRig_PotatoMine(PlantAnimRig_PotatoMine *this)

{
  *(undefined ***)this = &PTR_GetClass_0679c7d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PotatoMine_0679ca50;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PotatoMine::~PlantAnimRig_PotatoMine() */

void __thiscall PlantAnimRig_PotatoMine::~PlantAnimRig_PotatoMine(PlantAnimRig_PotatoMine *this)

{
  ~PlantAnimRig_PotatoMine(this + -0x10);
  return;
}


/* PlantAnimRig_PotatoMine::~PlantAnimRig_PotatoMine() */

void __thiscall PlantAnimRig_PotatoMine::~PlantAnimRig_PotatoMine(PlantAnimRig_PotatoMine *this)

{
  ~PlantAnimRig_PotatoMine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_PotatoMine::~PlantAnimRig_PotatoMine() */

void __thiscall PlantAnimRig_PotatoMine::~PlantAnimRig_PotatoMine(PlantAnimRig_PotatoMine *this)

{
  ~PlantAnimRig_PotatoMine(this + -0x10);
  return;
}


/* PlantAnimRig_PotatoMine::PlantAnimRig_PotatoMine() */

void __thiscall PlantAnimRig_PotatoMine::PlantAnimRig_PotatoMine(PlantAnimRig_PotatoMine *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679c7d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_PotatoMine_0679ca50;
  return;
}


/* PlantAnimRig_PotatoMine::StaticNew() */

PlantAnimRig_PotatoMine * PlantAnimRig_PotatoMine::StaticNew(void)

{
  PlantAnimRig_PotatoMine *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_PotatoMine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PotatoMine::StaticClassInit() */

void PlantAnimRig_PotatoMine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_PotatoMine");
    (*pcVar2)(plVar1,asStack_10,FUN_03f5c288,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_PotatoMine::StaticGetClass() */

long * PlantAnimRig_PotatoMine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PotatoMine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_PotatoMine::GetClass() const */

long * PlantAnimRig_PotatoMine::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_PotatoMine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PotatoMine::PlayEmergeFromGround(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_PotatoMine::PlayEmergeFromGround
          (PlantAnimRig_PotatoMine *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"recover");
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
    this[0x3b8] = (PlantAnimRig_PotatoMine)0x0;
    *(undefined4 *)(this + 0x218) = 0xf;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_PotatoMine::PlayIdleLooped() */

void __thiscall PlantAnimRig_PotatoMine::PlayIdleLooped(PlantAnimRig_PotatoMine *this)

{
  int iVar1;
  undefined8 uVar2;
  DummyInit *local_58;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b8] == (PlantAnimRig_PotatoMine)0x0) {
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    uVar2 = 2;
  }
  else {
    std::string::string(asStack_40,"plant_idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    uVar2 = 0;
  }
  local_58 = aDStack_38;
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,uVar2,local_58);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


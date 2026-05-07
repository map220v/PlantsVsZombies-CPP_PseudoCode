// Class: PlantAnimRig_Chilibean


/* PlantAnimRig_Chilibean::onLandingFinished(std::string const&) */

void PlantAnimRig_Chilibean::onLandingFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* PlantAnimRig_Chilibean::~PlantAnimRig_Chilibean() */

void __thiscall PlantAnimRig_Chilibean::~PlantAnimRig_Chilibean(PlantAnimRig_Chilibean *this)

{
  *(undefined ***)this = &PTR_GetClass_0679af80;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Chilibean_0679b1e8;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Chilibean::~PlantAnimRig_Chilibean() */

void __thiscall PlantAnimRig_Chilibean::~PlantAnimRig_Chilibean(PlantAnimRig_Chilibean *this)

{
  ~PlantAnimRig_Chilibean(this + -0x10);
  return;
}


/* PlantAnimRig_Chilibean::~PlantAnimRig_Chilibean() */

void __thiscall PlantAnimRig_Chilibean::~PlantAnimRig_Chilibean(PlantAnimRig_Chilibean *this)

{
  ~PlantAnimRig_Chilibean(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Chilibean::~PlantAnimRig_Chilibean() */

void __thiscall PlantAnimRig_Chilibean::~PlantAnimRig_Chilibean(PlantAnimRig_Chilibean *this)

{
  ~PlantAnimRig_Chilibean(this + -0x10);
  return;
}


/* PlantAnimRig_Chilibean::PlantAnimRig_Chilibean() */

void __thiscall PlantAnimRig_Chilibean::PlantAnimRig_Chilibean(PlantAnimRig_Chilibean *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679af80;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Chilibean_0679b1e8;
  Set8BytesTo0(this + 0x3b8);
  return;
}


/* PlantAnimRig_Chilibean::StaticNew() */

PlantAnimRig_Chilibean * PlantAnimRig_Chilibean::StaticNew(void)

{
  PlantAnimRig_Chilibean *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Chilibean(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chilibean::StaticClassInit() */

void PlantAnimRig_Chilibean::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Chilibean");
    (*pcVar2)(plVar1,asStack_10,FUN_03f590a0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Chilibean::StaticGetClass() */

long * PlantAnimRig_Chilibean::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Chilibean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Chilibean::GetClass() const */

long * PlantAnimRig_Chilibean::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Chilibean",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chilibean::PlayFlyingAnim() */

void __thiscall PlantAnimRig_Chilibean::PlayFlyingAnim(PlantAnimRig_Chilibean *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"plantfood3");
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
/* PlantAnimRig_Chilibean::PlayLandingAnim() */

void __thiscall PlantAnimRig_Chilibean::PlayLandingAnim(PlantAnimRig_Chilibean *this)

{
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood4");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onLandingFinished");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Chilibean::PlayIdleLooped() */

void __thiscall PlantAnimRig_Chilibean::PlayIdleLooped(PlantAnimRig_Chilibean *this)

{
  int iVar1;
  long lVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ae3930);
  if (lVar2 == 0) {
    std::string::string(asStack_40,"idle");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06ae3930,asStack_40,0x32);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"idle2");
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)&DAT_06ae3930,asStack_40,0x31);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"idle3");
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ae3930,asStack_40,1);
    std::string::~string(asStack_40);
    nop();
  }
  ProbabilitySet<std::string>::PickItemIgnoring((string *)&DAT_06ae3930);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    thunk_FUN_05475e00(this + 0x3b8,asStack_40);
    *(undefined4 *)(this + 0x218) = 1;
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


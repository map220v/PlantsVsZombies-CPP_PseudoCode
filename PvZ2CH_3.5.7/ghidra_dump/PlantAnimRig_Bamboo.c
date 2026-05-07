// Class: PlantAnimRig_Bamboo


/* PlantAnimRig_Bamboo::~PlantAnimRig_Bamboo() */

void __thiscall PlantAnimRig_Bamboo::~PlantAnimRig_Bamboo(PlantAnimRig_Bamboo *this)

{
  *(undefined ***)this = &PTR_GetClass_06799f50;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Bamboo_0679a1b8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Bamboo::~PlantAnimRig_Bamboo() */

void __thiscall PlantAnimRig_Bamboo::~PlantAnimRig_Bamboo(PlantAnimRig_Bamboo *this)

{
  ~PlantAnimRig_Bamboo(this + -0x10);
  return;
}


/* PlantAnimRig_Bamboo::~PlantAnimRig_Bamboo() */

void __thiscall PlantAnimRig_Bamboo::~PlantAnimRig_Bamboo(PlantAnimRig_Bamboo *this)

{
  ~PlantAnimRig_Bamboo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Bamboo::~PlantAnimRig_Bamboo() */

void __thiscall PlantAnimRig_Bamboo::~PlantAnimRig_Bamboo(PlantAnimRig_Bamboo *this)

{
  ~PlantAnimRig_Bamboo(this + -0x10);
  return;
}


/* PlantAnimRig_Bamboo::PlantAnimRig_Bamboo() */

void __thiscall PlantAnimRig_Bamboo::PlantAnimRig_Bamboo(PlantAnimRig_Bamboo *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_06799f50;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Bamboo_0679a1b8;
  return;
}


/* PlantAnimRig_Bamboo::StaticNew() */

PlantAnimRig_Bamboo * PlantAnimRig_Bamboo::StaticNew(void)

{
  PlantAnimRig_Bamboo *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Bamboo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Bamboo::StaticClassInit() */

void PlantAnimRig_Bamboo::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Bamboo");
    (*pcVar2)(plVar1,asStack_10,FUN_03f55f60,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Bamboo::StaticGetClass() */

long * PlantAnimRig_Bamboo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Bamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Bamboo::GetClass() const */

long * PlantAnimRig_Bamboo::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Bamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Bamboo::PlayPlantFoodStart(int) */

void __thiscall PlantAnimRig_Bamboo::PlayPlantFoodStart(PlantAnimRig_Bamboo *this,int param_1)

{
  int iVar1;
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"prepare2");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 4;
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
/* PlantAnimRig_Bamboo::setHornVisibility() */

void __thiscall PlantAnimRig_Bamboo::setHornVisibility(PlantAnimRig_Bamboo *this)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = ___stack_chk_guard;
  uVar6 = DAT_06ae3680 & 1;
  if (((DAT_06ae3680 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae3680), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ae3688,"spikerock_horn_right");
    nop();
    std::string::string((string *)&DAT_06ae3690,"spikerock_horn_mid");
    nop();
    std::string::string((string *)&DAT_06ae3698,"spikerock_horn_left");
    nop();
    __cxa_guard_release(&DAT_06ae3680);
    __cxa_atexit(FUN_03f55cf4,uVar6,&DAT_06a88000);
  }
  if (((DAT_06ae3678 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae3678), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ae36a0,(string *)&DAT_06ae3688,(allocator *)&DAT_06ae36a0);
    __cxa_guard_release(&DAT_06ae3678);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ae36a0,
                 &DAT_06a88000);
  }
  uVar6 = 0;
  while( true ) {
    uVar1 = DAT_06ae36a0;
    uVar5 = FUN_03f55db0(DAT_06ae36a0,DAT_06ae36a8);
    if (uVar5 <= uVar6) break;
    psVar4 = (string *)FUN_03f55dbc(uVar1,uVar6);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,*(int *)(this + 0x3b8) <= (int)uVar6);
    uVar6 = uVar6 + 1;
  }
  if (lVar2 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAnimRig_Bamboo::SetLostHornCount(int) */

void __thiscall PlantAnimRig_Bamboo::SetLostHornCount(PlantAnimRig_Bamboo *this,int param_1)

{
  *(int *)(this + 0x3b8) = param_1;
  setHornVisibility(this);
  return;
}


/* PlantAnimRig_Bamboo::onAnimStopped() */

void __thiscall PlantAnimRig_Bamboo::onAnimStopped(PlantAnimRig_Bamboo *this)

{
  if (*(int *)(this + 0x218) != 2) {
    PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
    return;
  }
  return;
}


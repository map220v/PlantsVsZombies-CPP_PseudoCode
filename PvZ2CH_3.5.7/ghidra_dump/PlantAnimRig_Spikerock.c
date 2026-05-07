// Class: PlantAnimRig_Spikerock


/* PlantAnimRig_Spikerock::~PlantAnimRig_Spikerock() */

void __thiscall PlantAnimRig_Spikerock::~PlantAnimRig_Spikerock(PlantAnimRig_Spikerock *this)

{
  *(undefined ***)this = &PTR_GetClass_0679d2c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Spikerock_0679d528;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Spikerock::~PlantAnimRig_Spikerock() */

void __thiscall PlantAnimRig_Spikerock::~PlantAnimRig_Spikerock(PlantAnimRig_Spikerock *this)

{
  ~PlantAnimRig_Spikerock(this + -0x10);
  return;
}


/* PlantAnimRig_Spikerock::~PlantAnimRig_Spikerock() */

void __thiscall PlantAnimRig_Spikerock::~PlantAnimRig_Spikerock(PlantAnimRig_Spikerock *this)

{
  ~PlantAnimRig_Spikerock(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Spikerock::~PlantAnimRig_Spikerock() */

void __thiscall PlantAnimRig_Spikerock::~PlantAnimRig_Spikerock(PlantAnimRig_Spikerock *this)

{
  ~PlantAnimRig_Spikerock(this + -0x10);
  return;
}


/* PlantAnimRig_Spikerock::PlantAnimRig_Spikerock() */

void __thiscall PlantAnimRig_Spikerock::PlantAnimRig_Spikerock(PlantAnimRig_Spikerock *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_0679d2c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Spikerock_0679d528;
  return;
}


/* PlantAnimRig_Spikerock::StaticNew() */

PlantAnimRig_Spikerock * PlantAnimRig_Spikerock::StaticNew(void)

{
  PlantAnimRig_Spikerock *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Spikerock(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Spikerock::StaticClassInit() */

void PlantAnimRig_Spikerock::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Spikerock");
    (*pcVar2)(plVar1,asStack_10,FUN_03f5dc04,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Spikerock::StaticGetClass() */

long * PlantAnimRig_Spikerock::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Spikerock",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Spikerock::GetClass() const */

long * PlantAnimRig_Spikerock::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Spikerock",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Spikerock::PlayPlantFoodStart(int) */

void __thiscall PlantAnimRig_Spikerock::PlayPlantFoodStart(PlantAnimRig_Spikerock *this,int param_1)

{
  int iVar1;
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aDStack_50);
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
/* PlantAnimRig_Spikerock::setHornVisibility() */

void __thiscall PlantAnimRig_Spikerock::setHornVisibility(PlantAnimRig_Spikerock *this)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = ___stack_chk_guard;
  uVar6 = DAT_06ae3d50 & 1;
  if (((DAT_06ae3d50 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae3d50), iVar3 != 0)) {
    std::string::string((string *)&DAT_06ae3d98,"spikerock_horn_right");
    nop();
    std::string::string((string *)&DAT_06ae3da0,"spikerock_horn_mid");
    nop();
    std::string::string((string *)&DAT_06ae3da8,"spikerock_horn_left");
    nop();
    __cxa_guard_release(&DAT_06ae3d50);
    __cxa_atexit(FUN_03f5d998,uVar6,&DAT_06a88000);
  }
  if (((DAT_06ae3d68 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06ae3d68), iVar3 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ae3d70,(string *)&DAT_06ae3d98,(allocator *)&DAT_06ae3db0);
    __cxa_guard_release(&DAT_06ae3d68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ae3d70,
                 &DAT_06a88000);
  }
  uVar6 = 0;
  while( true ) {
    uVar1 = DAT_06ae3d70;
    uVar5 = FUN_03f5da54(DAT_06ae3d70,DAT_06ae3d78);
    if (uVar5 <= uVar6) break;
    psVar4 = (string *)FUN_03f5da60(uVar1,uVar6);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,*(int *)(this + 0x3b8) <= (int)uVar6);
    uVar6 = uVar6 + 1;
  }
  if (lVar2 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAnimRig_Spikerock::SetLostHornCount(int) */

void __thiscall PlantAnimRig_Spikerock::SetLostHornCount(PlantAnimRig_Spikerock *this,int param_1)

{
  *(int *)(this + 0x3b8) = param_1;
  setHornVisibility(this);
  return;
}


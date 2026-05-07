// Class: PlantAnimRig_CoconutCannon


/* PlantAnimRig_CoconutCannon::~PlantAnimRig_CoconutCannon() */

void __thiscall
PlantAnimRig_CoconutCannon::~PlantAnimRig_CoconutCannon(PlantAnimRig_CoconutCannon *this)

{
  *(undefined ***)this = &PTR_GetClass_0679b230;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_CoconutCannon_0679b498;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_CoconutCannon::~PlantAnimRig_CoconutCannon() */

void __thiscall
PlantAnimRig_CoconutCannon::~PlantAnimRig_CoconutCannon(PlantAnimRig_CoconutCannon *this)

{
  ~PlantAnimRig_CoconutCannon(this + -0x10);
  return;
}


/* PlantAnimRig_CoconutCannon::~PlantAnimRig_CoconutCannon() */

void __thiscall
PlantAnimRig_CoconutCannon::~PlantAnimRig_CoconutCannon(PlantAnimRig_CoconutCannon *this)

{
  ~PlantAnimRig_CoconutCannon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_CoconutCannon::~PlantAnimRig_CoconutCannon() */

void __thiscall
PlantAnimRig_CoconutCannon::~PlantAnimRig_CoconutCannon(PlantAnimRig_CoconutCannon *this)

{
  ~PlantAnimRig_CoconutCannon(this + -0x10);
  return;
}


/* PlantAnimRig_CoconutCannon::PlantAnimRig_CoconutCannon() */

void __thiscall
PlantAnimRig_CoconutCannon::PlantAnimRig_CoconutCannon(PlantAnimRig_CoconutCannon *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679b230;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_CoconutCannon_0679b498;
  Set8BytesTo0(this + 0x3b8);
  return;
}


/* PlantAnimRig_CoconutCannon::StaticNew() */

PlantAnimRig_CoconutCannon * PlantAnimRig_CoconutCannon::StaticNew(void)

{
  PlantAnimRig_CoconutCannon *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_CoconutCannon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CoconutCannon::StaticClassInit() */

void PlantAnimRig_CoconutCannon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_CoconutCannon");
    (*pcVar2)(plVar1,asStack_10,FUN_03f598c0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_CoconutCannon::StaticGetClass() */

long * PlantAnimRig_CoconutCannon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_CoconutCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_CoconutCannon::GetClass() const */

long * PlantAnimRig_CoconutCannon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_CoconutCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CoconutCannon::PlayPlantFoodEnd() */

void __thiscall PlantAnimRig_CoconutCannon::PlayPlantFoodEnd(PlantAnimRig_CoconutCannon *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"recover");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CoconutCannon::PlayIdleLooped() */

void __thiscall PlantAnimRig_CoconutCannon::PlayIdleLooped(PlantAnimRig_CoconutCannon *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  size_t in_x2;
  ulong uVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ae3980);
  if (lVar3 == 0) {
    uVar4 = 1;
    Set8BytesTo0(asStack_48);
    lVar3 = 0;
    do {
      std::string::append(asStack_48,"idle",in_x2);
      FUN_05475d88(asStack_40,asStack_48);
      in_x2 = 10;
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ae3980,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      while( true ) {
        lVar3 = lVar3 + 1;
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar1;
        Set8BytesTo0(asStack_48);
        if (lVar3 == 0) break;
        Sexy::StrFormat("idle%d",asStack_40,uVar4);
        FUN_05474278(asStack_48,asStack_40);
        std::string::~string(asStack_40);
        FUN_05475d88(asStack_40,asStack_48);
        in_x2 = (size_t)(uint)(&DAT_05752bb0)[lVar3];
        ProbabilitySet<std::string>::AddItem
                  ((ProbabilitySet<std::string> *)&DAT_06ae3980,asStack_40);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        if (uVar1 == 3) goto LAB_03f59c08;
      }
    } while( true );
  }
LAB_03f59c08:
  ProbabilitySet<std::string>::PickItemIgnoring((string *)&DAT_06ae3980);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar2 != -1) {
    thunk_FUN_05475e00(this + 0x3b8,asStack_40);
    *(undefined4 *)(this + 0x218) = 1;
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


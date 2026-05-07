// Class: PlantAnimRig_DragonCane


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonCane::getPlantFoodOffAnimName() */

void __thiscall PlantAnimRig_DragonCane::getPlantFoodOffAnimName(PlantAnimRig_DragonCane *this)

{
  long lVar1;
  string *in_x8;
  float fVar2;
  
  lVar1 = ___stack_chk_guard;
  fVar2 = (float)Sexy::Rand(1.0);
  if (fVar2 <= 0.5) {
    std::string::string(in_x8,"plantfood_off");
    nop();
  }
  else {
    std::string::string(in_x8,"plantfood_off1");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_DragonCane::~PlantAnimRig_DragonCane() */

void __thiscall PlantAnimRig_DragonCane::~PlantAnimRig_DragonCane(PlantAnimRig_DragonCane *this)

{
  *(undefined ***)this = &PTR_GetClass_067ee5d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DragonCane_067ee838;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DragonCane::~PlantAnimRig_DragonCane() */

void __thiscall PlantAnimRig_DragonCane::~PlantAnimRig_DragonCane(PlantAnimRig_DragonCane *this)

{
  ~PlantAnimRig_DragonCane(this + -0x10);
  return;
}


/* PlantAnimRig_DragonCane::~PlantAnimRig_DragonCane() */

void __thiscall PlantAnimRig_DragonCane::~PlantAnimRig_DragonCane(PlantAnimRig_DragonCane *this)

{
  ~PlantAnimRig_DragonCane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_DragonCane::~PlantAnimRig_DragonCane() */

void __thiscall PlantAnimRig_DragonCane::~PlantAnimRig_DragonCane(PlantAnimRig_DragonCane *this)

{
  ~PlantAnimRig_DragonCane(this + -0x10);
  return;
}


/* PlantAnimRig_DragonCane::PlantAnimRig_DragonCane() */

void __thiscall PlantAnimRig_DragonCane::PlantAnimRig_DragonCane(PlantAnimRig_DragonCane *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067ee5d0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_DragonCane_067ee838;
  Set8BytesTo0(this + 0x3b8);
  return;
}


/* PlantAnimRig_DragonCane::StaticNew() */

PlantAnimRig_DragonCane * PlantAnimRig_DragonCane::StaticNew(void)

{
  PlantAnimRig_DragonCane *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_DragonCane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonCane::StaticClassInit() */

void PlantAnimRig_DragonCane::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_DragonCane");
    (*pcVar2)(plVar1,asStack_10,FUN_04142d18,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_DragonCane::StaticGetClass() */

long * PlantAnimRig_DragonCane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DragonCane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_DragonCane::GetClass() const */

long * PlantAnimRig_DragonCane::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_DragonCane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonCane::PlayNormalAttack() */

void __thiscall PlantAnimRig_DragonCane::PlayNormalAttack(PlantAnimRig_DragonCane *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonCane::PlayAdvancedAttack() */

void __thiscall PlantAnimRig_DragonCane::PlayAdvancedAttack(PlantAnimRig_DragonCane *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack1");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonCane::PlayAdvancedExtAttack() */

void __thiscall PlantAnimRig_DragonCane::PlayAdvancedExtAttack(PlantAnimRig_DragonCane *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack1L");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonCane::PlaySpecialAttack() */

void __thiscall PlantAnimRig_DragonCane::PlaySpecialAttack(PlantAnimRig_DragonCane *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack2");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_DragonCane::PlayIdleLooped() */

void __thiscall PlantAnimRig_DragonCane::PlayIdleLooped(PlantAnimRig_DragonCane *this)

{
  int iVar1;
  long lVar2;
  size_t in_x2;
  ulong uVar3;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06aee828);
  if (lVar2 == 0) {
    iVar1 = 1;
    Set8BytesTo0(asStack_48);
    uVar3 = 0;
    do {
      std::string::append(asStack_48,"idle",in_x2);
      FUN_05475d88(asStack_40,asStack_48);
      in_x2 = 10;
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06aee828,asStack_40);
      std::string::~string(asStack_40);
      std::string::~string(asStack_48);
      while( true ) {
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 1;
        Set8BytesTo0(asStack_48);
        if (uVar3 == 0) break;
        Sexy::StrFormat("idle%d",asStack_40,uVar3 & 0xffffffff);
        FUN_05474278(asStack_48,asStack_40);
        std::string::~string(asStack_40);
        FUN_05475d88(asStack_40,asStack_48);
        in_x2 = (size_t)(uint)(&DAT_057531d0)[uVar3];
        ProbabilitySet<std::string>::AddItem
                  ((ProbabilitySet<std::string> *)&DAT_06aee828,asStack_40);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        if (iVar1 == 3) goto LAB_04144fb4;
      }
    } while( true );
  }
LAB_04144fb4:
  ProbabilitySet<std::string>::PickItemIgnoring((string *)&DAT_06aee828);
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


// Class: PlantAnimRig_Bonkchoy


/* PlantAnimRig_Bonkchoy::~PlantAnimRig_Bonkchoy() */

void __thiscall PlantAnimRig_Bonkchoy::~PlantAnimRig_Bonkchoy(PlantAnimRig_Bonkchoy *this)

{
  *(undefined ***)this = &PTR_GetClass_0679a4b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Bonkchoy_0679a720;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Bonkchoy::~PlantAnimRig_Bonkchoy() */

void __thiscall PlantAnimRig_Bonkchoy::~PlantAnimRig_Bonkchoy(PlantAnimRig_Bonkchoy *this)

{
  ~PlantAnimRig_Bonkchoy(this + -0x10);
  return;
}


/* PlantAnimRig_Bonkchoy::~PlantAnimRig_Bonkchoy() */

void __thiscall PlantAnimRig_Bonkchoy::~PlantAnimRig_Bonkchoy(PlantAnimRig_Bonkchoy *this)

{
  ~PlantAnimRig_Bonkchoy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Bonkchoy::~PlantAnimRig_Bonkchoy() */

void __thiscall PlantAnimRig_Bonkchoy::~PlantAnimRig_Bonkchoy(PlantAnimRig_Bonkchoy *this)

{
  ~PlantAnimRig_Bonkchoy(this + -0x10);
  return;
}


/* PlantAnimRig_Bonkchoy::PlantAnimRig_Bonkchoy() */

void __thiscall PlantAnimRig_Bonkchoy::PlantAnimRig_Bonkchoy(PlantAnimRig_Bonkchoy *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0679a4b0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Bonkchoy_0679a720;
  Set8BytesTo0(this + 0x3b8);
  return;
}


/* PlantAnimRig_Bonkchoy::StaticNew() */

PlantAnimRig_Bonkchoy * PlantAnimRig_Bonkchoy::StaticNew(void)

{
  PlantAnimRig_Bonkchoy *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Bonkchoy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Bonkchoy::StaticClassInit() */

void PlantAnimRig_Bonkchoy::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Bonkchoy");
    (*pcVar2)(plVar1,asStack_10,FUN_03f56854,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Bonkchoy::StaticGetClass() */

long * PlantAnimRig_Bonkchoy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Bonkchoy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Bonkchoy::GetClass() const */

long * PlantAnimRig_Bonkchoy::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Bonkchoy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Bonkchoy::PlayPunchAttack(PlantAnimRig_Bonkchoy::AttackType,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Bonkchoy::PlayPunchAttack
          (PlantAnimRig_Bonkchoy *this,undefined4 param_2,RtReflectionDelegate *param_3)

{
  int iVar1;
  RtReflectionDelegate *__n;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_3;
  Set8BytesTo0(asStack_58);
  switch(param_2) {
  case 0:
    std::string::append(asStack_58,"attack2",(size_t)__n);
    break;
  case 1:
    std::string::append(asStack_58,"attack",(size_t)__n);
    break;
  case 2:
    std::string::append(asStack_58,"attack5",(size_t)__n);
    break;
  case 3:
    std::string::append(asStack_58,"attack4",(size_t)__n);
    break;
  case 4:
    std::string::append(asStack_58,"attack7",(size_t)__n);
    break;
  case 5:
    std::string::append(asStack_58,"attack6",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Bonkchoy::PlayIdleLooped() */

void __thiscall PlantAnimRig_Bonkchoy::PlayIdleLooped(PlantAnimRig_Bonkchoy *this)

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
  lVar3 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ae3730);
  if (lVar3 == 0) {
    uVar4 = 1;
    Set8BytesTo0(asStack_48);
    lVar3 = 0;
    do {
      std::string::append(asStack_48,"idle",in_x2);
      FUN_05475d88(asStack_40,asStack_48);
      in_x2 = 10;
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ae3730,asStack_40);
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
        in_x2 = (size_t)(uint)(&DAT_05752b90)[lVar3];
        ProbabilitySet<std::string>::AddItem
                  ((ProbabilitySet<std::string> *)&DAT_06ae3730,asStack_40);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        if (uVar1 == 3) goto LAB_03f56b54;
      }
    } while( true );
  }
LAB_03f56b54:
  ProbabilitySet<std::string>::PickItemIgnoring((string *)&DAT_06ae3730);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Bonkchoy::CalcPlantFoodDuration(int) */

void __thiscall
PlantAnimRig_Bonkchoy::CalcPlantFoodDuration(PlantAnimRig_Bonkchoy *this,int param_1)

{
  float fVar1;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (PlantAnimRig_Bonkchoy)0x0) {
    fVar1 = (float)PlantAnimRig::CalcPlantFoodDuration((PlantAnimRig *)this,param_1);
  }
  else {
    std::string::string(asStack_10,"plantfood_on2");
    fVar1 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"plantfood2");
    fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    fVar1 = fVar1 + (float)param_1 * fVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1);
}


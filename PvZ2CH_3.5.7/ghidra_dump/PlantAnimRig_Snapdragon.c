// Class: PlantAnimRig_Snapdragon


/* PlantAnimRig_Snapdragon::~PlantAnimRig_Snapdragon() */

void __thiscall PlantAnimRig_Snapdragon::~PlantAnimRig_Snapdragon(PlantAnimRig_Snapdragon *this)

{
  *(undefined ***)this = &PTR_GetClass_0679d010;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Snapdragon_0679d280;
  std::string::~string((string *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Snapdragon::~PlantAnimRig_Snapdragon() */

void __thiscall PlantAnimRig_Snapdragon::~PlantAnimRig_Snapdragon(PlantAnimRig_Snapdragon *this)

{
  ~PlantAnimRig_Snapdragon(this + -0x10);
  return;
}


/* PlantAnimRig_Snapdragon::~PlantAnimRig_Snapdragon() */

void __thiscall PlantAnimRig_Snapdragon::~PlantAnimRig_Snapdragon(PlantAnimRig_Snapdragon *this)

{
  ~PlantAnimRig_Snapdragon(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Snapdragon::~PlantAnimRig_Snapdragon() */

void __thiscall PlantAnimRig_Snapdragon::~PlantAnimRig_Snapdragon(PlantAnimRig_Snapdragon *this)

{
  ~PlantAnimRig_Snapdragon(this + -0x10);
  return;
}


/* PlantAnimRig_Snapdragon::PlantAnimRig_Snapdragon() */

void __thiscall PlantAnimRig_Snapdragon::PlantAnimRig_Snapdragon(PlantAnimRig_Snapdragon *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  this[0x3bc] = (PlantAnimRig_Snapdragon)0x0;
  *(undefined ***)this = &PTR_GetClass_0679d010;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Snapdragon_0679d280;
  *(undefined4 *)(this + 0x3b8) = 0x3f000000;
  Set8BytesTo0(this + 0x3c0);
  return;
}


/* PlantAnimRig_Snapdragon::StaticNew() */

PlantAnimRig_Snapdragon * PlantAnimRig_Snapdragon::StaticNew(void)

{
  PlantAnimRig_Snapdragon *this;
  
  this = ::operator_new(0x3c8);
  PlantAnimRig_Snapdragon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Snapdragon::StaticClassInit() */

void PlantAnimRig_Snapdragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Snapdragon");
    (*pcVar2)(plVar1,asStack_10,FUN_03f5d4b4,0x3c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Snapdragon::StaticGetClass() */

long * PlantAnimRig_Snapdragon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Snapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Snapdragon::GetClass() const */

long * PlantAnimRig_Snapdragon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Snapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Snapdragon::PlayAttackFireDragon(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Snapdragon::PlayAttackFireDragon
          (PlantAnimRig_Snapdragon *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood2");
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
    this[0x3bc] = (PlantAnimRig_Snapdragon)0x1;
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Snapdragon::PlayPlantFoodStart(int) */

void __thiscall
PlantAnimRig_Snapdragon::PlayPlantFoodStart(PlantAnimRig_Snapdragon *this,int param_1)

{
  int iVar1;
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"plantfood");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_50);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_50);
  std::string::~string(asStack_58);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 3;
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
/* PlantAnimRig_Snapdragon::PlayIdleLooped() */

void __thiscall PlantAnimRig_Snapdragon::PlayIdleLooped(PlantAnimRig_Snapdragon *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ae3ce8);
  if (lVar3 == 0) {
    lVar3 = 0;
    do {
      uVar4 = FUN_03f5d258(DAT_06ae3cb8,lVar3);
      FUN_05475d88(asStack_40,uVar4);
      lVar1 = lVar3 * 4;
      lVar3 = lVar3 + 1;
      ProbabilitySet<std::string>::AddItem
                ((ProbabilitySet<std::string> *)&DAT_06ae3ce8,asStack_40,
                 *(undefined4 *)(&DAT_05752c00 + lVar1));
      std::string::~string(asStack_40);
    } while (lVar3 != 3);
  }
  ProbabilitySet<std::string>::PickItemIgnoring((string *)&DAT_06ae3ce8);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar2 != -1) {
    thunk_FUN_05475e00(this + 0x3c0,asStack_40);
    *(undefined4 *)(this + 0x218) = 1;
  }
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 != -1);
  }
  return;
}


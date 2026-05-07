// Class: PlantAnimRig_Broccoli


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Broccoli::PlayRestLooped() */

void __thiscall PlantAnimRig_Broccoli::PlayRestLooped(PlantAnimRig_Broccoli *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"rest");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_Broccoli::~PlantAnimRig_Broccoli() */

void __thiscall PlantAnimRig_Broccoli::~PlantAnimRig_Broccoli(PlantAnimRig_Broccoli *this)

{
  *(undefined ***)this = &PTR_GetClass_067a0b60;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Broccoli_067a0dc8;
  std::string::~string((string *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Broccoli::~PlantAnimRig_Broccoli() */

void __thiscall PlantAnimRig_Broccoli::~PlantAnimRig_Broccoli(PlantAnimRig_Broccoli *this)

{
  ~PlantAnimRig_Broccoli(this + -0x10);
  return;
}


/* PlantAnimRig_Broccoli::~PlantAnimRig_Broccoli() */

void __thiscall PlantAnimRig_Broccoli::~PlantAnimRig_Broccoli(PlantAnimRig_Broccoli *this)

{
  ~PlantAnimRig_Broccoli(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Broccoli::~PlantAnimRig_Broccoli() */

void __thiscall PlantAnimRig_Broccoli::~PlantAnimRig_Broccoli(PlantAnimRig_Broccoli *this)

{
  ~PlantAnimRig_Broccoli(this + -0x10);
  return;
}


/* PlantAnimRig_Broccoli::PlantAnimRig_Broccoli() */

void __thiscall PlantAnimRig_Broccoli::PlantAnimRig_Broccoli(PlantAnimRig_Broccoli *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067a0b60;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Broccoli_067a0dc8;
  Set8BytesTo0(this + 0x3b8);
  return;
}


/* PlantAnimRig_Broccoli::StaticNew() */

PlantAnimRig_Broccoli * PlantAnimRig_Broccoli::StaticNew(void)

{
  PlantAnimRig_Broccoli *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Broccoli(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Broccoli::StaticClassInit() */

void PlantAnimRig_Broccoli::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Broccoli");
    (*pcVar2)(plVar1,asStack_10,FUN_03f6618c,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Broccoli::StaticGetClass() */

long * PlantAnimRig_Broccoli::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Broccoli",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Broccoli::GetClass() const */

long * PlantAnimRig_Broccoli::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Broccoli",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Broccoli::SetIsDamage(bool) */

void __thiscall PlantAnimRig_Broccoli::SetIsDamage(PlantAnimRig_Broccoli *this,bool param_1)

{
  string *psVar1;
  string *psVar2;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"broccoli_headmiddle_01");
  nop();
  std::string::string(asStack_30,"broccoli_backhead_01");
  nop();
  std::string::string(asStack_28,"broccoli_headright_01");
  nop();
  std::string::string(asStack_20,"broccoli_headmiddle_02");
  nop();
  std::string::string(asStack_18,"broccoli_backhead_02");
  nop();
  std::string::string(asStack_10,"broccoli_headright_02");
  nop();
  psVar2 = asStack_38;
  do {
    psVar1 = psVar2 + 8;
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar2,!param_1);
    psVar2 = psVar1;
  } while (psVar1 != asStack_20);
  psVar2 = asStack_20;
  do {
    psVar1 = psVar2 + 8;
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar2,param_1);
    psVar2 = psVar1;
  } while (psVar1 != (string *)&local_8);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Broccoli::PlayAdvancedAttack(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Broccoli::PlayAdvancedAttack(PlantAnimRig_Broccoli *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"advanced_attack");
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
    *(undefined4 *)(this + 0x218) = 2;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Broccoli::PlayPullFail(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Broccoli::PlayPullFail(PlantAnimRig_Broccoli *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"cannotmove");
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
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Broccoli::PlayIdleLooped() */

void __thiscall PlantAnimRig_Broccoli::PlayIdleLooped(PlantAnimRig_Broccoli *this)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *__n;
  ulong uVar4;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  undefined *local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  if (((DAT_06ae4560 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ae4560), iVar2 != 0)) {
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
              ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)&DAT_06ae4510);
    __cxa_guard_release(&DAT_06ae4560);
    __n = &DAT_06a88000;
    __cxa_atexit(ProbabilitySet<std::string>::~ProbabilitySet,&DAT_06ae4510);
  }
  lVar3 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06ae4510);
  if (lVar3 == 0) {
    uVar4 = 1;
    Set8BytesTo0(asStack_48);
    lVar3 = 0;
    do {
      std::string::append(asStack_48,"idle",(size_t)__n);
      FUN_05475d88(asStack_40,asStack_48);
      __n = (undefined *)0xa;
      ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06ae4510,asStack_40);
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
        __n = (undefined *)(ulong)(uint)(&DAT_05752c30)[lVar3];
        ProbabilitySet<std::string>::AddItem
                  ((ProbabilitySet<std::string> *)&DAT_06ae4510,asStack_40);
        std::string::~string(asStack_40);
        std::string::~string(asStack_48);
        if (uVar1 == 3) goto LAB_03f66680;
      }
    } while( true );
  }
LAB_03f66680:
  ProbabilitySet<std::string>::PickItemIgnoring((string *)&DAT_06ae4510);
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


/* PlantAnimRig_Broccoli::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Broccoli::onPopAnimInitialized(PlantAnimRig_Broccoli *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  SetIsDamage(this,false);
  return;
}


// Class: PlantAnimRig_Vamporcini


/* PlantAnimRig_Vamporcini::SetShield(bool) */

void __thiscall PlantAnimRig_Vamporcini::SetShield(PlantAnimRig_Vamporcini *this,bool param_1)

{
  this[0x3b9] = (PlantAnimRig_Vamporcini)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::getIdleAnimationName() */

void PlantAnimRig_Vamporcini::getIdleAnimationName(void)

{
  long in_x0;
  char *__s;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3b8) == '\0') {
    __s = "idle";
  }
  else {
    __s = "full_idle";
  }
  __n = auStack_10;
  std::string::string(in_x8,__s);
  nop();
  if (*(char *)(in_x0 + 0x3b9) != '\0') {
    std::string::append(in_x8,"plantfood_idle",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::getPlantFoodOnAnimName() */

void PlantAnimRig_Vamporcini::getPlantFoodOnAnimName(void)

{
  long in_x0;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood_start");
  nop();
  if (*(char *)(in_x0 + 0x3ba) == '\0') {
    if (*(char *)(in_x0 + 0x3b8) != '\0') {
      std::string::append(in_x8,"plantfood_fullstart",(size_t)__n);
    }
  }
  else if (*(char *)(in_x0 + 0x3b8) == '\0') {
    std::string::append(in_x8,"plantfood2_start",(size_t)__n);
  }
  else {
    std::string::append(in_x8,"plantfood2_fullstart",(size_t)__n);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::SetArmorStateIndex(int) */

void __thiscall
PlantAnimRig_Vamporcini::SetArmorStateIndex(PlantAnimRig_Vamporcini *this,int param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  string *psVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = (**(code **)(*(long *)this + 600))();
  std::string::string(asStack_10,"vamp_cloak");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"vamp_customcloak_full");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"vamp_cloak_damage");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"vamp_cloak_full");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"vamp_customcloak_damage");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  lVar5 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = DAT_06b96b68;
      if (this[0x220] == (PlantAnimRig_Vamporcini)0x0) {
        uVar3 = DAT_06b96b20;
      }
      lVar1 = lVar5 + 1;
      psVar4 = (string *)FUN_04d088dc(uVar3,lVar5);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,param_1 == (int)lVar5);
      lVar5 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAnimRig_Vamporcini::~PlantAnimRig_Vamporcini() */

void __thiscall PlantAnimRig_Vamporcini::~PlantAnimRig_Vamporcini(PlantAnimRig_Vamporcini *this)

{
  *(undefined ***)this = &PTR_GetClass_069a70f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Vamporcini_069a7368;
  PlantAnimRig_Shielded::~PlantAnimRig_Shielded((PlantAnimRig_Shielded *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Vamporcini::~PlantAnimRig_Vamporcini() */

void __thiscall PlantAnimRig_Vamporcini::~PlantAnimRig_Vamporcini(PlantAnimRig_Vamporcini *this)

{
  ~PlantAnimRig_Vamporcini(this + -0x10);
  return;
}


/* PlantAnimRig_Vamporcini::~PlantAnimRig_Vamporcini() */

void __thiscall PlantAnimRig_Vamporcini::~PlantAnimRig_Vamporcini(PlantAnimRig_Vamporcini *this)

{
  ~PlantAnimRig_Vamporcini(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Vamporcini::~PlantAnimRig_Vamporcini() */

void __thiscall PlantAnimRig_Vamporcini::~PlantAnimRig_Vamporcini(PlantAnimRig_Vamporcini *this)

{
  ~PlantAnimRig_Vamporcini(this + -0x10);
  return;
}


/* PlantAnimRig_Vamporcini::PlantAnimRig_Vamporcini() */

void __thiscall PlantAnimRig_Vamporcini::PlantAnimRig_Vamporcini(PlantAnimRig_Vamporcini *this)

{
  PlantAnimRig_Shielded::PlantAnimRig_Shielded((PlantAnimRig_Shielded *)this);
  this[0x3b8] = (PlantAnimRig_Vamporcini)0x0;
  this[0x3b9] = (PlantAnimRig_Vamporcini)0x0;
  *(undefined ***)this = &PTR_GetClass_069a70f0;
  this[0x3ba] = (PlantAnimRig_Vamporcini)0x0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Vamporcini_069a7368;
  return;
}


/* PlantAnimRig_Vamporcini::StaticNew() */

PlantAnimRig_Vamporcini * PlantAnimRig_Vamporcini::StaticNew(void)

{
  PlantAnimRig_Vamporcini *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Vamporcini(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::StaticClassInit() */

void PlantAnimRig_Vamporcini::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Vamporcini");
    (*pcVar2)(plVar1,asStack_10,FUN_04d08fc4,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Vamporcini::StaticGetClass() */

long * PlantAnimRig_Vamporcini::StaticGetClass(void)

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
  uVar2 = PlantAnimRig_Shielded::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Vamporcini",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Vamporcini::GetClass() const */

long * PlantAnimRig_Vamporcini::GetClass(void)

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
  uVar2 = PlantAnimRig_Shielded::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Vamporcini",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayStealHealthOnAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Vamporcini::PlayStealHealthOnAnim
          (PlantAnimRig_Vamporcini *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_start");
  nop();
  if ((this[0x3b8] != (PlantAnimRig_Vamporcini)0x0) || (this[0x3b9] != (PlantAnimRig_Vamporcini)0x0)
     ) {
    std::string::append(asStack_58,"full_start",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayStealHealthOffAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Vamporcini::PlayStealHealthOffAnim
          (PlantAnimRig_Vamporcini *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack_end");
  nop();
  if ((this[0x3b8] != (PlantAnimRig_Vamporcini)0x0) || (this[0x3b9] != (PlantAnimRig_Vamporcini)0x0)
     ) {
    std::string::append(asStack_58,"full_end",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayWakeupAnim(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Vamporcini::PlayWakeupAnim(PlantAnimRig_Vamporcini *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"sleep_end");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayDeathOnAnim(RtReflectionDelegate<Sexy::Delegate1<std::string const&>
   >) */

void __thiscall
PlantAnimRig_Vamporcini::PlayDeathOnAnim
          (PlantAnimRig_Vamporcini *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"death_start");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayLv5DeathOnAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Vamporcini::PlayLv5DeathOnAnim
          (PlantAnimRig_Vamporcini *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"lv5_start");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayDeathOffAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Vamporcini::PlayDeathOffAnim
          (PlantAnimRig_Vamporcini *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"death_end");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayLv5DeathOffAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Vamporcini::PlayLv5DeathOffAnim
          (PlantAnimRig_Vamporcini *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"lv5_end");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayContract(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Vamporcini::PlayContract(PlantAnimRig_Vamporcini *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"full_contract");
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
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Vamporcini::getArmorStateLayerNames() const */

undefined8 * __thiscall
PlantAnimRig_Vamporcini::getArmorStateLayerNames(PlantAnimRig_Vamporcini *this)

{
  if (this[0x220] == (PlantAnimRig_Vamporcini)0x0) {
    return &DAT_06b96b20;
  }
  return &DAT_06b96b68;
}


/* PlantAnimRig_Vamporcini::GetArmorStateCount() */

void __thiscall PlantAnimRig_Vamporcini::GetArmorStateCount(PlantAnimRig_Vamporcini *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)getArmorStateLayerNames(this);
  FUN_04d088d0(*puVar1,puVar1[1]);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayStealHealthLoopAnim() */

void __thiscall PlantAnimRig_Vamporcini::PlayStealHealthLoopAnim(PlantAnimRig_Vamporcini *this)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack_loop");
  nop();
  if ((this[0x3b8] != (PlantAnimRig_Vamporcini)0x0) || (this[0x3b9] != (PlantAnimRig_Vamporcini)0x0)
     ) {
    std::string::append(asStack_40,"full_loop",(size_t)__n);
  }
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayAndContinueSleepAnim() */

void __thiscall PlantAnimRig_Vamporcini::PlayAndContinueSleepAnim(PlantAnimRig_Vamporcini *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"full_sleep");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayAndContinuePFLoopAnim() */

void __thiscall PlantAnimRig_Vamporcini::PlayAndContinuePFLoopAnim(PlantAnimRig_Vamporcini *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"pf_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayDeathLoopAnim() */

void __thiscall PlantAnimRig_Vamporcini::PlayDeathLoopAnim(PlantAnimRig_Vamporcini *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"death_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayLv5DeathLoopAnim() */

void __thiscall PlantAnimRig_Vamporcini::PlayLv5DeathLoopAnim(PlantAnimRig_Vamporcini *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"lv5_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayWaitAnim() */

void __thiscall PlantAnimRig_Vamporcini::PlayWaitAnim(PlantAnimRig_Vamporcini *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"water");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayPFIdleAnim() */

void __thiscall PlantAnimRig_Vamporcini::PlayPFIdleAnim(PlantAnimRig_Vamporcini *this)

{
  int iVar1;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3b9] == (PlantAnimRig_Vamporcini)0x0) {
    __s = "full_idle";
  }
  else {
    __s = "plantfood_idle";
  }
  std::string::string(asStack_40,__s);
  nop();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Vamporcini::PlayIdleAnim() */

void __thiscall PlantAnimRig_Vamporcini::PlayIdleAnim(PlantAnimRig_Vamporcini *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1e8))(asStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


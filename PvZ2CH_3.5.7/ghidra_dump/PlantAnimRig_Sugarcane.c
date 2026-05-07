// Class: PlantAnimRig_Sugarcane


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::getPlantFoodMainAnimName() */

void PlantAnimRig_Sugarcane::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x220) == '\0') {
    __s = "plantfood";
  }
  else {
    __s = "plantfood_01";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Sugarcane::~PlantAnimRig_Sugarcane() */

void __thiscall PlantAnimRig_Sugarcane::~PlantAnimRig_Sugarcane(PlantAnimRig_Sugarcane *this)

{
  *(undefined ***)this = &PTR_GetClass_067d9960;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sugarcane_067d9bc8;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sugarcane::~PlantAnimRig_Sugarcane() */

void __thiscall PlantAnimRig_Sugarcane::~PlantAnimRig_Sugarcane(PlantAnimRig_Sugarcane *this)

{
  ~PlantAnimRig_Sugarcane(this + -0x10);
  return;
}


/* PlantAnimRig_Sugarcane::~PlantAnimRig_Sugarcane() */

void __thiscall PlantAnimRig_Sugarcane::~PlantAnimRig_Sugarcane(PlantAnimRig_Sugarcane *this)

{
  ~PlantAnimRig_Sugarcane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Sugarcane::~PlantAnimRig_Sugarcane() */

void __thiscall PlantAnimRig_Sugarcane::~PlantAnimRig_Sugarcane(PlantAnimRig_Sugarcane *this)

{
  ~PlantAnimRig_Sugarcane(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::StaticClassInit() */

void PlantAnimRig_Sugarcane::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Sugarcane");
    (*pcVar2)(plVar1,asStack_10,FUN_040c841c,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Sugarcane::StaticGetClass() */

long * PlantAnimRig_Sugarcane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Sugarcane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Sugarcane::GetClass() const */

long * PlantAnimRig_Sugarcane::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Sugarcane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Sugarcane::PlantAnimRig_Sugarcane() */

void __thiscall PlantAnimRig_Sugarcane::PlantAnimRig_Sugarcane(PlantAnimRig_Sugarcane *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067d9960;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Sugarcane_067d9bc8;
  return;
}


/* PlantAnimRig_Sugarcane::StaticNew() */

PlantAnimRig_Sugarcane * PlantAnimRig_Sugarcane::StaticNew(void)

{
  PlantAnimRig_Sugarcane *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_Sugarcane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::GetStoopingName() */

void __thiscall PlantAnimRig_Sugarcane::GetStoopingName(PlantAnimRig_Sugarcane *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"stooping");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::PlayStooping(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Sugarcane::PlayStooping(PlantAnimRig_Sugarcane *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetStoopingName(this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::GetStoopedName() */

void __thiscall PlantAnimRig_Sugarcane::GetStoopedName(PlantAnimRig_Sugarcane *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"stooped");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::PlayDie(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Sugarcane::PlayDie(PlantAnimRig_Sugarcane *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemMagicMirrorRig::getDisAppearingAnimLabel((GridItemMagicMirrorRig *)this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::GetRecoverStraightName() */

void __thiscall PlantAnimRig_Sugarcane::GetRecoverStraightName(PlantAnimRig_Sugarcane *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"recover_straight");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::PlayRecoverStraight(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantAnimRig_Sugarcane::PlayRecoverStraight
          (PlantAnimRig_Sugarcane *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetRecoverStraightName(this);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  std::string::~string(asStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::UpdateDamageState() */

void __thiscall PlantAnimRig_Sugarcane::UpdateDamageState(PlantAnimRig_Sugarcane *this)

{
  string *psVar1;
  int iVar2;
  string *psVar3;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_48,"bamboo_body_01");
  nop();
  std::string::string(asStack_40,"bamboo_body_a_01");
  nop();
  std::string::string(asStack_38,"bamboo_body_c_01");
  nop();
  std::string::string(asStack_30,"bamboo_body_d_01");
  nop();
  std::string::string(asStack_28,"bamboo_body_02");
  nop();
  std::string::string(asStack_20,"bamboo_body_a_02");
  nop();
  std::string::string(asStack_18,"bamboo_body_c_02");
  nop();
  std::string::string(asStack_10,"bamboo_body_d_02");
  nop();
  iVar2 = *(int *)(this + 0x22c);
  psVar3 = asStack_48;
  do {
    psVar1 = psVar3 + 8;
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,iVar2 < 1);
    psVar3 = psVar1;
  } while (psVar1 != asStack_28);
  psVar3 = asStack_28;
  do {
    psVar1 = psVar3 + 8;
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,0 < iVar2);
    psVar3 = psVar1;
  } while (psVar1 != (string *)&local_8);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::onDamageStateIndexChanged(int) */

void PlantAnimRig_Sugarcane::onDamageStateIndexChanged(int param_1)

{
  string *psVar1;
  int iVar2;
  PopAnimRig *this;
  string *psVar3;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  this = (PopAnimRig *)(ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_48,"bamboo_body_01");
  nop();
  std::string::string(asStack_40,"bamboo_body_a_01");
  nop();
  std::string::string(asStack_38,"bamboo_body_c_01");
  nop();
  std::string::string(asStack_30,"bamboo_body_d_01");
  nop();
  std::string::string(asStack_28,"bamboo_body_02");
  nop();
  std::string::string(asStack_20,"bamboo_body_a_02");
  nop();
  std::string::string(asStack_18,"bamboo_body_c_02");
  nop();
  std::string::string(asStack_10,"bamboo_body_d_02");
  nop();
  iVar2 = *(int *)(this + 0x22c);
  psVar3 = asStack_48;
  do {
    psVar1 = psVar3 + 8;
    PopAnimRig::SetLayerVisibility(this,psVar3,iVar2 < 1);
    psVar3 = psVar1;
  } while (psVar1 != asStack_28);
  psVar3 = asStack_28;
  do {
    psVar1 = psVar3 + 8;
    PopAnimRig::SetLayerVisibility(this,psVar3,0 < iVar2);
    psVar3 = psVar1;
  } while (psVar1 != (string *)&lStack_8);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Sugarcane::PlayStoopLooped() */

void __thiscall PlantAnimRig_Sugarcane::PlayStoopLooped(PlantAnimRig_Sugarcane *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetStoopedName(this);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x218) = 0xe;
  }
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* PlantAnimRig_Sugarcane::onPopAnimInitialized() */

void __thiscall PlantAnimRig_Sugarcane::onPopAnimInitialized(PlantAnimRig_Sugarcane *this)

{
  PlantAnimRig::onPopAnimInitialized((PlantAnimRig *)this);
  UpdateDamageState(this);
  return;
}


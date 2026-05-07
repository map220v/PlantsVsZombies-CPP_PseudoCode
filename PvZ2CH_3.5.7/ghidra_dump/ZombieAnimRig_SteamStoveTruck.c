// Class: ZombieAnimRig_SteamStoveTruck


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamStoveTruck::getWalkAnimationName() */

void ZombieAnimRig_SteamStoveTruck::getWalkAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((*(int *)(in_x0 + 0x240) == 8) || (*(int *)(in_x0 + 0x240) != 9)) {
    __s = "walk";
  }
  else {
    __s = "walk2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(in_x8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamStoveTruck::getDieAnimationName() */

void ZombieAnimRig_SteamStoveTruck::getDieAnimationName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x240) == 10) {
    __s = "animation";
  }
  else {
    __s = "die";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_SteamStoveTruck::~ZombieAnimRig_SteamStoveTruck() */

void __thiscall
ZombieAnimRig_SteamStoveTruck::~ZombieAnimRig_SteamStoveTruck(ZombieAnimRig_SteamStoveTruck *this)

{
  *(undefined ***)this = &PTR_GetClass_067508b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SteamStoveTruck_06750b28;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SteamStoveTruck::~ZombieAnimRig_SteamStoveTruck() */

void __thiscall
ZombieAnimRig_SteamStoveTruck::~ZombieAnimRig_SteamStoveTruck(ZombieAnimRig_SteamStoveTruck *this)

{
  ~ZombieAnimRig_SteamStoveTruck(this + -0x10);
  return;
}


/* ZombieAnimRig_SteamStoveTruck::~ZombieAnimRig_SteamStoveTruck() */

void __thiscall
ZombieAnimRig_SteamStoveTruck::~ZombieAnimRig_SteamStoveTruck(ZombieAnimRig_SteamStoveTruck *this)

{
  ~ZombieAnimRig_SteamStoveTruck(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_SteamStoveTruck::~ZombieAnimRig_SteamStoveTruck() */

void __thiscall
ZombieAnimRig_SteamStoveTruck::~ZombieAnimRig_SteamStoveTruck(ZombieAnimRig_SteamStoveTruck *this)

{
  ~ZombieAnimRig_SteamStoveTruck(this + -0x10);
  return;
}


/* ZombieAnimRig_SteamStoveTruck::ZombieAnimRig_SteamStoveTruck() */

void __thiscall
ZombieAnimRig_SteamStoveTruck::ZombieAnimRig_SteamStoveTruck(ZombieAnimRig_SteamStoveTruck *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067508b0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_SteamStoveTruck_06750b28;
  return;
}


/* ZombieAnimRig_SteamStoveTruck::StaticNew() */

ZombieAnimRig_SteamStoveTruck * ZombieAnimRig_SteamStoveTruck::StaticNew(void)

{
  ZombieAnimRig_SteamStoveTruck *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_SteamStoveTruck(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamStoveTruck::StaticClassInit() */

void ZombieAnimRig_SteamStoveTruck::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_SteamStoveTruck");
    (*pcVar2)(plVar1,asStack_10,FUN_03c3c500,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_SteamStoveTruck::StaticGetClass() */

long * ZombieAnimRig_SteamStoveTruck::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SteamStoveTruck",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_SteamStoveTruck::GetClass() const */

long * ZombieAnimRig_SteamStoveTruck::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_SteamStoveTruck",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamStoveTruck::PlayExplode(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
ZombieAnimRig_SteamStoveTruck::PlayExplode
          (ZombieAnimRig_SteamStoveTruck *this,RtReflectionDelegate *param_2)

{
  code *pcVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0x170);
  std::string::string(asStack_58,"boom");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  (*pcVar1)(this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  ZombieAnimRig_ZombossMech_Future::SetRocketStartAnimFromTileType
            ((ZombieAnimRig_ZombossMech_Future *)this,10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamStoveTruck::SetTempState(int) */

void __thiscall
ZombieAnimRig_SteamStoveTruck::SetTempState(ZombieAnimRig_SteamStoveTruck *this,int param_1)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (4 < (uint)param_1) goto LAB_03c3c9c4;
  switch(param_1) {
  case 0:
    std::string::string(asStack_10,"lamp1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp2");
    bVar1 = false;
    break;
  case 1:
    std::string::string(asStack_10,"lamp1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp2");
    bVar1 = true;
    break;
  case 2:
    std::string::string(asStack_10,"lamp1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp3");
    bVar1 = true;
    goto LAB_03c3caf4;
  case 3:
    std::string::string(asStack_10,"lamp1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp3");
    bVar1 = false;
    goto LAB_03c3c97c;
  case 4:
    std::string::string(asStack_10,"lamp1");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp2");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp3");
    bVar1 = true;
LAB_03c3c97c:
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"lamp4");
    bVar1 = true;
    goto LAB_03c3c9b0;
  }
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"lamp3");
  bVar1 = false;
LAB_03c3caf4:
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"lamp4");
  bVar1 = false;
LAB_03c3c9b0:
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar1);
  std::string::~string(asStack_10);
  nop();
LAB_03c3c9c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_SteamStoveTruck::onPopAnimInitialized() */

void __thiscall
ZombieAnimRig_SteamStoveTruck::onPopAnimInitialized(ZombieAnimRig_SteamStoveTruck *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x240) = 8;
  SetTempState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_SteamStoveTruck::getHeadLayerNames() */

void ZombieAnimRig_SteamStoveTruck::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06acff18 & 1;
  if (((DAT_06acff18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acff18), iVar2 != 0)) {
    std::string::string((string *)&DAT_06acff08,"zombie_skull");
    nop();
    std::string::string((string *)&DAT_06acff10,"zombie_jaw");
    nop();
    __cxa_guard_release(&DAT_06acff18);
    __cxa_atexit(FUN_03c3ba18,uVar3,&DAT_06a88000);
  }
  if (((DAT_06acffd8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06acffd8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06acffa0,(string *)&DAT_06acff08,(allocator *)&DAT_06acff18);
    __cxa_guard_release(&DAT_06acffd8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06acffa0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06acffa0);
}


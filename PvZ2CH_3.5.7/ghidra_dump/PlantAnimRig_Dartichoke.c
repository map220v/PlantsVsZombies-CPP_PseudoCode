// Class: PlantAnimRig_Dartichoke


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dartichoke::getExhaustedOffAnimName() */

void __thiscall PlantAnimRig_Dartichoke::getExhaustedOffAnimName(PlantAnimRig_Dartichoke *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"reload_end");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dartichoke::getExhaustedAnimName() */

void __thiscall PlantAnimRig_Dartichoke::getExhaustedAnimName(PlantAnimRig_Dartichoke *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"reload_loop");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dartichoke::getPlantFoodOnAnimName() */

void __thiscall PlantAnimRig_Dartichoke::getPlantFoodOnAnimName(PlantAnimRig_Dartichoke *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"plantfood");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dartichoke::getAttackAnimationName() */

void __thiscall PlantAnimRig_Dartichoke::getAttackAnimationName(PlantAnimRig_Dartichoke *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"attack1");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dartichoke::getExhaustedOnAnimName() */

void __thiscall PlantAnimRig_Dartichoke::getExhaustedOnAnimName(PlantAnimRig_Dartichoke *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"reload_start");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Dartichoke::~PlantAnimRig_Dartichoke() */

void __thiscall PlantAnimRig_Dartichoke::~PlantAnimRig_Dartichoke(PlantAnimRig_Dartichoke *this)

{
  *(undefined ***)this = &PTR_GetClass_06830a00;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Dartichoke_06830c68;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Dartichoke::~PlantAnimRig_Dartichoke() */

void __thiscall PlantAnimRig_Dartichoke::~PlantAnimRig_Dartichoke(PlantAnimRig_Dartichoke *this)

{
  ~PlantAnimRig_Dartichoke(this + -0x10);
  return;
}


/* PlantAnimRig_Dartichoke::~PlantAnimRig_Dartichoke() */

void __thiscall PlantAnimRig_Dartichoke::~PlantAnimRig_Dartichoke(PlantAnimRig_Dartichoke *this)

{
  ~PlantAnimRig_Dartichoke(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Dartichoke::~PlantAnimRig_Dartichoke() */

void __thiscall PlantAnimRig_Dartichoke::~PlantAnimRig_Dartichoke(PlantAnimRig_Dartichoke *this)

{
  ~PlantAnimRig_Dartichoke(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dartichoke::StaticClassInit() */

void PlantAnimRig_Dartichoke::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Dartichoke");
    (*pcVar2)(plVar1,asStack_10,FUN_042e1618,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Dartichoke::StaticGetClass() */

long * PlantAnimRig_Dartichoke::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Dartichoke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Dartichoke::GetClass() const */

long * PlantAnimRig_Dartichoke::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Dartichoke",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Dartichoke::PlantAnimRig_Dartichoke() */

void __thiscall PlantAnimRig_Dartichoke::PlantAnimRig_Dartichoke(PlantAnimRig_Dartichoke *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined ***)this = &PTR_GetClass_06830a00;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Dartichoke_06830c68;
  return;
}


/* PlantAnimRig_Dartichoke::StaticNew() */

PlantAnimRig_Dartichoke * PlantAnimRig_Dartichoke::StaticNew(void)

{
  PlantAnimRig_Dartichoke *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Dartichoke(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dartichoke::getFullAmmoLayerNames() */

void PlantAnimRig_Dartichoke::getFullAmmoLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06af7930 & 1;
  if (((DAT_06af7930 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af7930), iVar2 != 0)) {
    std::string::string((string *)&DAT_06af7938,"dart_ammo_01");
    nop();
    std::string::string((string *)&DAT_06af7940,"dart_ammo_02");
    nop();
    std::string::string((string *)&DAT_06af7948,"dart_ammo_03");
    nop();
    std::string::string((string *)&DAT_06af7950,"dart_ammo_04");
    nop();
    std::string::string((string *)&DAT_06af7958,"dart_ammo_05");
    nop();
    std::string::string((string *)&DAT_06af7960,"dart_ammo_06");
    nop();
    std::string::string((string *)&DAT_06af7968,"dart_ammo_07");
    nop();
    std::string::string((string *)&DAT_06af7970,"dart_ammo_08");
    nop();
    std::string::string((string *)&DAT_06af7978,"dart_ammo_09");
    nop();
    std::string::string((string *)&DAT_06af7980,"Dartichoke_whiteglow_effect");
    nop();
    __cxa_guard_release(&DAT_06af7930);
    __cxa_atexit(FUN_042e0e8c,uVar3,&DAT_06a88000);
  }
  if (((DAT_06af7a30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af7a30), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06af7a18,(string *)&DAT_06af7938,(allocator *)&DartichokeProps::sClass
              );
    __cxa_guard_release(&DAT_06af7a30);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06af7a18,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06af7a18);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dartichoke::getHalfAmmoLayerNames() */

void PlantAnimRig_Dartichoke::getHalfAmmoLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06af7a38 & 1;
  if (((DAT_06af7a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af7a38), iVar2 != 0)) {
    std::string::string((string *)&DAT_06af7a40,"dart_ammo_03");
    nop();
    std::string::string((string *)&DAT_06af7a48,"dart_ammo_06");
    nop();
    std::string::string((string *)&DAT_06af7a50,"dart_ammo_09");
    nop();
    __cxa_guard_release(&DAT_06af7a38);
    __cxa_atexit(FUN_042e0ec4,uVar3,&DAT_06a88000);
  }
  if (((DAT_06af79d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af79d0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06af79b8,(string *)&DAT_06af7a40,(allocator *)&DAT_06af7a58);
    __cxa_guard_release(&DAT_06af79d0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06af79b8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06af79b8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Dartichoke::getEmptyAmmoLayerNames() */

void PlantAnimRig_Dartichoke::getEmptyAmmoLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06af7998 & 1;
  if (((DAT_06af7998 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af7998), iVar2 != 0)) {
    __cxa_guard_release(&DAT_06af7998);
    __cxa_atexit(FUN_042e0e88,uVar3,&DAT_06a88000);
  }
  if (((DAT_06af7a00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06af7a00), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06af7a58,(string *)&DartichokeProps::sClass,
               (allocator *)&DartichokeProps::sClass);
    __cxa_guard_release(&DAT_06af7a00);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06af7a58,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06af7a58);
}


/* PlantAnimRig_Dartichoke::UpdateAmmo(int, int) */

void __thiscall
PlantAnimRig_Dartichoke::UpdateAmmo(PlantAnimRig_Dartichoke *this,int param_1,int param_2)

{
  vector *pvVar1;
  
  pvVar1 = (vector *)getFullAmmoLayerNames();
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,pvVar1,false);
  if (0.5 < (float)param_1 / (float)param_2) {
    pvVar1 = (vector *)getFullAmmoLayerNames();
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,pvVar1,true);
    return;
  }
  if (0 < param_1) {
    pvVar1 = (vector *)getHalfAmmoLayerNames();
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,pvVar1,true);
    return;
  }
  pvVar1 = (vector *)getEmptyAmmoLayerNames();
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,pvVar1,true);
  return;
}


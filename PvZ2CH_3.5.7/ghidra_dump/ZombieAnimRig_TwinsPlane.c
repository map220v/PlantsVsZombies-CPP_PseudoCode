// Class: ZombieAnimRig_TwinsPlane


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TwinsPlane::getEatAnimationName() */

void __thiscall ZombieAnimRig_TwinsPlane::getEatAnimationName(ZombieAnimRig_TwinsPlane *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"eat_rush");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TwinsPlane::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_TwinsPlane::onPopAnimInitialized(ZombieAnimRig_TwinsPlane *this)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  undefined **ppuVar4;
  string asStack_10 [8];
  long local_8;
  
  ppuVar4 = &PTR_s_updamage1_065fbb40;
  local_8 = ___stack_chk_guard;
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  do {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)((long)ppuVar4 + lVar3);
      lVar3 = lVar3 + 8;
      std::string::string(asStack_10,(char *)*puVar1);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
      std::string::~string(asStack_10);
      nop();
    } while (lVar3 != 0x10);
    ppuVar4 = ppuVar4 + 2;
  } while (ppuVar4 != (undefined **)&UNK_065fbb80);
  cVar2 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar2 == '\0') {
    std::string::string(asStack_10,"custom_02");
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TwinsPlane::~ZombieAnimRig_TwinsPlane() */

void __thiscall ZombieAnimRig_TwinsPlane::~ZombieAnimRig_TwinsPlane(ZombieAnimRig_TwinsPlane *this)

{
  *(undefined ***)this = &PTR_GetClass_068e2cc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TwinsPlane_068e2f58;
  ZombieAnimRig_SkyCity::~ZombieAnimRig_SkyCity((ZombieAnimRig_SkyCity *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TwinsPlane::~ZombieAnimRig_TwinsPlane() */

void __thiscall ZombieAnimRig_TwinsPlane::~ZombieAnimRig_TwinsPlane(ZombieAnimRig_TwinsPlane *this)

{
  ~ZombieAnimRig_TwinsPlane(this + -0x10);
  return;
}


/* ZombieAnimRig_TwinsPlane::~ZombieAnimRig_TwinsPlane() */

void __thiscall ZombieAnimRig_TwinsPlane::~ZombieAnimRig_TwinsPlane(ZombieAnimRig_TwinsPlane *this)

{
  ~ZombieAnimRig_TwinsPlane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_TwinsPlane::~ZombieAnimRig_TwinsPlane() */

void __thiscall ZombieAnimRig_TwinsPlane::~ZombieAnimRig_TwinsPlane(ZombieAnimRig_TwinsPlane *this)

{
  ~ZombieAnimRig_TwinsPlane(this + -0x10);
  return;
}


/* ZombieAnimRig_TwinsPlane::ZombieAnimRig_TwinsPlane() */

void __thiscall ZombieAnimRig_TwinsPlane::ZombieAnimRig_TwinsPlane(ZombieAnimRig_TwinsPlane *this)

{
  ZombieAnimRig_SkyCity::ZombieAnimRig_SkyCity((ZombieAnimRig_SkyCity *)this);
  *(undefined ***)this = &PTR_GetClass_068e2cc0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_TwinsPlane_068e2f58;
  return;
}


/* ZombieAnimRig_TwinsPlane::StaticNew() */

ZombieAnimRig_TwinsPlane * ZombieAnimRig_TwinsPlane::StaticNew(void)

{
  ZombieAnimRig_TwinsPlane *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_TwinsPlane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TwinsPlane::StaticClassInit() */

void ZombieAnimRig_TwinsPlane::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_TwinsPlane");
    (*pcVar2)(plVar1,asStack_10,FUN_047aa3d0,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_TwinsPlane::StaticGetClass() */

long * ZombieAnimRig_TwinsPlane::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig_SkyCity::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_TwinsPlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_TwinsPlane::GetClass() const */

long * ZombieAnimRig_TwinsPlane::GetClass(void)

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
  uVar2 = ZombieAnimRig_SkyCity::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_TwinsPlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TwinsPlane::ShowLittleDamage(int) */

void __thiscall
ZombieAnimRig_TwinsPlane::ShowLittleDamage(ZombieAnimRig_TwinsPlane *this,int param_1)

{
  ulong uVar1;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = -(ulong)((uint)(param_1 << 1) >> 0x1f) & 0xfffffff000000000 |
          (ulong)(uint)(param_1 << 1) << 4;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,*(char **)((long)&PTR_s_updamage1_065fbb40 + uVar1));
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,*(char **)((long)&PTR_s_updamage01_065fbb48 + uVar1));
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_TwinsPlane::ShowBigDamage(int) */

void __thiscall ZombieAnimRig_TwinsPlane::ShowBigDamage(ZombieAnimRig_TwinsPlane *this,int param_1)

{
  uint uVar1;
  ulong uVar2;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = param_1 * 2 + 1;
  uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,*(char **)((long)&PTR_s_updamage1_065fbb40 + uVar2));
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,*(char **)((long)&PTR_s_updamage01_065fbb48 + uVar2));
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


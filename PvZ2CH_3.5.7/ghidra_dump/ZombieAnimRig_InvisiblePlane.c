// Class: ZombieAnimRig_InvisiblePlane


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_InvisiblePlane::GetCrushPrepareName() */

void __thiscall
ZombieAnimRig_InvisiblePlane::GetCrushPrepareName(ZombieAnimRig_InvisiblePlane *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"eat");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieAnimRig_InvisiblePlane::SetState(ZombieAnimRigState) */

void __thiscall
ZombieAnimRig_InvisiblePlane::SetState(ZombieAnimRig_InvisiblePlane *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x210) = param_2;
  return;
}


/* ZombieAnimRig_InvisiblePlane::~ZombieAnimRig_InvisiblePlane() */

void __thiscall
ZombieAnimRig_InvisiblePlane::~ZombieAnimRig_InvisiblePlane(ZombieAnimRig_InvisiblePlane *this)

{
  *(undefined ***)this = &PTR_GetClass_068dce10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_InvisiblePlane_068dd088;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_InvisiblePlane::~ZombieAnimRig_InvisiblePlane() */

void __thiscall
ZombieAnimRig_InvisiblePlane::~ZombieAnimRig_InvisiblePlane(ZombieAnimRig_InvisiblePlane *this)

{
  ~ZombieAnimRig_InvisiblePlane(this + -0x10);
  return;
}


/* ZombieAnimRig_InvisiblePlane::~ZombieAnimRig_InvisiblePlane() */

void __thiscall
ZombieAnimRig_InvisiblePlane::~ZombieAnimRig_InvisiblePlane(ZombieAnimRig_InvisiblePlane *this)

{
  ~ZombieAnimRig_InvisiblePlane(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_InvisiblePlane::~ZombieAnimRig_InvisiblePlane() */

void __thiscall
ZombieAnimRig_InvisiblePlane::~ZombieAnimRig_InvisiblePlane(ZombieAnimRig_InvisiblePlane *this)

{
  ~ZombieAnimRig_InvisiblePlane(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_InvisiblePlane::StaticClassInit() */

void ZombieAnimRig_InvisiblePlane::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_InvisiblePlane");
    (*pcVar2)(plVar1,asStack_10,FUN_0479c1a0,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_InvisiblePlane::StaticGetClass() */

long * ZombieAnimRig_InvisiblePlane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_InvisiblePlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_InvisiblePlane::GetClass() const */

long * ZombieAnimRig_InvisiblePlane::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieAnimRig_InvisiblePlane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_InvisiblePlane::ZombieAnimRig_InvisiblePlane() */

void __thiscall
ZombieAnimRig_InvisiblePlane::ZombieAnimRig_InvisiblePlane(ZombieAnimRig_InvisiblePlane *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR_GetClass_068dce10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_InvisiblePlane_068dd088;
  return;
}


/* ZombieAnimRig_InvisiblePlane::StaticNew() */

ZombieAnimRig_InvisiblePlane * ZombieAnimRig_InvisiblePlane::StaticNew(void)

{
  ZombieAnimRig_InvisiblePlane *this;
  
  this = ::operator_new(0x248);
  ZombieAnimRig_InvisiblePlane(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_InvisiblePlane::GetCrushName() */

void __thiscall ZombieAnimRig_InvisiblePlane::GetCrushName(ZombieAnimRig_InvisiblePlane *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"eat_ rush");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_InvisiblePlane::GetDamageLayerNames() */

void ZombieAnimRig_InvisiblePlane::GetDamageLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b25798 & 1;
  if (((DAT_06b25798 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b25798), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b257a0,"damage1");
    nop();
    std::string::string((string *)&DAT_06b257a8,"damage2");
    nop();
    __cxa_guard_release(&DAT_06b25798);
    __cxa_atexit(FUN_0479ba18,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b25870 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b25870), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b25888,(string *)&DAT_06b257a0,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b25870);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b25888,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b25888);
}


/* ZombieAnimRig_InvisiblePlane::UpdateDamageLayerVisibility() */

void __thiscall
ZombieAnimRig_InvisiblePlane::UpdateDamageLayerVisibility(ZombieAnimRig_InvisiblePlane *this)

{
  undefined8 *puVar1;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  puVar1 = (undefined8 *)GetDamageLayerNames();
  if (*(int *)(this + 0x240) == 0) {
    while( true ) {
      uVar5 = *puVar1;
      uVar3 = FUN_0479bb1c(uVar5,puVar1[1]);
      if (uVar3 <= uVar4) break;
      psVar2 = (string *)FUN_0479bb28(uVar5,uVar4);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar2,false);
      uVar4 = uVar4 + 1;
    }
    return;
  }
  while( true ) {
    uVar5 = *puVar1;
    uVar3 = FUN_0479bb1c(uVar5,puVar1[1]);
    if (uVar3 <= uVar4) break;
    psVar2 = (string *)FUN_0479bb28(uVar5,uVar4);
    PopAnimRig::SetLayerVisibility
              ((PopAnimRig *)this,psVar2,*(int *)(this + 0x240) + -1 == (int)uVar4);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* ZombieAnimRig_InvisiblePlane::onPopAnimInitialized() */

void __thiscall
ZombieAnimRig_InvisiblePlane::onPopAnimInitialized(ZombieAnimRig_InvisiblePlane *this)

{
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x240) = 0;
  UpdateDamageLayerVisibility(this);
  return;
}


/* ZombieAnimRig_InvisiblePlane::SetDamageIndex(int) */

void __thiscall
ZombieAnimRig_InvisiblePlane::SetDamageIndex(ZombieAnimRig_InvisiblePlane *this,int param_1)

{
  if (*(int *)(this + 0x240) != param_1) {
    *(int *)(this + 0x240) = param_1;
    UpdateDamageLayerVisibility(this);
    return;
  }
  return;
}


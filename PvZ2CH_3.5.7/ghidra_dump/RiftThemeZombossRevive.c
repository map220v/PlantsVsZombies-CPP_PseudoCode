// Class: RiftThemeZombossRevive


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeZombossRevive::StaticClassInit() */

void RiftThemeZombossRevive::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeZombossRevive");
    (*pcVar2)(plVar1,asStack_10,FUN_036faac0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeZombossRevive::StaticGetClass() */

long * RiftThemeZombossRevive::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeZombossRevive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeZombossRevive::GetClass() const */

long * RiftThemeZombossRevive::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeZombossRevive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeZombossRevive::TryRevive() */

RiftThemeZombossRevive __thiscall RiftThemeZombossRevive::TryRevive(RiftThemeZombossRevive *this)

{
  if (this[0x18] != (RiftThemeZombossRevive)0x0) {
    if (*(int *)(this + 0x1c) < 1) {
      return (RiftThemeZombossRevive)0x0;
    }
    *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
  }
  return this[0x18];
}


/* RiftThemeZombossRevive::~RiftThemeZombossRevive() */

void __thiscall RiftThemeZombossRevive::~RiftThemeZombossRevive(RiftThemeZombossRevive *this)

{
  *(undefined ***)this = &PTR_GetClass_06687420;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeZombossRevive::~RiftThemeZombossRevive() */

void __thiscall RiftThemeZombossRevive::~RiftThemeZombossRevive(RiftThemeZombossRevive *this)

{
  ~RiftThemeZombossRevive(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeZombossRevive::RiftThemeZombossRevive() */

void __thiscall RiftThemeZombossRevive::RiftThemeZombossRevive(RiftThemeZombossRevive *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR_GetClass_06687420;
  return;
}


/* RiftThemeZombossRevive::StaticNew() */

RiftThemeZombossRevive * RiftThemeZombossRevive::StaticNew(void)

{
  RiftThemeZombossRevive *this;
  
  this = ::operator_new(0x20);
  RiftThemeZombossRevive(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeZombossRevive::Activate() */

void __thiscall RiftThemeZombossRevive::Activate(RiftThemeZombossRevive *this)

{
  long lVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RiftTheme::Activate((RiftTheme *)this);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(extraout_x0 + 0x48);
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


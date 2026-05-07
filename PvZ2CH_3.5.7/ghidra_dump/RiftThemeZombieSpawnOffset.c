// Class: RiftThemeZombieSpawnOffset


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeZombieSpawnOffset::StaticClassInit() */

void RiftThemeZombieSpawnOffset::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeZombieSpawnOffset");
    (*pcVar2)(plVar1,asStack_10,FUN_0370002c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeZombieSpawnOffset::StaticGetClass() */

long * RiftThemeZombieSpawnOffset::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeZombieSpawnOffset",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeZombieSpawnOffset::GetClass() const */

long * RiftThemeZombieSpawnOffset::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeZombieSpawnOffset",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeZombieSpawnOffset::~RiftThemeZombieSpawnOffset() */

void __thiscall
RiftThemeZombieSpawnOffset::~RiftThemeZombieSpawnOffset(RiftThemeZombieSpawnOffset *this)

{
  *(undefined ***)this = &PTR_GetClass_06688b90;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeZombieSpawnOffset::~RiftThemeZombieSpawnOffset() */

void __thiscall
RiftThemeZombieSpawnOffset::~RiftThemeZombieSpawnOffset(RiftThemeZombieSpawnOffset *this)

{
  ~RiftThemeZombieSpawnOffset(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeZombieSpawnOffset::RiftThemeZombieSpawnOffset() */

void __thiscall
RiftThemeZombieSpawnOffset::RiftThemeZombieSpawnOffset(RiftThemeZombieSpawnOffset *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06688b90;
  return;
}


/* RiftThemeZombieSpawnOffset::StaticNew() */

RiftThemeZombieSpawnOffset * RiftThemeZombieSpawnOffset::StaticNew(void)

{
  RiftThemeZombieSpawnOffset *this;
  
  this = ::operator_new(0x20);
  RiftThemeZombieSpawnOffset(this);
  return this;
}


/* RiftThemeZombieSpawnOffset::Activate() */

void __thiscall RiftThemeZombieSpawnOffset::Activate(RiftThemeZombieSpawnOffset *this)

{
  int iVar1;
  long lVar2;
  
  RiftTheme::Activate((RiftTheme *)this);
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    lVar2 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    FUN_036f75a0(lVar2 + 0xe0,iVar1 * -2);
    return;
  }
  return;
}


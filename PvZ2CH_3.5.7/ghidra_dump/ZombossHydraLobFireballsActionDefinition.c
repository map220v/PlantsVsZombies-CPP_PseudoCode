// Class: ZombossHydraLobFireballsActionDefinition


/* ZombossHydraLobFireballsActionDefinition::~ZombossHydraLobFireballsActionDefinition() */

void __thiscall
ZombossHydraLobFireballsActionDefinition::~ZombossHydraLobFireballsActionDefinition
          (ZombossHydraLobFireballsActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1e590;
  ZombossDarkLobFireballsActionDefinition::~ZombossDarkLobFireballsActionDefinition
            ((ZombossDarkLobFireballsActionDefinition *)this);
  return;
}


/* ZombossHydraLobFireballsActionDefinition::~ZombossHydraLobFireballsActionDefinition() */

void __thiscall
ZombossHydraLobFireballsActionDefinition::~ZombossHydraLobFireballsActionDefinition
          (ZombossHydraLobFireballsActionDefinition *this)

{
  ~ZombossHydraLobFireballsActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraLobFireballsActionDefinition::StaticClassInit() */

void ZombossHydraLobFireballsActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossHydraLobFireballsActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f54c88,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraLobFireballsActionDefinition::StaticGetClass() */

long * ZombossHydraLobFireballsActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombossDarkLobFireballsActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraLobFireballsActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHydraLobFireballsActionDefinition::GetClass() const */

long * ZombossHydraLobFireballsActionDefinition::GetClass(void)

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
  uVar2 = ZombossDarkLobFireballsActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossHydraLobFireballsActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHydraLobFireballsActionDefinition::ZombossHydraLobFireballsActionDefinition() */

void __thiscall
ZombossHydraLobFireballsActionDefinition::ZombossHydraLobFireballsActionDefinition
          (ZombossHydraLobFireballsActionDefinition *this)

{
  ZombossDarkLobFireballsActionDefinition::ZombossDarkLobFireballsActionDefinition
            ((ZombossDarkLobFireballsActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a1e590;
  return;
}


/* ZombossHydraLobFireballsActionDefinition::StaticNew() */

ZombossHydraLobFireballsActionDefinition * ZombossHydraLobFireballsActionDefinition::StaticNew(void)

{
  ZombossHydraLobFireballsActionDefinition *this;
  
  this = ::operator_new(0x60);
  ZombossHydraLobFireballsActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f5e54c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossHydraLobFireballsActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossHydraLobFireballsActionDefinition::TryStartAction
          (ZombossHydraLobFireballsActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossHydraLobFireballsActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


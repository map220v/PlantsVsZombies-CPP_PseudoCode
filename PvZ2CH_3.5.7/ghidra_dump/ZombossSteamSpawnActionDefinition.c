// Class: ZombossSteamSpawnActionDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamSpawnActionDefinition::StaticClassInit() */

void ZombossSteamSpawnActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamSpawnActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_03c42634,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamSpawnActionDefinition::StaticGetClass() */

long * ZombossSteamSpawnActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombossSpawnActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamSpawnActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamSpawnActionDefinition::GetClass() const */

long * ZombossSteamSpawnActionDefinition::GetClass(void)

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
  uVar2 = ZombossSpawnActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamSpawnActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamSpawnActionDefinition::ZombossSteamSpawnActionDefinition() */

void __thiscall
ZombossSteamSpawnActionDefinition::ZombossSteamSpawnActionDefinition
          (ZombossSteamSpawnActionDefinition *this)

{
  ZombossSpawnActionDefinition::ZombossSpawnActionDefinition((ZombossSpawnActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06752cd0;
  return;
}


/* ZombossSteamSpawnActionDefinition::StaticNew() */

ZombossSteamSpawnActionDefinition * ZombossSteamSpawnActionDefinition::StaticNew(void)

{
  ZombossSteamSpawnActionDefinition *this;
  
  this = ::operator_new(0x70);
  ZombossSteamSpawnActionDefinition(this);
  return this;
}


/* ZombossSteamSpawnActionDefinition::~ZombossSteamSpawnActionDefinition() */

void __thiscall
ZombossSteamSpawnActionDefinition::~ZombossSteamSpawnActionDefinition
          (ZombossSteamSpawnActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06752cd0;
  ZombossSpawnActionDefinition::~ZombossSpawnActionDefinition((ZombossSpawnActionDefinition *)this);
  return;
}


/* ZombossSteamSpawnActionDefinition::~ZombossSteamSpawnActionDefinition() */

void __thiscall
ZombossSteamSpawnActionDefinition::~ZombossSteamSpawnActionDefinition
          (ZombossSteamSpawnActionDefinition *this)

{
  ~ZombossSteamSpawnActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03c4f898 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSteamSpawnActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void __thiscall
ZombossSteamSpawnActionDefinition::TryStartAction
          (ZombossSteamSpawnActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossSteamSpawnActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


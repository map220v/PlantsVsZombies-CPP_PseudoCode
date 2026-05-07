// Class: ZombossSpawnGlacierColumnActionDefinition


/* ZombossSpawnGlacierColumnActionDefinition::~ZombossSpawnGlacierColumnActionDefinition() */

void __thiscall
ZombossSpawnGlacierColumnActionDefinition::~ZombossSpawnGlacierColumnActionDefinition
          (ZombossSpawnGlacierColumnActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068d3e60;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSpawnGlacierColumnActionDefinition::~ZombossSpawnGlacierColumnActionDefinition() */

void __thiscall
ZombossSpawnGlacierColumnActionDefinition::~ZombossSpawnGlacierColumnActionDefinition
          (ZombossSpawnGlacierColumnActionDefinition *this)

{
  ~ZombossSpawnGlacierColumnActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnGlacierColumnActionDefinition::StaticClassInit() */

void ZombossSpawnGlacierColumnActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSpawnGlacierColumnActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0476bab0,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSpawnGlacierColumnActionDefinition::StaticGetClass() */

long * ZombossSpawnGlacierColumnActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnGlacierColumnActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnGlacierColumnActionDefinition::GetClass() const */

long * ZombossSpawnGlacierColumnActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnGlacierColumnActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnGlacierColumnActionDefinition::ZombossSpawnGlacierColumnActionDefinition() */

void __thiscall
ZombossSpawnGlacierColumnActionDefinition::ZombossSpawnGlacierColumnActionDefinition
          (ZombossSpawnGlacierColumnActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068d3e60;
  return;
}


/* ZombossSpawnGlacierColumnActionDefinition::StaticNew() */

ZombossSpawnGlacierColumnActionDefinition *
ZombossSpawnGlacierColumnActionDefinition::StaticNew(void)

{
  ZombossSpawnGlacierColumnActionDefinition *this;
  
  this = ::operator_new(0x38);
  ZombossSpawnGlacierColumnActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047700d0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSpawnGlacierColumnActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void ZombossSpawnGlacierColumnActionDefinition::TryStartAction
               (undefined8 param_1,RtWeakPtrBase *param_2)

{
  GlacierModule *this;
  ZombieWithActions *pZVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (GlacierModule *)FUN_0476e5b0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pZVar1 = (ZombieWithActions *)GlacierModule::IsRoomForAdvance(this);
  if (((ulong)pZVar1 & 0xff) != 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    ZombieWithActions::QueueAction<ZombossSpawnGlacierColumnActionHandler>(pZVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((ulong)pZVar1 & 0xff);
}


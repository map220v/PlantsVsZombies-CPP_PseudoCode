// Class: ZombossHelmLostActionDefinition


/* ZombossHelmLostActionDefinition::~ZombossHelmLostActionDefinition() */

void __thiscall
ZombossHelmLostActionDefinition::~ZombossHelmLostActionDefinition
          (ZombossHelmLostActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068d4120;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossHelmLostActionDefinition::~ZombossHelmLostActionDefinition() */

void __thiscall
ZombossHelmLostActionDefinition::~ZombossHelmLostActionDefinition
          (ZombossHelmLostActionDefinition *this)

{
  ~ZombossHelmLostActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHelmLostActionDefinition::StaticClassInit() */

void ZombossHelmLostActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossHelmLostActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0476c140,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHelmLostActionDefinition::StaticGetClass() */

long * ZombossHelmLostActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossHelmLostActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHelmLostActionDefinition::GetClass() const */

long * ZombossHelmLostActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossHelmLostActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHelmLostActionDefinition::ZombossHelmLostActionDefinition() */

void __thiscall
ZombossHelmLostActionDefinition::ZombossHelmLostActionDefinition
          (ZombossHelmLostActionDefinition *this)

{
  undefined4 uVar1;
  
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068d4120;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* ZombossHelmLostActionDefinition::StaticNew() */

ZombossHelmLostActionDefinition * ZombossHelmLostActionDefinition::StaticNew(void)

{
  ZombossHelmLostActionDefinition *this;
  
  this = ::operator_new(0x40);
  ZombossHelmLostActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0476fd24 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossHelmLostActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void ZombossHelmLostActionDefinition::TryStartAction(undefined8 param_1,RtWeakPtrBase *param_2)

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
    ZombieWithActions::QueueAction<ZombossHelmLostActionHandler>(pZVar1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((ulong)pZVar1 & 0xff);
}


// Class: ZombossFreezingWindRowActionDefinition


/* ZombossFreezingWindRowActionDefinition::~ZombossFreezingWindRowActionDefinition() */

void __thiscall
ZombossFreezingWindRowActionDefinition::~ZombossFreezingWindRowActionDefinition
          (ZombossFreezingWindRowActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068d4280;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossFreezingWindRowActionDefinition::~ZombossFreezingWindRowActionDefinition() */

void __thiscall
ZombossFreezingWindRowActionDefinition::~ZombossFreezingWindRowActionDefinition
          (ZombossFreezingWindRowActionDefinition *this)

{
  ~ZombossFreezingWindRowActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossFreezingWindRowActionDefinition::StaticClassInit() */

void ZombossFreezingWindRowActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossFreezingWindRowActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_0476c508,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossFreezingWindRowActionDefinition::StaticGetClass() */

long * ZombossFreezingWindRowActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossFreezingWindRowActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFreezingWindRowActionDefinition::GetClass() const */

long * ZombossFreezingWindRowActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossFreezingWindRowActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossFreezingWindRowActionDefinition::ZombossFreezingWindRowActionDefinition() */

void __thiscall
ZombossFreezingWindRowActionDefinition::ZombossFreezingWindRowActionDefinition
          (ZombossFreezingWindRowActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068d4280;
  return;
}


/* ZombossFreezingWindRowActionDefinition::StaticNew() */

ZombossFreezingWindRowActionDefinition * ZombossFreezingWindRowActionDefinition::StaticNew(void)

{
  ZombossFreezingWindRowActionDefinition *this;
  
  this = ::operator_new(0x38);
  ZombossFreezingWindRowActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04770264 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossFreezingWindRowActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void ZombossFreezingWindRowActionDefinition::TryStartAction
               (undefined8 param_1,RtWeakPtrBase *param_2)

{
  char cVar1;
  EliminateModule *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (EliminateModule *)FUN_0476e034(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this == (EliminateModule *)0x0) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = EliminateModule::CanFreezingWind(this);
    if (cVar1 == '\0') goto LAB_04770220;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombossFreezingWindRowActionHandler>
            ((ZombieWithActions *)aRStack_10,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04770220:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


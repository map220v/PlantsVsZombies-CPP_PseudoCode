// Class: ZombossSkyCityAttackNearByActionDefinition


/* ZombossSkyCityAttackNearByActionDefinition::~ZombossSkyCityAttackNearByActionDefinition() */

void __thiscall
ZombossSkyCityAttackNearByActionDefinition::~ZombossSkyCityAttackNearByActionDefinition
          (ZombossSkyCityAttackNearByActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c3320;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSkyCityAttackNearByActionDefinition::~ZombossSkyCityAttackNearByActionDefinition() */

void __thiscall
ZombossSkyCityAttackNearByActionDefinition::~ZombossSkyCityAttackNearByActionDefinition
          (ZombossSkyCityAttackNearByActionDefinition *this)

{
  ~ZombossSkyCityAttackNearByActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityAttackNearByActionDefinition::StaticClassInit() */

void ZombossSkyCityAttackNearByActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityAttackNearByActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04727c3c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityAttackNearByActionDefinition::StaticGetClass() */

long * ZombossSkyCityAttackNearByActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityAttackNearByActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityAttackNearByActionDefinition::GetClass() const */

long * ZombossSkyCityAttackNearByActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityAttackNearByActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityAttackNearByActionDefinition::ZombossSkyCityAttackNearByActionDefinition() */

void __thiscall
ZombossSkyCityAttackNearByActionDefinition::ZombossSkyCityAttackNearByActionDefinition
          (ZombossSkyCityAttackNearByActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068c3320;
  return;
}


/* ZombossSkyCityAttackNearByActionDefinition::StaticNew() */

ZombossSkyCityAttackNearByActionDefinition *
ZombossSkyCityAttackNearByActionDefinition::StaticNew(void)

{
  ZombossSkyCityAttackNearByActionDefinition *this;
  
  this = ::operator_new(0x38);
  ZombossSkyCityAttackNearByActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047302ac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSkyCityAttackNearByActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossSkyCityAttackNearByActionDefinition::TryStartAction
          (undefined8 param_1,RtWeakPtrBase *param_2)

{
  ZombieZombossMech_SkyCity *extraout_x0;
  ZombieWithActions *pZVar1;
  bool bVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (extraout_x0[0x964] == (ZombieZombossMech_SkyCity)0x0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    ZombieZombossMech_SkyCity::FindNearByTargets
              (extraout_x0,1,
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    pZVar1 = (ZombieWithActions *)FUN_04726018(local_20,local_18);
    bVar2 = pZVar1 != (ZombieWithActions *)0x0;
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_2);
      ZombieWithActions::QueueAction<ZombossSkyCityAttackNearByActionHandler>(pZVar1,aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else {
    bVar2 = false;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


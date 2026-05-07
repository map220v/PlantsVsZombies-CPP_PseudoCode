// Class: ZombossSkyCityRushDownActionDefinition


/* ZombossSkyCityRushDownActionDefinition::~ZombossSkyCityRushDownActionDefinition() */

void __thiscall
ZombossSkyCityRushDownActionDefinition::~ZombossSkyCityRushDownActionDefinition
          (ZombossSkyCityRushDownActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c31c0;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossSkyCityRushDownActionDefinition::~ZombossSkyCityRushDownActionDefinition() */

void __thiscall
ZombossSkyCityRushDownActionDefinition::~ZombossSkyCityRushDownActionDefinition
          (ZombossSkyCityRushDownActionDefinition *this)

{
  ~ZombossSkyCityRushDownActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityRushDownActionDefinition::StaticClassInit() */

void ZombossSkyCityRushDownActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityRushDownActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_047278f4,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityRushDownActionDefinition::StaticGetClass() */

long * ZombossSkyCityRushDownActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityRushDownActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityRushDownActionDefinition::GetClass() const */

long * ZombossSkyCityRushDownActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityRushDownActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityRushDownActionDefinition::ZombossSkyCityRushDownActionDefinition() */

void __thiscall
ZombossSkyCityRushDownActionDefinition::ZombossSkyCityRushDownActionDefinition
          (ZombossSkyCityRushDownActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_068c31c0;
  return;
}


/* ZombossSkyCityRushDownActionDefinition::StaticNew() */

ZombossSkyCityRushDownActionDefinition * ZombossSkyCityRushDownActionDefinition::StaticNew(void)

{
  ZombossSkyCityRushDownActionDefinition *this;
  
  this = ::operator_new(0x38);
  ZombossSkyCityRushDownActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04730110 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSkyCityRushDownActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossSkyCityRushDownActionDefinition::TryStartAction(undefined8 param_1,RtWeakPtrBase *param_2)

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
    ZombieZombossMech_SkyCity::FindRushDownTargets
              (extraout_x0,1,
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    pZVar1 = (ZombieWithActions *)FUN_04726018(local_20,local_18);
    bVar2 = pZVar1 != (ZombieWithActions *)0x0;
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_2);
      ZombieWithActions::QueueAction<ZombossSkyCityRushDownActionHandler>(pZVar1,aRStack_28);
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


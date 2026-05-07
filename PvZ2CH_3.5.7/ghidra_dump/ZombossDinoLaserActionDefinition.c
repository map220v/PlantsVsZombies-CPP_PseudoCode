// Class: ZombossDinoLaserActionDefinition


/* ZombossDinoLaserActionDefinition::~ZombossDinoLaserActionDefinition() */

void __thiscall
ZombossDinoLaserActionDefinition::~ZombossDinoLaserActionDefinition
          (ZombossDinoLaserActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6ca0;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossDinoLaserActionDefinition::~ZombossDinoLaserActionDefinition() */

void __thiscall
ZombossDinoLaserActionDefinition::~ZombossDinoLaserActionDefinition
          (ZombossDinoLaserActionDefinition *this)

{
  ~ZombossDinoLaserActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDinoLaserActionDefinition::StaticClassInit() */

void ZombossDinoLaserActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossDinoLaserActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_047f4078,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDinoLaserActionDefinition::StaticGetClass() */

long * ZombossDinoLaserActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDinoLaserActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDinoLaserActionDefinition::GetClass() const */

long * ZombossDinoLaserActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDinoLaserActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDinoLaserActionDefinition::ZombossDinoLaserActionDefinition() */

void __thiscall
ZombossDinoLaserActionDefinition::ZombossDinoLaserActionDefinition
          (ZombossDinoLaserActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0x40a00000;
  *(undefined ***)this = &PTR_GetClass_068f6ca0;
  *(undefined4 *)(this + 0x40) = 0x42c80000;
  *(undefined4 *)(this + 0x3c) = 0x40000000;
  return;
}


/* ZombossDinoLaserActionDefinition::StaticNew() */

ZombossDinoLaserActionDefinition * ZombossDinoLaserActionDefinition::StaticNew(void)

{
  ZombossDinoLaserActionDefinition *this;
  
  this = ::operator_new(0x48);
  ZombossDinoLaserActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047f8894 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossDinoLaserActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void ZombossDinoLaserActionDefinition::TryStartAction(undefined8 param_1,RtWeakPtrBase *param_2)

{
  ZombieWithActions *pZVar1;
  int local_3c;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets(aIStack_30,0,local_3c,10,2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,aIStack_30
            );
  pZVar1 = (ZombieWithActions *)FUN_047f385c(local_20,local_18);
  if (pZVar1 != (ZombieWithActions *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,param_2);
    ZombieWithActions::QueueAction<ZombossDinoLaserActionHandler>(pZVar1,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pZVar1 != (ZombieWithActions *)0x0);
}


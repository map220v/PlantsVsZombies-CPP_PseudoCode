// Class: ZombossRushActionDefinition


/* ZombossRushActionDefinition::~ZombossRushActionDefinition() */

void __thiscall
ZombossRushActionDefinition::~ZombossRushActionDefinition(ZombossRushActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068c6380;
  std::string::~string((string *)(this + 0x60));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossRushActionDefinition::~ZombossRushActionDefinition() */

void __thiscall
ZombossRushActionDefinition::~ZombossRushActionDefinition(ZombossRushActionDefinition *this)

{
  ~ZombossRushActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* ZombossRushActionDefinition::ZombossRushActionDefinition() */

void __thiscall
ZombossRushActionDefinition::ZombossRushActionDefinition(ZombossRushActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_068c6380;
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0x42c80000;
  *(undefined4 *)(this + 0x40) = 0x3fc00000;
  *(undefined4 *)(this + 0x50) = 0x3fc00000;
  *(undefined4 *)(this + 0x54) = 0x41000000;
  *(undefined4 *)(this + 0x4c) = 0x42700000;
  *(undefined4 *)(this + 0x58) = 0x43480000;
  Set8BytesTo0(this + 0x60);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRushActionDefinition::StaticClassInit() */

void ZombossRushActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRushActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04736fe8,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRushActionDefinition::StaticGetClass() */

long * ZombossRushActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossRushActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRushActionDefinition::GetClass() const */

long * ZombossRushActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossRushActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRushActionDefinition::StaticNew() */

ZombossRushActionDefinition * ZombossRushActionDefinition::StaticNew(void)

{
  ZombossRushActionDefinition *this;
  
  this = ::operator_new(0x68);
  ZombossRushActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0473dda4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossRushActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void ZombossRushActionDefinition::TryStartAction(undefined8 param_1,RtWeakPtrBase *param_2)

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
  Sexy::Insets::Insets(aIStack_30,0,local_3c + -1,10,2);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,aIStack_30
            );
  pZVar1 = (ZombieWithActions *)FUN_04735c1c(local_20,local_18);
  if (pZVar1 != (ZombieWithActions *)0x0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,param_2);
    ZombieWithActions::QueueAction<ZombossRushActionHandler>(pZVar1,aRStack_38);
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


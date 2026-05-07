// Class: ZombieWalkActionDefinition


/* ZombieWalkActionDefinition::~ZombieWalkActionDefinition() */

void __thiscall
ZombieWalkActionDefinition::~ZombieWalkActionDefinition(ZombieWalkActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0ba70;
  std::string::~string((string *)(this + 0x40));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieWalkActionDefinition::~ZombieWalkActionDefinition() */

void __thiscall
ZombieWalkActionDefinition::~ZombieWalkActionDefinition(ZombieWalkActionDefinition *this)

{
  ~ZombieWalkActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWalkActionDefinition::StaticClassInit() */

void ZombieWalkActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWalkActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f00c04,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWalkActionDefinition::StaticGetClass() */

long * ZombieWalkActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWalkActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWalkActionDefinition::GetClass() const */

long * ZombieWalkActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieWalkActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWalkActionDefinition::ZombieWalkActionDefinition() */

void __thiscall
ZombieWalkActionDefinition::ZombieWalkActionDefinition(ZombieWalkActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  this[0x3c] = (ZombieWalkActionDefinition)0x0;
  *(undefined ***)this = &PTR_GetClass_06a0ba70;
  *(undefined4 *)(this + 0x38) = 0xbf800000;
  Set8BytesTo0(this + 0x40);
  return;
}


/* ZombieWalkActionDefinition::StaticNew() */

ZombieWalkActionDefinition * ZombieWalkActionDefinition::StaticNew(void)

{
  ZombieWalkActionDefinition *this;
  
  this = ::operator_new(0x50);
  ZombieWalkActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f03c6c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieWalkActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition const>,
   ZombieWithActions*) const */

void ZombieWalkActionDefinition::TryStartAction(ZombieWithActions *param_1,RtWeakPtrBase *param_2)

{
  float fVar1;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  fVar1 = *(float *)(param_1 + 0x38);
  if (fVar1 < (float)local_10[0]) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,param_2);
    ZombieWithActions::QueueAction<ZombieWalkActionHandler>
              (param_1,(RtWeakPtr<Sexy::SoundResource> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1 < (float)local_10[0]);
}


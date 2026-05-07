// Class: ZombieMirrorQueenSummonActionDefinition


/* ZombieMirrorQueenSummonActionDefinition::~ZombieMirrorQueenSummonActionDefinition() */

void __thiscall
ZombieMirrorQueenSummonActionDefinition::~ZombieMirrorQueenSummonActionDefinition
          (ZombieMirrorQueenSummonActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0f070;
  std::string::~string((string *)(this + 0x38));
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombieMirrorQueenSummonActionDefinition::~ZombieMirrorQueenSummonActionDefinition() */

void __thiscall
ZombieMirrorQueenSummonActionDefinition::~ZombieMirrorQueenSummonActionDefinition
          (ZombieMirrorQueenSummonActionDefinition *this)

{
  ~ZombieMirrorQueenSummonActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenSummonActionDefinition::StaticClassInit() */

void ZombieMirrorQueenSummonActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMirrorQueenSummonActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_04f087c4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenSummonActionDefinition::StaticGetClass() */

long * ZombieMirrorQueenSummonActionDefinition::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMirrorQueenSummonActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueenSummonActionDefinition::GetClass() const */

long * ZombieMirrorQueenSummonActionDefinition::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMirrorQueenSummonActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueenSummonActionDefinition::ZombieMirrorQueenSummonActionDefinition() */

void __thiscall
ZombieMirrorQueenSummonActionDefinition::ZombieMirrorQueenSummonActionDefinition
          (ZombieMirrorQueenSummonActionDefinition *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined ***)this = &PTR_GetClass_06a0f070;
  std::string::string((string *)(this + 0x38),"dark_cavalry");
  nop();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x40) = 1;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueenSummonActionDefinition::StaticNew() */

ZombieMirrorQueenSummonActionDefinition * ZombieMirrorQueenSummonActionDefinition::StaticNew(void)

{
  ZombieMirrorQueenSummonActionDefinition *this;
  
  this = ::operator_new(0x48);
  ZombieMirrorQueenSummonActionDefinition(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04f1081c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieMirrorQueenSummonActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombieMirrorQueenSummonActionDefinition::TryStartAction
          (ZombieMirrorQueenSummonActionDefinition *this,RtWeakPtrBase *param_2,undefined8 param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  ZombieWithActions::QueueAction<ZombieMirrorQueenSummonActionHandler>
            ((ZombieWithActions *)this,aRStack_10,param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


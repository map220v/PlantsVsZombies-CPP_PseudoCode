// Class: ZombieZombossMechProps


/* ZombieZombossMechProps::ZombieZombossMechProps() */

void __thiscall ZombieZombossMechProps::ZombieZombossMechProps(ZombieZombossMechProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068bd500;
  Set8BytesTo0(this + 0x220);
  Set8BytesTo0(this + 0x228);
  Set8BytesTo0(this + 0x230);
  Set8BytesTo0(this + 0x238);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x248));
  ZombossStageScoring::ZombossStageScoring((ZombossStageScoring *)(this + 0x260));
  this[0x219] = (ZombieZombossMechProps)0x0;
  this[0x21a] = (ZombieZombossMechProps)0x0;
  *(undefined4 *)(this + 0x210) = 3;
  this[0x218] = (ZombieZombossMechProps)0x0;
  *(undefined4 *)(this + 0x214) = 6;
  this[0x240] = (ZombieZombossMechProps)0x0;
  return;
}


/* ZombieZombossMechProps::~ZombieZombossMechProps() */

void __thiscall ZombieZombossMechProps::~ZombieZombossMechProps(ZombieZombossMechProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068bd500;
  ZombossStageScoring::~ZombossStageScoring((ZombossStageScoring *)(this + 0x260));
  std::vector<ZombossStage,std::allocator<ZombossStage>>::~vector
            ((vector<ZombossStage,std::allocator<ZombossStage>> *)(this + 0x248));
  std::string::~string((string *)(this + 0x238));
  std::string::~string((string *)(this + 0x230));
  std::string::~string((string *)(this + 0x228));
  std::string::~string((string *)(this + 0x220));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieZombossMechProps::~ZombieZombossMechProps() */

void __thiscall ZombieZombossMechProps::~ZombieZombossMechProps(ZombieZombossMechProps *this)

{
  ~ZombieZombossMechProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechProps::StaticClassInit() */

void ZombieZombossMechProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombossStageScoring");
    (*pcVar3)(plVar2,asStack_10,FUN_0470efcc,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombossPostStageScoring");
    (*pcVar3)(plVar2,asStack_10,FUN_0470db1c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombossStage");
    (*pcVar3)(plVar2,asStack_10,FUN_047114cc,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieZombossMechProps");
    (*pcVar3)(plVar2,asStack_10,FUN_04711cd8,0x2a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechProps::StaticGetClass() */

long * ZombieZombossMechProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechProps::GetClass() const */

long * ZombieZombossMechProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechProps::StaticNew() */

ZombieZombossMechProps * ZombieZombossMechProps::StaticNew(void)

{
  ZombieZombossMechProps *this;
  
  this = ::operator_new(0x2a0);
  ZombieZombossMechProps(this);
  return this;
}


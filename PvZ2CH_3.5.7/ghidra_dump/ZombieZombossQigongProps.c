// Class: ZombieZombossQigongProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigongProps::StaticClassInit() */

void ZombieZombossQigongProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossQigongStage");
    (*pcVar3)(plVar2,asStack_10,FUN_047019a4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieZombossQigongProps");
    (*pcVar3)(plVar2,asStack_10,FUN_047031d0,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossQigongProps::StaticGetClass() */

long * ZombieZombossQigongProps::StaticGetClass(void)

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
  uVar2 = ZombossProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossQigongProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossQigongProps::GetClass() const */

long * ZombieZombossQigongProps::GetClass(void)

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
  uVar2 = ZombossProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossQigongProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossQigongProps::ZombieZombossQigongProps() */

void __thiscall ZombieZombossQigongProps::ZombieZombossQigongProps(ZombieZombossQigongProps *this)

{
  ZombossProps::ZombossProps((ZombossProps *)this);
  *(undefined ***)this = &PTR_GetClass_068bb760;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x218));
  return;
}


/* ZombieZombossQigongProps::StaticNew() */

ZombieZombossQigongProps * ZombieZombossQigongProps::StaticNew(void)

{
  ZombieZombossQigongProps *this;
  
  this = ::operator_new(0x230);
  ZombieZombossQigongProps(this);
  return this;
}


/* ZombieZombossQigongProps::~ZombieZombossQigongProps() */

void __thiscall ZombieZombossQigongProps::~ZombieZombossQigongProps(ZombieZombossQigongProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068bb760;
  std::vector<ZombossQigongStage,std::allocator<ZombossQigongStage>>::~vector
            ((vector<ZombossQigongStage,std::allocator<ZombossQigongStage>> *)(this + 0x218));
  ZombossProps::~ZombossProps((ZombossProps *)this);
  return;
}


/* ZombieZombossQigongProps::~ZombieZombossQigongProps() */

void __thiscall ZombieZombossQigongProps::~ZombieZombossQigongProps(ZombieZombossQigongProps *this)

{
  ~ZombieZombossQigongProps(this);
  AK::FreeHook(this);
  return;
}


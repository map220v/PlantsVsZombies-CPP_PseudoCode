// Class: LanternRiddlesInfo


/* LanternRiddlesInfo::~LanternRiddlesInfo() */

void __thiscall LanternRiddlesInfo::~LanternRiddlesInfo(LanternRiddlesInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_067ff240;
  std::vector<LanternBonus,std::allocator<LanternBonus>>::~vector
            ((vector<LanternBonus,std::allocator<LanternBonus>> *)(this + 0x18));
  nop();
  return;
}


/* LanternRiddlesInfo::~LanternRiddlesInfo() */

void __thiscall LanternRiddlesInfo::~LanternRiddlesInfo(LanternRiddlesInfo *this)

{
  ~LanternRiddlesInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanternRiddlesInfo::StaticClassInit() */

void LanternRiddlesInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"LanternBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_041b3994,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LanternRiddlesInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_041b5d4c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LanternRiddlesInfo::StaticGetClass() */

long * LanternRiddlesInfo::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"LanternRiddlesInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LanternRiddlesInfo::GetClass() const */

long * LanternRiddlesInfo::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"LanternRiddlesInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LanternRiddlesInfo::LanternRiddlesInfo() */

void __thiscall LanternRiddlesInfo::LanternRiddlesInfo(LanternRiddlesInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_067ff240;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* LanternRiddlesInfo::StaticNew() */

LanternRiddlesInfo * LanternRiddlesInfo::StaticNew(void)

{
  LanternRiddlesInfo *this;
  
  this = ::operator_new(0x30);
  LanternRiddlesInfo(this);
  return this;
}


// Class: LevelScoringRules


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelScoringRules::StaticClassInit() */

void LevelScoringRules::StaticClassInit(void)

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
    std::string::string(asStack_10,"ScoreDisplayModifier");
    (*pcVar3)(plVar2,asStack_10,FUN_0384f3b4,0x2c,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LevelScoringRules");
    (*pcVar3)(plVar2,asStack_10,FUN_03850f44,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelScoringRules::StaticGetClass() */

long * LevelScoringRules::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"LevelScoringRules",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelScoringRules::GetClass() const */

long * LevelScoringRules::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"LevelScoringRules",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelScoringRules::LevelScoringRules() */

void __thiscall LevelScoringRules::LevelScoringRules(LevelScoringRules *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined4 *)(this + 0x10) = 0x40c00000;
  *(undefined ***)this = &PTR_GetClass_066a7c20;
  *(undefined4 *)(this + 0x18) = 0x40400000;
  *(undefined4 *)(this + 0x20) = 0x3fc00000;
  *(undefined4 *)(this + 0x34) = 0x42480000;
  *(undefined4 *)(this + 0x24) = 0x40000000;
  *(undefined4 *)(this + 0x14) = 0x3dcccccd;
  *(undefined4 *)(this + 0x1c) = 0x3dcccccd;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0x41c80000;
  *(undefined4 *)(this + 0x3c) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  *(undefined4 *)(this + 0x44) = 0x43480000;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  *(undefined4 *)(this + 0x50) = 0x42c80000;
  *(undefined4 *)(this + 0x54) = 0x42c80000;
  *(undefined4 *)(this + 0x58) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x5c) = 0x3f800000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  *(undefined4 *)(this + 0x7c) = 1;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x78) = 0x3eae147b;
  return;
}


/* LevelScoringRules::StaticNew() */

LevelScoringRules * LevelScoringRules::StaticNew(void)

{
  LevelScoringRules *this;
  
  this = ::operator_new(0x90);
  LevelScoringRules(this);
  return this;
}


/* LevelScoringRules::~LevelScoringRules() */

void __thiscall LevelScoringRules::~LevelScoringRules(LevelScoringRules *this)

{
  *(undefined ***)this = &PTR_GetClass_066a7c20;
  std::vector<ScoreDisplayModifier,std::allocator<ScoreDisplayModifier>>::~vector
            ((vector<ScoreDisplayModifier,std::allocator<ScoreDisplayModifier>> *)(this + 0x60));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* LevelScoringRules::~LevelScoringRules() */

void __thiscall LevelScoringRules::~LevelScoringRules(LevelScoringRules *this)

{
  ~LevelScoringRules(this);
  AK::FreeHook(this);
  return;
}


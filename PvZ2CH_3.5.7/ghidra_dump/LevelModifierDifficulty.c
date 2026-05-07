// Class: LevelModifierDifficulty


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelModifierDifficulty::StaticClassInit() */

void LevelModifierDifficulty::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelModifierDifficulty");
    (*pcVar2)(plVar1,asStack_10,FUN_034017bc,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelModifierDifficulty::StaticGetClass() */

long * LevelModifierDifficulty::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"LevelModifierDifficulty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelModifierDifficulty::GetClass() const */

long * LevelModifierDifficulty::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"LevelModifierDifficulty",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelModifierDifficulty::LevelModifierDifficulty() */

void __thiscall LevelModifierDifficulty::LevelModifierDifficulty(LevelModifierDifficulty *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0661dc10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 1;
  return;
}


/* LevelModifierDifficulty::StaticNew() */

LevelModifierDifficulty * LevelModifierDifficulty::StaticNew(void)

{
  LevelModifierDifficulty *this;
  
  this = ::operator_new(0x38);
  LevelModifierDifficulty(this);
  return this;
}


/* LevelModifierDifficulty::~LevelModifierDifficulty() */

void __thiscall LevelModifierDifficulty::~LevelModifierDifficulty(LevelModifierDifficulty *this)

{
  *(undefined ***)this = &PTR_GetClass_0661dc10;
  std::
  vector<Sexy::RtWeakPtr<LevelModifierModuleCollection>,std::allocator<Sexy::RtWeakPtr<LevelModifierModuleCollection>>>
  ::~vector((vector<Sexy::RtWeakPtr<LevelModifierModuleCollection>,std::allocator<Sexy::RtWeakPtr<LevelModifierModuleCollection>>>
             *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* LevelModifierDifficulty::~LevelModifierDifficulty() */

void __thiscall LevelModifierDifficulty::~LevelModifierDifficulty(LevelModifierDifficulty *this)

{
  ~LevelModifierDifficulty(this);
  AK::FreeHook(this);
  return;
}


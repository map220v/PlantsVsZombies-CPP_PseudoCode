// Class: MiniGameConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameConfig::StaticClassInit() */

void MiniGameConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_03921b2c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameConfig::StaticGetClass() */

long * MiniGameConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameConfig::GetClass() const */

long * MiniGameConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameConfig::MiniGameConfig() */

void __thiscall MiniGameConfig::MiniGameConfig(MiniGameConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066c78d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* MiniGameConfig::StaticNew() */

MiniGameConfig * MiniGameConfig::StaticNew(void)

{
  MiniGameConfig *this;
  
  this = ::operator_new(0x50);
  MiniGameConfig(this);
  return this;
}


/* MiniGameConfig::~MiniGameConfig() */

void __thiscall MiniGameConfig::~MiniGameConfig(MiniGameConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066c78d0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<stMiniGame_rank,std::allocator<stMiniGame_rank>>::~vector
            ((vector<stMiniGame_rank,std::allocator<stMiniGame_rank>> *)(this + 0x18));
  nop();
  return;
}


/* MiniGameConfig::~MiniGameConfig() */

void __thiscall MiniGameConfig::~MiniGameConfig(MiniGameConfig *this)

{
  ~MiniGameConfig(this);
  AK::FreeHook(this);
  return;
}


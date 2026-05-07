// Class: MiniGameRankItemConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameRankItemConfig::StaticClassInit() */

void MiniGameRankItemConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameRankItemConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_0393c184,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameRankItemConfig::StaticGetClass() */

long * MiniGameRankItemConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameRankItemConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameRankItemConfig::GetClass() const */

long * MiniGameRankItemConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGameRankItemConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameRankItemConfig::MiniGameRankItemConfig() */

void __thiscall MiniGameRankItemConfig::MiniGameRankItemConfig(MiniGameRankItemConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066cd3a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  Set8BytesTo0(this + 0x68);
  return;
}


/* MiniGameRankItemConfig::StaticNew() */

MiniGameRankItemConfig * MiniGameRankItemConfig::StaticNew(void)

{
  MiniGameRankItemConfig *this;
  
  this = ::operator_new(0x70);
  MiniGameRankItemConfig(this);
  return this;
}


/* MiniGameRankItemConfig::~MiniGameRankItemConfig() */

void __thiscall MiniGameRankItemConfig::~MiniGameRankItemConfig(MiniGameRankItemConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066cd3a0;
  std::string::~string((string *)(this + 0x68));
  std::vector<stMiniGameAward_Bonus,std::allocator<stMiniGameAward_Bonus>>::~vector
            ((vector<stMiniGameAward_Bonus,std::allocator<stMiniGameAward_Bonus>> *)(this + 0x48));
  std::vector<stMiniGame_rankItemInfo,std::allocator<stMiniGame_rankItemInfo>>::~vector
            ((vector<stMiniGame_rankItemInfo,std::allocator<stMiniGame_rankItemInfo>> *)
             (this + 0x20));
  std::vector<stMiniGame_rankItemInfo,std::allocator<stMiniGame_rankItemInfo>>::~vector
            ((vector<stMiniGame_rankItemInfo,std::allocator<stMiniGame_rankItemInfo>> *)(this + 8));
  nop();
  return;
}


/* MiniGameRankItemConfig::~MiniGameRankItemConfig() */

void __thiscall MiniGameRankItemConfig::~MiniGameRankItemConfig(MiniGameRankItemConfig *this)

{
  ~MiniGameRankItemConfig(this);
  AK::FreeHook(this);
  return;
}


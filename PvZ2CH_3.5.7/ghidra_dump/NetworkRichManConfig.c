// Class: NetworkRichManConfig


/* NetworkRichManConfig::NetworkRichManConfig() */

void __thiscall NetworkRichManConfig::NetworkRichManConfig(NetworkRichManConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066baa60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* NetworkRichManConfig::~NetworkRichManConfig() */

void __thiscall NetworkRichManConfig::~NetworkRichManConfig(NetworkRichManConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066baa60;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28));
  std::vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>>::~vector
            ((vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>> *)(this + 8));
  nop();
  return;
}


/* NetworkRichManConfig::~NetworkRichManConfig() */

void __thiscall NetworkRichManConfig::~NetworkRichManConfig(NetworkRichManConfig *this)

{
  ~NetworkRichManConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkRichManConfig::StaticClassInit() */

void NetworkRichManConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkRichManConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_038d6c64,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkRichManConfig::StaticGetClass() */

long * NetworkRichManConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRichManConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRichManConfig::GetClass() const */

long * NetworkRichManConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRichManConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRichManConfig::StaticNew() */

NetworkRichManConfig * NetworkRichManConfig::StaticNew(void)

{
  NetworkRichManConfig *this;
  
  this = ::operator_new(0x40);
  NetworkRichManConfig(this);
  return this;
}


/* NetworkRichManConfig::TEMPNAMEPLACEHOLDERVALUE(NetworkRichManConfig const&) */

NetworkRichManConfig * __thiscall
NetworkRichManConfig::operator=(NetworkRichManConfig *this,NetworkRichManConfig *param_1)

{
  undefined4 uVar1;
  
  std::vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>>::operator=
            ((vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>> *)(this + 8),
             (vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x20) = uVar1;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  return this;
}


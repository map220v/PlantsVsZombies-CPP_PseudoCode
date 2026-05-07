// Class: MagentoServerConfig


/* MagentoServerConfig::~MagentoServerConfig() */

void __thiscall MagentoServerConfig::~MagentoServerConfig(MagentoServerConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0684abb0;
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  nop();
  return;
}


/* MagentoServerConfig::~MagentoServerConfig() */

void __thiscall MagentoServerConfig::~MagentoServerConfig(MagentoServerConfig *this)

{
  ~MagentoServerConfig(this);
  AK::FreeHook(this);
  return;
}


/* MagentoServerConfig::MagentoServerConfig() */

void __thiscall MagentoServerConfig::MagentoServerConfig(MagentoServerConfig *this)

{
  size_t in_x2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0684abb0;
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  std::string::append((string *)(this + 8),
                      "http://pvz-shop-almost.pt.popcap.com.cn/index.php/shiny/1.1/product",in_x2);
  std::string::append((string *)(this + 0x10),
                      "http://pvz-shop-almost.pt.popcap.com.cn/index.php/shiny/1.1/category",in_x2);
  std::string::append((string *)(this + 0x18),"https://sandbox.itunes.apple.com/verifyReceipt",in_x2
                     );
  this[0x20] = (MagentoServerConfig)0x1;
  return;
}


/* MagentoServerConfig::StaticNew() */

MagentoServerConfig * MagentoServerConfig::StaticNew(void)

{
  MagentoServerConfig *this;
  
  this = ::operator_new(0x28);
  MagentoServerConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagentoServerConfig::StaticClassInit() */

void MagentoServerConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagentoServerConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_0444281c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagentoServerConfig::StaticGetClass() */

long * MagentoServerConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MagentoServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagentoServerConfig::GetClass() const */

long * MagentoServerConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"MagentoServerConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


// Class: RailcartProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RailcartProperties::StaticClassInit() */

void RailcartProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RailcartLocation");
    (*pcVar3)(plVar2,asStack_10,FUN_0440fa28,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RailcartRail");
    (*pcVar3)(plVar2,asStack_10,FUN_0440f868,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RailcartProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_04410cfc,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RailcartProperties::StaticGetClass() */

long * RailcartProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RailcartProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RailcartProperties::GetClass() const */

long * RailcartProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RailcartProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RailcartProperties::GetModuleClass() const */

long * RailcartProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RailcartModule::sClass != (long *)0x0) {
    return RailcartModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RailcartModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RailcartModule",uVar2,RailcartModule::StaticNew);
  return RailcartModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RailcartProperties::GetDefaultRailcartTypeName() const */

void RailcartProperties::GetDefaultRailcartTypeName(void)

{
  bool bVar1;
  long in_x0;
  long lVar2;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"railcart_cowboy");
  nop();
  lVar2 = FUN_05474184(in_x0 + 0x40);
  if (lVar2 == 0) {
    lVar2 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    if (lVar2 != 0) {
      StageModule::GetRailcartDefaultType();
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        thunk_FUN_05475e00();
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  else {
    thunk_FUN_05475e00();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RailcartProperties::RailcartProperties() */

void __thiscall RailcartProperties::RailcartProperties(RailcartProperties *this)

{
  size_t in_x2;
  
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06847dc0;
  Set8BytesTo0((string *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::string::append((string *)(this + 0x40),"",in_x2);
  return;
}


/* RailcartProperties::StaticNew() */

RailcartProperties * RailcartProperties::StaticNew(void)

{
  RailcartProperties *this;
  
  this = ::operator_new(0x78);
  RailcartProperties(this);
  return this;
}


/* RailcartProperties::~RailcartProperties() */

void __thiscall RailcartProperties::~RailcartProperties(RailcartProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06847dc0;
  std::vector<RailcartLocation,std::allocator<RailcartLocation>>::~vector
            ((vector<RailcartLocation,std::allocator<RailcartLocation>> *)(this + 0x60));
  std::vector<RailcartRail,std::allocator<RailcartRail>>::~vector
            ((vector<RailcartRail,std::allocator<RailcartRail>> *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RailcartProperties::~RailcartProperties() */

void __thiscall RailcartProperties::~RailcartProperties(RailcartProperties *this)

{
  ~RailcartProperties(this);
  AK::FreeHook(this);
  return;
}


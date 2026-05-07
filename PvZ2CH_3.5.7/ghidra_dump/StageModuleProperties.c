// Class: StageModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModuleProperties::StageModuleProperties() */

void __thiscall StageModuleProperties::StageModuleProperties(StageModuleProperties *this)

{
  long lVar1;
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  __n = auStack_10;
  *(undefined ***)this = &PTR_GetClass_0684d360;
  std::string::string((string *)(this + 0x40),"");
  nop();
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0((string *)(this + 0x50));
  Set8BytesTo0((string *)(this + 0x58));
  Set8BytesTo0((string *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  Set8BytesTo0(this + 0x88);
  Set8BytesTo0(this + 0x90);
  Set8BytesTo0(this + 0x98);
  Set8BytesTo0(this + 0xa0);
  Set8BytesTo0(this + 0xa8);
  Set8BytesTo0(this + 0xb0);
  Set8BytesTo0(this + 0xb8);
  Set8BytesTo0(this + 0xc0);
  Set8BytesTo0((string *)(this + 200));
  Set8BytesTo0((string *)(this + 0xd0));
  Set8BytesTo0((string *)(this + 0xd8));
  Set8BytesTo0(this + 0xe8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  Set8BytesTo0((string *)(this + 0x108));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  Set8BytesTo0(this + 0x128);
  *(undefined4 *)(this + 0xe0) = 0;
  std::string::append((string *)(this + 0x108),"IMAGE_UI_HUD_INGAME_PROGRESS_METER_FLAG_DEFAULT",
                      (size_t)__n);
  std::string::append((string *)(this + 200),"railcart_cowboy",(size_t)__n);
  std::string::append((string *)(this + 0xd0),"gravestone_egypt",(size_t)__n);
  std::string::append((string *)(this + 0xd8),"POPANIM_EFFECTS_TOMB_DIRT",(size_t)__n);
  std::string::append((string *)(this + 0x50),"TEXTURE_LEFT",(size_t)__n);
  std::string::append((string *)(this + 0x58),"TEXTURE",(size_t)__n);
  std::string::append((string *)(this + 0x60),"TEXTURE_RIGHT",(size_t)__n);
  lVar1 = ___stack_chk_guard;
  this[0x68] = (StageModuleProperties)0x1;
  this[0x69] = (StageModuleProperties)0x1;
  this[0x6a] = (StageModuleProperties)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StageModuleProperties::~StageModuleProperties() */

void __thiscall StageModuleProperties::~StageModuleProperties(StageModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0684d360;
  std::string::~string((string *)(this + 0x128));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x110));
  std::string::~string((string *)(this + 0x108));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  std::string::~string((string *)(this + 0xd8));
  std::string::~string((string *)(this + 0xd0));
  std::string::~string((string *)(this + 200));
  std::string::~string((string *)(this + 0xc0));
  std::string::~string((string *)(this + 0xb8));
  std::string::~string((string *)(this + 0xb0));
  std::string::~string((string *)(this + 0xa8));
  std::string::~string((string *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  std::string::~string((string *)(this + 0x90));
  std::string::~string((string *)(this + 0x88));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StageModuleProperties::~StageModuleProperties() */

void __thiscall StageModuleProperties::~StageModuleProperties(StageModuleProperties *this)

{
  ~StageModuleProperties(this);
  AK::FreeHook(this);
  return;
}


/* StageModuleProperties::GetModuleClass() const */

long * StageModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StageModule::sClass != (long *)0x0) {
    return StageModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StageModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"StageModule",uVar2,StageModule::StaticNew);
  StageModule::StaticClassInit();
  return StageModule::sClass;
}


/* StageModuleProperties::StaticNew() */

StageModuleProperties * StageModuleProperties::StaticNew(void)

{
  StageModuleProperties *this;
  
  this = ::operator_new(0x130);
  StageModuleProperties(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StageModuleProperties::StaticClassInit() */

void StageModuleProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"none",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"sandstorm",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"raidingparty",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"EventType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"StageModuleProperties");
    (*pcVar3)(plVar2,avStack_20,FUN_0446bc20,0x130,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StageModuleProperties::StaticGetClass() */

long * StageModuleProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StageModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StageModuleProperties::GetClass() const */

long * StageModuleProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"StageModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


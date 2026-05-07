// Class: PlayerPlantData


/* PlayerPlantData::TEMPNAMEPLACEHOLDERVALUE(PlayerPlantData&&) */

PlayerPlantData * __thiscall
PlayerPlantData::operator=(PlayerPlantData *this,PlayerPlantData *param_1)

{
  std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::operator=
            ((vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>>::operator=
            ((vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FUN_05474278(this + 0x40,param_1 + 0x40);
  FUN_05474278(this + 0x48,param_1 + 0x48);
  return this;
}


/* PlayerPlantData::~PlayerPlantData() */

void __thiscall PlayerPlantData::~PlayerPlantData(PlayerPlantData *this)

{
  *(undefined ***)this = &PTR_GetClass_0694cf10;
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>>::~vector
            ((vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>> *)(this + 0x20));
  std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::~vector
            ((vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> *)(this + 8));
  nop();
  return;
}


/* PlayerPlantData::~PlayerPlantData() */

void __thiscall PlayerPlantData::~PlayerPlantData(PlayerPlantData *this)

{
  ~PlayerPlantData(this);
  AK::FreeHook(this);
  return;
}


/* PlayerPlantData::PlayerPlantData() */

void __thiscall PlayerPlantData::PlayerPlantData(PlayerPlantData *this)

{
  size_t in_x2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0694cf10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x40));
  Set8BytesTo0((string *)(this + 0x48));
  std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::clear
            ((vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> *)(this + 8));
  std::vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>>::clear
            ((vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 1;
  std::string::append((string *)(this + 0x40),"",in_x2);
  std::string::append((string *)(this + 0x48),"",in_x2);
  return;
}


/* PlayerPlantData::PlayerPlantData(PlayerPlantData const&) */

void __thiscall PlayerPlantData::PlayerPlantData(PlayerPlantData *this,PlayerPlantData *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0694cf10;
  std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::vector
            ((vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>>::vector
            ((vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  FUN_05475d88(this + 0x48,param_1 + 0x48);
  return;
}


/* PlayerPlantData::TEMPNAMEPLACEHOLDERVALUE(PlayerPlantData const&) */

PlayerPlantData * __thiscall
PlayerPlantData::operator=(PlayerPlantData *this,PlayerPlantData *param_1)

{
  std::vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>>::operator=
            ((vector<ArenaPlantPositionData,std::allocator<ArenaPlantPositionData>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>>::operator=
            ((vector<ArenaPlantInfoData,std::allocator<ArenaPlantInfoData>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  thunk_FUN_05475e00(this + 0x48,param_1 + 0x48);
  return this;
}


/* PlayerPlantData::StaticNew() */

PlayerPlantData * PlayerPlantData::StaticNew(void)

{
  PlayerPlantData *this;
  
  this = ::operator_new(0x50);
  PlayerPlantData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerPlantData::StaticClassInit() */

void PlayerPlantData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArenaPlantPositionData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ae62c4,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArenaPlantInfoData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ae7b3c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlayerPlantData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ae9194,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlayerPlantData::StaticGetClass() */

long * PlayerPlantData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlayerPlantData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlayerPlantData::GetClass() const */

long * PlayerPlantData::GetClass(void)

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
  (*pcVar3)(plVar1,"PlayerPlantData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


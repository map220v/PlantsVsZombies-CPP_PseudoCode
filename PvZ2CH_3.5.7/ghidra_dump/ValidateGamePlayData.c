// Class: ValidateGamePlayData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ValidateGamePlayData::StaticClassInit() */

void ValidateGamePlayData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ValidateZombieInfoData");
    (*pcVar3)(plVar2,asStack_10,FUN_03719718,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ValidateDamageInfoData");
    (*pcVar3)(plVar2,asStack_10,FUN_03719a34,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ValidateToolPacketData");
    (*pcVar3)(plVar2,asStack_10,FUN_03719874,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ValidateGamePlayData");
    (*pcVar3)(plVar2,asStack_10,FUN_0371dce4,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ValidateGamePlayData::StaticGetClass() */

long * ValidateGamePlayData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ValidateGamePlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ValidateGamePlayData::GetClass() const */

long * ValidateGamePlayData::GetClass(void)

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
  (*pcVar3)(plVar1,"ValidateGamePlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ValidateGamePlayData::Reset() */

void __thiscall ValidateGamePlayData::Reset(ValidateGamePlayData *this)

{
  std::vector<ValidateDamageInfoData,std::allocator<ValidateDamageInfoData>>::clear
            ((vector<ValidateDamageInfoData,std::allocator<ValidateDamageInfoData>> *)(this + 8));
  std::vector<ValidateZombieInfoData,std::allocator<ValidateZombieInfoData>>::clear
            ((vector<ValidateZombieInfoData,std::allocator<ValidateZombieInfoData>> *)(this + 0x20))
  ;
  std::vector<ValidateToolPacketData,std::allocator<ValidateToolPacketData>>::clear
            ((vector<ValidateToolPacketData,std::allocator<ValidateToolPacketData>> *)(this + 0x38))
  ;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x50));
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  return;
}


/* ValidateGamePlayData::ValidateGamePlayData() */

void __thiscall ValidateGamePlayData::ValidateGamePlayData(ValidateGamePlayData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0668a560;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<ValidateDamageInfoData,std::allocator<ValidateDamageInfoData>>::clear
            ((vector<ValidateDamageInfoData,std::allocator<ValidateDamageInfoData>> *)(this + 8));
  std::vector<ValidateZombieInfoData,std::allocator<ValidateZombieInfoData>>::clear
            ((vector<ValidateZombieInfoData,std::allocator<ValidateZombieInfoData>> *)(this + 0x20))
  ;
  std::vector<ValidateToolPacketData,std::allocator<ValidateToolPacketData>>::clear
            ((vector<ValidateToolPacketData,std::allocator<ValidateToolPacketData>> *)(this + 0x38))
  ;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x50));
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  return;
}


/* ValidateGamePlayData::StaticNew() */

ValidateGamePlayData * ValidateGamePlayData::StaticNew(void)

{
  ValidateGamePlayData *this;
  
  this = ::operator_new(0x80);
  ValidateGamePlayData(this);
  return this;
}


/* ValidateGamePlayData::~ValidateGamePlayData() */

void __thiscall ValidateGamePlayData::~ValidateGamePlayData(ValidateGamePlayData *this)

{
  *(undefined ***)this = &PTR_GetClass_0668a560;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  std::vector<ValidateToolPacketData,std::allocator<ValidateToolPacketData>>::~vector
            ((vector<ValidateToolPacketData,std::allocator<ValidateToolPacketData>> *)(this + 0x38))
  ;
  std::vector<ValidateZombieInfoData,std::allocator<ValidateZombieInfoData>>::~vector
            ((vector<ValidateZombieInfoData,std::allocator<ValidateZombieInfoData>> *)(this + 0x20))
  ;
  std::vector<ValidateDamageInfoData,std::allocator<ValidateDamageInfoData>>::~vector
            ((vector<ValidateDamageInfoData,std::allocator<ValidateDamageInfoData>> *)(this + 8));
  nop();
  return;
}


/* ValidateGamePlayData::~ValidateGamePlayData() */

void __thiscall ValidateGamePlayData::~ValidateGamePlayData(ValidateGamePlayData *this)

{
  ~ValidateGamePlayData(this);
  AK::FreeHook(this);
  return;
}


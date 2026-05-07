// Class: FishingProperties


/* FishingProperties::GetModuleClass() const */

long * FishingProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (FishingModule::sClass != (long *)0x0) {
    return FishingModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  FishingModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"FishingModule",uVar2,FishingModule::StaticNew);
  FishingModule::StaticClassInit();
  return FishingModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingProperties::GetCannonData(int) const */

void FishingProperties::GetCannonData(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int in_w1;
  int *in_x8;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = FUN_047adea8(*(undefined8 *)((ulong)(uint)param_1 + 0x58));
  local_20 = FUN_047adef8(*(undefined8 *)((ulong)(uint)param_1 + 0x60));
  do {
    bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    if (!bVar5) {
      CannonData::CannonData((CannonData *)&local_20);
      local_10 = CONCAT31(local_10._1_3_,1);
      local_14 = 1;
      local_18 = 10;
      local_20 = CONCAT44(10,in_w1);
      in_x8[4] = local_10;
      *(undefined8 *)in_x8 = local_20;
      in_x8[2] = 10;
      in_x8[3] = 1;
LAB_047ae010:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    iVar1 = piVar6[1];
    iVar2 = piVar6[2];
    iVar3 = piVar6[3];
    iVar4 = piVar6[4];
    if (in_w1 == *piVar6) {
      *in_x8 = in_w1;
      in_x8[1] = iVar1;
      in_x8[2] = iVar2;
      in_x8[3] = iVar3;
      *(char *)(in_x8 + 4) = (char)iVar4;
      goto LAB_047ae010;
    }
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingProperties::GetHitpoints(Sexy::RtWeakPtr<ZombieType const>) const */

void __thiscall FishingProperties::GetHitpoints(FishingProperties *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  GridItemPoolEntry *pGVar3;
  undefined8 local_28;
  undefined8 local_20;
  GridItemPoolEntry aGStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = FUN_047ae118(*(undefined8 *)(this + 0xa0));
  local_20 = FUN_047ae168(*(undefined8 *)(this + 0xa8));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    if (!bVar2) {
      local_10 = 0;
LAB_047ae25c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_10);
    }
    pGVar3 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    GridItemPoolEntry::GridItemPoolEntry(aGStack_18,pGVar3);
    cVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aGStack_18,param_2);
    if (cVar1 != '\0') {
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_18);
      goto LAB_047ae25c;
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aGStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  } while( true );
}


/* FishingProperties::FishingProperties() */

void __thiscall FishingProperties::FishingProperties(FishingProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 100;
  *(undefined ***)this = &PTR_GetClass_068e3370;
  *(undefined4 *)(this + 0x44) = 1000;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined4 *)(this + 0x4c) = 3;
  *(undefined4 *)(this + 0x50) = 0x40a00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  return;
}


/* FishingProperties::StaticNew() */

FishingProperties * FishingProperties::StaticNew(void)

{
  FishingProperties *this;
  
  this = ::operator_new(0xb8);
  FishingProperties(this);
  return this;
}


/* FishingProperties::~FishingProperties() */

void __thiscall FishingProperties::~FishingProperties(FishingProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068e3370;
  std::vector<FishingZombieInitData,std::allocator<FishingZombieInitData>>::~vector
            ((vector<FishingZombieInitData,std::allocator<FishingZombieInitData>> *)(this + 0xa0));
  std::vector<FishingPath,std::allocator<FishingPath>>::~vector
            ((vector<FishingPath,std::allocator<FishingPath>> *)(this + 0x88));
  std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>::~vector
            ((vector<FishingZombieGroup,std::allocator<FishingZombieGroup>> *)(this + 0x70));
  std::vector<CannonData,std::allocator<CannonData>>::~vector
            ((vector<CannonData,std::allocator<CannonData>> *)(this + 0x58));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* FishingProperties::~FishingProperties() */

void __thiscall FishingProperties::~FishingProperties(FishingProperties *this)

{
  ~FishingProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingProperties::StaticClassInit() */

void FishingProperties::StaticClassInit(void)

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
            (apStack_30,"Weight",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"Time",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"Wave",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"Num",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"FishingActiveCondition");
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
    std::string::string((string *)avStack_20,"FishingZombieInfo");
    (*pcVar3)(plVar2,avStack_20,FUN_047afd00,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"FishingZombieGroup");
    (*pcVar3)(plVar2,avStack_20,FUN_047b00c4,0x48,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"FishingPath");
    (*pcVar3)(plVar2,avStack_20,FUN_047adc98,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"CannonData");
    (*pcVar3)(plVar2,avStack_20,FUN_047abfa4,0x14,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"FishingZombieInitData");
    (*pcVar3)(plVar2,avStack_20,FUN_047afbb0,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"FishingProperties");
    (*pcVar3)(plVar2,avStack_20,FUN_047b5ca0,0xb8,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingProperties::StaticGetClass() */

long * FishingProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FishingProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FishingProperties::GetClass() const */

long * FishingProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"FishingProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


// Class: LootSaveData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootSaveData::StaticClassInit() */

void LootSaveData::StaticClassInit(void)

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
    std::string::string(asStack_10,"LootEntrySaveData");
    (*pcVar3)(plVar2,asStack_10,FUN_03e8e7a4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LootSaveData");
    (*pcVar3)(plVar2,asStack_10,FUN_03e8fd98,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LootSaveData::StaticGetClass() */

long * LootSaveData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LootSaveData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LootSaveData::GetClass() const */

long * LootSaveData::GetClass(void)

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
  (*pcVar3)(plVar1,"LootSaveData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LootSaveData::LootSaveData() */

void __thiscall LootSaveData::LootSaveData(LootSaveData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06790350;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* LootSaveData::StaticNew() */

LootSaveData * LootSaveData::StaticNew(void)

{
  LootSaveData *this;
  
  this = ::operator_new(0x28);
  LootSaveData(this);
  return this;
}


/* LootSaveData::~LootSaveData() */

void __thiscall LootSaveData::~LootSaveData(LootSaveData *this)

{
  *(undefined ***)this = &PTR_GetClass_06790350;
  std::vector<LootEntrySaveData,std::allocator<LootEntrySaveData>>::~vector
            ((vector<LootEntrySaveData,std::allocator<LootEntrySaveData>> *)(this + 0x10));
  nop();
  return;
}


/* LootSaveData::~LootSaveData() */

void __thiscall LootSaveData::~LootSaveData(LootSaveData *this)

{
  ~LootSaveData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LootSaveData::GetLootEntryData(std::string const&) */

void __thiscall LootSaveData::GetLootEntryData(LootSaveData *this,string *param_1)

{
  vector<LootEntrySaveData,std::allocator<LootEntrySaveData>> *this_00;
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  LootEntrySaveData aLStack_28 [32];
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_03e8e664(uVar5,*(undefined8 *)(this + 0x18));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      this_00 = (vector<LootEntrySaveData,std::allocator<LootEntrySaveData>> *)(this + 0x10);
      LootEntrySaveData::LootEntrySaveData(aLStack_28);
      std::vector<LootEntrySaveData,std::allocator<LootEntrySaveData>>::push_back
                (this_00,aLStack_28);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                ((pair<std::string_const,Sexy::PILifeValueTable> *)aLStack_28);
      uVar5 = std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>::
              back((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>
                    *)this_00);
      thunk_FUN_05475e00(uVar5,param_1);
      psVar3 = (string *)
               std::vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>
               ::back((vector<Sexy::RenderEffectTechnique,std::allocator<Sexy::RenderEffectTechnique>>
                       *)this_00);
      break;
    }
    psVar3 = (string *)FUN_03e8e68c(uVar5,lVar4);
    cVar1 = std::operator==(psVar3,param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(psVar3);
  }
  return;
}


// Class: LevelDefinition


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool LevelDefinition::HasLevelModule<PVZ1CopycatsModuleProperties>() const */

bool __thiscall LevelDefinition::HasLevelModule<PVZ1CopycatsModuleProperties>(LevelDefinition *this)

{
  bool bVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar5 = *(undefined8 *)(this + 0x88);
    uVar2 = FUN_035cbfec(uVar5,*(undefined8 *)(this + 0x90));
    if (uVar2 <= uVar4) {
      bVar1 = false;
LAB_035ce974:
      if (local_8 == ___stack_chk_guard) {
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)FUN_035cc0d8(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = Sexy::RtObject::IsA<PVZ1CopycatsModuleProperties>(this_00);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        bVar1 = true;
        goto LAB_035ce974;
      }
    }
    uVar4 = uVar4 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool LevelDefinition::HasLevelModule<CustomLevelModuleProperties>() const */

bool __thiscall LevelDefinition::HasLevelModule<CustomLevelModuleProperties>(LevelDefinition *this)

{
  bool bVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar5 = *(undefined8 *)(this + 0x88);
    uVar2 = FUN_035e1df8(uVar5,*(undefined8 *)(this + 0x90));
    if (uVar2 <= uVar4) {
      bVar1 = false;
LAB_035e37ac:
      if (local_8 == ___stack_chk_guard) {
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)FUN_035e1e28(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = Sexy::RtObject::IsA<CustomLevelModuleProperties>(this_00);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        bVar1 = true;
        goto LAB_035e37ac;
      }
    }
    uVar4 = uVar4 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool LevelDefinition::HasLevelModule<PerkHandlerModuleProperties>() const */

bool __thiscall LevelDefinition::HasLevelModule<PerkHandlerModuleProperties>(LevelDefinition *this)

{
  bool bVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar5 = *(undefined8 *)(this + 0x88);
    uVar2 = FUN_036b3374(uVar5,*(undefined8 *)(this + 0x90));
    if (uVar2 <= uVar4) {
      bVar1 = false;
LAB_036b6d60:
      if (local_8 == ___stack_chk_guard) {
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)FUN_036b35c8(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = Sexy::RtObject::IsA<PerkHandlerModuleProperties>(this_00);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        bVar1 = true;
        goto LAB_036b6d60;
      }
    }
    uVar4 = uVar4 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool LevelDefinition::HasLevelModule<ZombossRiftBattleModuleProperties>() const */

bool __thiscall
LevelDefinition::HasLevelModule<ZombossRiftBattleModuleProperties>(LevelDefinition *this)

{
  bool bVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar5 = *(undefined8 *)(this + 0x88);
    uVar2 = FUN_036b3374(uVar5,*(undefined8 *)(this + 0x90));
    if (uVar2 <= uVar4) {
      bVar1 = false;
LAB_036b6f04:
      if (local_8 == ___stack_chk_guard) {
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)FUN_036b35c8(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = Sexy::RtObject::IsA<ZombossRiftBattleModuleProperties>(this_00);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        bVar1 = true;
        goto LAB_036b6f04;
      }
    }
    uVar4 = uVar4 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool LevelDefinition::HasLevelModule<LastStandMinigameProperties>() const */

bool __thiscall LevelDefinition::HasLevelModule<LastStandMinigameProperties>(LevelDefinition *this)

{
  bool bVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar5 = *(undefined8 *)(this + 0x88);
    uVar2 = FUN_036cdc4c(uVar5,*(undefined8 *)(this + 0x90));
    if (uVar2 <= uVar4) {
      bVar1 = false;
LAB_036cf078:
      if (local_8 == ___stack_chk_guard) {
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)FUN_036cdc84(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = Sexy::RtObject::IsA<LastStandMinigameProperties>(this_00);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        bVar1 = true;
        goto LAB_036cf078;
      }
    }
    uVar4 = uVar4 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool LevelDefinition::HasLevelModule<ZombossBattleModuleProperties>() const */

bool __thiscall
LevelDefinition::HasLevelModule<ZombossBattleModuleProperties>(LevelDefinition *this)

{
  bool bVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar5 = *(undefined8 *)(this + 0x88);
    uVar2 = FUN_03e5f998(uVar5,*(undefined8 *)(this + 0x90));
    if (uVar2 <= uVar4) {
      bVar1 = false;
LAB_03e607b8:
      if (local_8 == ___stack_chk_guard) {
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)FUN_03e5fa0c(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = Sexy::RtObject::IsA<ZombossBattleModuleProperties>(this_00);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        bVar1 = true;
        goto LAB_03e607b8;
      }
    }
    uVar4 = uVar4 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossBattleModuleProperties* LevelDefinition::GetLevelModule<ZombossBattleModuleProperties>()
   const */

ZombossBattleModuleProperties * __thiscall
LevelDefinition::GetLevelModule<ZombossBattleModuleProperties>(LevelDefinition *this)

{
  bool bVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *pRVar4;
  ZombossBattleModuleProperties *pZVar5;
  ulong uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar7 = *(undefined8 *)(this + 0x88);
    uVar2 = FUN_03e5f998(uVar7,*(undefined8 *)(this + 0x90));
    if (uVar2 <= uVar6) {
      pZVar5 = (ZombossBattleModuleProperties *)0x0;
LAB_03e60918:
      if (local_8 == ___stack_chk_guard) {
        return pZVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)FUN_03e5fa0c(uVar7,uVar6);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = Sexy::RtObject::IsA<ZombossBattleModuleProperties>(pRVar4);
      if (bVar1) {
        pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pZVar5 = Sexy::RtObject::Cast<ZombossBattleModuleProperties>(pRVar4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        goto LAB_03e60918;
      }
    }
    uVar6 = uVar6 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelDefinition::StaticClassInit() */

void LevelDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWarningInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03e6c68c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ShowZombieTitles");
    (*pcVar3)(plVar2,asStack_10,FUN_03e6c15c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LevelDefinition");
    (*pcVar3)(plVar2,asStack_10,FUN_03e6cbd0,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelDefinition::StaticGetClass() */

long * LevelDefinition::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"LevelDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelDefinition::GetClass() const */

long * LevelDefinition::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"LevelDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelDefinition::LevelDefinition() */

void __thiscall LevelDefinition::LevelDefinition(LevelDefinition *this)

{
  RtName *__n;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_0678d400;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0((string *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa0));
  Set8BytesTo0((string *)(this + 0xa8));
  Set8BytesTo0(this + 0xb0);
  Set8BytesTo0(this + 0xb8);
  Set8BytesTo0((string *)(this + 200));
  Set8BytesTo0((string *)(this + 0xd8));
  Set8BytesTo0(this + 0xe8);
  Set8BytesTo0(this + 0xf0);
  Set8BytesTo0(this + 0xf8);
  Set8BytesTo0(this + 0x100);
  Set8BytesTo0(this + 0x108);
  Set8BytesTo0(this + 0x120);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  Set8BytesTo0(this + 0x140);
  Set8BytesTo0((string *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  Set8BytesTo0(this + 0x1c0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x28) = 0x32;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  std::string::append((string *)(this + 0x20),"[SURVIVE_ZOMBIE_ATTACK]",0xffffffff);
  *(undefined4 *)(this + 0xc4) = 2;
  this[0xc0] = (LevelDefinition)0x0;
  this[0x111] = (LevelDefinition)0x0;
  this[0x112] = (LevelDefinition)0x0;
  this[0x116] = (LevelDefinition)0x0;
  this[0x117] = (LevelDefinition)0x0;
  this[0x118] = (LevelDefinition)0x0;
  this[0x119] = (LevelDefinition)0x0;
  this[0x113] = (LevelDefinition)0x0;
  this[0x114] = (LevelDefinition)0x0;
  this[0x115] = (LevelDefinition)0x0;
  this[0x16d] = (LevelDefinition)0x1;
  this[0x110] = (LevelDefinition)0x0;
  this[0x16c] = (LevelDefinition)0x0;
  this[0x16f] = (LevelDefinition)0x0;
  this[0x170] = (LevelDefinition)0x0;
  this[0x11a] = (LevelDefinition)0x0;
  this[0x11b] = (LevelDefinition)0x0;
  std::string::append((string *)(this + 200),"moneybag",0x5605a00);
  *(undefined4 *)(this + 0xd0) = 2;
  std::string::append((string *)(this + 0xd8),"moneybag",0x5605a00);
  this[0xe0] = (LevelDefinition)0x1;
  this[0xe1] = (LevelDefinition)0x0;
  Sexy::RtName::RtName(aRStack_28,L"VictoryOutro");
  Sexy::RtName::RtName(aRStack_18,L"LevelModules");
  __n = aRStack_18;
  Sexy::RtId::RtId(aRStack_30,aRStack_28,aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),(RtWeakPtr *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtId::~RtId(aRStack_30);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtName::~RtName(aRStack_28);
  std::string::append((string *)(this + 0xa8),"",(size_t)__n);
  this[0x16e] = (LevelDefinition)0x1;
  *(undefined4 *)(this + 0x168) = 0xffffffff;
  std::string::append((string *)(this + 0x148),"",(size_t)__n);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelDefinition::StaticNew() */

LevelDefinition * LevelDefinition::StaticNew(void)

{
  LevelDefinition *this;
  
  this = ::operator_new(0x1e0);
  LevelDefinition(this);
  return this;
}


/* LevelDefinition::~LevelDefinition() */

void __thiscall LevelDefinition::~LevelDefinition(LevelDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_0678d400;
  std::
  vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
  ::~vector((vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
             *)(this + 0x1c8));
  std::string::~string((string *)(this + 0x1c0));
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::~vector((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
             *)(this + 0x1a8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 400));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x178));
  std::vector<ZombieWarningInfo,std::allocator<ZombieWarningInfo>>::~vector
            ((vector<ZombieWarningInfo,std::allocator<ZombieWarningInfo>> *)(this + 0x150));
  std::string::~string((string *)(this + 0x148));
  std::string::~string((string *)(this + 0x140));
  std::vector<GameFeature,std::allocator<GameFeature>>::~vector
            ((vector<GameFeature,std::allocator<GameFeature>> *)(this + 0x128));
  std::string::~string((string *)(this + 0x120));
  std::string::~string((string *)(this + 0x108));
  std::string::~string((string *)(this + 0x100));
  std::string::~string((string *)(this + 0xf8));
  std::string::~string((string *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  std::string::~string((string *)(this + 0xd8));
  std::string::~string((string *)(this + 200));
  std::string::~string((string *)(this + 0xb8));
  std::string::~string((string *)(this + 0xb0));
  std::string::~string((string *)(this + 0xa8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0));
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::~vector
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x88));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x80));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  std::vector<ShowZombieTitles,std::allocator<ShowZombieTitles>>::~vector
            ((vector<ShowZombieTitles,std::allocator<ShowZombieTitles>> *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* LevelDefinition::~LevelDefinition() */

void __thiscall LevelDefinition::~LevelDefinition(LevelDefinition *this)

{
  ~LevelDefinition(this);
  AK::FreeHook(this);
  return;
}


/* LevelDefinition::TEMPNAMEPLACEHOLDERVALUE(LevelDefinition const&) */

LevelDefinition * __thiscall
LevelDefinition::operator=(LevelDefinition *this,LevelDefinition *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LevelDefinition LVar3;
  LevelDefinition LVar4;
  LevelDefinition LVar5;
  LevelDefinition LVar6;
  LevelDefinition LVar7;
  LevelDefinition LVar8;
  LevelDefinition LVar9;
  LevelDefinition LVar10;
  LevelDefinition LVar11;
  LevelDefinition LVar12;
  LevelDefinition LVar13;
  undefined2 uVar14;
  
  PropertySheetBase::operator=((PropertySheetBase *)this,(PropertySheetBase *)param_1);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  uVar14 = *(undefined2 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined2 *)(this + 0x28) = uVar14;
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar2;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  std::vector<ShowZombieTitles,std::allocator<ShowZombieTitles>>::operator=
            ((vector<ShowZombieTitles,std::allocator<ShowZombieTitles>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)(param_1 + 0x68));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x70),(RtWeakPtr *)(param_1 + 0x70));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x78),(RtWeakPtr *)(param_1 + 0x78));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x80),(RtWeakPtr *)(param_1 + 0x80));
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::operator=
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x88),
             (vector *)(param_1 + 0x88));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xa0),(RtWeakPtr *)(param_1 + 0xa0));
  thunk_FUN_05475e00(this + 0xa8,param_1 + 0xa8);
  thunk_FUN_05475e00(this + 0xb0,param_1 + 0xb0);
  thunk_FUN_05475e00(this + 0xb8,param_1 + 0xb8);
  uVar1 = *(undefined4 *)(param_1 + 0xc4);
  this[0xc0] = param_1[0xc0];
  *(undefined4 *)(this + 0xc4) = uVar1;
  thunk_FUN_05475e00(this + 200,param_1 + 200);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  thunk_FUN_05475e00(this + 0xd8,param_1 + 0xd8);
  LVar3 = param_1[0xe1];
  this[0xe0] = param_1[0xe0];
  this[0xe1] = LVar3;
  thunk_FUN_05475e00(this + 0xe8,param_1 + 0xe8);
  thunk_FUN_05475e00(this + 0xf0,param_1 + 0xf0);
  thunk_FUN_05475e00(this + 0xf8,param_1 + 0xf8);
  thunk_FUN_05475e00(this + 0x100,param_1 + 0x100);
  thunk_FUN_05475e00(this + 0x108,param_1 + 0x108);
  LVar3 = param_1[0x110];
  LVar4 = param_1[0x111];
  LVar5 = param_1[0x112];
  LVar6 = param_1[0x113];
  LVar7 = param_1[0x114];
  LVar8 = param_1[0x115];
  LVar9 = param_1[0x116];
  LVar10 = param_1[0x117];
  LVar11 = param_1[0x118];
  LVar12 = param_1[0x119];
  LVar13 = param_1[0x11a];
  this[0x11b] = param_1[0x11b];
  this[0x110] = LVar3;
  this[0x111] = LVar4;
  this[0x112] = LVar5;
  this[0x113] = LVar6;
  this[0x114] = LVar7;
  this[0x115] = LVar8;
  this[0x116] = LVar9;
  this[0x117] = LVar10;
  this[0x118] = LVar11;
  this[0x119] = LVar12;
  this[0x11a] = LVar13;
  thunk_FUN_05475e00(this + 0x120,param_1 + 0x120);
  std::vector<GameFeature,std::allocator<GameFeature>>::operator=
            ((vector<GameFeature,std::allocator<GameFeature>> *)(this + 0x128),
             (vector *)(param_1 + 0x128));
  thunk_FUN_05475e00(this + 0x140,param_1 + 0x140);
  thunk_FUN_05475e00(this + 0x148,param_1 + 0x148);
  std::vector<ZombieWarningInfo,std::allocator<ZombieWarningInfo>>::operator=
            ((vector<ZombieWarningInfo,std::allocator<ZombieWarningInfo>> *)(this + 0x150),
             (vector *)(param_1 + 0x150));
  uVar1 = *(undefined4 *)(param_1 + 0x168);
  LVar3 = param_1[0x16c];
  LVar4 = param_1[0x16d];
  LVar5 = param_1[0x16e];
  LVar6 = param_1[0x16f];
  this[0x170] = param_1[0x170];
  *(undefined4 *)(this + 0x168) = uVar1;
  this[0x16c] = LVar3;
  this[0x16d] = LVar4;
  this[0x16e] = LVar5;
  this[0x16f] = LVar6;
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x178),
             (vector *)(param_1 + 0x178));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 400),
             (vector *)(param_1 + 400));
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::operator=((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
               *)(this + 0x1a8),(vector *)(param_1 + 0x1a8));
  thunk_FUN_05475e00(this + 0x1c0,param_1 + 0x1c0);
  std::
  vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
  ::operator=((vector<Sexy::RtWeakPtr<LevelModifierDifficulty_const>,std::allocator<Sexy::RtWeakPtr<LevelModifierDifficulty_const>>>
               *)(this + 0x1c8),(vector *)(param_1 + 0x1c8));
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool LevelDefinition::HasLevelModule<PVZ1ModeIntroProperties>() const */

bool __thiscall LevelDefinition::HasLevelModule<PVZ1ModeIntroProperties>(LevelDefinition *this)

{
  bool bVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar5 = *(undefined8 *)(this + 0x88);
    uVar2 = FUN_04c67224(uVar5,*(undefined8 *)(this + 0x90));
    if (uVar2 <= uVar4) {
      bVar1 = false;
LAB_04c68910:
      if (local_8 == ___stack_chk_guard) {
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)FUN_04c672cc(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = Sexy::RtObject::IsA<PVZ1ModeIntroProperties>(this_00);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        bVar1 = true;
        goto LAB_04c68910;
      }
    }
    uVar4 = uVar4 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool LevelDefinition::HasLevelModule<PennyClassroomModuleProperties>() const */

bool __thiscall
LevelDefinition::HasLevelModule<PennyClassroomModuleProperties>(LevelDefinition *this)

{
  bool bVar1;
  ulong uVar2;
  RtWeakPtrBase *pRVar3;
  RtObject *this_00;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar5 = *(undefined8 *)(this + 0x88);
    uVar2 = FUN_04de7970(uVar5,*(undefined8 *)(this + 0x90));
    if (uVar2 <= uVar4) {
      bVar1 = false;
LAB_04dec110:
      if (local_8 == ___stack_chk_guard) {
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar3 = (RtWeakPtrBase *)FUN_04de80b8(uVar5,uVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      bVar1 = Sexy::RtObject::IsA<PennyClassroomModuleProperties>(this_00);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        bVar1 = true;
        goto LAB_04dec110;
      }
    }
    uVar4 = uVar4 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


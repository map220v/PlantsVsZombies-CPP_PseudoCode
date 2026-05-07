// Class: CustomLevelCreator


/* CustomLevelCreator::GetCustomLevelPrefix() */

undefined * CustomLevelCreator::GetCustomLevelPrefix(void)

{
  return &DAT_06aa7320;
}


/* CustomLevelCreator::Reset() */

void __thiscall CustomLevelCreator::Reset(CustomLevelCreator *this)

{
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::getNextAlias() */

void CustomLevelCreator::getNextAlias(void)

{
  long lVar1;
  long in_x0;
  RtName *in_x8;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_10,(ulong)*(uint *)(in_x0 + 8));
  Sexy::RtName::RtName(in_x8,awStack_10);
  FUN_05476c50(awStack_10);
  lVar1 = ___stack_chk_guard;
  *(int *)(in_x0 + 8) = *(int *)(in_x0 + 8) + 1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::SetLootModuleReference(wchar_t const*, wchar_t const*) */

void __thiscall
CustomLevelCreator::SetLootModuleReference
          (CustomLevelCreator *this,wchar_t *param_1,wchar_t *param_2)

{
  long lVar1;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Sexy::RtName::RtName(aRStack_28,param_1);
  Sexy::RtName::RtName(aRStack_18,param_2);
  Sexy::RtId::RtId(aRStack_38,aRStack_28,aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(lVar1 + 0xa0),(RtWeakPtr *)aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtId::~RtId(aRStack_38);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtName::~RtName(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::SetStageModuleReference(wchar_t const*, wchar_t const*) */

void __thiscall
CustomLevelCreator::SetStageModuleReference
          (CustomLevelCreator *this,wchar_t *param_1,wchar_t *param_2)

{
  long lVar1;
  RtId aRStack_30 [8];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Sexy::RtName::RtName(aRStack_28,param_1);
  Sexy::RtName::RtName(aRStack_18,param_2);
  Sexy::RtId::RtId(aRStack_30,aRStack_28,aRStack_18);
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)(lVar1 + 0x68),aRStack_30);
  Sexy::RtId::~RtId(aRStack_30);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtName::~RtName(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::createLevelDefinition() */

void __thiscall CustomLevelCreator::createLevelDefinition(CustomLevelCreator *this)

{
  GameObject *pGVar1;
  PVZDB *pPVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_18 [8];
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = (GameObject *)LevelDefinition::StaticNew();
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar3 = PVZDB::GetTable(pPVar2,0x25);
  Sexy::RtDbTable::AllocId(aRStack_18,uVar3,pGVar1,0,1,0);
  Sexy::RtId::RtId(aRStack_10,aRStack_18);
  GameObject::CallInitialize(pGVar1,aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::createAliasedObjectInLevel(Sexy::RtClass*) */

void CustomLevelCreator::createAliasedObjectInLevel(RtClass *param_1)

{
  undefined8 uVar1;
  PVZDB *pPVar2;
  RtDbTable *this;
  long in_x1;
  RtId *in_x8;
  RtId aRStack_30 [8];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_035b90ac(*(undefined8 *)(in_x1 + 0x18));
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtDbTable *)PVZDB::GetTable(pPVar2,0x25);
  Sexy::RtDbTable::AllocId(aRStack_30,this,uVar1,0,1,0);
  getNextAlias();
  Sexy::RtDbTable::SetIdForAlias(this,aRStack_28,aRStack_30);
  Sexy::RtName::RtName(aRStack_18,L"CurrentLevel");
  Sexy::RtId::RtId(in_x8,aRStack_28,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtName::~RtName(aRStack_28);
  Sexy::RtId::~RtId(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::AddAliasedObject(Sexy::RtClass*) */

void __thiscall CustomLevelCreator::AddAliasedObject(CustomLevelCreator *this,RtClass *param_1)

{
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  createAliasedObjectInLevel((RtClass *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::SaveLevelDef(CustomLevelWorldParams const&) */

void CustomLevelCreator::SaveLevelDef(CustomLevelWorldParams *param_1)

{
  uint uVar1;
  string *psVar2;
  undefined8 uVar3;
  PVZDB *pPVar4;
  long in_x1;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_30);
  uVar1 = *(uint *)(in_x1 + 0x20);
  psVar2 = (string *)GetCustomLevelPrefix();
  uVar3 = FUN_0547429c(asStack_30);
  Sexy::StrFormat("%s_%d",asStack_10,uVar3,(ulong)uVar1);
  std::operator+(psVar2,asStack_10);
  std::string::~string(asStack_10);
  GetFolder(asStack_20,3);
  std::operator+(asStack_20,(string *)&DAT_06aa7348);
  uVar3 = FUN_0547429c();
  Sexy::StrFormat("%s.rton",asStack_10,uVar3);
  std::operator+(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::SavePackageForTableToFile(pPVar4,0x25,asStack_28,0,1);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::LoadLevelDef(std::string const&) */

void CustomLevelCreator::LoadLevelDef(string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  PVZDB *pPVar5;
  RtDbTable *pRVar6;
  RtObject *this;
  int extraout_w1;
  int extraout_w1_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  GetFolder(asStack_38,3);
  std::operator+(asStack_38,(string *)&DAT_06aa7348);
  uVar3 = FUN_0547429c();
  Sexy::StrFormat("%s.rton",asStack_28,uVar3);
  std::operator+(asStack_30,asStack_28);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  cVar1 = Sexy::SexyAppBase::FileExists(Sexy::gSexyAppBase,asStack_40);
  if (cVar1 != '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(asStack_28,uVar3,0x25);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar2)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_30,(RtWeakPtrBase *)asStack_38);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
      (**(code **)(*plVar4 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
      Sexy::RtId::~RtId((RtId *)asStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar6 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x25);
    Sexy::RtDbTable::Reset(pRVar6,false);
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar6 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x25);
    Sexy::RtDbTable::Reset(pRVar6,true);
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::LoadPackageForTableFromRTONFile(pPVar5,0x25,asStack_40);
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(asStack_28,uVar3,0x25);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar2)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)asStack_30);
      Sexy::RtId::~RtId((RtId *)asStack_30);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_38);
      if (bVar2) {
        this = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38)
        ;
        bVar2 = Sexy::RtObject::IsA<LevelDefinition>(this);
        if (bVar2) {
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)asStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
          break;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1_00);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
  }
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::AddModuleReference(wchar_t const*, wchar_t const*) */

void __thiscall
CustomLevelCreator::AddModuleReference(CustomLevelCreator *this,wchar_t *param_1,wchar_t *param_2)

{
  long lVar1;
  RtId aRStack_30 [8];
  RtName aRStack_28 [16];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Sexy::RtName::RtName(aRStack_28,param_1);
  Sexy::RtName::RtName(aRStack_18,param_2);
  Sexy::RtId::RtId(aRStack_30,aRStack_28,aRStack_18);
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::push_back
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(lVar1 + 0x88),aRStack_30);
  Sexy::RtId::~RtId(aRStack_30);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtName::~RtName(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::AddModule(Sexy::RtClass*) */

void CustomLevelCreator::AddModule(RtClass *param_1)

{
  long lVar1;
  RtId *pRVar2;
  undefined8 uVar3;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  createAliasedObjectInLevel(param_1);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::push_back
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(lVar1 + 0x88),aRStack_10);
  pRVar2 = (RtId *)Sexy::RtDb::GetDb();
  uVar3 = Sexy::RtDb::GetObjectForId(pRVar2);
  Sexy::RtId::~RtId(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::SetLevelInfo(CustomLevelParams const&) */

void __thiscall
CustomLevelCreator::SetLevelInfo(CustomLevelCreator *this,CustomLevelParams *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  DString aDStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = CustomLevelUtils::GetLevelDetailsLevelName();
  FUN_05475d88(asStack_40,uVar4);
  getPlatformPrefix();
  iVar3 = CustomLevelUtils::GetLevelDetailsLevelID();
  DString::DString(aDStack_28,iVar3);
  ::operator+(asStack_30,aDStack_28);
  DString::operator_cast_to_string(aDStack_18);
  DString::~DString(aDStack_18);
  DString::~DString(aDStack_28);
  std::string::~string(asStack_30);
  std::operator+(asStack_40,"\n");
  std::operator+((string *)aDStack_28,"ID: ");
  std::operator+((string *)aDStack_18,asStack_38);
  std::string::~string((string *)aDStack_18);
  std::string::~string((string *)aDStack_28);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  thunk_FUN_05475e00(lVar5 + 0x10,asStack_30);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  thunk_FUN_05475e00(lVar5 + 0x18,param_1 + 8);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_1 + 0x10);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  *(short *)(lVar5 + 0x28) = (short)*(undefined4 *)(param_1 + 0x14);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  bVar1 = CustomChallenge::HasStatueMaze((CustomChallenge *)(param_1 + 0x98));
  *(byte *)(lVar5 + 0xe0) = bVar1 ^ 1;
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  uVar2 = CustomChallenge::HasVaseBreaker((CustomChallenge *)(param_1 + 0x98));
  *(undefined1 *)(lVar5 + 0x111) = uVar2;
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelCreator::CreateLevel(CustomLevelParams const&) */

void __thiscall CustomLevelCreator::CreateLevel(CustomLevelCreator *this,CustomLevelParams *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  RtId *pRVar3;
  RtObject *this_00;
  long *plVar4;
  PVZDB *pPVar5;
  RtDbTable *this_01;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int iVar6;
  RtId aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x25);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    pRVar3 = (RtId *)Sexy::RtDb::GetDb();
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    this_00 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar3);
    Sexy::RtId::~RtId(aRStack_30);
    iVar6 = extraout_w1;
    if ((this_00 != (RtObject *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<GameObject>(this_00), iVar6 = extraout_w1_00, bVar1)) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      (**(code **)(*plVar4 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_38);
      iVar6 = extraout_w1_01;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar6);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this_01 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x25);
  Sexy::RtDbTable::Reset(this_01,false);
  Sexy::RtDbTable::Reset(this_01,true);
  createLevelDefinition(this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)aIStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_28);
  SetLevelInfo(this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelCreator::GetLevelDef() */

RtWeakPtr<Sexy::SoundResource> * CustomLevelCreator::GetLevelDef(void)

{
  RtWeakPtrBase *in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,in_x0);
  return in_x8;
}


/* CustomLevelEncourageModuleProperties*
   CustomLevelCreator::AddModule<CustomLevelEncourageModuleProperties>() */

CustomLevelEncourageModuleProperties * __thiscall
CustomLevelCreator::AddModule<CustomLevelEncourageModuleProperties>(CustomLevelCreator *this)

{
  CustomLevelEncourageModuleProperties *extraout_x0;
  
  CustomLevelEncourageModuleProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* PiratePlankProperties* CustomLevelCreator::AddModule<PiratePlankProperties>() */

PiratePlankProperties * __thiscall
CustomLevelCreator::AddModule<PiratePlankProperties>(CustomLevelCreator *this)

{
  PiratePlankProperties *extraout_x0;
  
  PiratePlankProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<StormZombieSpawnerProps>
   CustomLevelCreator::AddAliasedObject<StormZombieSpawnerProps>() */

void CustomLevelCreator::AddAliasedObject<StormZombieSpawnerProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)StormZombieSpawnerProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<SummonZombieSpawnerProps>
   CustomLevelCreator::AddAliasedObject<SummonZombieSpawnerProps>() */

void CustomLevelCreator::AddAliasedObject<SummonZombieSpawnerProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)SummonZombieSpawnerProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<SpiderRainZombieSpawnerProps>
   CustomLevelCreator::AddAliasedObject<SpiderRainZombieSpawnerProps>() */

void CustomLevelCreator::AddAliasedObject<SpiderRainZombieSpawnerProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)SpiderRainZombieSpawnerProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<SpawnModernPortalsWaveActionProps>
   CustomLevelCreator::AddAliasedObject<SpawnModernPortalsWaveActionProps>() */

void CustomLevelCreator::AddAliasedObject<SpawnModernPortalsWaveActionProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)SpawnModernPortalsWaveActionProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<DinoRunActionProps> CustomLevelCreator::AddAliasedObject<DinoRunActionProps>() */

void CustomLevelCreator::AddAliasedObject<DinoRunActionProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)DinoRunActionProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<RaidingPartyZombieSpawnerProps>
   CustomLevelCreator::AddAliasedObject<RaidingPartyZombieSpawnerProps>() */

void CustomLevelCreator::AddAliasedObject<RaidingPartyZombieSpawnerProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)RaidingPartyZombieSpawnerProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<FrostWindWaveActionProps>
   CustomLevelCreator::AddAliasedObject<FrostWindWaveActionProps>() */

void CustomLevelCreator::AddAliasedObject<FrostWindWaveActionProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)FrostWindWaveActionProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<ParachuteRainZombieSpawnerProps>
   CustomLevelCreator::AddAliasedObject<ParachuteRainZombieSpawnerProps>() */

void CustomLevelCreator::AddAliasedObject<ParachuteRainZombieSpawnerProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)ParachuteRainZombieSpawnerProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<BlackHoleWaveActionProps>
   CustomLevelCreator::AddAliasedObject<BlackHoleWaveActionProps>() */

void CustomLevelCreator::AddAliasedObject<BlackHoleWaveActionProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)BlackHoleWaveActionProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveManagerModuleProperties* CustomLevelCreator::AddModule<WaveManagerModuleProperties>() */

WaveManagerModuleProperties * __thiscall
CustomLevelCreator::AddModule<WaveManagerModuleProperties>(CustomLevelCreator *this)

{
  WaveManagerModuleProperties *extraout_x0;
  
  WaveManagerModuleProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<WaveManagerProperties>
   CustomLevelCreator::AddAliasedObject<WaveManagerProperties>() */

void CustomLevelCreator::AddAliasedObject<WaveManagerProperties>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)WaveManagerProperties::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<SpawnZombiesJitteredWaveActionProps>
   CustomLevelCreator::AddAliasedObject<SpawnZombiesJitteredWaveActionProps>() */

void CustomLevelCreator::AddAliasedObject<SpawnZombiesJitteredWaveActionProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)SpawnZombiesJitteredWaveActionProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedBankProperties* CustomLevelCreator::AddModule<SeedBankProperties>() */

SeedBankProperties * __thiscall
CustomLevelCreator::AddModule<SeedBankProperties>(CustomLevelCreator *this)

{
  SeedBankProperties *extraout_x0;
  
  SeedBankProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* PVZ1CopycatsModuleProperties* CustomLevelCreator::AddModule<PVZ1CopycatsModuleProperties>() */

PVZ1CopycatsModuleProperties * __thiscall
CustomLevelCreator::AddModule<PVZ1CopycatsModuleProperties>(CustomLevelCreator *this)

{
  PVZ1CopycatsModuleProperties *extraout_x0;
  
  PVZ1CopycatsModuleProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* ConveyorSeedBankProperties* CustomLevelCreator::AddModule<ConveyorSeedBankProperties>() */

ConveyorSeedBankProperties * __thiscall
CustomLevelCreator::AddModule<ConveyorSeedBankProperties>(CustomLevelCreator *this)

{
  ConveyorSeedBankProperties *extraout_x0;
  
  ConveyorSeedBankProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* StarChallengeModuleProperties* CustomLevelCreator::AddModule<StarChallengeModuleProperties>() */

StarChallengeModuleProperties * __thiscall
CustomLevelCreator::AddModule<StarChallengeModuleProperties>(CustomLevelCreator *this)

{
  StarChallengeModuleProperties *extraout_x0;
  
  StarChallengeModuleProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<StarChallengeBeatTheLevelProps>
   CustomLevelCreator::AddAliasedObject<StarChallengeBeatTheLevelProps>() */

void CustomLevelCreator::AddAliasedObject<StarChallengeBeatTheLevelProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)StarChallengeBeatTheLevelProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LastStandMinigameProperties* CustomLevelCreator::AddModule<LastStandMinigameProperties>() */

LastStandMinigameProperties * __thiscall
CustomLevelCreator::AddModule<LastStandMinigameProperties>(CustomLevelCreator *this)

{
  LastStandMinigameProperties *extraout_x0;
  
  LastStandMinigameProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* MoldColonyChallengeProps* CustomLevelCreator::AddModule<MoldColonyChallengeProps>() */

MoldColonyChallengeProps * __thiscall
CustomLevelCreator::AddModule<MoldColonyChallengeProps>(CustomLevelCreator *this)

{
  MoldColonyChallengeProps *extraout_x0;
  
  MoldColonyChallengeProps::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtWeakPtr<BoardGridMapProps> CustomLevelCreator::AddAliasedObject<BoardGridMapProps>() */

void CustomLevelCreator::AddAliasedObject<BoardGridMapProps>(void)

{
  CustomLevelCreator *in_x0;
  RtClass *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtClass *)BoardGridMapProps::StaticGetClass();
  AddAliasedObject(in_x0,pRVar1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StatueMazeModuleProperties* CustomLevelCreator::AddModule<StatueMazeModuleProperties>() */

StatueMazeModuleProperties * __thiscall
CustomLevelCreator::AddModule<StatueMazeModuleProperties>(CustomLevelCreator *this)

{
  StatueMazeModuleProperties *extraout_x0;
  
  StatueMazeModuleProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* EvilDaveProperties* CustomLevelCreator::AddModule<EvilDaveProperties>() */

EvilDaveProperties * __thiscall
CustomLevelCreator::AddModule<EvilDaveProperties>(CustomLevelCreator *this)

{
  EvilDaveProperties *extraout_x0;
  
  EvilDaveProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* InitialPlantEntryProperties* CustomLevelCreator::AddModule<InitialPlantEntryProperties>() */

InitialPlantEntryProperties * __thiscall
CustomLevelCreator::AddModule<InitialPlantEntryProperties>(CustomLevelCreator *this)

{
  InitialPlantEntryProperties *extraout_x0;
  
  InitialPlantEntryProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* TowerDefendProperties* CustomLevelCreator::AddModule<TowerDefendProperties>() */

TowerDefendProperties * __thiscall
CustomLevelCreator::AddModule<TowerDefendProperties>(CustomLevelCreator *this)

{
  TowerDefendProperties *extraout_x0;
  
  TowerDefendProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* WaveGeneratorProperties* CustomLevelCreator::AddModule<WaveGeneratorProperties>() */

WaveGeneratorProperties * __thiscall
CustomLevelCreator::AddModule<WaveGeneratorProperties>(CustomLevelCreator *this)

{
  WaveGeneratorProperties *extraout_x0;
  
  WaveGeneratorProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* SingleHandedProperties* CustomLevelCreator::AddModule<SingleHandedProperties>() */

SingleHandedProperties * __thiscall
CustomLevelCreator::AddModule<SingleHandedProperties>(CustomLevelCreator *this)

{
  SingleHandedProperties *extraout_x0;
  
  SingleHandedProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* RailcartProperties* CustomLevelCreator::AddModule<RailcartProperties>() */

RailcartProperties * __thiscall
CustomLevelCreator::AddModule<RailcartProperties>(CustomLevelCreator *this)

{
  RailcartProperties *extraout_x0;
  
  RailcartProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* VaseBreakerPresetProperties* CustomLevelCreator::AddModule<VaseBreakerPresetProperties>() */

VaseBreakerPresetProperties * __thiscall
CustomLevelCreator::AddModule<VaseBreakerPresetProperties>(CustomLevelCreator *this)

{
  VaseBreakerPresetProperties *extraout_x0;
  
  VaseBreakerPresetProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* InitialPlantProperties* CustomLevelCreator::AddModule<InitialPlantProperties>() */

InitialPlantProperties * __thiscall
CustomLevelCreator::AddModule<InitialPlantProperties>(CustomLevelCreator *this)

{
  InitialPlantProperties *extraout_x0;
  
  InitialPlantProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* InitialGridItemProperties* CustomLevelCreator::AddModule<InitialGridItemProperties>() */

InitialGridItemProperties * __thiscall
CustomLevelCreator::AddModule<InitialGridItemProperties>(CustomLevelCreator *this)

{
  InitialGridItemProperties *extraout_x0;
  
  InitialGridItemProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* InitialZombieProperties* CustomLevelCreator::AddModule<InitialZombieProperties>() */

InitialZombieProperties * __thiscall
CustomLevelCreator::AddModule<InitialZombieProperties>(CustomLevelCreator *this)

{
  InitialZombieProperties *extraout_x0;
  
  InitialZombieProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


/* PowerTileProperties* CustomLevelCreator::AddModule<PowerTileProperties>() */

PowerTileProperties * __thiscall
CustomLevelCreator::AddModule<PowerTileProperties>(CustomLevelCreator *this)

{
  PowerTileProperties *extraout_x0;
  
  PowerTileProperties::StaticGetClass();
  AddModule((RtClass *)this);
  nop();
  return extraout_x0;
}


// Class: ArtifactUtils


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::ReplaceParameterEx(std::string const&, std::string const&, int) */

void __thiscall
ArtifactUtils::ReplaceParameterEx(ArtifactUtils *this,string *param_1,string *param_2,int param_3)

{
  long lVar1;
  char *__s;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_14 = SUB84(param_2,0);
  local_8 = ___stack_chk_guard;
  FUN_05475d88();
  FUN_0547429c(param_1);
  lVar1 = FUN_05474374();
  if (lVar1 != -1) {
    __s = (char *)FUN_0547429c(param_1);
    strlen(__s);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_14);
    FUN_0547635c();
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* int ArtifactUtils::cal<int>(int, int, char) */

int ArtifactUtils::cal<int>(int param_1,int param_2,char param_3)

{
  int iVar1;
  int in_w4;
  
  switch(param_3) {
  case '*':
    return param_1 * param_2;
  case '+':
    return param_1 + param_2;
  case '-':
    in_w4 = param_1 - param_2;
    break;
  case '/':
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_1 / param_2;
    }
    return iVar1;
  }
  return in_w4;
}


/* float ArtifactUtils::cal<float>(float, float, char) */

float __thiscall
ArtifactUtils::cal<float>(ArtifactUtils *this,float param_1,float param_2,char param_3)

{
  float in_s2;
  
  switch((uint)this & 0xff) {
  case 0x2a:
    return param_1 * param_2;
  case 0x2b:
    return param_1 + param_2;
  case 0x2d:
    in_s2 = param_1 - param_2;
    break;
  case 0x2f:
    return param_1 / param_2;
  }
  return in_s2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::GetArtifactPropertyPtr(int) */

void ArtifactUtils::GetArtifactPropertyPtr(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *this;
  ArtifactProperties *pAVar5;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  string asStack_50 [8];
  RtId aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = ArtifactMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x86);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_0379ef58:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      std::string::~string(asStack_50);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_48);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
    if (bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      pAVar5 = Sexy::RtObject::Cast<ArtifactProperties>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtId::~RtId(aRStack_48);
      iVar3 = extraout_w1_00;
      if ((pAVar5 != (ArtifactProperties *)0x0) &&
         (cVar2 = std::operator==((string *)(pAVar5 + 0x10),asStack_50), iVar3 = extraout_w1_01,
         cVar2 != '\0')) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)aRStack_30);
        Sexy::RtId::~RtId((RtId *)aRStack_30);
        goto LAB_0379ef58;
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtId::~RtId(aRStack_48);
      iVar3 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::GetArtifactCultivationPropertyPtr(int) */

void __thiscall ArtifactUtils::GetArtifactCultivationPropertyPtr(ArtifactUtils *this,int param_1)

{
  bool bVar1;
  long lVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  GetArtifactPropertyPtr((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)(lVar2 + 0xe0));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::CanLevelUp(int, int, int) */

void ArtifactUtils::CanLevelUp(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  GetArtifactCultivationPropertyPtr((ArtifactUtils *)(ulong)(uint)param_1,param_2);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    while( true ) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar4 = FUN_0379c8a8(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
      if (uVar4 <= uVar5) break;
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      piVar2 = (int *)FUN_0379c8bc(*(undefined8 *)(lVar3 + 0x10),uVar5);
      if (*piVar2 == param_3) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        lVar3 = FUN_0379c8bc(*(undefined8 *)(lVar3 + 0x10),uVar5);
        bVar1 = *(int *)(lVar3 + 4) <= param_2;
        goto LAB_0379f0d4;
      }
      uVar5 = uVar5 + 1;
    }
  }
  bVar1 = false;
LAB_0379f0d4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::CanRankUp(int, int, int) */

void ArtifactUtils::CanRankUp(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  GetArtifactCultivationPropertyPtr((ArtifactUtils *)(ulong)(uint)param_1,(int)___stack_chk_guard);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    while( true ) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      uVar4 = FUN_0379c8c8(*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30));
      if (uVar4 <= uVar5) break;
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      piVar2 = (int *)FUN_0379c8dc(*(undefined8 *)(lVar3 + 0x28),uVar5);
      if (*piVar2 == param_2) {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        lVar3 = FUN_0379c8dc(*(undefined8 *)(lVar3 + 0x28),uVar5);
        bVar1 = *(int *)(lVar3 + 4) <= param_3;
        goto LAB_0379f1c8;
      }
      uVar5 = uVar5 + 1;
    }
  }
  bVar1 = false;
LAB_0379f1c8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* ArtifactUtils::IsMaxLevel(int, int, int) */

byte ArtifactUtils::IsMaxLevel(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = CanLevelUp(param_1,param_2,param_3);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = CanRankUp(param_1,param_2,param_3);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::GetArtifactDisplayActionsPropertyPtr(int) */

void __thiscall ArtifactUtils::GetArtifactDisplayActionsPropertyPtr(ArtifactUtils *this,int param_1)

{
  bool bVar1;
  long lVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  GetArtifactPropertyPtr((int)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)(lVar2 + 0xd8));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::CanLevelUp(int) */

void ArtifactUtils::CanLevelUp(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this;
  int local_48;
  int local_44;
  int local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::GetArtifactInfoByID(iVar1);
  uVar2 = CanLevelUp(local_48,local_44,local_40);
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::CanRankUp(int) */

void ArtifactUtils::CanRankUp(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this;
  int local_48;
  int local_44;
  int local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::GetArtifactInfoByID(iVar1);
  uVar2 = CanRankUp(local_48,local_44,local_40);
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ArtifactUtils::IsMaxLevel(int) */

byte ArtifactUtils::IsMaxLevel(int param_1)

{
  char cVar1;
  byte bVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = PlayerInfo::IsArtifactUnlocked(this_00,param_1);
  if ((cVar1 != '\0') && (cVar1 = CanLevelUp(param_1), cVar1 == '\0')) {
    bVar2 = CanRankUp(param_1);
    return bVar2 ^ 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::GetArtifactList(std::vector<Sexy::RtWeakPtr<ArtifactProperties>,
   std::allocator<Sexy::RtWeakPtr<ArtifactProperties> > >&) */

void ArtifactUtils::GetArtifactList(vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  NameMapperBase *this;
  long lVar5;
  int extraout_w1;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x86);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar6 = *(code **)(*plVar4 + 0x20);
      uVar3 = ArtifactProperties::StaticGetClass();
      cVar2 = (*pcVar6)(plVar4,uVar3);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        this = (NameMapperBase *)ArtifactMapper::GetInstance();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = NameMapperBase::ContainsName(this,(string *)(lVar5 + 0x10));
        if (cVar2 != '\0') {
          std::
          vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
          ::push_back((vector<Sexy::RtWeakPtr<ArtifactProperties>,std::allocator<Sexy::RtWeakPtr<ArtifactProperties>>>
                       *)param_1,(RtWeakPtr *)aRStack_30);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::TransferMidExToPreEx(std::string&) */

void __thiscall ArtifactUtils::TransferMidExToPreEx(ArtifactUtils *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  node anStack_478 [8];
  bool local_470;
  undefined1 local_46f;
  set<char,std::less<char>,std::allocator<char>> asStack_468 [48];
  map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>> amStack_438 [48];
  stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
  asStack_408 [80];
  stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
  asStack_3b8 [80];
  undefined8 local_368 [10];
  undefined8 local_318 [10];
  undefined1 auStack_2c8 [352];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::set<char,std::less<char>,std::allocator<char>>::set
            (asStack_468,&DAT_057519d0,4,
             (stack<char,std::deque<char,std::allocator<char>>> *)local_368,
             (deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>> *)local_318);
  nop();
  std::map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>::map
            (amStack_438,&DAT_057519e0,4,
             (stack<char,std::deque<char,std::allocator<char>>> *)local_368,
             (deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>> *)local_318);
  FUN_05462144(auStack_2c8,0x10);
  std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>::deque();
  std::
  stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>::
  stack(asStack_408,(deque *)local_318);
  std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>::~deque
            ((deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>> *)local_318);
  std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>::deque();
  std::
  stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>::
  stack(asStack_3b8,(deque *)local_318);
  std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>::~deque
            ((deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>> *)local_318);
  iVar3 = FUN_05474178(this);
  node::node(anStack_478);
  iVar3 = iVar3 + -1;
  if (iVar3 < 0) {
LAB_037a5c98:
    while (cVar1 = std::
                   stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                   ::empty(asStack_408), cVar1 == '\0') {
      std::
      stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
      ::top();
      std::
      stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
      ::push((node *)asStack_3b8);
      std::
      stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
      ::pop(asStack_408);
    }
    while (cVar1 = std::
                   stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                   ::empty(asStack_3b8), cVar1 == '\0') {
      lVar10 = std::
               stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
               ::top();
      if (*(char *)(lVar10 + 8) == '\0') {
        lVar10 = std::
                 stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                 ::top();
        uVar7 = FUN_05460370(auStack_2c8,*(undefined1 *)(lVar10 + 9));
        FUN_054603b8(uVar7,&DAT_055b4790);
      }
      else {
        uVar7 = std::
                stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                ::top();
        uVar7 = FUN_0545ec84(auStack_2c8,uVar7);
        FUN_054603b8(uVar7,&DAT_055b4790);
      }
      std::
      stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
      ::pop(asStack_3b8);
    }
    FUN_054622ac(auStack_2c8);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)anStack_478);
    std::
    stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>::
    ~stack(asStack_3b8);
    std::
    stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>::
    ~stack(asStack_408);
    FUN_054614ac(auStack_2c8);
    std::map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>::~map(amStack_438);
    std::set<char,std::less<char>,std::allocator<char>>::~set(asStack_468);
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar10 = (long)iVar3;
  pcVar4 = (char *)FUN_05474ee8(this,lVar10);
  if (*pcVar4 == ' ') goto LAB_037a5c74;
  do {
    pcVar4 = (char *)FUN_05474ee8(this,lVar10);
    if (*pcVar4 == '\t') goto LAB_037a5c74;
    pbVar5 = (byte *)FUN_05474ee8(this,lVar10);
    if (((*pbVar5 < 0x30) || (pbVar5 = (byte *)FUN_05474ee8(this,lVar10), 0x39 < *pbVar5)) &&
       (pcVar4 = (char *)FUN_05474ee8(this,lVar10), *pcVar4 != '.')) {
      pcVar4 = (char *)FUN_05474ee8(this,lVar10);
      local_368[0] = std::set<char,std::less<char>,std::allocator<char>>::find(asStack_468,pcVar4);
      local_318[0] = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)asStack_468);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_368,(rbtree_iterator *)local_318);
      if (bVar2) {
        cVar1 = std::
                stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                ::empty(asStack_408);
        if ((cVar1 == '\0') &&
           ((lVar8 = std::
                     stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                     ::top(), *(char *)(lVar8 + 8) != '\0' ||
            (lVar8 = std::
                     stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                     ::top(), *(char *)(lVar8 + 9) != ')')))) {
          pcVar4 = (char *)FUN_05474ee8(this,lVar10);
          piVar9 = (int *)std::
                          map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>::
                          operator[](amStack_438,pcVar4);
          iVar11 = *piVar9;
          lVar8 = std::
                  stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                  ::top();
          piVar9 = (int *)std::
                          map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>::
                          operator[](amStack_438,(char *)(lVar8 + 9));
          if (iVar11 < *piVar9) {
            pcVar4 = (char *)FUN_05474ee8(this,lVar10);
            piVar9 = (int *)std::
                            map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>
                            ::operator[](amStack_438,pcVar4);
            iVar11 = *piVar9;
            lVar8 = std::
                    stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                    ::top();
            piVar9 = (int *)std::
                            map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>
                            ::operator[](amStack_438,(char *)(lVar8 + 9));
            if (*piVar9 <= iVar11) {
              iVar3 = iVar3 + -1;
              goto LAB_037a5c50;
            }
            while ((cVar1 = std::
                            stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                            ::empty(asStack_408), cVar1 == '\0' &&
                   (lVar8 = std::
                            stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                            ::top(), *(char *)(lVar8 + 9) != ')'))) {
              pcVar4 = (char *)FUN_05474ee8(this,lVar10);
              piVar9 = (int *)std::
                              map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>
                              ::operator[](amStack_438,pcVar4);
              iVar11 = *piVar9;
              lVar8 = std::
                      stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                      ::top();
              piVar9 = (int *)std::
                              map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>
                              ::operator[](amStack_438,(char *)(lVar8 + 9));
              if (*piVar9 <= iVar11) break;
              std::
              stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
              ::top();
              std::
              stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
              ::push((node *)asStack_3b8);
              std::
              stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
              ::pop(asStack_408);
            }
          }
        }
        local_470 = false;
        bVar2 = local_470;
      }
      else {
        pcVar4 = (char *)FUN_05474ee8(this,lVar10);
        if (*pcVar4 != ')') {
          pcVar4 = (char *)FUN_05474ee8(this,lVar10);
          if (*pcVar4 == '(') {
            while (lVar10 = std::
                            stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
                            ::top(), *(char *)(lVar10 + 9) != ')') {
              std::
              stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
              ::top();
              std::
              stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
              ::push((node *)asStack_3b8);
              std::
              stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
              ::pop(asStack_408);
            }
            iVar3 = iVar3 + -1;
            std::
            stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
            ::pop(asStack_408);
            goto LAB_037a5c50;
          }
          goto LAB_037a5c98;
        }
      }
      local_470 = bVar2;
      puVar6 = (undefined1 *)FUN_05474ee8(this,lVar10);
      local_46f = *puVar6;
      iVar3 = iVar3 + -1;
      std::
      stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
      ::push((node *)asStack_408);
    }
    else {
      FUN_05462144(auStack_168,0x10);
      std::deque<char,std::allocator<char>>::deque();
      std::stack<char,std::deque<char,std::allocator<char>>>::stack
                ((stack<char,std::deque<char,std::allocator<char>>> *)local_368,(deque *)local_318);
      std::deque<char,std::allocator<char>>::~deque((deque<char,std::allocator<char>> *)local_318);
      pcVar4 = (char *)FUN_05474ee8(this,lVar10);
      if (*pcVar4 != '.') {
        FUN_05474ee8(this,lVar10);
        std::stack<char,std::deque<char,std::allocator<char>>>::push((char *)local_368);
      }
      iVar11 = iVar3 + -1;
      bVar2 = iVar3 != 0;
      iVar3 = iVar11;
      if (bVar2) {
        lVar10 = (long)iVar11;
        do {
          pbVar5 = (byte *)FUN_05474ee8(this,lVar10);
          if (((*pbVar5 < 0x30) || (pbVar5 = (byte *)FUN_05474ee8(this,lVar10), 0x39 < *pbVar5)) &&
             (pcVar4 = (char *)FUN_05474ee8(this,lVar10), *pcVar4 != '.')) {
            pcVar4 = (char *)FUN_05474ee8(this,lVar10);
            if ((*pcVar4 != ' ') &&
               (pcVar4 = (char *)FUN_05474ee8(this,lVar10), iVar3 = iVar11, *pcVar4 != '\t')) break;
          }
          else {
            FUN_05474ee8(this,lVar10);
            std::stack<char,std::deque<char,std::allocator<char>>>::push((char *)local_368);
          }
          lVar10 = lVar10 + -1;
          iVar3 = iVar11 + -1;
          bVar2 = iVar11 != 0;
          iVar11 = iVar3;
        } while (bVar2);
      }
      while (cVar1 = std::stack<char,std::deque<char,std::allocator<char>>>::empty
                               ((stack<char,std::deque<char,std::allocator<char>>> *)local_368),
            cVar1 == '\0') {
        puVar6 = (undefined1 *)std::stack<char,std::deque<char,std::allocator<char>>>::top();
        FUN_05460370(auStack_168,*puVar6);
        std::stack<char,std::deque<char,std::allocator<char>>>::pop
                  ((stack<char,std::deque<char,std::allocator<char>>> *)local_368);
      }
      FUN_054622ac((deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>> *)local_318,
                   auStack_168);
      FUN_05474278(anStack_478,
                   (deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>> *)local_318);
      std::string::~string((string *)local_318);
      local_470 = true;
      std::
      stack<ArtifactUtils::node,std::deque<ArtifactUtils::node,std::allocator<ArtifactUtils::node>>>
      ::push((node *)asStack_3b8);
      std::stack<char,std::deque<char,std::allocator<char>>>::~stack
                ((stack<char,std::deque<char,std::allocator<char>>> *)local_368);
      FUN_054614ac(auStack_168);
    }
LAB_037a5c50:
    while( true ) {
      if (iVar3 == -1) goto LAB_037a5c98;
      lVar10 = (long)iVar3;
      pcVar4 = (char *)FUN_05474ee8(this,lVar10);
      if (*pcVar4 != ' ') break;
LAB_037a5c74:
      iVar3 = iVar3 + -1;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::GetExpressionResult(std::string&) */

void ArtifactUtils::GetExpressionResult(string *param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  char *pcVar9;
  float *pfVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int *piVar13;
  char extraout_w1;
  uint uVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_2ec [4];
  set<char,std::less<char>,std::allocator<char>> asStack_2e8 [48];
  queue<int,std::deque<int,std::allocator<int>>> aqStack_2b8 [80];
  stack<float,std::deque<float,std::allocator<float>>> asStack_268 [80];
  stack<char,std::deque<char,std::allocator<char>>> asStack_218 [80];
  float local_1c8 [20];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  TransferMidExToPreEx((ArtifactUtils *)param_1,___stack_chk_guard);
  FUN_05474278(param_1,(string *)local_1c8);
  std::string::~string((string *)local_1c8);
  iVar6 = FUN_05474178(param_1);
  std::set<char,std::less<char>,std::allocator<char>>::set
            (asStack_2e8,&DAT_05751a00,4,asStack_218,(string *)local_1c8);
  nop();
  lVar8 = FUN_054743b0(param_1,0x2e,0);
  bVar4 = lVar8 == -1;
  std::deque<int,std::allocator<int>>::deque();
  std::queue<int,std::deque<int,std::allocator<int>>>::queue(aqStack_2b8,(deque *)local_1c8);
  std::deque<int,std::allocator<int>>::~deque((deque<int,std::allocator<int>> *)local_1c8);
  std::deque<float,std::allocator<float>>::deque();
  std::stack<float,std::deque<float,std::allocator<float>>>::stack(asStack_268,(deque *)local_1c8);
  std::deque<float,std::allocator<float>>::~deque((deque<float,std::allocator<float>> *)local_1c8);
  uVar14 = iVar6 - 1;
  if (-1 < (int)uVar14) {
    do {
      while( true ) {
        lVar8 = (long)(int)uVar14;
        pcVar9 = (char *)FUN_05474ee8(param_1,lVar8);
        if (*pcVar9 != ' ') break;
joined_r0x037a6668:
        uVar14 = uVar14 - 1;
        if ((int)uVar14 < 0) goto LAB_037a657c;
      }
      pbVar11 = (byte *)FUN_05474ee8(param_1,lVar8);
      if ((*pbVar11 < 0x30) || (pbVar11 = (byte *)FUN_05474ee8(param_1,lVar8), 0x39 < *pbVar11)) {
        if (bVar4) {
          piVar13 = (int *)std::stack<int,std::deque<int,std::allocator<int>>>::top();
          iVar6 = *piVar13;
          std::stack<int,std::deque<int,std::allocator<int>>>::pop
                    ((stack<int,std::deque<int,std::allocator<int>>> *)aqStack_2b8);
          piVar13 = (int *)std::stack<int,std::deque<int,std::allocator<int>>>::top();
          iVar3 = *piVar13;
          std::stack<int,std::deque<int,std::allocator<int>>>::pop
                    ((stack<int,std::deque<int,std::allocator<int>>> *)aqStack_2b8);
          pcVar9 = (char *)FUN_05474ee8(param_1,lVar8);
          local_1c8[0] = (float)cal<int>(iVar6,iVar3,*pcVar9);
          std::queue<int,std::deque<int,std::allocator<int>>>::push((int *)aqStack_2b8);
        }
        else {
          pfVar10 = (float *)std::stack<float,std::deque<float,std::allocator<float>>>::top();
          fVar17 = *pfVar10;
          std::stack<float,std::deque<float,std::allocator<float>>>::pop(asStack_268);
          pfVar10 = (float *)std::stack<float,std::deque<float,std::allocator<float>>>::top();
          fVar18 = *pfVar10;
          std::stack<float,std::deque<float,std::allocator<float>>>::pop(asStack_268);
          pbVar11 = (byte *)FUN_05474ee8(param_1,lVar8);
          local_1c8[0] = cal<float>((ArtifactUtils *)(ulong)*pbVar11,fVar17,fVar18,extraout_w1);
          std::stack<float,std::deque<float,std::allocator<float>>>::push((float *)asStack_268);
        }
        goto joined_r0x037a6668;
      }
      uVar16 = uVar14 - 1;
      uVar7 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar7);
      std::deque<char,std::allocator<char>>::deque();
      std::stack<char,std::deque<char,std::allocator<char>>>::stack(asStack_218,(deque *)local_1c8);
      std::deque<char,std::allocator<char>>::~deque((deque<char,std::allocator<char>> *)local_1c8);
      FUN_05474ee8(param_1,lVar8);
      std::stack<char,std::deque<char,std::allocator<char>>>::push((char *)asStack_218);
      bVar2 = uVar14 != 0;
      uVar14 = uVar16;
      if (bVar2) {
        lVar8 = (long)(int)uVar16;
        lVar15 = lVar8 + -1;
        uVar1 = (ulong)uVar16;
        do {
          pbVar11 = (byte *)FUN_05474ee8(param_1,lVar8);
          if (((*pbVar11 < 0x30) || (pbVar11 = (byte *)FUN_05474ee8(param_1,lVar8), 0x39 < *pbVar11)
              ) && (pcVar9 = (char *)FUN_05474ee8(param_1,lVar8), *pcVar9 != '.')) {
            pcVar9 = (char *)FUN_05474ee8(param_1,lVar8);
            uVar14 = uVar16;
            if (*pcVar9 == ' ') break;
          }
          else {
            uVar16 = uVar16 - 1;
            FUN_05474ee8(param_1,lVar8);
            std::stack<char,std::deque<char,std::allocator<char>>>::push((char *)asStack_218);
          }
          lVar8 = lVar8 + -1;
          uVar14 = uVar16;
        } while (lVar8 != lVar15 - uVar1);
      }
      while (cVar5 = std::stack<char,std::deque<char,std::allocator<char>>>::empty(asStack_218),
            cVar5 == '\0') {
        puVar12 = (undefined1 *)std::stack<char,std::deque<char,std::allocator<char>>>::top();
        FUN_05460370(auStack_168,*puVar12);
        std::stack<char,std::deque<char,std::allocator<char>>>::pop(asStack_218);
      }
      FUN_05462824((string *)local_1c8,auStack_178);
      if (bVar4) {
        FUN_0544af48();
        std::queue<int,std::deque<int,std::allocator<int>>>::push((int *)aqStack_2b8);
      }
      else {
        thunk_FUN_0544b59c(auStack_178,auStack_2ec);
        std::stack<float,std::deque<float,std::allocator<float>>>::push((float *)asStack_268);
      }
      std::string::~string((string *)local_1c8);
      std::stack<char,std::deque<char,std::allocator<char>>>::~stack(asStack_218);
      FUN_054617bc(auStack_178);
    } while (-1 < (int)uVar14);
  }
LAB_037a657c:
  if (bVar4) {
    piVar13 = (int *)std::stack<int,std::deque<int,std::allocator<int>>>::top();
    fVar17 = (float)*piVar13;
  }
  else {
    pfVar10 = (float *)std::stack<float,std::deque<float,std::allocator<float>>>::top();
    fVar17 = *pfVar10;
  }
  std::stack<float,std::deque<float,std::allocator<float>>>::~stack(asStack_268);
  std::queue<int,std::deque<int,std::allocator<int>>>::~queue(aqStack_2b8);
  std::set<char,std::less<char>,std::allocator<char>>::~set(asStack_2e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar17);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::GetArtifactSkillValue(int, int, int, FieldType, int) */

void ArtifactUtils::GetArtifactSkillValue
               (int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  fVar7 = 0.0;
  local_8 = ___stack_chk_guard;
  iVar6 = param_4;
  GetArtifactPropertyPtr(param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if (!bVar1) goto LAB_037a68e4;
  std::string::string(asStack_20,"");
  nop();
  switch(param_4) {
  case 0:
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar3 = FUN_0379c8e8(*(undefined8 *)(lVar5 + 0x48),*(undefined8 *)(lVar5 + 0x50));
    if ((ulong)(long)param_5 < uVar3) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar4 = *(undefined8 *)(lVar5 + 0x48);
LAB_037a6b10:
      uVar4 = FUN_0379c8f4(uVar4,(long)param_5);
      thunk_FUN_05475e00(asStack_20,uVar4);
    }
    break;
  case 1:
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar3 = FUN_0379c8e8(*(undefined8 *)(lVar5 + 0x60),*(undefined8 *)(lVar5 + 0x68));
    if ((ulong)(long)param_5 < uVar3) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar4 = *(undefined8 *)(lVar5 + 0x60);
      goto LAB_037a6b10;
    }
    break;
  case 2:
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar3 = FUN_0379c8e8(*(undefined8 *)(lVar5 + 0x78),*(undefined8 *)(lVar5 + 0x80));
    if ((ulong)(long)param_5 < uVar3) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar4 = *(undefined8 *)(lVar5 + 0x78);
      goto LAB_037a6b10;
    }
    break;
  case 3:
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    uVar3 = FUN_0379c8e8(*(undefined8 *)(lVar5 + 0x90),*(undefined8 *)(lVar5 + 0x98));
    if ((ulong)(long)param_5 < uVar3) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      uVar4 = *(undefined8 *)(lVar5 + 0x90);
      goto LAB_037a6b10;
    }
  }
  cVar2 = FUN_0547419c(asStack_20);
  if (cVar2 == '\0') {
    std::string::string(asStack_18,"level");
    ReplaceParameterEx((ArtifactUtils *)asStack_20,asStack_18,(string *)(ulong)param_3,iVar6);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_18,"stage");
    ReplaceParameterEx((ArtifactUtils *)asStack_20,asStack_18,(string *)(ulong)param_2,iVar6);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    nop();
    fVar7 = (float)GetExpressionResult(asStack_20);
    if (param_4 == 0) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      lVar5 = FUN_0379c8e8(*(undefined8 *)(lVar5 + 0x48),*(undefined8 *)(lVar5 + 0x50));
      if (((lVar5 + -1 == (long)param_5) && (-1e-05 < fVar7)) && (fVar7 < 1e-05)) {
        fVar7 = 1.0;
      }
    }
    std::string::~string(asStack_20);
  }
  else {
    fVar7 = 0.0;
    std::string::~string(asStack_20);
  }
LAB_037a68e4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::GetArtifactSkillValues(int, int, int, FieldType) */

void __thiscall
ArtifactUtils::GetArtifactSkillValues
          (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1_00,int param_2_00,
          undefined4 param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  float local_14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetArtifactPropertyPtr(param_2_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1_00);
  if (param_3 < 4) {
    uVar3 = 0;
    switch(param_3) {
    case 0:
      while( true ) {
        lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        uVar2 = FUN_0379c8e8(*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
        if (uVar2 <= uVar3) break;
        uVar2 = uVar3 & 0xffffffff;
        uVar3 = uVar3 + 1;
        local_14 = (float)GetArtifactSkillValue(param_2_00,param_1,param_2,0,uVar2);
        std::vector<float,std::allocator<float>>::push_back
                  ((vector<float,std::allocator<float>> *)param_1_00,&local_14);
      }
      break;
    case 1:
      while( true ) {
        lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        uVar2 = FUN_0379c8e8(*(undefined8 *)(lVar1 + 0x60),*(undefined8 *)(lVar1 + 0x68));
        if (uVar2 <= uVar3) break;
        uVar2 = uVar3 & 0xffffffff;
        uVar3 = uVar3 + 1;
        local_14 = (float)GetArtifactSkillValue(param_2_00,param_1,param_2,1,uVar2);
        std::vector<float,std::allocator<float>>::push_back
                  ((vector<float,std::allocator<float>> *)param_1_00,&local_14);
      }
      break;
    case 2:
      while( true ) {
        lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        uVar2 = FUN_0379c8e8(*(undefined8 *)(lVar1 + 0x78),*(undefined8 *)(lVar1 + 0x80));
        if (uVar2 <= uVar3) break;
        uVar2 = uVar3 & 0xffffffff;
        uVar3 = uVar3 + 1;
        local_14 = (float)GetArtifactSkillValue(param_2_00,param_1,param_2,2,uVar2);
        std::vector<float,std::allocator<float>>::push_back
                  ((vector<float,std::allocator<float>> *)param_1_00,&local_14);
      }
      break;
    case 3:
      while( true ) {
        lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        uVar2 = FUN_0379c8e8(*(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
        if (uVar2 <= uVar3) break;
        uVar2 = uVar3 & 0xffffffff;
        uVar3 = uVar3 + 1;
        local_14 = (float)GetArtifactSkillValue(param_2_00,param_1,param_2,3,uVar2);
        std::vector<float,std::allocator<float>>::push_back
                  ((vector<float,std::allocator<float>> *)param_1_00,&local_14);
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::GetArtifactSkillDescription(int, int, int, FieldType) */

void __thiscall
ArtifactUtils::GetArtifactSkillDescription
          (wstring *param_1,uint param_2,undefined8 param_3_00,undefined8 param_4,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int extraout_w1;
  ulong uVar8;
  RtWeakPtr aRStack_1c8 [8];
  string asStack_1c0 [8];
  wstring awStack_1b8 [8];
  ulong local_1b0;
  string asStack_1a8 [8];
  wstring awStack_1a0 [8];
  string asStack_198 [8];
  undefined8 local_190;
  undefined8 local_188;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(param_1);
  GetArtifactDisplayActionsPropertyPtr((ArtifactUtils *)(ulong)param_2,extraout_w1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_1c8);
  if (bVar1) {
    GetArtifactSkillValues((ArtifactUtils *)&local_190,param_2,param_3_00,param_4,param_3);
    uVar8 = 1;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_1c8);
    lVar3 = FUN_0379c8fc(*(undefined8 *)(lVar3 + 0x10),(long)param_3);
    Sexy::ToWString((string *)(lVar3 + 0x58));
    TodStringTranslate(awStack_1a0);
    FUN_054766c8(param_1,asStack_198);
    FUN_05476c50(asStack_198);
    FUN_05476c50(awStack_1a0);
    while( true ) {
      uVar5 = FUN_0379c888(local_190,local_188);
      if (uVar5 <= uVar8 - 1) break;
      Set8BytesTo0(asStack_1c0);
      uVar2 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar2);
      FUN_0379cf6c(auStack_108);
      std::ios_base::setf(auStack_110,4);
      puVar6 = (undefined4 *)FUN_0379c90c(local_190,uVar8 - 1);
      FUN_05460f98(*puVar6,auStack_168);
      FUN_05462824(asStack_198,auStack_178);
      FUN_05474278(asStack_1c0,asStack_198);
      std::string::~string(asStack_198);
      Sexy::ToWString(asStack_1c0);
      if (param_3 == 0) {
        local_1b0 = uVar8;
        std::to_string<unsigned_long>(&local_1b0);
        pcVar7 = "{MainField_";
LAB_037a75dc:
        std::operator+(pcVar7,asStack_1a8);
        std::operator+((string *)awStack_1a0,"}");
        FUN_05474278(asStack_1c0,asStack_198);
        std::string::~string(asStack_198);
        std::string::~string((string *)awStack_1a0);
        std::string::~string(asStack_1a8);
      }
      else {
        if (param_3 == 1) {
          local_1b0 = uVar8;
          std::to_string<unsigned_long>(&local_1b0);
          pcVar7 = "{PassiveField1_";
          goto LAB_037a75dc;
        }
        if (param_3 == 2) {
          local_1b0 = uVar8;
          std::to_string<unsigned_long>(&local_1b0);
          pcVar7 = "{PassiveField2_";
          goto LAB_037a75dc;
        }
        if (param_3 == 3) {
          local_1b0 = uVar8;
          std::to_string<unsigned_long>(&local_1b0);
          pcVar7 = "{PassiveField3_";
          goto LAB_037a75dc;
        }
      }
      uVar8 = uVar8 + 1;
      Sexy::ToWString(asStack_1c0);
      pwVar4 = (wchar_t *)FUN_054766ec(awStack_1a0);
      TodReplaceString(param_1,pwVar4,awStack_1b8);
      FUN_054766c8(param_1,asStack_198);
      FUN_05476c50(asStack_198);
      FUN_05476c50(awStack_1a0);
      FUN_05476c50(awStack_1b8);
      FUN_054617bc(auStack_178);
      std::string::~string(asStack_1c0);
    }
    std::vector<float,std::allocator<float>>::~vector
              ((vector<float,std::allocator<float>> *)&local_190);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_1c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactUtils::GetArtifactSkillDescriptionForLevelUp(int, int, int, FieldType) */

void __thiscall
ArtifactUtils::GetArtifactSkillDescriptionForLevelUp
          (wstring *param_1_00,uint param_2_00,int param_1,int param_2,int param_3)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  ulong uVar8;
  char *pcVar9;
  int extraout_w1;
  ulong uVar10;
  ulong uVar11;
  RtWeakPtr aRStack_1f0 [8];
  string asStack_1e8 [8];
  wstring awStack_1e0 [8];
  ulong local_1d8;
  wstring awStack_1d0 [8];
  wstring awStack_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8 [3];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(param_1_00);
  GetArtifactDisplayActionsPropertyPtr((ArtifactUtils *)(ulong)param_2_00,extraout_w1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_1f0);
  if (bVar2) {
    cVar3 = IsMaxLevel(param_2_00,param_1,param_2);
    GetArtifactSkillValues((ArtifactUtils *)&local_1c0,param_2_00,param_1,param_2,param_3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_1a8);
    if (cVar3 == '\0') {
      GetArtifactSkillValues((ArtifactUtils *)asStack_190,param_2_00,param_1,param_2 + 1,param_3);
      std::vector<float,std::allocator<float>>::operator=
                ((vector<float,std::allocator<float>> *)local_1a8,(vector *)asStack_190);
      std::vector<float,std::allocator<float>>::~vector
                ((vector<float,std::allocator<float>> *)asStack_190);
    }
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_1f0);
    lVar5 = FUN_0379c8fc(*(undefined8 *)(lVar5 + 0x10),(long)param_3);
    Sexy::ToWString((string *)(lVar5 + 0x58));
    TodStringTranslate(awStack_1c8);
    FUN_054766c8(param_1_00,asStack_190);
    FUN_05476c50(asStack_190);
    FUN_05476c50(awStack_1c8);
    lVar5 = FUN_0379c888(local_1c0,local_1b8);
    uVar1 = 1;
    uVar11 = 0;
    if (lVar5 != 0) {
      do {
        uVar10 = uVar1;
        Set8BytesTo0(asStack_1e8);
        uVar4 = operator|(0x10,8);
        FUN_05462470(auStack_178,uVar4);
        FUN_0379cf6c(auStack_108);
        std::ios_base::setf(auStack_110,4);
        puVar6 = (undefined4 *)FUN_0379c90c(local_1c0,uVar11);
        FUN_05460f98(*puVar6,auStack_168);
        FUN_05462824(asStack_190,auStack_178);
        FUN_05474278(asStack_1e8,asStack_190);
        std::string::~string(asStack_190);
        Sexy::ToWString(asStack_1e8);
        if (cVar3 == '\0') {
          FUN_05478178(awStack_1c8,L"[ARROW_TO]",&local_1d8);
          Sexy::ToWString(asStack_1e8);
          TodReplaceString(awStack_1c8,L"{NUM1}",awStack_1d0);
          FUN_054766c8(awStack_1e0,asStack_190);
          FUN_05476c50(asStack_190);
          FUN_05476c50(awStack_1d0);
          FUN_05476c50(awStack_1c8);
          nop();
          std::string::string(asStack_190,"");
          FUN_05462980(auStack_178,asStack_190);
          std::string::~string(asStack_190);
          nop();
          puVar6 = (undefined4 *)FUN_0379c90c(local_1a8[0],uVar11);
          FUN_05460f98(*puVar6,auStack_168);
          FUN_05462824(asStack_190,auStack_178);
          FUN_05474278(asStack_1e8,asStack_190);
          std::string::~string(asStack_190);
          Sexy::ToWString(asStack_1e8);
          TodReplaceString(awStack_1e0,L"{NUM2}",awStack_1c8);
          FUN_054766c8(awStack_1e0,asStack_190);
          FUN_05476c50(asStack_190);
          FUN_05476c50(awStack_1c8);
          if (param_3 == 0) goto LAB_037a7ab4;
LAB_037a78e4:
          if (param_3 == 1) {
            local_1d8 = uVar10;
            std::to_string<unsigned_long>(&local_1d8);
            pcVar9 = "{PassiveField1_";
            goto LAB_037a7ad8;
          }
          if (param_3 == 2) {
            local_1d8 = uVar10;
            std::to_string<unsigned_long>(&local_1d8);
            pcVar9 = "{PassiveField2_";
            goto LAB_037a7ad8;
          }
          if (param_3 == 3) {
            local_1d8 = uVar10;
            std::to_string<unsigned_long>(&local_1d8);
            pcVar9 = "{PassiveField3_";
            goto LAB_037a7ad8;
          }
        }
        else {
          if (param_3 != 0) goto LAB_037a78e4;
LAB_037a7ab4:
          local_1d8 = uVar10;
          std::to_string<unsigned_long>(&local_1d8);
          pcVar9 = "{MainField_";
LAB_037a7ad8:
          std::operator+(pcVar9,(string *)awStack_1d0);
          std::operator+((string *)awStack_1c8,"}");
          FUN_05474278(asStack_1e8,asStack_190);
          std::string::~string(asStack_190);
          std::string::~string((string *)awStack_1c8);
          std::string::~string((string *)awStack_1d0);
        }
        Sexy::ToWString(asStack_1e8);
        pwVar7 = (wchar_t *)FUN_054766ec(awStack_1c8);
        TodReplaceString(param_1_00,pwVar7,awStack_1e0);
        FUN_054766c8(param_1_00,asStack_190);
        FUN_05476c50(asStack_190);
        FUN_05476c50(awStack_1c8);
        FUN_05476c50(awStack_1e0);
        FUN_054617bc(auStack_178);
        std::string::~string(asStack_1e8);
        uVar8 = FUN_0379c888(local_1c0,local_1b8);
        uVar1 = uVar10 + 1;
        uVar11 = uVar10;
      } while (uVar10 < uVar8);
    }
    std::vector<float,std::allocator<float>>::~vector
              ((vector<float,std::allocator<float>> *)local_1a8);
    std::vector<float,std::allocator<float>>::~vector
              ((vector<float,std::allocator<float>> *)&local_1c0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_1f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


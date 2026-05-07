// Class: Sexy::Leaderboard


/* Sexy::Leaderboard::GetId() */

undefined8 Sexy::Leaderboard::GetId(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* Sexy::Leaderboard::~Leaderboard() */

void __thiscall Sexy::Leaderboard::~Leaderboard(Leaderboard *this)

{
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 0x20))();
    *(undefined8 *)(this + 0x30) = 0;
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 0x20))();
    *(undefined8 *)(this + 0x38) = 0;
  }
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* Sexy::Leaderboard::IsLoading() */

bool __thiscall Sexy::Leaderboard::IsLoading(Leaderboard *this)

{
  return *(int *)(this + 0x14) == 1;
}


/* Sexy::Leaderboard::GetUserRow() */

int __thiscall Sexy::Leaderboard::GetUserRow(Leaderboard *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  iVar2 = -1;
  plVar3 = *(long **)(this + 0x38);
  if (plVar3 != (long *)0x0) {
    if (*(code **)(*plVar3 + 0x28) == LeaderboardReadContext::GetUserRow) {
      iVar1 = LeaderboardReadContext::GetUserRow();
    }
    else {
      iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
      plVar3 = *(long **)(this + 0x38);
    }
    iVar2 = FUN_053b62d8((int)plVar3[1]);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Leaderboard::FetchMoreData(unsigned int) */

void __thiscall Sexy::Leaderboard::FetchMoreData(Leaderboard *this,uint param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x14) == 3) && (*(long *)(this + 0x30) == 0)) {
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 == 2) {
      iVar1 = 0;
    }
    uVar6 = *(undefined8 *)(this + 0x18);
    plVar4 = *(long **)(gSexyAppBase + 0x50);
    pcVar5 = *(code **)(*plVar4 + 0x40);
    FUN_05475d88(asStack_10,this);
    uVar6 = (*pcVar5)(plVar4,uVar6,asStack_10,this + 8,iVar1,param_1,*(undefined4 *)(this + 0x24));
    *(undefined8 *)(this + 0x30) = uVar6;
    std::string::~string(asStack_10);
    if ((*(long **)(this + 0x30) == (long *)0x0) ||
       (cVar2 = (**(code **)(**(long **)(this + 0x30) + 0x18))(), cVar2 != '\0')) {
      *(undefined4 *)(this + 0x14) = 0xffffffff;
    }
    else {
      uVar3 = 2;
      if (*(int *)(this + 0x14) == 0) {
        uVar3 = 1;
      }
      *(undefined4 *)(this + 0x14) = uVar3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Leaderboard::TotalNumRows() */

undefined8 __thiscall Sexy::Leaderboard::TotalNumRows(Leaderboard *this)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x38);
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x10) != 1) {
    uVar1 = FUN_053b62e0(*(undefined4 *)(lVar2 + 0x10));
    return uVar1;
  }
  uVar1 = FUN_053b62dc(*(undefined4 *)(lVar2 + 0xc));
  return uVar1;
}


/* Sexy::Leaderboard::HasError() */

bool __thiscall Sexy::Leaderboard::HasError(Leaderboard *this)

{
  return *(int *)(this + 0x14) == -1;
}


/* Sexy::Leaderboard::GetWindowSize() */

void __thiscall Sexy::Leaderboard::GetWindowSize(Leaderboard *this)

{
  if (*(long *)(this + 0x38) != 0) {
    FUN_053b62dc(*(undefined4 *)(*(long *)(this + 0x38) + 0xc));
    return;
  }
  return;
}


/* Sexy::Leaderboard::GetRow(unsigned int) */

undefined8 __thiscall Sexy::Leaderboard::GetRow(Leaderboard *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  LeaderboardReadContext *this_00;
  
  this_00 = *(LeaderboardReadContext **)(this + 0x38);
  if (this_00 != (LeaderboardReadContext *)0x0) {
    iVar1 = *(int *)(this + 0x20);
    uVar2 = FUN_053b62dc(*(undefined4 *)(this_00 + 0xc));
    if (param_1 - iVar1 < uVar2) {
      uVar3 = LeaderboardReadContext::GetRow(this_00,param_1 - iVar1);
      return uVar3;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Leaderboard::Init() */

void __thiscall Sexy::Leaderboard::Init(Leaderboard *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  long *plVar6;
  int iVar7;
  code *pcVar8;
  LeaderboardEntry *this_00;
  undefined8 uVar9;
  int local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar6 = *(long **)(gSexyAppBase + 0x50);
  iVar2 = FUN_053b62d4(**(undefined4 **)(gSexyAppBase + 0x920));
  iVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
  iVar7 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0x20) = 0;
  if (iVar2 == -1) {
    iVar2 = iVar3;
  }
  *(int *)(this + 0x24) = iVar2;
  if (iVar7 == 4) {
    this_00 = *(LeaderboardEntry **)(this + 0x40);
    if (this_00 != (LeaderboardEntry *)0x0) {
      std::string::string((string *)local_10,"rank");
      iVar2 = LeaderboardEntry::GetInt64Value(this_00,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      if (iVar2 < 1) {
        iVar7 = 2;
        *(undefined4 *)(this + 0x10) = 2;
      }
      else {
        local_10[0] = 0;
        iVar7 = 0;
        local_18[0] = iVar2 - (*(uint *)(this + 0x24) >> 1);
        piVar5 = eastl::max_alt<int>((int *)local_10,local_18);
        *(int *)(this + 0x20) = *piVar5;
      }
    }
  }
  uVar9 = *(undefined8 *)(this + 0x18);
  pcVar8 = *(code **)(*plVar6 + 0x40);
  FUN_05475d88((string *)local_10,this);
  uVar9 = (*pcVar8)(plVar6,uVar9,(string *)local_10,this + 8,iVar7,*(undefined4 *)(this + 0x20),
                    *(undefined4 *)(this + 0x24));
  *(undefined8 *)(this + 0x30) = uVar9;
  std::string::~string((string *)local_10);
  if ((*(long **)(this + 0x30) == (long *)0x0) ||
     (cVar1 = (**(code **)(**(long **)(this + 0x30) + 0x18))(), cVar1 != '\0')) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(this + 0x14) = uVar4;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::Leaderboard::Leaderboard(Sexy::UserProfile*, std::string, std::string const&,
   Sexy::Leaderboard::Type, Sexy::LeaderboardEntry*) */

void __thiscall
Sexy::Leaderboard::Leaderboard
          (Leaderboard *this,undefined8 param_1,undefined8 param_3,undefined8 param_4,
          undefined4 param_5,undefined8 param_6)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  thunk_FUN_05475e00(this,param_3);
  thunk_FUN_05475e00(this + 8,param_4);
  *(undefined8 *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 0x10) = param_5;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x28] = (Leaderboard)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined8 *)(this + 0x40) = param_6;
  Init(this);
  return;
}


/* Sexy::Leaderboard::Destroy() */

void __thiscall Sexy::Leaderboard::Destroy(Leaderboard *this)

{
  LeaderboardManager::RemoveLeaderboard(*(LeaderboardManager **)(gSexyAppBase + 0x920),this);
  if (this != (Leaderboard *)0x0) {
    ~Leaderboard(this);
    AK::FreeHook(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Leaderboard::Update() */

void __thiscall Sexy::Leaderboard::Update(Leaderboard *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  LeaderboardEntry *this_01;
  long lVar9;
  undefined8 local_a8;
  undefined8 local_a0;
  FieldData aFStack_98 [144];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (1 < *(int *)(this + 0x14) - 1U) goto LAB_053b91c0;
  cVar2 = (**(code **)(**(long **)(this + 0x30) + 0x10))(*(long **)(this + 0x30));
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30));
    if (cVar2 != '\0') {
      *(undefined4 *)(this + 0x14) = 0xffffffff;
    }
    goto LAB_053b91c0;
  }
  iVar4 = *(int *)(this + 0x10);
  lVar9 = *(long *)(this + 0x30);
  *(long *)(this + 0x38) = lVar9;
  *(undefined8 *)(this + 0x30) = 0;
  if (iVar4 == 4) {
    if (*(long *)(this + 0x40) != 0) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(lVar9 + 0x18);
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      while( true ) {
        local_a0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0)
        ;
        if (!bVar3) break;
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_a8);
      }
      std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>::push_back
                ((vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>> *)this_00,
                 *(LeaderboardEntry **)(this + 0x40));
      *(int *)(*(long *)(this + 0x38) + 0xc) = *(int *)(*(long *)(this + 0x38) + 0xc) + 1;
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      std::
      sort<__gnu_cxx::__normal_iterator<Sexy::LeaderboardEntry*,std::vector<Sexy::LeaderboardEntry,std::allocator<Sexy::LeaderboardEntry>>>,bool(*)(Sexy::LeaderboardEntry_const&,Sexy::LeaderboardEntry_const&)>
                (uVar6,uVar7,FUN_053b6d40);
      uVar8 = FUN_053b62d8(*(undefined4 *)(*(long *)(this + 0x38) + 8));
      uVar8 = uVar8 & 0xffffffff;
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      while( true ) {
        local_a0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0)
        ;
        if (!bVar3) break;
        uVar8 = uVar8 + 1;
        this_01 = (LeaderboardEntry *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
        std::string::string((string *)&local_a0,"rank");
        LeaderboardEntry::FieldData::FieldData(aFStack_98,uVar8);
        LeaderboardEntry::SetField(this_01,(string *)&local_a0,aFStack_98);
        std::string::~string((string *)&local_a0);
        nop();
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_a8);
      }
      iVar4 = *(int *)(this + 0x10);
      uVar1 = *(uint *)(*(long *)(this + 0x38) + 0x10);
      if ((long)(ulong)uVar1 < (long)uVar8) {
        *(uint *)(*(long *)(this + 0x38) + 0x10) = uVar1 + 1;
      }
      goto LAB_053b9188;
    }
LAB_053b9194:
    uVar5 = FUN_053b62d8(*(undefined4 *)(lVar9 + 8));
  }
  else {
LAB_053b9188:
    if (iVar4 != 1) {
      lVar9 = *(long *)(this + 0x38);
      goto LAB_053b9194;
    }
    uVar5 = 0;
  }
  *(undefined4 *)(this + 0x20) = uVar5;
  *(undefined4 *)(this + 0x14) = 3;
  if (this[0x28] != (Leaderboard)0x0) {
    this[0x28] = (Leaderboard)0x0;
    nop();
  }
LAB_053b91c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


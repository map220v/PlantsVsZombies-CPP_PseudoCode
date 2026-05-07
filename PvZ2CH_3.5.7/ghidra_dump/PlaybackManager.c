// Class: PlaybackManager


/* PlaybackManager::CheckVersionValid(int) */

bool PlaybackManager::CheckVersionValid(int param_1)

{
  int iVar1;
  int in_w1;
  undefined4 extraout_w1;
  undefined4 in_register_0000400c;
  undefined4 extraout_var;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  iVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)(ulong)(uint)param_1,(wchar16 *)CONCAT44(in_register_0000400c,in_w1)
                     ,in_x2,in_x3,in_x4);
  if (0 < iVar1) {
    iVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)(ulong)(uint)param_1,(wchar16 *)CONCAT44(extraout_var,extraout_w1)
                       ,in_x2,in_x3,in_x4);
    return iVar1 == in_w1;
  }
  return false;
}


/* PlaybackManager::StartPlayback() */

void __thiscall PlaybackManager::StartPlayback(PlaybackManager *this)

{
  undefined4 uVar1;
  char cVar2;
  PlaybackData *this_00;
  
  this_00 = *(PlaybackData **)(this + 8);
  if (this_00 != (PlaybackData *)0x0) {
    uVar1 = *(undefined4 *)(this + 0x40);
    cVar2 = FUN_04ac2190(uVar1);
    if (cVar2 != '\0') {
      PlaybackData::StartRecording(this_00);
      return;
    }
    cVar2 = FUN_04ac219c(uVar1);
    if (cVar2 != '\0') {
      PlaybackData::StartPlaying(this_00);
      return;
    }
  }
  return;
}


/* PlaybackManager::EndPlayback() */

void __thiscall PlaybackManager::EndPlayback(PlaybackManager *this)

{
  if (*(PlaybackData **)(this + 8) != (PlaybackData *)0x0) {
    PlaybackData::End(*(PlaybackData **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* PlaybackManager::SetMaxBattleID(unsigned long) */

void __thiscall PlaybackManager::SetMaxBattleID(PlaybackManager *this,ulong param_1)

{
  if (*(ulong *)(this + 0x48) < param_1) {
    *(ulong *)(this + 0x48) = param_1;
  }
  return;
}


/* PlaybackManager::IsHaveNewPlayback() */

bool __thiscall PlaybackManager::IsHaveNewPlayback(PlaybackManager *this)

{
  ProfileMgr *this_00;
  long lVar1;
  ulong uVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = FUN_04ac21b0(*(undefined8 *)(lVar1 + 0x1198));
  return uVar2 < *(ulong *)(this + 0x48);
}


/* PlaybackManager::RefreshNewPlaybackID() */

void __thiscall PlaybackManager::RefreshNewPlaybackID(PlaybackManager *this)

{
  ProfileMgr *this_00;
  long lVar1;
  ulong uVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  uVar2 = FUN_04ac21b0(*(undefined8 *)(lVar1 + 0x1198));
  if (*(ulong *)(this + 0x48) <= uVar2) {
    return;
  }
  FUN_04ac21a8(lVar1 + 0x1198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackManager::Clear() */

void __thiscall PlaybackManager::Clear(PlaybackManager *this)

{
  map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    PlaybackData::Destroy(*(PlaybackData **)(lVar2 + 8));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  std::
  map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
  ::clear(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlaybackManager::~PlaybackManager() */

void __thiscall PlaybackManager::~PlaybackManager(PlaybackManager *this)

{
  *(undefined ***)this = &PTR__PlaybackManager_06948f50;
  Clear(this);
  std::
  map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
  ::~map((map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
          *)(this + 0x10));
  Sexy::LazySingleton<PlaybackManager>::~LazySingleton((LazySingleton<PlaybackManager> *)this);
  return;
}


/* PlaybackManager::~PlaybackManager() */

void __thiscall PlaybackManager::~PlaybackManager(PlaybackManager *this)

{
  ~PlaybackManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackManager::GetPlayback(unsigned long) */

void __thiscall PlaybackManager::GetPlayback(PlaybackManager *this,ulong param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  local_18 = std::
             map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
             ::find((map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
                     *)(this + 0x10),local_28);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x10));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackManager::PlaybackManager() */

void __thiscall PlaybackManager::PlaybackManager(PlaybackManager *this)

{
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *this_00;
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong local_10;
  long local_8;
  
  this_00 = (map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<PlaybackManager>::LazySingleton((LazySingleton<PlaybackManager> *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__PlaybackManager_06948f50;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(this_00);
  local_10 = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  puVar1 = (undefined8 *)
           std::
           map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
           ::operator[]((map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
                         *)this_00,&local_10);
  uVar2 = PlaybackData::StaticNew();
  *puVar1 = uVar2;
  local_10 = 0;
  plVar3 = (long *)std::
                   map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
                   ::operator[]((map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
                                 *)this_00,&local_10);
  FUN_04ac2218(*plVar3 + 0x2c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackManager::SetCurrentData(unsigned long) */

void __thiscall PlaybackManager::SetCurrentData(PlaybackManager *this,ulong param_1)

{
  map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  ulong local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  local_18 = std::
             map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
             ::find(this_00,local_28);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    puVar2 = (undefined8 *)
             std::
             map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
             ::operator[](this_00,local_28);
    *(undefined8 *)(this + 8) = *puVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackManager::AddPlaybackBrief(PlaybackBrief const&) */

void __thiscall PlaybackManager::AddPlaybackBrief(PlaybackManager *this,PlaybackBrief *param_1)

{
  map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
  *this_00;
  char cVar1;
  long *plVar2;
  long lVar3;
  ulong local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_20 = *(ulong *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  if (local_20 != 0) {
    this_00 = (map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
               *)(this + 0x10);
    local_18 = std::
               map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
               ::find(this_00,&local_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar1 != '\0') {
      lVar3 = PlaybackData::StaticNew();
      FUN_04ac2218(lVar3 + 0x2c);
      plVar2 = (long *)std::
                       map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
                       ::operator[](this_00,&local_20);
      *plVar2 = lVar3;
    }
    plVar2 = (long *)std::
                     map<unsigned_long,PlaybackData*,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,PlaybackData*>>>
                     ::operator[](this_00,&local_20);
    PlaybackBrief::operator=((PlaybackBrief *)(*plVar2 + 0xe0),param_1);
    SetMaxBattleID(this,*(ulong *)(param_1 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


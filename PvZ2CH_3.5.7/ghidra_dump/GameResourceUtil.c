// Class: GameResourceUtil


/* GameResourceUtil::GetFrameImageByRare(int) */

void GameResourceUtil::GetFrameImageByRare(int param_1)

{
  if (param_1 == 1) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92af8);
    return;
  }
  if (param_1 == 2) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92940);
    return;
  }
  if (param_1 == 3) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92990);
    return;
  }
  if (param_1 != 4) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92b20);
    return;
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b929c0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameResourceUtil::GetFrameImageById(int) */

void GameResourceUtil::GetFrameImageById(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  GameItemInfo aGStack_28 [12];
  int local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xfad) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92940);
  }
  else if (param_1 == 0xbc0) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92990);
  }
  else {
    GameItemInfo::GameItemInfo(aGStack_28);
    cVar1 = GameInfoUtil::GetItemInfoById(param_1,aGStack_28);
    if (cVar1 == '\0') {
      uVar2 = 0;
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)aGStack_28);
    }
    else {
      uVar2 = GetFrameImageByRare(local_1c);
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)aGStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameResourceUtil::GetImageById(int) */

void GameResourceUtil::GetImageById(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  GameItemInfo aGStack_28 [16];
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xfad) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92a58);
  }
  else if (param_1 == 0xbc0) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b92ad0);
  }
  else {
    GameItemInfo::GameItemInfo(aGStack_28);
    cVar1 = GameInfoUtil::GetItemInfoById(param_1,aGStack_28);
    if (cVar1 == '\0') {
      uVar2 = 0;
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)aGStack_28);
    }
    else {
      std::pair<std::wstring_const,Sexy::DataElement*>::~pair
                ((pair<std::wstring_const,Sexy::DataElement*> *)aGStack_28);
      uVar2 = local_18;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


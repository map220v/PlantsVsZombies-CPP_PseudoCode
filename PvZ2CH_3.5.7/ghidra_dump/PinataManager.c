// Class: PinataManager


/* PinataManager::SetPinataStyleChooser(PinataStyleChooser*) */

void __thiscall
PinataManager::SetPinataStyleChooser(PinataManager *this,PinataStyleChooser *param_1)

{
  *(PinataStyleChooser **)(this + 0x98) = param_1;
  return;
}


/* PinataManager::rewardShown(TheDayRewardItem const*) */

void PinataManager::rewardShown(TheDayRewardItem *param_1)

{
  return;
}


/* PinataManager::onExplodeFinished(std::string const&) */

void PinataManager::onExplodeFinished(string *param_1)

{
  int iVar1;
  int iVar2;
  BaseReadWithoutBufferTask *this;
  
  iVar1 = *(int *)(param_1 + 0x50);
  param_1[0xa0] = (string)0x1;
  *(int *)(param_1 + 0x50) = iVar1 + 1;
  this = (BaseReadWithoutBufferTask *)LevelOfTheDayMgr::GetInstance();
  iVar2 = BaseReadWithoutBufferTask::GetNumBytesRead(this);
  if (iVar1 + 1 != iVar2) {
    return;
  }
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(param_1 + 0x58));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataManager::AreAllPrizesRevealed() */

void __thiscall PinataManager::AreAllPrizesRevealed(PinataManager *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  Pinata *this_00;
  BaseReadWithoutBufferTask *this_01;
  byte bVar4;
  int iVar5;
  PinataManager PVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  PVar6 = this[0x90];
  local_8 = ___stack_chk_guard;
  if (PVar6 != (PinataManager)0x0) {
    bVar4 = 0;
    iVar5 = 0;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x38));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      this_00 = (Pinata *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      cVar1 = Pinata::IsRevealed(this_00);
      if (cVar1 != '\0') {
        iVar5 = iVar5 + 1;
      }
      cVar1 = Pinata::IsRevealing(this_00);
      if (cVar1 != '\0') {
        bVar4 = 1;
      }
      __gnu_cxx::__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>>::operator++
                ((__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>> *)&local_18)
      ;
    }
    if (iVar5 < 4) {
      this_01 = (BaseReadWithoutBufferTask *)LevelOfTheDayMgr::GetInstance();
      iVar3 = BaseReadWithoutBufferTask::GetNumBytesRead(this_01);
      PVar6 = (PinataManager)((bVar4 | iVar3 != iVar5) ^ 1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataManager::IsLocationValid(Sexy::Point const&) */

void __thiscall PinataManager::IsLocationValid(PinataManager *this,Point *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  Pinata *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)bVar2) {
LAB_049c4864:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    this_00 = (Pinata *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Pinata::IsDropped(this_00);
    if (cVar1 != '\0') {
      iVar3 = FUN_049c41a0(100);
      if ((*(int *)this_00 <= *(int *)param_1) && (*(int *)param_1 <= iVar3 + *(int *)this_00)) {
        if ((*(int *)(this_00 + 4) <= *(int *)(param_1 + 4)) &&
           (*(int *)(param_1 + 4) <= iVar3 + *(int *)(this_00 + 4))) {
          bVar2 = Pinata::IsPopped(this_00);
          bVar2 = bVar2 ^ 1;
          goto LAB_049c4864;
        }
      }
    }
    __gnu_cxx::__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>>::operator++
              ((__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataManager::DropPinatas(int) */

void __thiscall PinataManager::DropPinatas(PinataManager *this,int param_1)

{
  bool bVar1;
  Pinata *this_00;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (Pinata *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((byte)this_00[8] < (iVar3 < param_1)) {
      uVar2 = *(undefined8 *)(this + 0x98);
      iVar3 = iVar3 + 1;
      this_00[8] = (Pinata)0x1;
      *(undefined8 *)(this_00 + 0x48) = uVar2;
      Pinata::Drop(this_00);
    }
    __gnu_cxx::__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>>::operator++
              ((__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PinataManager::PinataManager() */

void __thiscall PinataManager::PinataManager(PinataManager *this)

{
  *(undefined ***)this = &PTR__PinataManager_06926d70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x50) = 0;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x58),(DummyInit *)0x0);
  Sexy::Point::Point((Point *)(this + 0x88));
  this[0x90] = (PinataManager)0x0;
  *(undefined8 *)(this + 0x98) = 0;
  this[0xa0] = (PinataManager)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataManager::createPinataPopAnimRigDrawer(std::string) */

void __thiscall PinataManager::createPinataPopAnimRigDrawer(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  PopAnim *pPVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  PopAnimRigRectDrawer *this;
  CachedUIResourcePtr<Sexy::PopAnim> aCStack_60 [40];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)FUN_0547429c(param_2);
  CachedUIResourcePtr<Sexy::PopAnim>::CachedUIResourcePtr(aCStack_60,pcVar1);
  pPVar2 = CachedUIResourcePtr::operator_cast_to_PopAnim_((CachedUIResourcePtr *)aCStack_60);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar2,pRVar3);
  CachedUIResourcePtr<Sexy::PopAnim>::~CachedUIResourcePtr(aCStack_60);
  std::string::string((string *)aCStack_60,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aCStack_60,3,aDStack_38);
  std::string::~string((string *)aCStack_60);
  nop();
  this = ::operator_new(0x20);
  PopAnimRigRectDrawer::PopAnimRigRectDrawer(this,pPVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* PinataManager::RevealAllPinataPrizes() */

void __thiscall PinataManager::RevealAllPinataPrizes(PinataManager *this)

{
  char cVar1;
  undefined8 *puVar2;
  Pinata *this_00;
  TheDayRewardItem *pTVar3;
  
  this[0x90] = (PinataManager)0x1;
  cVar1 = std::vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>>::empty
                    ((vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>> *)
                     (this + 0x20));
  if (cVar1 != '\0') {
    return;
  }
  puVar2 = (undefined8 *)
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x20));
  pTVar3 = (TheDayRewardItem *)*puVar2;
  this_00 = (Pinata *)(**(code **)(*(long *)this + 0x20))(this);
  Pinata::RevealPrize(this_00,pTVar3);
  FUN_049c3eb0(this + 0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataManager::PopPinata(Sexy::Point const&) */

void __thiscall PinataManager::PopPinata(PinataManager *this,Point *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  Pinata *this_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 local_58;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_049c3e7c(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  this_00 = (Pinata *)0x0;
  if (lVar4 != 0) {
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x38));
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2)
    {
      this_00 = (Pinata *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      cVar1 = Pinata::IsDropped(this_00);
      if (cVar1 != '\0') {
        iVar3 = FUN_049c41a0(100);
        if ((*(int *)this_00 <= *(int *)param_1) && (*(int *)param_1 <= iVar3 + *(int *)this_00)) {
          if ((*(int *)(this_00 + 4) <= *(int *)(param_1 + 4)) &&
             (*(int *)(param_1 + 4) <= iVar3 + *(int *)(this_00 + 4))) {
            cVar1 = Pinata::IsPopped(this_00);
            if (cVar1 == '\0') {
              puVar5 = (undefined8 *)
                       std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)(this + 8));
              uVar6 = *puVar5;
              FUN_049c3eb0(this + 0x10);
              Sexy::
              MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                        ((ReceivedDataCallback *)this,onExplodeFinished);
              Sexy::Delegate1<std::string_const&>::
              Delegate1<PinataManager,void(PinataManager::*)(std::string_const&)>
                        (aDStack_38,aCStack_50);
              Pinata::Pop(this_00,aDStack_38,uVar6);
              this[0xa0] = (PinataManager)0x0;
              if (*(code **)(*(long *)this + 0x10) != rewardShown) {
                (**(code **)(*(long *)this + 0x10))(this,uVar6);
              }
              goto LAB_049c509c;
            }
            break;
          }
        }
      }
      __gnu_cxx::__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>>::operator++
                ((__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>> *)&local_60)
      ;
    }
    this_00 = (Pinata *)0x0;
  }
LAB_049c509c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* PinataManager::RecvReward() */

void __thiscall PinataManager::RecvReward(PinataManager *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 *puVar3;
  undefined1 uVar4;
  string *psVar5;
  
  cVar1 = std::vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>>::empty
                    ((vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>> *)
                     (this + 8));
  if (cVar1 != '\0') {
    return;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_049c3e78(*(undefined4 *)(this + 0x50));
  if (iVar2 == 0) {
    LawnApp::GetRealBeijingTime(gLawnApp);
    PlayerInfo::AddBirthZRecord((long)this_01);
  }
  puVar3 = (undefined8 *)
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 8));
  psVar5 = (string *)*puVar3;
  MessageRouter::Post<int,LevelOfTheDayRewardType>
            ((MessageRouter *)gMessageRouter,Message::BirthdayZReward,*(undefined4 *)(psVar5 + 8));
  iVar2 = *(int *)(psVar5 + 8);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      PlayerInfo::AddGems(this_01,*(int *)(psVar5 + 0x10),true);
      return;
    }
    if (iVar2 == 2) {
      cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,psVar5);
      if (cVar1 == '\0') {
        PlayerInfo::UnlockPlant(this_01,psVar5,false);
        return;
      }
      uVar4 = 10;
    }
    else {
      if (iVar2 != 3) {
        if (iVar2 != 4) {
          return;
        }
        PlayerInfo::AddAvatarPiecesCount(this_01,psVar5,0,*(undefined4 *)(psVar5 + 0x10),1);
        return;
      }
      uVar4 = (undefined1)*(undefined4 *)(psVar5 + 0x10);
    }
    PlayerInfo::AddPlantPieceCount((string *)this_01,(int)psVar5,(bool)uVar4);
    return;
  }
  PlayerInfo::AddCoins(this_01,*(int *)(psVar5 + 0x10));
  return;
}


/* PinataManager::~PinataManager() */

void __thiscall PinataManager::~PinataManager(PinataManager *this)

{
  *(undefined ***)this = &PTR__PinataManager_06926d70;
  std::vector<Pinata,std::allocator<Pinata>>::clear
            ((vector<Pinata,std::allocator<Pinata>> *)(this + 0x38));
  std::vector<Pinata,std::allocator<Pinata>>::~vector
            ((vector<Pinata,std::allocator<Pinata>> *)(this + 0x38));
  std::vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>>::~vector
            ((vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>> *)
             (this + 0x20));
  std::vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>>::~vector
            ((vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>> *)(this + 8));
  return;
}


/* PinataManager::~PinataManager() */

void __thiscall PinataManager::~PinataManager(PinataManager *this)

{
  ~PinataManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataManager::InitRewardList() */

void __thiscall PinataManager::InitRewardList(PinataManager *this)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 local_20;
  undefined8 local_18;
  TheDayRewardItem *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>>::clear
            ((vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>> *)(this + 8));
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)LevelOfTheDayMgr::GetInstance();
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)std::
               _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               ::_M_root(this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    local_10 = (TheDayRewardItem *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    std::vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>>::push_back
              ((vector<TheDayRewardItem_const*,std::allocator<TheDayRewardItem_const*>> *)(this + 8)
               ,&local_10);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataManager::SelectUnPoppedPinataAtRandom() */

void __thiscall PinataManager::SelectUnPoppedPinataAtRandom(PinataManager *this)

{
  bool bVar1;
  char cVar2;
  Pinata *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  undefined8 local_30;
  Pinata *local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    this_00 = (Pinata *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    cVar2 = Pinata::IsPopped(this_00);
    if (cVar2 == '\0') {
      local_28 = this_00;
      std::vector<Pinata*,std::allocator<Pinata*>>::push_back
                ((vector<Pinata*,std::allocator<Pinata*>> *)local_20,&local_28);
    }
    __gnu_cxx::__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>>::operator++
              ((__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>> *)&local_38);
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar3,uVar4);
  puVar5 = (undefined8 *)FUN_049c4068(local_20[0]);
  uVar3 = *puVar5;
  std::vector<Pinata*,std::allocator<Pinata*>>::~vector
            ((vector<Pinata*,std::allocator<Pinata*>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataManager::GetPinatasToDraw(std::vector<Pinata*, std::allocator<Pinata*> >&) */

void __thiscall PinataManager::GetPinatasToDraw(PinataManager *this,vector *param_1)

{
  bool bVar1;
  Pinata *pPVar2;
  undefined8 local_20;
  undefined8 local_18;
  Pinata *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pPVar2 = (Pinata *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if (pPVar2[8] != (Pinata)0x0) {
      local_10 = pPVar2;
      std::vector<Pinata*,std::allocator<Pinata*>>::push_back
                ((vector<Pinata*,std::allocator<Pinata*>> *)param_1,&local_10);
    }
    __gnu_cxx::__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>>::operator++
              ((__normal_iterator<Pinata*,std::vector<Pinata,std::allocator<Pinata>>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataManager::SetupPinatas(int, Sexy::Delegate0) */

void __thiscall PinataManager::SetupPinatas(PinataManager *this,int param_1,Delegate2 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LevelOfTheDayMgr *this_00;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  code *pcVar13;
  uint uVar14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelOfTheDayMgr *)LevelOfTheDayMgr::GetInstance();
  lVar7 = LevelOfTheDayMgr::GetCurrentTheDayItem(this_00);
  if (lVar7 != 0) {
    uVar14 = 0;
    InitRewardList(this);
    Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
              ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x58),param_3);
    iVar2 = FUN_049c41a0(0x8c);
    iVar3 = FUN_049c41a0(0x6e);
    iVar4 = FUN_049c41a0(0x23);
    iVar5 = FUN_049c41a0(100);
    iVar6 = FUN_049c41a0(0x69);
    std::vector<Pinata,std::allocator<Pinata>>::resize
              ((vector<Pinata,std::allocator<Pinata>> *)(this + 0x38),0x10);
    piVar8 = (int *)FUN_049c406c(*(undefined8 *)(this + 0x38));
    do {
      uVar14 = uVar14 + 1;
      piVar1 = piVar8 + 0x70;
      iVar12 = (((iVar2 * -3 - iVar5) - iVar4) + param_1) / 2 + iVar4 * (uVar14 & 1);
      piVar11 = piVar8;
      do {
        lVar10 = *(long *)this;
        *piVar11 = iVar12;
        piVar11[1] = iVar6;
        piVar8 = piVar11 + 0x1c;
        pcVar13 = *(code **)(lVar10 + 0x18);
        iVar12 = iVar12 + iVar2;
        FUN_05475d88(asStack_10,lVar7 + 0x40);
        uVar9 = (*pcVar13)(this,asStack_10);
        *(undefined8 *)(piVar11 + 4) = uVar9;
        std::string::~string(asStack_10);
        piVar11 = piVar8;
      } while (piVar8 != piVar1);
      iVar6 = iVar6 + iVar3;
    } while (uVar14 != 4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


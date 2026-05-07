// Class: RedPackOpenUI


/* RedPackOpenUI::ButtonDepress(int) */

int RedPackOpenUI::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to RedPackOpenUI::ButtonDepress(int) */

void __thiscall RedPackOpenUI::ButtonDepress(RedPackOpenUI *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::GetDrawPosById(int, int) */

void __thiscall RedPackOpenUI::GetDrawPosById(RedPackOpenUI *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_10;
  long local_8;
  
  iVar5 = *(int *)(this + 0x134);
  iVar6 = *(int *)(this + 300);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_041b8f58(0x14);
  iVar6 = iVar6 + iVar5 / 2 + (iVar5 + iVar1) * param_2;
  iVar5 = *(int *)(this + 0x130) + *(int *)(this + 0x138) / 2;
  puVar3 = (undefined8 *)FUN_041b8e2c(*(undefined8 *)(this + 0xe0),(long)param_2);
  lVar4 = FUN_041b8e38(*puVar3,puVar3[1]);
  if (3 < lVar4 - 1U) {
switchD_041b90a4_default:
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_10,(float)(*(int *)(this + 0x50) / 2),
               (float)(*(int *)(this + 0x54) / 2));
    goto LAB_041b9058;
  }
  switch(lVar4 - 1U & 0xffffffff) {
  case 0:
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar6,(float)iVar5);
    goto LAB_041b9058;
  case 1:
    if (param_1 == 0) {
      iVar1 = FUN_041b8f58(0x46);
      iVar1 = -iVar1;
    }
    else {
      iVar1 = FUN_041b8f58(0x46);
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)(iVar1 + iVar6),(float)iVar5);
    goto LAB_041b9058;
  case 2:
    if (param_1 == 0) {
      iVar1 = FUN_041b8f58(0x46);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar6,(float)(iVar5 - iVar1));
      goto LAB_041b9058;
    }
    if (param_1 == 1) {
LAB_041b90b8:
      iVar2 = FUN_041b8f58(0x46);
      iVar1 = -iVar2;
    }
    else {
LAB_041b9134:
      iVar2 = FUN_041b8f58(0x46);
      iVar1 = iVar2;
    }
    iVar6 = iVar1 + iVar6;
    iVar5 = iVar5 + iVar2;
    break;
  case 3:
    if (param_1 == 0) {
      iVar1 = FUN_041b8f58(0x46);
      iVar6 = iVar6 - iVar1;
      iVar5 = iVar5 - iVar1;
    }
    else {
      if (param_1 != 1) {
        if (param_1 != 2) goto LAB_041b9134;
        goto LAB_041b90b8;
      }
      iVar1 = FUN_041b8f58(0x46);
      iVar6 = iVar1 + iVar6;
      iVar5 = iVar5 - iVar1;
    }
    break;
  default:
    goto switchD_041b90a4_default;
  }
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar6,(float)iVar5);
LAB_041b9058:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail((int)local_10,(int)((ulong)local_10 >> 0x20));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::getRedPackRewardName(int, std::string const&) */

void RedPackOpenUI::getRedPackRewardName(int param_1,string *param_2)

{
  char cVar1;
  Magento *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar2;
  long lVar3;
  ulong uVar4;
  NameMapperBase *pNVar5;
  wchar_t *pwVar6;
  int iVar7;
  string *extraout_x1;
  string *in_x2;
  ulong uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  Sexy aSStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  Magento::GetPlantLevelUp(this);
  uVar4 = 0;
  do {
    uVar8 = uVar4;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    uVar4 = FUN_041b8e4c(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
    iVar7 = (int)param_2;
    if (uVar4 <= uVar8) {
      pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar5,iVar7);
      goto joined_r0x041b9358;
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_041b8e58(*(undefined8 *)(lVar3 + 0x60),uVar8);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
    cVar1 = std::operator==((string *)(lVar3 + 0x80),in_x2);
    uVar4 = uVar8 + 1;
  } while (cVar1 == '\0');
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pRVar2 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_041b8e58(*(undefined8 *)(lVar3 + 0x60),uVar8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar2);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
  TodStringTranslate(awStack_18);
  FUN_054766c8();
  FUN_05476c50(auStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string((string *)aSStack_20);
  pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar5,iVar7);
joined_r0x041b9358:
  if (cVar1 == '\0') {
    pNVar5 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar5,iVar7);
    if (cVar1 == '\0') goto LAB_041b9284;
    pwVar6 = L"[AVATAR_PIECE]";
  }
  else {
    pwVar6 = L"[PIECE]";
  }
  TodStringTranslate(pwVar6);
  thunk_FUN_05477668();
  FUN_05476c50(auStack_10);
LAB_041b9284:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::getRedPackRewardName(std::string&, std::string const&) */

void RedPackOpenUI::getRedPackRewardName(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  Magento *this;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  ulong uVar5;
  wchar_t *pwVar6;
  string *extraout_x1;
  string *in_x2;
  ulong uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  Sexy aSStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  Magento::GetPlantLevelUp(this);
  uVar5 = 0;
  do {
    uVar7 = uVar5;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    uVar5 = FUN_041b8e4c(*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68));
    if (uVar5 <= uVar7) goto LAB_041b942c;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_041b8e58(*(undefined8 *)(lVar4 + 0x60),uVar7);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    cVar1 = std::operator==((string *)(lVar4 + 0x80),in_x2);
    uVar5 = uVar7 + 1;
  } while (cVar1 == '\0');
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_041b8e58(*(undefined8 *)(lVar4 + 0x60),uVar7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  MagentoProductProps::GetLocalizedShortDescription();
  Sexy::UTF8StringToWString(aSStack_20,extraout_x1);
  TodStringTranslate(awStack_18);
  FUN_054766c8();
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string((string *)aSStack_20);
LAB_041b942c:
  FUN_05475ffc(asStack_10,param_2,0,0xb);
  bVar2 = std::operator==(asStack_10,"plantpiece_");
  std::string::~string(asStack_10);
  if (bVar2) {
    pwVar6 = L"[PIECE]";
  }
  else {
    FUN_05475ffc(asStack_10,param_2,0,7);
    bVar2 = std::operator==(asStack_10,"avatar_");
    std::string::~string(asStack_10);
    if (!bVar2) goto LAB_041b9494;
    pwVar6 = L"[AVATAR_PIECE]";
  }
  TodStringTranslate(pwVar6);
  thunk_FUN_05477668();
  FUN_05476c50(asStack_10);
LAB_041b9494:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::SaveOpenRedPackReward() */

void __thiscall RedPackOpenUI::SaveOpenRedPackReward(RedPackOpenUI *this)

{
  bool bVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  long lVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe0));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xe0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  if (bVar1) {
    do {
      this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_02);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_02);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
            bVar1) {
        lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        FUN_05475ffc(asStack_10,lVar3,0,6);
        bVar1 = std::operator==(asStack_10,"plant_");
        std::string::~string(asStack_10);
        iVar4 = (int)asStack_10;
        if (bVar1) {
          FUN_05475ffc(asStack_10,lVar3,6,0xffffffffffffffff);
          cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_10);
          if (cVar2 == '\0') {
            PlayerInfo::UnlockPlant(this_01,asStack_10,false);
          }
          else {
            PlayerInfo::AddPlantPieceCount((string *)this_01,iVar4,true);
          }
LAB_041b965c:
          std::string::~string(asStack_10);
        }
        else {
          FUN_05475ffc(asStack_10,lVar3,0,0xb);
          bVar1 = std::operator==(asStack_10,"plantpiece_");
          std::string::~string(asStack_10);
          if (bVar1) {
            FUN_05475ffc(asStack_10,lVar3,0xb,0xffffffffffffffff);
            PlayerInfo::AddPlantPieceCount
                      ((string *)this_01,iVar4,SUB41(*(undefined4 *)(lVar3 + 0xc),0));
            std::string::~string(asStack_10);
          }
          else {
            FUN_05475ffc(asStack_10,lVar3,0,0xc);
            bVar1 = std::operator==(asStack_10,"avatarpiece_");
            std::string::~string(asStack_10);
            if (bVar1) {
              FUN_05475ffc(asStack_10,lVar3,0xc,0xffffffffffffffff);
              PlayerInfo::AddAvatarPiecesCount(this_01,asStack_10,0,*(undefined4 *)(lVar3 + 0xc),1);
              std::string::~string(asStack_10);
            }
            else {
              FUN_05475ffc(asStack_10,lVar3,0,10);
              bVar1 = std::operator==(asStack_10,"accessory_");
              std::string::~string(asStack_10);
              if (bVar1) {
                FUN_05475ffc(asStack_18,lVar3,10,0xffffffffffffffff);
                Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
                cVar2 = PlantAccessoryMgr::CanExchangeAccessory();
                if (cVar2 != '\0') {
                  FUN_05475d88(asStack_10,asStack_18);
                  PlayerInfo::AddPlantAccessoryInfos(this_01,asStack_10,0,1);
                  std::string::~string(asStack_10);
                }
                std::string::~string(asStack_18);
              }
              else {
                FUN_05475ffc(asStack_10,lVar3,0,0xf);
                bVar1 = std::operator==(asStack_10,"accessorypiece_");
                std::string::~string(asStack_10);
                if (bVar1) {
                  FUN_05475ffc(asStack_10,lVar3,0xf,0xffffffffffffffff);
                  PlayerInfo::AddAccessoryPieceCount(this_01,asStack_10,*(int *)(lVar3 + 0xc),true);
                  goto LAB_041b965c;
                }
              }
            }
          }
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
      }
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::~RedPackOpenUI() */

void __thiscall RedPackOpenUI::~RedPackOpenUI(RedPackOpenUI *this)

{
  LawnApp *pLVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_067ff6a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067ff9c8;
  pLVar1 = gLawnApp;
  uVar5 = 0;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Redpack");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar6 = *(undefined8 *)(this + 0xf8);
  uVar2 = FUN_041b8df8(uVar6,*(undefined8 *)(this + 0x100));
  if (uVar2 != 0) {
    do {
      plVar3 = (long *)FUN_041b8e04(uVar6,uVar5);
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x18))();
        puVar4 = (undefined8 *)FUN_041b8e04(*(undefined8 *)(this + 0xf8),uVar5);
        *puVar4 = 0;
        uVar6 = *(undefined8 *)(this + 0xf8);
        uVar2 = FUN_041b8df8(uVar6,*(undefined8 *)(this + 0x100));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<RedPackAnimStatus,std::allocator<RedPackAnimStatus>>::~vector
            ((vector<RedPackAnimStatus,std::allocator<RedPackAnimStatus>> *)(this + 0x110));
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::~vector
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0xf8));
  std::
  vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
  ::~vector((vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
             *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPackOpenUI::~RedPackOpenUI() */

void __thiscall RedPackOpenUI::~RedPackOpenUI(RedPackOpenUI *this)

{
  ~RedPackOpenUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::TouchEnded(Sexy::Touch const&) */

void __thiscall RedPackOpenUI::TouchEnded(RedPackOpenUI *this,Touch *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  Effect_PopAnim *pEVar11;
  float fVar12;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x128)) {
    lVar10 = 0;
    bVar1 = false;
    do {
      iVar3 = FUN_041b8f58(0x113);
      iVar9 = (int)lVar10;
      Sexy::Insets::Insets
                (aIStack_18,*(int *)(this + 300) + iVar3 * iVar9,*(int *)(this + 0x130),
                 *(int *)(this + 0x134),*(int *)(this + 0x138));
      cVar2 = Sexy::TRect<int>::Contains
                        ((TRect<int> *)aIStack_18,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14))
      ;
      if (cVar2 != '\0') {
        bVar1 = true;
        pfVar4 = (float *)FUN_041b8e20(*(undefined8 *)(this + 0x110),lVar10);
        if ((*(char *)(pfVar4 + 2) == '\0') && (*(char *)((long)pfVar4 + 9) == '\0')) {
          *(undefined1 *)(pfVar4 + 2) = 1;
          fVar12 = (float)PVZ_T();
          uVar5 = *(undefined8 *)(this + 0xf8);
          *pfVar4 = fVar12 + 1.3;
          puVar6 = (undefined8 *)FUN_041b8e04(uVar5,lVar10);
          pEVar11 = (Effect_PopAnim *)*puVar6;
          std::string::string(asStack_20,"open");
          Effect_PopAnim::PlaySingleAnimation(pEVar11,asStack_20,0);
          std::string::~string(asStack_20);
          nop();
          pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar7,"Play_UI_Benefit_Sound");
        }
      }
      iVar3 = *(int *)(this + 0x128);
      lVar10 = lVar10 + 1;
    } while (iVar9 + 1 < iVar3);
    if (bVar1) goto LAB_041b9e7c;
    if (0 < iVar3) {
      uVar5 = *(undefined8 *)(this + 0x110);
      lVar10 = 0;
      do {
        lVar8 = FUN_041b8e20(uVar5,lVar10);
        if (*(char *)(lVar8 + 9) == '\0') goto LAB_041b9e7c;
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < iVar3);
    }
  }
  LawnApp::KillRedPackOpenUI(gLawnApp);
LAB_041b9e7c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x041ba0f8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* RedPackOpenUI::DrawPrizePool(Sexy::Graphics*, int) */

void RedPackOpenUI::DrawPrizePool(Graphics *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  vector *pvVar9;
  long lVar10;
  undefined8 uVar11;
  LotteryResultProgressBar *pLVar12;
  SalesProgressBar *pSVar13;
  SeedPacketUtils *this;
  ResourceInfo *pRVar14;
  string *psVar15;
  ulong uVar16;
  PlantAccessoryMgr *pPVar17;
  Image *pIVar18;
  int iVar19;
  Graphics *this_00;
  int in_w2;
  ulong uVar20;
  long lVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  float fVar25;
  ulong in_d1;
  float fVar26;
  undefined1 *local_d8;
  string *local_c0;
  string *local_a0;
  string *local_98;
  string *local_90;
  RtWeakPtr<Sexy::ResourceInfo> *local_88;
  int local_78;
  undefined4 local_74;
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtMixedPtrBase aRStack_50 [8];
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 local_38 [2];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (Graphics *)(ulong)(uint)param_2;
  lVar21 = (long)in_w2;
  uVar20 = 0;
  local_8 = ___stack_chk_guard;
  pvVar9 = (vector *)FUN_041b8e2c(*(undefined8 *)(param_1 + 0xe0),lVar21);
  std::vector<RedPackContent,std::allocator<RedPackContent>>::vector
            ((vector<RedPackContent,std::allocator<RedPackContent>> *)&local_20,pvVar9);
  iVar5 = *(int *)(param_1 + 0x134);
  iVar6 = *(int *)(param_1 + 300);
  iVar4 = FUN_041b8f58(0x14);
  local_74 = *(undefined4 *)(param_1 + 0x130);
  local_78 = iVar6 + iVar5 / 2 + (iVar5 + iVar4) * in_w2;
  lVar10 = FUN_041b8e38(local_20,local_18);
  if (lVar10 != 0) {
    do {
      fVar25 = (float)in_d1;
      fVar22 = (float)GetDrawPosById((RedPackOpenUI *)param_1,(int)uVar20,in_w2);
      lVar10 = FUN_041b8e20(*(undefined8 *)(param_1 + 0x110),lVar21);
      fVar26 = *(float *)(lVar10 + 4);
      uVar23 = PVZ_T();
      local_30[0] = (int)fVar22;
      iVar5 = CurveLerp<int>(fVar26,fVar26 + 0.4,uVar23,&local_78,(string *)local_30,3);
      lVar10 = FUN_041b8e20(*(undefined8 *)(param_1 + 0x110),lVar21);
      fVar22 = *(float *)(lVar10 + 4);
      uVar23 = PVZ_T();
      local_30[0] = (int)fVar25;
      iVar6 = CurveLerp<int>(fVar22,fVar22 + 0.4,uVar23,&local_74,(string *)local_30,3);
      lVar10 = FUN_041b8e20(*(undefined8 *)(param_1 + 0x110),lVar21);
      fVar22 = *(float *)(lVar10 + 4);
      auVar24 = PVZ_T();
      in_d1 = (ulong)(uint)(fVar22 + 0.4);
      local_38[0] = 0x3dcccccd;
      local_30[0] = 0x3f800000;
      fVar22 = CurveLerp<float>(auVar24,in_d1,auVar24._0_4_,(wstring *)local_38,(string *)local_30,3
                               );
      uVar11 = FUN_041b8e44(local_20,uVar20);
      FUN_05475ffc((string *)local_30,uVar11,0,6);
      bVar1 = std::operator==((string *)local_30,"plant_");
      std::string::~string((string *)local_30);
      if (bVar1) {
        uVar11 = FUN_041b8e44(local_20,uVar20);
        FUN_05475ffc(asStack_48,uVar11,6,0xffffffffffffffff);
        pLVar12 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0b78);
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
        iVar19 = (int)((float)iVar5 - fVar22 * 0.5 * (float)iVar4);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0b78);
        iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar4 = (int)((float)iVar6 - fVar22 * 0.5 * (float)iVar4);
        this = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        lVar10 = SeedPacketUtils::GetPlantPacketRenderData(this,asStack_48,-1,-1,-1);
        pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar10 + 0x170));
        Sexy::Insets::Insets
                  ((Insets *)local_30,iVar19 + *(int *)(lVar10 + 0x30),
                   iVar4 + *(int *)(lVar10 + 0x34),*(int *)(lVar10 + 0x28),*(int *)(lVar10 + 0x2c));
        Sexy::Graphics::DrawImage
                  (this_00,(Image *)pRVar14,(TRect *)local_30,(TRect *)(lVar10 + 0x20));
        pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar10 + 0x170));
        Sexy::Graphics::DrawImage
                  (this_00,(Image *)pRVar14,iVar19 + *(int *)(lVar10 + 0x18),
                   iVar4 + *(int *)(lVar10 + 0x1c),(TRect *)(lVar10 + 8));
        psVar15 = (string *)FUN_041b8e44(local_20,uVar20);
        getRedPackRewardName((string *)param_1,psVar15);
        uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
        iVar4 = FUN_041b8f58(100);
        pSVar13 = (SalesProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0b78);
        iVar19 = SalesProgressBar::GetCurrentLevel(pSVar13);
        iVar7 = FUN_041b8f58(200);
        FUN_05477b24((wstring *)local_38,auStack_40);
        Sexy::Color::Color((Color *)local_30,1);
        in_d1 = (ulong)(uint)(float)(iVar6 + iVar19 / 2);
        Sexy::PrimeTypeface::DrawString_Line
                  ((PrimeTypeface *)(float)(iVar5 - iVar4),in_d1,(float)iVar7,uVar11,this_00,
                   (wstring *)local_38,1,(string *)local_30,0);
        FUN_05476c50((wstring *)local_38);
        FUN_05476c50(auStack_40);
        std::string::~string(asStack_48);
      }
      else {
        uVar11 = FUN_041b8e44(local_20,uVar20);
        FUN_05475ffc((string *)local_30,uVar11,0,0xb);
        bVar2 = std::operator==((string *)local_30,"plantpiece_");
        std::string::~string((string *)local_30);
        if (bVar2) {
          uVar11 = FUN_041b8e44(local_20,uVar20);
          FUN_05475ffc(asStack_70,uVar11,0xb,0xffffffffffffffff);
          bVar2 = std::operator!=(asStack_70,"");
          if (bVar2) {
            std::string::string(asStack_68,"plant_piece_");
            nop();
            FUN_05475d88(asStack_60,asStack_70);
            FUN_031dcc6c(asStack_58,asStack_68,asStack_60);
            psVar15 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar15);
            cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
            if (cVar3 != '\0') {
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
              pIVar18 = (Image *)StringHelper::ToImage((string *)(lVar10 + 0x60),bVar1);
              if (pIVar18 != (Image *)0x0) {
                pLVar12 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                pSVar13 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                iVar19 = SalesProgressBar::GetCurrentLevel(pSVar13);
                pLVar12 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                pSVar13 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                iVar8 = SalesProgressBar::GetCurrentLevel(pSVar13);
                Sexy::Graphics::DrawImage
                          (this_00,pIVar18,iVar5 - iVar4 / 2,iVar6 - iVar19 / 2,
                           (int)((float)iVar7 * fVar22),(int)((float)iVar8 * fVar22));
              }
              lVar10 = FUN_041b8e44(local_20,uVar20);
              Sexy::StrFormat(L"x%d",asStack_48,(ulong)*(uint *)(lVar10 + 0xc));
              uVar11 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_20);
              iVar4 = FUN_041b8f58(0x28);
              iVar19 = FUN_041b8f58(0x1e);
              iVar7 = FUN_041b8f58(0x14);
              FUN_05477b24((wstring *)local_38,asStack_48);
              Sexy::Color::Color((Color *)local_30,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar4 + iVar5),(float)(iVar19 + iVar6),
                         (float)iVar7,uVar11,this_00,(wstring *)local_38,0,(string *)local_30,0);
              FUN_05476c50((wstring *)local_38);
              local_c0 = (string *)FUN_041b8e44(local_20,uVar20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
              nop();
LAB_041bade8:
              local_d8 = auStack_40;
              getRedPackRewardName((string *)param_1,local_c0);
              uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
              iVar19 = FUN_041b8f58(100);
              pSVar13 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
              iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
              fVar22 = (float)iVar6 + (float)iVar4 * fVar22 * 0.5;
              iVar6 = FUN_041b8f58(200);
              FUN_05477b24((wstring *)local_38,local_d8);
              Sexy::Color::Color((Color *)local_30,1);
LAB_041baea0:
              in_d1 = (ulong)(uint)fVar22;
              local_d8 = auStack_40;
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar5 - iVar19),in_d1,(float)iVar6,uVar11,this_00,
                         (wstring *)local_38,1,(string *)local_30,0);
              FUN_05476c50((wstring *)local_38);
              FUN_05476c50(local_d8);
              FUN_05476c50(asStack_48);
            }
LAB_041ba8d8:
            local_88 = (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50;
            local_90 = asStack_58;
            local_98 = asStack_68;
            local_a0 = asStack_60;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_88);
            std::string::~string(local_90);
            std::string::~string(local_a0);
            std::string::~string(local_98);
          }
        }
        else {
          uVar11 = FUN_041b8e44(local_20,uVar20);
          FUN_05475ffc((string *)local_30,uVar11,0,0xc);
          bVar1 = std::operator==((string *)local_30,"avatarpiece_");
          std::string::~string((string *)local_30);
          if (!bVar1) {
            uVar11 = FUN_041b8e44(local_20,uVar20);
            FUN_05475ffc((string *)local_30,uVar11,0,10);
            bVar1 = std::operator==((string *)local_30,"accessory_");
            std::string::~string((string *)local_30);
            if (bVar1) {
              uVar11 = FUN_041b8e44(local_20,uVar20);
              FUN_05475ffc(asStack_48,uVar11,10,0xffffffffffffffff);
              psVar15 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              pLVar12 = (LotteryResultProgressBar *)
                        PlantAccessoryMgr::GetAccessoryDisplayImage(psVar15);
              if (pLVar12 != (LotteryResultProgressBar *)0x0) {
                iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
                iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                iVar8 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
                Sexy::Graphics::DrawImage
                          (this_00,(Image *)pLVar12,iVar5 - iVar4 / 2,iVar6 - iVar19 / 2,
                           (int)((float)iVar7 * fVar22),(int)((float)iVar8 * fVar22));
              }
              pPVar17 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
              PlantAccessoryMgr::GetAccessoryDisplayName(pPVar17,asStack_48);
              uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
              iVar4 = FUN_041b8f58(100);
              iVar19 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar12);
              in_d1 = (ulong)(uint)((float)iVar6 + (float)iVar19 * fVar22 * 0.5);
              iVar6 = FUN_041b8f58(200);
              FUN_05477b24((wstring *)local_38,auStack_40);
              Sexy::Color::Color((Color *)local_30,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar5 - iVar4),in_d1,(float)iVar6,uVar11,this_00,
                         (wstring *)local_38,1,(string *)local_30,0);
              FUN_05476c50((wstring *)local_38);
              FUN_05476c50(auStack_40);
              std::string::~string(asStack_48);
            }
            else {
              uVar11 = FUN_041b8e44(local_20,uVar20);
              FUN_05475ffc((string *)local_30,uVar11,0,0xf);
              bVar1 = std::operator==((string *)local_30,"accessorypiece_");
              std::string::~string((string *)local_30);
              if (bVar1) {
                uVar11 = FUN_041b8e44(local_20,uVar20);
                FUN_05475ffc(asStack_70,uVar11,0xf,0xffffffffffffffff);
                bVar1 = std::operator!=(asStack_70,"");
                if (bVar1) {
                  FUN_05475d88(asStack_68,asStack_70);
                  std::string::string(asStack_60,"_piece");
                  nop();
                  FUN_031dcc6c(asStack_58,asStack_68,asStack_60);
                  psVar15 = (string *)
                            Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::
                            GetInstancePtr();
                  ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar15);
                  cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
                  if (cVar3 == '\0') goto LAB_041ba8d8;
                  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
                  pIVar18 = (Image *)StringHelper::ToImage((string *)(lVar10 + 0x60),false);
                  if (pIVar18 != (Image *)0x0) {
                    pLVar12 = (LotteryResultProgressBar *)
                              CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                    pSVar13 = (SalesProgressBar *)
                              CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                    iVar19 = SalesProgressBar::GetCurrentLevel(pSVar13);
                    pLVar12 = (LotteryResultProgressBar *)
                              CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                    pSVar13 = (SalesProgressBar *)
                              CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar13);
                    Sexy::Graphics::DrawImage
                              (this_00,pIVar18,iVar5 - iVar4 / 2,iVar6 - iVar19 / 2,
                               (int)((float)iVar7 * fVar22),(int)((float)iVar8 * fVar22));
                  }
                  lVar10 = FUN_041b8e44(local_20,uVar20);
                  Sexy::StrFormat(L"x%d",asStack_48,(ulong)*(uint *)(lVar10 + 0xc));
                  uVar11 = PrimeText_PotentialTypeface::Typeface
                                     (PrimeText_Game::Typeface_CafeteriaBlack_20);
                  iVar4 = FUN_041b8f58(0x28);
                  iVar19 = FUN_041b8f58(0x1e);
                  iVar7 = FUN_041b8f58(0x14);
                  FUN_05477b24((wstring *)local_38,asStack_48);
                  Sexy::Color::Color((Color *)local_30,1);
                  Sexy::PrimeTypeface::DrawString_Line
                            ((PrimeTypeface *)(float)(iVar4 + iVar5),(float)(iVar19 + iVar6),
                             (float)iVar7,uVar11,this_00,(wstring *)local_38,0,(string *)local_30,0)
                  ;
                  FUN_05476c50((wstring *)local_38);
                  pPVar17 = (PlantAccessoryMgr *)
                            Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
                  PlantAccessoryMgr::GetAccessoryDisplayName(pPVar17,asStack_70);
                  TodStringTranslate(L"[PIECE]");
                  std::operator+((wstring *)local_38,(wstring *)local_30);
                  FUN_05476c50((string *)local_30);
                  FUN_05476c50((wstring *)local_38);
                  uVar11 = PrimeText_PotentialTypeface::Typeface
                                     (PrimeText_Game::Typeface_FZShaoEr_18);
                  iVar19 = FUN_041b8f58(100);
                  pSVar13 = (SalesProgressBar *)
                            CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
                  fVar22 = (float)iVar6 + (float)iVar4 * fVar22 * 0.5;
                  iVar6 = FUN_041b8f58(200);
                  FUN_05477b24((wstring *)local_38,auStack_40);
                  Sexy::Color::Color((Color *)local_30,1);
                  goto LAB_041baea0;
                }
                goto LAB_041ba408;
              }
            }
            goto LAB_041ba338;
          }
          uVar11 = FUN_041b8e44(local_20,uVar20);
          FUN_05475ffc(asStack_70,uVar11,0xc,0xffffffffffffffff);
          bVar1 = std::operator!=(asStack_70,"");
          if (bVar1) {
            std::string::string(asStack_68,"avatar_piece_");
            nop();
            FUN_05475d88(asStack_60,asStack_70);
            FUN_031dcc6c(asStack_58,asStack_68,asStack_60);
            psVar15 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
            ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar15);
            cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
            if (cVar3 != '\0') {
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
              pIVar18 = (Image *)StringHelper::ToImage((string *)(lVar10 + 0x60),bVar2);
              if (pIVar18 != (Image *)0x0) {
                pLVar12 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                pSVar13 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                iVar19 = SalesProgressBar::GetCurrentLevel(pSVar13);
                pLVar12 = (LotteryResultProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar12);
                pSVar13 = (SalesProgressBar *)
                          CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af0a90);
                iVar8 = SalesProgressBar::GetCurrentLevel(pSVar13);
                Sexy::Graphics::DrawImage
                          (this_00,pIVar18,iVar5 - iVar4 / 2,iVar6 - iVar19 / 2,
                           (int)((float)iVar7 * fVar22),(int)((float)iVar8 * fVar22));
              }
              lVar10 = FUN_041b8e44(local_20,uVar20);
              Sexy::StrFormat(L"x%d",asStack_48,(ulong)*(uint *)(lVar10 + 0xc));
              uVar11 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_CafeteriaBlack_20);
              iVar4 = FUN_041b8f58(0x28);
              iVar19 = FUN_041b8f58(0x1e);
              iVar7 = FUN_041b8f58(0x14);
              FUN_05477b24((wstring *)local_38,asStack_48);
              Sexy::Color::Color((Color *)local_30,1);
              Sexy::PrimeTypeface::DrawString_Line
                        ((PrimeTypeface *)(float)(iVar4 + iVar5),(float)(iVar19 + iVar6),
                         (float)iVar7,uVar11,this_00,(wstring *)local_38,0,(string *)local_30,0);
              FUN_05476c50((wstring *)local_38);
              local_c0 = (string *)FUN_041b8e44(local_20,uVar20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
              nop();
              goto LAB_041bade8;
            }
            goto LAB_041ba8d8;
          }
        }
LAB_041ba408:
        std::string::~string(asStack_70);
      }
LAB_041ba338:
      uVar20 = uVar20 + 1;
      uVar16 = FUN_041b8e38(local_20,local_18);
    } while (uVar20 < uVar16);
  }
  std::vector<RedPackContent,std::allocator<RedPackContent>>::~vector
            ((vector<RedPackContent,std::allocator<RedPackContent>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::InitView() */

void __thiscall RedPackOpenUI::InitView(RedPackOpenUI *this)

{
  int iVar1;
  StandaloneEffect *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  RedPacketRewardInfo *this_00;
  long lVar9;
  char *__s;
  ResourceInfo *pRVar10;
  ulong uVar11;
  undefined8 uVar12;
  RtWeakPtr aRStack_28 [8];
  StandaloneEffect *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar11 = 0;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  uVar12 = *(undefined8 *)(this + 0xf8);
  uVar6 = FUN_041b8df8(uVar12,*(undefined8 *)(this + 0x100));
  if (uVar6 != 0) {
    do {
      plVar7 = (long *)FUN_041b8e04(uVar12,uVar11);
      if ((long *)*plVar7 != (long *)0x0) {
        (**(code **)(*(long *)*plVar7 + 0x18))();
        puVar8 = (undefined8 *)FUN_041b8e04(*(undefined8 *)(this + 0xf8),uVar11);
        *puVar8 = 0;
        uVar12 = *(undefined8 *)(this + 0xf8);
        uVar6 = FUN_041b8df8(uVar12,*(undefined8 *)(this + 0x100));
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar6);
  }
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::clear
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0xf8));
  iVar3 = FUN_041b8f58(0xff);
  iVar1 = *(int *)(this + 0x128);
  iVar5 = *(int *)(this + 0x50);
  iVar4 = FUN_041b8f58(0x14);
  iVar1 = ((iVar5 - iVar3 * iVar1) + iVar4 * (1 - iVar1)) / 2;
  iVar5 = FUN_041b8f58(0x15e);
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,(*(int *)(this + 0x54) - iVar5) / 2,iVar3,iVar5);
  *(undefined8 *)(this + 300) = local_18;
  *(undefined8 *)(this + 0x134) = uStack_10;
  this_00 = (RedPacketRewardInfo *)LawnApp::GetRedPacketRewardInfo(gLawnApp);
  lVar9 = RedPacketRewardInfo::GetCurrentDisplayConfig(this_00);
  __s = (char *)FUN_0547429c(lVar9 + 0x20);
  std::string::string((string *)&local_18,__s);
  GetPAMByName((string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
  if (0 < *(int *)(this + 0x128)) {
    iVar5 = 0;
    do {
      local_20 = (StandaloneEffect *)GameObject::CreateOutsideTable<Effect_PopAnim>();
      Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)local_20,(PopAnim *)pRVar10,(RtClass *)0x0)
      ;
      pSVar2 = local_20;
      iVar3 = FUN_041b8f58(0xff);
      iVar3 = iVar3 * iVar5;
      iVar4 = FUN_041b8f58(0xaa);
      iVar5 = iVar5 + 1;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)(iVar1 + iVar3),(float)iVar4);
      StandaloneEffect::SetScreenSpaceOrigin(pSVar2,(SexyVector2 *)&local_18,900000);
      pSVar2 = local_20;
      std::string::string((string *)&local_18,"in");
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)pSVar2,(Insets *)&local_18,0);
      std::string::~string((string *)&local_18);
      nop();
      (**(code **)(*(long *)local_20 + 0x88))(local_20);
      std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0xf8),
                 (Effect_PopAnim **)&local_20);
    } while (iVar5 < *(int *)(this + 0x128));
  }
  std::vector<RedPackAnimStatus,std::allocator<RedPackAnimStatus>>::clear
            ((vector<RedPackAnimStatus,std::allocator<RedPackAnimStatus>> *)(this + 0x110));
  std::vector<RedPackAnimStatus,std::allocator<RedPackAnimStatus>>::resize
            ((vector<RedPackAnimStatus,std::allocator<RedPackAnimStatus>> *)(this + 0x110),
             (long)*(int *)(this + 0x128));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::RedPackOpenUI(int) */

void __thiscall RedPackOpenUI::RedPackOpenUI(RedPackOpenUI *this,int param_1)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_067ff6a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067ff9c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  *(int *)(this + 0x128) = param_1;
  Sexy::Insets::Insets((Insets *)(this + 300));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Redpack");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::
  vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
  ::clear((vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
           *)(this + 0xe0));
  std::vector<RedPackAnimStatus,std::allocator<RedPackAnimStatus>>::clear
            ((vector<RedPackAnimStatus,std::allocator<RedPackAnimStatus>> *)(this + 0x110));
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::SetPrizePool(int) */

void __thiscall RedPackOpenUI::SetPrizePool(RedPackOpenUI *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
  ::resize((vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
            *)(this + 0xe0),(long)param_1);
  uVar1 = FUN_041b8e0c(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  *(undefined4 *)(this + 0x128) = uVar1;
  iVar2 = LawnApp::GetRedPacketRewardInfo(gLawnApp);
  RedPacketRewardInfo::GetPrizePool(iVar2);
  std::
  vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
  ::operator=((vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
               *)(this + 0xe0),(vector *)avStack_20);
  std::
  vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
  ::~vector(avStack_20);
  SaveOpenRedPackReward(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::Draw(Sexy::Graphics*) */

void __thiscall RedPackOpenUI::Draw(RedPackOpenUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_1,0.5);
  nop();
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline);
  iVar2 = FUN_041b8f58(0x50);
  iVar1 = *(int *)(this + 0x50);
  TodStringTranslate(L"[REDPACK_CLICK_OPEN]");
  Sexy::Color::Color(aCStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar2,(float)iVar1,uVar3,param_1,auStack_20,1,aCStack_18,0)
  ;
  FUN_05476c50(auStack_20);
  uVar3 = *(undefined8 *)(this + 0xf8);
  lVar4 = FUN_041b8df8(uVar3,*(undefined8 *)(this + 0x100));
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_041b8e04(uVar3,uVar7);
      if ((StandaloneEffect *)*puVar5 != (StandaloneEffect *)0x0) {
        StandaloneEffect::Draw((StandaloneEffect *)*puVar5,param_1);
      }
      lVar4 = FUN_041b8e20(*(undefined8 *)(this + 0x110),uVar7);
      if (*(char *)(lVar4 + 9) != '\0') {
        DrawPrizePool((Graphics *)this,(int)param_1);
      }
      uVar7 = uVar7 + 1;
      uVar3 = *(undefined8 *)(this + 0xf8);
      uVar6 = FUN_041b8df8(uVar3,*(undefined8 *)(this + 0x100));
    } while (uVar7 < uVar6);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPackOpenUI::Update() */

void __thiscall RedPackOpenUI::Update(RedPackOpenUI *this)

{
  long lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  Effect_PopAnim *this_00;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  Insets aIStack_18 [16];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  uVar7 = *(undefined8 *)(this + 0xf8);
  lVar1 = FUN_041b8df8(uVar7,*(undefined8 *)(this + 0x100));
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_041b8e04(uVar7,uVar6);
      if ((StandaloneEffect *)*puVar2 != (StandaloneEffect *)0x0) {
        StandaloneEffect::Update((StandaloneEffect *)*puVar2);
      }
      pfVar3 = (float *)FUN_041b8e20(*(undefined8 *)(this + 0x110),uVar6);
      fVar10 = *pfVar3;
      fVar8 = (float)PVZ_T();
      if (fVar10 < fVar8) {
        puVar5 = (undefined4 *)FUN_041b8e20(*(undefined8 *)(this + 0x110),uVar6);
        uVar9 = PVZ_EOT();
        *puVar5 = uVar9;
        *(undefined1 *)(puVar5 + 2) = 0;
        *(undefined1 *)((long)puVar5 + 9) = 1;
        uVar9 = PVZ_T();
        uVar7 = *(undefined8 *)(this + 0xf8);
        puVar5[1] = uVar9;
        puVar2 = (undefined8 *)FUN_041b8e04(uVar7,uVar6);
        this_00 = (Effect_PopAnim *)*puVar2;
        Sexy::Insets::Insets(aIStack_18,0,0,0,0xbc);
        Effect_PopAnim::SetShaderOverrideColor(this_00,(Color *)aIStack_18);
      }
      uVar6 = uVar6 + 1;
      uVar7 = *(undefined8 *)(this + 0xf8);
      uVar4 = FUN_041b8df8(uVar7,*(undefined8 *)(this + 0x100));
    } while (uVar6 < uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


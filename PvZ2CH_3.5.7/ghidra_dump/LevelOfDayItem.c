// Class: LevelOfDayItem


/* LevelOfDayItem::~LevelOfDayItem() */

void __thiscall LevelOfDayItem::~LevelOfDayItem(LevelOfDayItem *this)

{
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined ***)this = &PTR_GetClass_0693c220;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelOfDayItem::~LevelOfDayItem() */

void __thiscall LevelOfDayItem::~LevelOfDayItem(LevelOfDayItem *this)

{
  ~LevelOfDayItem(this);
  AK::FreeHook(this);
  return;
}


/* LevelOfDayItem::SetScaling(bool) */

void __thiscall LevelOfDayItem::SetScaling(LevelOfDayItem *this,bool param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  this[0xe5] = (LevelOfDayItem)param_1;
  if (!param_1) {
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0xe8) = uVar1;
    return;
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0xe8) = fVar2 + (float)(*(int *)(this + 0xe0) + -1);
  return;
}


/* LevelOfDayItem::LevelOfDayItem(int) */

void __thiscall LevelOfDayItem::LevelOfDayItem(LevelOfDayItem *this,int param_1)

{
  LevelOfDayItem LVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LevelOfTheDaySystem *this_02;
  undefined8 uVar4;
  LotteryResultProgressBar *this_03;
  SalesProgressBar *this_04;
  CachedUIResourcePtr<Sexy::Image> *this_05;
  
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xe0) = param_1;
  *(undefined ***)this = &PTR_GetClass_0693c220;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this[0x59] = (LevelOfDayItem)0x0;
  this[0xe5] = (LevelOfDayItem)0x0;
  this[0xe6] = (LevelOfDayItem)0x0;
  this[0xe4] = (LevelOfDayItem)(*(int *)(this + 0xe0) == 7);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    this_02 = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
    iVar2 = LevelOfTheDaySystem::getCurActivityTypeID(this_02);
    iVar2 = PlayerInfo::GetLevelOfTheDayInfo(this_01,iVar2);
    if (iVar2 == *(int *)(this + 0xe0)) {
      this[0xe6] = (LevelOfDayItem)0x1;
      if (this[0xe4] == (LevelOfDayItem)0x0) {
        uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7dd68);
        *(undefined8 *)(this + 0xd8) = uVar4;
      }
      else {
        uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e2f8);
        *(undefined8 *)(this + 0xd8) = uVar4;
      }
    }
    else {
      this[0xe6] = (LevelOfDayItem)0x0;
      if (this[0xe4] == (LevelOfDayItem)0x0) {
        uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7dd40);
        *(undefined8 *)(this + 0xd8) = uVar4;
        LVar1 = this[0xe4];
        goto joined_r0x04a77964;
      }
      uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e008);
      *(undefined8 *)(this + 0xd8) = uVar4;
    }
  }
  LVar1 = this[0xe4];
joined_r0x04a77964:
  if (LVar1 == (LevelOfDayItem)0x0) {
    this_05 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7dd40;
  }
  else {
    this_05 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e008;
  }
  this_03 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_05);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_03);
  this_04 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(this_05);
  iVar3 = SalesProgressBar::GetCurrentLevel(this_04);
  Sexy::Widget::Resize((Widget *)this,0,0,iVar2,iVar3);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04a77b8c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* LevelOfDayItem::DrawFinishedMark(Sexy::Graphics*) */

void __thiscall LevelOfDayItem::DrawFinishedMark(LevelOfDayItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xe5] != (LevelOfDayItem)0x0) {
    fVar11 = (float)PVZ_T();
    fVar14 = *(float *)(this + 0xe8);
    if (fVar14 < fVar11) {
      fVar12 = 1.0;
      fVar11 = (float)PVZ_T();
      fVar14 = fVar14 + 1.0;
      if (fVar11 <= fVar14) {
        auVar13 = PVZ_T();
        local_c = 0x3f800000;
        local_10 = 0x3fe66666;
        fVar12 = CurveLerp<float>(auVar13,fVar14,auVar13._0_4_,&local_10,&local_c,3);
      }
      else {
        this[0xe5] = (LevelOfDayItem)0x0;
      }
      goto LAB_04a779e8;
    }
  }
  fVar12 = 1.0;
LAB_04a779e8:
  fVar11 = (float)PVZ_T();
  if (*(float *)(this + 0xe8) < fVar11) {
    iVar2 = FUN_04a769c0(1);
    iVar3 = FUN_04a769c0(0xb);
    if (this[0xe4] == (LevelOfDayItem)0x0) {
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e030);
      iVar2 = *(int *)(this + 0x50);
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e030);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      iVar1 = *(int *)(this + 0x54);
      pSVar10 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7e030);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
      TodDrawImageCenterScaledF
                (param_1,pIVar8,(float)((iVar2 - iVar4) / 2),(float)(iVar3 + (iVar1 - iVar5) / 2),
                 fVar12,fVar12);
    }
    else {
      iVar5 = FUN_04a769c0(0xf);
      pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7dee8);
      iVar1 = *(int *)(this + 0x50);
      pLVar9 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7dee8);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
      iVar4 = *(int *)(this + 0x54);
      pSVar10 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7dee8);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
      TodDrawImageCenterScaledF
                (param_1,pIVar8,(float)((iVar1 - iVar6) / 2 - iVar2),
                 (float)(iVar3 + iVar5 + (iVar4 - iVar7) / 2),fVar12,fVar12);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfDayItem::Draw(Sexy::Graphics*) */

void __thiscall LevelOfDayItem::Draw(LevelOfDayItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  LevelOfTheDaySystem *this_02;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *this_03;
  ResourceInfo *pRVar7;
  CachedUIResourcePtr *pCVar8;
  RenaissanceChallengeNewManager *pRVar9;
  Image *pIVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [12];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  string asStack_30 [8];
  RtWeakPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  int local_18;
  int local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar10 = *(Image **)(this + 0xd8);
  if (pIVar10 != (Image *)0x0) {
    iVar1 = 0;
    if (this[0xe6] != (LevelOfDayItem)0x0) {
      iVar1 = FUN_04a769c0(0xe);
      iVar1 = -iVar1;
    }
    Sexy::Graphics::DrawImage(param_1,pIVar10,iVar1,iVar1);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) goto LAB_04a79478;
  this_02 = (LevelOfTheDaySystem *)Sexy::LazySingleton<LevelOfTheDaySystem>::GetInstance();
  iVar1 = LevelOfTheDaySystem::getCurActivityTypeID(this_02);
  auVar13 = PlayerInfo::GetLevelOfTheDayInfo(this_01,iVar1);
  local_10 = auVar13._8_4_;
  iVar11 = auVar13._0_4_;
  iVar12 = auVar13._4_4_;
  local_18 = iVar11;
  local_14 = iVar12;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  if (this[0xe4] == (LevelOfDayItem)0x0) {
    iVar2 = FUN_04a769c0(0x11);
    if (*(int *)(this + 0xe0) < iVar11) {
      pCVar8 = (CachedUIResourcePtr *)&DAT_06b7de18;
    }
    else if ((iVar11 == *(int *)(this + 0xe0)) && (2 < iVar12)) {
      pCVar8 = (CachedUIResourcePtr *)&DAT_06b7e120;
    }
    else {
      pCVar8 = (CachedUIResourcePtr *)&DAT_06b7e3c8;
    }
LAB_04a7936c:
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  else {
    iVar2 = FUN_04a769c0(0x18);
    if (this[0xe6] != (LevelOfDayItem)0x0) {
      if (iVar12 == 0) {
        if (iVar1 == 0x2990) goto LAB_04a796d0;
        if (iVar1 == 0x2994) goto LAB_04a796e4;
        if (iVar1 == 0x29e5) goto LAB_04a797a8;
        if (iVar1 == 0x2a0a) {
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7ddc8);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          pRVar9 = (RenaissanceChallengeNewManager *)
                   Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
          uVar5 = RenaissanceChallengeNewManager::GetResourceId(pRVar9);
          if (0 < (int)uVar5) {
            Sexy::StrFormat("IMAGE_UI_LEVELOFTHEDAY_IMG_BOX_SPECIAL_CHILDREN_%d",asStack_30,
                            (ulong)uVar5);
            StringHelper::ToImage(asStack_30,auVar13[4]);
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,aRStack_28);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            Sexy::RtId::~RtId((RtId *)aRStack_28);
            std::string::~string(asStack_30);
            pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_38);
            goto joined_r0x04a79640;
          }
          goto LAB_04a79384;
        }
LAB_04a79514:
        pCVar8 = (CachedUIResourcePtr *)&DAT_06b7ddf0;
      }
      else {
        if (2 < iVar12) {
          pCVar8 = (CachedUIResourcePtr *)&DAT_06b7de68;
          goto LAB_04a7969c;
        }
        pCVar8 = (CachedUIResourcePtr *)&DAT_06b7de90;
      }
      goto LAB_04a7936c;
    }
    if (iVar11 <= *(int *)(this + 0xe0)) {
      if (iVar1 == 0x2990) {
LAB_04a796d0:
        pCVar8 = (CachedUIResourcePtr *)&DAT_06b7dfe0;
      }
      else if (iVar1 == 0x2994) {
LAB_04a796e4:
        pCVar8 = (CachedUIResourcePtr *)&DAT_06b7ddc8;
      }
      else {
        if (iVar1 != 0x29e5) {
          if (iVar1 != 0x2a0a) goto LAB_04a79514;
          CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b7ddc8);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          pRVar9 = (RenaissanceChallengeNewManager *)
                   Sexy::LazySingleton<RenaissanceChallengeNewManager>::GetInstance();
          uVar5 = RenaissanceChallengeNewManager::GetResourceId(pRVar9);
          if (0 < (int)uVar5) {
            Sexy::StrFormat("IMAGE_UI_LEVELOFTHEDAY_IMG_BOX_SPECIAL_CHILDREN_%d",asStack_30,
                            (ulong)uVar5);
            StringHelper::ToImage(asStack_30,false);
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,aRStack_28);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_20);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
            Sexy::RtId::~RtId((RtId *)aRStack_28);
            std::string::~string(asStack_30);
            pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_38);
joined_r0x04a79640:
            if (pRVar7 == (ResourceInfo *)0x0) {
              pCVar8 = (CachedUIResourcePtr *)&DAT_06b7ddc8;
              goto LAB_04a7936c;
            }
          }
          goto LAB_04a79384;
        }
LAB_04a797a8:
        pCVar8 = (CachedUIResourcePtr *)&DAT_06b7dce0;
      }
      goto LAB_04a7936c;
    }
    pCVar8 = (CachedUIResourcePtr *)&DAT_06b7e188;
LAB_04a7969c:
    CachedUIResourcePtr::operator_cast_to_RtWeakPtr(pCVar8);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_38,(RtWeakPtr *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    iVar1 = FUN_04a769c0(1);
    iVar2 = iVar2 - iVar1;
  }
LAB_04a79384:
  pLVar6 = (LotteryResultProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  this_03 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_03);
  iVar1 = *(int *)(this + 0x50);
  iVar12 = *(int *)(this + 0x54);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_38);
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,(iVar1 - iVar3) / 2,(iVar12 - iVar4) - iVar2);
  Sexy::StrFormat("IMAGE_UI_LEVELOFTHEDAY_IMG_DAY_%d",(string *)aRStack_20,
                  (ulong)*(uint *)(this + 0xe0));
  iVar1 = FUN_04a769c0(10);
  pLVar6 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)aRStack_20,false);
  if (pLVar6 == (LotteryResultProgressBar *)0x0) {
LAB_04a7945c:
    iVar1 = *(int *)(this + 0xe0);
  }
  else {
    iVar12 = *(int *)(this + 0x50);
    if (this[0xe4] != (LevelOfDayItem)0x0) {
      iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      iVar3 = FUN_04a769c0(0x14);
      TodDrawImageCenterScaledF
                (param_1,(Image *)pLVar6,(float)((iVar12 - iVar2) / 2),(float)(iVar3 + iVar1),2.0,
                 2.0);
      goto LAB_04a7945c;
    }
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    Sexy::Graphics::DrawImage(param_1,(Image *)pLVar6,(iVar12 - iVar2) / 2,iVar1);
    iVar1 = *(int *)(this + 0xe0);
  }
  if (iVar1 < iVar11) {
    DrawFinishedMark(this,param_1);
  }
  std::string::~string((string *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
LAB_04a79478:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


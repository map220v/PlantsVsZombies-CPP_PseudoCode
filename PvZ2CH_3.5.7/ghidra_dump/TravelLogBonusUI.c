// Class: TravelLogBonusUI


/* TravelLogBonusUI::HideAllButtonAndAnims() */

void __thiscall TravelLogBonusUI::HideAllButtonAndAnims(TravelLogBonusUI *this)

{
  this[0x130] = (TravelLogBonusUI)0x0;
  return;
}


/* TravelLogBonusUI::RecoverAllButtonAndAnims() */

void __thiscall TravelLogBonusUI::RecoverAllButtonAndAnims(TravelLogBonusUI *this)

{
  this[0x130] = (TravelLogBonusUI)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogBonusUI::~TravelLogBonusUI() */

void __thiscall TravelLogBonusUI::~TravelLogBonusUI(TravelLogBonusUI *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066f3fd0;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066f3c90;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Sales_Effect");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1c8));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x198));
  FUN_05476c50(this + 0x178);
  PopingWidget::~PopingWidget((PopingWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TravelLogBonusUI::~TravelLogBonusUI() */

void __thiscall TravelLogBonusUI::~TravelLogBonusUI(TravelLogBonusUI *this)

{
  ~TravelLogBonusUI(this);
  AK::FreeHook(this);
  return;
}


/* TravelLogBonusUI::SetTask(TravelLogTask*) */

void __thiscall TravelLogBonusUI::SetTask(TravelLogBonusUI *this,TravelLogTask *param_1)

{
  *(TravelLogTask **)(this + 0x128) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogBonusUI::InitShiningAnims() */

void __thiscall TravelLogBonusUI::InitShiningAnims(TravelLogBonusUI *this)

{
  EffectAnim_UIAnim *pEVar1;
  char cVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x198);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_20,(float)(*(int *)(this + 0x164) + *(int *)(this + 0x16c) / 2),
             (float)(*(int *)(this + 0x168) + *(int *)(this + 0x170) / 2));
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPING");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_20,local_1c,pEVar1,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar2 != '\0') {
    std::string::string((string *)&local_18,"effect_on");
    std::string::string(asStack_10,"effect_fullscreen_star");
    EffectAnim_UIAnim::PlayOnceThenLoop(pEVar1,(FastCurve *)&local_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string((string *)&local_18);
    nop();
  }
  pEVar1 = (EffectAnim_UIAnim *)(this + 0x1c8);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,(float)(*(int *)(gLawnApp + 0xd4) / 2),
             (float)(*(int *)(gLawnApp + 0xd8) / 2));
  std::string::string(asStack_10,"POPANIM_EFFECTS_SALES_REWARD_POPED");
  EffectAnim_UIAnim::InitUIAnim(0x3fc7bb30,local_18,local_14,pEVar1,asStack_10,1);
  std::string::~string(asStack_10);
  nop();
  cVar2 = EffectAnim_UIAnim::IsValid(pEVar1);
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"effects_behind");
    EffectAnim_UIAnim::PlayLoop(pEVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TravelLogBonusUI::WhichChestToRequest() */

undefined8 __thiscall TravelLogBonusUI::WhichChestToRequest(TravelLogBonusUI *this)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  do {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
    uVar3 = FUN_039dcc0c(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30));
    if (uVar3 <= uVar4) {
      return 0;
    }
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
    piVar1 = (int *)FUN_039dcc18(*(undefined8 *)(lVar2 + 0x28),uVar4);
    if (*piVar1 == 2) {
      return 1;
    }
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
    piVar1 = (int *)FUN_039dcc18(*(undefined8 *)(lVar2 + 0x28),uVar4);
    if (*piVar1 == 3) {
      return 2;
    }
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
    piVar1 = (int *)FUN_039dcc18(*(undefined8 *)(lVar2 + 0x28),uVar4);
    uVar4 = uVar4 + 1;
  } while (*piVar1 != 4);
  return 3;
}


/* TravelLogBonusUI::CalIndexByWorldName() */

void __thiscall TravelLogBonusUI::CalIndexByWorldName(TravelLogBonusUI *this)

{
  string *psVar1;
  bool bVar2;
  RtObject *this_00;
  TravelLogWorldTaskData *pTVar3;
  
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x128) + 0x20));
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
    pTVar3 = Sexy::RtObject::Cast<TravelLogWorldTaskData>(this_00);
    if (pTVar3 != (TravelLogWorldTaskData *)0x0) {
      psVar1 = (string *)(pTVar3 + 0x48);
      bVar2 = std::operator==(psVar1,"egypt");
      if (bVar2) {
        *(undefined4 *)(this + 0x1f8) = 0;
      }
      else {
        bVar2 = std::operator==(psVar1,"pirate");
        if (bVar2) {
          *(undefined4 *)(this + 0x1f8) = 1;
        }
        else {
          bVar2 = std::operator==(psVar1,"cowboy");
          if (bVar2) {
            *(undefined4 *)(this + 0x1f8) = 2;
          }
          else {
            bVar2 = std::operator==(psVar1,"kongfu");
            if (bVar2) {
              *(undefined4 *)(this + 0x1f8) = 3;
            }
            else {
              bVar2 = std::operator==(psVar1,"future");
              if (bVar2) {
                *(undefined4 *)(this + 0x1f8) = 4;
              }
              else {
                bVar2 = std::operator==(psVar1,"eighties");
                if (bVar2) {
                  *(undefined4 *)(this + 0x1f8) = 5;
                }
                else {
                  bVar2 = std::operator==(psVar1,"dark");
                  if (bVar2) {
                    *(undefined4 *)(this + 0x1f8) = 6;
                  }
                  else {
                    bVar2 = std::operator==(psVar1,"beach");
                    if (bVar2) {
                      *(undefined4 *)(this + 0x1f8) = 7;
                    }
                    else {
                      bVar2 = std::operator==(psVar1,"dino");
                      if (bVar2) {
                        *(undefined4 *)(this + 0x1f8) = 8;
                      }
                      else {
                        bVar2 = std::operator==(psVar1,"iceage");
                        if (bVar2) {
                          *(undefined4 *)(this + 0x1f8) = 9;
                        }
                        else {
                          bVar2 = std::operator==(psVar1,"lostcity");
                          if (bVar2) {
                            *(undefined4 *)(this + 0x1f8) = 10;
                          }
                          else {
                            bVar2 = std::operator==(psVar1,"skycity");
                            if (bVar2) {
                              *(undefined4 *)(this + 0x1f8) = 0xb;
                            }
                            else {
                              bVar2 = std::operator==(psVar1,"modern");
                              if (bVar2) {
                                *(undefined4 *)(this + 0x1f8) = 0xc;
                              }
                              else {
                                bVar2 = std::operator==(psVar1,"steam");
                                if (bVar2) {
                                  *(undefined4 *)(this + 0x1f8) = 0xd;
                                }
                                else {
                                  bVar2 = std::operator==(psVar1,"renai");
                                  if (bVar2) {
                                    *(undefined4 *)(this + 0x1f8) = 0xe;
                                  }
                                  else {
                                    bVar2 = std::operator==(psVar1,"heian");
                                    if (bVar2) {
                                      *(undefined4 *)(this + 0x1f8) = 0xf;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (pTVar3[0x55] == (TravelLogWorldTaskData)0x0) {
        if (pTVar3[0x54] == (TravelLogWorldTaskData)0x0) {
          *(undefined4 *)(this + 0x1fc) = 1;
          return;
        }
        *(undefined4 *)(this + 0x1fc) = 2;
        return;
      }
      *(undefined4 *)(this + 0x1fc) = 3;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogBonusUI::InitView() */

void __thiscall TravelLogBonusUI::InitView(TravelLogBonusUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  undefined8 uVar10;
  long *plVar11;
  PVZ2UIButton *pPVar12;
  code *pcVar13;
  int iVar14;
  PVZ2UIImage aPStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  this[0x59] = (TravelLogBonusUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1740);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar14 = (int)((double)iVar3 * 0.7);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1740);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar5 = FUN_039dd168(500);
  iVar3 = FUN_039dd168(0x15e);
  iVar2 = iVar3 - iVar4 / 2;
  iVar7 = *(int *)(this + 0x54) - iVar3 >> 1;
  iVar3 = iVar7 + iVar4 / 2;
  iVar6 = *(int *)(this + 0x50) - iVar5 >> 1;
  iVar1 = iVar6 + iVar5 / 2;
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar3,iVar5,iVar2);
  PopingWidget::SetMainRect((PopingWidget *)this,(Insets *)&local_40);
  Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar3,iVar5,iVar2);
  *(undefined8 *)(this + 0x134) = local_40;
  *(undefined8 *)(this + 0x13c) = uStack_38;
  iVar6 = FUN_039dd168(3);
  Sexy::Insets::Insets((Insets *)&local_40,(iVar1 - iVar14 / 2) - iVar6,iVar7,iVar14,iVar4);
  *(undefined8 *)(this + 0x154) = local_40;
  *(undefined8 *)(this + 0x15c) = uStack_38;
  iVar7 = FUN_039dd168(5);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x154),*(int *)(this + 0x158) - iVar7,iVar14,iVar4)
  ;
  *(undefined8 *)(this + 0x164) = local_40;
  *(undefined8 *)(this + 0x16c) = uStack_38;
  TodStringTranslate(L"[GEILIVABLE_LOTTERY_BONUS_TITLE]");
  FUN_054766c8(this + 0x178,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar7 = FUN_039dd168(0);
  iVar6 = FUN_039dd168(0x5a);
  Sexy::Insets::Insets((Insets *)&local_40,iVar7,iVar7,iVar6,iVar6);
  *(undefined8 *)(this + 0x144) = local_40;
  *(undefined8 *)(this + 0x14c) = uStack_38;
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1968);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1968);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar4 = FUN_039dd168(0x14);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar1 - (int)((double)iVar7 * 2.5) / 2,
             ((iVar3 + iVar2) - (int)((double)iVar6 * 0.8)) - iVar4,(int)((double)iVar7 * 2.5),
             (int)((double)iVar6 * 0.8));
  pPVar12 = *(PVZ2UIButton **)(this + 400);
  *(undefined8 *)(this + 0x180) = local_40;
  *(undefined8 *)(this + 0x188) = uStack_38;
  if (pPVar12 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[SALES_REWARD_BOX_CLOSE]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar12 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar12,400,(ButtonListener *)(this + 0x120),(wstring *)aPStack_78,(Color *)&local_40
              );
    *(PVZ2UIButton **)(this + 400) = pPVar12;
    FUN_05476c50(aPStack_78);
    pPVar12 = *(PVZ2UIButton **)(this + 400);
    if (pPVar12 == (PVZ2UIButton *)0x0) goto LAB_039dfe10;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ac1968,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac1ab0,3);
  PVZ2UIButton::SetDialogStates(pPVar12,aPStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 400) + 0x1a0))(*(long **)(this + 400),this + 0x180);
  plVar11 = *(long **)(this + 400);
  pcVar13 = *(code **)(*plVar11 + 800);
  uVar10 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar13)(plVar11,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 400));
LAB_039dfe10:
  InitShiningAnims(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogBonusUI::TravelLogBonusUI() */

void __thiscall TravelLogBonusUI::TravelLogBonusUI(TravelLogBonusUI *this)

{
  undefined *puVar1;
  LawnApp *this_00;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopingWidget::PopingWidget((PopingWidget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x120));
  *(undefined8 *)(this + 0x128) = 0;
  this[0x130] = (TravelLogBonusUI)0x0;
  *(undefined ***)this = &PTR_GetClass_066f3c90;
  *(undefined ***)(this + 0x120) = &PTR_ButtonPress_066f3fd0;
  Sexy::Insets::Insets((Insets *)(this + 0x134));
  Sexy::Insets::Insets((Insets *)(this + 0x144));
  Sexy::Insets::Insets((Insets *)(this + 0x154));
  Sexy::Insets::Insets((Insets *)(this + 0x164));
  FUN_05476574(this + 0x178);
  Sexy::Insets::Insets((Insets *)(this + 0x180));
  *(undefined8 *)(this + 400) = 0;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x198));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x1c8));
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  this_00 = gLawnApp;
  std::string::string((string *)&local_20,"Sales_Effect");
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  InitView(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnTravelLogIntegralChestFinish);
  local_50 = local_28;
  local_60 = local_38;
  uStack_58 = uStack_30;
  MessageRouter::
  Subscribe<bool,TravelLogRewardData*,Sexy::CBMemberTranslatorX<TravelLogBonusUI,void(TravelLogBonusUI::*)(bool,TravelLogRewardData*)>>
            ((MessageRouter *)puVar1,Message::TravelLogIntegralChestFinish,&local_60);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnTravelLogWolrdChestFinish);
  local_60 = local_20;
  uStack_58 = uStack_18;
  local_50 = local_10;
  MessageRouter::
  Subscribe<bool,TravelLogRewardData*,Sexy::CBMemberTranslatorX<TravelLogBonusUI,void(TravelLogBonusUI::*)(bool,TravelLogRewardData*)>>
            ((MessageRouter *)puVar1,Message::TravelLogWolrdChestFinish,&local_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogBonusUI::OnTravelLogIntegralChestFinish(bool, TravelLogRewardData*) */

void __thiscall
TravelLogBonusUI::OnTravelLogIntegralChestFinish
          (TravelLogBonusUI *this,bool param_1,TravelLogRewardData *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  UIChestAward *this_00;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  char *pcVar7;
  TGALogMgr *pTVar8;
  TravelLogTask *pTVar9;
  TGASecretStore *__n;
  ulong uVar10;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1f0 [24];
  TGASecretStore aTStack_1d8 [8];
  string asStack_1d0 [32];
  undefined1 auStack_1b0 [8];
  undefined4 local_1a8;
  undefined4 local_1a4;
  function<bool(Sexy::Touch_const&)> afStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 == (TravelLogRewardData *)0x0) || (!param_1)) {
    (**(code **)(**(long **)(this + 0x128) + 0x70))(*(long **)(this + 0x128),3);
    pTVar9 = (TravelLogTask *)UISingletonDialog<UITravelLog>::GetSingletonPtr();
    UITravelLog::GiveRewardFinish(pTVar9);
  }
  else {
    uVar2 = FUN_039dcbf8(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    Sexy::OutputDebugStrF((wchar_t *)"v790 %d",uVar2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1f0);
    uVar10 = 0;
    while( true ) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar3 = FUN_039dcbf8(uVar2,*(undefined8 *)(param_2 + 0x10));
      if (uVar3 <= uVar10) break;
      puVar5 = (undefined4 *)FUN_039dcc04(uVar2,uVar10);
      local_1a8 = *puVar5;
      local_1a4 = puVar5[1];
      std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::push_back
                ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_1f0,
                 (ChestAwardContent *)&local_1a8);
      uVar10 = uVar10 + 1;
    }
    std::string::string((string *)&local_1a8,"effects/ChestHardLevel_Chest");
    this_00 = (UIChestAward *)UIChestAward::create(avStack_1f0,(string *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    nop();
    FUN_039dd0b0(afStack_178,this_00,*(undefined8 *)(this + 0x128));
    UIChestAward::setEndCallBack(this_00,(function *)afStack_178);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_178);
    uVar1 = operator|(0x10,8);
    FUN_05462470(afStack_178,uVar1);
    __n = aTStack_1d8;
    std::string::string((string *)&local_1a8,"");
    FUN_05462980(afStack_178,(string *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    nop();
    uVar10 = 0;
    while( true ) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar3 = FUN_039dcbf8(uVar2,*(undefined8 *)(param_2 + 0x10));
      if (uVar3 <= uVar10) break;
      piVar4 = (int *)FUN_039dcc04(uVar2,uVar10);
      __n = (TGASecretStore *)0x0;
      ProfileChangeItemAmount(*piVar4,piVar4[1],false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_1a8);
      puVar5 = (undefined4 *)FUN_039dcc04(*(undefined8 *)(param_2 + 8),uVar10);
      uVar2 = FUN_0546065c(auStack_168,*puVar5);
      uVar2 = FUN_054603b8(uVar2,&DAT_05593348);
      lVar6 = FUN_039dcc04(*(undefined8 *)(param_2 + 8),uVar10);
      uVar2 = FUN_0546065c(uVar2,*(undefined4 *)(lVar6 + 4));
      FUN_054603b8(uVar2,&DAT_05594620);
      uVar10 = uVar10 + 1;
    }
    (**(code **)(**(long **)(this + 0x128) + 0x68))(*(long **)(this + 0x128));
    TGASecretStore::TGASecretStore(aTStack_1d8);
    DString::DString((DString *)&local_1a8,*(int *)(*(long *)(this + 0x128) + 0xc));
    pcVar7 = (char *)DString::c_str((DString *)&local_1a8);
    std::string::append((string *)aTStack_1d8,pcVar7,(size_t)__n);
    DString::~DString((DString *)&local_1a8);
    DString::DString((DString *)&local_1a8,*(int *)(*(long *)(this + 0x128) + 8));
    pcVar7 = (char *)DString::c_str((DString *)&local_1a8);
    std::string::append(asStack_1d0,pcVar7,(size_t)__n);
    DString::~DString((DString *)&local_1a8);
    FUN_05462824((string *)&local_1a8,afStack_178);
    FUN_05474278(auStack_1b0,(string *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGASecretStore::TGASecretStore((TGASecretStore *)&local_1a8,aTStack_1d8);
    TGALogMgr::LogTravelLog(pTVar8,2,(string *)&local_1a8);
    DropGroupNode::~DropGroupNode((DropGroupNode *)&local_1a8);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_1d8);
    FUN_054617bc(afStack_178);
    std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
              ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_1f0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogBonusUI::OnTravelLogWolrdChestFinish(bool, TravelLogRewardData*) */

void __thiscall
TravelLogBonusUI::OnTravelLogWolrdChestFinish
          (TravelLogBonusUI *this,bool param_1,TravelLogRewardData *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  UIChestAward *this_00;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  char *pcVar7;
  TGALogMgr *pTVar8;
  TravelLogTask *pTVar9;
  TGASecretStore *__n;
  ulong uVar10;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1f0 [24];
  TGASecretStore aTStack_1d8 [8];
  string asStack_1d0 [32];
  undefined1 auStack_1b0 [8];
  undefined4 local_1a8;
  undefined4 local_1a4;
  function<bool(Sexy::Touch_const&)> afStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 == (TravelLogRewardData *)0x0) || (!param_1)) {
    (**(code **)(**(long **)(this + 0x128) + 0x70))(*(long **)(this + 0x128),3);
    pTVar9 = (TravelLogTask *)UISingletonDialog<UITravelLog>::GetSingletonPtr();
    UITravelLog::GiveRewardFinish(pTVar9);
  }
  else {
    uVar2 = FUN_039dcbf8(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    Sexy::OutputDebugStrF((wchar_t *)"v791 %d",uVar2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1f0);
    uVar10 = 0;
    while( true ) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar3 = FUN_039dcbf8(uVar2,*(undefined8 *)(param_2 + 0x10));
      if (uVar3 <= uVar10) break;
      puVar5 = (undefined4 *)FUN_039dcc04(uVar2,uVar10);
      local_1a8 = *puVar5;
      local_1a4 = puVar5[1];
      std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::push_back
                ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_1f0,
                 (ChestAwardContent *)&local_1a8);
      uVar10 = uVar10 + 1;
    }
    std::string::string((string *)&local_1a8,"effects/ChestHardLevel_Chest");
    this_00 = (UIChestAward *)UIChestAward::create(avStack_1f0,(string *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    nop();
    FUN_039dd10c(afStack_178,this_00,*(undefined8 *)(this + 0x128));
    UIChestAward::setEndCallBack(this_00,(function *)afStack_178);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_178);
    uVar1 = operator|(0x10,8);
    FUN_05462470(afStack_178,uVar1);
    __n = aTStack_1d8;
    std::string::string((string *)&local_1a8,"");
    FUN_05462980(afStack_178,(string *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    nop();
    uVar10 = 0;
    while( true ) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar3 = FUN_039dcbf8(uVar2,*(undefined8 *)(param_2 + 0x10));
      if (uVar3 <= uVar10) break;
      piVar4 = (int *)FUN_039dcc04(uVar2,uVar10);
      __n = (TGASecretStore *)0x0;
      ProfileChangeItemAmount(*piVar4,piVar4[1],false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_1a8);
      puVar5 = (undefined4 *)FUN_039dcc04(*(undefined8 *)(param_2 + 8),uVar10);
      uVar2 = FUN_0546065c(auStack_168,*puVar5);
      uVar2 = FUN_054603b8(uVar2,&DAT_05593348);
      lVar6 = FUN_039dcc04(*(undefined8 *)(param_2 + 8),uVar10);
      uVar2 = FUN_0546065c(uVar2,*(undefined4 *)(lVar6 + 4));
      FUN_054603b8(uVar2,&DAT_05594620);
      uVar10 = uVar10 + 1;
    }
    (**(code **)(**(long **)(this + 0x128) + 0x68))(*(long **)(this + 0x128));
    TGASecretStore::TGASecretStore(aTStack_1d8);
    DString::DString((DString *)&local_1a8,*(int *)(*(long *)(this + 0x128) + 0xc));
    pcVar7 = (char *)DString::c_str((DString *)&local_1a8);
    std::string::append((string *)aTStack_1d8,pcVar7,(size_t)__n);
    DString::~DString((DString *)&local_1a8);
    DString::DString((DString *)&local_1a8,*(int *)(*(long *)(this + 0x128) + 8));
    pcVar7 = (char *)DString::c_str((DString *)&local_1a8);
    std::string::append(asStack_1d0,pcVar7,(size_t)__n);
    DString::~DString((DString *)&local_1a8);
    FUN_05462824((string *)&local_1a8,afStack_178);
    FUN_05474278(auStack_1b0,(string *)&local_1a8);
    std::string::~string((string *)&local_1a8);
    pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGASecretStore::TGASecretStore((TGASecretStore *)&local_1a8,aTStack_1d8);
    TGALogMgr::LogTravelLog(pTVar8,2,(string *)&local_1a8);
    DropGroupNode::~DropGroupNode((DropGroupNode *)&local_1a8);
    DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_1d8);
    FUN_054617bc(afStack_178);
    std::vector<ChestAwardContent,std::allocator<ChestAwardContent>>::~vector
              ((vector<ChestAwardContent,std::allocator<ChestAwardContent>> *)avStack_1f0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogBonusUI::ButtonDepress(int) */

void __thiscall TravelLogBonusUI::ButtonDepress(TravelLogBonusUI *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  TGALogMgr *pTVar8;
  TravelLogTask *pTVar9;
  NetworkMgr *pNVar10;
  long *plVar11;
  TGASecretStore *__n;
  ulong uVar12;
  TGASecretStore aTStack_1d8 [8];
  string asStack_1d0 [32];
  undefined1 auStack_1b0 [8];
  string asStack_1a8 [48];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 400) {
    iVar1 = WhichChestToRequest(this);
    if (iVar1 - 1U < 2) {
      pNVar10 = (NetworkMgr *)NetworkMgr::Instance();
      plVar11 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar10);
      (**(code **)(*plVar11 + 0x1d0))(plVar11,iVar1);
    }
    else if (iVar1 == 3) {
      CalIndexByWorldName(this);
      pNVar10 = (NetworkMgr *)NetworkMgr::Instance();
      plVar11 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar10);
      (**(code **)(*plVar11 + 0x1d8))
                (plVar11,*(undefined4 *)(this + 0x1f8),*(undefined4 *)(this + 0x1fc));
    }
    else {
      uVar12 = 0;
      (**(code **)(**(long **)(this + 0x128) + 0x68))(*(long **)(this + 0x128));
      uVar2 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar2);
      __n = aTStack_1d8;
      std::string::string(asStack_1a8,"");
      FUN_05462980(auStack_178,asStack_1a8);
      std::string::~string(asStack_1a8);
      nop();
      TGASecretStore::TGASecretStore(aTStack_1d8);
      DString::DString((DString *)asStack_1a8,*(int *)(*(long *)(this + 0x128) + 0xc));
      pcVar3 = (char *)DString::c_str((DString *)asStack_1a8);
      std::string::append((string *)aTStack_1d8,pcVar3,(size_t)__n);
      DString::~DString((DString *)asStack_1a8);
      DString::DString((DString *)asStack_1a8,*(int *)(*(long *)(this + 0x128) + 8));
      pcVar3 = (char *)DString::c_str((DString *)asStack_1a8);
      std::string::append(asStack_1d0,pcVar3,(size_t)__n);
      DString::~DString((DString *)asStack_1a8);
      while( true ) {
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
        uVar5 = FUN_039dcc0c(*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x30));
        if (uVar5 <= uVar12) break;
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
        piVar6 = (int *)FUN_039dcc18(*(undefined8 *)(lVar4 + 0x28),uVar12);
        if (*piVar6 == 0) {
          pcVar3 = "obtain";
LAB_039e2004:
          uVar7 = FUN_054603b8(auStack_168,pcVar3);
          uVar7 = FUN_054603b8(uVar7,&DAT_05593348);
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
          lVar4 = FUN_039dcc18(*(undefined8 *)(lVar4 + 0x28),uVar12);
          uVar7 = FUN_0546065c(uVar7,*(undefined4 *)(lVar4 + 4));
          FUN_054603b8(uVar7,&DAT_05594620);
        }
        else {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
          piVar6 = (int *)FUN_039dcc18(*(undefined8 *)(lVar4 + 0x28),uVar12);
          pcVar3 = "4013";
          if (*piVar6 == 1) goto LAB_039e2004;
        }
        uVar12 = uVar12 + 1;
      }
      FUN_05462824(asStack_1a8,auStack_178);
      FUN_05474278(auStack_1b0,asStack_1a8);
      std::string::~string(asStack_1a8);
      pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGASecretStore::TGASecretStore((TGASecretStore *)asStack_1a8,aTStack_1d8);
      TGALogMgr::LogTravelLog(pTVar8,2,asStack_1a8);
      DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_1a8);
      pTVar9 = (TravelLogTask *)UISingletonDialog<UITravelLog>::GetSingletonPtr();
      UITravelLog::GiveRewardFinish(pTVar9);
      DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_1d8);
      FUN_054617bc(auStack_178);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to TravelLogBonusUI::ButtonDepress(int) */

void __thiscall TravelLogBonusUI::ButtonDepress(TravelLogBonusUI *this,int param_1)

{
  ButtonDepress(this + -0x120,param_1);
  return;
}


/* TravelLogBonusUI::Update() */

void __thiscall TravelLogBonusUI::Update(TravelLogBonusUI *this)

{
  char cVar1;
  
  PopingWidget::Update((PopingWidget *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1c8));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x1c8));
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x198));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x198));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TravelLogBonusUI::Draw(Sexy::Graphics*) */

void __thiscall TravelLogBonusUI::Draw(TravelLogBonusUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  Image *pIVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  cVar5 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x1c8));
  if (cVar5 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x1c8),param_1);
  }
  PopingWidget::GetMainRect();
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac17e8);
  PopingWidget::DrawPoping9SliceImage((PopingWidget *)this,param_1,aIStack_18,uVar9);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1740);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x154));
  PopingWidget::DrawPopingImage((PopingWidget *)this,param_1,uVar9,aIStack_18);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x178,this + 0x164,uVar9,aIStack_18,5,1);
  if (this[0x130] != (TravelLogBonusUI)0x0) {
    uVar14 = 0;
    while( true ) {
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
      uVar11 = FUN_039dcc0c(*(undefined8 *)(lVar10 + 0x28),*(undefined8 *)(lVar10 + 0x30));
      if (uVar11 <= uVar14) break;
      iVar3 = *(int *)(this + 0x13c);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
      lVar10 = FUN_039dcc0c(*(undefined8 *)(lVar10 + 0x28),*(undefined8 *)(lVar10 + 0x30));
      iVar4 = 0;
      if (lVar10 + 1U != 0) {
        iVar4 = (int)((ulong)(long)iVar3 / (lVar10 + 1U));
      }
      iVar6 = FUN_039dd168(0x46);
      iVar3 = *(int *)(this + 0x14c);
      iVar1 = *(int *)(this + 0x138);
      iVar2 = *(int *)(this + 0x134);
      iVar4 = iVar4 + (int)uVar14 * iVar4;
      iVar7 = FUN_039dd168(0x5a);
      Sexy::Insets::Insets
                ((Insets *)&local_38,(iVar4 + iVar2) - iVar3 / 2,iVar6 + iVar1,iVar7,iVar7);
      iVar3 = *(int *)(this + 0x14c);
      iVar2 = *(int *)(this + 0x134);
      iVar7 = FUN_039dd168(0x5a);
      iVar8 = FUN_039dd168(0x2d);
      Sexy::Insets::Insets(aIStack_28,(iVar4 + iVar2) - iVar3 / 2,iVar7 + iVar6 + iVar1,iVar7,iVar8)
      ;
      pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac18d0);
      Sexy::Graphics::DrawImage(param_1,pIVar12,local_38,local_34,local_30,local_2c);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
      puVar13 = (undefined4 *)FUN_039dcc18(*(undefined8 *)(lVar10 + 0x28),uVar14);
      pIVar12 = (Image *)FUN_039dfec0(*puVar13);
      Sexy::Graphics::DrawImage(param_1,pIVar12,local_38,local_34,local_30,local_2c);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
      lVar10 = FUN_039dcc18(*(undefined8 *)(lVar10 + 0x28),uVar14);
      if (1 < *(int *)(lVar10 + 4)) {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x128) + 0x20));
        lVar10 = FUN_039dcc18(*(undefined8 *)(lVar10 + 0x28),uVar14);
        Sexy::StrFormat("X %d",aIStack_18,(ulong)*(uint *)(lVar10 + 4));
        Sexy::ToWString((string *)aIStack_18);
        std::string::~string((string *)aIStack_18);
        uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_Outline);
        Sexy::Color::Color((Color *)aIStack_18,1);
        WriteWordInRect(param_1,auStack_40,aIStack_28,uVar9,aIStack_18,5,1);
        FUN_05476c50(auStack_40);
      }
      uVar14 = uVar14 + 1;
    }
  }
  cVar5 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x198));
  if (cVar5 != '\0') {
    EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x198),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: UIAnniversaryTreasure


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::GetLayoutName() */

void __thiscall UIAnniversaryTreasure::GetLayoutName(UIAnniversaryTreasure *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIAnniversaryTreasure");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIAnniversaryTreasure::closeDescriptionWidget() */

void __thiscall UIAnniversaryTreasure::closeDescriptionWidget(UIAnniversaryTreasure *this)

{
  if (*(long *)(this + 0x138) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x138))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x138));
    *(undefined8 *)(this + 0x138) = 0;
  }
  return;
}


/* UIAnniversaryTreasure::IsRewardObtained(int) */

bool __thiscall UIAnniversaryTreasure::IsRewardObtained(UIAnniversaryTreasure *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  AnniversaryTreasureVaseWidget *this_00;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(this + 0x148);
  lVar4 = FUN_03a4ce00(uVar7,*(undefined8 *)(this + 0x150));
  bVar2 = lVar4 == 9 && param_1 < 7;
  if (lVar4 == 9 && param_1 < 7) {
    iVar6 = 0;
    lVar4 = 1;
    puVar5 = (undefined8 *)
             FUN_03a4ce0c(uVar7,(long)(*(int *)(&DAT_05752050 + (long)param_1 * 0xc) + -1));
    this_00 = (AnniversaryTreasureVaseWidget *)*puVar5;
    while( true ) {
      if ((this_00 != (AnniversaryTreasureVaseWidget *)0x0) &&
         (cVar3 = AnniversaryTreasureVaseWidget::IsBroken(this_00), cVar3 != '\0')) {
        iVar6 = iVar6 + 1;
      }
      if (lVar4 == 3) break;
      piVar1 = (int *)((long)(&DAT_05752050 + (long)param_1 * 0xc) + lVar4 * 4);
      lVar4 = lVar4 + 1;
      puVar5 = (undefined8 *)FUN_03a4ce0c(*(undefined8 *)(this + 0x148),(long)(*piVar1 + -1));
      this_00 = (AnniversaryTreasureVaseWidget *)*puVar5;
    }
    bVar2 = iVar6 == 3;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::UpdateTimer() */

void __thiscall UIAnniversaryTreasure::UpdateTimer(UIAnniversaryTreasure *this)

{
  UIWidgetText *pUVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar3 = (float)TimeUtil::GetTimeCountdown(3,0x2a3a);
  iVar2 = (int)fVar3;
  FUN_05476574(auStack_20);
  if (iVar2 == 0x7fffffff) {
    TodStringTranslate(L"[UNLIMITED]");
    FUN_054766c8(auStack_20,asStack_10);
    FUN_05476c50(asStack_10);
  }
  else {
    if (iVar2 < 0x15181) {
      if (iVar2 < 0xe11) {
        if (iVar2 < 1) goto LAB_03a4e6dc;
        FUN_05478178(asStack_10,L"[MIN_SEC]",auStack_28);
        TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0x3c);
        FUN_05476c50(asStack_10);
        nop();
        iVar2 = iVar2 % 0x3c;
      }
      else {
        FUN_05478178(asStack_10,L"[HOUR_MIN]",auStack_28);
        TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0xe10);
        FUN_05476c50(asStack_10);
        nop();
        iVar2 = (iVar2 % 0xe10) / 0x3c;
      }
    }
    else {
      FUN_05478178(asStack_10,L"[DAY_HOUR]",auStack_28);
      TodReplaceNumberString((wstring *)asStack_10,L"{NUM1}",iVar2 / 0x15180);
      FUN_05476c50(asStack_10);
      nop();
      iVar2 = (iVar2 % 0x15180) / 0xe10;
    }
    TodReplaceNumberString(awStack_18,L"{NUM2}",iVar2);
    FUN_054766c8(auStack_20,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
  }
LAB_03a4e6dc:
  if (pUVar1 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar1,auStack_20);
  }
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::lockButtons() */

void __thiscall UIAnniversaryTreasure::lockButtons(UIAnniversaryTreasure *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Buy");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,1);
  }
  std::string::string(asStack_10,"UIButton_Close");
  UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Question");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::unlockButtons() */

void __thiscall UIAnniversaryTreasure::unlockButtons(UIAnniversaryTreasure *this)

{
  PVZ2UIButton *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_Buy");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,0);
  }
  std::string::string(asStack_10,"UIButton_Close");
  UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Question");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pPVar1 != (PVZ2UIButton *)0x0) {
    (**(code **)(*(long *)pPVar1 + 0x188))(pPVar1,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::showDescriptionWidget() */

void __thiscall UIAnniversaryTreasure::showDescriptionWidget(UIAnniversaryTreasure *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x138) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x138) = this_00;
    TodStringTranslate(L"[ANNIVERSART_TREASURE_DESCRIPTION]");
    TodStringTranslate(L"[ANNIVERSART_TREASURE_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x138);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UIAnniversaryTreasure,void(UIAnniversaryTreasure::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x138));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x138));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::UIAnniversaryTreasure() */

void __thiscall UIAnniversaryTreasure::UIAnniversaryTreasure(UIAnniversaryTreasure *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIAnniversaryTreasure>::UISingletonDialog
            ((UISingletonDialog<UIAnniversaryTreasure> *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06709350;
  *(undefined **)(this + 0xd8) = &DAT_067096a0;
  *(undefined8 *)(this + 0x140) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnResultClosed);
  Sexy::Delegate0::Delegate0<UIAnniversaryTreasure,void(UIAnniversaryTreasure::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ResultClosed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIAnniversaryTreasure,void(UIAnniversaryTreasure::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAnniversaryTreasure::~UIAnniversaryTreasure() */

void __thiscall UIAnniversaryTreasure::~UIAnniversaryTreasure(UIAnniversaryTreasure *this)

{
  *(undefined **)(this + 0xd8) = &DAT_067096a0;
  *(undefined ***)this = &PTR_GetClass_06709350;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x1a8));
  std::vector<std::pair<int,std::pair<int,int>>,std::allocator<std::pair<int,std::pair<int,int>>>>::
  ~vector((vector<std::pair<int,std::pair<int,int>>,std::allocator<std::pair<int,std::pair<int,int>>>>
           *)(this + 400));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x178));
  std::vector<AnniversaryTreasureRewardWidget*,std::allocator<AnniversaryTreasureRewardWidget*>>::
  ~vector((vector<AnniversaryTreasureRewardWidget*,std::allocator<AnniversaryTreasureRewardWidget*>>
           *)(this + 0x160));
  std::vector<AnniversaryTreasureVaseWidget*,std::allocator<AnniversaryTreasureVaseWidget*>>::
  ~vector((vector<AnniversaryTreasureVaseWidget*,std::allocator<AnniversaryTreasureVaseWidget*>> *)
          (this + 0x148));
  UISingletonDialog<UIAnniversaryTreasure>::~UISingletonDialog
            ((UISingletonDialog<UIAnniversaryTreasure> *)this);
  return;
}


/* UIAnniversaryTreasure::~UIAnniversaryTreasure() */

void __thiscall UIAnniversaryTreasure::~UIAnniversaryTreasure(UIAnniversaryTreasure *this)

{
  ~UIAnniversaryTreasure(this);
  AK::FreeHook(this);
  return;
}


/* UIAnniversaryTreasure::showJackPotWidget() */

void __thiscall UIAnniversaryTreasure::showJackPotWidget(UIAnniversaryTreasure *this)

{
  char cVar1;
  undefined4 uVar2;
  AnniversaryTreasureJackPotWidget *this_00;
  pair *ppVar3;
  undefined8 uVar4;
  
  if ((*(long *)(this + 0x140) == 0) &&
     (cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (this + 0x1a8)), cVar1 == '\0')) {
    this_00 = ::operator_new(0x1a8);
    AnniversaryTreasureJackPotWidget::AnniversaryTreasureJackPotWidget(this_00);
    *(AnniversaryTreasureJackPotWidget **)(this + 0x140) = this_00;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    ppVar3 = (pair *)FUN_03a4ce20(*(undefined8 *)(this + 0x1a8),0);
    AnniversaryTreasureJackPotWidget::InitBonus
              (*(AnniversaryTreasureJackPotWidget **)(this + 0x140),ppVar3);
    uVar4 = operator|(0x10,0x20);
    uVar4 = operator|(uVar4,0x1000);
    uVar2 = operator|(uVar4,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,*(undefined8 *)(this + 0x140),uVar2);
    (**(code **)(**(long **)(this + 0x140) + 0x310))(*(long **)(this + 0x140));
  }
  return;
}


/* UIAnniversaryTreasure::OnResultClosed() */

void __thiscall UIAnniversaryTreasure::OnResultClosed(UIAnniversaryTreasure *this)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  cVar2 = std::
          vector<std::pair<int,std::pair<int,int>>,std::allocator<std::pair<int,std::pair<int,int>>>>
          ::empty((vector<std::pair<int,std::pair<int,int>>,std::allocator<std::pair<int,std::pair<int,int>>>>
                   *)(this + 400));
  if (cVar2 != '\0') {
    cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (this + 0x1a8));
    if (cVar2 != '\0') {
      unlockButtons(this);
      return;
    }
    showJackPotWidget(this);
    return;
  }
  piVar3 = (int *)std::
                  vector<std::pair<int,std::pair<int,int>>,std::allocator<std::pair<int,std::pair<int,int>>>>
                  ::back((vector<std::pair<int,std::pair<int,int>>,std::allocator<std::pair<int,std::pair<int,int>>>>
                          *)(this + 400));
  uVar6 = *(undefined8 *)(this + 0x160);
  iVar1 = *piVar3;
  uVar4 = FUN_03a4ce28(uVar6,*(undefined8 *)(this + 0x168));
  if ((ulong)(long)iVar1 < uVar4) {
    puVar5 = (undefined8 *)FUN_03a4ce34(uVar6,(long)iVar1);
    if ((AnniversaryTreasureRewardWidget *)*puVar5 != (AnniversaryTreasureRewardWidget *)0x0) {
      AnniversaryTreasureRewardWidget::ShowBonus((AnniversaryTreasureRewardWidget *)*puVar5);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::VaseAnimFinish() */

void __thiscall UIAnniversaryTreasure::VaseAnimFinish(UIAnniversaryTreasure *this)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  UIWidgetText *pUVar4;
  ulong uVar5;
  undefined8 uVar6;
  wstring awStack_60 [8];
  string asStack_58 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x178);
    uVar3 = FUN_03a4ce14(uVar6,*(undefined8 *)(this + 0x180));
    if (uVar3 <= uVar5) break;
    piVar1 = (int *)FUN_03a4ce20(uVar6,uVar5);
    piVar1 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)amStack_38,piVar1);
    piVar2 = (int *)FUN_03a4ce20(*(undefined8 *)(this + 0x178),uVar5);
    *piVar1 = piVar2[1];
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_50,piVar2);
    uVar5 = uVar5 + 1;
  }
  UIRedPacketResult::create((map *)amStack_38,(vector *)avStack_50,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x178));
  std::string::string(asStack_58,"UIText_Cost");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (pUVar4 != (UIWidgetText *)0x0) {
    TodStringTranslate(L"[ANNIVERSARY_TREASURE_BUY]");
    TodReplaceNumberString(awStack_60,L"{NUM}",1);
    PuzzleTip::SetTip(pUVar4,asStack_58);
    FUN_05476c50(asStack_58);
    FUN_05476c50(awStack_60);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::RewardAnimFinish() */

void __thiscall UIAnniversaryTreasure::RewardAnimFinish(UIAnniversaryTreasure *this)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 local_60;
  undefined4 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  puVar1 = (undefined8 *)
           std::
           vector<std::pair<int,std::pair<int,int>>,std::allocator<std::pair<int,std::pair<int,int>>>>
           ::back((vector<std::pair<int,std::pair<int,int>>,std::allocator<std::pair<int,std::pair<int,int>>>>
                   *)(this + 400));
  local_60 = *puVar1;
  local_58 = *(undefined4 *)(puVar1 + 1);
  puVar2 = (undefined4 *)
           std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                     ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                      amStack_38,(int *)((long)&local_60 + 4));
  *puVar2 = local_58;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_50,(int *)((long)&local_60 + 4));
  UIRedPacketResult::create((map *)amStack_38,(vector *)avStack_50,true);
  FUN_03a4d1e4(this + 0x198);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::JackPotAnimFinish() */

void __thiscall UIAnniversaryTreasure::JackPotAnimFinish(UIAnniversaryTreasure *this)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIButton_Close");
  UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_20);
  std::string::~string(asStack_20);
  nop();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_30[1] = 1;
  local_30[0] = L'⨺';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20,
             (pair *)apStack_28);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)asStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::GetCurrentGemCost() */

void __thiscall UIAnniversaryTreasure::GetCurrentGemCost(UIAnniversaryTreasure *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  AnniversaryTreasureData aAStack_88 [96];
  undefined8 local_28;
  undefined8 local_20;
  long local_8;
  
  uVar6 = 200;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03a4cda4(local_100);
  if ((cVar1 != '\0') && (local_f0 != '\0')) {
    AnniversaryTreasureData::AnniversaryTreasureData(aAStack_88);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)aAStack_88);
    if (cVar1 != '\0') {
      uVar8 = *(undefined8 *)(this + 0x148);
      iVar2 = 0;
      uVar3 = FUN_03a4ce00(uVar8,*(undefined8 *)(this + 0x150));
      for (uVar7 = 0; uVar7 < uVar3; uVar7 = uVar7 + 1) {
        puVar4 = (undefined8 *)FUN_03a4ce0c(uVar8,uVar7);
        if ((AnniversaryTreasureVaseWidget *)*puVar4 != (AnniversaryTreasureVaseWidget *)0x0) {
          cVar1 = AnniversaryTreasureVaseWidget::IsBroken((AnniversaryTreasureVaseWidget *)*puVar4);
          uVar8 = *(undefined8 *)(this + 0x148);
          if (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
          }
          uVar3 = FUN_03a4ce00(uVar8,*(undefined8 *)(this + 0x150));
        }
      }
      uVar7 = FUN_03a4cdb0(local_28,local_20);
      if ((ulong)(long)iVar2 < uVar7) {
        puVar5 = (undefined4 *)FUN_03a4cdbc(local_28,(long)iVar2);
        uVar6 = *puVar5;
      }
      else {
        puVar5 = (undefined4 *)FUN_03a4cdbc(local_28,uVar7 - 1);
        uVar6 = *puVar5;
      }
    }
    AnniversaryTreasureData::~AnniversaryTreasureData(aAStack_88);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::ButtonDepress(int) */

void __thiscall UIAnniversaryTreasure::ButtonDepress(UIAnniversaryTreasure *this,int param_1)

{
  int iVar1;
  UIMessageBox *this_00;
  Image *pIVar2;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<UIAnniversaryTreasure>::CloseDialog();
  }
  else if (param_1 == 0x6f) {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_00,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      FUN_05478178(awStack_50,L"[ANNIVERSARY_TREASURE_CONFIRM_TEXT]",auStack_68);
      iVar1 = GetCurrentGemCost(this);
      TodReplaceNumberString(awStack_50,L"{NUMBER}",iVar1);
      FUN_05476c50(awStack_50);
      nop();
      UIMessageBox::SetMessage(this_00,awStack_58,awStack_60);
      std::string::string((string *)awStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage((string *)awStack_50,false);
      UIMessageBox::SetBackground(this_00,pIVar2);
      std::string::~string((string *)awStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,BuyConfirm);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UIAnniversaryTreasure,void(UIAnniversaryTreasure::*)(UIMessageBox*,int)>
                (aDStack_38,awStack_50);
      UIMessageBox::SetCallback(this_00,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
    }
  }
  else if (param_1 == 0x2a) {
    showDescriptionWidget(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIAnniversaryTreasure::ButtonDepress(int) */

void __thiscall UIAnniversaryTreasure::ButtonDepress(UIAnniversaryTreasure *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::BuyConfirm(UIMessageBox*, int) */

void __thiscall
UIAnniversaryTreasure::BuyConfirm(UIAnniversaryTreasure *this,UIMessageBox *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *this_02;
  Image *pIVar3;
  long lVar4;
  DNetwork *this_03;
  wstring awStack_d48 [8];
  wstring awStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1992];
  string asStack_520 [1304];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = PlayerInfo::GetNumGems(this_01,false);
    iVar2 = GetCurrentGemCost(this);
    if (iVar1 < iVar2) {
      this_02 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_02 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_02,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[GEM_NOT_ENOUGH_DIALOG_TITLE]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_02,awStack_d40,awStack_d48);
        std::string::string(asStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar3 = (Image *)StringHelper::ToImage(asStack_ce8,false);
        UIMessageBox::SetBackground(this_02,pIVar3);
        std::string::~string(asStack_ce8);
        nop();
        lVar4 = UIMessageBox::GetButtonCancel(this_02);
        thunk_FUN_05477b9c(lVar4 + 0xd8,amStack_d18);
        FUN_05476c50(amStack_d18);
        FUN_05476c50(awStack_d40);
        FUN_05476c50(awStack_d48);
      }
    }
    else {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_d18);
      lockButtons(this);
      this_03 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_03a4d7d8(afStack_d38,this);
      std::string::string((string *)awStack_d40,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_03,asStack_520,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
                 (string *)awStack_d40,0);
      std::string::~string((string *)awStack_d40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
      _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_d18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::InitView(bool) */

void UIAnniversaryTreasure::InitView(bool param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  UIAnniversaryTreasure *this;
  Widget *pWVar6;
  AnniversaryTreasureVaseWidget *pAVar7;
  int *piVar8;
  ulong uVar9;
  AnniversaryTreasureRewardWidget *this_00;
  undefined8 *puVar10;
  AnniversaryTreasureJackPotImage *this_01;
  wchar_t *pwVar11;
  UIWidgetText *pUVar12;
  UIWidgetImage *pUVar13;
  PVZ2UIButton *this_02;
  ulong uVar14;
  code *pcVar15;
  AnniversaryTreasureVaseWidget *local_120;
  string asStack_118 [16];
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  AnniversaryTreasureData aAStack_88 [24];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  int local_10;
  long local_8;
  
  this = (UIAnniversaryTreasure *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  cVar3 = FUN_03a4cda4(local_100);
  if ((cVar3 != '\0') && (local_f0 != '\0')) {
    AnniversaryTreasureData::AnniversaryTreasureData(aAStack_88);
    cVar3 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)aAStack_88);
    if (cVar3 != '\0') {
      *(int *)(this + 0x134) = local_10;
      unlockButtons(this);
      std::string::string(asStack_118,"Widget_Vase");
      pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_118);
      std::string::~string(asStack_118);
      nop();
      (**(code **)(*(long *)pWVar6 + 0x80))(pWVar6,1,1);
      std::vector<AnniversaryTreasureVaseWidget*,std::allocator<AnniversaryTreasureVaseWidget*>>::
      clear((vector<AnniversaryTreasureVaseWidget*,std::allocator<AnniversaryTreasureVaseWidget*>> *
            )(this + 0x148));
      iVar5 = *(int *)(pWVar6 + 0x50);
      iVar1 = *(int *)(pWVar6 + 0x54);
      uVar14 = 0;
      while( true ) {
        uVar9 = FUN_03a4cdb0(local_70,local_68);
        if (uVar9 <= uVar14) break;
        iVar2 = (int)(uVar14 / 3);
        Sexy::Insets::Insets
                  ((Insets *)asStack_118,(iVar5 / 3) * ((int)uVar14 + iVar2 * -3),
                   (iVar1 / 3) * iVar2,iVar5 / 3,iVar1 / 3);
        pAVar7 = ::operator_new(0x110);
        AnniversaryTreasureVaseWidget::AnniversaryTreasureVaseWidget(pAVar7);
        local_120 = pAVar7;
        (**(code **)(*(long *)pAVar7 + 0x1a0))(pAVar7,asStack_118);
        pAVar7 = local_120;
        piVar8 = (int *)FUN_03a4cdbc(local_70,uVar14);
        AnniversaryTreasureVaseWidget::Init(pAVar7,(int)(uVar14 + 1),*piVar8 != 0);
        (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,local_120);
        std::vector<AnniversaryTreasureVaseWidget*,std::allocator<AnniversaryTreasureVaseWidget*>>::
        push_back((vector<AnniversaryTreasureVaseWidget*,std::allocator<AnniversaryTreasureVaseWidget*>>
                   *)(this + 0x148),&local_120);
        uVar14 = uVar14 + 1;
      }
      iVar5 = 0;
      std::vector<AnniversaryTreasureRewardWidget*,std::allocator<AnniversaryTreasureRewardWidget*>>
      ::clear((vector<AnniversaryTreasureRewardWidget*,std::allocator<AnniversaryTreasureRewardWidget*>>
               *)(this + 0x160));
      uVar14 = 0;
      while (uVar9 = FUN_03a4cdc4(local_58,local_50), uVar14 < uVar9) {
        uVar9 = uVar14 + 1;
        Sexy::StrFormat("UIImage_R%d",asStack_118,uVar9);
        pUVar13 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_118);
        std::string::~string(asStack_118);
        if (pUVar13 != (UIWidgetImage *)0x0) {
          (**(code **)(*(long *)pUVar13 + 0x80))(pUVar13,1,1);
          Sexy::Insets::Insets
                    ((Insets *)asStack_118,0,0,*(int *)(pUVar13 + 0x50),*(int *)(pUVar13 + 0x54));
          this_00 = ::operator_new(0x140);
          AnniversaryTreasureRewardWidget::AnniversaryTreasureRewardWidget(this_00);
          local_120 = (AnniversaryTreasureVaseWidget *)this_00;
          puVar10 = (undefined8 *)FUN_03a4cdf4(local_58,uVar14);
          AnniversaryTreasureRewardWidget::Init
                    (this_00,uVar9 & 0xffffffff,*puVar10,*(undefined4 *)(puVar10 + 1));
          pAVar7 = local_120;
          bVar4 = (bool)IsRewardObtained(this,iVar5);
          AnniversaryTreasureRewardWidget::SetObtain
                    ((AnniversaryTreasureRewardWidget *)pAVar7,bVar4);
          (**(code **)(*(long *)local_120 + 0x1a0))(local_120,asStack_118);
          (**(code **)(*(long *)pUVar13 + 0x60))(pUVar13,local_120);
          std::
          vector<AnniversaryTreasureRewardWidget*,std::allocator<AnniversaryTreasureRewardWidget*>>
          ::push_back((vector<AnniversaryTreasureRewardWidget*,std::allocator<AnniversaryTreasureRewardWidget*>>
                       *)(this + 0x160),(AnniversaryTreasureRewardWidget **)&local_120);
        }
        iVar5 = iVar5 + 1;
        uVar14 = uVar9;
      }
      if (local_10 == 0) {
        std::string::string(asStack_118,"UIImage_Gem");
        pUVar13 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_118);
        std::string::~string(asStack_118);
        nop();
        if (pUVar13 != (UIWidgetImage *)0x0) {
          (**(code **)(*(long *)pUVar13 + 0x158))(pUVar13,0);
        }
        std::string::string(asStack_118,"UIText_Cost");
        pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_118);
        std::string::~string(asStack_118);
        nop();
        if (pUVar12 != (UIWidgetText *)0x0) {
          (**(code **)(*(long *)pUVar12 + 0x158))(pUVar12,0);
        }
        std::string::string(asStack_118,"UIText_Buy2");
        pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_118);
        std::string::~string(asStack_118);
        nop();
        if (pUVar12 != (UIWidgetText *)0x0) {
          (**(code **)(*(long *)pUVar12 + 0x158))(pUVar12,0);
        }
        std::string::string(asStack_118,"UIButton_Buy");
        this_02 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_118);
        std::string::~string(asStack_118);
        nop();
        if (this_02 != (PVZ2UIButton *)0x0) {
          TodStringTranslate(L"[ANNIVERSARY_TREASURE_BUY_FINISH]");
          PVZ2UIButton::SetLabelText(this_02,(wstring *)asStack_118);
          FUN_05476c50(asStack_118);
          (**(code **)(*(long *)this_02 + 0x188))(this_02,1);
        }
      }
      else {
        std::string::string(asStack_118,"Widget_JackPot");
        pWVar6 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_118);
        std::string::~string(asStack_118);
        nop();
        if (pWVar6 != (Widget *)0x0) {
          (**(code **)(*(long *)pWVar6 + 0x80))(pWVar6,1,1);
          this_01 = ::operator_new(0xf0);
          AnniversaryTreasureJackPotImage::AnniversaryTreasureJackPotImage(this_01);
          pcVar15 = *(code **)(*(long *)this_01 + 0x1a0);
          Sexy::Insets::Insets
                    ((Insets *)asStack_118,0,0,*(int *)(pWVar6 + 0x50),*(int *)(pWVar6 + 0x54));
          (*pcVar15)(this_01,asStack_118);
          pwVar11 = (wchar_t *)FUN_03a4cdf4(local_40,0);
          std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                    ((pair<wchar_t_const,wchar_t> *)asStack_118,pwVar11,pwVar11 + 1);
          AnniversaryTreasureJackPotImage::InitBonus(this_01,(pair *)asStack_118);
          (**(code **)(*(long *)pWVar6 + 0x60))(pWVar6,this_01);
        }
      }
      std::string::string(asStack_118,"UIText_Cost");
      pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_118);
      std::string::~string(asStack_118);
      nop();
      if (pUVar12 != (UIWidgetText *)0x0) {
        TodStringTranslate(L"[ANNIVERSARY_TREASURE_BUY]");
        TodReplaceNumberString((wstring *)&local_120,L"{NUM}",1);
        PuzzleTip::SetTip(pUVar12,asStack_118);
        FUN_05476c50(asStack_118);
        FUN_05476c50((wstring *)&local_120);
      }
      std::string::string(asStack_118,"UIText_ResetInfo");
      pUVar12 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_118);
      std::string::~string(asStack_118);
      nop();
      if (pUVar12 != (UIWidgetText *)0x0) {
        TodStringTranslate(L"[ANNIVERSARY_TREASURE_LIMIT]");
        TodReplaceNumberString((wstring *)&local_120,L"{NUM}",local_10);
        PuzzleTip::SetTip(pUVar12,asStack_118);
        FUN_05476c50(asStack_118);
        FUN_05476c50((wstring *)&local_120);
      }
    }
    AnniversaryTreasureData::~AnniversaryTreasureData(aAStack_88);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::OnCreate() */

void __thiscall UIAnniversaryTreasure::OnCreate(UIAnniversaryTreasure *this)

{
  UIWidgetBackground *pUVar1;
  UIWidgetImage *pUVar2;
  UIWidgetText *pUVar3;
  TGALogMgr *pTVar4;
  TGAAnniversaryTreasureData *__n;
  TGAAnniversaryTreasureData aTStack_a8 [80];
  string asStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_58,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  std::string::string(asStack_58,"UIImage_Gem");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (pUVar2 != (UIWidgetImage *)0x0) {
    pUVar2[0x6d] = (UIWidgetImage)0x0;
  }
  std::string::string(asStack_58,"UIText_Cost");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (pUVar3 != (UIWidgetText *)0x0) {
    pUVar3[0x6d] = (UIWidgetText)0x0;
  }
  __n = aTStack_a8;
  std::string::string(asStack_58,"UIText_Buy2");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_58);
  std::string::~string(asStack_58);
  nop();
  if (pUVar3 != (UIWidgetText *)0x0) {
    pUVar3[0x6d] = (UIWidgetText)0x0;
  }
  TGAAnniversaryTreasureData::TGAAnniversaryTreasureData(aTStack_a8);
  std::string::append((string *)aTStack_a8,"1",(size_t)__n);
  pTVar4 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
            ((TGAAnniversaryTreasureData *)asStack_58,aTStack_a8);
  TGALogMgr::LogAnniversaryTreasure(pTVar4,asStack_58);
  TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)asStack_58);
  InitView(SUB81(this,0));
  TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData(aTStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnniversaryTreasure::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UIAnniversaryTreasure::onNotifyRefreshActivityList
          (UIAnniversaryTreasure *this,bool param_1,set *param_2)

{
  bool bVar1;
  TGALogMgr *pTVar2;
  int local_ac;
  undefined8 local_a8 [10];
  undefined8 local_58 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_ac = 0x2a3a;
    local_a8[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                            ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_ac);
    local_58[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)local_a8,(rbtree_iterator *)local_58);
    if (bVar1) {
      TGAAnniversaryTreasureData::TGAAnniversaryTreasureData((TGAAnniversaryTreasureData *)local_a8)
      ;
      std::string::append((string *)local_a8,"4",(size_t)param_2);
      pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGAAnniversaryTreasureData::TGAAnniversaryTreasureData
                ((TGAAnniversaryTreasureData *)local_58,(TGAAnniversaryTreasureData *)local_a8);
      TGALogMgr::LogAnniversaryTreasure(pTVar2,(TGAAnniversaryTreasureData *)local_58);
      TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
                ((TGAAnniversaryTreasureData *)local_58);
      InitView(SUB81(this,0));
      TGAAnniversaryTreasureData::~TGAAnniversaryTreasureData
                ((TGAAnniversaryTreasureData *)local_a8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIAnniversaryTreasure::Update() */

void __thiscall UIAnniversaryTreasure::Update(UIAnniversaryTreasure *this)

{
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  UpdateTimer(this);
  return;
}


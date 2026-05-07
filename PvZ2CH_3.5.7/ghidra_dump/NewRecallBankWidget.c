// Class: NewRecallBankWidget


/* NewRecallBankWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void NewRecallBankWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to NewRecallBankWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
NewRecallBankWidget::ScrollTargetReached(NewRecallBankWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* NewRecallBankWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void NewRecallBankWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to NewRecallBankWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
NewRecallBankWidget::ScrollTargetInterrupted(NewRecallBankWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* NewRecallBankWidget::ObtainedReward() */

void __thiscall NewRecallBankWidget::ObtainedReward(NewRecallBankWidget *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x150);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  return;
}


/* NewRecallBankWidget::NewRecallBankWidget() */

void __thiscall NewRecallBankWidget::NewRecallBankWidget(NewRecallBankWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  this[0xe8] = (NewRecallBankWidget)0x1;
  *(undefined ***)this = &PTR_GetClass_0670b790;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0670bac8;
  *(undefined ***)(this + 0xe0) = &PTR__NewRecallBankWidget_0670bb10;
  *(undefined4 *)(this + 0xec) = 0;
  FUN_05476574(this + 0xf0);
  NewRecallBankData::NewRecallBankData((NewRecallBankData *)(this + 0xf8));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  return;
}


/* NewRecallBankWidget::~NewRecallBankWidget() */

void __thiscall NewRecallBankWidget::~NewRecallBankWidget(NewRecallBankWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0670b790;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0670bac8;
  *(undefined ***)(this + 0xe0) = &PTR__NewRecallBankWidget_0670bb10;
  NewRecallBankData::~NewRecallBankData((NewRecallBankData *)(this + 0xf8));
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to NewRecallBankWidget::~NewRecallBankWidget() */

void __thiscall NewRecallBankWidget::~NewRecallBankWidget(NewRecallBankWidget *this)

{
  ~NewRecallBankWidget(this + -0xe0);
  return;
}


/* NewRecallBankWidget::~NewRecallBankWidget() */

void __thiscall NewRecallBankWidget::~NewRecallBankWidget(NewRecallBankWidget *this)

{
  ~NewRecallBankWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewRecallBankWidget::~NewRecallBankWidget() */

void __thiscall NewRecallBankWidget::~NewRecallBankWidget(NewRecallBankWidget *this)

{
  ~NewRecallBankWidget(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBankWidget::determineSelect(UIMessageBox*, int) */

void __thiscall
NewRecallBankWidget::determineSelect(NewRecallBankWidget *this,UIMessageBox *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  UICustomVoting *this_00;
  NameMapperBase *pNVar3;
  undefined8 uVar4;
  DNetwork *this_01;
  int local_d4c;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1984];
  string asStack_528 [1312];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    local_d4c = 0;
    this_00 = (UICustomVoting *)UISingletonDialog<UICommonItemSelect>::GetSingletonPtr();
    if (this_00 != (UICustomVoting *)0x0) {
      local_d4c = UICustomVoting::GetTickets(this_00);
      UISingletonDialog<UICommonItemSelect>::CloseDialog();
      pNVar3 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar3,local_d4c);
      if (cVar1 != '\0') {
        pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        iVar2 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        local_d4c = NameMapperBase::GetIdForName(pNVar3,asStack_ce8);
        std::string::~string(asStack_ce8);
      }
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_d18);
      std::string::string(asStack_d40,"ai");
      uVar4 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
      local_d48[0] = 0x2a29;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
      FUN_05474278(uVar4,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_d40);
      nop();
      std::string::string(asStack_d40,"oi");
      uVar4 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_d40);
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d4c);
      FUN_05474278(uVar4,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_d40);
      nop();
      this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_03a55464(afStack_d38,this,local_d4c);
      std::string::string(asStack_d40,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_01,asStack_528,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
                 asStack_d40,0);
      std::string::~string(asStack_d40);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
      _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_d18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBankWidget::ButtonDepress(int) */

void __thiscall NewRecallBankWidget::ButtonDepress(NewRecallBankWidget *this,int param_1)

{
  int iVar1;
  UICommonItemSelect *this_00;
  NameMapperBase *this_01;
  ulong uVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  PurchaseBroker *this_03;
  ulong uVar3;
  string asStack_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1e) {
    this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = (PurchaseBroker *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_02);
    std::string::string((string *)avStack_40,"com.popcap.ios.chs.PVZ2.NewRecallBank18");
    PurchaseBroker::RequestPayment(this_03,(string *)avStack_40,0);
    std::string::~string((string *)avStack_40);
    nop();
  }
  else if (param_1 == 0x28) {
    UISingletonDialog<UICommonItemSelect>::ShowDialog();
    this_00 = (UICommonItemSelect *)UISingletonDialog<UICommonItemSelect>::GetSingletonPtr();
    if (this_00 != (UICommonItemSelect *)0x0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
      for (uVar3 = 0;
          uVar2 = FUN_03a53f64(*(undefined8 *)(this + 0x128),*(undefined8 *)(this + 0x130)),
          uVar3 < uVar2; uVar3 = uVar3 + 1) {
        Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_50);
        this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        iVar1 = PlantChipNameMapperServerID::GetInstance();
        FUN_03a5415c(*(undefined8 *)(this + 0x128),uVar3);
        NameMapperBase::GetNameForId(iVar1);
        local_50 = NameMapperBase::GetIdForName(this_01,asStack_58);
        std::string::~string(asStack_58);
        local_4c = 1;
        std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
                  ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_40,
                   (S2C_BonusInfo *)&local_50);
      }
      (**(code **)(*(long *)this_00 + 0x350))(this_00,avStack_40);
      std::string::string((string *)&local_50,"[RECALL_OFFER_BANK_SELECT_TITLE]");
      UICommonItemSelect::SetTitle(this_00,(string *)&local_50);
      std::string::~string((string *)&local_50);
      nop();
      std::string::string((string *)&local_50,"[RECALL_OFFER_BANK_SELECT_DESCRIPTION]");
      UICommonItemSelect::SetDescription(this_00,(string *)&local_50);
      std::string::~string((string *)&local_50);
      nop();
      FUN_03a5551c(afStack_28,this);
      UICommonItemSelect::registerSelectRecall(this_00,(function *)afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
                ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)avStack_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewRecallBankWidget::ButtonDepress(int) */

void __thiscall NewRecallBankWidget::ButtonDepress(NewRecallBankWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBankWidget::init(NewRecallBankData const&) */

void __thiscall NewRecallBankWidget::init(NewRecallBankWidget *this,NewRecallBankData *param_1)

{
  wstring *pwVar1;
  int iVar2;
  NewRecallBankData NVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  undefined8 *puVar13;
  NewRecallBankLine *this_02;
  NewRecallBankDayReward *pNVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  NameMapperBase *this_03;
  PVZ2UIButton *pPVar18;
  int iVar19;
  string *extraout_x1;
  code *pcVar20;
  undefined8 uVar21;
  ulong uVar22;
  Sexy aSStack_90 [8];
  string asStack_88 [8];
  wstring awStack_80 [8];
  string asStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewRecallBankData::operator=((NewRecallBankData *)(this + 0xf8),param_1);
  uVar22 = 0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  uVar5 = FUN_03a55578(100);
  iVar6 = FUN_03a55578(0xbe);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,uVar5,*(undefined4 *)(this + 0x50),*(int *)(this + 0x54) - iVar6);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar7 = FUN_03a55578(10);
  iVar8 = FUN_03a55578(0);
  iVar6 = FUN_03a55578(5);
  iVar9 = *(int *)(this + 0x50);
  iVar19 = (int)((float)((*(int *)(this_00 + 0x54) - iVar8) + iVar6 * -3) * 0.4);
  iVar6 = iVar6 + iVar19;
  iVar11 = iVar8;
  do {
    uVar21 = *(undefined8 *)(param_1 + 0x18);
    uVar15 = FUN_03a541f4(uVar21,*(undefined8 *)(param_1 + 0x20));
    if (uVar15 <= uVar22) {
      pcVar20 = *(code **)(*(long *)this_00 + 0x60);
      *(int *)(this_01 + 0x54) = iVar8 * 2 + iVar6 * (int)uVar15;
      (*pcVar20)(this_00,this_01);
      FUN_05478178(asStack_78,&DAT_056f11a8,awStack_80);
      Sexy::Color::Color((Color *)aIStack_40,1);
      pPVar18 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar18,0x1e,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,
                 (Color *)aIStack_40);
      FUN_05476c50(asStack_78);
      nop();
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ac5970,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ac5d10,3);
      PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aIStack_40);
      TodStringTranslate(L"[RECALL_OFFER_BANK_BUY]");
      PVZ2UIButton::SetLabelText(pPVar18,(wstring *)aIStack_40);
      FUN_05476c50(aIStack_40);
      pcVar20 = *(code **)(*(long *)pPVar18 + 800);
      uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
      (*pcVar20)(pPVar18,uVar21);
      iVar9 = FUN_03a55578(0xb4);
      iVar6 = *(int *)(this + 0x50);
      iVar7 = FUN_03a55578(0x3c);
      iVar11 = *(int *)(this + 0x54);
      uVar5 = FUN_03a55578(0xa0);
      uVar10 = FUN_03a55578(0x32);
      (**(code **)(*(long *)pPVar18 + 0x198))(pPVar18,iVar6 - iVar9,iVar11 - iVar7,uVar5,uVar10);
      NVar3 = param_1[0x4c];
      *(PVZ2UIButton **)(this + 0x148) = pPVar18;
      if (NVar3 != (NewRecallBankData)0x0) {
        (**(code **)(*(long *)pPVar18 + 0x188))(pPVar18,1);
        pPVar18 = *(PVZ2UIButton **)(this + 0x148);
      }
      (**(code **)(*(long *)this + 0x60))(this,pPVar18);
      FUN_05478178(asStack_78,&DAT_056f11a8,awStack_80);
      Sexy::Color::Color((Color *)aIStack_40,1);
      pPVar18 = ::operator_new(0x300);
      PVZ2UIButton::PVZ2UIButton
                (pPVar18,0x28,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,
                 (Color *)aIStack_40);
      FUN_05476c50(asStack_78);
      nop();
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ac5970,3);
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ac5d10,3);
      PVZ2UIButton::SetDialogStates(pPVar18,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)aIStack_40);
      TodStringTranslate(L"[SELECTHEADSHOT_1]");
      PVZ2UIButton::SetLabelText(pPVar18,(wstring *)aIStack_40);
      FUN_05476c50(aIStack_40);
      pcVar20 = *(code **)(*(long *)pPVar18 + 800);
      uVar21 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
      (*pcVar20)(pPVar18,uVar21);
      uVar5 = FUN_03a55578(0xdc);
      iVar11 = FUN_03a55578(0x37);
      iVar6 = *(int *)(this + 0x54);
      uVar10 = FUN_03a55578(0x50);
      uVar12 = FUN_03a55578(0x28);
      (**(code **)(*(long *)pPVar18 + 0x198))(pPVar18,uVar5,iVar6 - iVar11,uVar10,uVar12);
      *(PVZ2UIButton **)(this + 0x150) = pPVar18;
      if (this[0xe8] == (NewRecallBankWidget)0x0) {
        (**(code **)(*(long *)pPVar18 + 0x188))(pPVar18,1);
        pPVar18 = *(PVZ2UIButton **)(this + 0x150);
      }
      pwVar1 = (wstring *)(this + 0xf0);
      (**(code **)(*(long *)this + 0x60))(this,pPVar18);
      iVar6 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar6);
      Sexy::StringToUpper(aSStack_90,extraout_x1);
      std::operator+("[",asStack_78);
      std::operator+((string *)aIStack_40,"]");
      std::string::~string((string *)aIStack_40);
      std::string::~string(asStack_78);
      TodStringTranslate(L"[RECALL_OFFER_CURRENT_NAME]");
      FUN_054766c8(pwVar1,aIStack_40);
      FUN_05476c50(aIStack_40);
      Sexy::ToWString(asStack_88);
      TodStringTranslate(awStack_80);
      TodReplaceString(pwVar1,L"{NAME}",(wstring *)asStack_78);
      FUN_054766c8(pwVar1,aIStack_40);
      FUN_05476c50(aIStack_40);
      FUN_05476c50(asStack_78);
      FUN_05476c50(awStack_80);
      std::string::~string(asStack_88);
      std::string::~string((string *)aSStack_90);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar15 = 0;
    if (*(int *)(this + 0xec) == 0) {
      while( true ) {
        puVar13 = (undefined8 *)FUN_03a5421c(uVar21,uVar22);
        uVar21 = *puVar13;
        uVar16 = FUN_03a5413c(uVar21,puVar13[1]);
        if (uVar16 <= uVar15) break;
        piVar17 = (int *)FUN_03a54150(uVar21,uVar15);
        iVar2 = *piVar17;
        this_03 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        cVar4 = NameMapperBase::ContainsId(this_03,iVar2);
        if (cVar4 != '\0') {
          uVar21 = *(undefined8 *)(param_1 + 0x18);
          *(int *)(this + 0xec) = iVar2;
          puVar13 = (undefined8 *)FUN_03a5421c(uVar21,uVar22);
          break;
        }
        uVar21 = *(undefined8 *)(param_1 + 0x18);
        uVar15 = uVar15 + 1;
      }
    }
    else {
      puVar13 = (undefined8 *)FUN_03a5421c(uVar21,uVar22);
    }
    if (*(char *)(puVar13 + 3) != '\0') {
      this[0xe8] = (NewRecallBankWidget)0x0;
    }
    Sexy::Insets::Insets(aIStack_40,iVar7,iVar11,iVar9 + iVar7 * -2,iVar19);
    this_02 = ::operator_new(0x120);
    NewRecallBankLine::NewRecallBankLine(this_02);
    (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_40);
    pNVar14 = (NewRecallBankDayReward *)FUN_03a5421c(*(undefined8 *)(param_1 + 0x18),uVar22);
    NewRecallBankLine::init(this_02,(int)uVar22,pNVar14);
    if ((*(int *)(param_1 + 0x48) <= (int)uVar22) || (param_1[0x4c] == (NewRecallBankData)0x0)) {
      NewRecallBankLine::setNoCondition(this_02);
    }
    uVar22 = uVar22 + 1;
    iVar11 = iVar11 + iVar6;
    Sexy::ScrollWidget::SetBackgroundImage((ScrollWidget *)this_02,(Image *)this);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBankWidget::Draw(Sexy::Graphics*) */

void __thiscall NewRecallBankWidget::Draw(NewRecallBankWidget *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  undefined8 uVar9;
  NameMapperBase *this_00;
  SeedPacketUtils *this_01;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  string asStack_c8 [8];
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  Color aCStack_a8 [16];
  Insets aIStack_98 [16];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5f80);
  iVar3 = FUN_03a55578(0x50);
  Sexy::Graphics::DrawImage(param_1,pIVar8,0,0,*(int *)(this + 0x50),iVar3);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5d90);
  iVar4 = FUN_03a55578(200);
  iVar3 = *(int *)(this + 0x50);
  iVar5 = FUN_03a55578(0x32);
  iVar6 = FUN_03a55578(0xb4);
  iVar7 = FUN_03a55578(0x19);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar3 - iVar4,iVar5,iVar6,iVar7);
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03a53f58(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    TodStringTranslate(L"[TOTAL_LOGIN_DAYS]");
    iVar3 = ActiveItem::GetLeftDays(aAStack_88);
    TodReplaceNumberString((wstring *)aIStack_98,L"{DAY_COUNT}",iVar3);
    FUN_05476c50((wstring *)aIStack_98);
    iVar4 = FUN_03a55578(0x6e);
    iVar3 = *(int *)(this + 0x50);
    iVar5 = FUN_03a55578(0x32);
    iVar6 = FUN_03a55578(0x5a);
    iVar7 = FUN_03a55578(0x19);
    Sexy::Insets::Insets((Insets *)aCStack_a8,iVar3 - iVar4,iVar5,iVar6,iVar7);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color((Color *)aIStack_98,1);
    WriteWordInRect(param_1,&local_b8,(Insets *)aCStack_a8,uVar9,(wstring *)aIStack_98,5,1);
    FUN_05476c50(&local_b8);
  }
  iVar3 = FUN_03a55578(0x5a);
  iVar4 = FUN_03a55578(0xaa);
  Sexy::Insets::Insets(aIStack_98,0,iVar3,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar4);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5cc0);
  Draw9SliceImage(param_1,aIStack_98,uVar9);
  iVar4 = FUN_03a55578(0x46);
  iVar3 = *(int *)(this + 0x54);
  iVar5 = FUN_03a55578(200);
  Sexy::Insets::Insets(aIStack_98,0,iVar3 - iVar4,*(int *)(this + 0x50) - iVar5,iVar4);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5cc0);
  Draw9SliceImage(param_1,aIStack_98,uVar9);
  this_00 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(this_00,*(int *)(this + 0xec));
  if (cVar1 != '\0') {
    iVar3 = FUN_03a55578(0x14);
    iVar4 = FUN_03a55578(0x46);
    Sexy::Insets::Insets((Insets *)&local_b8,iVar3,*(int *)(this + 0x54) - iVar4,iVar4,iVar4);
    iVar3 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_02 = (RtWeakPtr *)SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,asStack_c8);
    fVar13 = ((float)local_b0 * 0.9) / (float)*(int *)(this_02 + 0x28);
    fVar12 = ((float)local_ac * 0.9) / (float)*(int *)(this_02 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_02 + 0x170));
    GetImageOffset(&iStack_c0,aIStack_98);
    Sexy::RtId::~RtId((RtId *)aIStack_98);
    UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_c0,&iStack_bc,1536.0);
    Sexy::Insets::Insets
              ((Insets *)aCStack_a8,
               (int)((float)local_b8 + (float)*(int *)(this_02 + 0x30) * fVar13),
               (int)((float)local_b4 + (float)*(int *)(this_02 + 0x34) * fVar12),
               (int)(fVar13 * (float)*(int *)(this_02 + 0x28)),
               (int)(fVar12 * (float)*(int *)(this_02 + 0x2c)));
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02 + 0x170);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar10,(TRect *)aCStack_a8,(TRect *)(this_02 + 0x20));
    Sexy::Insets::Insets
              (aIStack_98,(int)((float)local_b8 + (float)*(int *)(this_02 + 0x18) * fVar13),
               (int)((float)local_b4 + (float)*(int *)(this_02 + 0x1c) * fVar12),
               (int)(fVar13 * (float)*(int *)(this_02 + 0x10)),
               (int)(fVar12 * (float)*(int *)(this_02 + 0x14)));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
    if (bVar2) {
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar11 + 0x48));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar10,(TRect *)aIStack_98,(TRect *)(this_02 + 8))
      ;
    }
    std::string::~string(asStack_c8);
  }
  TodStringTranslate((wstring *)(this + 0xf0));
  iVar3 = FUN_03a55578(100);
  iVar4 = FUN_03a55578(0x46);
  Sexy::Insets::Insets(aIStack_98,iVar3,*(int *)(this + 0x54) - iVar4,iVar3,iVar4);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
  Sexy::Color::Color(aCStack_a8,0x66,0x37,0);
  WriteWordInRect(param_1,(Insets *)&local_b8,aIStack_98,uVar9,aCStack_a8,5,1);
  FUN_05476c50((Insets *)&local_b8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


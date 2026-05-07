// Class: NewRecallBankLine


/* NewRecallBankLine::setNoCondition() */

void __thiscall NewRecallBankLine::setNoCondition(NewRecallBankLine *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xf0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
  }
  return;
}


/* NewRecallBankLine::NewRecallBankLine() */

void __thiscall NewRecallBankLine::NewRecallBankLine(NewRecallBankLine *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe4] = (NewRecallBankLine)0x0;
  *(undefined ***)this = &PTR_GetClass_0670b420;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0670b748;
  FUN_05476574(this + 0xe8);
  *(undefined8 *)(this + 0xf0) = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0xf8));
  *(undefined8 *)(this + 0x118) = 0;
  return;
}


/* NewRecallBankLine::~NewRecallBankLine() */

void __thiscall NewRecallBankLine::~NewRecallBankLine(NewRecallBankLine *this)

{
  *(undefined ***)this = &PTR_GetClass_0670b420;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0670b748;
  WorldLevelPackageItem::~WorldLevelPackageItem((WorldLevelPackageItem *)(this + 0xf8));
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* NewRecallBankLine::~NewRecallBankLine() */

void __thiscall NewRecallBankLine::~NewRecallBankLine(NewRecallBankLine *this)

{
  ~NewRecallBankLine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBankLine::init(int, NewRecallBankDayReward const&) */

void __thiscall
NewRecallBankLine::init(NewRecallBankLine *this,int param_1,NewRecallBankDayReward *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  CUILabel *this_00;
  PrimeTypeface *pPVar9;
  PVZ2UIButton *this_01;
  undefined8 uVar10;
  ulong uVar11;
  code *pcVar12;
  string asStack_80 [8];
  wstring awStack_78 [56];
  int local_40;
  int local_3c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe0) = param_1 + 1;
  NewRecallBankDayReward::operator=((NewRecallBankDayReward *)(this + 0xf8),param_2);
  TodStringTranslate(L"[PIGGY_BANK_LOGIN_TEXT]");
  TodReplaceNumberString(awStack_78,L"{DAY}",*(int *)(this + 0xe0));
  FUN_054766c8(this + 0xe8,(GAME_ITEM_INFO *)&local_40);
  FUN_05476c50((GAME_ITEM_INFO *)&local_40);
  FUN_05476c50(awStack_78);
  for (uVar11 = 0; uVar6 = FUN_03a5413c(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8)),
      uVar11 < uVar6; uVar11 = uVar11 + 1) {
    iVar2 = FUN_03a55578(0x14);
    iVar1 = *(int *)(this + 0x54);
    iVar3 = FUN_03a55578(8);
    iVar4 = FUN_03a55578(0x10);
    Sexy::Insets::Insets
              ((Insets *)awStack_78,iVar2 + (iVar1 + iVar1 / 2) * (int)uVar11,iVar3,iVar1 - iVar4,
               iVar1 - iVar4);
    piVar7 = (int *)FUN_03a54150(*(undefined8 *)param_2,uVar11);
    GetGameItemInfo(*piVar7,0x7fffffff,0);
    if (local_40 != 0) {
      if (local_3c == 0x40) {
        std::string::string(asStack_80,"gem");
        lVar8 = FUN_03a54150(*(undefined8 *)param_2,uVar11);
        uVar5 = *(undefined4 *)(lVar8 + 4);
        this_00 = ::operator_new(0x148);
        UIRewardFrame::UIRewardFrame((UIRewardFrame *)this_00,1,asStack_80,uVar5,1);
        std::string::~string(asStack_80);
        nop();
      }
      else {
        std::string::string(asStack_80,"");
        lVar8 = FUN_03a54150(*(undefined8 *)param_2,uVar11);
        uVar5 = *(undefined4 *)(lVar8 + 4);
        this_00 = ::operator_new(0x148);
        UIRewardFrame::UIRewardFrame((UIRewardFrame *)this_00,5,asStack_80,uVar5,1);
        std::string::~string(asStack_80);
        nop();
        pPVar9 = (PrimeTypeface *)
                 CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5870);
        Lua::CUILabel::SetTypeface(this_00,pPVar9);
      }
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,awStack_78);
      (**(code **)(*(long *)this + 0x60))(this,this_00);
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_40);
  }
  if (*(long *)(this + 0xf0) == 0) {
    FUN_05478178(awStack_78,&DAT_056f11a8,asStack_80);
    Sexy::Color::Color((Color *)&local_40,1);
    this_01 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_01,0x14,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
    FUN_05476c50(awStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac5ab8,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac5a68,3);
    PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
    TodStringTranslate(L"[PLANT_OBTAIN]");
    PVZ2UIButton::SetLabelText(this_01,(wstring *)&local_40);
    FUN_05476c50((GAME_ITEM_INFO *)&local_40);
    pcVar12 = *(code **)(*(long *)this_01 + 800);
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
    (*pcVar12)(this_01,uVar10);
    iVar2 = FUN_03a55578(0x96);
    iVar1 = *(int *)(this + 0x50);
    iVar3 = FUN_03a55578(0x32);
    uVar5 = FUN_03a55578(0x87);
    (**(code **)(*(long *)this_01 + 0x198))
              (this_01,iVar1 - iVar2,(*(int *)(this + 0x54) - iVar3) / 2,uVar5);
    if (param_2[0x18] != (NewRecallBankDayReward)0x0) {
      lVar8 = *(long *)this_01;
      this[0xe4] = (NewRecallBankLine)0x1;
      (**(code **)(lVar8 + 0x188))(this_01,1);
      (**(code **)(*(long *)this_01 + 0x158))(this_01,0);
    }
    (**(code **)(*(long *)this + 0x60))(this,this_01);
    *(PVZ2UIButton **)(this + 0xf0) = this_01;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBankLine::exchangeReward() */

void __thiscall NewRecallBankLine::exchangeReward(NewRecallBankLine *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  undefined4 local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1976];
  string asStack_530 [1320];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  local_d48[0] = 0x2a29;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"dd");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a55408(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_530,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBankLine::ButtonDepress(int) */

void __thiscall NewRecallBankLine::ButtonDepress(NewRecallBankLine *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x14) {
    if ((*(long *)(this + 0x118) == 0) || (*(char *)(*(long *)(this + 0x118) + 0xe8) == '\0')) {
      exchangeReward(this);
    }
    else {
      this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_00 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(this_00,6);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[RECALL_OFFER_BANK_SELECT_CONFIRM_2]");
        TodStringTranslate(L"[BUTTON_OK]");
        UIMessageBox::SetMessage(this_00,awStack_60,awStack_68);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(this_00,pIVar1);
        std::string::~string(asStack_50);
        nop();
        lVar2 = UIMessageBox::GetButtonOK(this_00);
        thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_58);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,determineExchange);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<NewRecallBankLine,void(NewRecallBankLine::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(this_00,aDStack_38);
        FUN_05476c50(auStack_58);
        FUN_05476c50(awStack_60);
        FUN_05476c50(awStack_68);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to NewRecallBankLine::ButtonDepress(int) */

void __thiscall NewRecallBankLine::ButtonDepress(NewRecallBankLine *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* NewRecallBankLine::determineExchange(UIMessageBox*, int) */

void __thiscall
NewRecallBankLine::determineExchange(NewRecallBankLine *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  exchangeReward(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBankLine::Draw(Sexy::Graphics*) */

void __thiscall NewRecallBankLine::Draw(NewRecallBankLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  long lVar8;
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5948);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac5b30);
  iVar1 = FUN_03a55578(0x14);
  iVar5 = *(int *)(this + 0x54) / 3;
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar1 + *(int *)(this + 0x54),iVar5,iVar5,iVar5);
  if (this[0xe4] != (NewRecallBankLine)0x0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac58e8);
    iVar2 = FUN_03a55578(0x96);
    iVar5 = *(int *)(this + 0x54);
    iVar1 = *(int *)(this + 0x50);
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac58e8);
    iVar3 = FUN_03a55578(100);
    iVar4 = FUN_03a55578(0x1e);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,iVar1 - iVar2,(iVar5 - *(int *)(lVar8 + 0x3c)) / 2,iVar3,iVar4);
  }
  iVar5 = FUN_03a55578(0x78);
  iVar1 = FUN_03a55578(0);
  iVar2 = FUN_03a55578(300);
  Sexy::Insets::Insets(aIStack_18,iVar5,iVar1,iVar2,*(int *)(this + 0x54));
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color(aCStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xe8,aIStack_18,uVar6,aCStack_28,5,1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


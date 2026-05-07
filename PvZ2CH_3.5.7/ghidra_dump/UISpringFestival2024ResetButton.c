// Class: UISpringFestival2024ResetButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024ResetButton::StaticClassInit() */

void UISpringFestival2024ResetButton::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"UISpringFestival2024ResetButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04569d2c,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpringFestival2024ResetButton::StaticGetClass() */

long * UISpringFestival2024ResetButton::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UISpringFestival2024ResetButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpringFestival2024ResetButton::GetClass() const */

long * UISpringFestival2024ResetButton::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UISpringFestival2024ResetButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UISpringFestival2024ResetButton::~UISpringFestival2024ResetButton() */

void __thiscall
UISpringFestival2024ResetButton::~UISpringFestival2024ResetButton
          (UISpringFestival2024ResetButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685c6e0;
  *(undefined ***)(this + 0x10) = &PTR__UISpringFestival2024ResetButton_0685c890;
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to UISpringFestival2024ResetButton::~UISpringFestival2024ResetButton() */

void __thiscall
UISpringFestival2024ResetButton::~UISpringFestival2024ResetButton
          (UISpringFestival2024ResetButton *this)

{
  ~UISpringFestival2024ResetButton(this + -0x10);
  return;
}


/* UISpringFestival2024ResetButton::~UISpringFestival2024ResetButton() */

void __thiscall
UISpringFestival2024ResetButton::~UISpringFestival2024ResetButton
          (UISpringFestival2024ResetButton *this)

{
  ~UISpringFestival2024ResetButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UISpringFestival2024ResetButton::~UISpringFestival2024ResetButton() */

void __thiscall
UISpringFestival2024ResetButton::~UISpringFestival2024ResetButton
          (UISpringFestival2024ResetButton *this)

{
  ~UISpringFestival2024ResetButton(this + -0x10);
  return;
}


/* UISpringFestival2024ResetButton::Cancel(UIMessageBox*, int) */

void UISpringFestival2024ResetButton::Cancel(UIMessageBox *param_1,int param_2)

{
  if (UISingletonDialog<UIMessageBox>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UIMessageBox>::m_pInstance + 0x318))();
    UISingletonDialog<UIMessageBox>::m_pInstance = (long *)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024ResetButton::OnClick() */

void __thiscall UISpringFestival2024ResetButton::OnClick(UISpringFestival2024ResetButton *this)

{
  int iVar1;
  UIMessageBox *this_00;
  long lVar2;
  string asStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  wstring awStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    iVar1 = PVZ2UnchartedModeUtils::GetSpringFestival2024CurrentLevelIndex();
    if (iVar1 == 0) {
      std::string::string(asStack_68,"[UNCHARTED_WORLD_LEVEL_RESET_LEVEL_1_DESC]");
      StringHelper::ToStringValue(asStack_68);
      std::string::string(asStack_58,"[SUMMARY_NOTICE]");
      StringHelper::ToStringValue(asStack_58);
      UIMessageBox::SetMessage(this_00,awStack_60,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      FUN_05476c50(awStack_60);
      std::string::~string(asStack_68);
      nop();
      UIMessageBox::SetShowType(this_00,2);
    }
    else {
      std::string::string(asStack_68,"[UNCHARTED_WORLD_LEVEL_RESET_DESC]");
      StringHelper::ToStringValue(asStack_68);
      std::string::string(asStack_58,"[SUMMARY_NOTICE]");
      StringHelper::ToStringValue(asStack_58);
      UIMessageBox::SetMessage(this_00,awStack_60,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      FUN_05476c50(awStack_60);
      std::string::~string(asStack_68);
      nop();
      UIMessageBox::SetShowType(this_00,6);
      lVar2 = UIMessageBox::GetButtonOK(this_00);
      std::string::string(asStack_58,"[UNCHARTED_WORLD_LEVEL_RESET_CANCEL]");
      StringHelper::ToStringValue(asStack_58);
      FUN_054766c8(lVar2 + 0xd8,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      lVar2 = UIMessageBox::GetButtonCancel(this_00);
      std::string::string(asStack_58,"[UNCHARTED_WORLD_LEVEL_RESET_CONFIRM]");
      StringHelper::ToStringValue(asStack_58);
      FUN_054766c8(lVar2 + 0xd8,awStack_50);
      FUN_05476c50(awStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,Cancel);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UISpringFestival2024ResetButton,void(UISpringFestival2024ResetButton::*)(UIMessageBox*,int)>
                (aDStack_38,awStack_50);
      UIMessageBox::SetCallback(this_00,aDStack_38);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,ConfirmReset);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UISpringFestival2024ResetButton,void(UISpringFestival2024ResetButton::*)(UIMessageBox*,int)>
                (aDStack_38,awStack_50);
      UIMessageBox::SetCancelCallback(this_00,aDStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024ResetButton::UISpringFestival2024ResetButton() */

void __thiscall
UISpringFestival2024ResetButton::UISpringFestival2024ResetButton
          (UISpringFestival2024ResetButton *this)

{
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685c6e0;
  *(undefined ***)(this + 0x10) = &PTR__UISpringFestival2024ResetButton_0685c890;
  std::string::string(asStack_30,"IMAGE_UI_UNCHARTED_CHALLENGE_RESET");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string(asStack_30);
  nop();
  FUN_04569134(afStack_28,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISpringFestival2024ResetButton::StaticNew() */

UISpringFestival2024ResetButton * UISpringFestival2024ResetButton::StaticNew(void)

{
  UISpringFestival2024ResetButton *this;
  
  this = ::operator_new(0x1d0);
  UISpringFestival2024ResetButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpringFestival2024ResetButton::ConfirmReset(UIMessageBox*, int) */

void __thiscall
UISpringFestival2024ResetButton::ConfirmReset
          (UISpringFestival2024ResetButton *this,UIMessageBox *param_1,int param_2)

{
  char cVar1;
  PVZ2UnchartedModeUtils *this_00;
  undefined8 uVar2;
  string *this_01;
  DNetwork *this_02;
  char *__s;
  string *__n;
  string asStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2696];
  string asStack_260 [600];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 2) {
    this_00 = (PVZ2UnchartedModeUtils *)
              std::
              map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
              ::map(amStack_d18);
    PVZ2UnchartedModeUtils::GetPrefixWorld(this_00);
    std::string::string(asStack_ce8,"world");
    uVar2 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
    thunk_FUN_05475e00(uVar2,asStack_d48);
    std::string::~string(asStack_ce8);
    nop();
    cVar1 = PVZ2UnchartedModeUtils::IsHardMode();
    __n = asStack_d40;
    std::string::string(asStack_ce8,"type");
    this_01 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_ce8);
    if (cVar1 == '\0') {
      __s = "0";
    }
    else {
      __s = "1";
    }
    std::string::append(this_01,__s,(size_t)__n);
    std::string::~string(asStack_ce8);
    nop();
    this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_04569190(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_02,asStack_260,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::string::~string(asStack_d48);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


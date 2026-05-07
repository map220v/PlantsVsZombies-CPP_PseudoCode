// Class: CornucopiaBubbleWidget


/* CornucopiaBubbleWidget::TouchBegan(Sexy::Touch const&) */

void __thiscall CornucopiaBubbleWidget::TouchBegan(CornucopiaBubbleWidget *this,Touch *param_1)

{
  *(int *)(this + 0x108) = (int)*(undefined8 *)param_1;
  return;
}


/* CornucopiaBubbleWidget::~CornucopiaBubbleWidget() */

void __thiscall CornucopiaBubbleWidget::~CornucopiaBubbleWidget(CornucopiaBubbleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069e1c70;
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CornucopiaBubbleWidget::~CornucopiaBubbleWidget() */

void __thiscall CornucopiaBubbleWidget::~CornucopiaBubbleWidget(CornucopiaBubbleWidget *this)

{
  ~CornucopiaBubbleWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaBubbleWidget::CalcCountdownTime(long) */

void CornucopiaBubbleWidget::CalcCountdownTime(long param_1)

{
  long lVar1;
  long lVar2;
  long in_x1;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = LawnApp::GetRealServerTime(gLawnApp);
  if (in_x1 - lVar2 < 1) {
    FUN_05478178();
    nop();
  }
  else {
    StringHelper::ToTimeString((StringHelper *)0x3,(float)(in_x1 - lVar2),(int)in_x1);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaBubbleWidget::Update() */

void __thiscall CornucopiaBubbleWidget::Update(CornucopiaBubbleWidget *this)

{
  long lVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0x110] == (CornucopiaBubbleWidget)0x0) {
    CalcCountdownTime((long)this);
    FUN_054766c8(this + 0xf8,auStack_10);
    FUN_05476c50(auStack_10);
    lVar1 = LawnApp::GetRealServerTime(gLawnApp);
    if (*(long *)(this + 0x118) < lVar1) {
      this[0x110] = (CornucopiaBubbleWidget)0x1;
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaBubbleWidget::CheckHarvest(std::vector<CornucopiaBubbleHarvestData,
   std::allocator<CornucopiaBubbleHarvestData> >) */

ulong __thiscall
CornucopiaBubbleWidget::CheckHarvest(CornucopiaBubbleWidget *this,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar1 = FUN_04e5409c(uVar5,param_2[1]);
  uVar3 = 0;
  do {
    uVar4 = uVar3 & 0xffffffff;
    if (uVar3 == uVar1) {
      return 0xffffffff;
    }
    lVar2 = FUN_04e54090(uVar5,uVar3);
    uVar3 = uVar3 + 1;
  } while (*(int *)(lVar2 + 8) != *(int *)(this + 0x10c));
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaBubbleWidget::BubbleReward(int) */

void CornucopiaBubbleWidget::BubbleReward(int param_1)

{
  UIMessageBox *this;
  Image *pIVar1;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,6);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[CORNUCOPIA_HARVEST_GOT_CONFIRM]");
    UIMessageBox::SetMessage(this,awStack_58,awStack_60);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)(ulong)(uint)param_1,BubbleRewardConfirm);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<CornucopiaBubbleWidget,void(CornucopiaBubbleWidget::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this,aDStack_38);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaBubbleWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall CornucopiaBubbleWidget::TouchEnded(CornucopiaBubbleWidget *this,Touch *param_1)

{
  char cVar1;
  long lVar2;
  
  if ((*(int *)(this + 0x108) == (int)*(undefined8 *)param_1) &&
     (this[0x110] != (CornucopiaBubbleWidget)0x0)) {
    lVar2 = UISingletonDialog<UICornucopia>::GetSingletonPtr();
    cVar1 = FUN_04e54078(*(undefined1 *)(lVar2 + 0x1c8));
    if (cVar1 == '\0') {
      BubbleReward((int)this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaBubbleWidget::InitView() */

void __thiscall CornucopiaBubbleWidget::InitView(CornucopiaBubbleWidget *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar4;
  undefined4 *puVar5;
  string asStack_168 [24];
  CornucopiaData aCStack_150 [200];
  undefined8 local_88 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9fa18);
  *(undefined8 *)(this + 0xd8) = uVar3;
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f9a0);
  *(undefined8 *)(this + 0xe0) = uVar3;
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9fa90);
  *(undefined8 *)(this + 0xe8) = uVar3;
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9fa68);
  *(undefined8 *)(this + 0xf0) = uVar3;
  std::string::string(asStack_168,"[CORNUCOPIA_HARVEST_TITLE]");
  StringHelper::ToStringValue(asStack_168);
  FUN_054766c8(this + 0x100,aCStack_150);
  FUN_05476c50(aCStack_150);
  std::string::~string(asStack_168);
  nop();
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar4 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar4);
  if (*(long *)(this + 0x118) == 0) {
    this[0x110] = (CornucopiaBubbleWidget)0x1;
  }
  else {
    CalcCountdownTime((long)this);
    FUN_054766c8(this + 0xf8,asStack_168);
    FUN_05476c50(asStack_168);
  }
  std::vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>>::vector
            ((vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>> *)
             asStack_168,(vector *)local_88);
  iVar2 = CheckHarvest(this,asStack_168);
  std::vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>>::~vector
            ((vector<CornucopiaBubbleHarvestData,std::allocator<CornucopiaBubbleHarvestData>> *)
             asStack_168);
  if (this[0x110] != (CornucopiaBubbleWidget)0x0) {
    puVar5 = (undefined4 *)FUN_04e54090(local_88[0],(long)iVar2);
    uVar1 = *puVar5;
    *(undefined4 *)(this + 0x124) = puVar5[1];
    *(undefined4 *)(this + 0x120) = uVar1;
  }
  this[0x59] = (CornucopiaBubbleWidget)0x0;
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaBubbleWidget::CornucopiaBubbleWidget(int, long) */

void __thiscall
CornucopiaBubbleWidget::CornucopiaBubbleWidget
          (CornucopiaBubbleWidget *this,int param_1,long param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069e1c70;
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x120));
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  FUN_054772c4(this + 0xf8,&DAT_056f11a8);
  FUN_054772c4(this + 0x100,&DAT_056f11a8);
  *(int *)(this + 0x10c) = param_1;
  *(long *)(this + 0x118) = param_2;
  *(undefined4 *)(this + 0x108) = 0xffffffff;
  this[0x110] = (CornucopiaBubbleWidget)0x0;
  this[0x59] = (CornucopiaBubbleWidget)0x0;
  InitView(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaBubbleWidget::Draw(Sexy::Graphics*) */

void __thiscall CornucopiaBubbleWidget::Draw(CornucopiaBubbleWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CornucopiaBubbleWidget *pCVar5;
  undefined8 local_38;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 0xd8),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar1 = FUN_04e56010(10);
  iVar2 = FUN_04e56010(0x14);
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 0xe0),iVar1,iVar1,*(int *)(this + 0x50) - iVar2,
             *(int *)(this + 0x54) - iVar2);
  if (this[0x110] == (CornucopiaBubbleWidget)0x0) {
    iVar2 = FUN_04e56010(0);
    iVar3 = FUN_04e56010(0x14);
    iVar1 = *(int *)(this + 0x54);
    iVar4 = FUN_04e56010(0x28);
    Sexy::Insets::Insets(aIStack_18,iVar2,iVar1 - iVar3,*(int *)(this + 0x50),iVar4);
    Draw3SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
    iVar2 = FUN_04e56010(0x14);
    iVar1 = *(int *)(this + 0x54);
    iVar3 = FUN_04e56010(0x28);
    Sexy::Insets::Insets(aIStack_28,0,iVar1 - iVar2,*(int *)(this + 0x50),iVar3);
    local_38 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    pCVar5 = this + 0xf8;
  }
  else {
    iVar2 = FUN_04e56010(0);
    iVar3 = FUN_04e56010(0x14);
    iVar1 = *(int *)(this + 0x54);
    iVar4 = FUN_04e56010(0x28);
    Sexy::Insets::Insets(aIStack_18,iVar2,iVar1 - iVar3,*(int *)(this + 0x50),iVar4);
    Draw3SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0xf0));
    iVar2 = FUN_04e56010(0x14);
    iVar1 = *(int *)(this + 0x54);
    iVar3 = FUN_04e56010(0x28);
    Sexy::Insets::Insets(aIStack_28,0,iVar1 - iVar2,*(int *)(this + 0x50),iVar3);
    local_38 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    pCVar5 = this + 0x100;
  }
  WriteWordInRect(param_1,pCVar5,aIStack_28,local_38,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaBubbleWidget::RequestBubbleReward(int) */

void __thiscall
CornucopiaBubbleWidget::RequestBubbleReward(CornucopiaBubbleWidget *this,int param_1)

{
  string *this_00;
  string *psVar1;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2848];
  string asStack_1c8 [448];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  psVar1 = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"0",(size_t)psVar1);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"index");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,param_1);
  __s = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar1,__s,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04e55de8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_1c8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* CornucopiaBubbleWidget::BubbleRewardConfirm(UIMessageBox*, int) */

void __thiscall
CornucopiaBubbleWidget::BubbleRewardConfirm
          (CornucopiaBubbleWidget *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  RequestBubbleReward(this,*(int *)(this + 0x10c));
  return;
}


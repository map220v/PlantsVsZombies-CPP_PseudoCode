// Class: GoldenEggAnimWidget


/* GoldenEggAnimWidget::IsBroken() */

bool __thiscall GoldenEggAnimWidget::IsBroken(GoldenEggAnimWidget *this)

{
  return *(int *)(this + 0xe0) == 2;
}


/* GoldenEggAnimWidget::Update() */

void __thiscall GoldenEggAnimWidget::Update(GoldenEggAnimWidget *this)

{
  char cVar1;
  
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0xe8));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0xe8));
  return;
}


/* GoldenEggAnimWidget::Draw(Sexy::Graphics*) */

void __thiscall GoldenEggAnimWidget::Draw(GoldenEggAnimWidget *this,Graphics *param_1)

{
  char cVar1;
  
  nop();
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0xe8));
  if (cVar1 == '\0') {
    return;
  }
  EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0xe8),param_1);
  return;
}


/* GoldenEggAnimWidget::IsBreaking() */

bool __thiscall GoldenEggAnimWidget::IsBreaking(GoldenEggAnimWidget *this)

{
  return *(int *)(this + 0xe0) == 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggAnimWidget::Init(int, int, bool) */

void __thiscall
GoldenEggAnimWidget::Init(GoldenEggAnimWidget *this,int param_1,int param_2,bool param_3)

{
  EffectAnim_UIAnim *this_00;
  char cVar1;
  int iVar2;
  char *__s;
  int local_24;
  string asStack_20 [8];
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  *(int *)(this + 0xdc) = param_2;
  local_24 = param_1 + 1;
  *(int *)(this + 0xd8) = param_1;
  local_8 = ___stack_chk_guard;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_24);
  this_00 = (EffectAnim_UIAnim *)(this + 0xe8);
  std::operator+("POPANIM_EFFECTS_GOLDENEGG_",asStack_20);
  iVar2 = FUN_03a18de0(0x14);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,(float)(*(int *)(this + 0x50) / 2),
             (float)iVar2 + (float)(*(int *)(this + 0x54) / 2));
  EffectAnim_UIAnim::InitUIAnim(0x3f333333,local_10,local_c,this_00,asStack_18,1);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  cVar1 = EffectAnim_UIAnim::IsValid(this_00);
  if (cVar1 != '\0') {
    if (param_3) {
      *(undefined4 *)(this + 0xe0) = 2;
      __s = "idle";
    }
    else {
      *(undefined4 *)(this + 0xe0) = 0;
      __s = "normal";
    }
    std::string::string((string *)&local_10,__s);
    EffectAnim_UIAnim::PlayOnce(this_00,(FastCurve *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggAnimWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall GoldenEggAnimWidget::TouchEnded(GoldenEggAnimWidget *this,Touch *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  DTransformNode *this_00;
  UIFestivalGoldenEgg *pUVar4;
  UIMessageBox *pUVar5;
  Image *pIVar6;
  long lVar7;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) && (*(int *)(this + 0xe0) == 0)) {
    this_00 = (DTransformNode *)UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr();
    cVar1 = DTransformNode::isNoCast(this_00);
    if (cVar1 == '\0') {
      pUVar4 = (UIFestivalGoldenEgg *)UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr();
      iVar2 = UIFestivalGoldenEgg::GetHammerRequire(pUVar4);
      pUVar4 = (UIFestivalGoldenEgg *)UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr();
      iVar3 = UIFestivalGoldenEgg::GetCurrentHammer(pUVar4);
      if (iVar3 < iVar2) {
        pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar5 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar5,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[FESTIVAL_GOLDENEGG_HAMMER_NOT_ENOUGH]");
          TodStringTranslate(L"[BUTTON_OK]");
          UIMessageBox::SetMessage(pUVar5,awStack_60,awStack_68);
          std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar6 = (Image *)StringHelper::ToImage(asStack_50,false);
          UIMessageBox::SetBackground(pUVar5,pIVar6);
          std::string::~string(asStack_50);
          nop();
          lVar7 = UIMessageBox::GetButtonCancel(pUVar5);
          thunk_FUN_05477b9c(lVar7 + 0xd8,awStack_58);
          FUN_05476c50(awStack_58);
          FUN_05476c50(awStack_60);
          FUN_05476c50(awStack_68);
        }
      }
      else {
        pUVar5 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar5 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar5,6);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[FESTIVAL_GOLDENEGG_HAMMER_CONFIRM]");
          TodReplaceNumberString(awStack_58,L"{NUM}",iVar2);
          FUN_054766c8(awStack_58,asStack_50);
          FUN_05476c50(asStack_50);
          UIMessageBox::SetMessage(pUVar5,awStack_58,awStack_60);
          std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar6 = (Image *)StringHelper::ToImage(asStack_50,false);
          UIMessageBox::SetBackground(pUVar5,pIVar6);
          std::string::~string(asStack_50);
          nop();
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,BreakConfirm);
          Sexy::Delegate2<UIMessageBox*,int>::
          Delegate2<GoldenEggAnimWidget,void(GoldenEggAnimWidget::*)(UIMessageBox*,int)>
                    (aDStack_38,asStack_50);
          UIMessageBox::SetCallback(pUVar5,aDStack_38);
          FUN_05476c50(awStack_58);
          FUN_05476c50(awStack_60);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggAnimWidget::StartBreak() */

void __thiscall GoldenEggAnimWidget::StartBreak(GoldenEggAnimWidget *this)

{
  char cVar1;
  UIFestivalGoldenEgg *this_00;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0xe8));
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0xe0) = 1;
    this_00 = (UIFestivalGoldenEgg *)UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr();
    UIFestivalGoldenEgg::Lock(this_00);
    std::string::string(asStack_58,"open");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnBroken);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GoldenEggAnimWidget,void(GoldenEggAnimWidget::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    EffectAnim_UIAnim::PlayOnceThen((EffectAnim_UIAnim *)(this + 0xe8),asStack_58,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEggAnimWidget::GoldenEggAnimWidget() */

void __thiscall GoldenEggAnimWidget::GoldenEggAnimWidget(GoldenEggAnimWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_066fd5f0;
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  return;
}


/* GoldenEggAnimWidget::~GoldenEggAnimWidget() */

void __thiscall GoldenEggAnimWidget::~GoldenEggAnimWidget(GoldenEggAnimWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066fd5f0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x118));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* GoldenEggAnimWidget::~GoldenEggAnimWidget() */

void __thiscall GoldenEggAnimWidget::~GoldenEggAnimWidget(GoldenEggAnimWidget *this)

{
  ~GoldenEggAnimWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggAnimWidget::BreakConfirm(UIMessageBox*, int) */

void __thiscall
GoldenEggAnimWidget::BreakConfirm(GoldenEggAnimWidget *this,UIMessageBox *param_1,int param_2)

{
  UIFestivalGoldenEgg *this_00;
  string *this_01;
  undefined8 uVar1;
  DNetwork *this_02;
  string *__n;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2528];
  string asStack_308 [768];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 == 1) {
    this_00 = (UIFestivalGoldenEgg *)UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr();
    UIFestivalGoldenEgg::GetHammerRequire(this_00);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    __n = asStack_d40;
    std::string::string(asStack_ce8,"t");
    this_01 = (string *)
              std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d18,asStack_ce8);
    std::string::append(this_01,"1",(size_t)__n);
    std::string::~string(asStack_ce8);
    nop();
    std::string::string(asStack_d40,"i");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xd8));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    std::string::string(asStack_d40,"aci");
    uVar1 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xdc));
    FUN_05474278(uVar1,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_03a18c70(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_02,asStack_308,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEggAnimWidget::OnBroken(std::string const&) */

void GoldenEggAnimWidget::OnBroken(string *param_1)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  UIFestivalGoldenEgg *pUVar4;
  ulong uVar5;
  undefined8 uVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0xe0) = 2;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_1 + 0x118);
    uVar1 = FUN_03a17ad4(uVar6,*(undefined8 *)(param_1 + 0x120));
    if (uVar1 <= uVar5) break;
    pUVar4 = (UIFestivalGoldenEgg *)UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr();
    piVar2 = (int *)FUN_03a17ae0(uVar6,uVar5);
    UIFestivalGoldenEgg::RewardGot(pUVar4,*piVar2,piVar2[1]);
    uVar5 = uVar5 + 1;
  }
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_1 + 0x118);
    uVar1 = FUN_03a17ad4(uVar6,*(undefined8 *)(param_1 + 0x120));
    if (uVar1 <= uVar5) break;
    piVar2 = (int *)FUN_03a17ae0(uVar6,uVar5);
    piVar2 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)amStack_38,piVar2);
    piVar3 = (int *)FUN_03a17ae0(*(undefined8 *)(param_1 + 0x118),uVar5);
    *piVar2 = piVar3[1];
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_50,piVar3);
    uVar5 = uVar5 + 1;
  }
  UIRedPacketResult::create((map *)amStack_38,(vector *)avStack_50,true);
  pUVar4 = (UIFestivalGoldenEgg *)UISingletonDialog<UIFestivalGoldenEgg>::GetSingletonPtr();
  UIFestivalGoldenEgg::Unlock(pUVar4);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


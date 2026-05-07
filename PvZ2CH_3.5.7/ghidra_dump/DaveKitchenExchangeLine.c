// Class: DaveKitchenExchangeLine


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenExchangeLine::RefreshView() */

void __thiscall DaveKitchenExchangeLine::RefreshView(DaveKitchenExchangeLine *this)

{
  uint uVar1;
  uint uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  UIWidgetText *this_02;
  uint uVar11;
  string asStack_18 [16];
  long local_8;
  
  uVar11 = 1;
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar8 = *(undefined8 *)(this + 0xe8);
  lVar3 = FUN_0349435c(uVar8,*(undefined8 *)(this + 0xf0));
  uVar1 = 1;
  if (lVar3 != 0) {
    do {
      uVar11 = uVar1;
      piVar4 = (int *)FUN_03494370(uVar8,uVar7);
      uVar2 = PlayerInfo::GetMaterialNum(this_01,*piVar4);
      lVar3 = FUN_03494370(*(undefined8 *)(this + 0xe8),uVar7);
      uVar1 = *(uint *)(lVar3 + 4);
      puVar5 = (undefined8 *)FUN_0349437c(*(undefined8 *)(this + 0x108),uVar7);
      this_02 = (UIWidgetText *)*puVar5;
      Sexy::StrFormat("%d/%d",asStack_18,(ulong)uVar2,(ulong)uVar1);
      UIWidgetText::SetString(this_02,asStack_18);
      std::string::~string(asStack_18);
      if ((int)uVar2 < (int)uVar1) {
        puVar5 = (undefined8 *)FUN_0349437c(*(undefined8 *)(this + 0x108),uVar7);
        plVar9 = (long *)*puVar5;
        uVar11 = 0;
        pcVar10 = *(code **)(*plVar9 + 0x170);
        Sexy::Color::Color((Color *)asStack_18,2);
        (*pcVar10)(plVar9,0,asStack_18);
      }
      else {
        puVar5 = (undefined8 *)FUN_0349437c(*(undefined8 *)(this + 0x108),uVar7);
        plVar9 = (long *)*puVar5;
        pcVar10 = *(code **)(*plVar9 + 0x170);
        Sexy::Color::Color((Color *)asStack_18,1);
        (*pcVar10)(plVar9,0,asStack_18);
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)(this + 0xe8);
      uVar6 = FUN_0349435c(uVar8,*(undefined8 *)(this + 0xf0));
      uVar1 = uVar11;
    } while (uVar7 < uVar6);
  }
  (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),uVar11 ^ 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenExchangeLine::Draw(Sexy::Graphics*) */

void __thiscall DaveKitchenExchangeLine::Draw(DaveKitchenExchangeLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Image *pIVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03494b84(0x1c2);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,*(int *)(this + 0x54));
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa27b8);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2a88);
  iVar1 = FUN_03494b84(0x1d5);
  iVar2 = FUN_03494b84(0x14);
  iVar3 = FUN_03494b84(0x2d);
  Sexy::Graphics::DrawImage(param_1,pIVar5,iVar1,iVar2,iVar3,iVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveKitchenExchangeLine::DaveKitchenExchangeLine() */

void __thiscall DaveKitchenExchangeLine::DaveKitchenExchangeLine(DaveKitchenExchangeLine *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066420f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06642418;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  *(undefined8 *)(this + 0x120) = 0;
  return;
}


/* DaveKitchenExchangeLine::~DaveKitchenExchangeLine() */

void __thiscall DaveKitchenExchangeLine::~DaveKitchenExchangeLine(DaveKitchenExchangeLine *this)

{
  *(undefined ***)this = &PTR_GetClass_066420f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06642418;
  std::vector<UIWidgetText*,std::allocator<UIWidgetText*>>::~vector
            ((vector<UIWidgetText*,std::allocator<UIWidgetText*>> *)(this + 0x108));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DaveKitchenExchangeLine::~DaveKitchenExchangeLine() */

void __thiscall DaveKitchenExchangeLine::~DaveKitchenExchangeLine(DaveKitchenExchangeLine *this)

{
  ~DaveKitchenExchangeLine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenExchangeLine::Exchange() */

void __thiscall DaveKitchenExchangeLine::Exchange(DaveKitchenExchangeLine *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [3064];
  string asStack_f0 [232];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"key");
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
  FUN_03494a70(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_f0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* DaveKitchenExchangeLine::ButtonDepress(int) */

void __thiscall DaveKitchenExchangeLine::ButtonDepress(DaveKitchenExchangeLine *this,int param_1)

{
  if (param_1 != 100) {
    return;
  }
  Exchange(this);
  return;
}


/* non-virtual thunk to DaveKitchenExchangeLine::ButtonDepress(int) */

void __thiscall DaveKitchenExchangeLine::ButtonDepress(DaveKitchenExchangeLine *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenExchangeLine::InitView(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&, int) */

void __thiscall
DaveKitchenExchangeLine::InitView
          (DaveKitchenExchangeLine *this,int param_1,vector *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  UIWidgetText *pUVar8;
  ulong uVar9;
  PrimeTypeface *pPVar10;
  CUILabel *this_00;
  PVZ2UIButton *pPVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  code *pcVar16;
  string asStack_80 [8];
  UIWidgetText *local_78 [7];
  wstring awStack_40 [56];
  long local_8;
  
  uVar13 = 0;
  *(int *)(this + 0xe0) = param_1;
  local_8 = ___stack_chk_guard;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xe8),param_2);
  *(int *)(this + 0x100) = param_3;
  while( true ) {
    uVar15 = *(undefined8 *)(this + 0xe8);
    uVar9 = FUN_0349435c(uVar15,*(undefined8 *)(this + 0xf0));
    if (uVar9 <= uVar13) break;
    piVar7 = (int *)FUN_03494370(uVar15,uVar13);
    plVar14 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar7,0,true);
    iVar1 = FUN_03494b84(0x14);
    iVar2 = FUN_03494b84(0x4b);
    uVar3 = FUN_03494b84(0xc);
    uVar4 = FUN_03494b84(0x41);
    iVar12 = (int)uVar13;
    (**(code **)(*plVar14 + 0x198))(plVar14,iVar1 + iVar2 * iVar12,uVar3,uVar4,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,plVar14);
    FUN_05476574(awStack_40);
    pUVar8 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar8,awStack_40);
    local_78[0] = pUVar8;
    FUN_05476c50(awStack_40);
    pUVar8 = local_78[0];
    iVar1 = FUN_03494b84(0x14);
    iVar2 = FUN_03494b84(0x4b);
    uVar3 = FUN_03494b84(0x32);
    uVar4 = FUN_03494b84(0x41);
    uVar5 = FUN_03494b84(0x19);
    uVar13 = uVar13 + 1;
    (**(code **)(*(long *)pUVar8 + 0x198))(pUVar8,iVar1 + iVar2 * iVar12,uVar3,uVar4,uVar5);
    UIWidgetText::SetFontIndex(local_78[0],0);
    pUVar8 = local_78[0];
    pcVar16 = *(code **)(*(long *)local_78[0] + 0x170);
    Sexy::Color::Color((Color *)awStack_40,1);
    (*pcVar16)(pUVar8,0,awStack_40);
    FUN_0349455c(local_78[0] + 0xe0);
    (**(code **)(*(long *)this + 0x60))(this,local_78[0]);
    std::vector<UIWidgetText*,std::allocator<UIWidgetText*>>::push_back
              ((vector<UIWidgetText*,std::allocator<UIWidgetText*>> *)(this + 0x108),local_78);
  }
  Sexy::StrFormat("IMAGE_UI_DAVEKITCHEN_REWARD%d",awStack_40,(ulong)*(uint *)(this + 0x100));
  pPVar10 = (PrimeTypeface *)StringHelper::ToImage((string *)awStack_40,false);
  std::string::~string((string *)awStack_40);
  if (pPVar10 == (PrimeTypeface *)0x0) {
    pPVar10 = (PrimeTypeface *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa2c18);
  }
  this_00 = (CUILabel *)UIRewardFrameSelect::CreateUIRewardFrame(0,0,false);
  Lua::CUILabel::SetTypeface(this_00,pPVar10);
  Sexy::StrFormat("[DAVEKITCHEN_EXCHANGE_%d]",asStack_80,(ulong)*(uint *)(this + 0x100));
  Sexy::ToWString(asStack_80);
  TodStringTranslate((wstring *)local_78);
  LevelEditorStatueMazeSliderWidget::SetDescription4((wstring *)this_00);
  FUN_05476c50(awStack_40);
  FUN_05476c50((wstring *)local_78);
  std::string::~string(asStack_80);
  uVar3 = FUN_03494b84(0x212);
  uVar4 = FUN_03494b84(5);
  uVar5 = FUN_03494b84(0x50);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar3,uVar4,uVar5,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  TodStringTranslate(L"[NEW_AVATAR_EXCHANGE]");
  Sexy::Color::Color((Color *)awStack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,100,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)awStack_40);
  *(PVZ2UIButton **)(this + 0x120) = pPVar11;
  FUN_05476c50((wstring *)local_78);
  pPVar11 = *(PVZ2UIButton **)(this + 0x120);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06aa2970,5);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06aa2ad8,5);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)local_78,(PVZ2UIImage *)awStack_40);
  plVar14 = *(long **)(this + 0x120);
  uVar3 = FUN_03494b84(0x14f);
  uVar4 = FUN_03494b84(0xf);
  uVar5 = FUN_03494b84(100);
  uVar6 = FUN_03494b84(0x3c);
  (**(code **)(*plVar14 + 0x198))(plVar14,uVar3,uVar4,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  RefreshView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


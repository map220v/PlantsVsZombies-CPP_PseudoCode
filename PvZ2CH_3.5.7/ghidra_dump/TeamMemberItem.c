// Class: TeamMemberItem


/* TeamMemberItem::~TeamMemberItem() */

void __thiscall TeamMemberItem::~TeamMemberItem(TeamMemberItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069ee890;
  *(undefined **)(this + 0xd8) = &DAT_069eebb8;
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TeamMemberItem::~TeamMemberItem() */

void __thiscall TeamMemberItem::~TeamMemberItem(TeamMemberItem *this)

{
  ~TeamMemberItem(this);
  AK::FreeHook(this);
  return;
}


/* TeamMemberItem::TeamMemberItem() */

void __thiscall TeamMemberItem::TeamMemberItem(TeamMemberItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined ***)this = &PTR_GetClass_069ee890;
  *(undefined **)(this + 0xd8) = &DAT_069eebb8;
  FUN_05476574(this + 0xe8);
  *(undefined4 *)(this + 0xf0) = 0;
  this[0xf4] = (TeamMemberItem)0x0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  this[0x104] = (TeamMemberItem)0x0;
  this[0x105] = (TeamMemberItem)0x1;
  *(undefined8 *)(this + 0x108) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamMemberItem::createAgreeButton() */

void __thiscall TeamMemberItem::createAgreeButton(TeamMemberItem *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ2UIButton *pPVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_88 [8];
  wstring awStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[BUTTON_AGREE]");
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar5 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar5,1,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba1570,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ba1490,3);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar1 = FUN_04e967b8(0x122);
  uVar2 = FUN_04e967b8(5);
  uVar3 = FUN_04e967b8(0x50);
  uVar4 = FUN_04e967b8(0x2d);
  (**(code **)(*(long *)pPVar5 + 0x198))(pPVar5,uVar1,uVar2,uVar3,uVar4);
  pcVar7 = *(code **)(*(long *)pPVar5 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  (*pcVar7)(pPVar5,uVar6);
  PVZ2UIButton::SetLabelText(pPVar5,awStack_80);
  (**(code **)(*(long *)this + 0x60))(this,pPVar5);
  TodStringTranslate(L"[BUTTON_DISAGREE]");
  FUN_054766c8(awStack_80,aPStack_40);
  FUN_05476c50(aPStack_40);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_88);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar5 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar5,2,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ba1570,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ba1490,3);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar1 = FUN_04e967b8(0x17c);
  uVar2 = FUN_04e967b8(5);
  uVar3 = FUN_04e967b8(0x50);
  uVar4 = FUN_04e967b8(0x2d);
  (**(code **)(*(long *)pPVar5 + 0x198))(pPVar5,uVar1,uVar2,uVar3,uVar4);
  pcVar7 = *(code **)(*(long *)pPVar5 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  (*pcVar7)(pPVar5,uVar6);
  PVZ2UIButton::SetLabelText(pPVar5,awStack_80);
  (**(code **)(*(long *)this + 0x60))(this,pPVar5);
  FUN_05476c50(awStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamMemberItem::createReceiveButton() */

void __thiscall TeamMemberItem::createReceiveButton(TeamMemberItem *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  PVZ2UIButton *this_00;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_88 [8];
  string asStack_80 [8];
  Insets aIStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x100)) {
    TodStringTranslate(L"[INGAME_RESTORE_PURCHASE_ITEM_BUTTON]");
    FUN_05478178(aIStack_78,&DAT_056f11a8,asStack_80);
    Sexy::Color::Color((Color *)aIStack_40,1);
    this_00 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (this_00,0,(ButtonListener *)(this + 0xd8),(wstring *)aIStack_78,(Color *)aIStack_40);
    FUN_05476c50(aIStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_78,&DAT_06ba1570,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ba1490,3);
    PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)aIStack_78,(PVZ2UIImage *)aIStack_40);
    uVar1 = FUN_04e967b8(0x122);
    uVar2 = FUN_04e967b8(5);
    uVar3 = FUN_04e967b8(100);
    uVar4 = FUN_04e967b8(0x2d);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
    pcVar10 = *(code **)(*(long *)this_00 + 800);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    (*pcVar10)(this_00,uVar9);
    iVar5 = FUN_04e967b8(5);
    iVar6 = FUN_04e967b8(7);
    iVar7 = FUN_04e967b8(0x3c);
    iVar8 = FUN_04e967b8(0x1e);
    Sexy::Insets::Insets(aIStack_40,iVar5,iVar6,iVar7,iVar8);
    PVZ2UIButton::AddText(this_00,auStack_88,aIStack_40,0xffffffff);
    std::string::string(asStack_80,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_TOURISM_OCTOBER");
    uVar9 = StringHelper::ToImage(asStack_80,false);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,uVar9,9);
    iVar5 = FUN_04e967b8(0x2d);
    iVar6 = FUN_04e967b8(2);
    iVar7 = FUN_04e967b8(0x28);
    Sexy::Insets::Insets(aIStack_78,iVar5,iVar6,iVar7,iVar7);
    PVZ2UIButton::AddImage(this_00,(PVZ2UIImage *)aIStack_40,(TRect *)aIStack_78);
    std::string::~string(asStack_80);
    nop();
    Sexy::StrFormat("X%d",asStack_80,(ulong)*(uint *)(this + 0x100));
    Sexy::ToWString(asStack_80);
    iVar5 = FUN_04e967b8(0x41);
    iVar6 = FUN_04e967b8(0xf);
    iVar7 = FUN_04e967b8(0x1e);
    Sexy::Insets::Insets(aIStack_40,iVar5,iVar6,iVar7,iVar7);
    PVZ2UIButton::AddText(this_00,aIStack_78,aIStack_40,1);
    FUN_05476c50(aIStack_78);
    std::string::~string(asStack_80);
    *(PVZ2UIButton **)(this + 0x108) = this_00;
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    FUN_05476c50(auStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TeamMemberItem::Refresh(int) */

void __thiscall TeamMemberItem::Refresh(TeamMemberItem *this,int param_1)

{
  UIHeadshotIcon *this_00;
  
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  if (-1 < *(int *)(this + 0xf0)) {
    this_00 = (UIHeadshotIcon *)UIHeadshotIcon::create(*(int *)(this + 0xf0));
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    UIHeadshotIcon::setScale(this_00,0.5,0.5);
    UIHeadshotIcon::setPostion(this_00,-8.0,-16.0);
    UIHeadshotIcon::changeHeadshot(this_00,*(int *)(this + 0xf0),(bool)this[0xf4]);
  }
  if (param_1 == 2) {
    createAgreeButton(this);
    return;
  }
  if (param_1 == 3) {
    this[0x105] = (TeamMemberItem)0x0;
    return;
  }
  if (param_1 != 1) {
    return;
  }
  createReceiveButton(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamMemberItem::Draw(Sexy::Graphics*) */

void __thiscall TeamMemberItem::Draw(TeamMemberItem *this,Graphics *param_1)

{
  TeamMemberItem TVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  Image *pIVar7;
  undefined8 uVar8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  string *extraout_x1;
  string *extraout_x1_00;
  string asStack_60 [8];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  Insets aIStack_48 [16];
  int local_38 [4];
  Sexy aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(param_1 + 0x30) < 1) || (*(int *)(param_1 + 0x34) < 1)) goto LAB_04e9ac50;
  if (this[0x105] == (TeamMemberItem)0x0) {
    iVar2 = FUN_04e967b8(10);
    if (*(int *)(this + 0xf0) < 0) goto LAB_04e9ad6c;
LAB_04e9abcc:
    iVar3 = FUN_04e967b8(100);
    iVar2 = iVar2 + iVar3;
    TVar1 = this[0x104];
  }
  else {
    iVar2 = FUN_04e967b8(7);
    iVar3 = FUN_04e967b8(9);
    iVar4 = FUN_04e967b8(300);
    Sexy::Insets::Insets((Insets *)&local_58,-iVar2,-iVar3,iVar4,*(int *)(this + 0x54) + iVar3 * 2);
    iVar2 = *(int *)(this + 0xe0);
    Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar3 = PVPManager::GetPVPProfileId();
    if (iVar2 == iVar3) {
      GetGameItemInfo(*(int *)(this + 0xfc),0x7fffffff,0);
      if (local_38[0] != 0) {
        Sexy::Upper(aSStack_28,extraout_x1_00);
        pcVar6 = "IMAGE_UI_GENERIC_LOCAL_";
        goto LAB_04e9ad14;
      }
      Sexy::Insets::Insets(aIStack_48,(Insets *)&local_58);
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba12d0;
LAB_04e9adf4:
      uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
      Draw9SliceImage(param_1,aIStack_48,uVar8);
    }
    else {
      GetGameItemInfo(*(int *)(this + 0xfc),0x7fffffff,0);
      if (local_38[0] == 0) {
        Sexy::Insets::Insets(aIStack_48,(Insets *)&local_58);
        this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1680;
        goto LAB_04e9adf4;
      }
      Sexy::Upper(aSStack_28,extraout_x1);
      pcVar6 = "IMAGE_UI_GENERIC_";
LAB_04e9ad14:
      std::operator+(pcVar6,(string *)aIStack_48);
      std::string::~string((string *)aIStack_48);
      pIVar7 = (Image *)StringHelper::ToImage(asStack_60,true);
      Sexy::Graphics::DrawImage(param_1,pIVar7,local_58,local_54,local_50,local_4c);
      std::string::~string(asStack_60);
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
    iVar2 = FUN_04e967b8(10);
    if (-1 < *(int *)(this + 0xf0)) goto LAB_04e9abcc;
LAB_04e9ad6c:
    iVar3 = FUN_04e967b8(0x32);
    iVar2 = iVar2 + iVar3;
    TVar1 = this[0x104];
  }
  if (TVar1 != (TeamMemberItem)0x0) {
    iVar3 = FUN_04e967b8(0x32);
    iVar4 = FUN_04e967b8(5);
    iVar5 = FUN_04e967b8(0x28);
    Sexy::Insets::Insets((Insets *)local_38,iVar2 - iVar3,iVar4,iVar5,iVar5);
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba1308);
    Draw9SliceImage(param_1,(Insets *)local_38,uVar8);
  }
  if (this[0x105] == (TeamMemberItem)0x0) {
    iVar2 = FUN_04e967b8(0x3d);
  }
  iVar3 = FUN_04e967b8(200);
  Sexy::Insets::Insets(aIStack_48,iVar2,0,iVar3,*(int *)(this + 0x54));
  uVar8 = PrimeText_Game::Typeface_FZCuYuan_20;
  Sexy::Color::Color((Color *)local_38,0);
  WriteWordInRect(param_1,this + 0xe8,aIStack_48,uVar8,(Color *)local_38,3,1);
LAB_04e9ac50:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamMemberItem::getReward() */

void __thiscall TeamMemberItem::getReward(TeamMemberItem *this)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_68,"tc");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x100));
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  std::string::string(asStack_68,"mpi");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V1050");
  FUN_04e96644(afStack_58,this);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TeamMemberItem::memberAction(int) */

void __thiscall TeamMemberItem::memberAction(TeamMemberItem *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_84 [7];
  string asStack_68 [8];
  string asStack_60 [8];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_84[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_68,"mpi");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  std::string::string(asStack_68,"type");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_84);
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V1052");
  FUN_04e966a0(afStack_58,local_84[0],this);
  std::string::string(asStack_60,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_68,(map *)amStack_38,30.0,(function *)afStack_58,true,true,asStack_60,0
            );
  std::string::~string(asStack_60);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
  std::string::~string(asStack_68);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TeamMemberItem::ButtonPress(int) */

void __thiscall TeamMemberItem::ButtonPress(TeamMemberItem *this,int param_1)

{
  if (param_1 == 1) {
    memberAction(this,0);
    return;
  }
  if (param_1 != 2) {
    if (param_1 != 0) {
      return;
    }
    getReward(this);
    return;
  }
  memberAction(this,1);
  return;
}


/* non-virtual thunk to TeamMemberItem::ButtonPress(int) */

void __thiscall TeamMemberItem::ButtonPress(TeamMemberItem *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


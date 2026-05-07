// Class: ArborDayHarvest


/* ArborDayHarvest::~ArborDayHarvest() */

void __thiscall ArborDayHarvest::~ArborDayHarvest(ArborDayHarvest *this)

{
  *(undefined ***)this = &PTR_GetClass_066fe920;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066fec48;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x118));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ArborDayHarvest::~ArborDayHarvest() */

void __thiscall ArborDayHarvest::~ArborDayHarvest(ArborDayHarvest *this)

{
  ~ArborDayHarvest(this);
  AK::FreeHook(this);
  return;
}


/* ArborDayHarvest::ArborDayHarvest() */

void __thiscall ArborDayHarvest::ArborDayHarvest(ArborDayHarvest *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066fe920;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066fec48;
  Sexy::Insets::Insets((Insets *)(this + 0xe8));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xf8));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x118));
  return;
}


/* ArborDayHarvest::TouchEnded(Sexy::Touch const&) */

void __thiscall ArborDayHarvest::TouchEnded(ArborDayHarvest *this,Touch *param_1)

{
  char cVar1;
  
  if ((*(int *)(this + 0xe0) == (int)*(undefined8 *)param_1) &&
     (cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0xe8),(TPoint *)(param_1 + 0x10)),
     cVar1 == '\0')) {
    UIUtil::CloseDialog((Widget *)this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayHarvest::Draw(Sexy::Graphics*) */

void __thiscall ArborDayHarvest::Draw(ArborDayHarvest *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03a22530(0x19);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0xe8),*(int *)(this + 0xec),*(int *)(this + 0xf0),
             iVar1 + *(int *)(this + 0xf4));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3388);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayHarvest::Init(int, Sexy::TRect<int> const&) */

void __thiscall ArborDayHarvest::Init(ArborDayHarvest *this,int param_1,TRect *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  PVZ2UIButton *pPVar10;
  undefined8 uVar11;
  Image *pIVar12;
  UIWidgetImage *this_00;
  SalesProgressBar *this_01;
  UIWidgetText *pUVar13;
  long lVar14;
  code *pcVar15;
  undefined4 local_80 [2];
  string asStack_78 [56];
  undefined4 local_40 [14];
  long local_8;
  
  uVar11 = *(undefined8 *)param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(int *)(this + 0xe4) = param_1;
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xe8) = uVar11;
  *(undefined8 *)(this + 0xf0) = uVar1;
  TodStringTranslate(L"[HARVEST]");
  Sexy::Color::Color((Color *)local_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,200,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)local_40);
  FUN_05476c50(asStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ac3ce8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ac37a8,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  iVar4 = FUN_03a22530(10);
  iVar2 = *(int *)(this + 0xe8);
  iVar3 = *(int *)(this + 0xec);
  uVar5 = FUN_03a22530(0x82);
  uVar6 = FUN_03a22530(0x32);
  (**(code **)(*(long *)pPVar10 + 0x198))(pPVar10,iVar4 + iVar2,iVar4 + iVar3,uVar5,uVar6);
  pcVar15 = *(code **)(*(long *)pPVar10 + 800);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
  (*pcVar15)(pPVar10,uVar11);
  (**(code **)(*(long *)this + 0x60))(this,pPVar10);
  FUN_05478178(asStack_78,&DAT_056f11a8,(ActivityTypeID *)local_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar10 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar10,0xc9,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)local_40);
  FUN_05476c50(asStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06ac3ce8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ac37a8,3);
  PVZ2UIButton::SetDialogStates(pPVar10,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)local_40);
  iVar4 = FUN_03a22530(10);
  iVar2 = *(int *)(this + 0xe8);
  iVar7 = FUN_03a22530(0x41);
  iVar3 = *(int *)(this + 0xec);
  uVar5 = FUN_03a22530(0x82);
  uVar6 = FUN_03a22530(0x32);
  (**(code **)(*(long *)pPVar10 + 0x198))(pPVar10,iVar4 + iVar2,iVar7 + iVar3,uVar5,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,pPVar10);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3708);
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,pIVar12);
  uVar5 = FUN_03a22530(6);
  uVar6 = FUN_03a22530(10);
  uVar8 = FUN_03a22530(0x19);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar5,uVar6,uVar8,uVar8);
  local_40[0] = 2;
  UIWidgetImage::SetImageType(this_00,(string *)local_40,0.0);
  lVar14 = *(long *)pPVar10;
  this_00[0x6d] = (UIWidgetImage)0x0;
  (**(code **)(lVar14 + 0x60))(pPVar10,this_00);
  local_80[0] = 10;
  this_01 = (SalesProgressBar *)UISingletonDialog<UIArborDay>::GetSingletonPtr();
  if (this_01 != (SalesProgressBar *)0x0) {
    local_80[0] = SalesProgressBar::GetCurrentPieces(this_01);
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_80);
  std::operator+("X",(string *)local_40);
  std::string::~string((string *)local_40);
  Sexy::ToWString(asStack_78);
  pUVar13 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar13,(wstring *)local_40);
  FUN_05476c50((string *)local_40);
  uVar5 = FUN_03a22530(0x1e);
  uVar6 = FUN_03a22530(8);
  uVar8 = FUN_03a22530(0x28);
  (**(code **)(*(long *)pUVar13 + 0x198))(pUVar13,uVar5,uVar6,uVar8,uVar5);
  UIWidgetText::SetFontIndex(pUVar13,0xd);
  pcVar15 = *(code **)(*(long *)pUVar13 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar15)(pUVar13,0,(string *)local_40);
  FUN_03a2072c(pUVar13 + 0xe0,5);
  lVar14 = *(long *)pPVar10;
  pUVar13[0x6d] = (UIWidgetText)0x0;
  (**(code **)(lVar14 + 0x60))(pPVar10,pUVar13);
  TodStringTranslate(L"[BUTTON_REFRESH]");
  pUVar13 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar13,(wstring *)local_40);
  FUN_05476c50((string *)local_40);
  uVar5 = FUN_03a22530(0x46);
  uVar6 = FUN_03a22530(10);
  uVar8 = FUN_03a22530(0x32);
  uVar9 = FUN_03a22530(0x1e);
  (**(code **)(*(long *)pUVar13 + 0x198))(pUVar13,uVar5,uVar6,uVar8,uVar9);
  UIWidgetText::SetFontIndex(pUVar13,0x7c);
  pcVar15 = *(code **)(*(long *)pUVar13 + 0x170);
  Sexy::Color::Color((Color *)local_40,1);
  (*pcVar15)(pUVar13,0,(string *)local_40);
  FUN_03a2072c(pUVar13 + 0xe0,5);
  lVar14 = *(long *)pPVar10;
  pUVar13[0x6d] = (UIWidgetText)0x0;
  (**(code **)(lVar14 + 0x60))(pPVar10,pUVar13);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayHarvest::RequestHarvest(int) */

void __thiscall ArborDayHarvest::RequestHarvest(ArborDayHarvest *this,int param_1)

{
  undefined8 uVar1;
  DNetwork *this_00;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2576];
  string asStack_2d8 [720];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"ai");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe4));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a220e0(afStack_d38,this,local_d54[0]);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_2d8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* ArborDayHarvest::ButtonDepress(int) */

void __thiscall ArborDayHarvest::ButtonDepress(ArborDayHarvest *this,int param_1)

{
  if (param_1 == 200) {
    RequestHarvest(this,0);
    return;
  }
  if (param_1 == 0xc9) {
    RequestHarvest(this,1);
    return;
  }
  return;
}


/* non-virtual thunk to ArborDayHarvest::ButtonDepress(int) */

void __thiscall ArborDayHarvest::ButtonDepress(ArborDayHarvest *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


// Class: UIPlantPedia


/* UIPlantPedia::UIPlantPedia() */

void __thiscall UIPlantPedia::UIPlantPedia(UIPlantPedia *this)

{
  UISingletonDialog<UIPlantPedia>::UISingletonDialog((UISingletonDialog<UIPlantPedia> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066ba4f0;
  *(undefined **)(this + 0xd8) = &DAT_066ba850;
  *(undefined ***)(this + 0x138) = &PTR__UIPlantPedia_066ba898;
  return;
}


/* UIPlantPedia::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPlantPedia::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPlantPedia::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIPlantPedia::ScrollTargetReached(UIPlantPedia *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIPlantPedia::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPlantPedia::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPlantPedia::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIPlantPedia::ScrollTargetInterrupted(UIPlantPedia *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantPedia::GetLayoutName() */

void __thiscall UIPlantPedia::GetLayoutName(UIPlantPedia *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPlantPedia");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPlantPedia::~UIPlantPedia() */

void __thiscall UIPlantPedia::~UIPlantPedia(UIPlantPedia *this)

{
  *(undefined ***)this = &PTR_GetClass_066ba4f0;
  *(undefined **)(this + 0xd8) = &DAT_066ba850;
  *(undefined ***)(this + 0x138) = &PTR__UIPlantPedia_066ba898;
  UISingletonDialog<UIPlantPedia>::~UISingletonDialog((UISingletonDialog<UIPlantPedia> *)this);
  return;
}


/* non-virtual thunk to UIPlantPedia::~UIPlantPedia() */

void __thiscall UIPlantPedia::~UIPlantPedia(UIPlantPedia *this)

{
  ~UIPlantPedia(this + -0x138);
  return;
}


/* UIPlantPedia::~UIPlantPedia() */

void __thiscall UIPlantPedia::~UIPlantPedia(UIPlantPedia *this)

{
  ~UIPlantPedia(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPlantPedia::~UIPlantPedia() */

void __thiscall UIPlantPedia::~UIPlantPedia(UIPlantPedia *this)

{
  ~UIPlantPedia(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantPedia::OnCreate() */

void __thiscall UIPlantPedia::OnCreate(UIPlantPedia *this)

{
  long lVar1;
  int iVar2;
  UIWidgetBackground *pUVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar3 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar3 + 0x50)) / 2;
  iVar2 = FUN_038d21cc(0x1e);
  lVar1 = ___stack_chk_guard;
  *(int *)(pUVar3 + 0x4c) = *(int *)(pUVar3 + 0x4c) - iVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIPlantPedia::ButtonDepress(int) */

void __thiscall UIPlantPedia::ButtonDepress(UIPlantPedia *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UIPlantPedia>::CloseDialog();
  return;
}


/* non-virtual thunk to UIPlantPedia::ButtonDepress(int) */

void __thiscall UIPlantPedia::ButtonDepress(UIPlantPedia *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlantPedia::SetPlant(std::string const&) */

void __thiscall UIPlantPedia::SetPlant(UIPlantPedia *this,string *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  NameMapperBase *this_00;
  UIWidgetText *pUVar7;
  undefined8 uVar8;
  UIWidgetImage *pUVar9;
  TextScollingWidget *this_01;
  PrimeTypeface *pPVar10;
  PVZ2UIScrollingWidget *this_02;
  Widget *this_03;
  Image *pIVar11;
  UIWidgetImage *this_04;
  PlantPediaManager *this_05;
  TGALogMgr *this_06;
  DNetwork *this_07;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  string *extraout_x1_05;
  string *psVar12;
  char *__s;
  long lVar13;
  wstring *__n;
  int iVar14;
  ulong uVar15;
  undefined4 local_d4c;
  string asStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  wstring awStack_d18 [48];
  undefined4 local_ce8 [2];
  string asStack_ce0 [8];
  undefined1 auStack_cd8 [3248];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  local_d4c = NameMapperBase::GetIdForName(this_00,param_1);
  std::string::string((string *)local_ce8,"UIText_PlantName");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_ce8);
  std::string::~string((string *)local_ce8);
  nop();
  Sexy::StringToUpper((Sexy *)param_1,extraout_x1);
  uVar8 = FUN_0547429c(asStack_d48);
  Sexy::StrFormat("[%s]",asStack_d40,uVar8);
  Sexy::ToWString(asStack_d40);
  TodStringTranslate(awStack_d18);
  PuzzleTip::SetTip(pUVar7,(string *)local_ce8);
  FUN_05476c50((string *)local_ce8);
  FUN_05476c50(awStack_d18);
  std::string::~string(asStack_d40);
  std::string::~string(asStack_d48);
  std::string::string((string *)local_ce8,"UIText_Family");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_ce8);
  std::string::~string((string *)local_ce8);
  nop();
  Sexy::StringToUpper((Sexy *)param_1,extraout_x1_00);
  uVar8 = FUN_0547429c(asStack_d48);
  Sexy::StrFormat("[%s_FAMILY]",asStack_d40,uVar8);
  Sexy::ToWString(asStack_d40);
  TodStringTranslate(awStack_d18);
  PuzzleTip::SetTip(pUVar7,(string *)local_ce8);
  FUN_05476c50((string *)local_ce8);
  FUN_05476c50(awStack_d18);
  std::string::~string(asStack_d40);
  std::string::~string(asStack_d48);
  std::string::string((string *)local_ce8,"UIText_Genus");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_ce8);
  std::string::~string((string *)local_ce8);
  nop();
  Sexy::StringToUpper((Sexy *)param_1,extraout_x1_01);
  uVar8 = FUN_0547429c(asStack_d48);
  Sexy::StrFormat("[%s_GENUS]",asStack_d40,uVar8);
  Sexy::ToWString(asStack_d40);
  TodStringTranslate(awStack_d18);
  PuzzleTip::SetTip(pUVar7,(string *)local_ce8);
  FUN_05476c50((string *)local_ce8);
  FUN_05476c50(awStack_d18);
  std::string::~string(asStack_d40);
  std::string::~string(asStack_d48);
  std::string::string((string *)local_ce8,"UIImage_Content");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_ce8);
  std::string::~string((string *)local_ce8);
  nop();
  this_01 = ::operator_new(0x108);
  TextScollingWidget::TextScollingWidget(this_01);
  uVar3 = FUN_038d21cc(10);
  iVar4 = FUN_038d21cc(0x14);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,uVar3,uVar3,*(int *)(pUVar9 + 0x50) - iVar4,*(int *)(pUVar9 + 0x54) - iVar4);
  Sexy::Color::Color((Color *)local_ce8,0x66,0x37,0);
  TextScollingWidget::SetStringColor(this_01,(Color *)local_ce8);
  (**(code **)(*(long *)pUVar9 + 0x60))(pUVar9,this_01);
  Sexy::StringToUpper((Sexy *)param_1,extraout_x1_02);
  uVar8 = FUN_0547429c(asStack_d48);
  Sexy::StrFormat("[%s_PEDIA]",asStack_d40,uVar8);
  Sexy::ToWString(asStack_d40);
  TodStringTranslate(awStack_d18);
  pPVar10 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  TextScollingWidget::SetString(this_01,(wstring *)local_ce8,pPVar10);
  FUN_05476c50((string *)local_ce8);
  FUN_05476c50(awStack_d18);
  std::string::~string(asStack_d40);
  std::string::~string(asStack_d48);
  Sexy::StringToUpper((Sexy *)param_1,extraout_x1_03);
  uVar8 = FUN_0547429c(asStack_d40);
  Sexy::StrFormat("[%s_PEDIA_EXTRA]",awStack_d18,uVar8);
  Sexy::ToWString((string *)awStack_d18);
  cVar2 = TodStringListExists((wstring *)local_ce8);
  FUN_05476c50((string *)local_ce8);
  std::string::~string((string *)awStack_d18);
  std::string::~string(asStack_d40);
  if (cVar2 != '\0') {
    Sexy::StringToUpper((Sexy *)param_1,extraout_x1_04);
    uVar8 = FUN_0547429c(asStack_d48);
    Sexy::StrFormat("[%s_PEDIA_EXTRA]",asStack_d40,uVar8);
    Sexy::ToWString(asStack_d40);
    TodStringTranslate(awStack_d18);
    pPVar10 = (PrimeTypeface *)
              PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    TextScollingWidget::SetStringExtra(this_01,(wstring *)local_ce8,pPVar10);
    FUN_05476c50((string *)local_ce8);
    FUN_05476c50(awStack_d18);
    std::string::~string(asStack_d40);
    std::string::~string(asStack_d48);
  }
  uVar15 = 0;
  std::string::string((string *)local_ce8,"UIImage_Show");
  iVar4 = 0;
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_ce8);
  std::string::~string((string *)local_ce8);
  nop();
  this_02 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_02,(ScrollWidgetListener *)(this + 0x138));
  this_03 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_03);
  uVar3 = FUN_038d21cc(10);
  iVar5 = FUN_038d21cc(0x14);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,uVar3,uVar3,*(int *)(pUVar9 + 0x50) - iVar5,*(int *)(pUVar9 + 0x54) - iVar5);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_02,2);
  uVar3 = FUN_038d21cc(0);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,uVar3,uVar3,*(undefined4 *)(this_02 + 0x50),*(undefined4 *)(this_02 + 0x54));
  uVar3 = *(undefined4 *)(this_03 + 0x50);
  iVar5 = FUN_038d21cc(0x78);
  psVar12 = extraout_x1_05;
  do {
    Sexy::StringToUpper((Sexy *)param_1,psVar12);
    uVar8 = FUN_0547429c(awStack_d18);
    Sexy::StrFormat("IMAGE_UI_PLANTPEDIA_%s_%d",(string *)local_ce8,uVar8,uVar15);
    pIVar11 = (Image *)StringHelper::ToImage((string *)local_ce8,false);
    std::string::~string((string *)local_ce8);
    std::string::~string((string *)awStack_d18);
    if (pIVar11 == (Image *)0x0) break;
    this_04 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_04);
    UIWidgetImage::SetImage(this_04,pIVar11);
    local_ce8[0] = 2;
    UIWidgetImage::SetImageType(this_04,(string *)local_ce8,0.0);
    uVar6 = FUN_038d21cc(0);
    iVar4 = FUN_038d21cc(5);
    iVar14 = (int)uVar15;
    uVar1 = iVar14 + 1;
    uVar15 = (ulong)uVar1;
    (**(code **)(*(long *)this_04 + 0x198))(this_04,uVar6,(iVar4 + iVar5) * iVar14,uVar3,iVar5);
    (**(code **)(*(long *)this_03 + 0x60))(this_03,this_04);
    psVar12 = (string *)(ulong)*(uint *)(this_04 + 0x4c);
    iVar4 = *(uint *)(this_04 + 0x4c) + *(int *)(this_04 + 0x54);
  } while (uVar1 != 10);
  lVar13 = *(long *)pUVar9;
  *(int *)(this_03 + 0x54) = iVar4;
  (**(code **)(lVar13 + 0x60))(pUVar9,this_02);
  __n = *(wstring **)(*(long *)this_02 + 0x60);
  (*(code *)__n)(this_02,this_03);
  this_05 = (PlantPediaManager *)Sexy::LazySingleton<PlantPediaManager>::GetInstancePtr();
  cVar2 = PlantPediaManager::HasReceivedReward(this_05,param_1);
  if (cVar2 == '\0') {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)awStack_d18);
    std::string::string(asStack_d40,"id");
    uVar8 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)awStack_d18,asStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d4c);
    FUN_05474278(uVar8,(string *)local_ce8);
    std::string::~string((string *)local_ce8);
    std::string::~string(asStack_d40);
    nop();
    this_07 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)local_ce8);
    FUN_038d2170(afStack_d38,this,local_d4c);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    __n = awStack_d18;
    DNetwork::requestMsg
              (this_07,asStack_28,(map *)awStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)local_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)awStack_d18);
    TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_ce8);
    __s = "1";
    std::string::append((string *)local_ce8,"1",(size_t)__n);
  }
  else {
    TGAAccumulatedLoginData::TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_ce8);
    std::string::append((string *)local_ce8,"1",(size_t)__n);
    __s = "0";
  }
  std::string::append(asStack_ce0,__s,(size_t)__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_d4c);
  FUN_05474278(auStack_cd8,awStack_d18);
  std::string::~string((string *)awStack_d18);
  this_06 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPlantPediaData(this_06,(TGAPlantPediaData *)local_ce8);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)local_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


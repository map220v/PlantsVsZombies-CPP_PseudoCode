// Class: HappyVaseTaskWidget


/* HappyVaseTaskWidget::~HappyVaseTaskWidget() */

void __thiscall HappyVaseTaskWidget::~HappyVaseTaskWidget(HappyVaseTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066fb6f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066fba20;
  FUN_05476c50(this + 0x110);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* HappyVaseTaskWidget::~HappyVaseTaskWidget() */

void __thiscall HappyVaseTaskWidget::~HappyVaseTaskWidget(HappyVaseTaskWidget *this)

{
  ~HappyVaseTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseTaskWidget::StaticClassInit() */

void HappyVaseTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"HappyVaseTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_03a0fe20,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HappyVaseTaskWidget::StaticGetClass() */

long * HappyVaseTaskWidget::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseTaskWidget::GetClass() const */

long * HappyVaseTaskWidget::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseTaskWidget::HappyVaseTaskWidget() */

void __thiscall HappyVaseTaskWidget::HappyVaseTaskWidget(HappyVaseTaskWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_066fb6f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066fba20;
  FUN_05476574(this + 0xe8);
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  FUN_05476574(this + 0x110);
  Sexy::Insets::Insets((Insets *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x128));
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  return;
}


/* HappyVaseTaskWidget::StaticNew() */

HappyVaseTaskWidget * HappyVaseTaskWidget::StaticNew(void)

{
  HappyVaseTaskWidget *this;
  
  this = ::operator_new(0x160);
  HappyVaseTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseTaskWidget::InitTask(GeneralTask*) */

void __thiscall HappyVaseTaskWidget::InitTask(HappyVaseTaskWidget *this,GeneralTask *param_1)

{
  wstring *pwVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  HappyVaseBreakerTaskData *pHVar9;
  RtObject *pRVar10;
  HappyVaseBreakerTaskWorldLevelData *pHVar11;
  string *extraout_x1;
  string *extraout_x1_00;
  wchar_t *pwVar12;
  long *plVar13;
  code *pcVar14;
  PVZ2UIButton *pPVar15;
  string asStack_88 [8];
  string asStack_80 [8];
  wstring awStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  *(GeneralTask **)(this + 0x150) = param_1;
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x20));
  if (bVar2) {
    pRVar10 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
    pHVar9 = Sexy::RtObject::Cast<HappyVaseBreakerTaskData>(pRVar10);
    if (pHVar9 != (HappyVaseBreakerTaskData *)0x0) {
      *(undefined4 *)(this + 0x15c) = *(undefined4 *)(pHVar9 + 0x50);
    }
  }
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
  lVar7 = StringHelper::ToImage((string *)(lVar7 + 0x20),false);
  *(long *)(this + 0xe0) = lVar7;
  if (lVar7 == 0) {
    std::string::string((string *)&local_40,"IMAGE_UI_HAPPYVASEBREAKER_TASK_BG");
    uVar8 = StringHelper::ToImage((string *)&local_40,false);
    *(undefined8 *)(this + 0xe0) = uVar8;
    std::string::~string((string *)&local_40);
    nop();
  }
  pwVar1 = (wstring *)(this + 0xe8);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
  Sexy::ToWString((string *)(lVar7 + 0x10));
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
  TodReplaceNumberString(awStack_78,L"{NUM}",*(int *)(lVar7 + 0x28));
  FUN_054766c8(pwVar1,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  FUN_05476c50(awStack_78);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x150) + 0x20));
  if (bVar2) {
    pRVar10 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
    pHVar11 = Sexy::RtObject::Cast<HappyVaseBreakerTaskWorldLevelData>(pRVar10);
    if (pHVar11 != (HappyVaseBreakerTaskWorldLevelData *)0x0) {
      Sexy::StringToUpper((Sexy *)(pHVar11 + 0x58),extraout_x1);
      std::operator+("[",(string *)awStack_78);
      std::operator+((string *)&local_40,"]");
      std::string::~string((string *)&local_40);
      std::string::~string((string *)awStack_78);
      Sexy::ToWString(asStack_88);
      TodReplaceString(pwVar1,L"{WORLD}",awStack_78);
      FUN_054766c8(pwVar1,(Insets *)&local_40);
      FUN_05476c50((Insets *)&local_40);
      FUN_05476c50(awStack_78);
      if (pHVar11[100] == (HappyVaseBreakerTaskWorldLevelData)0x0) {
        if (pHVar11[0x65] == (HappyVaseBreakerTaskWorldLevelData)0x0) {
          pwVar12 = L"[DAVE_TAB_NORMAL]";
          goto LAB_03a11a4c;
        }
        std::string::string(asStack_80,"BOSS");
        Sexy::ToSexyString((Sexy *)asStack_80,extraout_x1_00);
        TodReplaceString(pwVar1,L"{HARD}",awStack_78);
        FUN_054766c8(pwVar1,(Insets *)&local_40);
        FUN_05476c50((Insets *)&local_40);
        FUN_05476c50(awStack_78);
        std::string::~string(asStack_80);
        nop();
      }
      else {
        pwVar12 = L"[FESTIVALGAMELEVEL_HARD_TITLE]";
LAB_03a11a4c:
        FUN_05478178(awStack_78,pwVar12,asStack_80);
        TodReplaceString(pwVar1,L"{HARD}",awStack_78);
        FUN_054766c8(pwVar1,(Insets *)&local_40);
        FUN_05476c50((Insets *)&local_40);
        FUN_05476c50(awStack_78);
        nop();
      }
      std::string::~string(asStack_88);
    }
  }
  iVar3 = FUN_03a0fa3c(0x14);
  iVar4 = FUN_03a0fa3c(400);
  iVar5 = FUN_03a0fa3c(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar3,0,iVar4,iVar5);
  *(undefined8 *)(this + 0xf0) = local_40;
  *(undefined8 *)(this + 0xf8) = uStack_38;
  iVar3 = FUN_03a0fa3c(10);
  iVar4 = FUN_03a0fa3c(0x50);
  iVar5 = FUN_03a0fa3c(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar3,iVar4,iVar5,iVar5);
  *(undefined8 *)(this + 0x118) = local_40;
  *(undefined8 *)(this + 0x120) = uStack_38;
  iVar3 = FUN_03a0fa3c(0xaa);
  iVar4 = FUN_03a0fa3c(0x50);
  iVar5 = FUN_03a0fa3c(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar3,iVar4,iVar5,iVar5);
  *(undefined8 *)(this + 0x100) = local_40;
  *(undefined8 *)(this + 0x108) = uStack_38;
  iVar3 = FUN_03a0fa3c(0x168);
  iVar4 = FUN_03a0fa3c(5);
  iVar5 = FUN_03a0fa3c(0x8c);
  iVar6 = FUN_03a0fa3c(0x28);
  Sexy::Insets::Insets((Insets *)&local_40,iVar3,iVar4,iVar5,iVar6);
  *(undefined8 *)(this + 0x128) = local_40;
  *(undefined8 *)(this + 0x130) = uStack_38;
  iVar3 = FUN_03a0fa3c(0x168);
  iVar4 = FUN_03a0fa3c(0x55);
  iVar5 = FUN_03a0fa3c(0x78);
  iVar6 = FUN_03a0fa3c(0x32);
  Sexy::Insets::Insets((Insets *)&local_40,iVar3,iVar4,iVar5,iVar6);
  pPVar15 = *(PVZ2UIButton **)(this + 0x148);
  *(undefined8 *)(this + 0x138) = local_40;
  *(undefined8 *)(this + 0x140) = uStack_38;
  if (pPVar15 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[PLANT_OBTAIN]");
    Sexy::Color::Color((Color *)&local_40,1);
    pPVar15 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar15,200,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)&local_40);
    *(PVZ2UIButton **)(this + 0x148) = pPVar15;
    FUN_05476c50(awStack_78);
    GoldenEggTaskWidget::UpdateButtonState((GoldenEggTaskWidget *)this);
    pPVar15 = *(PVZ2UIButton **)(this + 0x148);
    if (pPVar15 == (PVZ2UIButton *)0x0) goto LAB_03a118cc;
  }
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac2b68,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06ac2c30,3);
  PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(**(long **)(this + 0x148) + 0x1a0))(*(long **)(this + 0x148),this + 0x138);
  plVar13 = *(long **)(this + 0x148);
  pcVar14 = *(code **)(*plVar13 + 800);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar14)(plVar13,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x148));
LAB_03a118cc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseTaskWidget::RequestReward() */

void __thiscall HappyVaseTaskWidget::RequestReward(HappyVaseTaskWidget *this)

{
  undefined8 uVar1;
  long lVar2;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [1968];
  string asStack_538 [1328];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"i");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 8));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 0xc));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03a0f984(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_538,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* HappyVaseTaskWidget::ButtonDepress(int) */

void __thiscall HappyVaseTaskWidget::ButtonDepress(HappyVaseTaskWidget *this,int param_1)

{
  if (param_1 != 200) {
    return;
  }
  RequestReward(this);
  return;
}


/* non-virtual thunk to HappyVaseTaskWidget::ButtonDepress(int) */

void __thiscall HappyVaseTaskWidget::ButtonDepress(HappyVaseTaskWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseTaskWidget::Draw(Sexy::Graphics*) */

void __thiscall HappyVaseTaskWidget::Draw(HappyVaseTaskWidget *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Image *pIVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Sexy::Graphics::DrawImage
            (param_1,*(Image **)(this + 0xe0),0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2cb0);
  iVar2 = FUN_03a0fa3c(2);
  iVar3 = FUN_03a0fa3c(4);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,iVar2,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar3,
             *(int *)(this + 0x54) / 2);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,this + 0xe8,this + 0xf0,uVar9,aIStack_18,3,1);
  TodStringTranslate(L"[TRAVEL_LOG_PROGRASS]");
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,aIStack_28,this + 0x118,uVar9,aIStack_18,0,1);
  FUN_05476c50(aIStack_28);
  iVar2 = *(int *)(this + 0x124);
  iVar3 = *(int *)(this + 0x118);
  iVar6 = *(int *)(this + 0x120);
  iVar7 = *(int *)(this + 0x11c);
  iVar4 = FUN_03a0fa3c(100);
  iVar5 = FUN_03a0fa3c(0x12);
  Sexy::Insets::Insets((Insets *)&local_48,iVar3 + iVar6,(iVar2 << 1) / 3 + iVar7,iVar4,iVar5);
  iVar2 = *(int *)(*(long *)(this + 0x150) + 0x10);
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
  iVar3 = *(int *)(lVar10 + 0x28);
  Sexy::Insets::Insets(aIStack_18,local_48,local_44,local_40,local_3c);
  uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2a80);
  Draw3SliceImage(param_1,aIStack_18,uVar9);
  if (*(int *)(*(long *)(this + 0x150) + 0x10) == 0) {
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
    if (*(int *)(lVar10 + 0x28) < 0) {
LAB_03a1740c:
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
      uVar1 = *(uint *)(lVar10 + 0x28);
      lVar10 = *(long *)(this + 0x150);
      goto LAB_03a170dc;
    }
  }
  else {
    fVar11 = (float)NEON_fminnm((float)iVar2 / (float)iVar3,0x3f800000);
    Sexy::Insets::Insets(aIStack_18,local_48,local_44,(int)(fVar11 * (float)local_40),local_3c);
    uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2c08);
    Draw3SliceImage(param_1,aIStack_18,uVar9);
    iVar2 = *(int *)(*(long *)(this + 0x150) + 0x10);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x150) + 0x20));
    if (*(int *)(lVar10 + 0x28) < iVar2) goto LAB_03a1740c;
  }
  lVar10 = *(long *)(this + 0x150);
  uVar1 = *(uint *)(lVar10 + 0x10);
LAB_03a170dc:
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar10 + 0x20));
  Sexy::StrFormat("%d / %d",aIStack_18,(ulong)uVar1,(ulong)*(uint *)(lVar10 + 0x28));
  Sexy::ToWString((string *)aIStack_18);
  std::string::~string((string *)aIStack_18);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,auStack_60,(Insets *)&local_48,uVar9,aIStack_18,5,1);
  TodStringTranslate(L"[QUEST_REWARD_LABEL]");
  iVar2 = *(int *)(this + 0x108);
  iVar3 = *(int *)(this + 0x100);
  iVar6 = FUN_03a0fa3c(5);
  Sexy::Insets::Insets
            ((Insets *)&local_38,iVar2 + iVar3,*(int *)(this + 0x104),iVar2 + iVar6,
             iVar6 + *(int *)(this + 0x10c));
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_58,this + 0x100,uVar9,aIStack_18,0,1);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2be0);
  iVar3 = local_30;
  iVar2 = local_30 + local_38;
  iVar6 = FUN_03a0fa3c(5);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar2 + iVar6,local_34,iVar3,local_2c);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2c88);
  iVar6 = local_30;
  iVar3 = local_38;
  iVar7 = FUN_03a0fa3c(5);
  iVar4 = FUN_03a0fa3c(2);
  iVar2 = iVar4 + local_34;
  iVar5 = FUN_03a0fa3c(4);
  Sexy::Graphics::DrawImage
            (param_1,pIVar8,iVar3 + iVar6 + iVar7 + iVar4,iVar2,iVar6 - iVar5,local_2c - iVar5);
  iVar2 = FUN_03a0fa3c(5);
  Sexy::Insets::Insets
            (aIStack_28,local_38 + local_30 + iVar2,(local_2c << 1) / 3 + local_34,local_30,
             local_2c / 2);
  Sexy::StrFormat("X %d",aIStack_18,(ulong)*(uint *)(this + 0x15c));
  Sexy::ToWString((string *)aIStack_18);
  std::string::~string((string *)aIStack_18);
  uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,auStack_50,aIStack_28,uVar9,aIStack_18,2,1);
  FUN_05476c50(auStack_50);
  FUN_05476c50(auStack_58);
  FUN_05476c50(auStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


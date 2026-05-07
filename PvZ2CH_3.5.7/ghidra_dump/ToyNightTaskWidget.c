// Class: ToyNightTaskWidget


/* ToyNightTaskWidget::~ToyNightTaskWidget() */

void __thiscall ToyNightTaskWidget::~ToyNightTaskWidget(ToyNightTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066b8a10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b8d70;
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* ToyNightTaskWidget::~ToyNightTaskWidget() */

void __thiscall ToyNightTaskWidget::~ToyNightTaskWidget(ToyNightTaskWidget *this)

{
  ~ToyNightTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* ToyNightTaskWidget::ToyNightTaskWidget() */

void __thiscall ToyNightTaskWidget::ToyNightTaskWidget(ToyNightTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined ***)this = &PTR_GetClass_066b8a10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066b8d70;
  return;
}


/* ToyNightTaskWidget::StaticNew() */

ToyNightTaskWidget * ToyNightTaskWidget::StaticNew(void)

{
  ToyNightTaskWidget *this;
  
  this = ::operator_new(0x178);
  ToyNightTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightTaskWidget::StaticClassInit() */

void ToyNightTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"ToyNightTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_038c3a1c,0x178,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToyNightTaskWidget::StaticGetClass() */

long * ToyNightTaskWidget::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToyNightTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToyNightTaskWidget::GetClass() const */

long * ToyNightTaskWidget::GetClass(void)

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
  (*pcVar3)(plVar1,"ToyNightTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightTaskWidget::InitTaskTitle(int) */

void __thiscall ToyNightTaskWidget::InitTaskTitle(ToyNightTaskWidget *this,int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  size_t in_x2;
  string asStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x170) = param_1;
  Set8BytesTo0(asStack_20);
  if (param_1 == 1) {
    std::string::append(asStack_20,"[TOYNIGHT_TASK_2]",in_x2);
    *(undefined4 *)(this + 0x16c) = 1;
    uVar1 = NewAvatar::IsAvatarUnlocked(0x1e84b18);
    uVar1 = uVar1 & 0xff;
LAB_038c3c9c:
    *(uint *)(this + 0x168) = uVar1;
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_GEM_LARGE");
  }
  else {
    if (param_1 == 2) {
      std::string::append(asStack_20,"[TOYNIGHT_TASK_3]",in_x2);
      *(undefined4 *)(this + 0x16c) = 3;
      uVar1 = NewAvatar::IsAvatarUnlocked(0x1e84b18);
      *(uint *)(this + 0x168) = *(int *)(this + 0x168) + (uVar1 & 0xff);
      uVar1 = NewAvatar::IsAvatarUnlocked(0x1e84b17);
      *(uint *)(this + 0x168) = *(int *)(this + 0x168) + (uVar1 & 0xff);
      uVar1 = NewAvatar::IsAvatarUnlocked(0x1e84b16);
      uVar1 = *(int *)(this + 0x168) + (uVar1 & 0xff);
      goto LAB_038c3c9c;
    }
    if (param_1 != 0) goto LAB_038c3b54;
    std::string::append(asStack_20,"[TOYNIGHT_TASK_1]",in_x2);
    *(undefined4 *)(this + 0x16c) = 1;
    *(undefined4 *)(this + 0x168) = 1;
    std::string::string(asStack_10,"IMAGE_UI_FRAGMENT_MATERIAL_MAT_TOY_CLOCKWORK");
  }
  uVar2 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xe8) = uVar2;
  std::string::~string(asStack_10);
  nop();
LAB_038c3b54:
  Sexy::ToWString(asStack_20);
  TodReplaceNumberString(awStack_18,L"{NUM}",*(int *)(this + 0x16c));
  FUN_054766c8(this + 0xf0,asStack_10);
  FUN_05476c50(asStack_10);
  FUN_05476c50(awStack_18);
  (**(code **)(*(long *)this + 0x318))(this,0);
  std::string::~string(asStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightTaskWidget::DrawProgress(Sexy::Graphics*) */

void __thiscall ToyNightTaskWidget::DrawProgress(ToyNightTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[TRAVEL_LOG_PROGRASS]");
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,(Insets *)&local_28,this + 0x120,uVar8,aIStack_18,0,1);
  FUN_05476c50((Insets *)&local_28);
  iVar1 = *(int *)(this + 300);
  iVar2 = *(int *)(this + 0x120);
  iVar3 = *(int *)(this + 0x128);
  iVar4 = *(int *)(this + 0x124);
  iVar6 = FUN_038c310c(100);
  iVar7 = FUN_038c310c(0x12);
  Sexy::Insets::Insets((Insets *)&local_28,iVar2 + iVar3,(iVar1 << 1) / 3 + iVar4,iVar6,iVar7);
  iVar1 = *(int *)(this + 0x168);
  iVar2 = *(int *)(this + 0x16c);
  Sexy::Insets::Insets(aIStack_18,local_28,local_24,local_20,local_1c);
  uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab72d8);
  Draw9SliceImage(param_1,aIStack_18,uVar8);
  uVar9 = 0;
  if (*(int *)(this + 0x168) != 0) {
    fVar10 = (float)NEON_fminnm((float)iVar1 / (float)iVar2,0x3f800000);
    Sexy::Insets::Insets(aIStack_18,local_28,local_24,(int)(fVar10 * (float)local_20),local_1c);
    uVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab7568);
    Draw3SliceImage(param_1,aIStack_18,uVar8);
    uVar9 = *(uint *)(this + 0x168);
  }
  uVar5 = *(uint *)(this + 0x16c);
  if ((int)uVar5 < (int)uVar9) {
    uVar9 = uVar5;
  }
  Sexy::StrFormat("%d / %d",aIStack_18,(ulong)uVar9,(ulong)uVar5);
  Sexy::ToWString((string *)aIStack_18);
  std::string::~string((string *)aIStack_18);
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,auStack_30,(Insets *)&local_28,uVar8,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightTaskWidget::InitTask(GeneralTask*) */

void ToyNightTaskWidget::InitTask(GeneralTask *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  PVZ2UIButton *pPVar8;
  long *plVar9;
  code *pcVar10;
  PVZ2UIImage aPStack_158 [56];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_48;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_120,"IMAGE_UI_DIALOG_ASSET_TASK_GENERIC");
  uVar6 = StringHelper::ToImage((string *)&local_120,false);
  *(undefined8 *)(param_1 + 0xe0) = uVar6;
  std::string::~string((string *)&local_120);
  nop();
  iVar2 = FUN_038c310c(0x1e);
  iVar3 = FUN_038c310c(0x28);
  iVar5 = *(int *)(param_1 + 0x50);
  iVar4 = FUN_038c310c(0x3c);
  Sexy::Insets::Insets((Insets *)&local_120,iVar2,0,iVar5 - iVar3,iVar4);
  *(undefined8 *)(param_1 + 0xf8) = local_120;
  *(undefined8 *)(param_1 + 0x100) = uStack_118;
  iVar5 = FUN_038c310c(10);
  iVar2 = FUN_038c310c(0x4b);
  iVar3 = FUN_038c310c(0x32);
  Sexy::Insets::Insets((Insets *)&local_120,iVar5,iVar2,iVar3,iVar3);
  *(undefined8 *)(param_1 + 0x120) = local_120;
  *(undefined8 *)(param_1 + 0x128) = uStack_118;
  iVar5 = FUN_038c310c(200);
  iVar2 = FUN_038c310c(0x4b);
  iVar3 = FUN_038c310c(0x32);
  Sexy::Insets::Insets((Insets *)&local_120,iVar5,iVar2,iVar3,iVar3);
  *(undefined8 *)(param_1 + 0x108) = local_120;
  *(undefined8 *)(param_1 + 0x110) = uStack_118;
  iVar5 = FUN_038c310c(0x168);
  iVar2 = FUN_038c310c(5);
  iVar3 = FUN_038c310c(0x8c);
  iVar4 = FUN_038c310c(0x28);
  Sexy::Insets::Insets((Insets *)&local_120,iVar5,iVar2,iVar3,iVar4);
  *(undefined8 *)(param_1 + 0x130) = local_120;
  *(undefined8 *)(param_1 + 0x138) = uStack_118;
  iVar5 = FUN_038c310c(0x1a4);
  iVar2 = FUN_038c310c(0x55);
  iVar3 = FUN_038c310c(0x78);
  iVar4 = FUN_038c310c(0x32);
  Sexy::Insets::Insets((Insets *)&local_120,iVar5,iVar2,iVar3,iVar4);
  pPVar8 = *(PVZ2UIButton **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x140) = local_120;
  *(undefined8 *)(param_1 + 0x148) = uStack_118;
  if (pPVar8 == (PVZ2UIButton *)0x0) {
    TodStringTranslate(L"[PLANT_OBTAIN]");
    Sexy::Color::Color((Color *)&local_120,1);
    pPVar8 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar8,0x56c3,(ButtonListener *)(param_1 + 0xd8),(wstring *)aPStack_158,
               (Color *)&local_120);
    *(PVZ2UIButton **)(param_1 + 0x150) = pPVar8;
    FUN_05476c50(aPStack_158);
    pPVar8 = *(PVZ2UIButton **)(param_1 + 0x150);
    if (pPVar8 == (PVZ2UIButton *)0x0) goto LAB_038cc7a8;
  }
  PVZ2UIImage::PVZ2UIImage(aPStack_158,&DAT_06ab7418,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_120,&DAT_06ab7610,3);
  PVZ2UIButton::SetDialogStates(pPVar8,aPStack_158,(PVZ2UIImage *)&local_120);
  (**(code **)(**(long **)(param_1 + 0x150) + 0x1a0))(*(long **)(param_1 + 0x150),param_1 + 0x140);
  plVar9 = *(long **)(param_1 + 0x150);
  pcVar10 = *(code **)(*plVar9 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar10)(plVar9,uVar6);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,*(undefined8 *)(param_1 + 0x150));
LAB_038cc7a8:
  lVar7 = Sexy::LazySingleton<ToyNightMgr>::GetInstance();
  ToyNightData::ToyNightData((ToyNightData *)&local_120,(ToyNightData *)(lVar7 + 8));
  lVar7 = FUN_038c1ec4(local_48,(long)*(int *)(param_1 + 0x170));
  if (*(int *)(lVar7 + 8) == 0) {
    bVar1 = *(int *)(param_1 + 0x16c) != *(int *)(param_1 + 0x168);
  }
  else {
    bVar1 = *(int *)(lVar7 + 8) == 2;
  }
  (**(code **)(**(long **)(param_1 + 0x150) + 0x188))(*(long **)(param_1 + 0x150),bVar1);
  lVar7 = FUN_038c1ec4(local_48,(long)*(int *)(param_1 + 0x170));
  if (*(int *)(lVar7 + 8) == 2) {
    pPVar8 = *(PVZ2UIButton **)(param_1 + 0x150);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(pPVar8,(wstring *)aPStack_158);
    FUN_05476c50(aPStack_158);
    lVar7 = FUN_038c1ec4(local_48,(long)*(int *)(param_1 + 0x170));
  }
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(lVar7 + 4);
  iVar5 = FUN_038c310c(5);
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + iVar5;
  iVar5 = FUN_038c310c(10);
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) - iVar5;
  iVar5 = FUN_038c310c(0x3c);
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + iVar5;
  iVar5 = FUN_038c310c(7);
  *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) - iVar5;
  iVar5 = FUN_038c310c(0x55);
  lVar7 = *(long *)(param_1 + 0x150);
  *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + iVar5;
  iVar5 = FUN_038c310c(7);
  *(int *)(lVar7 + 0x4c) = *(int *)(lVar7 + 0x4c) - iVar5;
  ToyNightData::~ToyNightData((ToyNightData *)&local_120);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightTaskWidget::RequestReward() */

void __thiscall ToyNightTaskWidget::RequestReward(ToyNightTaskWidget *this)

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
  std::string::string(asStack_68,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_68);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x170));
  FUN_05474278(uVar1,asStack_60);
  std::string::~string(asStack_60);
  std::string::~string(asStack_68);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_68,"V1081");
  FUN_038c3054(afStack_58,this);
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


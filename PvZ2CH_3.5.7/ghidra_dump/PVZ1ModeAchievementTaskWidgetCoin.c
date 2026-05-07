// Class: PVZ1ModeAchievementTaskWidgetCoin


/* PVZ1ModeAchievementTaskWidgetCoin::~PVZ1ModeAchievementTaskWidgetCoin() */

void __thiscall
PVZ1ModeAchievementTaskWidgetCoin::~PVZ1ModeAchievementTaskWidgetCoin
          (PVZ1ModeAchievementTaskWidgetCoin *this)

{
  *(undefined ***)this = &PTR_GetClass_069c6d00;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ1ModeAchievementTaskWidgetCoin::~PVZ1ModeAchievementTaskWidgetCoin() */

void __thiscall
PVZ1ModeAchievementTaskWidgetCoin::~PVZ1ModeAchievementTaskWidgetCoin
          (PVZ1ModeAchievementTaskWidgetCoin *this)

{
  ~PVZ1ModeAchievementTaskWidgetCoin(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1ModeAchievementTaskWidgetCoin::PVZ1ModeAchievementTaskWidgetCoin() */

void __thiscall
PVZ1ModeAchievementTaskWidgetCoin::PVZ1ModeAchievementTaskWidgetCoin
          (PVZ1ModeAchievementTaskWidgetCoin *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069c6d00;
  return;
}


/* PVZ1ModeAchievementTaskWidgetCoin::StaticNew() */

PVZ1ModeAchievementTaskWidgetCoin * PVZ1ModeAchievementTaskWidgetCoin::StaticNew(void)

{
  PVZ1ModeAchievementTaskWidgetCoin *this;
  
  this = ::operator_new(0xe0);
  PVZ1ModeAchievementTaskWidgetCoin(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievementTaskWidgetCoin::StaticClassInit() */

void PVZ1ModeAchievementTaskWidgetCoin::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeAchievementTaskWidgetCoin");
    (*pcVar2)(plVar1,asStack_10,FUN_04dd9634,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeAchievementTaskWidgetCoin::StaticGetClass() */

long * PVZ1ModeAchievementTaskWidgetCoin::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeAchievementTaskWidgetCoin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeAchievementTaskWidgetCoin::GetClass() const */

long * PVZ1ModeAchievementTaskWidgetCoin::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeAchievementTaskWidgetCoin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievementTaskWidgetCoin::InitView() */

void __thiscall PVZ1ModeAchievementTaskWidgetCoin::InitView(PVZ1ModeAchievementTaskWidgetCoin *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Image *pIVar4;
  UIWidgetImage *this_00;
  UIWidgetImage *pUVar5;
  UIWidgetText *pUVar6;
  undefined8 uVar7;
  code *pcVar8;
  string asStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b580);
  this_00 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_00,pIVar4);
  uVar1 = FUN_04dd93e4(0);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar1,uVar1,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  local_18[0] = 2;
  UIWidgetImage::SetImageType(this_00,(wstring *)local_18,0.0);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b6c0);
  pUVar5 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar5,pIVar4);
  uVar1 = FUN_04dd93e4(8);
  uVar2 = FUN_04dd93e4(0x26);
  (**(code **)(*(long *)pUVar5 + 0x198))(pUVar5,uVar1,uVar1,uVar2,uVar2);
  local_18[0] = 2;
  UIWidgetImage::SetImageType(pUVar5,(wstring *)local_18,0.0);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,pUVar5);
  Sexy::StrFormat("x%d",asStack_20,(ulong)*(uint *)(this + 0xd4));
  Sexy::ToWString(asStack_20);
  pUVar6 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar6,(wstring *)local_18);
  FUN_05476c50((wstring *)local_18);
  std::string::~string(asStack_20);
  uVar1 = FUN_04dd93e4(0);
  uVar2 = FUN_04dd93e4(0x1b);
  uVar3 = FUN_04dd93e4(0x36);
  (**(code **)(*(long *)pUVar6 + 0x198))(pUVar6,uVar1,uVar2,uVar3,uVar2);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Shaded);
  FUN_04dd8bd4(pUVar6 + 0xe8,uVar7);
  pcVar8 = *(code **)(*(long *)pUVar6 + 0x170);
  Sexy::Color::Color((Color *)local_18,1);
  (*pcVar8)(pUVar6,0,(wstring *)local_18);
  FUN_04dd8f80(pUVar6 + 0xe0);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,pUVar6);
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9b778);
  pUVar5 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar5,pIVar4);
  uVar1 = FUN_04dd93e4(0);
  (**(code **)(*(long *)pUVar5 + 0x198))
            (pUVar5,uVar1,uVar1,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  local_18[0] = 2;
  UIWidgetImage::SetImageType(pUVar5,(wstring *)local_18,0.0);
  (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,this[0xd8]);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,pUVar5);
  std::string::string(asStack_28,"[PLANT_OBTAINED]");
  Sexy::ToWString(asStack_28);
  TodStringTranslate((wstring *)asStack_20);
  pUVar6 = ::operator_new(0x108);
  UIWidgetText::UIWidgetText(pUVar6,(wstring *)local_18);
  FUN_05476c50((wstring *)local_18);
  FUN_05476c50(asStack_20);
  std::string::~string(asStack_28);
  nop();
  uVar1 = FUN_04dd93e4(0);
  (**(code **)(*(long *)pUVar6 + 0x198))
            (pUVar6,uVar1,uVar1,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  FUN_04dd8bd4(pUVar6 + 0xe8,uVar7);
  FUN_04dd8f80(pUVar6 + 0xe0);
  pcVar8 = *(code **)(*(long *)pUVar6 + 0x170);
  Sexy::Insets::Insets((Insets *)local_18,0,0xff,0x66,0xff);
  (*pcVar8)(pUVar6,0,(wstring *)local_18);
  (**(code **)(*(long *)pUVar6 + 0x158))(pUVar6,this[0xd8]);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,pUVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeAchievementTaskWidgetCoin::PVZ1ModeAchievementTaskWidgetCoin(int, bool, Sexy::TRect<int>)
    */

void __thiscall
PVZ1ModeAchievementTaskWidgetCoin::PVZ1ModeAchievementTaskWidgetCoin
          (PVZ1ModeAchievementTaskWidgetCoin *this,undefined4 param_1,
          PVZ1ModeAchievementTaskWidgetCoin param_2,TRect *param_4)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = param_1;
  this[0xd8] = param_2;
  *(undefined ***)this = &PTR_GetClass_069c6d00;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_4);
  InitView(this);
  return;
}


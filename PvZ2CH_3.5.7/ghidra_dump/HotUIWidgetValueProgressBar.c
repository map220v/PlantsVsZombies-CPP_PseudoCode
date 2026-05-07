// Class: HotUIWidgetValueProgressBar


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetValueProgressBar::StaticClassInit() */

void HotUIWidgetValueProgressBar::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetValueProgressBar");
    (*pcVar2)(plVar1,asStack_10,FUN_033bf9a0,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetValueProgressBar::StaticGetClass() */

long * HotUIWidgetValueProgressBar::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetValueProgressBar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetValueProgressBar::init() */

void __thiscall HotUIWidgetValueProgressBar::init(HotUIWidgetValueProgressBar *this)

{
  bool bVar1;
  float *pfVar2;
  float local_10;
  float local_c;
  long local_8;
  
  local_c = 1.0;
  local_8 = ___stack_chk_guard;
  local_10 = (float)*(int *)(this + 0x210) / (float)*(int *)(this + 0x214);
  pfVar2 = eastl::min_alt<float>(&local_10,&local_c);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x218) = (float)(int)(*pfVar2 * 10.0) * 0.1;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetValueProgressBar::SetRank(int, int) */

void __thiscall
HotUIWidgetValueProgressBar::SetRank(HotUIWidgetValueProgressBar *this,int param_1,int param_2)

{
  *(int *)(this + 0x210) = param_1;
  *(int *)(this + 0x214) = param_2;
  init(this);
  return;
}


/* HotUIWidgetValueProgressBar::HotUIWidgetValueProgressBar() */

void __thiscall
HotUIWidgetValueProgressBar::HotUIWidgetValueProgressBar(HotUIWidgetValueProgressBar *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 5;
  *(undefined ***)this = &PTR_GetWidgetClass_06617630;
  *(undefined4 *)(this + 0x218) = 0;
  return;
}


/* HotUIWidgetValueProgressBar::StaticNew() */

HotUIWidgetValueProgressBar * HotUIWidgetValueProgressBar::StaticNew(void)

{
  HotUIWidgetValueProgressBar *this;
  
  this = ::operator_new(0x220);
  HotUIWidgetValueProgressBar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetValueProgressBar::drawProgress(Sexy::Graphics*) */

void __thiscall
HotUIWidgetValueProgressBar::drawProgress(HotUIWidgetValueProgressBar *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar7;
  float fVar8;
  float fVar9;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  Insets aIStack_28 [8];
  int local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_48);
  Sexy::Insets::Insets((Insets *)&local_38);
  iVar3 = FUN_033be204(0);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar3,*(int *)(this + 0x54),*(int *)(this + 0x54));
  local_38 = local_18;
  uStack_30 = uStack_10;
  fVar8 = (float)FUN_033be218(0);
  Sexy::Insets::Insets
            ((Insets *)&local_18,(int)fVar8,(int)fVar8,*(int *)(this + 0x50),*(int *)(this + 0x54));
  local_48 = local_18;
  local_40 = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_48);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9d638);
  Draw3SliceImage(param_1,(Insets *)&local_18,uVar6);
  iVar3 = FUN_033be204(2);
  Sexy::Insets::Insets
            (aIStack_28,iVar3 + (int)local_48,iVar3 + local_48._4_4_,(int)local_40 - iVar3,
             local_40._4_4_ - iVar3);
  local_20 = (int)((float)local_20 * *(float *)(this + 0x218));
  if (0.0 < *(float *)(this + 0x218)) {
    Sexy::Insets::Insets((Insets *)&local_18,aIStack_28);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9dfb0);
    Draw3SliceImage(param_1,(Insets *)&local_18,uVar6);
  }
  iVar3 = 0;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9dd50);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9dd50);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar2 = local_40._4_4_;
  iVar1 = *(int *)(this + 0x214);
  fVar8 = (float)local_40._4_4_;
  if (1 < *(int *)(this + 0x210)) {
    do {
      iVar3 = iVar3 + 1;
      fVar9 = (float)(int)local_40;
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9dd50);
      Sexy::Graphics::DrawImage
                (param_1,pIVar7,(int)((float)iVar3 * fVar9 * (1.0 / (float)iVar1)),local_48._4_4_,
                 (int)(((float)iVar4 / (float)iVar5) * fVar8),iVar2);
    } while (iVar3 < *(int *)(this + 0x210) + -1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetValueProgressBar::onDraw(Sexy::Graphics*) */

void __thiscall
HotUIWidgetValueProgressBar::onDraw(HotUIWidgetValueProgressBar *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  Insets aIStack_28 [8];
  int iStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&uStack_48);
  Sexy::Insets::Insets((Insets *)&uStack_38);
  iVar3 = FUN_033be204(0);
  Sexy::Insets::Insets((Insets *)&uStack_18,iVar3,iVar3,*(int *)(this + 0x54),*(int *)(this + 0x54))
  ;
  uStack_38 = uStack_18;
  uStack_30 = uStack_10;
  fVar8 = (float)FUN_033be218(0);
  Sexy::Insets::Insets
            ((Insets *)&uStack_18,(int)fVar8,(int)fVar8,*(int *)(this + 0x50),*(int *)(this + 0x54))
  ;
  uStack_48 = uStack_18;
  uStack_40 = uStack_10;
  Sexy::Insets::Insets((Insets *)&uStack_18,(Insets *)&uStack_48);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9d638);
  Draw3SliceImage(param_1,(Insets *)&uStack_18,uVar6);
  iVar3 = FUN_033be204(2);
  Sexy::Insets::Insets
            (aIStack_28,iVar3 + (int)uStack_48,iVar3 + uStack_48._4_4_,(int)uStack_40 - iVar3,
             uStack_40._4_4_ - iVar3);
  iStack_20 = (int)((float)iStack_20 * *(float *)(this + 0x218));
  if (0.0 < *(float *)(this + 0x218)) {
    Sexy::Insets::Insets((Insets *)&uStack_18,aIStack_28);
    uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9dfb0);
    Draw3SliceImage(param_1,(Insets *)&uStack_18,uVar6);
  }
  iVar3 = 0;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9dd50);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9dd50);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar2 = uStack_40._4_4_;
  iVar1 = *(int *)(this + 0x214);
  fVar8 = (float)uStack_40._4_4_;
  if (1 < *(int *)(this + 0x210)) {
    do {
      iVar3 = iVar3 + 1;
      fVar9 = (float)(int)uStack_40;
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9dd50);
      Sexy::Graphics::DrawImage
                (param_1,pIVar7,(int)((float)iVar3 * fVar9 * (1.0 / (float)iVar1)),uStack_48._4_4_,
                 (int)(((float)iVar4 / (float)iVar5) * fVar8),iVar2);
    } while (iVar3 < *(int *)(this + 0x210) + -1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetValueProgressBar::~HotUIWidgetValueProgressBar() */

void __thiscall
HotUIWidgetValueProgressBar::~HotUIWidgetValueProgressBar(HotUIWidgetValueProgressBar *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06617630;
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIWidgetValueProgressBar::~HotUIWidgetValueProgressBar() */

void __thiscall
HotUIWidgetValueProgressBar::~HotUIWidgetValueProgressBar(HotUIWidgetValueProgressBar *this)

{
  ~HotUIWidgetValueProgressBar(this);
  AK::FreeHook(this);
  return;
}


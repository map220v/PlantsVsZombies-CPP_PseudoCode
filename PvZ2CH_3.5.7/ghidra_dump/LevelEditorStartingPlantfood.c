// Class: LevelEditorStartingPlantfood


/* LevelEditorStartingPlantfood::~LevelEditorStartingPlantfood() */

void __thiscall
LevelEditorStartingPlantfood::~LevelEditorStartingPlantfood(LevelEditorStartingPlantfood *this)

{
  *(undefined ***)this = &PTR_GetClass_0695b410;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695b750;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorStartingPlantfood::~LevelEditorStartingPlantfood() */

void __thiscall
LevelEditorStartingPlantfood::~LevelEditorStartingPlantfood(LevelEditorStartingPlantfood *this)

{
  ~LevelEditorStartingPlantfood(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStartingPlantfood::Init() */

void __thiscall LevelEditorStartingPlantfood::Init(LevelEditorStartingPlantfood *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PVZ2UIButton *this_00;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0xc,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85720,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85720,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar1 = FUN_04b334ec(100);
  uVar2 = FUN_04b334ec(5);
  uVar3 = FUN_04b334ec(0x28);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar3);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  (**(code **)(*(long *)this + 800))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorStartingPlantfood::LevelEditorStartingPlantfood() */

void __thiscall
LevelEditorStartingPlantfood::LevelEditorStartingPlantfood(LevelEditorStartingPlantfood *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_0695b410;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695b750;
  return;
}


/* LevelEditorStartingPlantfood::Reload() */

void __thiscall LevelEditorStartingPlantfood::Reload(LevelEditorStartingPlantfood *this)

{
  CustomLevelMgr *this_00;
  undefined4 uVar1;
  
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  uVar1 = CustomLevelMgr::GetLastStandPlantfood(this_00);
  *(undefined4 *)(this + 0xe0) = uVar1;
  return;
}


/* LevelEditorStartingPlantfood::SetValue(int) */

void __thiscall
LevelEditorStartingPlantfood::SetValue(LevelEditorStartingPlantfood *this,int param_1)

{
  CustomLevelMgr *this_00;
  
  *(int *)(this + 0xe0) = param_1;
  this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  CustomLevelMgr::SetLastStandPlantfood(this_00,*(int *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorStartingPlantfood::ButtonDepress(int) */

void __thiscall
LevelEditorStartingPlantfood::ButtonDepress(LevelEditorStartingPlantfood *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LevelEditorSliderWidget *this_00;
  undefined8 uVar6;
  int local_38;
  int local_34;
  undefined1 auStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0xc) {
    (**(code **)(*(long *)this + 0xd0))(&local_38);
    this_00 = ::operator_new(0x138);
    LevelEditorSliderWidget::LevelEditorSliderWidget(this_00);
    iVar1 = *(int *)(this + 0x50);
    iVar2 = FUN_04b334ec(0x14);
    iVar3 = FUN_04b334ec(0x104);
    uVar4 = FUN_04b334ec(0x168);
    uVar5 = FUN_04b334ec(0xfa);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,local_38 + iVar1 + iVar2,local_34 - iVar3,uVar4,uVar5);
    TodStringTranslate(L"[MUTATOR_STARTING_PLANTFOOD]");
    LevelEditorSliderWidget::SetTitle((wstring *)this_00);
    FUN_05476c50(auStack_30);
    TodStringTranslate(L"[MUTATOR_STARTING_PLANTFOOD]");
    LevelEditorSliderWidget::SetDescription((wstring *)this_00);
    FUN_05476c50(auStack_30);
    FUN_04b2d7c4(this_00 + 0xec,5);
    FUN_04b2d7b4(this_00 + 0xf0,*(undefined4 *)(this + 0xe0));
    (**(code **)(*(long *)this_00 + 800))(this_00);
    uVar6 = LevelEditorUtil::ShowDialogWithTouchClose((Widget *)this_00,true);
    FUN_04b33204(afStack_28,this,uVar6);
    LevelEditorConveyorSeedPacket::SetChangeGlobalLevelCallback
              ((LevelEditorConveyorSeedPacket *)this_00,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorStartingPlantfood::ButtonDepress(int) */

void __thiscall
LevelEditorStartingPlantfood::ButtonDepress(LevelEditorStartingPlantfood *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorStartingPlantfood::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorStartingPlantfood::Draw(LevelEditorStartingPlantfood *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  
  iVar7 = 0;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85560);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85560);
  iVar1 = *(int *)(lVar6 + 0x38);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85560);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,0,0,(int)((float)iVar1 * 0.7),(int)((float)*(int *)(lVar6 + 0x3c) * 0.7)
            );
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85560);
  fVar8 = (float)*(int *)(lVar6 + 0x38) * 0.7;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b851b8);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b851b8);
  iVar1 = *(int *)(lVar6 + 0x38);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b851b8);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,(int)fVar8,0,(int)((float)iVar1 * 0.7),
             (int)((float)*(int *)(lVar6 + 0x3c) * 0.7));
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b851b8);
  fVar8 = fVar8 + (float)*(int *)(lVar6 + 0x38) * 0.7;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85268);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85268);
  iVar1 = *(int *)(lVar6 + 0x38);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85268);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,(int)fVar8,0,(int)((float)iVar1 * 0.7),
             (int)((float)*(int *)(lVar6 + 0x3c) * 0.7));
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85268);
  fVar8 = fVar8 + (float)*(int *)(lVar6 + 0x38) * 0.7;
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85218);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85218);
  iVar1 = *(int *)(lVar6 + 0x38);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85218);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,(int)fVar8,0,(int)((float)iVar1 * 0.7),
             (int)((float)*(int *)(lVar6 + 0x3c) * 0.7));
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85218);
  iVar1 = *(int *)(lVar6 + 0x38);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85340);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85340);
  iVar2 = *(int *)(lVar6 + 0x38);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85340);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,(int)(fVar8 + (float)iVar1 * 0.7),0,(int)((float)iVar2 * 0.7),
             (int)((float)*(int *)(lVar6 + 0x3c) * 0.7));
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85240);
  iVar2 = FUN_04b334ec(9);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85240);
  iVar1 = *(int *)(lVar6 + 0x38);
  lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85240);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,iVar2,iVar2,(int)((float)iVar1 * 0.7),
             (int)((float)*(int *)(lVar6 + 0x3c) * 0.7));
  if (0 < *(int *)(this + 0xe0)) {
    do {
      pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b859e8);
      iVar3 = FUN_04b334ec(0x2a);
      iVar2 = FUN_04b334ec(0xe);
      iVar2 = iVar2 * iVar7;
      iVar7 = iVar7 + 1;
      iVar4 = FUN_04b334ec(0x12);
      lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b859e8);
      iVar1 = *(int *)(lVar6 + 0x38);
      lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b859e8);
      Sexy::Graphics::DrawImage
                (param_1,pIVar5,iVar3 + iVar2,iVar4,(int)((float)iVar1 * 0.7),
                 (int)((float)*(int *)(lVar6 + 0x3c) * 0.7));
    } while (iVar7 < *(int *)(this + 0xe0));
  }
  return;
}


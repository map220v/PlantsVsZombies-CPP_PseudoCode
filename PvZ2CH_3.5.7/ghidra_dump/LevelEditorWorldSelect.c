// Class: LevelEditorWorldSelect


/* LevelEditorWorldSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void LevelEditorWorldSelect::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorWorldSelect::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorWorldSelect::ScrollTargetReached(LevelEditorWorldSelect *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* LevelEditorWorldSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LevelEditorWorldSelect::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorWorldSelect::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorWorldSelect::ScrollTargetInterrupted(LevelEditorWorldSelect *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* LevelEditorWorldSelect::SetSelectStage(std::string const&) */

void __thiscall LevelEditorWorldSelect::SetSelectStage(LevelEditorWorldSelect *this,string *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  thunk_FUN_05475e00(this + 0xe8);
  uVar6 = *(undefined8 *)(this + 0x110);
  lVar2 = FUN_04b4bba4(uVar6,*(undefined8 *)(this + 0x118));
  lVar4 = 0;
  while (lVar4 != lVar2) {
    plVar3 = (long *)FUN_04b4bbb0(uVar6,lVar4);
    lVar5 = *plVar3;
    uVar1 = std::operator==((string *)(lVar5 + 0xd8),param_1);
    *(undefined1 *)(lVar5 + 0xd1) = uVar1;
    lVar4 = lVar4 + 1;
  }
  return;
}


/* LevelEditorWorldSelect::ButtonDepress(int) */

void __thiscall LevelEditorWorldSelect::ButtonDepress(LevelEditorWorldSelect *this,int param_1)

{
  if (param_1 == 6) {
    UIUtil::CloseDialog((Widget *)this);
    return;
  }
  if (param_1 == 0x1f) {
    std::function<void(std::string_const&)>::operator()
              ((function<void(std::string_const&)> *)(this + 0xf0),(string *)(this + 0xe8));
    return;
  }
  return;
}


/* non-virtual thunk to LevelEditorWorldSelect::ButtonDepress(int) */

void __thiscall LevelEditorWorldSelect::ButtonDepress(LevelEditorWorldSelect *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWorldSelect::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorWorldSelect::Draw(LevelEditorWorldSelect *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85f70);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[CUSTOM_LEVEL_FLTER_WORLD_SELECT_TITLE]");
  iVar1 = FUN_04b4c0a8(0);
  iVar2 = FUN_04b4c0a8(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_04b4c0a8(0x19);
  iVar2 = FUN_04b4c0a8(0x46);
  iVar3 = FUN_04b4c0a8(0x28a);
  iVar4 = FUN_04b4c0a8(0x14a);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85f20);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorWorldSelect::LevelEditorWorldSelect() */

void __thiscall LevelEditorWorldSelect::LevelEditorWorldSelect(LevelEditorWorldSelect *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_069625a0;
  *(undefined ***)(this + 0xd8) = &PTR__LevelEditorWorldSelect_069628d8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06962920;
  Set8BytesTo0(this + 0xe8);
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  this[0x59] = (LevelEditorWorldSelect)0x0;
  return;
}


/* LevelEditorWorldSelect::~LevelEditorWorldSelect() */

void __thiscall LevelEditorWorldSelect::~LevelEditorWorldSelect(LevelEditorWorldSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_069625a0;
  *(undefined ***)(this + 0xd8) = &PTR__LevelEditorWorldSelect_069628d8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06962920;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<LevelEditorWorldCard*,std::allocator<LevelEditorWorldCard*>>::~vector
            ((vector<LevelEditorWorldCard*,std::allocator<LevelEditorWorldCard*>> *)(this + 0x110));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0xf0));
  std::string::~string((string *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to LevelEditorWorldSelect::~LevelEditorWorldSelect() */

void __thiscall LevelEditorWorldSelect::~LevelEditorWorldSelect(LevelEditorWorldSelect *this)

{
  ~LevelEditorWorldSelect(this + -0xd8);
  return;
}


/* LevelEditorWorldSelect::~LevelEditorWorldSelect() */

void __thiscall LevelEditorWorldSelect::~LevelEditorWorldSelect(LevelEditorWorldSelect *this)

{
  ~LevelEditorWorldSelect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LevelEditorWorldSelect::~LevelEditorWorldSelect() */

void __thiscall LevelEditorWorldSelect::~LevelEditorWorldSelect(LevelEditorWorldSelect *this)

{
  ~LevelEditorWorldSelect(this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorWorldSelect::Init(std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall LevelEditorWorldSelect::Init(LevelEditorWorldSelect *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  LevelEditorWorldCard *pLVar9;
  string *psVar10;
  ulong uVar11;
  PVZ2UIButton *pPVar12;
  undefined8 uVar13;
  ulong uVar14;
  code *pcVar15;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  LevelEditorWorldCard *local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b4c0a8(10);
  iVar2 = FUN_04b4c0a8(0x14);
  iVar3 = FUN_04b4c0a8(0x96);
  iVar4 = FUN_04b4c0a8(0x40);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar5 = FUN_04b4c0a8(0x23);
  uVar6 = FUN_04b4c0a8(0x55);
  uVar7 = FUN_04b4c0a8(0x276);
  uVar8 = FUN_04b4c0a8(300);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar5,uVar6,uVar7,uVar8);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  uVar14 = 0;
  while( true ) {
    uVar11 = FUN_04b4bb90(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar11 <= uVar14) break;
    pLVar9 = ::operator_new(0xf8);
    LevelEditorWorldCard::LevelEditorWorldCard(pLVar9);
    local_40[0] = pLVar9;
    (**(code **)(*(long *)pLVar9 + 0x198))
              (pLVar9,(iVar3 + iVar1) * ((uint)uVar14 & 3),
               (iVar4 + iVar2) * ((int)(uint)uVar14 >> 2),iVar3,iVar4);
    pLVar9 = local_40[0];
    psVar10 = (string *)FUN_04b4bb9c(*(undefined8 *)param_1,uVar14);
    LevelEditorWorldCard::Init(pLVar9,this,psVar10);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_40[0]);
    std::vector<LevelEditorWorldCard*,std::allocator<LevelEditorWorldCard*>>::push_back
              ((vector<LevelEditorWorldCard*,std::allocator<LevelEditorWorldCard*>> *)(this + 0x110)
               ,local_40);
    *(int *)(this_01 + 0x54) = *(int *)(local_40[0] + 0x4c) + *(int *)(local_40[0] + 0x54);
    uVar14 = uVar14 + 1;
  }
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::Color::Color((Color *)local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar12,0x1f,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)local_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85e18,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b85f98,3);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  uVar5 = FUN_04b4c0a8(0x10e);
  uVar6 = FUN_04b4c0a8(0x19a);
  uVar7 = FUN_04b4c0a8(0xa0);
  uVar8 = FUN_04b4c0a8(0x46);
  (**(code **)(*(long *)pPVar12 + 0x198))(pPVar12,uVar5,uVar6,uVar7,uVar8);
  pcVar15 = *(code **)(*(long *)pPVar12 + 800);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  (*pcVar15)(pPVar12,uVar13);
  (**(code **)(*(long *)this + 0x60))(this,pPVar12);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar12 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar12,6,(ButtonListener *)(this + 0xe0),awStack_78,(Color *)local_40)
  ;
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85c30,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b85bb8,2);
  PVZ2UIButton::SetDialogStates(pPVar12,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  uVar5 = FUN_04b4c0a8(0x294);
  uVar6 = FUN_04b4c0a8(0xfffffff1);
  uVar7 = FUN_04b4c0a8(0x3c);
  (**(code **)(*(long *)pPVar12 + 0x198))(pPVar12,uVar5,uVar6,uVar7,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,pPVar12);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


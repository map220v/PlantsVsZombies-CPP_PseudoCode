// Class: LevelEditorEvilDaveSeedChooser


/* LevelEditorEvilDaveSeedChooser::ScrollTargetReached(Sexy::ScrollWidget*) */

void LevelEditorEvilDaveSeedChooser::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorEvilDaveSeedChooser::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorEvilDaveSeedChooser::ScrollTargetReached
          (LevelEditorEvilDaveSeedChooser *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* LevelEditorEvilDaveSeedChooser::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LevelEditorEvilDaveSeedChooser::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorEvilDaveSeedChooser::ScrollTargetInterrupted(Sexy::ScrollWidget*)
    */

void __thiscall
LevelEditorEvilDaveSeedChooser::ScrollTargetInterrupted
          (LevelEditorEvilDaveSeedChooser *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* LevelEditorEvilDaveSeedChooser::ButtonDepress(int) */

int LevelEditorEvilDaveSeedChooser::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to LevelEditorEvilDaveSeedChooser::ButtonDepress(int) */

void __thiscall
LevelEditorEvilDaveSeedChooser::ButtonDepress(LevelEditorEvilDaveSeedChooser *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveSeedChooser::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorEvilDaveSeedChooser::Draw(LevelEditorEvilDaveSeedChooser *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x100),*(int *)(this + 0x104),*(int *)(this + 0x108),
             *(int *)(this + 0x10c));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85600);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  TodStringTranslate(L"[LEVEL_EDITOR_EVIL_DAVE_SET_ZOMBIE_TITLE]");
  iVar1 = FUN_04b334ec(0);
  iVar2 = FUN_04b334ec(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  Sexy::Insets::Insets
            (aIStack_18,*(int *)(this + 0x110),*(int *)(this + 0x114),*(int *)(this + 0x118),
             *(int *)(this + 0x11c));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorEvilDaveSeedChooser::LevelEditorEvilDaveSeedChooser() */

void __thiscall
LevelEditorEvilDaveSeedChooser::LevelEditorEvilDaveSeedChooser(LevelEditorEvilDaveSeedChooser *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0695eb70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695eea8;
  *(undefined ***)(this + 0xe0) = &PTR__LevelEditorEvilDaveSeedChooser_0695eef0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  return;
}


/* LevelEditorEvilDaveSeedChooser::~LevelEditorEvilDaveSeedChooser() */

void __thiscall
LevelEditorEvilDaveSeedChooser::~LevelEditorEvilDaveSeedChooser
          (LevelEditorEvilDaveSeedChooser *this)

{
  *(undefined ***)this = &PTR_GetClass_0695eb70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695eea8;
  *(undefined ***)(this + 0xe0) = &PTR__LevelEditorEvilDaveSeedChooser_0695eef0;
  std::vector<LevelEditorCardItem*,std::allocator<LevelEditorCardItem*>>::~vector
            ((vector<LevelEditorCardItem*,std::allocator<LevelEditorCardItem*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to LevelEditorEvilDaveSeedChooser::~LevelEditorEvilDaveSeedChooser() */

void __thiscall
LevelEditorEvilDaveSeedChooser::~LevelEditorEvilDaveSeedChooser
          (LevelEditorEvilDaveSeedChooser *this)

{
  ~LevelEditorEvilDaveSeedChooser(this + -0xe0);
  return;
}


/* LevelEditorEvilDaveSeedChooser::~LevelEditorEvilDaveSeedChooser() */

void __thiscall
LevelEditorEvilDaveSeedChooser::~LevelEditorEvilDaveSeedChooser
          (LevelEditorEvilDaveSeedChooser *this)

{
  ~LevelEditorEvilDaveSeedChooser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LevelEditorEvilDaveSeedChooser::~LevelEditorEvilDaveSeedChooser() */

void __thiscall
LevelEditorEvilDaveSeedChooser::~LevelEditorEvilDaveSeedChooser
          (LevelEditorEvilDaveSeedChooser *this)

{
  ~LevelEditorEvilDaveSeedChooser(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveSeedChooser::Init(std::function<void (LevelEditorCardInfo const&)>) */

void __thiscall
LevelEditorEvilDaveSeedChooser::Init(LevelEditorEvilDaveSeedChooser *this,function *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  Widget *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  CustomLevelMgr *this_03;
  vector *pvVar7;
  LevelEditorCardItem *pLVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  LevelEditorCardItem *local_78;
  Insets aIStack_70 [8];
  int local_68;
  undefined4 local_64;
  Insets aIStack_60 [4];
  int local_5c;
  int local_54;
  PakRecord aPStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  function<void(int,std::string)> afStack_28 [32];
  long local_8;
  
  iVar12 = 0;
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x54);
  iVar5 = *(int *)(this + 0x50);
  *(int *)(this + 0x108) = iVar5;
  *(int *)(this + 0x10c) = iVar1;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  iVar2 = FUN_04b334ec(0x14);
  *(int *)(this + 0x110) = iVar2;
  iVar3 = FUN_04b334ec(0x46);
  *(int *)(this + 0x114) = iVar3;
  iVar4 = FUN_04b334ec(0x28);
  *(int *)(this + 0x118) = iVar5 - iVar4;
  iVar5 = FUN_04b334ec(0x69);
  *(int *)(this + 0x11c) = iVar1 - iVar5;
  iVar5 = FUN_04b334ec(5);
  *(int *)(this + 0x120) = iVar2 + iVar5;
  iVar5 = FUN_04b334ec(5);
  *(int *)(this + 0x124) = iVar3 + iVar5;
  uVar6 = FUN_04b334ec(300);
  *(undefined4 *)(this + 0x128) = uVar6;
  iVar5 = FUN_04b334ec(0x46);
  *(int *)(this + 300) = iVar1 - iVar5;
  uVar6 = FUN_04b334ec(0);
  *(undefined4 *)(this + 0x130) = uVar6;
  uVar6 = FUN_04b334ec(10);
  *(undefined4 *)(this + 0x134) = uVar6;
  uVar6 = FUN_04b334ec(300);
  *(undefined4 *)(this + 0x138) = uVar6;
  iVar2 = FUN_04b334ec(0x28);
  *(int *)(this + 0x13c) = (iVar1 - iVar5) - iVar2;
  iVar5 = FUN_04b334ec(5);
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,*(undefined4 *)(this + 0x120),*(undefined4 *)(this + 0x124),
             *(undefined4 *)(this + 0x128),*(undefined4 *)(this + 300));
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe0));
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  Sexy::Insets::Insets
            (aIStack_70,*(int *)(this + 0x130),*(int *)(this + 0x134),*(int *)(this + 0x138),
             *(int *)(this + 0x13c));
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_70);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,0,0,local_68,local_64);
  local_68 = local_68 + iVar5 * -5;
  iVar1 = local_68 + 3;
  if (-1 < local_68) {
    iVar1 = local_68;
  }
  iVar1 = iVar1 >> 2;
  this_03 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  pvVar7 = (vector *)CustomLevelMgr::GetDefaultZombieListByCurrentWorld(this_03);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_40,pvVar7);
  uVar13 = 0;
  while( true ) {
    uVar10 = FUN_04b2d904(local_40,local_38);
    if (uVar10 <= uVar13) break;
    Sexy::Insets::Insets
              (aIStack_60,iVar5 + (iVar5 + iVar1) * ((uint)uVar13 & 3),
               (iVar5 + (int)((double)iVar1 * 0.65)) * ((int)(uint)uVar13 >> 2),iVar1,
               (int)((double)iVar1 * 0.65));
    pLVar8 = ::operator_new(0x110);
    LevelEditorCardItem::LevelEditorCardItem(pLVar8);
    local_78 = pLVar8;
    (**(code **)(*(long *)pLVar8 + 0x1a0))(pLVar8,aIStack_60);
    pLVar8 = local_78;
    std::function<void(int,std::string)>::function(afStack_28,param_2);
    LevelEditorCardItem::SetClickFunction(pLVar8,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_28);
    pLVar8 = local_78;
    uVar9 = FUN_04b2d910(local_40,uVar13);
    LevelEditorCardInfo::LevelEditorCardInfo((LevelEditorCardInfo *)aPStack_50,3,uVar9);
    LevelEditorCardItem::SetData(pLVar8,(LevelEditorCardInfo *)aPStack_50);
    PakRecord::~PakRecord(aPStack_50);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,local_78);
    std::vector<LevelEditorCardItem*,std::allocator<LevelEditorCardItem*>>::push_back
              ((vector<LevelEditorCardItem*,std::allocator<LevelEditorCardItem*>> *)(this + 0xe8),
               &local_78);
    iVar12 = local_5c + local_54;
    uVar13 = uVar13 + 1;
  }
  lVar11 = *(long *)this_00;
  *(int *)(this_02 + 0x54) = iVar12;
  (**(code **)(lVar11 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


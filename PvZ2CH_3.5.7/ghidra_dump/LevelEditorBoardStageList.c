// Class: LevelEditorBoardStageList


/* LevelEditorBoardStageList::SetPageIndex(int) */

void __thiscall LevelEditorBoardStageList::SetPageIndex(LevelEditorBoardStageList *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  
  iVar1 = LevelEditorZombieStageList::GetMaxPageIndex((LevelEditorZombieStageList *)this);
  plVar11 = *(long **)(this + 0xe8);
  if ((param_1 == iVar1) && (param_1 == 0)) {
    uVar10 = 1;
    *(undefined4 *)(this + 0xe0) = 0;
LAB_04b4c3a8:
    (**(code **)(*plVar11 + 0x188))(plVar11,uVar10);
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),1);
  }
  else {
    if (param_1 < 1) {
      uVar10 = 1;
      *(undefined4 *)(this + 0xe0) = 0;
    }
    else {
      uVar10 = 0;
      if (iVar1 <= param_1) {
        *(int *)(this + 0xe0) = iVar1;
        goto LAB_04b4c3a8;
      }
      *(int *)(this + 0xe0) = param_1;
    }
    (**(code **)(*plVar11 + 0x188))(plVar11,uVar10);
    (**(code **)(**(long **)(this + 0xf0) + 0x188))(*(long **)(this + 0xf0),0);
  }
  uVar12 = 0;
  while( true ) {
    uVar10 = *(undefined8 *)(this + 0xf8);
    iVar1 = (int)uVar12;
    uVar8 = FUN_04b4bb7c(uVar10,*(undefined8 *)(this + 0x100));
    if (uVar8 <= uVar12) break;
    iVar2 = *(int *)(this + 0xe0);
    iVar4 = iVar2 * 5;
    if ((iVar1 < iVar4) || (iVar4 + 5 <= iVar1)) {
      puVar9 = (undefined8 *)FUN_04b4bb88(uVar10,uVar12);
      plVar11 = (long *)*puVar9;
      iVar1 = FUN_04b4c0a8(0x8c);
      iVar2 = FUN_04b4c0a8(0x32);
      (**(code **)(*plVar11 + 0x198))(plVar11,-iVar1,-iVar2);
      puVar9 = (undefined8 *)FUN_04b4bb88(*(undefined8 *)(this + 0xf8),uVar12);
      (**(code **)(*(long *)*puVar9 + 0x158))((long *)*puVar9,0);
      uVar12 = uVar12 + 1;
    }
    else {
      puVar9 = (undefined8 *)FUN_04b4bb88(uVar10,uVar12);
      plVar11 = (long *)*puVar9;
      uVar3 = FUN_04b4c0a8(0x1e);
      iVar4 = FUN_04b4c0a8(0x50);
      iVar5 = FUN_04b4c0a8(0x3c);
      uVar6 = FUN_04b4c0a8(0x8c);
      uVar7 = FUN_04b4c0a8(0x32);
      (**(code **)(*plVar11 + 0x198))
                (plVar11,uVar3,iVar4 + iVar5 * (iVar1 + iVar2 * -5),uVar6,uVar7);
      puVar9 = (undefined8 *)FUN_04b4bb88(*(undefined8 *)(this + 0xf8),uVar12);
      (**(code **)(*(long *)*puVar9 + 0x158))((long *)*puVar9,1);
      uVar12 = uVar12 + 1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardStageList::ButtonDepress(int) */

void __thiscall
LevelEditorBoardStageList::ButtonDepress(LevelEditorBoardStageList *this,int param_1)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((uint)param_1 < 0x15) {
    uVar1 = Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    CustomLevelMgr::GetWorldByWorldType(asStack_10,uVar1,param_1);
    std::function<void(std::string_const&)>::operator()
              ((function<void(std::string_const&)> *)(this + 0x110),asStack_10);
    std::string::~string(asStack_10);
  }
  else if (param_1 == 0x25) {
    SetPageIndex(this,*(int *)(this + 0xe0) + -1);
  }
  else if (param_1 == 0x26) {
    SetPageIndex(this,*(int *)(this + 0xe0) + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorBoardStageList::ButtonDepress(int) */

void __thiscall
LevelEditorBoardStageList::ButtonDepress(LevelEditorBoardStageList *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorBoardStageList::LevelEditorBoardStageList() */

void __thiscall
LevelEditorBoardStageList::LevelEditorBoardStageList(LevelEditorBoardStageList *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06961f10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06962238;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x110));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardStageList::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorBoardStageList::Draw(LevelEditorBoardStageList *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85f70);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  TodStringTranslate(L"[CUSTOM_LEVEL_FLTER_WORLD_SELECT_TITLE]");
  iVar1 = FUN_04b4c0a8(0);
  iVar2 = FUN_04b4c0a8(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar1,*(int *)(this + 0x50),iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_HardShadow);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar2 = FUN_04b4c0a8(0x14);
  iVar3 = FUN_04b4c0a8(0x46);
  iVar4 = FUN_04b4c0a8(0x28);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_04b4c0a8(0x5a);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar3,iVar1 - iVar4,*(int *)(this + 0x54) - iVar5);
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85f20);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorBoardStageList::~LevelEditorBoardStageList() */

void __thiscall
LevelEditorBoardStageList::~LevelEditorBoardStageList(LevelEditorBoardStageList *this)

{
  *(undefined ***)this = &PTR_GetClass_06961f10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06962238;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x110));
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorBoardStageList::~LevelEditorBoardStageList() */

void __thiscall
LevelEditorBoardStageList::~LevelEditorBoardStageList(LevelEditorBoardStageList *this)

{
  ~LevelEditorBoardStageList(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorBoardStageList::Init(std::vector<std::string, std::allocator<std::string > > const&)
    */

void __thiscall LevelEditorBoardStageList::Init(LevelEditorBoardStageList *this,vector *param_1)

{
  ButtonListener *pBVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CustomLevelMgr *this_00;
  string *psVar8;
  undefined8 uVar9;
  ulong uVar10;
  PVZ2UIButton *pPVar11;
  long *plVar12;
  ulong uVar13;
  code *pcVar14;
  PVZ2UIButton *local_80;
  wstring awStack_78 [56];
  Color aCStack_40 [56];
  long local_8;
  
  pBVar1 = (ButtonListener *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  while( true ) {
    uVar10 = FUN_04b4bb90(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar10 <= uVar13) break;
    this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    psVar8 = (string *)FUN_04b4bb9c(*(undefined8 *)param_1,uVar13);
    iVar2 = CustomLevelMgr::GetWorldTypeByWorld(this_00,psVar8);
    psVar8 = (string *)FUN_04b4bb9c(*(undefined8 *)param_1,uVar13);
    Sexy::ToWString(psVar8);
    Sexy::Color::Color(aCStack_40,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton(pPVar11,iVar2,pBVar1,awStack_78,aCStack_40);
    local_80 = pPVar11;
    FUN_05476c50(awStack_78);
    pPVar11 = local_80;
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85e18,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aCStack_40,&DAT_06b85f98,3);
    PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aCStack_40);
    pPVar11 = local_80;
    iVar2 = FUN_04b4c0a8(0x8c);
    iVar3 = FUN_04b4c0a8(0x32);
    (**(code **)(*(long *)pPVar11 + 0x198))(pPVar11,-iVar2,-iVar3,iVar2,iVar3);
    pPVar11 = local_80;
    pcVar14 = *(code **)(*(long *)local_80 + 800);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
    (*pcVar14)(pPVar11,uVar9);
    (**(code **)(*(long *)this + 0x60))(this,local_80);
    (**(code **)(*(long *)local_80 + 0x158))(local_80,0);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)(this + 0xf8),&local_80);
    uVar13 = uVar13 + 1;
  }
  FUN_05478178(awStack_78,&DAT_056f11a8,&local_80);
  Sexy::Color::Color(aCStack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x25,pBVar1,awStack_78,aCStack_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar11;
  FUN_05476c50(awStack_78);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85b80,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aCStack_40,&DAT_06b85b80,2);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aCStack_40);
  plVar12 = *(long **)(this + 0xe8);
  uVar4 = FUN_04b4c0a8(10);
  uVar5 = FUN_04b4c0a8(0xdc);
  uVar6 = FUN_04b4c0a8(0x14);
  uVar7 = FUN_04b4c0a8(0x28);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar4,uVar5,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  FUN_05478178(awStack_78,&DAT_056f11a8,&local_80);
  Sexy::Color::Color(aCStack_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar11,0x26,pBVar1,awStack_78,aCStack_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar11;
  FUN_05476c50(awStack_78);
  nop();
  pPVar11 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b85b58,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aCStack_40,&DAT_06b85b58,2);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aCStack_40);
  plVar12 = *(long **)(this + 0xf0);
  uVar4 = FUN_04b4c0a8(0xaa);
  uVar5 = FUN_04b4c0a8(0xdc);
  uVar6 = FUN_04b4c0a8(0x14);
  uVar7 = FUN_04b4c0a8(0x28);
  (**(code **)(*plVar12 + 0x198))(plVar12,uVar4,uVar5,uVar6,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  SetPageIndex(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


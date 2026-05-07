// Class: LevelEditorTowerDefendZombieSelectList


/* LevelEditorTowerDefendZombieSelectList::~LevelEditorTowerDefendZombieSelectList() */

void __thiscall
LevelEditorTowerDefendZombieSelectList::~LevelEditorTowerDefendZombieSelectList
          (LevelEditorTowerDefendZombieSelectList *this)

{
  *(undefined ***)this = &PTR_GetClass_06964c70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06964fb8;
  LevelEditorZombieSelectList::~LevelEditorZombieSelectList((LevelEditorZombieSelectList *)this);
  return;
}


/* LevelEditorTowerDefendZombieSelectList::~LevelEditorTowerDefendZombieSelectList() */

void __thiscall
LevelEditorTowerDefendZombieSelectList::~LevelEditorTowerDefendZombieSelectList
          (LevelEditorTowerDefendZombieSelectList *this)

{
  ~LevelEditorTowerDefendZombieSelectList(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorTowerDefendZombieSelectList::LevelEditorTowerDefendZombieSelectList() */

void __thiscall
LevelEditorTowerDefendZombieSelectList::LevelEditorTowerDefendZombieSelectList
          (LevelEditorTowerDefendZombieSelectList *this)

{
  LevelEditorZombieSelectList::LevelEditorZombieSelectList((LevelEditorZombieSelectList *)this);
  *(undefined ***)this = &PTR_GetClass_06964c70;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06964fb8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendZombieSelectList::InitZombieList() */

void __thiscall
LevelEditorTowerDefendZombieSelectList::InitZombieList(LevelEditorTowerDefendZombieSelectList *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  int *piVar11;
  LevelEditorZombieDraggable *this_00;
  Widget *this_01;
  int iVar12;
  long *plVar13;
  string *psVar14;
  int iVar15;
  long lVar16;
  int local_80 [2];
  undefined4 local_78 [4];
  undefined8 local_68;
  undefined8 local_60;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  plVar13 = *(long **)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  if (plVar13 == (long *)0x0) {
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    *(Widget **)(this + 0xf8) = this_01;
    this_01[0x59] = (Widget)0x0;
    uVar6 = FUN_04b54f08(0x96);
    uVar7 = FUN_04b54f08(5);
    uVar8 = FUN_04b54f08(0x230);
    uVar9 = FUN_04b54f08(0x5a);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar6,uVar7,uVar8,uVar9);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    plVar13 = *(long **)(this + 0xf8);
  }
  (**(code **)(*plVar13 + 0x80))(plVar13,1,1);
  psVar14 = (string *)&local_8;
  iVar3 = FUN_04b54f08(0x4b);
  iVar1 = *(int *)(*(long *)(this + 0xf8) + 0x50);
  std::string::string(asStack_50,"zombie_towerdefend_normal");
  std::string::string(asStack_48,"zombie_towerdefend_bucket");
  std::string::string(asStack_40,"zombie_towerdefend_helmet");
  std::string::string(asStack_38,"zombie_towerdefend_knight");
  std::string::string(asStack_30,"zombie_towerdefend_jester");
  std::string::string(asStack_28,"zombie_towerdefend_gargantuar");
  std::string::string(asStack_20,"zombie_towerdefend_wizard");
  std::string::string(asStack_18,"zombie_towerdefend_wolf_fire");
  std::string::string(asStack_10,"zombie_towerdefend_wolf_imp");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_68,asStack_50,9,
             (Insets *)local_78);
  do {
    psVar14 = psVar14 + -8;
    std::string::~string(psVar14);
  } while (psVar14 != asStack_50);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  *(undefined4 *)(this + 0xe0) = 0;
  uVar10 = FUN_04b53500(local_68,local_60);
  iVar15 = *(int *)(this + 0xe8) * 7;
  local_80[0] = iVar15 + 7;
  local_78[0] = (undefined4)uVar10;
  iVar12 = (int)(uVar10 / 7);
  if (uVar10 != (uVar10 / 7) * 7) {
    iVar12 = iVar12 + 1;
  }
  *(uint *)(this + 0xe4) = iVar12 - (uint)(iVar12 != 0);
  piVar11 = eastl::min_alt<int>(local_80,(int *)local_78);
  iVar12 = *piVar11;
  lVar16 = (long)iVar15;
  if (iVar15 < iVar12) {
    do {
      iVar4 = FUN_04b54f08(0);
      iVar2 = iVar15 % 7;
      iVar5 = FUN_04b54f08(0x5a);
      iVar15 = iVar15 + 1;
      Sexy::Insets::Insets
                ((Insets *)local_78,iVar2 * (iVar3 + (iVar3 * -7 + iVar1) / 6),iVar4,iVar3,iVar5);
      this_00 = ::operator_new(0x100);
      LevelEditorZombieDraggable::LevelEditorZombieDraggable(this_00);
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,(Insets *)local_78);
      psVar14 = (string *)FUN_04b5350c(local_68,lVar16);
      LevelEditorZombieDraggable::Init(this_00,psVar14);
      (**(code **)(**(long **)(this + 0xf8) + 0x60))(*(long **)(this + 0xf8),this_00);
      lVar16 = lVar16 + 1;
    } while (iVar15 != iVar12);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendZombieSelectList::Init() */

void __thiscall
LevelEditorTowerDefendZombieSelectList::Init(LevelEditorTowerDefendZombieSelectList *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ2UIButton *pPVar5;
  long *plVar6;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar5 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar5,0x10,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar5;
  FUN_05476c50(awStack_78);
  nop();
  pPVar5 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86290,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b86290,2);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar6 = *(long **)(this + 0x108);
  uVar1 = FUN_04b54f08(0x73);
  uVar2 = FUN_04b54f08(0x14);
  uVar3 = FUN_04b54f08(0x1e);
  uVar4 = FUN_04b54f08(0x3c);
  (**(code **)(*plVar6 + 0x198))(plVar6,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar5 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar5,0x11,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x110) = pPVar5;
  FUN_05476c50(awStack_78);
  nop();
  pPVar5 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b864e0,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b864e0,2);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,aPStack_40);
  plVar6 = *(long **)(this + 0x110);
  uVar1 = FUN_04b54f08(0x2cb);
  uVar2 = FUN_04b54f08(0x14);
  uVar3 = FUN_04b54f08(0x1e);
  uVar4 = FUN_04b54f08(0x3c);
  (**(code **)(*plVar6 + 0x198))(plVar6,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  *(undefined4 *)(this + 0xe8) = 0;
  InitZombieList(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendZombieSelectList::RefreshZombiesByPage() */

void __thiscall
LevelEditorTowerDefendZombieSelectList::RefreshZombiesByPage
          (LevelEditorTowerDefendZombieSelectList *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  int *piVar11;
  LevelEditorZombieDraggable *this_00;
  Widget *this_01;
  int iVar12;
  long *plVar13;
  string *psVar14;
  int iVar15;
  long lVar16;
  int aiStack_80 [2];
  undefined4 auStack_78 [4];
  undefined8 uStack_68;
  undefined8 uStack_60;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  plVar13 = *(long **)(this + 0xf8);
  lStack_8 = ___stack_chk_guard;
  if (plVar13 == (long *)0x0) {
    this_01 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_01);
    *(Widget **)(this + 0xf8) = this_01;
    this_01[0x59] = (Widget)0x0;
    uVar6 = FUN_04b54f08(0x96);
    uVar7 = FUN_04b54f08(5);
    uVar8 = FUN_04b54f08(0x230);
    uVar9 = FUN_04b54f08(0x5a);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar6,uVar7,uVar8,uVar9);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
    plVar13 = *(long **)(this + 0xf8);
  }
  (**(code **)(*plVar13 + 0x80))(plVar13,1,1);
  psVar14 = (string *)&lStack_8;
  iVar3 = FUN_04b54f08(0x4b);
  iVar1 = *(int *)(*(long *)(this + 0xf8) + 0x50);
  std::string::string(asStack_50,"zombie_towerdefend_normal");
  std::string::string(asStack_48,"zombie_towerdefend_bucket");
  std::string::string(asStack_40,"zombie_towerdefend_helmet");
  std::string::string(asStack_38,"zombie_towerdefend_knight");
  std::string::string(asStack_30,"zombie_towerdefend_jester");
  std::string::string(asStack_28,"zombie_towerdefend_gargantuar");
  std::string::string(asStack_20,"zombie_towerdefend_wizard");
  std::string::string(asStack_18,"zombie_towerdefend_wolf_fire");
  std::string::string(asStack_10,"zombie_towerdefend_wolf_imp");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&uStack_68,asStack_50,9,
             (Insets *)auStack_78);
  do {
    psVar14 = psVar14 + -8;
    std::string::~string(psVar14);
  } while (psVar14 != asStack_50);
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  nop();
  *(undefined4 *)(this + 0xe0) = 0;
  uVar10 = FUN_04b53500(uStack_68,uStack_60);
  iVar15 = *(int *)(this + 0xe8) * 7;
  aiStack_80[0] = iVar15 + 7;
  auStack_78[0] = (undefined4)uVar10;
  iVar12 = (int)(uVar10 / 7);
  if (uVar10 != (uVar10 / 7) * 7) {
    iVar12 = iVar12 + 1;
  }
  *(uint *)(this + 0xe4) = iVar12 - (uint)(iVar12 != 0);
  piVar11 = eastl::min_alt<int>(aiStack_80,(int *)auStack_78);
  iVar12 = *piVar11;
  lVar16 = (long)iVar15;
  if (iVar15 < iVar12) {
    do {
      iVar4 = FUN_04b54f08(0);
      iVar2 = iVar15 % 7;
      iVar5 = FUN_04b54f08(0x5a);
      iVar15 = iVar15 + 1;
      Sexy::Insets::Insets
                ((Insets *)auStack_78,iVar2 * (iVar3 + (iVar3 * -7 + iVar1) / 6),iVar4,iVar3,iVar5);
      this_00 = ::operator_new(0x100);
      LevelEditorZombieDraggable::LevelEditorZombieDraggable(this_00);
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,(Insets *)auStack_78);
      psVar14 = (string *)FUN_04b5350c(uStack_68,lVar16);
      LevelEditorZombieDraggable::Init(this_00,psVar14);
      (**(code **)(**(long **)(this + 0xf8) + 0x60))(*(long **)(this + 0xf8),this_00);
      lVar16 = lVar16 + 1;
    } while (iVar15 != iVar12);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&uStack_68);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


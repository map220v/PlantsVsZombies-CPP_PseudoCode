// Class: LevelEditorSingleHandedZombieSelectList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedZombieSelectList::Init() */

void __thiscall
LevelEditorSingleHandedZombieSelectList::Init(LevelEditorSingleHandedZombieSelectList *this)

{
  ButtonListener *pBVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PVZ2UIButton *pPVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  string asStack_40 [56];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  pBVar1 = (ButtonListener *)(this + 0xd8);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,4,pBVar1,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x100) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x100);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b864b8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b864b8,3);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar8 = *(long **)(this + 0x100);
  uVar2 = FUN_04b54f08(5);
  uVar3 = FUN_04b54f08(10);
  uVar4 = FUN_04b54f08(100);
  uVar5 = FUN_04b54f08(0x50);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar5);
  plVar8 = *(long **)(this + 0x100);
  pcVar9 = *(code **)(*plVar8 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_HardShadow);
  (*pcVar9)(plVar8,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x100));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,0x10,pBVar1,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x108) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x108);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86290,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b86290,2);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar8 = *(long **)(this + 0x108);
  uVar2 = FUN_04b54f08(0x73);
  uVar3 = FUN_04b54f08(0x14);
  uVar4 = FUN_04b54f08(0x1e);
  uVar5 = FUN_04b54f08(0x3c);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x108));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)asStack_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar6,0x11,pBVar1,awStack_78,(Color *)asStack_40);
  *(PVZ2UIButton **)(this + 0x110) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0x110);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b864e0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_40,&DAT_06b864e0,2);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)asStack_40);
  plVar8 = *(long **)(this + 0x110);
  uVar2 = FUN_04b54f08(0x2cb);
  uVar3 = FUN_04b54f08(0x14);
  uVar4 = FUN_04b54f08(0x1e);
  uVar5 = FUN_04b54f08(0x3c);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar2,uVar3,uVar4,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x110));
  pcVar9 = *(code **)(*(long *)this + 800);
  std::string::string(asStack_40,"egypt");
  (*pcVar9)(this,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorSingleHandedZombieSelectList::~LevelEditorSingleHandedZombieSelectList() */

void __thiscall
LevelEditorSingleHandedZombieSelectList::~LevelEditorSingleHandedZombieSelectList
          (LevelEditorSingleHandedZombieSelectList *this)

{
  *(undefined ***)this = &PTR_GetClass_06965000;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06965348;
  LevelEditorZombieSelectList::~LevelEditorZombieSelectList((LevelEditorZombieSelectList *)this);
  return;
}


/* LevelEditorSingleHandedZombieSelectList::~LevelEditorSingleHandedZombieSelectList() */

void __thiscall
LevelEditorSingleHandedZombieSelectList::~LevelEditorSingleHandedZombieSelectList
          (LevelEditorSingleHandedZombieSelectList *this)

{
  ~LevelEditorSingleHandedZombieSelectList(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSingleHandedZombieSelectList::LevelEditorSingleHandedZombieSelectList() */

void __thiscall
LevelEditorSingleHandedZombieSelectList::LevelEditorSingleHandedZombieSelectList
          (LevelEditorSingleHandedZombieSelectList *this)

{
  LevelEditorZombieSelectList::LevelEditorZombieSelectList((LevelEditorZombieSelectList *)this);
  *(undefined ***)this = &PTR_GetClass_06965000;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06965348;
  return;
}


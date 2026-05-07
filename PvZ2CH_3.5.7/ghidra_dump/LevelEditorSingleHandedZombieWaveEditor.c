// Class: LevelEditorSingleHandedZombieWaveEditor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedZombieWaveEditor::Draw(Sexy::Graphics*) */

void __thiscall
LevelEditorSingleHandedZombieWaveEditor::Draw
          (LevelEditorSingleHandedZombieWaveEditor *this,Graphics *param_1)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b86568);
  Draw9SliceImage(param_1,aIStack_18,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorSingleHandedZombieWaveEditor::LevelEditorSingleHandedZombieWaveEditor() */

void __thiscall
LevelEditorSingleHandedZombieWaveEditor::LevelEditorSingleHandedZombieWaveEditor
          (LevelEditorSingleHandedZombieWaveEditor *this)

{
  LevelEditorZombieWaveEditor::LevelEditorZombieWaveEditor((LevelEditorZombieWaveEditor *)this);
  *(undefined ***)this = &PTR_GetClass_06965db0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069660e0;
  return;
}


/* LevelEditorSingleHandedZombieWaveEditor::~LevelEditorSingleHandedZombieWaveEditor() */

void __thiscall
LevelEditorSingleHandedZombieWaveEditor::~LevelEditorSingleHandedZombieWaveEditor
          (LevelEditorSingleHandedZombieWaveEditor *this)

{
  *(undefined ***)this = &PTR_GetClass_06965db0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069660e0;
  LevelEditorZombieWaveEditor::~LevelEditorZombieWaveEditor((LevelEditorZombieWaveEditor *)this);
  return;
}


/* LevelEditorSingleHandedZombieWaveEditor::~LevelEditorSingleHandedZombieWaveEditor() */

void __thiscall
LevelEditorSingleHandedZombieWaveEditor::~LevelEditorSingleHandedZombieWaveEditor
          (LevelEditorSingleHandedZombieWaveEditor *this)

{
  ~LevelEditorSingleHandedZombieWaveEditor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedZombieWaveEditor::Init() */

void __thiscall
LevelEditorSingleHandedZombieWaveEditor::Init(LevelEditorSingleHandedZombieWaveEditor *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  Widget *this_00;
  LevelEditorSingleHandedWaveDisplay *this_01;
  PVZ2UIButton *pPVar6;
  int iVar7;
  long *plVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  LevelEditorSingleHandedWaveDisplay *local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_00);
  uVar1 = FUN_04b54f08(0x96);
  uVar2 = FUN_04b54f08(5);
  uVar3 = FUN_04b54f08(500);
  uVar4 = FUN_04b54f08(0x19f);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  iVar7 = 0;
  do {
    this_01 = ::operator_new(0x128);
    LevelEditorSingleHandedWaveDisplay::LevelEditorSingleHandedWaveDisplay(this_01);
    iVar5 = FUN_04b54f08(0x50);
    uVar1 = FUN_04b54f08(0);
    uVar2 = FUN_04b54f08(0x19f);
    (**(code **)(*(long *)this_01 + 0x198))(this_01,-iVar5,uVar1,iVar5,uVar2);
    iVar5 = iVar7 + 1;
    (**(code **)(*(long *)this_01 + 0x318))(this_01,iVar7);
    (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
    (**(code **)(*(long *)this_01 + 0x158))(this_01,0);
    local_40[0] = this_01;
    std::vector<LevelEditorWaveDisplay*,std::allocator<LevelEditorWaveDisplay*>>::push_back
              ((vector<LevelEditorWaveDisplay*,std::allocator<LevelEditorWaveDisplay*>> *)
               (this + 0xf8),(LevelEditorWaveDisplay **)local_40);
    iVar7 = iVar5;
  } while (iVar5 != 10);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,0x10,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xe8) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0xe8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b86290,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b86290,2);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar8 = *(long **)(this + 0xe8);
  uVar1 = FUN_04b54f08(0x82);
  uVar2 = FUN_04b54f08(0xaf);
  uVar3 = FUN_04b54f08(0x14);
  uVar4 = FUN_04b54f08(0x3c);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe8));
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar6 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar6,0x11,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xf0) = pPVar6;
  FUN_05476c50(awStack_78);
  nop();
  pPVar6 = *(PVZ2UIButton **)(this + 0xf0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b864e0,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b864e0,2);
  PVZ2UIButton::SetDialogStates(pPVar6,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  plVar8 = *(long **)(this + 0xf0);
  uVar1 = FUN_04b54f08(0x294);
  uVar2 = FUN_04b54f08(0xaf);
  uVar3 = FUN_04b54f08(0x14);
  uVar4 = FUN_04b54f08(0x3c);
  (**(code **)(*plVar8 + 0x198))(plVar8,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  LevelEditorZombieWaveEditor::ChangeCurrentPage((LevelEditorZombieWaveEditor *)this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


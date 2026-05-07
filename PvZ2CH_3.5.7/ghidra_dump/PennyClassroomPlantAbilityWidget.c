// Class: PennyClassroomPlantAbilityWidget


/* PennyClassroomPlantAbilityWidget::~PennyClassroomPlantAbilityWidget() */

void __thiscall
PennyClassroomPlantAbilityWidget::~PennyClassroomPlantAbilityWidget
          (PennyClassroomPlantAbilityWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_069cf030;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PennyClassroomPlantAbilityWidget::~PennyClassroomPlantAbilityWidget() */

void __thiscall
PennyClassroomPlantAbilityWidget::~PennyClassroomPlantAbilityWidget
          (PennyClassroomPlantAbilityWidget *this)

{
  ~PennyClassroomPlantAbilityWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomPlantAbilityWidget::InitView() */

void __thiscall PennyClassroomPlantAbilityWidget::InitView(PennyClassroomPlantAbilityWidget *this)

{
  undefined8 uVar1;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("IMAGE_UI_PENNY_CLASSROOM_ABILITY_%d",asStack_20,(ulong)*(uint *)(this + 0xf0));
  uVar1 = StringHelper::ToImage(asStack_20,false);
  *(undefined8 *)(this + 0xd8) = uVar1;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x54),*(int *)(this + 0x54));
  *(undefined8 *)(this + 0xe0) = local_18;
  *(undefined8 *)(this + 0xe8) = uStack_10;
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomPlantAbilityWidget::PennyClassroomPlantAbilityWidget(int, int) */

void __thiscall
PennyClassroomPlantAbilityWidget::PennyClassroomPlantAbilityWidget
          (PennyClassroomPlantAbilityWidget *this,int param_1,int param_2)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069cf030;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  *(undefined8 *)(this + 0xd8) = 0;
  *(int *)(this + 0xf0) = param_1;
  *(int *)(this + 0xf4) = param_2;
  Sexy::Insets::Insets((Insets *)&local_18);
  this[0x59] = (PennyClassroomPlantAbilityWidget)0x0;
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0xe0) = local_18;
  *(undefined8 *)(this + 0xe8) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomPlantAbilityWidget::Draw(Sexy::Graphics*) */

void __thiscall
PennyClassroomPlantAbilityWidget::Draw(PennyClassroomPlantAbilityWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  int iVar8;
  int iVar9;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c890);
  Draw9SliceImage(param_1,aIStack_18,uVar6);
  pIVar7 = *(Image **)(this + 0xd8);
  if (pIVar7 != (Image *)0x0) {
    iVar2 = FUN_04de8b64(3);
    iVar8 = *(int *)(this + 0xe0);
    iVar1 = *(int *)(this + 0xe4);
    iVar3 = FUN_04de8b64(6);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,iVar8 - iVar2,iVar1 - iVar2,iVar3 + *(int *)(this + 0xe8),
               iVar3 + *(int *)(this + 0xec));
  }
  iVar8 = *(int *)(this + 0xe8);
  iVar1 = *(int *)(this + 0xe0);
  iVar3 = FUN_04de8b64(10);
  iVar4 = FUN_04de8b64(7);
  iVar5 = FUN_04de8b64(5);
  iVar2 = *(int *)(this + 0x54) + iVar4 * -2;
  if (0 < *(int *)(this + 0xf4)) {
    iVar9 = 0;
    iVar8 = iVar1 + iVar8 + iVar3;
    do {
      iVar9 = iVar9 + 1;
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c4c8);
      Sexy::Graphics::DrawImage(param_1,pIVar7,iVar8,iVar4,iVar2,iVar2);
      iVar8 = iVar8 + iVar5 + iVar2;
    } while (iVar9 < *(int *)(this + 0xf4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


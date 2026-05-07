// Class: PVZ2UI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UI::LinkRadioButtons(std::vector<PVZ2UIButton*, std::allocator<PVZ2UIButton*> >) */

void PVZ2UI::LinkRadioButtons(vector *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  PVZ2UIButton *pPVar4;
  undefined8 uVar5;
  vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_1;
    uVar2 = FUN_0436cac4(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_0436cad0(uVar5,uVar3);
    pPVar4 = (PVZ2UIButton *)*puVar1;
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector(avStack_20,param_1);
    PVZ2UIButton::LinkRadioButtons(pPVar4,avStack_20);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector(avStack_20);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


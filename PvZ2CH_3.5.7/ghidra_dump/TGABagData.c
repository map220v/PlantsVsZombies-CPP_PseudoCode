// Class: TGABagData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGABagData::TGABagData() */

void __thiscall TGABagData::TGABagData(TGABagData *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TGABagData::TGABagData(TGABagData const&) */

void __thiscall TGABagData::TGABagData(TGABagData *this,TGABagData *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  undefined1 auStack_8 [8];
  
  lVar5 = *(long *)param_1;
  if (*(int *)(lVar5 + -8) < 0) {
    uVar3 = FUN_05475660((undefined8 *)(lVar5 + -0x18),auStack_8,0);
    *(undefined8 *)this = uVar3;
    return;
  }
  if ((undefined8 *)(lVar5 + -0x18) != &DAT_06c4be90) {
    piVar4 = (int *)(lVar5 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(long *)this = lVar5;
  return;
}


void __thiscall TGABagData::TGABagData(TGABagData *this,TGABagData *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  undefined1 auStack_8 [8];
  
  lVar5 = *(long *)param_1;
  if (*(int *)(lVar5 + -8) < 0) {
    uVar3 = FUN_05475660((undefined8 *)(lVar5 + -0x18),auStack_8,0);
    *(undefined8 *)this = uVar3;
    return;
  }
  if ((undefined8 *)(lVar5 + -0x18) != &DAT_06c4be90) {
    piVar4 = (int *)(lVar5 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(long *)this = lVar5;
  return;
}


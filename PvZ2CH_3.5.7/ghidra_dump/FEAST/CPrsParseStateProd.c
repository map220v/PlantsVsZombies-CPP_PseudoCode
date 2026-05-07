// Class: FEAST::CPrsParseStateProd


/* FEAST::CPrsParseStateProd::operator new(unsigned long, FEAST::CPrsParser*, unsigned long) */

void * FEAST::CPrsParseStateProd::operator_new(ulong param_1,CPrsParser *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 0x8e018);
  if (0x3fff < uVar2) {
    LIB_Errorf("CPrsParseStateProd: Too many state kernel productions");
    uVar2 = *(ulong *)(param_2 + 0x8e018);
  }
  lVar1 = uVar2 * 0x20;
  *(ulong *)(param_2 + 0x8e018) = uVar2 + 1;
  *(undefined8 *)(param_2 + lVar1 + 0xe018) = 0;
  *(undefined8 *)(param_2 + lVar1 + 0xe020) = 0;
  *(undefined4 *)(param_2 + lVar1 + 0xe030) = 0;
  *(undefined8 *)(param_2 + lVar1 + 0xe028) = 0;
  return param_2 + lVar1 + 0xe018;
}


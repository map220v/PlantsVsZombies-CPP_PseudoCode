// Class: EA::Text::OTFScriptList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::OTFScriptList::GetLangSys(EA::Text::OTFTagStruct const&, EA::Text::OTFTagStruct const&,
   bool) const */

void __thiscall
EA::Text::OTFScriptList::GetLangSys
          (OTFScriptList *this,OTFTagStruct *param_1,OTFTagStruct *param_2,bool param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(short *)(this + 2) == 0) {
    if (param_3) goto LAB_0537b5bc;
LAB_0537b5c4:
    lVar4 = *(long *)(this + 8);
  }
  else {
    uVar5 = 0;
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(*(long *)(this + 8) + (ulong)uVar5 * 0x28);
      lVar3 = *(long *)(this + 8) + (ulong)uVar5 * 0x28;
      if (uVar1 == 0x44464c54) {
        lVar4 = lVar3;
      }
      OTFTagStruct::OTFTagStruct((OTFTagStruct *)local_10,uVar1);
      cVar2 = Text::operator==(local_10[0],*(undefined4 *)param_1);
      if (cVar2 != '\0') {
        cVar2 = Text::operator!=(*(undefined4 *)param_2,0);
        if ((cVar2 == '\0') || (*(short *)(lVar3 + 0x18) == 0)) goto LAB_0537b57c;
        uVar5 = 0;
        goto LAB_0537b4c4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(this + 2));
    if (param_3) {
LAB_0537b5bc:
      lVar3 = 0;
      goto LAB_0537b580;
    }
    if (lVar4 == 0) goto LAB_0537b5c4;
  }
  cVar2 = Text::operator!=(*(undefined4 *)param_2,0);
  if ((cVar2 != '\0') && (*(short *)(lVar4 + 0x18) != 0)) {
    uVar5 = 0;
    do {
      OTFTagStruct::OTFTagStruct
                ((OTFTagStruct *)local_10,*(uint *)(*(long *)(lVar4 + 0x20) + (ulong)uVar5 * 0x18));
      cVar2 = Text::operator==(local_10[0],*(undefined4 *)param_2);
      if (cVar2 != '\0') {
        lVar3 = *(long *)(lVar4 + 0x20) + (ulong)uVar5 * 0x18;
        goto LAB_0537b57c;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(lVar4 + 0x18));
  }
  lVar3 = lVar4 + 8;
LAB_0537b580:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
  while (uVar5 = uVar5 + 1, uVar5 < *(ushort *)(lVar3 + 0x18)) {
LAB_0537b4c4:
    OTFTagStruct::OTFTagStruct
              ((OTFTagStruct *)local_10,*(uint *)(*(long *)(lVar3 + 0x20) + (ulong)uVar5 * 0x18));
    cVar2 = Text::operator==(local_10[0],*(undefined4 *)param_2);
    if (cVar2 != '\0') {
      lVar3 = *(long *)(lVar3 + 0x20) + (ulong)uVar5 * 0x18 + 8;
      goto LAB_0537b580;
    }
  }
LAB_0537b57c:
  lVar3 = lVar3 + 8;
  goto LAB_0537b580;
}


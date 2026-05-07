// Class: open_vcdiff::VCDiffCodeTableData


/* open_vcdiff::VCDiffCodeTableData::ValidateOpcode(int, unsigned char, unsigned char, unsigned
   char, unsigned char, char const*) */

bool open_vcdiff::VCDiffCodeTableData::ValidateOpcode
               (int param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5,char *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (3 < param_2) {
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar2 = FUN_054603b8(uVar2,"VCDiff: Bad code table; opcode ");
    uVar2 = FUN_0546065c(uVar2,param_1);
    uVar2 = FUN_054603b8(uVar2," has invalid ");
    uVar2 = FUN_054603b8(uVar2,param_6);
    uVar2 = FUN_054603b8(uVar2," instruction type ");
    uVar2 = FUN_0546065c(uVar2,param_2);
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    CheckFatalError();
  }
  if (param_5 < param_4) {
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar2 = FUN_054603b8(uVar2,"VCDiff: Bad code table; opcode ");
    uVar2 = FUN_0546065c(uVar2,param_1);
    uVar2 = FUN_054603b8(uVar2," has invalid ");
    uVar2 = FUN_054603b8(uVar2,param_6);
    uVar2 = FUN_054603b8(uVar2," mode ");
    uVar2 = FUN_0546065c(uVar2,param_4);
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    CheckFatalError();
  }
  bVar1 = param_5 >= param_4 && 3 >= param_2;
  if ((param_2 == '\0') && (param_3 != '\0')) {
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar2 = FUN_054603b8(uVar2,"VCDiff: Bad code table; opcode ");
    uVar2 = FUN_0546065c(uVar2,param_1);
    uVar2 = FUN_054603b8(uVar2," has ");
    uVar2 = FUN_054603b8(uVar2,param_6);
    uVar2 = FUN_054603b8(uVar2," instruction NOOP with nonzero size ");
    uVar2 = FUN_0546065c(uVar2,param_3);
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    CheckFatalError();
    bVar1 = false;
  }
  if ((param_2 != '\x03') && (param_4 != '\0')) {
    uVar2 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
    uVar2 = FUN_054603b8(uVar2,"VCDiff: Bad code table; opcode ");
    uVar2 = FUN_0546065c(uVar2,param_1);
    uVar2 = FUN_054603b8(uVar2," has non-COPY ");
    uVar2 = FUN_054603b8(uVar2,param_6);
    uVar2 = FUN_054603b8(uVar2," instruction with nonzero mode ");
    uVar2 = FUN_0546065c(uVar2,param_4);
    FUN_0545f9e8(uVar2,FUN_0545fdc8);
    CheckFatalError();
    bVar1 = false;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* open_vcdiff::VCDiffCodeTableData::Validate(unsigned char) const */

void __thiscall open_vcdiff::VCDiffCodeTableData::Validate(VCDiffCodeTableData *this,uchar param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  VCDiffCodeTableData *pVVar8;
  char *pcVar9;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar4 = (param_1 - 0xc >> 4) + 1;
  uVar1 = param_1 + 4;
  uVar2 = iVar4 * 0x10;
  if (param_1 + 3 < 0xf) {
    iVar4 = 1;
    local_110 = local_110 & 0xffffffffffffff00;
  }
  else {
    uStack_108 = 0;
    local_110 = 0;
    if (iVar4 != 1) {
      uStack_f8 = 0;
      local_100 = 0;
      if (iVar4 != 2) {
        uStack_e8 = 0;
        local_f0 = 0;
        if (iVar4 != 3) {
          uStack_d8 = 0;
          local_e0 = 0;
          if (iVar4 != 4) {
            uStack_c8 = 0;
            local_d0 = 0;
            if (iVar4 != 5) {
              uStack_b8 = 0;
              local_c0 = 0;
              if (iVar4 != 6) {
                uStack_a8 = 0;
                local_b0 = 0;
                if (iVar4 != 7) {
                  uStack_98 = 0;
                  local_a0 = 0;
                  if (iVar4 != 8) {
                    uStack_88 = 0;
                    local_90 = 0;
                    if (iVar4 != 9) {
                      uStack_78 = 0;
                      local_80 = 0;
                      if (iVar4 != 10) {
                        uStack_68 = 0;
                        local_70 = 0;
                        if (iVar4 != 0xb) {
                          uStack_58 = 0;
                          local_60 = 0;
                          if (iVar4 != 0xc) {
                            uStack_48 = 0;
                            local_50 = 0;
                            if (iVar4 != 0xd) {
                              uStack_38 = 0;
                              local_40 = 0;
                              if (iVar4 != 0xe) {
                                uStack_28 = 0;
                                local_30 = 0;
                                if (iVar4 != 0xf) {
                                  uStack_18 = 0;
                                  local_20 = 0;
                                  if (iVar4 != 0x10) {
                                    lStack_8 = 0;
                                    local_10 = 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (uVar2 == uVar1) goto LAB_053f28cc;
    iVar4 = uVar2 + 1;
    *(undefined1 *)((long)&local_110 + (long)(int)uVar2) = 0;
    if ((int)uVar1 <= iVar4) goto LAB_053f28cc;
  }
  *(undefined1 *)((long)&local_110 + (long)iVar4) = 0;
  if (iVar4 + 1 < (int)uVar1) {
    *(undefined1 *)((long)&local_110 + (long)(iVar4 + 1)) = 0;
    if (iVar4 + 2 < (int)uVar1) {
      *(undefined1 *)((long)&local_110 + (long)(iVar4 + 2)) = 0;
      if (iVar4 + 3 < (int)uVar1) {
        *(undefined1 *)((long)&local_110 + (long)(iVar4 + 3)) = 0;
        if (iVar4 + 4 < (int)uVar1) {
          *(undefined1 *)((long)&local_110 + (long)(iVar4 + 4)) = 0;
          if (iVar4 + 5 < (int)uVar1) {
            *(undefined1 *)((long)&local_110 + (long)(iVar4 + 5)) = 0;
            if (iVar4 + 6 < (int)uVar1) {
              *(undefined1 *)((long)&local_110 + (long)(iVar4 + 6)) = 0;
              if (iVar4 + 7 < (int)uVar1) {
                *(undefined1 *)((long)&local_110 + (long)(iVar4 + 7)) = 0;
                if (iVar4 + 8 < (int)uVar1) {
                  *(undefined1 *)((long)&local_110 + (long)(iVar4 + 8)) = 0;
                  if (iVar4 + 9 < (int)uVar1) {
                    *(undefined1 *)((long)&local_110 + (long)(iVar4 + 9)) = 0;
                    if (iVar4 + 10 < (int)uVar1) {
                      *(undefined1 *)((long)&local_110 + (long)(iVar4 + 10)) = 0;
                      if (iVar4 + 0xb < (int)uVar1) {
                        *(undefined1 *)((long)&local_110 + (long)(iVar4 + 0xb)) = 0;
                        if (iVar4 + 0xc < (int)uVar1) {
                          *(undefined1 *)((long)&local_110 + (long)(iVar4 + 0xc)) = 0;
                          if (iVar4 + 0xd < (int)uVar1) {
                            *(undefined1 *)((long)&local_110 + (long)(iVar4 + 0xd)) = 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_053f28cc:
  iVar4 = 1;
  pVVar8 = this;
  do {
    iVar7 = (int)pVVar8 - (int)this;
    cVar3 = ValidateOpcode(iVar7,(uchar)*pVVar8,(uchar)pVVar8[0x200],(uchar)pVVar8[0x400],param_1,
                           "first");
    if ((iVar4 == 0) || (cVar3 == '\0')) {
      iVar4 = 0;
      cVar3 = ValidateOpcode(iVar7,(uchar)pVVar8[0x100],(uchar)pVVar8[0x300],(uchar)pVVar8[0x500],
                             param_1,"second");
    }
    else {
      iVar4 = 1;
      cVar3 = ValidateOpcode(iVar7,(uchar)pVVar8[0x100],(uchar)pVVar8[0x300],(uchar)pVVar8[0x500],
                             param_1,"second");
    }
    if (cVar3 == '\0') {
      iVar4 = 0;
    }
    if (((pVVar8[0x200] == (VCDiffCodeTableData)0x0) && (pVVar8[0x100] == (VCDiffCodeTableData)0x0))
       && ((uint)(byte)*pVVar8 + (uint)(byte)pVVar8[0x400] < uVar1)) {
      *(undefined1 *)
       ((long)&local_110 + (long)(int)((uint)(byte)*pVVar8 + (uint)(byte)pVVar8[0x400])) = 1;
    }
    pVVar8 = pVVar8 + 1;
  } while (pVVar8 != this + 0x100);
  iVar7 = 1;
  pcVar9 = (char *)((long)&local_110 + 1);
  if (1 < uVar1) {
    do {
      if (*pcVar9 == '\0') {
        iVar4 = 0;
        if (iVar7 < 3) {
          uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
          uVar5 = FUN_054603b8(uVar5,"VCDiff: Bad code table; there is no opcode for inst ");
          uVar6 = VCDiffInstructionName(iVar7);
          uVar5 = FUN_054603b8(uVar5,uVar6);
          uVar5 = FUN_054603b8(uVar5,", size 0,  mode 0");
          FUN_0545f9e8(uVar5,FUN_0545fdc8);
          CheckFatalError();
        }
        else {
          uVar5 = FUN_054603b8(&DAT_06c49ed0,"ERROR: ");
          uVar5 = FUN_054603b8(uVar5,
                               "VCDiff: Bad code table; there is no opcode for inst COPY, size 0, mode "
                              );
          uVar5 = FUN_0546065c(uVar5,iVar7 + -3);
          FUN_0545f9e8(uVar5,FUN_0545fdc8);
          CheckFatalError();
        }
      }
      pcVar9 = pcVar9 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* open_vcdiff::VCDiffCodeTableData::Validate() const */

void __thiscall open_vcdiff::VCDiffCodeTableData::Validate(VCDiffCodeTableData *this)

{
  uchar uVar1;
  
  uVar1 = VCDiffAddressCache::DefaultLastMode();
  Validate(this,uVar1);
  return;
}


// Class: Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ProcessJsonString(std::string&,std


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ProcessJsonString(std::string&,
   std::string const&) */

void Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ProcessJsonString(std::
     string&,std::string_const__(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  Local *this;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  string asStack_10 [8];
  long local_8;
  
  iVar9 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_05474184(param_2);
  pcVar3 = (char *)FUN_0547429c(param_2);
  if (iVar2 < 1) {
LAB_051c7fd0:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_051c7f84:
  do {
    if (*pcVar3 != '\\') {
      FUN_05475ce8(param_1);
      pcVar7 = pcVar3;
      iVar8 = iVar9;
      goto LAB_051c7f74;
    }
    iVar8 = iVar9 + 1;
    pcVar7 = pcVar3 + 1;
    if (iVar2 <= iVar8) break;
    bVar1 = pcVar3[1];
    switch(bVar1) {
    case 0x22:
      FUN_05475ce8(param_1,0x22);
      break;
    default:
      goto switchD_051c800c_caseD_23;
    case 0x2f:
      FUN_05475ce8(param_1,0x2f);
      break;
    case 0x5c:
      FUN_05475ce8(param_1,0x5c);
      break;
    case 0x62:
      FUN_05475ce8(param_1,8);
      break;
    case 0x66:
      FUN_05475ad8(param_1,&DAT_056e50d8);
      break;
    case 0x6e:
      FUN_05475ad8(param_1,&DAT_0559c978);
      break;
    case 0x72:
      FUN_05475ad8(param_1,&DAT_056e50e0);
      break;
    case 0x74:
      FUN_05475ad8(param_1,&DAT_055dd910);
      break;
    case 0x75:
      iVar8 = iVar9 + 2;
      pcVar7 = pcVar3 + 2;
      if (iVar8 < iVar2) {
        bVar1 = pcVar3[2];
        uVar6 = (uint)bVar1;
        uVar4 = bVar1 - 0x30;
        this = (Local *)(ulong)uVar4;
        if (9 < (uVar4 & 0xff)) {
          uVar4 = (uint)bVar1;
          if ((bVar1 - 0x41 & 0xff) < 6) {
            this = (Local *)(ulong)(uVar4 - 0x37);
          }
          else {
            if (5 < (uVar4 - 0x61 & 0xff)) goto LAB_051c828c;
            this = (Local *)(ulong)(uVar4 - 0x57);
          }
        }
        iVar8 = iVar9 + 3;
        pcVar7 = pcVar3 + 3;
        if (iVar8 < iVar2) {
          bVar1 = pcVar3[3];
          uVar6 = (uint)bVar1;
          uVar4 = (int)this << 4;
          this = (Local *)(ulong)uVar4;
          uVar5 = bVar1 - 0x30;
          if ((uVar5 & 0xff) < 10) {
            this = (Local *)(ulong)(uVar4 | uVar5);
            uVar6 = (uint)bVar1;
          }
          else {
            uVar5 = (uint)bVar1;
            if ((bVar1 - 0x41 & 0xff) < 6) {
              uVar6 = uVar5 - 0x37;
              this = (Local *)(ulong)(uVar4 | uVar6);
            }
            else {
              if (5 < (uVar5 - 0x61 & 0xff)) goto LAB_051c8204;
              uVar6 = uVar5 - 0x57;
              this = (Local *)(ulong)(uVar4 | uVar6);
            }
          }
          iVar8 = iVar9 + 4;
          pcVar7 = pcVar3 + 4;
          if (iVar8 < iVar2) {
            bVar1 = pcVar3[4];
            uVar6 = (uint)bVar1;
            uVar4 = (int)this << 4;
            this = (Local *)(ulong)uVar4;
            uVar5 = bVar1 - 0x30;
            if ((uVar5 & 0xff) < 10) {
              this = (Local *)(ulong)(uVar4 | uVar5);
              uVar6 = (uint)bVar1;
            }
            else {
              uVar5 = (uint)bVar1;
              if ((bVar1 - 0x41 & 0xff) < 6) {
                this = (Local *)(ulong)(uVar4 | uVar5 - 0x37);
                uVar6 = uVar5 - 0x37;
              }
              else {
                if (5 < (uVar5 - 0x61 & 0xff)) goto LAB_051c8204;
                this = (Local *)(ulong)(uVar4 | uVar5 - 0x57);
                uVar6 = uVar5 - 0x57;
              }
            }
            iVar8 = iVar9 + 5;
            pcVar7 = pcVar3 + 5;
            if (iVar8 < iVar2) {
              bVar1 = pcVar3[5];
              uVar6 = (uint)bVar1;
              uVar4 = (int)this << 4;
              this = (Local *)(ulong)uVar4;
              uVar5 = bVar1 - 0x30;
              if ((uVar5 & 0xff) < 10) {
                this = (Local *)(ulong)(uVar4 | uVar5);
              }
              else {
                uVar5 = (uint)bVar1;
                if ((bVar1 - 0x41 & 0xff) < 6) {
                  uVar6 = uVar5 - 0x37;
                  this = (Local *)(ulong)(uVar4 | uVar6);
                }
                else if ((uVar5 - 0x61 & 0xff) < 6) {
                  uVar6 = uVar5 - 0x57;
                  this = (Local *)(ulong)(uVar4 | uVar6);
                }
              }
            }
          }
        }
      }
      else {
LAB_051c828c:
        uVar6 = (uint)bVar1;
        this = (Local *)0x0;
      }
LAB_051c8204:
      ExecuteTree(FEAST::IPrsNode*)::Local::UnicodeToUTF8(this,uVar6);
      thunk_FUN_054757c0(param_1,asStack_10);
      std::string::~string(asStack_10);
    }
LAB_051c7f74:
    iVar9 = iVar8 + 1;
    pcVar3 = pcVar7 + 1;
  } while (iVar9 < iVar2);
  goto LAB_051c7fd0;
switchD_051c800c_caseD_23:
  iVar9 = iVar9 + 2;
  FUN_05475ce8(param_1);
  pcVar3 = pcVar3 + 2;
  if (iVar2 <= iVar9) goto LAB_051c7fd0;
  goto LAB_051c7f84;
}


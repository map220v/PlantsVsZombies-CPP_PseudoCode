// Class: Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::IsJsonStringWide(std


/* Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::IsJsonStringWide(std::string
   const&) */

undefined8
Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::IsJsonStringWide(std::
string_const__(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = FUN_05474184();
  pcVar3 = (char *)FUN_0547429c(param_1);
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      pcVar4 = pcVar3;
      iVar5 = iVar6;
      if (*pcVar3 == '\\') {
        if (iVar2 <= iVar6 + 1) {
          return 0;
        }
        if (pcVar3[1] == 'u') {
          iVar5 = iVar6 + 2;
          pcVar4 = pcVar3 + 2;
          if (iVar5 < iVar2) {
            bVar1 = pcVar3[2];
            uVar7 = bVar1 - 0x30;
            if (9 < (uVar7 & 0xff)) {
              uVar7 = (uint)bVar1;
              if ((bVar1 - 0x41 & 0xff) < 6) {
                uVar7 = uVar7 - 0x37;
              }
              else {
                if (5 < (uVar7 - 0x61 & 0xff)) goto LAB_051c7c08;
                uVar7 = uVar7 - 0x57;
              }
            }
            iVar5 = iVar6 + 3;
            pcVar4 = pcVar3 + 3;
            if (iVar5 < iVar2) {
              bVar1 = pcVar3[3];
              uVar7 = uVar7 << 4;
              uVar8 = bVar1 - 0x30;
              if ((uVar8 & 0xff) < 10) {
                uVar7 = uVar7 | uVar8;
              }
              else {
                uVar8 = (uint)bVar1;
                if ((bVar1 - 0x41 & 0xff) < 6) {
                  uVar7 = uVar7 | uVar8 - 0x37;
                }
                else {
                  if (5 < (uVar8 - 0x61 & 0xff)) goto LAB_051c7d90;
                  uVar7 = uVar7 | uVar8 - 0x57;
                }
              }
              iVar5 = iVar6 + 4;
              pcVar4 = pcVar3 + 4;
              if (iVar5 < iVar2) {
                bVar1 = pcVar3[4];
                uVar7 = uVar7 << 4;
                uVar8 = bVar1 - 0x30;
                if ((uVar8 & 0xff) < 10) {
                  uVar7 = uVar7 | uVar8;
                }
                else {
                  uVar8 = (uint)bVar1;
                  if ((bVar1 - 0x41 & 0xff) < 6) {
                    uVar7 = uVar7 | uVar8 - 0x37;
                  }
                  else {
                    if (5 < (uVar8 - 0x61 & 0xff)) goto LAB_051c7d90;
                    uVar7 = uVar7 | uVar8 - 0x57;
                  }
                }
                iVar5 = iVar6 + 5;
                pcVar4 = pcVar3 + 5;
                if (iVar5 < iVar2) {
                  bVar1 = pcVar3[5];
                  uVar7 = uVar7 << 4;
                  uVar8 = bVar1 - 0x30;
                  if ((uVar8 & 0xff) < 10) {
                    uVar7 = uVar7 | uVar8;
                  }
                  else {
                    uVar8 = (uint)bVar1;
                    if ((bVar1 - 0x41 & 0xff) < 6) {
                      uVar7 = uVar7 | uVar8 - 0x37;
                    }
                    else if ((uVar8 - 0x61 & 0xff) < 6) {
                      uVar7 = uVar7 | uVar8 - 0x57;
                    }
                  }
                }
              }
            }
LAB_051c7d90:
            if (0xff < (int)uVar7) {
              return 1;
            }
          }
          goto LAB_051c7c08;
        }
        iVar6 = iVar6 + 2;
        pcVar3 = pcVar3 + 2;
      }
      else {
LAB_051c7c08:
        iVar6 = iVar5 + 1;
        pcVar3 = pcVar4 + 1;
      }
    } while (iVar6 < iVar2);
  }
  return 0;
}


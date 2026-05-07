// Class: Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ProcessJsonStringW(std::wstring&,std


/* Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ProcessJsonStringW(std::wstring&,
   std::string const&) */

void Sexy::RtSerial::JsonParser::ExecuteTree(FEAST::IPrsNode*)::Local::ProcessJsonStringW(std::
     wstring&,std::string_const__(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar2 = FUN_05474184(param_2);
  pbVar4 = (byte *)FUN_0547429c(param_2);
  if (0 < iVar2) {
    do {
      uVar5 = (uint)*pbVar4;
      pbVar6 = pbVar4;
      iVar8 = iVar7;
      if (*pbVar4 != 0x5c) goto LAB_051c8354;
      if (iVar2 <= iVar7 + 1) {
        return;
      }
      switch(pbVar4[1]) {
      case 0x22:
        FUN_05477a88(param_1,0x22);
        break;
      default:
        FUN_05477a88(param_1);
        break;
      case 0x2f:
        FUN_05477a88(param_1,0x2f);
        break;
      case 0x5c:
        FUN_05477a88(param_1,0x5c);
        break;
      case 0x62:
        FUN_05477a88(param_1,8);
        break;
      case 0x66:
        FUN_05477888(param_1,&DAT_0574ead8);
        break;
      case 0x6e:
        FUN_05477888(param_1,&DAT_0570a740);
        break;
      case 0x72:
        FUN_05477888(param_1,&DAT_0574eae0);
        break;
      case 0x74:
        FUN_05477888(param_1,&DAT_0574eae8);
        break;
      case 0x75:
        iVar8 = iVar7 + 2;
        pbVar6 = pbVar4 + 2;
        if (iVar8 < iVar2) {
          bVar1 = pbVar4[2];
          uVar5 = bVar1 - 0x30;
          if (9 < (uVar5 & 0xff)) {
            uVar5 = (uint)bVar1;
            if ((bVar1 - 0x41 & 0xff) < 6) {
              uVar5 = uVar5 - 0x37;
            }
            else {
              if (5 < (uVar5 - 0x61 & 0xff)) goto LAB_051c8604;
              uVar5 = uVar5 - 0x57;
            }
          }
          iVar8 = iVar7 + 3;
          pbVar6 = pbVar4 + 3;
          if (iVar2 <= iVar8) goto LAB_051c8354;
          bVar1 = pbVar4[3];
          uVar5 = uVar5 << 4;
          uVar3 = bVar1 - 0x30;
          if ((uVar3 & 0xff) < 10) {
            uVar5 = uVar5 | uVar3;
          }
          else {
            uVar3 = (uint)bVar1;
            if ((bVar1 - 0x41 & 0xff) < 6) {
              uVar5 = uVar5 | uVar3 - 0x37;
            }
            else {
              if (5 < (uVar3 - 0x61 & 0xff)) goto LAB_051c8354;
              uVar5 = uVar5 | uVar3 - 0x57;
            }
          }
          iVar8 = iVar7 + 4;
          pbVar6 = pbVar4 + 4;
          if (iVar2 <= iVar8) goto LAB_051c8354;
          bVar1 = pbVar4[4];
          uVar5 = uVar5 << 4;
          uVar3 = bVar1 - 0x30;
          if ((uVar3 & 0xff) < 10) {
            uVar5 = uVar5 | uVar3;
          }
          else {
            uVar3 = (uint)bVar1;
            if ((bVar1 - 0x41 & 0xff) < 6) {
              uVar5 = uVar5 | uVar3 - 0x37;
            }
            else {
              if (5 < (uVar3 - 0x61 & 0xff)) goto LAB_051c8354;
              uVar5 = uVar5 | uVar3 - 0x57;
            }
          }
          iVar8 = iVar7 + 5;
          pbVar6 = pbVar4 + 5;
          if (iVar8 < iVar2) {
            bVar1 = pbVar4[5];
            uVar5 = uVar5 << 4;
            uVar3 = bVar1 - 0x30;
            if ((uVar3 & 0xff) < 10) {
              uVar5 = uVar5 | uVar3;
            }
            else {
              uVar3 = (uint)bVar1;
              if ((bVar1 - 0x41 & 0xff) < 6) {
                uVar5 = uVar5 | uVar3 - 0x37;
              }
              else if ((uVar3 - 0x61 & 0xff) < 6) {
                uVar5 = uVar5 | uVar3 - 0x57;
              }
            }
          }
          FUN_05477a88(param_1,uVar5);
        }
        else {
LAB_051c8604:
          uVar5 = 0;
LAB_051c8354:
          FUN_05477a88(param_1,uVar5);
        }
        iVar7 = iVar8 + 1;
        pbVar4 = pbVar6 + 1;
        goto joined_r0x051c8368;
      }
      iVar7 = iVar7 + 2;
      pbVar4 = pbVar4 + 2;
joined_r0x051c8368:
    } while (iVar7 < iVar2);
  }
  return;
}


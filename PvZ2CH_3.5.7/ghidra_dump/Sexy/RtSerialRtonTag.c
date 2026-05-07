// Class: Sexy::RtSerialRtonTag


/* Sexy::RtSerialRtonTag::IsKnownTag(int) */

bool Sexy::RtSerialRtonTag::IsKnownTag(int param_1)

{
  uint uVar1;
  
  if (param_1 < 0x49) {
    if (0x3f < param_1) {
      return true;
    }
    if (0xb < param_1) {
      if (0xf < param_1) {
        if (param_1 < 0x14) {
          return true;
        }
        if (param_1 - 0x20U < 9) {
          return true;
        }
      }
      goto LAB_051c8b34;
    }
    uVar1 = param_1;
    if (7 < param_1) {
      return true;
    }
  }
  else {
    if (param_1 < 0x94) {
      if (0x8f < param_1) {
        return true;
      }
      if (param_1 - 0x81U < 7) {
        return true;
      }
      goto LAB_051c8b34;
    }
    if (param_1 < 0xb0) goto LAB_051c8b34;
    if (param_1 < 0xbd) {
      return true;
    }
    uVar1 = param_1 - 0xfd;
  }
  if (uVar1 < 3) {
    return true;
  }
LAB_051c8b34:
  return param_1 - 0xb0U < 0x30;
}


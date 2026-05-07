// Class: open_vcdiff::RollingHashUtil


/* open_vcdiff::RollingHashUtil::ModBase(unsigned int) */

uint open_vcdiff::RollingHashUtil::ModBase(uint param_1)

{
  return param_1 & 0x7fffff;
}


/* open_vcdiff::RollingHashUtil::FindModBaseInverse(unsigned int) */

void open_vcdiff::RollingHashUtil::FindModBaseInverse(uint param_1)

{
  ModBase(-param_1);
  return;
}


/* open_vcdiff::RollingHashUtil::HashStep(unsigned int, unsigned char) */

void open_vcdiff::RollingHashUtil::HashStep(uint param_1,uchar param_2)

{
  ModBase(param_1 * 0x101 + (uint)param_2);
  return;
}


/* open_vcdiff::RollingHashUtil::HashFirstTwoBytes(char const*) */

int open_vcdiff::RollingHashUtil::HashFirstTwoBytes(char *param_1)

{
  return (uint)(byte)*param_1 * 0x101 + (uint)(byte)param_1[1];
}


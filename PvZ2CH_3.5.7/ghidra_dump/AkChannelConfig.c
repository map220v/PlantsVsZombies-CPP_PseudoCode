// Class: AkChannelConfig


/* AkChannelConfig::AkChannelConfig() */

void __thiscall AkChannelConfig::AkChannelConfig(AkChannelConfig *this)

{
  *this = (AkChannelConfig)0x0;
  this[1] = (AkChannelConfig)((byte)this[1] & 0xf0);
  *(uint *)this = *(uint *)this & 0xfff;
  return;
}


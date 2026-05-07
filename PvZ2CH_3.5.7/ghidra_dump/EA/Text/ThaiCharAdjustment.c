// Class: EA::Text::ThaiCharAdjustment


/* EA::Text::ThaiCharAdjustment::shiftdown_tone_ad(unsigned long) const */

ThaiCharAdjustment __thiscall
EA::Text::ThaiCharAdjustment::shiftdown_tone_ad(ThaiCharAdjustment *this,ulong param_1)

{
  return this[(param_1 - (byte)*this) + 4];
}


/* EA::Text::ThaiCharAdjustment::shiftdownleft_tone_ad(unsigned long) const */

ThaiCharAdjustment __thiscall
EA::Text::ThaiCharAdjustment::shiftdownleft_tone_ad(ThaiCharAdjustment *this,ulong param_1)

{
  return this[(param_1 - (byte)*this) + 0xc];
}


/* EA::Text::ThaiCharAdjustment::shiftleft_tone_ad(unsigned long) const */

ThaiCharAdjustment __thiscall
EA::Text::ThaiCharAdjustment::shiftleft_tone_ad(ThaiCharAdjustment *this,ulong param_1)

{
  return this[(param_1 - (byte)*this) + 0x14];
}


/* EA::Text::ThaiCharAdjustment::shiftleft_av(unsigned long) const */

ThaiCharAdjustment __thiscall
EA::Text::ThaiCharAdjustment::shiftleft_av(ThaiCharAdjustment *this,ulong param_1)

{
  return this[(param_1 - (byte)this[1]) + 0x1c];
}


/* EA::Text::ThaiCharAdjustment::shiftdown_bv_bd(unsigned long) const */

ThaiCharAdjustment __thiscall
EA::Text::ThaiCharAdjustment::shiftdown_bv_bd(ThaiCharAdjustment *this,ulong param_1)

{
  return this[(param_1 - (byte)this[2]) + 0x23];
}


/* EA::Text::ThaiCharAdjustment::tailcutcons(unsigned long) const */

ThaiCharAdjustment __thiscall
EA::Text::ThaiCharAdjustment::tailcutcons(ThaiCharAdjustment *this,ulong param_1)

{
  return this[(param_1 - (byte)this[3]) + 0x26];
}


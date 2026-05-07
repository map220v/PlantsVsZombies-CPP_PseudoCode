// Class: GachaReward


/* GachaReward::GachaReward() */

void __thiscall GachaReward::GachaReward(GachaReward *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


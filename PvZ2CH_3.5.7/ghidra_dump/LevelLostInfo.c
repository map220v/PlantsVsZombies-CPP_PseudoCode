// Class: LevelLostInfo


/* LevelLostInfo::LevelLostInfo() */

void __thiscall LevelLostInfo::LevelLostInfo(LevelLostInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  std::string::append((string *)this,"",in_x2);
  return;
}


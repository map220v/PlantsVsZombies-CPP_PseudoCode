// Class: CthulhuDangerroomInfo


/* CthulhuDangerroomInfo::CthulhuDangerroomInfo() */

void __thiscall CthulhuDangerroomInfo::CthulhuDangerroomInfo(CthulhuDangerroomInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* CthulhuDangerroomInfo::TEMPNAMEPLACEHOLDERVALUE(CthulhuDangerroomInfo const&) */

CthulhuDangerroomInfo * __thiscall
CthulhuDangerroomInfo::operator=(CthulhuDangerroomInfo *this,CthulhuDangerroomInfo *param_1)

{
  undefined4 uVar1;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  return this;
}


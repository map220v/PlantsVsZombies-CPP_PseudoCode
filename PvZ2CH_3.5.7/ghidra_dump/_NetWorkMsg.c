// Class: _NetWorkMsg


/* _NetWorkMsg::Clear() */

void __thiscall _NetWorkMsg::Clear(_NetWorkMsg *this)

{
  size_t in_x2;
  
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 8) = 0;
  return;
}


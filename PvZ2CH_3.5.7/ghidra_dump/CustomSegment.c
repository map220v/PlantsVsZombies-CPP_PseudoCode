// Class: CustomSegment


/* CustomSegment::CustomSegment(int, std::string) */

void __thiscall
CustomSegment::CustomSegment(CustomSegment *this,undefined4 param_1,undefined8 param_3)

{
  Set8BytesTo0(this + 8);
  *(undefined4 *)this = param_1;
  thunk_FUN_05475e00(this + 8,param_3);
  return;
}


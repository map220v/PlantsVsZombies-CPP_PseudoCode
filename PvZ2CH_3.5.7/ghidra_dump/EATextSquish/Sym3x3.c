// Class: EATextSquish::Sym3x3


/* EATextSquish::Sym3x3::Sym3x3(float) */

void __thiscall EATextSquish::Sym3x3::Sym3x3(Sym3x3 *this,float param_1)

{
  *(float *)(this + 0x10) = param_1;
  *(float *)(this + 0x14) = param_1;
  *(ulong *)(this + 8) = CONCAT44(param_1,param_1);
  *(ulong *)this = CONCAT44(param_1,param_1);
  return;
}


/* EATextSquish::Sym3x3::operator[](int) const */

undefined4 __thiscall EATextSquish::Sym3x3::operator[](Sym3x3 *this,int param_1)

{
  return *(undefined4 *)(this + (long)param_1 * 4);
}


/* EATextSquish::Sym3x3::operator[](int) */

Sym3x3 * __thiscall EATextSquish::Sym3x3::operator[](Sym3x3 *this,int param_1)

{
  return this + (long)param_1 * 4;
}


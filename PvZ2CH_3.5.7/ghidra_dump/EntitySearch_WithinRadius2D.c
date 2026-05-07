// Class: EntitySearch_WithinRadius2D


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntitySearch_WithinRadius2D::Accept(BoardEntity*) */

void __thiscall
EntitySearch_WithinRadius2D::Accept(EntitySearch_WithinRadius2D *this,BoardEntity *param_1)

{
  float *pfVar1;
  float fVar2;
  FastCurve aFStack_18 [8];
  undefined4 local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar2 = pfVar1[1];
  Sexy::FastCurve::SetOutRange(aFStack_18,*pfVar1,fVar2);
  local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)aFStack_18,(SexyVector2 *)this);
  local_c = fVar2;
  fVar2 = (float)VectorNorm((FPoint *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 <= *(float *)(this + 8));
}


/* EntitySearch_WithinRadius2D::EntitySearch_WithinRadius2D(Sexy::SexyVector2 const&, float) */

void __thiscall
EntitySearch_WithinRadius2D::EntitySearch_WithinRadius2D
          (EntitySearch_WithinRadius2D *this,SexyVector2 *param_1,float param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(float *)(this + 8) = param_2 * param_2;
  return;
}


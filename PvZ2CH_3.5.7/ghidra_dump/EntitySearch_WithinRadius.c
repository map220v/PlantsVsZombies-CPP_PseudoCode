// Class: EntitySearch_WithinRadius


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntitySearch_WithinRadius::Accept(BoardEntity*) */

void EntitySearch_WithinRadius::Accept(BoardEntity *param_1)

{
  SexyVector3 *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  float fVar1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (SexyVector3 *)
         std::
         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         ::_M_leftmost(in_x1);
  local_18[0] = Sexy::SexyVector3::operator-(this,(SexyVector3 *)param_1);
  fVar1 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar1 <= *(float *)(param_1 + 0xc));
}


/* EntitySearch_WithinRadius::EntitySearch_WithinRadius(Sexy::SexyVector3 const&, float) */

void __thiscall
EntitySearch_WithinRadius::EntitySearch_WithinRadius
          (EntitySearch_WithinRadius *this,SexyVector3 *param_1,float param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(float *)(this + 0xc) = param_2 * param_2;
  return;
}


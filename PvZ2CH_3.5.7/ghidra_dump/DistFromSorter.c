// Class: DistFromSorter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DistFromSorter::TEMPNAMEPLACEHOLDERVALUE(BoardEntity*, BoardEntity*) const */

void DistFromSorter::operator()(BoardEntity *param_1,BoardEntity *param_2)

{
  SexyVector3 *pSVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x2;
  float fVar2;
  float fVar3;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
  local_18[0] = Sexy::SexyVector3::operator-(pSVar1,(SexyVector3 *)param_1);
  fVar2 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)local_18);
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x2);
  local_18[0] = Sexy::SexyVector3::operator-(pSVar1,(SexyVector3 *)param_1);
  fVar3 = (float)Sexy::SexyVector3::MagnitudeSquared((SexyVector3 *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2 < fVar3);
}


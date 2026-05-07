// Class: EntitySearch_InRectangle


/* EntitySearch_InRectangle::Accept(BoardEntity*) */

void __thiscall
EntitySearch_InRectangle::Accept(EntitySearch_InRectangle *this,BoardEntity *param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  Sexy::TRect<int>::Contains((TRect<int> *)this,(int)*pfVar1,(int)pfVar1[1]);
  return;
}


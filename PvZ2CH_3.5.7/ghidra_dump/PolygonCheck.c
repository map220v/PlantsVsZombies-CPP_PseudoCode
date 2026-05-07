// Class: PolygonCheck


/* PolygonCheck::~PolygonCheck() */

void __thiscall PolygonCheck::~PolygonCheck(PolygonCheck *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)FUN_03d6aa0c(*(undefined8 *)(this + 0x10));
  std::
  _Rb_tree<int,std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,std::_Select1st<std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,std::_Select1st<std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>>
              *)this,p_Var1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PolygonCheck::IsPointInPolygon(Sexy::Point, std::vector<Sexy::Point, std::allocator<Sexy::Point>
   > const&) */

void PolygonCheck::IsPointInPolygon(TPoint *param_1,undefined8 param_2)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,param_1);
  FUN_04b25970(aPStack_10,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PolygonCheck::doCheck(Sexy::Point const&, int) */

void __thiscall PolygonCheck::doCheck(PolygonCheck *this,Point *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>>
             ::begin((map<int,std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>>
                      *)this);
  do {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar2) {
LAB_04b25dc8:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_2);
      }
      return;
    }
    Sexy::Point::Point((Point *)&local_10,(TPoint *)param_1);
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    cVar1 = IsPointInPolygon((Point *)&local_10,lVar3 + 8);
    if (cVar1 != '\0') {
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      param_2 = *piVar4;
      goto LAB_04b25dc8;
    }
    FUN_04b257fc((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  } while( true );
}


/* PolygonCheck::registerPolygonCheck(int, std::vector<Sexy::Point, std::allocator<Sexy::Point> >
   const&) */

void __thiscall PolygonCheck::registerPolygonCheck(PolygonCheck *this,int param_1,vector *param_2)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *pvVar1;
  Point *pPVar2;
  ulong uVar3;
  ulong uVar4;
  int local_4;
  
  local_4 = param_1;
  pvVar1 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)
           std::
           map<int,std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>>
           ::operator[]((map<int,std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>>
                         *)this,&local_4);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(pvVar1);
  for (uVar4 = 0; uVar3 = FUN_04b257e8(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8)),
      uVar4 < uVar3; uVar4 = uVar4 + 1) {
    pvVar1 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)
             std::
             map<int,std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>>
             ::operator[]((map<int,std::vector<Sexy::Point,std::allocator<Sexy::Point>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>>
                           *)this,&local_4);
    pPVar2 = (Point *)FUN_04b257f4(*(undefined8 *)param_2,uVar4);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(pvVar1,pPVar2);
  }
  return;
}


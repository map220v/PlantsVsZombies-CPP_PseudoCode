// Class: PlaybackController


/* PlaybackController::PlaybackController() */

void __thiscall PlaybackController::PlaybackController(PlaybackController *this)

{
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)this);
  *(undefined4 *)(this + 0x30) = 0;
  this[0x34] = (PlaybackController)0x0;
  this[0x35] = (PlaybackController)0x0;
  return;
}


/* PlaybackController::~PlaybackController() */

void __thiscall PlaybackController::~PlaybackController(PlaybackController *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)FUN_04b044c4(*(undefined8 *)(this + 0x10));
  std::
  _Rb_tree<unsigned_char,std::pair<unsigned_char_const,std::string>,std::_Select1st<std::pair<unsigned_char_const,std::string>>,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::_M_erase((_Rb_tree<unsigned_char,std::pair<unsigned_char_const,std::string>,std::_Select1st<std::pair<unsigned_char_const,std::string>>,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
              *)this,p_Var1);
  return;
}


/* PlaybackController::ClearParams() */

void __thiscall PlaybackController::ClearParams(PlaybackController *this)

{
  _Rb_tree_node *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  p_Var1 = (_Rb_tree_node *)FUN_04b044c4(*(undefined8 *)(this + 0x10));
  std::
  _Rb_tree<unsigned_char,std::pair<unsigned_char_const,std::string>,std::_Select1st<std::pair<unsigned_char_const,std::string>>,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::_M_erase((_Rb_tree<unsigned_char,std::pair<unsigned_char_const,std::string>,std::_Select1st<std::pair<unsigned_char_const,std::string>>,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
              *)this,p_Var1);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  *puVar2 = uVar3;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
           ::_M_root((_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      *)this);
  *puVar2 = 0;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  *puVar2 = uVar3;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* PlaybackController::RemoveParam(unsigned char) */

void PlaybackController::RemoveParam(uchar param_1)

{
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::erase((uchar *)(ulong)param_1);
  return;
}


/* PlaybackController::SetParam(unsigned char, std::string const&) */

void __thiscall PlaybackController::SetParam(PlaybackController *this,uchar param_1,string *param_2)

{
  undefined8 uVar1;
  uchar local_1;
  
  local_1 = param_1;
  uVar1 = std::
          map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
          ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                        *)this,&local_1);
  thunk_FUN_05475e00(uVar1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackController::SetParam(unsigned char, int) */

void __thiscall PlaybackController::SetParam(PlaybackController *this,uchar param_1,int param_2)

{
  undefined8 uVar1;
  uchar local_11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_11 = param_1;
  uVar1 = std::
          map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
          ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                        *)this,&local_11);
  Sexy::StrFormat("%d",asStack_10,(ulong)(uint)param_2);
  FUN_05474278(uVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackController::SetParam(unsigned char, float) */

void __thiscall PlaybackController::SetParam(PlaybackController *this,uchar param_1,float param_2)

{
  undefined8 uVar1;
  uchar local_11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_11 = param_1;
  uVar1 = std::
          map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
          ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                        *)this,&local_11);
  Sexy::StrFormat("%.2f",asStack_10,(double)param_2);
  FUN_05474278(uVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackController::SetParam(unsigned char, Sexy::SexyVector3 const&) */

void __thiscall
PlaybackController::SetParam(PlaybackController *this,uchar param_1,SexyVector3 *param_2)

{
  undefined8 uVar1;
  uchar local_11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_11 = param_1;
  uVar1 = std::
          map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
          ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                        *)this,&local_11);
  Sexy::StrFormat("%.2f,%.2f,%.2f",asStack_10,(double)*(float *)param_2,
                  (double)*(float *)(param_2 + 4),(double)*(float *)(param_2 + 8));
  FUN_05474278(uVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackController::SetParam(unsigned char, Sexy::Point const&) */

void __thiscall PlaybackController::SetParam(PlaybackController *this,uchar param_1,Point *param_2)

{
  undefined8 uVar1;
  uchar local_11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_11 = param_1;
  uVar1 = std::
          map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
          ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                        *)this,&local_11);
  Sexy::StrFormat("%d,%d",asStack_10,(ulong)*(uint *)param_2,(ulong)*(uint *)(param_2 + 4));
  FUN_05474278(uVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackController::GetParam(unsigned char) */

void __thiscall PlaybackController::GetParam(PlaybackController *this,uchar param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  uchar local_21 [9];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_21[0] = param_1;
  local_18 = std::
             map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
             ::find((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                     *)this,local_21);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    puVar2 = (undefined8 *)
             std::
             map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
             ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                           *)this,local_21);
  }
  else {
    puVar2 = &StringHelper::Empty;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackController::GetParamInt(unsigned char) */

void __thiscall PlaybackController::GetParamInt(PlaybackController *this,uchar param_1)

{
  bool bVar1;
  undefined8 uVar2;
  string *psVar3;
  uchar local_21 [9];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_21[0] = param_1;
  local_18 = std::
             map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
             ::find((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                     *)this,local_21);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar2 = 0;
  if (bVar1) {
    psVar3 = (string *)
             std::
             map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
             ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                           *)this,local_21);
    uVar2 = StringHelper::ToInt(psVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackController::GetParamFloat(unsigned char) */

void __thiscall PlaybackController::GetParamFloat(PlaybackController *this,uchar param_1)

{
  bool bVar1;
  string *psVar2;
  undefined4 uVar3;
  uchar local_21 [9];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_21[0] = param_1;
  local_18 = std::
             map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
             ::find((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                     *)this,local_21);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar3 = 0;
  if (bVar1) {
    psVar2 = (string *)
             std::
             map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
             ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                           *)this,local_21);
    uVar3 = StringHelper::ToFloat(psVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackController::GetParamVector3(unsigned char) */

void __thiscall PlaybackController::GetParamVector3(PlaybackController *this,uchar param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char *__s;
  uchar local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_31 = param_1;
  DVec3::DVec3((DVec3 *)&local_28);
  local_30 = std::
             map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
             ::find((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                     *)this,&local_31);
  local_18 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar4 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_18);
  if (bVar4) {
    std::
    map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
    ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                  *)this,&local_31);
    __s = (char *)FUN_0547429c();
    sscanf(__s,"%g,%g,%g",(DVec3 *)&local_28,(long)&local_28 + 4,local_20);
  }
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20[0];
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20[0]);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackController::GetParamPoint(unsigned char) */

void PlaybackController::GetParamPoint(uchar param_1)

{
  bool bVar1;
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  *this;
  char *__s;
  Point *in_x8;
  uchar local_21 [9];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
          *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(in_x8);
  local_18 = std::
             map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
             ::find(this,local_21);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    std::
    map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
    ::operator[](this,local_21);
    __s = (char *)FUN_0547429c();
    sscanf(__s,"%d,%d");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


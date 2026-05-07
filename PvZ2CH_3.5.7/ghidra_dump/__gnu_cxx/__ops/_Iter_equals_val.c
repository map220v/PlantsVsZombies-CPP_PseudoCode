// Class: __gnu_cxx::__ops::_Iter_equals_val<unsigned_int_const>


/* bool __gnu_cxx::__ops::_Iter_equals_val<unsigned int
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned
   int, std::allocator<unsigned int> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<unsigned_int_const>::operator()
          (_Iter_equals_val<unsigned_int_const> *this,undefined8 param_2)

{
  int *piVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  piVar1 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  return *piVar1 == **(int **)this;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<std::string
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<std::string const*,
   std::vector<std::string, std::allocator<std::string > > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<std::string_const>::operator()
          (_Iter_equals_val<std::string_const> *this,undefined8 param_2)

{
  undefined1 uVar1;
  string *psVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = std::operator==(psVar2,*(string **)this);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<Sexy::Leaderboard*
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::Leaderboard**,
   std::vector<Sexy::Leaderboard*, std::allocator<Sexy::Leaderboard*> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<Sexy::Leaderboard*const>::operator()
          (_Iter_equals_val<Sexy::Leaderboard*const> *this,undefined8 param_2)

{
  long *plVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  return *plVar1 == **(long **)this;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<unsigned char
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<unsigned char*,
   std::vector<unsigned char, std::allocator<unsigned char> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<unsigned_char_const>::operator()
          (_Iter_equals_val<unsigned_char_const> *this,undefined8 param_2)

{
  char *pcVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  pcVar1 = (char *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  return *pcVar1 == **(char **)this;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<int
   const>::TEMPNAMEPLACEHOLDERVALUE(std::_Rb_tree_const_iterator<int>) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<int_const>::operator()
          (_Iter_equals_val<int_const> *this,undefined8 param_2)

{
  int *piVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  piVar1 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_8);
  return *piVar1 == **(int **)this;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<Sexy::Point
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::Point const*,
   std::vector<Sexy::Point, std::allocator<Sexy::Point> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<Sexy::Point_const>::operator()
          (_Iter_equals_val<Sexy::Point_const> *this,undefined8 param_2)

{
  undefined1 uVar1;
  TPoint<int> *this_00;
  undefined8 local_8;
  
  local_8 = param_2;
  this_00 = (TPoint<int> *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = Sexy::TPoint<int>::operator==(this_00,*(TPoint **)this);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<char const
   [4]>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<std::string const*,
   std::vector<std::string, std::allocator<std::string > > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<char_const[4]>::operator()
          (_Iter_equals_val<char_const[4]> *this,undefined8 param_2)

{
  bool bVar1;
  string *psVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  bVar1 = std::operator==(psVar2,*(char **)this);
  return bVar1;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<Sexy::RtWeakPtr<ZombieType const>
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,
   std::vector<Sexy::RtWeakPtr<Zombie>, std::allocator<Sexy::RtWeakPtr<Zombie> > > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<Sexy::RtWeakPtr<ZombieType_const>const>::operator()
          (_Iter_equals_val<Sexy::RtWeakPtr<ZombieType_const>const> *this,undefined8 param_2)

{
  undefined1 uVar1;
  RtWeakPtrBase *this_00;
  undefined8 local_8;
  
  local_8 = param_2;
  this_00 = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = Sexy::RtWeakPtrBase::operator==(this_00,*(RtWeakPtrBase **)this);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<Sexy::RtWeakPtr<ZombieType const>
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<ZombieType> const*,
   std::vector<Sexy::RtWeakPtr<ZombieType>, std::allocator<Sexy::RtWeakPtr<ZombieType> > > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<Sexy::RtWeakPtr<ZombieType_const>const>::operator()
          (_Iter_equals_val<Sexy::RtWeakPtr<ZombieType_const>const> *this,undefined8 param_2)

{
  undefined1 uVar1;
  RtWeakPtrBase *this_00;
  undefined8 local_8;
  
  local_8 = param_2;
  this_00 = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = Sexy::RtWeakPtrBase::operator==(this_00,*(RtWeakPtrBase **)this);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<Sexy::Delegate0
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::Delegate0*,
   std::vector<Sexy::Delegate0, std::allocator<Sexy::Delegate0> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<Sexy::Delegate0_const>::operator()
          (_Iter_equals_val<Sexy::Delegate0_const> *this,undefined8 param_2)

{
  int iVar1;
  DelegateBase *pDVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  pDVar2 = (DelegateBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  iVar1 = Sexy::operator==(pDVar2,*(DelegateBase **)this);
  return iVar1 != 0;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<ProjectilePropertySheet const*
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<ProjectilePropertySheet>
   const*, std::vector<Sexy::RtWeakPtr<ProjectilePropertySheet>,
   std::allocator<Sexy::RtWeakPtr<ProjectilePropertySheet> > > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<ProjectilePropertySheet_const*const>::operator()
          (_Iter_equals_val<ProjectilePropertySheet_const*const> *this,undefined8 param_2)

{
  RtWeakPtr *this_00;
  ResourceInfo *pRVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  return (ResourceInfo *)**(undefined8 **)this == pRVar1;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<Sexy::RtWeakPtr<BoardEntity>
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<BoardEntity**,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<Sexy::RtWeakPtr<BoardEntity>const>::operator()
          (_Iter_equals_val<Sexy::RtWeakPtr<BoardEntity>const> *this,undefined8 param_2)

{
  undefined8 *puVar1;
  ResourceInfo *pRVar2;
  ResourceInfo *pRVar3;
  undefined8 local_8;
  
  local_8 = param_2;
  puVar1 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  pRVar3 = (ResourceInfo *)*puVar1;
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(*(RtWeakPtr **)this);
  return pRVar3 == pRVar2;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<unsigned short
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<unsigned char*,
   std::vector<unsigned char, std::allocator<unsigned char> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<unsigned_short_const>::operator()
          (_Iter_equals_val<unsigned_short_const> *this,undefined8 param_2)

{
  byte *pbVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  pbVar1 = (byte *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  return (ushort)*pbVar1 == **(ushort **)this;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<std::string
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<PlantAccessoryInfo*,
   std::vector<PlantAccessoryInfo, std::allocator<PlantAccessoryInfo> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<std::string_const>::operator()
          (_Iter_equals_val<std::string_const> *this,undefined8 param_2)

{
  undefined1 uVar1;
  PlantAccessoryInfo *this_00;
  undefined8 local_8;
  
  local_8 = param_2;
  this_00 = (PlantAccessoryInfo *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = PlantAccessoryInfo::operator==(this_00,*(string **)this);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<Sexy::Touch
   const>::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<Sexy::Touch*,
   std::vector<Sexy::Touch, std::allocator<Sexy::Touch> > >) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<Sexy::Touch_const>::operator()
          (_Iter_equals_val<Sexy::Touch_const> *this,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_8;
  
  local_8 = param_2;
  puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_8);
  uVar1 = FUN_04f8973c(*puVar2,**(undefined8 **)this);
  return (bool)uVar1;
}


/* bool __gnu_cxx::__ops::_Iter_equals_val<Sexy::WidgetContainer*
   const>::TEMPNAMEPLACEHOLDERVALUE(std::_List_iterator<Sexy::Widget*>) */

bool __thiscall
__gnu_cxx::__ops::_Iter_equals_val<Sexy::WidgetContainer*const>::operator()
          (_Iter_equals_val<Sexy::WidgetContainer*const> *this,undefined8 param_2)

{
  long *plVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  plVar1 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_8);
  return *plVar1 == **(long **)this;
}


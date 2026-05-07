// Class: DIniField


/* DIniField::~DIniField() */

void __thiscall DIniField::~DIniField(DIniField *this)

{
  *(undefined ***)this = &PTR__DIniField_067704a0;
  std::
  map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
  ::~map((map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
          *)(this + 0x10));
  return;
}


/* DIniField::~DIniField() */

void __thiscall DIniField::~DIniField(DIniField *this)

{
  ~DIniField(this);
  AK::FreeHook(this);
  return;
}


/* DIniField::DIniField(DIniField const&) */

void __thiscall DIniField::DIniField(DIniField *this,DIniField *param_1)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined ***)this = &PTR__DIniField_067704a0;
  std::
  map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
  ::map((map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
         *)(this + 0x10),(map *)(param_1 + 0x10));
  return;
}


/* DIniField::TEMPNAMEPLACEHOLDERVALUE(DIniField const&) */

DIniField * __thiscall DIniField::operator=(DIniField *this,DIniField *param_1)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  std::
  map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
  ::operator=((map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
               *)(this + 0x10),(map *)(param_1 + 0x10));
  return this;
}


/* DIniField::DIniField() */

void __thiscall DIniField::DIniField(DIniField *this)

{
  *(undefined ***)this = &PTR__DIniField_067704a0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x10));
  return;
}


/* DIniField::removeItem(std::string const&) */

void DIniField::removeItem(string *param_1)

{
  std::
  map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
  ::erase(param_1 + 0x10);
  *(undefined1 *)(*(long *)(param_1 + 8) + 8) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniField::getItem(std::string const&, std::string const&) */

void DIniField::getItem(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
             ::find((map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
                     *)(param_1 + 0x10),param_2);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0x10));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    FUN_05475d88();
  }
  else {
    FUN_05475d88();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniField::getItemInt(std::string const&, int) */

void __thiscall DIniField::getItemInt(DIniField *this,string *param_1,int param_2)

{
  char cVar1;
  char *__nptr;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  getItem((string *)this,param_1);
  std::string::~string(asStack_10);
  nop();
  cVar1 = FUN_0547419c(asStack_18);
  if (cVar1 == '\0') {
    __nptr = (char *)FUN_0547429c(asStack_18);
    param_2 = atoi(__nptr);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* DIniField::getItemBool(std::string const&, bool) */

bool __thiscall DIniField::getItemBool(DIniField *this,string *param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = getItemInt(this,param_1,(uint)param_2);
  return iVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniField::getItemFloat(std::string const&, float) */

void __thiscall DIniField::getItemFloat(DIniField *this,string *param_1,float param_2)

{
  char cVar1;
  char *__nptr;
  double dVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  getItem((string *)this,param_1);
  std::string::~string(asStack_10);
  nop();
  cVar1 = FUN_0547419c(asStack_18);
  if (cVar1 == '\0') {
    __nptr = (char *)FUN_0547429c(asStack_18);
    dVar2 = atof(__nptr);
    param_2 = (float)dVar2;
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniField::addItemInner(std::string const&, std::string const&) */

void __thiscall DIniField::addItemInner(DIniField *this,string *param_1,string *param_2)

{
  map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
  *this_00;
  char cVar1;
  long lVar2;
  DIniItem *this_01;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_20 = std::
             map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
             ::find(this_00,param_1);
  local_18[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_20,(exception_ptr *)local_18);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    thunk_FUN_05475e00(lVar2 + 0x10,param_2);
  }
  else {
    this_01 = (DIniItem *)
              std::
              map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
              ::operator[](this_00,param_1);
    DIniItem::DIniItem((DIniItem *)local_18,param_2);
    DIniItem::operator=(this_01,(DIniItem *)local_18);
    DIniItem::~DIniItem((DIniItem *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DIniField::addItem(std::string const&, std::string const&) */

void __thiscall DIniField::addItem(DIniField *this,string *param_1,string *param_2)

{
  addItemInner(this,param_1,param_2);
  *(undefined1 *)(*(long *)(this + 8) + 8) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniField::addItem(std::string const&, int) */

void __thiscall DIniField::addItem(DIniField *this,string *param_1,int param_2)

{
  char *__s;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_18);
  DString::format((char *)aDStack_18,&DAT_055936e8,(ulong)(uint)param_2);
  __s = (char *)DString::c_str(aDStack_18);
  std::string::string(asStack_20,__s);
  addItem(this,param_1,asStack_20);
  std::string::~string(asStack_20);
  nop();
  DString::~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DIniField::addItemBool(std::string const&, bool) */

void __thiscall DIniField::addItemBool(DIniField *this,string *param_1,bool param_2)

{
  addItem(this,param_1,(uint)param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniField::addItem(std::string const&, float) */

void __thiscall DIniField::addItem(DIniField *this,string *param_1,float param_2)

{
  char *__s;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_18);
  DString::format((char *)aDStack_18,(double)param_2,&DAT_055f3d18);
  __s = (char *)DString::c_str(aDStack_18);
  std::string::string(asStack_20,__s);
  addItem(this,param_1,asStack_20);
  std::string::~string(asStack_20);
  nop();
  DString::~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniField::addItem(std::string const&) */

void __thiscall DIniField::addItem(DIniField *this,string *param_1)

{
  char *pcVar1;
  string asStack_60 [8];
  string asStack_58 [8];
  DString aDStack_50 [16];
  DString aDStack_40 [16];
  DString aDStack_30 [16];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_50,param_1);
  DString::split((char *)aDStack_50,0x569e380);
  FUN_04f8447c(local_20[0],0);
  DString::trim();
  pcVar1 = (char *)DString::c_str(aDStack_40);
  std::string::string(asStack_60,pcVar1);
  FUN_04f8447c(local_20[0],1);
  DString::trim();
  pcVar1 = (char *)DString::c_str(aDStack_30);
  std::string::string(asStack_58,pcVar1);
  addItemInner(this,asStack_60,asStack_58);
  std::string::~string(asStack_58);
  nop();
  DString::~DString(aDStack_30);
  std::string::~string(asStack_60);
  nop();
  DString::~DString(aDStack_40);
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)local_20);
  DString::~DString(aDStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


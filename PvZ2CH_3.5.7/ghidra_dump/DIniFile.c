// Class: DIniFile


/* DIniFile::DIniFile() */

void __thiscall DIniFile::DIniFile(DIniFile *this)

{
  DFileHandler::DFileHandler((DFileHandler *)this);
  *(undefined ***)this = &PTR__DIniFile_06a23e70;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x18));
  return;
}


/* DIniFile::isEmpty() */

void __thiscall DIniFile::isEmpty(DIniFile *this)

{
  std::
  map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
  ::empty((map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
           *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniFile::writeBuff(DStreamBuffer&) */

void __thiscall DIniFile::writeBuff(DIniFile *this,DStreamBuffer *param_1)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  rbtree_iterator *__n;
  undefined8 uVar4;
  string asStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = (rbtree_iterator *)&local_20;
  Set8BytesTo0(asStack_30);
  local_28 = std::
             map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
             ::begin((map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
                      *)(this + 0x18));
  local_20 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x18));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
  if (bVar1) {
    do {
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      std::string::append(asStack_30,"[",(size_t)__n);
      thunk_FUN_054757c0(asStack_30,lVar2);
      FUN_05475ad8(asStack_30,&DAT_0569e368);
      pcVar3 = (char *)FUN_0547429c(asStack_30);
      __n = (rbtree_iterator *)FUN_05474178(asStack_30);
      DStreamBuffer::addDatas(param_1,pcVar3,(ulong)__n);
      local_18 = std::
                 map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
                 ::begin((map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
                          *)(lVar2 + 0x18));
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)(lVar2 + 0x18));
      while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
            bVar1) {
        lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        thunk_FUN_05475e00(asStack_30,lVar2);
        FUN_05475ad8(asStack_30,&DAT_0569e370);
        uVar4 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(lVar2 + 8));
        thunk_FUN_054757c0(asStack_30,uVar4);
        FUN_05475ad8(asStack_30,&DAT_0569e378);
        pcVar3 = (char *)FUN_0547429c(asStack_30);
        __n = (rbtree_iterator *)FUN_05474178(asStack_30);
        DStreamBuffer::addDatas(param_1,pcVar3,(ulong)__n);
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
    } while (bVar1);
  }
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DIniFile::~DIniFile() */

void __thiscall DIniFile::~DIniFile(DIniFile *this)

{
  *(undefined ***)this = &PTR__DIniFile_06a23e70;
  DFileHandler::write((DFileHandler *)this);
  std::
  map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
  ::~map((map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
          *)(this + 0x18));
  DFileHandler::~DFileHandler((DFileHandler *)this);
  return;
}


/* DIniFile::~DIniFile() */

void __thiscall DIniFile::~DIniFile(DIniFile *this)

{
  ~DIniFile(this);
  AK::FreeHook(this);
  return;
}


/* DIniFile::clear() */

void __thiscall DIniFile::clear(DIniFile *this)

{
  std::
  map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
  ::clear((map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
           *)(this + 0x18));
  return;
}


/* DIniFile::removeField(std::string const&) */

void DIniFile::removeField(string *param_1)

{
  std::
  map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
  ::erase(param_1 + 0x18);
  param_1[8] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniFile::getField(std::string const&) */

void __thiscall DIniFile::getField(DIniFile *this,string *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
             ::find((map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
                     *)(this + 0x18),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x18));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    lVar2 = lVar2 + 8;
  }
  else {
    lVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* DIniFile::getItem(std::string const&, std::string const&, std::string const&) */

void DIniFile::getItem(string *param_1,string *param_2,string *param_3)

{
  string *psVar1;
  
  psVar1 = (string *)getField((DIniFile *)param_1,param_2);
  if (psVar1 != (string *)0x0) {
    DIniField::getItem(psVar1,param_3);
    return;
  }
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniFile::getString(std::string const&, bool, std::string const&, std::string const&, std::string
   const&) */

void __thiscall
DIniFile::getString(DIniFile *this,string *param_1,bool param_2,string *param_3,string *param_4,
                   string *param_5)

{
  char cVar1;
  DIniFile aDStack_50 [9];
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DIniFile(aDStack_50);
  thunk_FUN_05475e00(auStack_40,this);
  local_47 = 1;
  local_45 = 0;
  local_46 = (char)param_1;
  cVar1 = DFileHandler::reload((DFileHandler *)aDStack_50);
  if (cVar1 == '\0') {
    FUN_05475d88();
  }
  else {
    getItem((string *)aDStack_50,(string *)(ulong)param_2,param_3);
  }
  ~DIniFile(aDStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DIniFile::getItemInt(std::string const&, std::string const&, int) */

ulong __thiscall DIniFile::getItemInt(DIniFile *this,string *param_1,string *param_2,int param_3)

{
  DIniField *this_00;
  ulong uVar1;
  
  this_00 = (DIniField *)getField(this,param_1);
  if (this_00 != (DIniField *)0x0) {
    uVar1 = DIniField::getItemInt(this_00,param_2,param_3);
    return uVar1;
  }
  return (ulong)(uint)param_3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniFile::getInt(std::string const&, bool, std::string const&, std::string const&, int) */

void DIniFile::getInt(string *param_1,bool param_2,string *param_3,string *param_4,int param_5)

{
  char cVar1;
  DIniFile aDStack_50 [9];
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DIniFile(aDStack_50);
  thunk_FUN_05475e00(auStack_40,param_1);
  local_47 = 1;
  local_45 = 0;
  local_46 = param_2;
  cVar1 = DFileHandler::reload((DFileHandler *)aDStack_50);
  if (cVar1 != '\0') {
    param_5 = getItemInt(aDStack_50,param_3,param_4,param_5);
  }
  ~DIniFile(aDStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_5);
}


/* DIniFile::getItemFloat(std::string const&, std::string const&, float) */

void __thiscall DIniFile::getItemFloat(DIniFile *this,string *param_1,string *param_2,float param_3)

{
  DIniField *this_00;
  
  this_00 = (DIniField *)getField(this,param_1);
  if (this_00 != (DIniField *)0x0) {
    DIniField::getItemFloat(this_00,param_2,param_3);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniFile::getFloat(std::string const&, bool, std::string const&, std::string const&, float) */

void DIniFile::getFloat(string *param_1,bool param_2,string *param_3,string *param_4,float param_5)

{
  char cVar1;
  DIniFile aDStack_50 [9];
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DIniFile(aDStack_50);
  thunk_FUN_05475e00(auStack_40,param_1);
  local_47 = 1;
  local_45 = 0;
  local_46 = param_2;
  cVar1 = DFileHandler::reload((DFileHandler *)aDStack_50);
  if (cVar1 != '\0') {
    param_5 = (float)getItemFloat(aDStack_50,param_3,param_4,param_5);
  }
  ~DIniFile(aDStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_5);
}


/* DIniFile::getItemBool(std::string const&, std::string const&, bool) */

ulong __thiscall DIniFile::getItemBool(DIniFile *this,string *param_1,string *param_2,bool param_3)

{
  DIniField *this_00;
  ulong uVar1;
  
  this_00 = (DIniField *)getField(this,param_1);
  if (this_00 != (DIniField *)0x0) {
    uVar1 = DIniField::getItemBool(this_00,param_2,param_3);
    return uVar1;
  }
  return (ulong)param_3;
}


/* DIniFile::removeItem(std::string const&, std::string const&) */

void DIniFile::removeItem(string *param_1,string *param_2)

{
  string *psVar1;
  
  psVar1 = (string *)getField((DIniFile *)param_1,param_2);
  if (psVar1 != (string *)0x0) {
    DIniField::removeItem(psVar1);
    return;
  }
  return;
}


/* DIniFile::cleanField(std::string const&) */

void __thiscall DIniFile::cleanField(DIniFile *this,string *param_1)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
  *this_01;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)getField(this,param_1);
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
       *)0x0) {
    this_01 = (map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
               *)std::
                 _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                 ::_M_root(this_00);
    std::
    map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
    ::clear(this_01);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniFile::addFieldInner(std::string const&) */

void __thiscall DIniFile::addFieldInner(DIniFile *this,string *param_1)

{
  map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
  *this_00;
  char cVar1;
  DIniField *this_01;
  undefined8 local_50;
  undefined8 local_48;
  DIniFile *local_40;
  long local_8;
  
  this_00 = (map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  local_50 = std::
             map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
             ::find(this_00,param_1);
  local_48 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_50,(exception_ptr *)&local_48);
  if (cVar1 != '\0') {
    DIniField::DIniField((DIniField *)&local_48);
    local_40 = this;
    this_01 = (DIniField *)
              std::
              map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
              ::operator[](this_00,param_1);
    DIniField::operator=(this_01,(DIniField *)&local_48);
    DIniField::~DIniField((DIniField *)&local_48);
  }
  std::
  map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
  ::operator[](this_00,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DIniFile::addField(std::string const&) */

void __thiscall DIniFile::addField(DIniFile *this,string *param_1)

{
  this[8] = (DIniFile)0x1;
  addFieldInner(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniFile::copyField(std::string const&, std::string const&) */

void __thiscall DIniFile::copyField(DIniFile *this,string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  DIniField *this_00;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_01;
  map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
  *this_02;
  string *psVar4;
  string *psVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_1);
  if ((((cVar1 == '\0') && (cVar1 = FUN_0547419c(param_2), cVar1 == '\0')) &&
      (iVar3 = FUN_054748a4(param_1,param_2), iVar3 != 0)) &&
     ((this_01 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                  *)getField(this,param_2),
      this_01 !=
      (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
       *)0x0 && (this_00 = (DIniField *)addField(this,param_1), this_00 != (DIniField *)0x0)))) {
    this_02 = (map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
               *)std::
                 _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                 ::_M_root(this_01);
    local_18 = std::
               map<std::string,DIniItem,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniItem>>>
               ::begin(this_02);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_02);
    while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar2) {
      psVar4 = (string *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      psVar5 = (string *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)(psVar4 + 8));
      DIniField::addItem(this_00,psVar4,psVar5);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    }
  }
  else {
    this_00 = (DIniField *)0x0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* DIniFile::setItem(std::string const&, std::string const&, std::string const&) */

void __thiscall DIniFile::setItem(DIniFile *this,string *param_1,string *param_2,string *param_3)

{
  DIniField *this_00;
  
  this_00 = (DIniField *)addField(this,param_1);
  if (this_00 != (DIniField *)0x0) {
    DIniField::addItem(this_00,param_2,param_3);
    return;
  }
  return;
}


/* DIniFile::renameField(std::string const&, std::string const&) */

undefined8 __thiscall DIniFile::renameField(DIniFile *this,string *param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  DIniField *pDVar3;
  DIniField *this_00;
  
  cVar1 = FUN_0547419c(param_1);
  if ((((cVar1 == '\0') && (cVar1 = FUN_0547419c(param_2), cVar1 == '\0')) &&
      (iVar2 = FUN_054748a4(param_1,param_2), iVar2 != 0)) &&
     (pDVar3 = (DIniField *)getField(this,param_2), pDVar3 != (DIniField *)0x0)) {
    this_00 = (DIniField *)
              std::
              map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
              ::operator[]((map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
                            *)(this + 0x18),param_1);
    DIniField::operator=(this_00,pDVar3);
    std::
    map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
    ::erase((string *)(this + 0x18));
    this[8] = (DIniFile)0x1;
    return 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniFile::readBuff(char const*) */

void __thiscall DIniFile::readBuff(DIniFile *this,char *param_1)

{
  int iVar1;
  DStackAllocator *pDVar2;
  char *__s;
  DIniField *this_00;
  char local_15;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar2 = (DStackAllocator *)DStackAllocator::getInstance();
  this_00 = (DIniField *)0x0;
  __s = (char *)DStackAllocator::push(pDVar2,0x400);
  local_15 = '\0';
  iVar1 = FUN_04f84324(param_1,__s,&local_14,&local_15);
  while (iVar1 != 0) {
    if (((1 < iVar1) && (0 < local_14)) && (local_15 == '\0')) {
      if ((*__s == '[') && (__s[(long)local_14 + -1] == ']')) {
        __s[(long)local_14 + -1] = '\0';
        trim(__s + 1);
        std::string::string(asStack_10,__s + 1);
        this_00 = (DIniField *)addFieldInner(this,asStack_10);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        std::string::string(asStack_10,__s);
        DIniField::addItem(this_00,asStack_10);
        std::string::~string(asStack_10);
        nop();
      }
    }
    param_1 = param_1 + iVar1;
    iVar1 = FUN_04f84324(param_1,__s,&local_14,&local_15);
  }
  pDVar2 = (DStackAllocator *)DStackAllocator::getInstance();
  DStackAllocator::pop(pDVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniFile::setItem(std::string const&, std::string const&, int) */

void __thiscall DIniFile::setItem(DIniFile *this,string *param_1,string *param_2,int param_3)

{
  char *__s;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_18);
  DString::format((char *)aDStack_18,&DAT_055936e8,(ulong)(uint)param_3);
  __s = (char *)DString::c_str(aDStack_18);
  std::string::string(asStack_20,__s);
  setItem(this,param_1,param_2,asStack_20);
  std::string::~string(asStack_20);
  nop();
  DString::~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DIniFile::setItemBool(std::string const&, std::string const&, bool) */

void __thiscall DIniFile::setItemBool(DIniFile *this,string *param_1,string *param_2,bool param_3)

{
  setItem(this,param_1,param_2,(uint)param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DIniFile::setItem(std::string const&, std::string const&, float) */

void __thiscall DIniFile::setItem(DIniFile *this,string *param_1,string *param_2,float param_3)

{
  char *__s;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DString::DString(aDStack_18);
  DString::format((char *)aDStack_18,(double)param_3,&DAT_055f3d18);
  __s = (char *)DString::c_str(aDStack_18);
  std::string::string(asStack_20,__s);
  setItem(this,param_1,param_2,asStack_20);
  std::string::~string(asStack_20);
  nop();
  DString::~DString(aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


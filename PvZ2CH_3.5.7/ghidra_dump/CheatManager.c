// Class: CheatManager


/* CheatManager::GetVariableValue(std::string const&) const */

undefined4 CheatManager::GetVariableValue(string *param_1)

{
  return 0x7f7fffff;
}


/* CheatManager::CheatManager() */

void __thiscall CheatManager::CheatManager(CheatManager *this)

{
  Sexy::LazySingleton<CheatManager>::LazySingleton((LazySingleton<CheatManager> *)this);
  *(undefined ***)this = &PTR__CheatManager_06610220;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x38));
  *(undefined4 *)(this + 0x68) = 1;
  return;
}


/* CheatManager::~CheatManager() */

void __thiscall CheatManager::~CheatManager(CheatManager *this)

{
  *(undefined ***)this = &PTR__CheatManager_06610220;
  std::
  map<std::string,Cheat*,std::less<std::string>,std::allocator<std::pair<std::string_const,Cheat*>>>
  ::~map((map<std::string,Cheat*,std::less<std::string>,std::allocator<std::pair<std::string_const,Cheat*>>>
          *)(this + 0x38));
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)(this + 8));
  Sexy::LazySingleton<CheatManager>::~LazySingleton((LazySingleton<CheatManager> *)this);
  return;
}


/* CheatManager::~CheatManager() */

void __thiscall CheatManager::~CheatManager(CheatManager *this)

{
  ~CheatManager(this);
  AK::FreeHook(this);
  return;
}


/* CheatManager::SetCurrentContext(CheatContext) */

void __thiscall CheatManager::SetCurrentContext(CheatManager *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x68) = param_2;
  return;
}


/* CheatManager::GetCurrentContext() const */

undefined4 __thiscall CheatManager::GetCurrentContext(CheatManager *this)

{
  return *(undefined4 *)(this + 0x68);
}


/* CheatManager::SetToggleValue(std::string const&, bool) */

void CheatManager::SetToggleValue(string *param_1,bool param_2)

{
  uint uVar1;
  uint in_w2;
  uint uVar2;
  undefined4 in_register_00004014;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  uVar2 = in_w2;
  uVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)param_1,(wchar16 *)(ulong)param_2,
                     (LineBreakCategory *)CONCAT44(in_register_00004014,in_w2),in_x3,in_x4);
  if ((in_w2 & 0xff) != (uVar1 & 0xff)) {
    EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
              ((wchar16 *)param_1,(wchar16 *)(ulong)param_2,
               (LineBreakCategory *)CONCAT44(in_register_00004014,uVar2),in_x3,in_x4);
    return;
  }
  return;
}


/* CheatManager::trimToMaxLines(std::string const&, int) */

void CheatManager::trimToMaxLines(string *param_1,int param_2)

{
  int in_w2;
  long lVar1;
  int iVar2;
  
  lVar1 = -1;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    lVar1 = FUN_054744e0(param_2,10,lVar1 + -1);
    if (lVar1 == -1) break;
  } while (iVar2 <= in_w2);
  if (lVar1 != -1) {
    FUN_05475ffc(param_2,lVar1 + 1,0xffffffffffffffff);
    return;
  }
  FUN_05475d88();
  return;
}


/* CheatManager::IsCheatValidForCurrentContext(Cheat*) const */

bool __thiscall CheatManager::IsCheatValidForCurrentContext(CheatManager *this,Cheat *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete((BaseResStreamsDriver *)param_1);
  bVar1 = TestFlag<VaseFlags>(uVar2,*(undefined4 *)(this + 0x68));
  return bVar1;
}


/* CheatManager::SetVariableValue(std::string const&, float) */

void CheatManager::SetVariableValue(string *param_1,float param_2)

{
  bool bVar1;
  RtObject *this;
  CheatVariable *this_00;
  
  this = (RtObject *)EA::Thread::GetModuleHandleFromAddress(param_1);
  if ((this != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<CheatVariable>(this), bVar1)) {
    nop();
    CheatVariable::SetValue(this_00,param_2);
    return;
  }
  return;
}


/* CheatManager::SetCheatCachedText(std::string const&, std::string const&) */

void __thiscall CheatManager::SetCheatCachedText(CheatManager *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)(this + 8),param_1);
  thunk_FUN_05475e00(uVar1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatManager::GetCheatCachedText(std::string const&, std::string const&) */

void CheatManager::GetCheatCachedText(string *param_1,string *param_2)

{
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  *this;
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find(this,param_2);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::operator[](this,param_2);
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
/* CheatManager::AddCheatCachedLog(std::string const&, std::string const&, int) */

void CheatManager::AddCheatCachedLog(string *param_1,string *param_2,int param_3)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  GetCheatCachedText(param_1,param_2);
  std::string::~string(asStack_10);
  nop();
  thunk_FUN_054757c0(asStack_18,param_3);
  trimToMaxLines(param_1,(int)asStack_18);
  FUN_05474278(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  SetCheatCachedText((CheatManager *)param_1,param_2,asStack_18);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatManager::CheckShortcuts() */

void __thiscall CheatManager::CheckShortcuts(CheatManager *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Cheat *this_00;
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  local_50 = std::
             map<std::string,Cheat*,std::less<std::string>,std::allocator<std::pair<std::string_const,Cheat*>>>
             ::begin((map<std::string,Cheat*,std::less<std::string>,std::allocator<std::pair<std::string_const,Cheat*>>>
                      *)(this + 0x38));
  while( true ) {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x38));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_40);
    if (!bVar1) break;
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
    this_00 = *(Cheat **)(lVar4 + 8);
    if ((this_00 != (Cheat *)0x0) && (cVar2 = Cheat::GetKeyboardShortcut(this_00), cVar2 != '\0')) {
      local_51 = Cheat::GetKeyboardShortcut(this_00);
      local_48 = std::map<char,Cheat*,std::less<char>,std::allocator<std::pair<char_const,Cheat*>>>
                 ::find((map<char,Cheat*,std::less<char>,std::allocator<std::pair<char_const,Cheat*>>>
                         *)amStack_38,&local_51);
      local_40 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      cVar2 = std::__exception_ptr::operator==
                        ((exception_ptr *)&local_48,(exception_ptr *)&local_40);
      if (cVar2 == '\0') {
        pbVar5 = (byte *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                   ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                    &local_48);
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)this_00);
        uVar6 = FUN_0547429c();
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_end(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   **)(pbVar5 + 8));
        uVar7 = FUN_0547429c();
        Sexy::OutputDebugStrF
                  ((wchar_t *)
                   "* Potential cheat keyboard shortcut (\'%c\') collision between \'%s\' and \'%s\'!\n"
                   ,(ulong)*pbVar5,uVar6,uVar7);
      }
      else {
        puVar3 = (undefined8 *)
                 std::map<char,Cheat*,std::less<char>,std::allocator<std::pair<char_const,Cheat*>>>
                 ::operator[]((map<char,Cheat*,std::less<char>,std::allocator<std::pair<char_const,Cheat*>>>
                               *)amStack_38,&local_51);
        *puVar3 = this_00;
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
  }
  std::map<char,Cheat*,std::less<char>,std::allocator<std::pair<char_const,Cheat*>>>::~map
            ((map<char,Cheat*,std::less<char>,std::allocator<std::pair<char_const,Cheat*>>> *)
             amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: InterfaceChooseDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InterfaceChooseDialog::InterfaceChooseDialog() */

void __thiscall InterfaceChooseDialog::InterfaceChooseDialog(InterfaceChooseDialog *this)

{
  equal_to aeStack_20 [8];
  allocator aaStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined **)this = &DAT_06866cb0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  ::unordered_map((ulong)(this + 0x38),(hash *)0xa,aeStack_20,aaStack_18);
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::unordered_map((ulong)(this + 0x70),(hash *)0xa,aeStack_20,aaStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InterfaceChooseDialog::~InterfaceChooseDialog() */

void __thiscall InterfaceChooseDialog::~InterfaceChooseDialog(InterfaceChooseDialog *this)

{
  *(undefined **)this = &DAT_06866cb0;
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::~unordered_map((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                    *)(this + 0x70));
  std::
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  ::~unordered_map((unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                    *)(this + 0x38));
  std::
  map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
  ::~map((map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
          *)(this + 8));
  return;
}


/* InterfaceChooseDialog::~InterfaceChooseDialog() */

void __thiscall InterfaceChooseDialog::~InterfaceChooseDialog(InterfaceChooseDialog *this)

{
  ~InterfaceChooseDialog(this);
  AK::FreeHook(this);
  return;
}


/* InterfaceChooseDialog::AllowInput() */

byte InterfaceChooseDialog::AllowInput(void)

{
  byte bVar1;
  
  Sexy::LazySingleton<TutorialMgr>::GetInstance();
  bVar1 = TutorialMgr::HasRunningIconEffect();
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InterfaceChooseDialog::GetHomeActivityRes(HomeActityType) */

void InterfaceChooseDialog::GetHomeActivityRes(string *param_1,long param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1c = param_3;
  local_18 = std::
             unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
             ::find((unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                     *)(param_2 + 0x38),&local_1c);
  local_10 = FUN_045a30c8();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    local_10 = CONCAT44(local_10._4_4_,param_3);
    uVar2 = std::
            unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
            ::operator[]((unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                          *)(param_2 + 0x38),(int *)&local_10);
    FUN_05475d88(param_1,uVar2);
  }
  else {
    std::string::string(param_1,"");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InterfaceChooseDialog::GetButtonById(HomeActityType) */

void __thiscall InterfaceChooseDialog::GetButtonById(InterfaceChooseDialog *this,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1c = param_2;
  local_18 = std::
             unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
             ::find((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                     *)(this + 0x70),&local_1c);
  local_10 = FUN_045a2fac();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    local_10 = CONCAT44(local_10._4_4_,param_2);
    puVar2 = (undefined8 *)
             std::
             unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
             ::operator[]((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                           *)(this + 0x70),(int *)&local_10);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InterfaceChooseDialog::ShowWidgetVisible(HomeActityType, bool) */

void __thiscall
InterfaceChooseDialog::ShowWidgetVisible(InterfaceChooseDialog *this,int param_2,undefined1 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_1c = param_2;
  local_18 = std::
             unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
             ::find((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                     *)(this + 0x70),&local_1c);
  local_10 = FUN_045a2fac();
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    local_10 = CONCAT44(local_10._4_4_,param_2);
    puVar2 = (undefined8 *)
             std::
             unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
             ::operator[]((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                           *)(this + 0x70),(int *)&local_10);
    (**(code **)(*(long *)*puVar2 + 0x158))((long *)*puVar2,param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


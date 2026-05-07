// Class: Toggles


/* Toggles::Toggles(LiveConfigToggleGetter&) */

void __thiscall Toggles::Toggles(Toggles *this,LiveConfigToggleGetter *param_1)

{
  *(LiveConfigToggleGetter **)this = param_1;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x38));
  return;
}


/* Toggles::GetInstance() */

undefined * Toggles::GetInstance(void)

{
  int iVar1;
  LiveConfigToggleGetter *pLVar2;
  
  if (((DAT_06b70818 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b70818), iVar1 != 0)) {
    pLVar2 = (LiveConfigToggleGetter *)LiveConfigToggleGetter::GetInstance();
    Toggles((Toggles *)&DAT_06b70798,pLVar2);
    __cxa_guard_release(&DAT_06b70818);
    __cxa_atexit(~Toggles,&DAT_06b70798,&DAT_06a88000);
    return &DAT_06b70798;
  }
  return &DAT_06b70798;
}


/* Toggles::~Toggles() */

void __thiscall Toggles::~Toggles(Toggles *this)

{
  std::
  map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>::
  ~map((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
        *)(this + 0x38));
  std::
  map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>::
  ~map((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
        *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Toggles::IsEnabled(std::string const&) */

void __thiscall Toggles::IsEnabled(Toggles *this,string *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
  *this_00;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
             ::find(this_00,param_1);
  local_20[0] = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
  if (!bVar1) {
    this_00 = (map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
               *)(this + 0x38);
    local_28 = std::
               map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
               ::find(this_00,param_1);
    local_20[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
    if (!bVar1) {
      (**(code **)(**(long **)this + 0x10))
                ((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)local_20,*(long **)this);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
      while( true ) {
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
        uVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
        if (!(bool)uVar2) break;
        lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        iVar3 = FUN_054748a4(lVar4,param_1);
        if (iVar3 == 0) {
          uVar2 = *(undefined1 *)(lVar4 + 8);
          goto LAB_0494880c;
        }
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_30);
      }
      uVar5 = FUN_0547429c(param_1);
      Sexy::OutputDebugStrF
                ((wchar_t *)
                 "\n!! Toggle \"%s\" not found in liveconfig.json!  Did you typo the name?\n",uVar5)
      ;
LAB_0494880c:
      std::vector<Toggle,std::allocator<Toggle>>::~vector
                ((vector<Toggle,std::allocator<Toggle>> *)local_20);
      goto LAB_04948828;
    }
  }
  puVar6 = (undefined1 *)
           std::
           map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
           ::operator[](this_00,param_1);
  uVar2 = *puVar6;
LAB_04948828:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Toggles::SwrveToggle(std::string const&, bool) */

void __thiscall Toggles::SwrveToggle(Toggles *this,string *param_1,bool param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
          ::operator[]((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                        *)(this + 0x38),param_1);
  *(bool *)uVar3 = param_2;
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_10,param_1);
  uVar2 = IsEnabled(this,param_1);
  MessageRouter::Broadcast<std::string_const&,bool,std::string,bool>
            ((MessageRouter *)puVar1,Message::ToggleOverrideSet,asStack_10,uVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Toggles::OverrideToggle(std::string const&, bool) */

void __thiscall Toggles::OverrideToggle(Toggles *this,string *param_1,bool param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
          ::operator[]((map<std::string,bool,std::less<std::string>,std::allocator<std::pair<std::string_const,bool>>>
                        *)(this + 8),param_1);
  *(bool *)uVar3 = param_2;
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_10,param_1);
  uVar2 = IsEnabled(this,param_1);
  MessageRouter::Broadcast<std::string_const&,bool,std::string,bool>
            ((MessageRouter *)puVar1,Message::ToggleOverrideSet,asStack_10,uVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


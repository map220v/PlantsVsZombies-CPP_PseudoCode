// Class: PlantStatefulFramework


/* PlantStatefulFramework::getActionStateSerialization() */

void __thiscall PlantStatefulFramework::getActionStateSerialization(PlantStatefulFramework *this)

{
  FUN_03bde6d0(*(undefined4 *)(this + 0x28));
  return;
}


/* PlantStatefulFramework::UpdateActions() */

void __thiscall PlantStatefulFramework::UpdateActions(PlantStatefulFramework *this)

{
  StateMachine<PlantState>::UpdateState((StateMachine<PlantState> *)(this + 0x28));
  return;
}


/* PlantStatefulFramework::~PlantStatefulFramework() */

void __thiscall PlantStatefulFramework::~PlantStatefulFramework(PlantStatefulFramework *this)

{
  *(undefined ***)this = &PTR_GetClass_0673e270;
  std::
  map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
  ::~map((map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
          *)(this + 0xf8));
  std::
  map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
  ::~map((map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
          *)(this + 200));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantStatefulFramework::~PlantStatefulFramework() */

void __thiscall PlantStatefulFramework::~PlantStatefulFramework(PlantStatefulFramework *this)

{
  ~PlantStatefulFramework(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStatefulFramework::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantStatefulFramework::onAnimStoppedCallback(PlantStatefulFramework *this,string *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
             ::find((map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
                     *)(this + 200),(uint *)(*(long *)(this + 0x10) + 200));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 200));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(lVar2 + 8),(SexyURL *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStatefulFramework::OnAnimCommand(std::string const&, std::string const&) */

void PlantStatefulFramework::OnAnimCommand(string *param_1,string *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
             ::find((map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
                     *)(param_1 + 0xf8),(uint *)(*(long *)(param_1 + 0x10) + 200));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(param_1 + 0xf8));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 == '\0') {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)(lVar2 + 8),(char *)param_2);
    lVar2 = 1;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    lVar2 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      PlantFramework::OnAnimCommand(param_1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStatefulFramework::PlantStatefulFramework() */

void __thiscall PlantStatefulFramework::PlantStatefulFramework(PlantStatefulFramework *this)

{
  map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
  *this_00;
  Delegate2<Sexy::IPurchaseDriver*,bool> *pDVar1;
  map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
  *this_01;
  uint local_54;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0673e270;
  StateMachine<PlantState>::StateMachine((StateMachine<PlantState> *)(this + 0x28));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 200));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xf8));
  this_00 = (map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
             *)PlayerInfo::GetPlantAvatarInfo((PlayerInfo *)this);
  local_54 = 0;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x540);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 1;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x568);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 2;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x590);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 3;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x5b8);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 4;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x5e0);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 5;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x608);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 6;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x630);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 7;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x658);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 8;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x680);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 9;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x6a8);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 10;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x6d0);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  this_01 = (map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
             *)Sexy::RtDbTable::GetSharedIteratorStorage((RtDbTable *)this);
  local_54 = 0;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x548);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 1;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x570);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 2;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x598);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 3;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x5c0);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 4;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x5e8);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 5;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x610);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 6;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x638);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 7;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x660);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 8;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x688);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 9;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x6b0);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 10;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x6d8);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStatefulFramework::StaticNew() */

PlantStatefulFramework * PlantStatefulFramework::StaticNew(void)

{
  PlantStatefulFramework *this;
  
  this = ::operator_new(0x128);
  PlantStatefulFramework(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStatefulFramework::StaticClassInit() */

void PlantStatefulFramework::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<PlantState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<PlantState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"PlantStatefulFramework");
      (*pcVar4)(plVar1,asStack_150,FUN_03be1c7c,0x128,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<PlantState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x528);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x530);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x538);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_NOTREADY");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x550);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x558);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x560);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_READY");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x578);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x580);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x588);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_DOINGSPECIAL");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x5a0);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x5a8);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x5b0);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_BEINGREMOVED");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x5c8);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x5d0);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x5d8);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_IDLE");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x5f0);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x5f8);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x600);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_PLANTFOOD");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x618);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x620);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x628);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_BEING_HELPED");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,6,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x640);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x648);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x650);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_EXHAUSTED");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,7,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x668);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x670);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x678);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_CHARGING");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x690);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x698);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x6a0);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_CYCLING");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,9,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x6b8);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x6c0);
  Sexy::Delegate0::Delegate0<PlantStatefulFramework,void(PlantStatefulFramework::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x6c8);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantStatefulFramework,void(PlantStatefulFramework::*)(PlantState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"STATE_FRAMEWORK_BEGIN");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03be11e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantStatefulFramework::StaticGetClass() */

long * PlantStatefulFramework::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantStatefulFramework",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStatefulFramework::GetClass() const */

long * PlantStatefulFramework::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantStatefulFramework",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStatefulFramework::setActionStateSerialization(unsigned int) */

void __thiscall
PlantStatefulFramework::setActionStateSerialization(PlantStatefulFramework *this,uint param_1)

{
  StateMachineTableBuilder *this_00;
  RtClass *pRVar1;
  StateMachineTable *pSVar2;
  StateDefinition *pSVar3;
  StateDefinition<PlantState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar1 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar2 = StateMachineTableBuilder::GetTable<PlantState>(this_00,pRVar1);
  pSVar3 = (StateDefinition *)
           StateMachineTable<PlantState>::GetStateDefinition
                     ((StateMachineTable<PlantState> *)pSVar2,param_1);
  StateDefinition<PlantState>::StateDefinition(aSStack_a8,pSVar3);
  StateDefinition<PlantState>::SetContext(aSStack_a8,this);
  StateMachine<DPEState>::SetStateNoTransition
            ((StateMachine<DPEState> *)(this + 0x28),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStatefulFramework::setActionState(unsigned int, bool) */

void __thiscall
PlantStatefulFramework::setActionState(PlantStatefulFramework *this,uint param_1,bool param_2)

{
  uint uVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  StateDefinition *pSVar4;
  StateDefinition<PlantState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StateMachineTableBuilder *)
            Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
  pRVar2 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
  pSVar3 = StateMachineTableBuilder::GetTable<PlantState>(this_00,pRVar2);
  pSVar4 = (StateDefinition *)
           StateMachineTable<PlantState>::GetStateDefinition
                     ((StateMachineTable<PlantState> *)pSVar3,param_1);
  StateDefinition<PlantState>::StateDefinition(aSStack_a8,pSVar4);
  StateDefinition<PlantState>::SetContext(aSStack_a8,this);
  uVar1 = FUN_03bde6d0(*(undefined4 *)(this + 0x28));
  if (param_1 == uVar1) {
    if (param_2) {
      StateMachine<PlantState>::ReenterState((StateMachine<PlantState> *)(this + 0x28));
    }
  }
  else {
    StateMachine<PlantState>::SetState
              ((StateMachine<PlantState> *)(this + 0x28),(StateDefinition *)aSStack_a8);
  }
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


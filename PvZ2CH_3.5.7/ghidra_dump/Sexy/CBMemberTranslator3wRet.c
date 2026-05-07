// Class: Sexy::CBMemberTranslator3wRet<std::string,std::string&,int,int,PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int,int)>


/* Sexy::CBMemberTranslator3wRet<std::string, std::string&, int, int, PVZRemoteControl, std::string
   (PVZRemoteControl::*)(std::string&, int, int)>::thunk(Sexy::DelegateBase const&, std::string&,
   int, int) */

void __thiscall
Sexy::
CBMemberTranslator3wRet<std::string,std::string&,int,int,PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int,int)>
::thunk(CBMemberTranslator3wRet<std::string,std::string&,int,int,PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int,int)>
        *this,DelegateBase *param_1,string *param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_04402e40(*(undefined8 *)(this + 0x18));
  plVar3 = (long *)std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
  lVar1 = plVar3[1] >> 1;
  if ((plVar3[1] & 1U) != 0) {
    (**(code **)(*(long *)(lVar2 + lVar1) + *plVar3))(lVar2 + lVar1);
    return;
  }
  (*(code *)*plVar3)(lVar2 + lVar1,param_1,param_2,param_3);
  return;
}


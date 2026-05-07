// Class: Sexy::Delegate3wRet<std::string,std::string&,int,int>


/* Sexy::Delegate3wRet<std::string, std::string&, int, int>::Delegate3wRet<PVZRemoteControl,
   std::string (PVZRemoteControl::*)(std::string&, int,
   int)>(Sexy::CBMemberTranslatorX<PVZRemoteControl, std::string (PVZRemoteControl::*)(std::string&,
   int, int)> const&) */

void __thiscall
Sexy::Delegate3wRet<std::string,std::string&,int,int>::
Delegate3wRet<PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int,int)>
          (Delegate3wRet<std::string,std::string&,int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<std::string>::
  DelegateWRetBase<PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int)>
            ((DelegateWRetBase<std::string> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06847b80;
  *(code **)(this + 0x28) =
       CBMemberTranslator3wRet<std::string,std::string&,int,int,PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate3wRet<std::string, std::string&, int,
   int>::InternalInvokeWithTypedReturn(Sexy::RtInvokeVariant const*) const */

void Sexy::Delegate3wRet<std::string,std::string&,int,int>::InternalInvokeWithTypedReturn
               (RtInvokeVariant *param_1)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  RtInvokeVariant *in_x1;
  
  psVar3 = RtInvokeVariant::Get<std::string&>(in_x1);
  iVar1 = RtInvokeVariant::Get<int>(in_x1 + 0x10);
  iVar2 = RtInvokeVariant::Get<int>(in_x1 + 0x20);
  (**(code **)(param_1 + 0x28))(param_1,psVar3,iVar1,iVar2);
  return;
}


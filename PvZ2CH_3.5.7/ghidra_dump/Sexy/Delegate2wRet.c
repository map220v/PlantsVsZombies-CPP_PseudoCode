// Class: Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>


/* Sexy::Delegate2wRet<bool, Sexy::SexyVector3&, PlantLauncherProps
   const*>::Delegate2wRet<PlantBoomFlower, bool (PlantBoomFlower::*)(Sexy::SexyVector3&,
   PlantLauncherProps const*)>(Sexy::CBMemberTranslatorX<PlantBoomFlower, bool
   (PlantBoomFlower::*)(Sexy::SexyVector3&, PlantLauncherProps const*)> const&) */

void __thiscall
Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>::
Delegate2wRet<PlantBoomFlower,bool(PlantBoomFlower::*)(Sexy::SexyVector3&,PlantLauncherProps_const*)>
          (Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<bool>::
  DelegateWRetBase<GridItemCardGameZombie,bool(GridItemCardGameZombie::*)(Sexy::Touch_const&)>
            ((DelegateWRetBase<bool> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067e6840;
  *(code **)(this + 0x28) =
       CBMemberTranslator2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*,PlantBoomFlower,bool(PlantBoomFlower::*)(Sexy::SexyVector3&,PlantLauncherProps_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2wRet<bool, Sexy::SexyVector3&, PlantLauncherProps
   const*>::InternalInvokeWithTypedReturn(Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>::
InternalInvokeWithTypedReturn
          (Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*> *this,
          RtInvokeVariant *param_1)

{
  SexyVector3 *pSVar1;
  PlantLauncherProps *pPVar2;
  
  pSVar1 = RtInvokeVariant::Get<Sexy::SexyVector3&>(param_1);
  pPVar2 = RtInvokeVariant::Get<PlantLauncherProps_const*>(param_1 + 0x10);
  (**(code **)(this + 0x28))(this,pSVar1,pPVar2);
  return;
}


/* Sexy::Delegate2wRet<bool, Sexy::SexyVector3&, PlantLauncherProps
   const*>::Delegate2wRet(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>::Delegate2wRet
               (DummyInit *param_1)

{
  DelegateWRetBase<bool>::DelegateWRetBase((DelegateWRetBase<bool> *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_067e6840;
  return;
}


/* Sexy::Delegate2wRet<bool, Sexy::SexyVector3&, PlantLauncherProps
   const*>::Delegate2wRet(Sexy::Delegate2wRet<bool, Sexy::SexyVector3&, PlantLauncherProps const*>
   const&) */

void __thiscall
Sexy::Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*>::Delegate2wRet
          (Delegate2wRet<bool,Sexy::SexyVector3&,PlantLauncherProps_const*> *this,
          Delegate2wRet *param_1)

{
  DelegateWRetBase<bool>::DelegateWRetBase
            ((DelegateWRetBase<bool> *)this,(DelegateWRetBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_067e6840;
  return;
}


/* Sexy::Delegate2wRet<std::string, std::string&, int>::Delegate2wRet<PVZRemoteControl, std::string
   (PVZRemoteControl::*)(std::string&, int)>(Sexy::CBMemberTranslatorX<PVZRemoteControl, std::string
   (PVZRemoteControl::*)(std::string&, int)> const&) */

void __thiscall
Sexy::Delegate2wRet<std::string,std::string&,int>::
Delegate2wRet<PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int)>
          (Delegate2wRet<std::string,std::string&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateWRetBase<std::string>::
  DelegateWRetBase<PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int)>
            ((DelegateWRetBase<std::string> *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06847be0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2wRet<std::string,std::string&,int,PVZRemoteControl,std::string(PVZRemoteControl::*)(std::string&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2wRet<std::string, std::string&,
   int>::InternalInvokeWithTypedReturn(Sexy::RtInvokeVariant const*) const */

void Sexy::Delegate2wRet<std::string,std::string&,int>::InternalInvokeWithTypedReturn
               (RtInvokeVariant *param_1)

{
  int iVar1;
  string *psVar2;
  RtInvokeVariant *in_x1;
  
  psVar2 = RtInvokeVariant::Get<std::string&>(in_x1);
  iVar1 = RtInvokeVariant::Get<int>(in_x1 + 0x10);
  (**(code **)(param_1 + 0x28))(param_1,psVar2,iVar1);
  return;
}


/* Sexy::Delegate2wRet<int, Sexy::RtId const&, Sexy::RtId
   const&>::Delegate2wRet(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2wRet<int,Sexy::RtId_const&,Sexy::RtId_const&>::Delegate2wRet(DummyInit *param_1)

{
  DelegateWRetBase<int>::DelegateWRetBase((DelegateWRetBase<int> *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06a30980;
  return;
}


/* Sexy::Delegate2wRet<int, Sexy::RtId const&, Sexy::RtId
   const&>::InternalInvokeWithTypedReturn(Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2wRet<int,Sexy::RtId_const&,Sexy::RtId_const&>::InternalInvokeWithTypedReturn
          (Delegate2wRet<int,Sexy::RtId_const&,Sexy::RtId_const&> *this,RtInvokeVariant *param_1)

{
  RtId *pRVar1;
  RtId *pRVar2;
  
  pRVar1 = RtInvokeVariant::Get<Sexy::RtId_const&>(param_1);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtId_const&>(param_1 + 0x10);
  (**(code **)(this + 0x28))(this,pRVar1,pRVar2);
  return;
}


// Class: Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>


/* Sexy::Delegate2<Sexy::IPurchaseDriver*,
   bool>::TEMPNAMEPLACEHOLDERVALUE(Sexy::Delegate2<Sexy::IPurchaseDriver*, bool> const&) */

Delegate2<Sexy::IPurchaseDriver*,bool> * __thiscall
Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
          (Delegate2<Sexy::IPurchaseDriver*,bool> *this,Delegate2 *param_1)

{
  DelegateBase::operator=((DelegateBase *)this,(DelegateBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  return this;
}


/* Sexy::Delegate2<char const*, char const*>::TEMPNAMEPLACEHOLDERVALUE(char const*, char const*)
   const */

void Sexy::Delegate2<char_const*,char_const*>::operator()(char *param_1,char *param_2)

{
  (**(code **)(param_1 + 0x28))();
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<androidNetworkMsgProcess, void
   (androidNetworkMsgProcess::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<androidNetworkMsgProcess, void
   (androidNetworkMsgProcess::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<androidNetworkMsgProcess,void(androidNetworkMsgProcess::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,androidNetworkMsgProcess,void(androidNetworkMsgProcess::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<UIMessageBox*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::Invoke
          (Delegate2<UIMessageBox*,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  UIMessageBox *pUVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar2 = RtInvokeVariant::Get<UIMessageBox*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pUVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<LawnApp, void (LawnApp::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<LawnApp, void (LawnApp::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::Delegate2<LawnApp,void(LawnApp::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,LawnApp,void(LawnApp::*)(UIMessageBox*,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<LawnApp, void (LawnApp::*)(int,
   int)>(Sexy::CBMemberTranslatorX<LawnApp, void (LawnApp::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<LawnApp,void(LawnApp::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) = CBMemberTranslator2<int,int,LawnApp,void(LawnApp::*)(int,int)>::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,int>::Invoke
          (Delegate2<int,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,iVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<Board, void (Board::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<Board, void (Board::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<Board,void(Board::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,Board,void(Board::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<Board, void (Board::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<Board, void (Board::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::Delegate2<Board,void(Board::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) = CBMemberTranslator2<bool,int,Board,void(Board::*)(bool,int)>::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,int>::Invoke
          (Delegate2<bool,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  iVar2 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,iVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::Invoke
          (Delegate2<Zombie*,DamageInfo_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Zombie *pZVar1;
  DamageInfo *pDVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = RtInvokeVariant::Get<Zombie*>(param_2);
  pDVar2 = RtInvokeVariant::Get<DamageInfo_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pZVar1,pDVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<StoreUI, void (StoreUI::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<StoreUI, void (StoreUI::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<StoreUI,void(StoreUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,StoreUI,void(StoreUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<StoreUI, void (StoreUI::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<StoreUI, void (StoreUI::*)(int, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::Delegate2<StoreUI,void(StoreUI::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,StoreUI,void(StoreUI::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<CoinStore, void (CoinStore::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<CoinStore, void (CoinStore::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<CoinStore,void(CoinStore::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,CoinStore,void(CoinStore::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<CoinStore, void (CoinStore::*)(int,
   std::string const&)>(Sexy::CBMemberTranslatorX<CoinStore, void (CoinStore::*)(int, std::string
   const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<CoinStore,void(CoinStore::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,CoinStore,void(CoinStore::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, std::string const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::Invoke
          (Delegate2<int,std::string_const&> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2
          )

{
  int iVar1;
  string *psVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,psVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::Invoke
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  set *psVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  psVar2 = RtInvokeVariant::Get<std::set<int,std::less<int>,std::allocator<int>>const&>
                     (param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,psVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<AccountRemoveMgr, void
   (AccountRemoveMgr::*)(int, std::string const&)>(Sexy::CBMemberTranslatorX<AccountRemoveMgr, void
   (AccountRemoveMgr::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<AccountRemoveMgr,void(AccountRemoveMgr::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,AccountRemoveMgr,void(AccountRemoveMgr::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Graphics*, HotUIWidget*>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<Sexy::Graphics*,HotUIWidget*>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06615da0;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<NewPlantUIMgr, void
   (NewPlantUIMgr::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<NewPlantUIMgr, void
   (NewPlantUIMgr::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<NewPlantUIMgr,void(NewPlantUIMgr::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,NewPlantUIMgr,void(NewPlantUIMgr::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<AdaptorSeedPacketEntry, void
   (AdaptorSeedPacketEntry::*)(bool, int)>(Sexy::CBMemberTranslatorX<AdaptorSeedPacketEntry, void
   (AdaptorSeedPacketEntry::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::
Delegate2<AdaptorSeedPacketEntry,void(AdaptorSeedPacketEntry::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,AdaptorSeedPacketEntry,void(AdaptorSeedPacketEntry::*)(bool,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Sexy::Graphics*, HotUIWidget*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Sexy::Graphics*,HotUIWidget*>::Invoke
          (Delegate2<Sexy::Graphics*,HotUIWidget*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Graphics *pGVar1;
  HotUIWidget *pHVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = RtInvokeVariant::Get<Sexy::Graphics*>(param_2);
  pHVar2 = RtInvokeVariant::Get<HotUIWidget*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pGVar1,pHVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<RunningPlayer*, Sexy::RtSerialCommand*>::Delegate2<void (*)(RunningPlayer*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(RunningPlayer*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<RunningPlayer*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(RunningPlayer*,Sexy::RtSerialCommand*)>
          (Delegate2<RunningPlayer*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0661d570;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<RunningPlayer*,Sexy::RtSerialCommand*,void(*)(RunningPlayer*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<RunningPlayer*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<RunningPlayer*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<RunningPlayer*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  RunningPlayer *pRVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = RtInvokeVariant::Get<RunningPlayer*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pRVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<UnchartedBoostModule, void
   (UnchartedBoostModule::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<UnchartedBoostModule, void (UnchartedBoostModule::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<UnchartedBoostModule,void(UnchartedBoostModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,UnchartedBoostModule,void(UnchartedBoostModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UnchartedSeedChooser, void
   (UnchartedSeedChooser::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UnchartedSeedChooser,
   void (UnchartedSeedChooser::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UnchartedSeedChooser,void(UnchartedSeedChooser::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UnchartedSeedChooser,void(UnchartedSeedChooser::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<IZombieChickenFarmer, void
   (IZombieChickenFarmer::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<IZombieChickenFarmer, void (IZombieChickenFarmer::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<IZombieChickenFarmer,void(IZombieChickenFarmer::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,IZombieChickenFarmer,void(IZombieChickenFarmer::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<IZombieZombieJalapeno, void
   (IZombieZombieJalapeno::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<IZombieZombieJalapeno, void
   (IZombieZombieJalapeno::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<IZombieZombieJalapeno,void(IZombieZombieJalapeno::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,IZombieZombieJalapeno,void(IZombieZombieJalapeno::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIActivityCollection, void (UIActivityCollection::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UIActivityCollection,
   void (UIActivityCollection::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIActivityCollection,void(UIActivityCollection::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIActivityCollection,void(UIActivityCollection::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<ActivityCollectionUIFutureGiftBox, void
   (ActivityCollectionUIFutureGiftBox::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<ActivityCollectionUIFutureGiftBox, void
   (ActivityCollectionUIFutureGiftBox::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<ActivityCollectionUIFutureGiftBox,void(ActivityCollectionUIFutureGiftBox::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,ActivityCollectionUIFutureGiftBox,void(ActivityCollectionUIFutureGiftBox::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityCollectionContainerBase, void
   (ActivityCollectionContainerBase::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<ActivityCollectionContainerBase, void
   (ActivityCollectionContainerBase::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityCollectionContainerBase,void(ActivityCollectionContainerBase::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityCollectionContainerBase,void(ActivityCollectionContainerBase::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityCollectionPlayerSurvey, void (ActivityCollectionPlayerSurvey::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<ActivityCollectionPlayerSurvey, void
   (ActivityCollectionPlayerSurvey::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityCollectionPlayerSurvey,void(ActivityCollectionPlayerSurvey::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityCollectionPlayerSurvey,void(ActivityCollectionPlayerSurvey::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityCollectionRichman, void (ActivityCollectionRichman::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<ActivityCollectionRichman, void
   (ActivityCollectionRichman::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityCollectionRichman,void(ActivityCollectionRichman::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityCollectionRichman,void(ActivityCollectionRichman::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityCollectionRechargeDailySign, void
   (ActivityCollectionRechargeDailySign::*)(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&)>(Sexy::CBMemberTranslatorX<ActivityCollectionRechargeDailySign, void
   (ActivityCollectionRechargeDailySign::*)(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityCollectionRechargeDailySign,void(ActivityCollectionRechargeDailySign::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityCollectionRechargeDailySign,void(ActivityCollectionRechargeDailySign::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityCollectionDiscountShop, void (ActivityCollectionDiscountShop::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<ActivityCollectionDiscountShop, void
   (ActivityCollectionDiscountShop::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityCollectionDiscountShop,void(ActivityCollectionDiscountShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityCollectionDiscountShop,void(ActivityCollectionDiscountShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<ActivityCollectionDiscountShop,
   void (ActivityCollectionDiscountShop::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<ActivityCollectionDiscountShop, void
   (ActivityCollectionDiscountShop::*)(bool, S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<ActivityCollectionDiscountShop,void(ActivityCollectionDiscountShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,ActivityCollectionDiscountShop,void(ActivityCollectionDiscountShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<ActivityCollectionPiggyBank, void
   (ActivityCollectionPiggyBank::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<ActivityCollectionPiggyBank, void
   (ActivityCollectionPiggyBank::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::
Delegate2<ActivityCollectionPiggyBank,void(ActivityCollectionPiggyBank::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,ActivityCollectionPiggyBank,void(ActivityCollectionPiggyBank::*)(bool,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityCollectionPiggyBank, void (ActivityCollectionPiggyBank::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<ActivityCollectionPiggyBank, void
   (ActivityCollectionPiggyBank::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityCollectionPiggyBank,void(ActivityCollectionPiggyBank::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityCollectionPiggyBank,void(ActivityCollectionPiggyBank::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityCollectionPartyAssist, void (ActivityCollectionPartyAssist::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<ActivityCollectionPartyAssist, void
   (ActivityCollectionPartyAssist::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityCollectionPartyAssist,void(ActivityCollectionPartyAssist::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityCollectionPartyAssist,void(ActivityCollectionPartyAssist::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityCollectionAutumnHarvest, void
   (ActivityCollectionAutumnHarvest::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<ActivityCollectionAutumnHarvest, void
   (ActivityCollectionAutumnHarvest::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityCollectionAutumnHarvest,void(ActivityCollectionAutumnHarvest::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityCollectionAutumnHarvest,void(ActivityCollectionAutumnHarvest::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::Invoke
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_ShopItemPurchaseInfo *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_ShopItemPurchaseInfo_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UINewPlayerCollection, void (UINewPlayerCollection::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UINewPlayerCollection,
   void (UINewPlayerCollection::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UINewPlayerCollection,void(UINewPlayerCollection::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UINewPlayerCollection,void(UINewPlayerCollection::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_NewPlayerButton, void (WorldMap_NewPlayerButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_NewPlayerButton, void
   (WorldMap_NewPlayerButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_NewPlayerButton,void(WorldMap_NewPlayerButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_NewPlayerButton,void(WorldMap_NewPlayerButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<NewPlayerDiscountShopItem, void
   (NewPlayerDiscountShopItem::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<NewPlayerDiscountShopItem, void
   (NewPlayerDiscountShopItem::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<NewPlayerDiscountShopItem,void(NewPlayerDiscountShopItem::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,NewPlayerDiscountShopItem,void(NewPlayerDiscountShopItem::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<NewPlayerSpecialGiftItem, void (NewPlayerSpecialGiftItem::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<NewPlayerSpecialGiftItem, void
   (NewPlayerSpecialGiftItem::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<NewPlayerSpecialGiftItem,void(NewPlayerSpecialGiftItem::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,NewPlayerSpecialGiftItem,void(NewPlayerSpecialGiftItem::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityCollectionNewPlayerSpecialGift, void
   (ActivityCollectionNewPlayerSpecialGift::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<ActivityCollectionNewPlayerSpecialGift,
   void (ActivityCollectionNewPlayerSpecialGift::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityCollectionNewPlayerSpecialGift,void(ActivityCollectionNewPlayerSpecialGift::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityCollectionNewPlayerSpecialGift,void(ActivityCollectionNewPlayerSpecialGift::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIPlantCultivateSelect, void
   (UIPlantCultivateSelect::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UIPlantCultivateSelect, void
   (UIPlantCultivateSelect::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIPlantCultivateSelect,void(UIPlantCultivateSelect::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIPlantCultivateSelect,void(UIPlantCultivateSelect::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIPlantCultivate, void
   (UIPlantCultivate::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UIPlantCultivate, void
   (UIPlantCultivate::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIPlantCultivate,void(UIPlantCultivate::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIPlantCultivate,void(UIPlantCultivate::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<PlantCultivateManager, void (PlantCultivateManager::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<PlantCultivateManager,
   void (PlantCultivateManager::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<PlantCultivateManager,void(PlantCultivateManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,PlantCultivateManager,void(PlantCultivateManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<GiftFoReturnSignWidget, void
   (GiftFoReturnSignWidget::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<GiftFoReturnSignWidget, void
   (GiftFoReturnSignWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<GiftFoReturnSignWidget,void(GiftFoReturnSignWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,GiftFoReturnSignWidget,void(GiftFoReturnSignWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIDragonTreasure, void (UIDragonTreasure::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UIDragonTreasure, void
   (UIDragonTreasure::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIDragonTreasure,void(UIDragonTreasure::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIDragonTreasure,void(UIDragonTreasure::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UITreasurePavilion, void
   (UITreasurePavilion::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UITreasurePavilion, void
   (UITreasurePavilion::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UITreasurePavilion,void(UITreasurePavilion::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UITreasurePavilion,void(UITreasurePavilion::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<NewPVPDataSubsystem, void
   (NewPVPDataSubsystem::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<NewPVPDataSubsystem, void
   (NewPVPDataSubsystem::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<NewPVPDataSubsystem,void(NewPVPDataSubsystem::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,NewPVPDataSubsystem,void(NewPVPDataSubsystem::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<NewPVPDataSubsystem, void
   (NewPVPDataSubsystem::*)(int, std::string const&)>(Sexy::CBMemberTranslatorX<NewPVPDataSubsystem,
   void (NewPVPDataSubsystem::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<NewPVPDataSubsystem,void(NewPVPDataSubsystem::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,NewPVPDataSubsystem,void(NewPVPDataSubsystem::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<AdaptorNewPVPMatchingScreen, void
   (AdaptorNewPVPMatchingScreen::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<AdaptorNewPVPMatchingScreen, void
   (AdaptorNewPVPMatchingScreen::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<NewPVPMatchingScreenState, StateAction>::Delegate2<AdaptorNewPVPMatchingScreen,
   void (AdaptorNewPVPMatchingScreen::*)(NewPVPMatchingScreenState,
   StateAction)>(Sexy::CBMemberTranslatorX<AdaptorNewPVPMatchingScreen, void
   (AdaptorNewPVPMatchingScreen::*)(NewPVPMatchingScreenState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<NewPVPMatchingScreenState,StateAction>::
Delegate2<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(NewPVPMatchingScreenState,StateAction)>
          (Delegate2<NewPVPMatchingScreenState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0664c360;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<NewPVPMatchingScreenState,StateAction,AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(NewPVPMatchingScreenState,StateAction)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, float>::Delegate2<NewPVPGameSubsystem, void (NewPVPGameSubsystem::*)(int,
   float)>(Sexy::CBMemberTranslatorX<NewPVPGameSubsystem, void (NewPVPGameSubsystem::*)(int, float)>
   const&) */

void __thiscall
Sexy::Delegate2<int,float>::Delegate2<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(int,float)>
          (Delegate2<int,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0664d4f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,float,NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(int,float)>::
       thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<NewPVPIntro, void (NewPVPIntro::*)(int,
   int)>(Sexy::CBMemberTranslatorX<NewPVPIntro, void (NewPVPIntro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<NewPVPIntro,void(NewPVPIntro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,NewPVPIntro,void(NewPVPIntro::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<NewPVPGameOutro, void (NewPVPGameOutro::*)(int,
   int)>(Sexy::CBMemberTranslatorX<NewPVPGameOutro, void (NewPVPGameOutro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<NewPVPGameOutro,void(NewPVPGameOutro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,NewPVPGameOutro,void(NewPVPGameOutro::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<AdaptorNewPVPLevelUpScreen, void
   (AdaptorNewPVPLevelUpScreen::*)(int, int)>(Sexy::CBMemberTranslatorX<AdaptorNewPVPLevelUpScreen,
   void (AdaptorNewPVPLevelUpScreen::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<AdaptorNewPVPLevelUpScreen,void(AdaptorNewPVPLevelUpScreen::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,AdaptorNewPVPLevelUpScreen,void(AdaptorNewPVPLevelUpScreen::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<AdaptorNewPVPTrainingScreen, void
   (AdaptorNewPVPTrainingScreen::*)(int,
   int)>(Sexy::CBMemberTranslatorX<AdaptorNewPVPTrainingScreen, void
   (AdaptorNewPVPTrainingScreen::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<AdaptorNewPVPTrainingScreen,void(AdaptorNewPVPTrainingScreen::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,AdaptorNewPVPTrainingScreen,void(AdaptorNewPVPTrainingScreen::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<AdaptorNewPVPMatchingScreen, void
   (AdaptorNewPVPMatchingScreen::*)(int,
   int)>(Sexy::CBMemberTranslatorX<AdaptorNewPVPMatchingScreen, void
   (AdaptorNewPVPMatchingScreen::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<NewPVPMgr, void (NewPVPMgr::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<NewPVPMgr, void (NewPVPMgr::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<NewPVPMgr,void(NewPVPMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,NewPVPMgr,void(NewPVPMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, float>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::Delegate2<int,float>::Invoke
          (Delegate2<int,float> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  RtInvokeVariant::Get<float>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<NewPVPMatchingScreenState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<NewPVPMatchingScreenState,StateAction>::Invoke
          (Delegate2<NewPVPMatchingScreenState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<NewPVPMatchingScreenState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, float>::Delegate2<NewPVPHealthBar, void (NewPVPHealthBar::*)(int,
   float)>(Sexy::CBMemberTranslatorX<NewPVPHealthBar, void (NewPVPHealthBar::*)(int, float)> const&)
    */

void __thiscall
Sexy::Delegate2<int,float>::Delegate2<NewPVPHealthBar,void(NewPVPHealthBar::*)(int,float)>
          (Delegate2<int,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0664d4f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,float,NewPVPHealthBar,void(NewPVPHealthBar::*)(int,float)>::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<UINewPVPReportButton, void (UINewPVPReportButton::*)(int,
   int)>(Sexy::CBMemberTranslatorX<UINewPVPReportButton, void (UINewPVPReportButton::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<UINewPVPReportButton,void(UINewPVPReportButton::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,UINewPVPReportButton,void(UINewPVPReportButton::*)(int,int)>::
       thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<NewPVPBattlePassItemWidget, void
   (NewPVPBattlePassItemWidget::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<NewPVPBattlePassItemWidget, void
   (NewPVPBattlePassItemWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<NewPVPBattlePassItemWidget,void(NewPVPBattlePassItemWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,NewPVPBattlePassItemWidget,void(NewPVPBattlePassItemWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<NewPVPBattlePassLotteryPanel, void
   (NewPVPBattlePassLotteryPanel::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<NewPVPBattlePassLotteryPanel, void
   (NewPVPBattlePassLotteryPanel::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<NewPVPBattlePassLotteryPanel,void(NewPVPBattlePassLotteryPanel::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,NewPVPBattlePassLotteryPanel,void(NewPVPBattlePassLotteryPanel::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&,
   int>::Delegate2<NewPVPBattlePassBundleWidget, void
   (NewPVPBattlePassBundleWidget::*)(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&, int)>(Sexy::CBMemberTranslatorX<NewPVPBattlePassBundleWidget, void
   (NewPVPBattlePassBundleWidget::*)(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&, int)> const&) */

void __thiscall
Sexy::Delegate2<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int>::
Delegate2<NewPVPBattlePassBundleWidget,void(NewPVPBattlePassBundleWidget::*)(std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int)>
          (Delegate2<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06656a60;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int,NewPVPBattlePassBundleWidget,void(NewPVPBattlePassBundleWidget::*)(std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&,
   int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int>::Invoke
          (Delegate2<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,int> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  vector *pvVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = RtInvokeVariant::Get<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&>
                     (param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pvVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<NewPVPShopButton, void
   (NewPVPShopButton::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<NewPVPShopButton, void
   (NewPVPShopButton::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<NewPVPShopButton,void(NewPVPShopButton::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,NewPVPShopButton,void(NewPVPShopButton::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UINewPVPShop, void
   (UINewPVPShop::*)(bool, S2C_ShopItemPurchaseInfo const*)>(Sexy::CBMemberTranslatorX<UINewPVPShop,
   void (UINewPVPShop::*)(bool, S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UINewPVPShop,void(UINewPVPShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UINewPVPShop,void(UINewPVPShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo>
   >&>::Delegate2<UINewPVPShop, void (UINewPVPShop::*)(int, std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> >&)>(Sexy::CBMemberTranslatorX<UINewPVPShop, void
   (UINewPVPShop::*)(int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&>::
Delegate2<UINewPVPShop,void(UINewPVPShop::*)(int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&)>
          (Delegate2<int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06658f30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&,UINewPVPShop,void(UINewPVPShop::*)(int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo>
   >&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&>::Invoke
          (Delegate2<int,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  vector *pvVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pvVar2 = RtInvokeVariant::Get<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>&>
                     (param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pvVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, New_S2C_BuyCardGameReward const*>::Delegate2<CardGameRewardMgr, void
   (CardGameRewardMgr::*)(bool, New_S2C_BuyCardGameReward
   const*)>(Sexy::CBMemberTranslatorX<CardGameRewardMgr, void (CardGameRewardMgr::*)(bool,
   New_S2C_BuyCardGameReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,New_S2C_BuyCardGameReward_const*>::
Delegate2<CardGameRewardMgr,void(CardGameRewardMgr::*)(bool,New_S2C_BuyCardGameReward_const*)>
          (Delegate2<bool,New_S2C_BuyCardGameReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06659f80;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,New_S2C_BuyCardGameReward_const*,CardGameRewardMgr,void(CardGameRewardMgr::*)(bool,New_S2C_BuyCardGameReward_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, New_S2C_BuyCardGameReward const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,New_S2C_BuyCardGameReward_const*>::Invoke
          (Delegate2<bool,New_S2C_BuyCardGameReward_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  New_S2C_BuyCardGameReward *pNVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pNVar2 = RtInvokeVariant::Get<New_S2C_BuyCardGameReward_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pNVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<CardGameResetButton, void
   (CardGameResetButton::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<CardGameResetButton, void
   (CardGameResetButton::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<CardGameResetButton,void(CardGameResetButton::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,CardGameResetButton,void(CardGameResetButton::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<CardGameNetworkMgr, void (CardGameNetworkMgr::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<CardGameNetworkMgr, void
   (CardGameNetworkMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<CardGameNetworkMgr,void(CardGameNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,CardGameNetworkMgr,void(CardGameNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<CustomNetworkPreviewData const&, int
   const&>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<CustomNetworkPreviewData_const&,int_const&>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_0665f010;
  return;
}


/* Sexy::Delegate2<CustomNetworkPreviewData const&, int const&>::Delegate2<UICustomLevelChooseLevel,
   void (UICustomLevelChooseLevel::*)(CustomNetworkPreviewData const&,
   int)>(Sexy::CBMemberTranslatorX<UICustomLevelChooseLevel, void
   (UICustomLevelChooseLevel::*)(CustomNetworkPreviewData const&, int)> const&) */

void __thiscall
Sexy::Delegate2<CustomNetworkPreviewData_const&,int_const&>::
Delegate2<UICustomLevelChooseLevel,void(UICustomLevelChooseLevel::*)(CustomNetworkPreviewData_const&,int)>
          (Delegate2<CustomNetworkPreviewData_const&,int_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0665f010;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<CustomNetworkPreviewData_const&,int_const&,UICustomLevelChooseLevel,void(UICustomLevelChooseLevel::*)(CustomNetworkPreviewData_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UICustomLevelLevelDetail, void
   (UICustomLevelLevelDetail::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UICustomLevelLevelDetail, void
   (UICustomLevelLevelDetail::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<CustomNetworkPreviewData const&, int const&>::Delegate2<UICustomLevelCreateLevel,
   void (UICustomLevelCreateLevel::*)(CustomNetworkPreviewData const&,
   int)>(Sexy::CBMemberTranslatorX<UICustomLevelCreateLevel, void
   (UICustomLevelCreateLevel::*)(CustomNetworkPreviewData const&, int)> const&) */

void __thiscall
Sexy::Delegate2<CustomNetworkPreviewData_const&,int_const&>::
Delegate2<UICustomLevelCreateLevel,void(UICustomLevelCreateLevel::*)(CustomNetworkPreviewData_const&,int)>
          (Delegate2<CustomNetworkPreviewData_const&,int_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0665f010;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<CustomNetworkPreviewData_const&,int_const&,UICustomLevelCreateLevel,void(UICustomLevelCreateLevel::*)(CustomNetworkPreviewData_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<CustomLevelView, void (CustomLevelView::*)(int,
   int)>(Sexy::CBMemberTranslatorX<CustomLevelView, void (CustomLevelView::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<CustomLevelView,void(CustomLevelView::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,CustomLevelView,void(CustomLevelView::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<CustomLevelView, void
   (CustomLevelView::*)(int, std::string const&)>(Sexy::CBMemberTranslatorX<CustomLevelView, void
   (CustomLevelView::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<CustomLevelView,void(CustomLevelView::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,CustomLevelView,void(CustomLevelView::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<UICustomLevelMainMenu, void (UICustomLevelMainMenu::*)(int,
   int)>(Sexy::CBMemberTranslatorX<UICustomLevelMainMenu, void (UICustomLevelMainMenu::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)(int,int)>::
       thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UICustomLevelMainMenu, void (UICustomLevelMainMenu::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UICustomLevelMainMenu,
   void (UICustomLevelMainMenu::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UICustomLevelMainMenu,void(UICustomLevelMainMenu::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<UICustomLevelChooseLevel, void
   (UICustomLevelChooseLevel::*)(int, int)>(Sexy::CBMemberTranslatorX<UICustomLevelChooseLevel, void
   (UICustomLevelChooseLevel::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<UICustomLevelChooseLevel,void(UICustomLevelChooseLevel::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,UICustomLevelChooseLevel,void(UICustomLevelChooseLevel::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<UICustomLevelLevelDetail, void
   (UICustomLevelLevelDetail::*)(int, int)>(Sexy::CBMemberTranslatorX<UICustomLevelLevelDetail, void
   (UICustomLevelLevelDetail::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,UICustomLevelLevelDetail,void(UICustomLevelLevelDetail::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<UICustomLevelDetailModifyName, void
   (UICustomLevelDetailModifyName::*)(int,
   int)>(Sexy::CBMemberTranslatorX<UICustomLevelDetailModifyName, void
   (UICustomLevelDetailModifyName::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<UICustomLevelDetailModifyName,void(UICustomLevelDetailModifyName::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,UICustomLevelDetailModifyName,void(UICustomLevelDetailModifyName::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<UICustomLevelCreateLevel, void
   (UICustomLevelCreateLevel::*)(int, int)>(Sexy::CBMemberTranslatorX<UICustomLevelCreateLevel, void
   (UICustomLevelCreateLevel::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<UICustomLevelCreateLevel,void(UICustomLevelCreateLevel::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,UICustomLevelCreateLevel,void(UICustomLevelCreateLevel::*)(int,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<CustomNetworkPreviewData const&, int const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<CustomNetworkPreviewData_const&,int_const&>::Invoke
          (Delegate2<CustomNetworkPreviewData_const&,int_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  CustomNetworkPreviewData *pCVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = RtInvokeVariant::Get<CustomNetworkPreviewData_const&>(param_2);
  piVar2 = RtInvokeVariant::Get<int_const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pCVar1,piVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<PVZ1DashboardLoadingSubState, StateAction>::Delegate2<PVZ1DashboardLoadingState,
   void (PVZ1DashboardLoadingState::*)(PVZ1DashboardLoadingSubState,
   StateAction)>(Sexy::CBMemberTranslatorX<PVZ1DashboardLoadingState, void
   (PVZ1DashboardLoadingState::*)(PVZ1DashboardLoadingSubState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<PVZ1DashboardLoadingSubState,StateAction>::
Delegate2<PVZ1DashboardLoadingState,void(PVZ1DashboardLoadingState::*)(PVZ1DashboardLoadingSubState,StateAction)>
          (Delegate2<PVZ1DashboardLoadingSubState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066690f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<PVZ1DashboardLoadingSubState,StateAction,PVZ1DashboardLoadingState,void(PVZ1DashboardLoadingState::*)(PVZ1DashboardLoadingSubState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PVZ1DashboardLoadingSubState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<PVZ1DashboardLoadingSubState,StateAction>::Invoke
          (Delegate2<PVZ1DashboardLoadingSubState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<PVZ1DashboardLoadingSubState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Projectile*, BoardEntity*>::Delegate2<BurdockBatter_SubSystem, void
   (BurdockBatter_SubSystem::*)(Projectile*,
   BoardEntity*)>(Sexy::CBMemberTranslatorX<BurdockBatter_SubSystem, void
   (BurdockBatter_SubSystem::*)(Projectile*, BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate2<Projectile*,BoardEntity*>::
Delegate2<BurdockBatter_SubSystem,void(BurdockBatter_SubSystem::*)(Projectile*,BoardEntity*)>
          (Delegate2<Projectile*,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0666e3f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Projectile*,BoardEntity*,BurdockBatter_SubSystem,void(BurdockBatter_SubSystem::*)(Projectile*,BoardEntity*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Projectile*, BoardEntity*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<Projectile*,BoardEntity*>::Invoke
          (Delegate2<Projectile*,BoardEntity*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Projectile *pPVar1;
  BoardEntity *pBVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<Projectile*>(param_2);
  pBVar2 = RtInvokeVariant::Get<BoardEntity*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pBVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<DynamicSizeData*, Sexy::RtSerialCommand*>::Delegate2<void (*)(DynamicSizeData*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(DynamicSizeData*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<DynamicSizeData*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(DynamicSizeData*,Sexy::RtSerialCommand*)>
          (Delegate2<DynamicSizeData*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06673c10;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<DynamicSizeData*,Sexy::RtSerialCommand*,void(*)(DynamicSizeData*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<DynamicSizeData*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<DynamicSizeData*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<DynamicSizeData*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  DynamicSizeData *pDVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = RtInvokeVariant::Get<DynamicSizeData*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pDVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<RiftTournamentResultsScreenState,
   StateAction>::Delegate2<AdaptorRiftTourneyResultsScreen, void
   (AdaptorRiftTourneyResultsScreen::*)(RiftTournamentResultsScreenState,
   StateAction)>(Sexy::CBMemberTranslatorX<AdaptorRiftTourneyResultsScreen, void
   (AdaptorRiftTourneyResultsScreen::*)(RiftTournamentResultsScreenState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<RiftTournamentResultsScreenState,StateAction>::
Delegate2<AdaptorRiftTourneyResultsScreen,void(AdaptorRiftTourneyResultsScreen::*)(RiftTournamentResultsScreenState,StateAction)>
          (Delegate2<RiftTournamentResultsScreenState,StateAction> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0667a410;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<RiftTournamentResultsScreenState,StateAction,AdaptorRiftTourneyResultsScreen,void(AdaptorRiftTourneyResultsScreen::*)(RiftTournamentResultsScreenState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<RiftTournamentResultsScreenState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<RiftTournamentResultsScreenState,StateAction>::Invoke
          (Delegate2<RiftTournamentResultsScreenState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<RiftTournamentResultsScreenState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, int>::Delegate2<WorldMap_RiftButton, void (WorldMap_RiftButton::*)(int,
   int)>(Sexy::CBMemberTranslatorX<WorldMap_RiftButton, void (WorldMap_RiftButton::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<WorldMap_RiftButton,void(WorldMap_RiftButton::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,WorldMap_RiftButton,void(WorldMap_RiftButton::*)(int,int)>::thunk
  ;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<WorldMap_RiftRankButton, void
   (WorldMap_RiftRankButton::*)(int, int)>(Sexy::CBMemberTranslatorX<WorldMap_RiftRankButton, void
   (WorldMap_RiftRankButton::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<WorldMap_RiftRankButton,void(WorldMap_RiftRankButton::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,WorldMap_RiftRankButton,void(WorldMap_RiftRankButton::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<RiftOutro, void (RiftOutro::*)(int,
   int)>(Sexy::CBMemberTranslatorX<RiftOutro, void (RiftOutro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<RiftOutro,void(RiftOutro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,RiftOutro,void(RiftOutro::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<GridItemPlacementModule, void
   (GridItemPlacementModule::*)(int, int) const>(Sexy::CBMemberTranslatorX<GridItemPlacementModule,
   void (GridItemPlacementModule::*)(int, int) const> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<GridItemPlacementModule,void(GridItemPlacementModule::*)(int,int)const>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,GridItemPlacementModule,void(GridItemPlacementModule::*)(int,int)const>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<GridItemPlacementChallengeModule, void
   (GridItemPlacementChallengeModule::*)(int, int)
   const>(Sexy::CBMemberTranslatorX<GridItemPlacementChallengeModule, void
   (GridItemPlacementChallengeModule::*)(int, int) const> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<GridItemPlacementChallengeModule,void(GridItemPlacementChallengeModule::*)(int,int)const>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,GridItemPlacementChallengeModule,void(GridItemPlacementChallengeModule::*)(int,int)const>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<LevelMutatorRiftTimedSunModule, void
   (LevelMutatorRiftTimedSunModule::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<LevelMutatorRiftTimedSunModule, void
   (LevelMutatorRiftTimedSunModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<LevelMutatorRiftTimedSunModule,void(LevelMutatorRiftTimedSunModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,LevelMutatorRiftTimedSunModule,void(LevelMutatorRiftTimedSunModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<RiftDashboardLoadingSubState, StateAction>::Delegate2<RiftDashboardLoadingState,
   void (RiftDashboardLoadingState::*)(RiftDashboardLoadingSubState,
   StateAction)>(Sexy::CBMemberTranslatorX<RiftDashboardLoadingState, void
   (RiftDashboardLoadingState::*)(RiftDashboardLoadingSubState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<RiftDashboardLoadingSubState,StateAction>::
Delegate2<RiftDashboardLoadingState,void(RiftDashboardLoadingState::*)(RiftDashboardLoadingSubState,StateAction)>
          (Delegate2<RiftDashboardLoadingSubState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06680a00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<RiftDashboardLoadingSubState,StateAction,RiftDashboardLoadingState,void(RiftDashboardLoadingState::*)(RiftDashboardLoadingSubState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<RiftDashboardLoadingSubState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<RiftDashboardLoadingSubState,StateAction>::Invoke
          (Delegate2<RiftDashboardLoadingSubState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<RiftDashboardLoadingSubState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, int>::Delegate2<AdaptorRiftLevelSetup, void (AdaptorRiftLevelSetup::*)(int,
   int)>(Sexy::CBMemberTranslatorX<AdaptorRiftLevelSetup, void (AdaptorRiftLevelSetup::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<AdaptorRiftLevelSetup,void(AdaptorRiftLevelSetup::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,AdaptorRiftLevelSetup,void(AdaptorRiftLevelSetup::*)(int,int)>::
       thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<ZombossRiftBattleModule, void
   (ZombossRiftBattleModule::*)(int, int)>(Sexy::CBMemberTranslatorX<ZombossRiftBattleModule, void
   (ZombossRiftBattleModule::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,ZombossRiftBattleModule,void(ZombossRiftBattleModule::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<SecurityGourdState, StateAction>::Delegate2<SecurityGourdModule, void
   (SecurityGourdModule::*)(SecurityGourdState,
   StateAction)>(Sexy::CBMemberTranslatorX<SecurityGourdModule, void
   (SecurityGourdModule::*)(SecurityGourdState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<SecurityGourdState,StateAction>::
Delegate2<SecurityGourdModule,void(SecurityGourdModule::*)(SecurityGourdState,StateAction)>
          (Delegate2<SecurityGourdState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066861a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<SecurityGourdState,StateAction,SecurityGourdModule,void(SecurityGourdModule::*)(SecurityGourdState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<SecurityGourdState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<SecurityGourdState,StateAction>::Invoke
          (Delegate2<SecurityGourdState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<SecurityGourdState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<RiftNetworkMgr, void (RiftNetworkMgr::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<RiftNetworkMgr, void
   (RiftNetworkMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<RiftNetworkMgr,void(RiftNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,RiftNetworkMgr,void(RiftNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<RiftThemeExploder, void
   (RiftThemeExploder::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<RiftThemeExploder,
   void (RiftThemeExploder::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<RiftThemeExploder,void(RiftThemeExploder::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,RiftThemeExploder,void(RiftThemeExploder::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<RiftThemeGravestone, void
   (RiftThemeGravestone::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<RiftThemeGravestone, void (RiftThemeGravestone::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<RiftThemeGravestone,void(RiftThemeGravestone::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,RiftThemeGravestone,void(RiftThemeGravestone::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<RiftThemePiggyBank, void
   (RiftThemePiggyBank::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<RiftThemePiggyBank, void (RiftThemePiggyBank::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<RiftThemePiggyBank,void(RiftThemePiggyBank::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,RiftThemePiggyBank,void(RiftThemePiggyBank::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const&>::Delegate2<RiftThemePeaRain, void
   (RiftThemePeaRain::*)(Zombie*, DamageInfo const&)>(Sexy::CBMemberTranslatorX<RiftThemePeaRain,
   void (RiftThemePeaRain::*)(Zombie*, DamageInfo const&)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const&>::
Delegate2<RiftThemePeaRain,void(RiftThemePeaRain::*)(Zombie*,DamageInfo_const&)>
          (Delegate2<Zombie*,DamageInfo_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689850;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const&,RiftThemePeaRain,void(RiftThemePeaRain::*)(Zombie*,DamageInfo_const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Zombie*, DamageInfo const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const&>::Invoke
          (Delegate2<Zombie*,DamageInfo_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Zombie *pZVar1;
  DamageInfo *pDVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = RtInvokeVariant::Get<Zombie*>(param_2);
  pDVar2 = RtInvokeVariant::Get<DamageInfo_const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pZVar1,pDVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<RiftValidateMgr, void
   (RiftValidateMgr::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<RiftValidateMgr, void
   (RiftValidateMgr::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<RiftValidateMgr,void(RiftValidateMgr::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,RiftValidateMgr,void(RiftValidateMgr::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const&>::Delegate2<RiftValidateMgr, void
   (RiftValidateMgr::*)(Zombie*, DamageInfo const&)>(Sexy::CBMemberTranslatorX<RiftValidateMgr, void
   (RiftValidateMgr::*)(Zombie*, DamageInfo const&)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const&>::
Delegate2<RiftValidateMgr,void(RiftValidateMgr::*)(Zombie*,DamageInfo_const&)>
          (Delegate2<Zombie*,DamageInfo_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689850;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const&,RiftValidateMgr,void(RiftValidateMgr::*)(Zombie*,DamageInfo_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<Artifact, void (Artifact::*)(int,
   int)>(Sexy::CBMemberTranslatorX<Artifact, void (Artifact::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<Artifact,void(Artifact::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) = CBMemberTranslator2<int,int,Artifact,void(Artifact::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<ArtifactLightning, void
   (ArtifactLightning::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<ArtifactLightning,
   void (ArtifactLightning::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<ArtifactLightning,void(ArtifactLightning::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,ArtifactLightning,void(ArtifactLightning::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<ArtifactMeteor, void (ArtifactMeteor::*)(int,
   int)>(Sexy::CBMemberTranslatorX<ArtifactMeteor, void (ArtifactMeteor::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<ArtifactMeteor,void(ArtifactMeteor::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,ArtifactMeteor,void(ArtifactMeteor::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<GridItemAcid, void (GridItemAcid::*)(int,
   int)>(Sexy::CBMemberTranslatorX<GridItemAcid, void (GridItemAcid::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<GridItemAcid,void(GridItemAcid::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,GridItemAcid,void(GridItemAcid::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<ArtifactAcid, void (ArtifactAcid::*)(int,
   int)>(Sexy::CBMemberTranslatorX<ArtifactAcid, void (ArtifactAcid::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<ArtifactAcid,void(ArtifactAcid::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,ArtifactAcid,void(ArtifactAcid::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<ArtifactMidasTouch, void
   (ArtifactMidasTouch::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<ArtifactMidasTouch, void (ArtifactMidasTouch::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<ArtifactMidasTouch,void(ArtifactMidasTouch::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,ArtifactMidasTouch,void(ArtifactMidasTouch::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<ArtifactSnowdriftSubSystem, void
   (ArtifactSnowdriftSubSystem::*)(Zombie*,
   int)>(Sexy::CBMemberTranslatorX<ArtifactSnowdriftSubSystem, void
   (ArtifactSnowdriftSubSystem::*)(Zombie*, int)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,int>::
Delegate2<ArtifactSnowdriftSubSystem,void(ArtifactSnowdriftSubSystem::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,ArtifactSnowdriftSubSystem,void(ArtifactSnowdriftSubSystem::*)(Zombie*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*>::Delegate2<ArtifactGuitar, void (ArtifactGuitar::*)(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<ArtifactGuitar, void (ArtifactGuitar::*)(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>::
Delegate2<ArtifactGuitar,void(ArtifactGuitar::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695de0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ArtifactGuitar,void(ArtifactGuitar::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<BoardEntity*, int>::Delegate2<ArtifactSwarm, void
   (ArtifactSwarm::*)(BoardEntity*, int)>(Sexy::CBMemberTranslatorX<ArtifactSwarm, void
   (ArtifactSwarm::*)(BoardEntity*, int)> const&) */

void __thiscall
Sexy::Delegate2<BoardEntity*,int>::Delegate2<ArtifactSwarm,void(ArtifactSwarm::*)(BoardEntity*,int)>
          (Delegate2<BoardEntity*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695e00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<BoardEntity*,int,ArtifactSwarm,void(ArtifactSwarm::*)(BoardEntity*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<ArtifactGravity, void (ArtifactGravity::*)(int,
   int)>(Sexy::CBMemberTranslatorX<ArtifactGravity, void (ArtifactGravity::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<ArtifactGravity,void(ArtifactGravity::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,ArtifactGravity,void(ArtifactGravity::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<ArtifactHydraulic, void (ArtifactHydraulic::*)(int,
   int)>(Sexy::CBMemberTranslatorX<ArtifactHydraulic, void (ArtifactHydraulic::*)(int, int)> const&)
    */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<ArtifactHydraulic,void(ArtifactHydraulic::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,ArtifactHydraulic,void(ArtifactHydraulic::*)(int,int)>::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<BoardEntity*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<BoardEntity*,int>::Invoke
          (Delegate2<BoardEntity*,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  BoardEntity *pBVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = RtInvokeVariant::Get<BoardEntity*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pBVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Sexy::Point const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>::
Invoke(Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
       *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  Point *pPVar1;
  vector *pvVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<Sexy::Point_const&>(param_2);
  pvVar2 = RtInvokeVariant::Get<std::vector<PlantingReason,std::allocator<PlantingReason>>*>
                     (param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pvVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Zombie*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::Delegate2<Zombie*,int>::Invoke
          (Delegate2<Zombie*,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  Zombie *pZVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = RtInvokeVariant::Get<Zombie*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pZVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, int>::Delegate2<ArtifactMgr, void (ArtifactMgr::*)(int,
   int)>(Sexy::CBMemberTranslatorX<ArtifactMgr, void (ArtifactMgr::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<ArtifactMgr,void(ArtifactMgr::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,ArtifactMgr,void(ArtifactMgr::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<ArtifactCultivationWidget, void
   (ArtifactCultivationWidget::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<ArtifactCultivationWidget, void
   (ArtifactCultivationWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<ArtifactCultivationWidget,void(ArtifactCultivationWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,ArtifactCultivationWidget,void(ArtifactCultivationWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<ArtifactBlessWidget, void
   (ArtifactBlessWidget::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<ArtifactBlessWidget, void
   (ArtifactBlessWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<ArtifactBlessWidget,void(ArtifactBlessWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,ArtifactBlessWidget,void(ArtifactBlessWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<ArtifactCultivationWidget, void
   (ArtifactCultivationWidget::*)(bool, int)>(Sexy::CBMemberTranslatorX<ArtifactCultivationWidget,
   void (ArtifactCultivationWidget::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::
Delegate2<ArtifactCultivationWidget,void(ArtifactCultivationWidget::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,ArtifactCultivationWidget,void(ArtifactCultivationWidget::*)(bool,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<ArtifactCultivationItem, void
   (ArtifactCultivationItem::*)(bool, int)>(Sexy::CBMemberTranslatorX<ArtifactCultivationItem, void
   (ArtifactCultivationItem::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::
Delegate2<ArtifactCultivationItem,void(ArtifactCultivationItem::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,ArtifactCultivationItem,void(ArtifactCultivationItem::*)(bool,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Projectile*, int>::Delegate2(Sexy::Delegate2<Projectile*, int> const&) */

void __thiscall
Sexy::Delegate2<Projectile*,int>::Delegate2(Delegate2<Projectile*,int> *this,Delegate2 *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)this,(DelegateBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_066996f0;
  return;
}


/* Sexy::Delegate2<Projectile*, int>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<Projectile*,int>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_066996f0;
  return;
}


/* Sexy::Delegate2<Projectile*, int>::Delegate2<ArtifactGashaponSubSystem, void
   (ArtifactGashaponSubSystem::*)(Projectile*,
   int)>(Sexy::CBMemberTranslatorX<ArtifactGashaponSubSystem, void
   (ArtifactGashaponSubSystem::*)(Projectile*, int)> const&) */

void __thiscall
Sexy::Delegate2<Projectile*,int>::
Delegate2<ArtifactGashaponSubSystem,void(ArtifactGashaponSubSystem::*)(Projectile*,int)>
          (Delegate2<Projectile*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066996f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Projectile*,int,ArtifactGashaponSubSystem,void(ArtifactGashaponSubSystem::*)(Projectile*,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Projectile*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<Projectile*,int>::Invoke
          (Delegate2<Projectile*,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  Projectile *pPVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = RtInvokeVariant::Get<Projectile*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const&>::Delegate2<ArtifactUFOSubSystem, void
   (ArtifactUFOSubSystem::*)(Zombie*, DamageInfo
   const&)>(Sexy::CBMemberTranslatorX<ArtifactUFOSubSystem, void (ArtifactUFOSubSystem::*)(Zombie*,
   DamageInfo const&)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const&>::
Delegate2<ArtifactUFOSubSystem,void(ArtifactUFOSubSystem::*)(Zombie*,DamageInfo_const&)>
          (Delegate2<Zombie*,DamageInfo_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689850;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const&,ArtifactUFOSubSystem,void(ArtifactUFOSubSystem::*)(Zombie*,DamageInfo_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PlantGeneEnhancementView, void
   (PlantGeneEnhancementView::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<PlantGeneEnhancementView, void
   (PlantGeneEnhancementView::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PlantGeneEnhancementView,void(PlantGeneEnhancementView::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PlantGeneEnhancementView,void(PlantGeneEnhancementView::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIPlantGeneSelectDrawMode, void
   (UIPlantGeneSelectDrawMode::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UIPlantGeneSelectDrawMode, void
   (UIPlantGeneSelectDrawMode::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIPlantGeneSelectDrawMode,void(UIPlantGeneSelectDrawMode::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIPlantGeneSelectDrawMode,void(UIPlantGeneSelectDrawMode::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIPlantGeneLevelUpView, void
   (UIPlantGeneLevelUpView::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UIPlantGeneLevelUpView, void
   (UIPlantGeneLevelUpView::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIPlantGeneLevelUpView,void(UIPlantGeneLevelUpView::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIPlantGeneLevelUpView,void(UIPlantGeneLevelUpView::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PlantGeneSequenceShopItem, void
   (PlantGeneSequenceShopItem::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<PlantGeneSequenceShopItem, void
   (PlantGeneSequenceShopItem::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PlantGeneSequenceShopItem,void(PlantGeneSequenceShopItem::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PlantGeneSequenceShopItem,void(PlantGeneSequenceShopItem::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<PlantGeneItem, void (PlantGeneItem::*)(int,
   int)>(Sexy::CBMemberTranslatorX<PlantGeneItem, void (PlantGeneItem::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<PlantGeneItem,void(PlantGeneItem::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,PlantGeneItem,void(PlantGeneItem::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UIPlantGeneSequenceShop, void
   (UIPlantGeneSequenceShop::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<UIPlantGeneSequenceShop, void
   (UIPlantGeneSequenceShop::*)(bool, S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UIPlantGeneSequenceShop,void(UIPlantGeneSequenceShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UIPlantGeneSequenceShop,void(UIPlantGeneSequenceShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UINewPlantView_LevelUp, void
   (UINewPlantView_LevelUp::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UINewPlantView_LevelUp, void
   (UINewPlantView_LevelUp::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UINewPlantView_LevelUp,void(UINewPlantView_LevelUp::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UINewPlantView_LevelUp,void(UINewPlantView_LevelUp::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UINewPlantView_AccessoryPackage, void
   (UINewPlantView_AccessoryPackage::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UINewPlantView_AccessoryPackage, void
   (UINewPlantView_AccessoryPackage::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UINewPlantView_AccessoryPackage,void(UINewPlantView_AccessoryPackage::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<UINewPlantView_AvatarPackage, void
   (UINewPlantView_AvatarPackage::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<UINewPlantView_AvatarPackage, void
   (UINewPlantView_AvatarPackage::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::
Delegate2<UINewPlantView_AvatarPackage,void(UINewPlantView_AvatarPackage::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,UINewPlantView_AvatarPackage,void(UINewPlantView_AvatarPackage::*)(bool,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UnchartedModeNetworkMgr, void
   (UnchartedModeNetworkMgr::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UnchartedModeNetworkMgr, void
   (UnchartedModeNetworkMgr::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UnchartedModeNetworkMgr,void(UnchartedModeNetworkMgr::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UnchartedModeNetworkMgr,void(UnchartedModeNetworkMgr::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UnchartedModeNetworkMgr, void (UnchartedModeNetworkMgr::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UnchartedModeNetworkMgr,
   void (UnchartedModeNetworkMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UnchartedModeNetworkMgr,void(UnchartedModeNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UnchartedModeNetworkMgr,void(UnchartedModeNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<LevelScoringSubsystem, void
   (LevelScoringSubsystem::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<LevelScoringSubsystem, void
   (LevelScoringSubsystem::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, long>::Delegate2<LevelScoringSubsystem, void
   (LevelScoringSubsystem::*)(Zombie*, long)>(Sexy::CBMemberTranslatorX<LevelScoringSubsystem, void
   (LevelScoringSubsystem::*)(Zombie*, long)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,long>::
Delegate2<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*,long)>
          (Delegate2<Zombie*,long> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066a7de0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,long,LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*,long)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, DamageInfo&>::Delegate2<LevelScoringSubsystem, void
   (LevelScoringSubsystem::*)(Plant*, DamageInfo&)>(Sexy::CBMemberTranslatorX<LevelScoringSubsystem,
   void (LevelScoringSubsystem::*)(Plant*, DamageInfo&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,DamageInfo&>::
Delegate2<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Plant*,DamageInfo&)>
          (Delegate2<Plant*,DamageInfo&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066a7e00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,DamageInfo&,LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Plant*,DamageInfo&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<LevelScoringSubsystem, void
   (LevelScoringSubsystem::*)(Zombie*, int)>(Sexy::CBMemberTranslatorX<LevelScoringSubsystem, void
   (LevelScoringSubsystem::*)(Zombie*, int)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,int>::
Delegate2<LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,LevelScoringSubsystem,void(LevelScoringSubsystem::*)(Zombie*,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Plant*, DamageInfo&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<Plant*,DamageInfo&>::Invoke
          (Delegate2<Plant*,DamageInfo&> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  Plant *pPVar1;
  DamageInfo *pDVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<Plant*>(param_2);
  pDVar2 = RtInvokeVariant::Get<DamageInfo&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pDVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Zombie*, long>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<Zombie*,long>::Invoke
          (Delegate2<Zombie*,long> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  Zombie *pZVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = RtInvokeVariant::Get<Zombie*>(param_2);
  lVar2 = RtInvokeVariant::Get<long>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pZVar1,lVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<PVZGameStateLoadingState, StateAction>::Delegate2<PVZHotUIGameState, void
   (PVZHotUIGameState::*)(PVZGameStateLoadingState,
   StateAction)>(Sexy::CBMemberTranslatorX<PVZHotUIGameState, void
   (PVZHotUIGameState::*)(PVZGameStateLoadingState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<PVZGameStateLoadingState,StateAction>::
Delegate2<PVZHotUIGameState,void(PVZHotUIGameState::*)(PVZGameStateLoadingState,StateAction)>
          (Delegate2<PVZGameStateLoadingState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066a8520;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<PVZGameStateLoadingState,StateAction,PVZHotUIGameState,void(PVZHotUIGameState::*)(PVZGameStateLoadingState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PVZGameStateLoadingState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<PVZGameStateLoadingState,StateAction>::Invoke
          (Delegate2<PVZGameStateLoadingState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<PVZGameStateLoadingState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<MatchLoadingScreenState, StateAction>::Delegate2<AdaptorJoustMatchLoadingScreen,
   void (AdaptorJoustMatchLoadingScreen::*)(MatchLoadingScreenState,
   StateAction)>(Sexy::CBMemberTranslatorX<AdaptorJoustMatchLoadingScreen, void
   (AdaptorJoustMatchLoadingScreen::*)(MatchLoadingScreenState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<MatchLoadingScreenState,StateAction>::
Delegate2<AdaptorJoustMatchLoadingScreen,void(AdaptorJoustMatchLoadingScreen::*)(MatchLoadingScreenState,StateAction)>
          (Delegate2<MatchLoadingScreenState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066aac40;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<MatchLoadingScreenState,StateAction,AdaptorJoustMatchLoadingScreen,void(AdaptorJoustMatchLoadingScreen::*)(MatchLoadingScreenState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<MatchLoadingScreenState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<MatchLoadingScreenState,StateAction>::Invoke
          (Delegate2<MatchLoadingScreenState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<MatchLoadingScreenState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<MatchmakingScreenState, StateAction>::Delegate2<AdaptorJoustMatchmakingScreen,
   void (AdaptorJoustMatchmakingScreen::*)(MatchmakingScreenState,
   StateAction)>(Sexy::CBMemberTranslatorX<AdaptorJoustMatchmakingScreen, void
   (AdaptorJoustMatchmakingScreen::*)(MatchmakingScreenState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<MatchmakingScreenState,StateAction>::
Delegate2<AdaptorJoustMatchmakingScreen,void(AdaptorJoustMatchmakingScreen::*)(MatchmakingScreenState,StateAction)>
          (Delegate2<MatchmakingScreenState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066ab030;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<MatchmakingScreenState,StateAction,AdaptorJoustMatchmakingScreen,void(AdaptorJoustMatchmakingScreen::*)(MatchmakingScreenState,StateAction)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<AdaptorJoustMatchmakingScreen, void
   (AdaptorJoustMatchmakingScreen::*)(int,
   int)>(Sexy::CBMemberTranslatorX<AdaptorJoustMatchmakingScreen, void
   (AdaptorJoustMatchmakingScreen::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<AdaptorJoustMatchmakingScreen,void(AdaptorJoustMatchmakingScreen::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,AdaptorJoustMatchmakingScreen,void(AdaptorJoustMatchmakingScreen::*)(int,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<MatchmakingScreenState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<MatchmakingScreenState,StateAction>::Invoke
          (Delegate2<MatchmakingScreenState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<MatchmakingScreenState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<TournamentResultsScreenState,
   StateAction>::Delegate2<AdaptorJoustTourneyResultsScreen, void
   (AdaptorJoustTourneyResultsScreen::*)(TournamentResultsScreenState,
   StateAction)>(Sexy::CBMemberTranslatorX<AdaptorJoustTourneyResultsScreen, void
   (AdaptorJoustTourneyResultsScreen::*)(TournamentResultsScreenState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<TournamentResultsScreenState,StateAction>::
Delegate2<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(TournamentResultsScreenState,StateAction)>
          (Delegate2<TournamentResultsScreenState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066acfd0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<TournamentResultsScreenState,StateAction,AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(TournamentResultsScreenState,StateAction)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<AdaptorJoustTourneyResultsScreen, void
   (AdaptorJoustTourneyResultsScreen::*)(int,
   int)>(Sexy::CBMemberTranslatorX<AdaptorJoustTourneyResultsScreen, void
   (AdaptorJoustTourneyResultsScreen::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(int,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<TournamentResultsScreenState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<TournamentResultsScreenState,StateAction>::Invoke
          (Delegate2<TournamentResultsScreenState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<TournamentResultsScreenState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<WinstreakEntryState, StateAction>::Delegate2<AdaptorJoustWinStreakDisplayEntry,
   void (AdaptorJoustWinStreakDisplayEntry::*)(WinstreakEntryState,
   StateAction)>(Sexy::CBMemberTranslatorX<AdaptorJoustWinStreakDisplayEntry, void
   (AdaptorJoustWinStreakDisplayEntry::*)(WinstreakEntryState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<WinstreakEntryState,StateAction>::
Delegate2<AdaptorJoustWinStreakDisplayEntry,void(AdaptorJoustWinStreakDisplayEntry::*)(WinstreakEntryState,StateAction)>
          (Delegate2<WinstreakEntryState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066adb60;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<WinstreakEntryState,StateAction,AdaptorJoustWinStreakDisplayEntry,void(AdaptorJoustWinStreakDisplayEntry::*)(WinstreakEntryState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<WinstreakEntryState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<WinstreakEntryState,StateAction>::Invoke
          (Delegate2<WinstreakEntryState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<WinstreakEntryState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, float>::Delegate2<StarChallengeTargetScore, void
   (StarChallengeTargetScore::*)(int, float)>(Sexy::CBMemberTranslatorX<StarChallengeTargetScore,
   void (StarChallengeTargetScore::*)(int, float)> const&) */

void __thiscall
Sexy::Delegate2<int,float>::
Delegate2<StarChallengeTargetScore,void(StarChallengeTargetScore::*)(int,float)>
          (Delegate2<int,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0664d4f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,float,StarChallengeTargetScore,void(StarChallengeTargetScore::*)(int,float)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<JoustDashboardLoadingState, void
   (JoustDashboardLoadingState::*)(int, int)>(Sexy::CBMemberTranslatorX<JoustDashboardLoadingState,
   void (JoustDashboardLoadingState::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<JoustDashboardLoadingState,void(JoustDashboardLoadingState::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,JoustDashboardLoadingState,void(JoustDashboardLoadingState::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, float>::Delegate2<JoustGameModule, void (JoustGameModule::*)(int,
   float)>(Sexy::CBMemberTranslatorX<JoustGameModule, void (JoustGameModule::*)(int, float)> const&)
    */

void __thiscall
Sexy::Delegate2<int,float>::Delegate2<JoustGameModule,void(JoustGameModule::*)(int,float)>
          (Delegate2<int,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0664d4f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,float,JoustGameModule,void(JoustGameModule::*)(int,float)>::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<JoustNetworkMgr, void (JoustNetworkMgr::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<JoustNetworkMgr, void
   (JoustNetworkMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<JoustNetworkMgr,void(JoustNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,JoustNetworkMgr,void(JoustNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<JoustOutro, void (JoustOutro::*)(int,
   int)>(Sexy::CBMemberTranslatorX<JoustOutro, void (JoustOutro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<JoustOutro,void(JoustOutro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,JoustOutro,void(JoustOutro::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<BoardEntity*, bool>::Delegate2<PlantWinterRambutan, void
   (PlantWinterRambutan::*)(BoardEntity*, bool)>(Sexy::CBMemberTranslatorX<PlantWinterRambutan, void
   (PlantWinterRambutan::*)(BoardEntity*, bool)> const&) */

void __thiscall
Sexy::Delegate2<BoardEntity*,bool>::
Delegate2<PlantWinterRambutan,void(PlantWinterRambutan::*)(BoardEntity*,bool)>
          (Delegate2<BoardEntity*,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066b2c90;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<BoardEntity*,bool,PlantWinterRambutan,void(PlantWinterRambutan::*)(BoardEntity*,bool)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<BoardEntity*, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<BoardEntity*,bool>::Invoke
          (Delegate2<BoardEntity*,bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  BoardEntity *pBVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = RtInvokeVariant::Get<BoardEntity*>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pBVar2,bVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<WireGelsemiumTutorialModule, void
   (WireGelsemiumTutorialModule::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<WireGelsemiumTutorialModule, void
   (WireGelsemiumTutorialModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<WireGelsemiumTutorialModule,void(WireGelsemiumTutorialModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,WireGelsemiumTutorialModule,void(WireGelsemiumTutorialModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<MiniGameCollectionNetworkMgr, void (MiniGameCollectionNetworkMgr::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<MiniGameCollectionNetworkMgr, void
   (MiniGameCollectionNetworkMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<MiniGameCollectionNetworkMgr,void(MiniGameCollectionNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,MiniGameCollectionNetworkMgr,void(MiniGameCollectionNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<MiniGameCollectionOutro, void
   (MiniGameCollectionOutro::*)(int, int)>(Sexy::CBMemberTranslatorX<MiniGameCollectionOutro, void
   (MiniGameCollectionOutro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<MiniGameCollectionOutro,void(MiniGameCollectionOutro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,MiniGameCollectionOutro,void(MiniGameCollectionOutro::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityCollectionNighttheToy, void (ActivityCollectionNighttheToy::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<ActivityCollectionNighttheToy, void
   (ActivityCollectionNighttheToy::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityCollectionNighttheToy,void(ActivityCollectionNighttheToy::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityCollectionNighttheToy,void(ActivityCollectionNighttheToy::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<ToyNightShopWidget, void
   (ToyNightShopWidget::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<ToyNightShopWidget, void (ToyNightShopWidget::*)(bool,
   S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<ToyNightShopWidget,void(ToyNightShopWidget::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,ToyNightShopWidget,void(ToyNightShopWidget::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<RichManUIMgr, void (RichManUIMgr::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<RichManUIMgr, void
   (RichManUIMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<RichManUIMgr,void(RichManUIMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,RichManUIMgr,void(RichManUIMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<RichManUIMgr, void (RichManUIMgr::*)(int,
   int)>(Sexy::CBMemberTranslatorX<RichManUIMgr, void (RichManUIMgr::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<RichManUIMgr,void(RichManUIMgr::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,RichManUIMgr,void(RichManUIMgr::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const&>::Delegate2<void (*)(Zombie*, DamageInfo
   const&)>(Sexy::CBFunctionTranslatorX<void (*)(Zombie*, DamageInfo const&)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const&>::Delegate2<void(*)(Zombie*,DamageInfo_const&)>
          (Delegate2<Zombie*,DamageInfo_const&> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689850;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Zombie*,DamageInfo_const&,void(*)(Zombie*,DamageInfo_const&)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<void (*)(Zombie*, DamageInfo
   const*)>(Sexy::CBFunctionTranslatorX<void (*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::Delegate2<void(*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Zombie*,DamageInfo_const*,void(*)(Zombie*,DamageInfo_const*)>::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, int>::Delegate2<void (*)(Plant*, int)>(Sexy::CBFunctionTranslatorX<void
   (*)(Plant*, int)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,int>::Delegate2<void(*)(Plant*,int)>
          (Delegate2<Plant*,int> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066be840;
  *(code **)(this + 0x28) = CBFunctionTranslator2<Plant*,int,void(*)(Plant*,int)>::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Plant*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::Delegate2<Plant*,int>::Invoke
          (Delegate2<Plant*,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  Plant *pPVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = RtInvokeVariant::Get<Plant*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_TaptapButton, void (WorldMap_TaptapButton::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<WorldMap_TaptapButton,
   void (WorldMap_TaptapButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_TaptapButton,void(WorldMap_TaptapButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_TaptapButton,void(WorldMap_TaptapButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_VivoGameCenterButton, void (WorldMap_VivoGameCenterButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_VivoGameCenterButton, void
   (WorldMap_VivoGameCenterButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_VivoGameCenterButton,void(WorldMap_VivoGameCenterButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_VivoGameCenterButton,void(WorldMap_VivoGameCenterButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<ZShopItemWidget, void (ZShopItemWidget::*)(int,
   int)>(Sexy::CBMemberTranslatorX<ZShopItemWidget, void (ZShopItemWidget::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<ZShopItemWidget,void(ZShopItemWidget::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,ZShopItemWidget,void(ZShopItemWidget::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_DaveClubButton, void (WorldMap_DaveClubButton::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<WorldMap_DaveClubButton,
   void (WorldMap_DaveClubButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_DaveClubButton,void(WorldMap_DaveClubButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_DaveClubButton,void(WorldMap_DaveClubButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<StoneLottery, void (StoneLottery::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<StoneLottery, void
   (StoneLottery::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<StoneLottery,void(StoneLottery::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,StoneLottery,void(StoneLottery::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UINameAuthentication*, int>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<UINameAuthentication*,int>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_066c65c0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<UINameAuthentication*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<UINameAuthentication*,int>::Invoke
          (Delegate2<UINameAuthentication*,int> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  UINameAuthentication *pUVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar2 = RtInvokeVariant::Get<UINameAuthentication*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pUVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIMiniGameEntrance, void
   (UIMiniGameEntrance::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UIMiniGameEntrance, void
   (UIMiniGameEntrance::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIMiniGameEntrance,void(UIMiniGameEntrance::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIMiniGameEntrance,void(UIMiniGameEntrance::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIMiniGameEntrance, void (UIMiniGameEntrance::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UIMiniGameEntrance, void
   (UIMiniGameEntrance::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIMiniGameEntrance,void(UIMiniGameEntrance::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIMiniGameEntrance,void(UIMiniGameEntrance::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_7DaysLoginReward const*>::Delegate2<ChristmasAwardActivityScrollPanel,
   void (ChristmasAwardActivityScrollPanel::*)(bool, S2C_7DaysLoginReward
   const*)>(Sexy::CBMemberTranslatorX<ChristmasAwardActivityScrollPanel, void
   (ChristmasAwardActivityScrollPanel::*)(bool, S2C_7DaysLoginReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_7DaysLoginReward_const*>::
Delegate2<ChristmasAwardActivityScrollPanel,void(ChristmasAwardActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>
          (Delegate2<bool,S2C_7DaysLoginReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066ca740;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_7DaysLoginReward_const*,ChristmasAwardActivityScrollPanel,void(ChristmasAwardActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_7DaysLoginReward const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_7DaysLoginReward_const*>::Invoke
          (Delegate2<bool,S2C_7DaysLoginReward_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_7DaysLoginReward *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_7DaysLoginReward_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, S2C_MiniGameResult const*>::Delegate2<MiniGameChallengeModule, void
   (MiniGameChallengeModule::*)(int, S2C_MiniGameResult
   const*)>(Sexy::CBMemberTranslatorX<MiniGameChallengeModule, void
   (MiniGameChallengeModule::*)(int, S2C_MiniGameResult const*)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_MiniGameResult_const*>::
Delegate2<MiniGameChallengeModule,void(MiniGameChallengeModule::*)(int,S2C_MiniGameResult_const*)>
          (Delegate2<int,S2C_MiniGameResult_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066ca970;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_MiniGameResult_const*,MiniGameChallengeModule,void(MiniGameChallengeModule::*)(int,S2C_MiniGameResult_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, S2C_MiniGameResult const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,S2C_MiniGameResult_const*>::Invoke
          (Delegate2<int,S2C_MiniGameResult_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  S2C_MiniGameResult *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_MiniGameResult_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Plant*, bool>::Delegate2<SoccerGameModule, void (SoccerGameModule::*)(Plant*,
   bool)>(Sexy::CBMemberTranslatorX<SoccerGameModule, void (SoccerGameModule::*)(Plant*, bool)>
   const&) */

void __thiscall
Sexy::Delegate2<Plant*,bool>::Delegate2<SoccerGameModule,void(SoccerGameModule::*)(Plant*,bool)>
          (Delegate2<Plant*,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066cb360;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,bool,SoccerGameModule,void(SoccerGameModule::*)(Plant*,bool)>::
       thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<SoccerGameModule, void
   (SoccerGameModule::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<SoccerGameModule,
   void (SoccerGameModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<SoccerGameModule,void(SoccerGameModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,SoccerGameModule,void(SoccerGameModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Plant*, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::Delegate2<Plant*,bool>::Invoke
          (Delegate2<Plant*,bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  Plant *pPVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = RtInvokeVariant::Get<Plant*>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar2,bVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, S2C_7DaysLoginSpringReward
   const*>::Delegate2<SpringAwardActivityScrollPanel, void (SpringAwardActivityScrollPanel::*)(bool,
   S2C_7DaysLoginSpringReward const*)>(Sexy::CBMemberTranslatorX<SpringAwardActivityScrollPanel,
   void (SpringAwardActivityScrollPanel::*)(bool, S2C_7DaysLoginSpringReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_7DaysLoginSpringReward_const*>::
Delegate2<SpringAwardActivityScrollPanel,void(SpringAwardActivityScrollPanel::*)(bool,S2C_7DaysLoginSpringReward_const*)>
          (Delegate2<bool,S2C_7DaysLoginSpringReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066d00f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_7DaysLoginSpringReward_const*,SpringAwardActivityScrollPanel,void(SpringAwardActivityScrollPanel::*)(bool,S2C_7DaysLoginSpringReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<UISpringBuyPlant, void (UISpringBuyPlant::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<UISpringBuyPlant, void (UISpringBuyPlant::*)(bool, int)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,int>::Delegate2<UISpringBuyPlant,void(UISpringBuyPlant::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,UISpringBuyPlant,void(UISpringBuyPlant::*)(bool,int)>::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_7DaysLoginSpringReward const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_7DaysLoginSpringReward_const*>::Invoke
          (Delegate2<bool,S2C_7DaysLoginSpringReward_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_7DaysLoginSpringReward *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_7DaysLoginSpringReward_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIWorldCupEntrance, void
   (UIWorldCupEntrance::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UIWorldCupEntrance, void
   (UIWorldCupEntrance::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIWorldCupEntrance,void(UIWorldCupEntrance::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIWorldCupEntrance,void(UIWorldCupEntrance::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIWorldCupSelectTeam, void
   (UIWorldCupSelectTeam::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UIWorldCupSelectTeam,
   void (UIWorldCupSelectTeam::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIWorldCupSelectTeam,void(UIWorldCupSelectTeam::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIWorldCupSelectTeam,void(UIWorldCupSelectTeam::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<WorldCupManager, void
   (WorldCupManager::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<WorldCupManager, void
   (WorldCupManager::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<WorldCupManager,void(WorldCupManager::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,WorldCupManager,void(WorldCupManager::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMapActivityBtnTurnChangeManager, void
   (WorldMapActivityBtnTurnChangeManager::*)(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&)>(Sexy::CBMemberTranslatorX<WorldMapActivityBtnTurnChangeManager, void
   (WorldMapActivityBtnTurnChangeManager::*)(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMapActivityBtnTurnChangeManager,void(WorldMapActivityBtnTurnChangeManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMapActivityBtnTurnChangeManager,void(WorldMapActivityBtnTurnChangeManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_LimitGachaButton, void (WorldMap_LimitGachaButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_LimitGachaButton, void
   (WorldMap_LimitGachaButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_LimitGachaButton,void(WorldMap_LimitGachaButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_LimitGachaButton,void(WorldMap_LimitGachaButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_PlantSpecialOfferUIButton, void
   (WorldMap_PlantSpecialOfferUIButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_PlantSpecialOfferUIButton, void
   (WorldMap_PlantSpecialOfferUIButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_PlantSpecialOfferUIButton,void(WorldMap_PlantSpecialOfferUIButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_PlantSpecialOfferUIButton,void(WorldMap_PlantSpecialOfferUIButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_LuckBagUIButton, void (WorldMap_LuckBagUIButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_LuckBagUIButton, void
   (WorldMap_LuckBagUIButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_LuckBagUIButton,void(WorldMap_LuckBagUIButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_LuckBagUIButton,void(WorldMap_LuckBagUIButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_7DaysLoginReward const*>::Delegate2<DailyAwardActivityScrollPanel, void
   (DailyAwardActivityScrollPanel::*)(bool, S2C_7DaysLoginReward
   const*)>(Sexy::CBMemberTranslatorX<DailyAwardActivityScrollPanel, void
   (DailyAwardActivityScrollPanel::*)(bool, S2C_7DaysLoginReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_7DaysLoginReward_const*>::
Delegate2<DailyAwardActivityScrollPanel,void(DailyAwardActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>
          (Delegate2<bool,S2C_7DaysLoginReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066ca740;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_7DaysLoginReward_const*,DailyAwardActivityScrollPanel,void(DailyAwardActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_7DaysLoginReward const*>::Delegate2<DailySignActivityScrollPanel, void
   (DailySignActivityScrollPanel::*)(bool, S2C_7DaysLoginReward
   const*)>(Sexy::CBMemberTranslatorX<DailySignActivityScrollPanel, void
   (DailySignActivityScrollPanel::*)(bool, S2C_7DaysLoginReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_7DaysLoginReward_const*>::
Delegate2<DailySignActivityScrollPanel,void(DailySignActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>
          (Delegate2<bool,S2C_7DaysLoginReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066ca740;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_7DaysLoginReward_const*,DailySignActivityScrollPanel,void(DailySignActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> > const&>::Delegate2<void
   (*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBFunctionTranslatorX<void (*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<DailySignPage, void (DailySignPage::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<DailySignPage, void (DailySignPage::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::Delegate2<DailySignPage,void(DailySignPage::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,DailySignPage,void(DailySignPage::*)(bool,int)>::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<LimitLotteryPanel, void
   (LimitLotteryPanel::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<LimitLotteryPanel, void
   (LimitLotteryPanel::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<LimitLotteryPanel,void(LimitLotteryPanel::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,LimitLotteryPanel,void(LimitLotteryPanel::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<LimitLotteryPagePanel, void
   (LimitLotteryPagePanel::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<LimitLotteryPagePanel,
   void (LimitLotteryPagePanel::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<LimitLotteryPagePanel,void(LimitLotteryPagePanel::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,LimitLotteryPagePanel,void(LimitLotteryPagePanel::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<CupShopItemWidget, void
   (CupShopItemWidget::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<CupShopItemWidget, void
   (CupShopItemWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<CupShopItemWidget,void(CupShopItemWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,CupShopItemWidget,void(CupShopItemWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_LimitLotteryReward const*>::Delegate2<UILimitLottery, void
   (UILimitLottery::*)(bool, S2C_LimitLotteryReward
   const*)>(Sexy::CBMemberTranslatorX<UILimitLottery, void (UILimitLottery::*)(bool,
   S2C_LimitLotteryReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_LimitLotteryReward_const*>::
Delegate2<UILimitLottery,void(UILimitLottery::*)(bool,S2C_LimitLotteryReward_const*)>
          (Delegate2<bool,S2C_LimitLotteryReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066dffa0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_LimitLotteryReward_const*,UILimitLottery,void(UILimitLottery::*)(bool,S2C_LimitLotteryReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_LimitLotteryCrystalBuy const*>::Delegate2<UILimitLottery, void
   (UILimitLottery::*)(bool, S2C_LimitLotteryCrystalBuy
   const*)>(Sexy::CBMemberTranslatorX<UILimitLottery, void (UILimitLottery::*)(bool,
   S2C_LimitLotteryCrystalBuy const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_LimitLotteryCrystalBuy_const*>::
Delegate2<UILimitLottery,void(UILimitLottery::*)(bool,S2C_LimitLotteryCrystalBuy_const*)>
          (Delegate2<bool,S2C_LimitLotteryCrystalBuy_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066dffc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_LimitLotteryCrystalBuy_const*,UILimitLottery,void(UILimitLottery::*)(bool,S2C_LimitLotteryCrystalBuy_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_SummeryLotteryData2018 const&>::Delegate2<UILimitLotteryPage, void
   (UILimitLotteryPage::*)(bool, S2C_SummeryLotteryData2018
   const&)>(Sexy::CBMemberTranslatorX<UILimitLotteryPage, void (UILimitLotteryPage::*)(bool,
   S2C_SummeryLotteryData2018 const&)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_SummeryLotteryData2018_const&>::
Delegate2<UILimitLotteryPage,void(UILimitLotteryPage::*)(bool,S2C_SummeryLotteryData2018_const&)>
          (Delegate2<int,S2C_SummeryLotteryData2018_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066dffe0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_SummeryLotteryData2018_const&,UILimitLotteryPage,void(UILimitLotteryPage::*)(bool,S2C_SummeryLotteryData2018_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<LimitLotteryCupShop, void (LimitLotteryCupShop::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<LimitLotteryCupShop,
   void (LimitLotteryCupShop::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<LimitLotteryCupShop,void(LimitLotteryCupShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,LimitLotteryCupShop,void(LimitLotteryCupShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_S2C_LimitLotteryCupShop const*>::Delegate2<LimitLotteryCupShop, void
   (LimitLotteryCupShop::*)(bool, S2C_S2C_LimitLotteryCupShop
   const*)>(Sexy::CBMemberTranslatorX<LimitLotteryCupShop, void (LimitLotteryCupShop::*)(bool,
   S2C_S2C_LimitLotteryCupShop const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_S2C_LimitLotteryCupShop_const*>::
Delegate2<LimitLotteryCupShop,void(LimitLotteryCupShop::*)(bool,S2C_S2C_LimitLotteryCupShop_const*)>
          (Delegate2<bool,S2C_S2C_LimitLotteryCupShop_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066e0000;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_S2C_LimitLotteryCupShop_const*,LimitLotteryCupShop,void(LimitLotteryCupShop::*)(bool,S2C_S2C_LimitLotteryCupShop_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_S2C_LimitLotteryCupShop const*>::Delegate2<CupShopItemWidget, void
   (CupShopItemWidget::*)(bool, S2C_S2C_LimitLotteryCupShop
   const*)>(Sexy::CBMemberTranslatorX<CupShopItemWidget, void (CupShopItemWidget::*)(bool,
   S2C_S2C_LimitLotteryCupShop const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_S2C_LimitLotteryCupShop_const*>::
Delegate2<CupShopItemWidget,void(CupShopItemWidget::*)(bool,S2C_S2C_LimitLotteryCupShop_const*)>
          (Delegate2<bool,S2C_S2C_LimitLotteryCupShop_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066e0000;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_S2C_LimitLotteryCupShop_const*,CupShopItemWidget,void(CupShopItemWidget::*)(bool,S2C_S2C_LimitLotteryCupShop_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_S2C_LimitLotteryCupShop const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_S2C_LimitLotteryCupShop_const*>::Invoke
          (Delegate2<bool,S2C_S2C_LimitLotteryCupShop_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_S2C_LimitLotteryCupShop *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_S2C_LimitLotteryCupShop_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, S2C_SummeryLotteryData2018 const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,S2C_SummeryLotteryData2018_const&>::Invoke
          (Delegate2<int,S2C_SummeryLotteryData2018_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  S2C_SummeryLotteryData2018 *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_SummeryLotteryData2018_const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_LimitLotteryCrystalBuy const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_LimitLotteryCrystalBuy_const*>::Invoke
          (Delegate2<bool,S2C_LimitLotteryCrystalBuy_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_LimitLotteryCrystalBuy *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_LimitLotteryCrystalBuy_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_LimitLotteryReward const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_LimitLotteryReward_const*>::Invoke
          (Delegate2<bool,S2C_LimitLotteryReward_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_LimitLotteryReward *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_LimitLotteryReward_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<LimitedSummonPage, void
   (LimitedSummonPage::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<LimitedSummonPage, void
   (LimitedSummonPage::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<LimitedSummonPage,void(LimitedSummonPage::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,LimitedSummonPage,void(LimitedSummonPage::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UINewYearGoodsAnnouncement, void (UINewYearGoodsAnnouncement::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<UINewYearGoodsAnnouncement, void
   (UINewYearGoodsAnnouncement::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UINewYearGoodsAnnouncement,void(UINewYearGoodsAnnouncement::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UINewYearGoodsAnnouncement,void(UINewYearGoodsAnnouncement::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<CarnivalBundle, void
   (CarnivalBundle::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<CarnivalBundle, void
   (CarnivalBundle::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<CarnivalBundle,void(CarnivalBundle::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,CarnivalBundle,void(CarnivalBundle::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<CarnivalBundle, void (CarnivalBundle::*)(int,
   int)>(Sexy::CBMemberTranslatorX<CarnivalBundle, void (CarnivalBundle::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<CarnivalBundle,void(CarnivalBundle::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,CarnivalBundle,void(CarnivalBundle::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UICarnival, void (UICarnival::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UICarnival, void (UICarnival::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UICarnival,void(UICarnival::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UICarnival,void(UICarnival::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIGeneralPlantChipsExchange, void
   (UIGeneralPlantChipsExchange::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UIGeneralPlantChipsExchange, void
   (UIGeneralPlantChipsExchange::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIGeneralPlantChipsExchange,void(UIGeneralPlantChipsExchange::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIGeneralPlantChipsExchange,void(UIGeneralPlantChipsExchange::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UILimitGroupBuy, void (UILimitGroupBuy::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UILimitGroupBuy, void
   (UILimitGroupBuy::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UILimitGroupBuy,void(UILimitGroupBuy::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UILimitGroupBuy,void(UILimitGroupBuy::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UILimitGroupBuyDiscount, void
   (UILimitGroupBuyDiscount::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<UILimitGroupBuyDiscount, void
   (UILimitGroupBuyDiscount::*)(bool, S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UILimitGroupBuyDiscount,void(UILimitGroupBuyDiscount::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UILimitGroupBuyDiscount,void(UILimitGroupBuyDiscount::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UILimitGroupBuyConfirm, void
   (UILimitGroupBuyConfirm::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<UILimitGroupBuyConfirm, void (UILimitGroupBuyConfirm::*)(bool,
   S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UILimitGroupBuyConfirm,void(UILimitGroupBuyConfirm::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UILimitGroupBuyConfirm,void(UILimitGroupBuyConfirm::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<CallofWishPage, void
   (CallofWishPage::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<CallofWishPage, void
   (CallofWishPage::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<CallofWishPage,void(CallofWishPage::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,CallofWishPage,void(CallofWishPage::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, TravelLogRewardData*>::Delegate2<TravelLogBonusUI, void
   (TravelLogBonusUI::*)(bool, TravelLogRewardData*)>(Sexy::CBMemberTranslatorX<TravelLogBonusUI,
   void (TravelLogBonusUI::*)(bool, TravelLogRewardData*)> const&) */

void __thiscall
Sexy::Delegate2<bool,TravelLogRewardData*>::
Delegate2<TravelLogBonusUI,void(TravelLogBonusUI::*)(bool,TravelLogRewardData*)>
          (Delegate2<bool,TravelLogRewardData*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066f5260;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,TravelLogRewardData*,TravelLogBonusUI,void(TravelLogBonusUI::*)(bool,TravelLogRewardData*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, TravelLogRewardData*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<bool,TravelLogRewardData*>::Invoke
          (Delegate2<bool,TravelLogRewardData*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  TravelLogRewardData *pTVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pTVar2 = RtInvokeVariant::Get<TravelLogRewardData*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pTVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<TravelLogTaskBeatZombies, void
   (TravelLogTaskBeatZombies::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<TravelLogTaskBeatZombies, void
   (TravelLogTaskBeatZombies::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<TravelLogTaskBeatZombies,void(TravelLogTaskBeatZombies::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,TravelLogTaskBeatZombies,void(TravelLogTaskBeatZombies::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_BillingReward const*>::Delegate2<DaveTreasureDisplayWidget, void
   (DaveTreasureDisplayWidget::*)(bool, S2C_BillingReward
   const*)>(Sexy::CBMemberTranslatorX<DaveTreasureDisplayWidget, void
   (DaveTreasureDisplayWidget::*)(bool, S2C_BillingReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_BillingReward_const*>::
Delegate2<DaveTreasureDisplayWidget,void(DaveTreasureDisplayWidget::*)(bool,S2C_BillingReward_const*)>
          (Delegate2<bool,S2C_BillingReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066f8f30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_BillingReward_const*,DaveTreasureDisplayWidget,void(DaveTreasureDisplayWidget::*)(bool,S2C_BillingReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_BillingReward const*>::Delegate2<UIDaveTreasure, void
   (UIDaveTreasure::*)(bool, S2C_BillingReward const*)>(Sexy::CBMemberTranslatorX<UIDaveTreasure,
   void (UIDaveTreasure::*)(bool, S2C_BillingReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_BillingReward_const*>::
Delegate2<UIDaveTreasure,void(UIDaveTreasure::*)(bool,S2C_BillingReward_const*)>
          (Delegate2<bool,S2C_BillingReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066f8f30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_BillingReward_const*,UIDaveTreasure,void(UIDaveTreasure::*)(bool,S2C_BillingReward_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_BillingReward const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_BillingReward_const*>::Invoke
          (Delegate2<bool,S2C_BillingReward_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_BillingReward *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_BillingReward_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<DaveTaskBeatBoss, void
   (DaveTaskBeatBoss::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<DaveTaskBeatBoss,
   void (DaveTaskBeatBoss::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<DaveTaskBeatBoss,void(DaveTaskBeatBoss::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,DaveTaskBeatBoss,void(DaveTaskBeatBoss::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<DaveTaskNormalDraw, void (DaveTaskNormalDraw::*)(int,
   int)>(Sexy::CBMemberTranslatorX<DaveTaskNormalDraw, void (DaveTaskNormalDraw::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<DaveTaskNormalDraw,void(DaveTaskNormalDraw::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,DaveTaskNormalDraw,void(DaveTaskNormalDraw::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<DaveTaskKillZombieOnPennyLevel, void
   (DaveTaskKillZombieOnPennyLevel::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<DaveTaskKillZombieOnPennyLevel, void
   (DaveTaskKillZombieOnPennyLevel::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<DaveTaskKillZombieOnPennyLevel,void(DaveTaskKillZombieOnPennyLevel::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,DaveTaskKillZombieOnPennyLevel,void(DaveTaskKillZombieOnPennyLevel::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<HappyVaseAnimWidget, void
   (HappyVaseAnimWidget::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<HappyVaseAnimWidget, void
   (HappyVaseAnimWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<HappyVaseAnimWidget,void(HappyVaseAnimWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,HappyVaseAnimWidget,void(HappyVaseAnimWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIHappyVaseBreaker, void
   (UIHappyVaseBreaker::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UIHappyVaseBreaker, void
   (UIHappyVaseBreaker::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIHappyVaseBreaker,void(UIHappyVaseBreaker::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIHappyVaseBreaker,void(UIHappyVaseBreaker::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIFestivalGoldenEggEntrance, void
   (UIFestivalGoldenEggEntrance::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UIFestivalGoldenEggEntrance, void
   (UIFestivalGoldenEggEntrance::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIFestivalGoldenEggEntrance,void(UIFestivalGoldenEggEntrance::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIFestivalGoldenEggEntrance,void(UIFestivalGoldenEggEntrance::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<GoldenEggAnimWidget, void
   (GoldenEggAnimWidget::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<GoldenEggAnimWidget, void
   (GoldenEggAnimWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<GoldenEggAnimWidget,void(GoldenEggAnimWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,GoldenEggAnimWidget,void(GoldenEggAnimWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIFestivalGoldenEggEntrance, void (UIFestivalGoldenEggEntrance::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<UIFestivalGoldenEggEntrance, void
   (UIFestivalGoldenEggEntrance::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIFestivalGoldenEggEntrance,void(UIFestivalGoldenEggEntrance::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIFestivalGoldenEggEntrance,void(UIFestivalGoldenEggEntrance::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<ArborDayBundleWidget, void
   (ArborDayBundleWidget::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<ArborDayBundleWidget,
   void (ArborDayBundleWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<ArborDayBundleWidget,void(ArborDayBundleWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,ArborDayBundleWidget,void(ArborDayBundleWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIArborDay, void (UIArborDay::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UIArborDay, void (UIArborDay::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::Delegate2<UIArborDay,void(UIArborDay::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIArborDay,void(UIArborDay::*)(UIMessageBox*,int)>::
       thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<BattleOrderItemWidget, void
   (BattleOrderItemWidget::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<BattleOrderItemWidget,
   void (BattleOrderItemWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<BattleOrderItemWidget,void(BattleOrderItemWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,BattleOrderItemWidget,void(BattleOrderItemWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<BattleOrderLotteryPanel, void
   (BattleOrderLotteryPanel::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<BattleOrderLotteryPanel, void
   (BattleOrderLotteryPanel::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<BattleOrderLotteryPanel,void(BattleOrderLotteryPanel::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,BattleOrderLotteryPanel,void(BattleOrderLotteryPanel::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UINoviceSevenDaysCollection, void (UINoviceSevenDaysCollection::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<UINoviceSevenDaysCollection, void
   (UINoviceSevenDaysCollection::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UINoviceSevenDaysCollection,void(UINoviceSevenDaysCollection::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UINoviceSevenDaysCollection,void(UINoviceSevenDaysCollection::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIAnniversaryTreasure, void
   (UIAnniversaryTreasure::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UIAnniversaryTreasure,
   void (UIAnniversaryTreasure::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIAnniversaryTreasure,void(UIAnniversaryTreasure::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIAnniversaryTreasure,void(UIAnniversaryTreasure::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIAnniversaryTreasure, void (UIAnniversaryTreasure::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UIAnniversaryTreasure,
   void (UIAnniversaryTreasure::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIAnniversaryTreasure,void(UIAnniversaryTreasure::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIAnniversaryTreasure,void(UIAnniversaryTreasure::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<NewRecallSignLine, void
   (NewRecallSignLine::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<NewRecallSignLine, void
   (NewRecallSignLine::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<NewRecallSignLine,void(NewRecallSignLine::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,NewRecallSignLine,void(NewRecallSignLine::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<NewRecallBankLine, void
   (NewRecallBankLine::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<NewRecallBankLine, void
   (NewRecallBankLine::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<NewRecallBankLine,void(NewRecallBankLine::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,NewRecallBankLine,void(NewRecallBankLine::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<NewRecallBankWidget, void
   (NewRecallBankWidget::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<NewRecallBankWidget, void
   (NewRecallBankWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<NewRecallBankWidget,void(NewRecallBankWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,NewRecallBankWidget,void(NewRecallBankWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<NewRecallSelectItem, void (NewRecallSelectItem::*)(int,
   int)>(Sexy::CBMemberTranslatorX<NewRecallSelectItem, void (NewRecallSelectItem::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<NewRecallSelectItem,void(NewRecallSelectItem::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,NewRecallSelectItem,void(NewRecallSelectItem::*)(int,int)>::thunk
  ;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<UICommonItemSelect, void (UICommonItemSelect::*)(int,
   int)>(Sexy::CBMemberTranslatorX<UICommonItemSelect, void (UICommonItemSelect::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<UICommonItemSelect,void(UICommonItemSelect::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,UICommonItemSelect,void(UICommonItemSelect::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UINewRecall, void (UINewRecall::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UINewRecall, void (UINewRecall::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UINewRecall,void(UINewRecall::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UINewRecall,void(UINewRecall::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<GeneralTaskCollectAvatarPiecesListener, void
   (GeneralTaskCollectAvatarPiecesListener::*)(int,
   int)>(Sexy::CBMemberTranslatorX<GeneralTaskCollectAvatarPiecesListener, void
   (GeneralTaskCollectAvatarPiecesListener::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<GeneralTaskCollectAvatarPiecesListener,void(GeneralTaskCollectAvatarPiecesListener::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,GeneralTaskCollectAvatarPiecesListener,void(GeneralTaskCollectAvatarPiecesListener::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<GeneralTaskPanneyGachaListener, void
   (GeneralTaskPanneyGachaListener::*)(int,
   int)>(Sexy::CBMemberTranslatorX<GeneralTaskPanneyGachaListener, void
   (GeneralTaskPanneyGachaListener::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<GeneralTaskPanneyGachaListener,void(GeneralTaskPanneyGachaListener::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,GeneralTaskPanneyGachaListener,void(GeneralTaskPanneyGachaListener::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PassLevelPVZ1Listener, void (PassLevelPVZ1Listener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<PassLevelPVZ1Listener, void (PassLevelPVZ1Listener::*)(int,
   bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::Delegate2<PassLevelPVZ1Listener,void(PassLevelPVZ1Listener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PassLevelPVZ1Listener,void(PassLevelPVZ1Listener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<TaskPassLevelPVZ1Listener, void
   (TaskPassLevelPVZ1Listener::*)(int, bool)>(Sexy::CBMemberTranslatorX<TaskPassLevelPVZ1Listener,
   void (TaskPassLevelPVZ1Listener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<TaskPassLevelPVZ1Listener,void(TaskPassLevelPVZ1Listener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,TaskPassLevelPVZ1Listener,void(TaskPassLevelPVZ1Listener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<GeneralTaskSetPvPLabLevelWithCheckListener, void
   (GeneralTaskSetPvPLabLevelWithCheckListener::*)(int,
   int)>(Sexy::CBMemberTranslatorX<GeneralTaskSetPvPLabLevelWithCheckListener, void
   (GeneralTaskSetPvPLabLevelWithCheckListener::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<GeneralTaskSetPvPLabLevelWithCheckListener,void(GeneralTaskSetPvPLabLevelWithCheckListener::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,GeneralTaskSetPvPLabLevelWithCheckListener,void(GeneralTaskSetPvPLabLevelWithCheckListener::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<GeneralTaskObtainAccessoryPieceListener, void
   (GeneralTaskObtainAccessoryPieceListener::*)(int,
   int)>(Sexy::CBMemberTranslatorX<GeneralTaskObtainAccessoryPieceListener, void
   (GeneralTaskObtainAccessoryPieceListener::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<GeneralTaskObtainAccessoryPieceListener,void(GeneralTaskObtainAccessoryPieceListener::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,GeneralTaskObtainAccessoryPieceListener,void(GeneralTaskObtainAccessoryPieceListener::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<CallofWishObtainIntegralListener, void
   (CallofWishObtainIntegralListener::*)(int,
   int)>(Sexy::CBMemberTranslatorX<CallofWishObtainIntegralListener, void
   (CallofWishObtainIntegralListener::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<CallofWishObtainIntegralListener,void(CallofWishObtainIntegralListener::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,CallofWishObtainIntegralListener,void(CallofWishObtainIntegralListener::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<GeneralRemainingSunCurrencyListener, void
   (GeneralRemainingSunCurrencyListener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<GeneralRemainingSunCurrencyListener, void
   (GeneralRemainingSunCurrencyListener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<GeneralRemainingSunCurrencyListener,void(GeneralRemainingSunCurrencyListener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,GeneralRemainingSunCurrencyListener,void(GeneralRemainingSunCurrencyListener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PvZ1FinishAllHardLevelListener, void
   (PvZ1FinishAllHardLevelListener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<PvZ1FinishAllHardLevelListener, void
   (PvZ1FinishAllHardLevelListener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<PvZ1FinishAllHardLevelListener,void(PvZ1FinishAllHardLevelListener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PvZ1FinishAllHardLevelListener,void(PvZ1FinishAllHardLevelListener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<GeneralKillEliteZombieListener, void
   (GeneralKillEliteZombieListener::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<GeneralKillEliteZombieListener, void
   (GeneralKillEliteZombieListener::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<GeneralKillEliteZombieListener,void(GeneralKillEliteZombieListener::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,GeneralKillEliteZombieListener,void(GeneralKillEliteZombieListener::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PvZ1FinishHardLevelOlnyPvZ1Listener, void
   (PvZ1FinishHardLevelOlnyPvZ1Listener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<PvZ1FinishHardLevelOlnyPvZ1Listener, void
   (PvZ1FinishHardLevelOlnyPvZ1Listener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<PvZ1FinishHardLevelOlnyPvZ1Listener,void(PvZ1FinishHardLevelOlnyPvZ1Listener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PvZ1FinishHardLevelOlnyPvZ1Listener,void(PvZ1FinishHardLevelOlnyPvZ1Listener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PvZ1FinishAllThemeLevelListener, void
   (PvZ1FinishAllThemeLevelListener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<PvZ1FinishAllThemeLevelListener, void
   (PvZ1FinishAllThemeLevelListener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<PvZ1FinishAllThemeLevelListener,void(PvZ1FinishAllThemeLevelListener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PvZ1FinishAllThemeLevelListener,void(PvZ1FinishAllThemeLevelListener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, BoardEntity*>::Delegate2<GeneralMagnetShroomEffectListener, void
   (GeneralMagnetShroomEffectListener::*)(Plant*,
   BoardEntity*)>(Sexy::CBMemberTranslatorX<GeneralMagnetShroomEffectListener, void
   (GeneralMagnetShroomEffectListener::*)(Plant*, BoardEntity*)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,BoardEntity*>::
Delegate2<GeneralMagnetShroomEffectListener,void(GeneralMagnetShroomEffectListener::*)(Plant*,BoardEntity*)>
          (Delegate2<Plant*,BoardEntity*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067117d0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,BoardEntity*,GeneralMagnetShroomEffectListener,void(GeneralMagnetShroomEffectListener::*)(Plant*,BoardEntity*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<GeneralPlantKillZombieListener, void
   (GeneralPlantKillZombieListener::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<GeneralPlantKillZombieListener, void
   (GeneralPlantKillZombieListener::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<GeneralPlantKillZombieListener,void(GeneralPlantKillZombieListener::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,GeneralPlantKillZombieListener,void(GeneralPlantKillZombieListener::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, Zombie*>::Delegate2<GeneralPlantHypnoZombieListener, void
   (GeneralPlantHypnoZombieListener::*)(Plant*,
   Zombie*)>(Sexy::CBMemberTranslatorX<GeneralPlantHypnoZombieListener, void
   (GeneralPlantHypnoZombieListener::*)(Plant*, Zombie*)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,Zombie*>::
Delegate2<GeneralPlantHypnoZombieListener,void(GeneralPlantHypnoZombieListener::*)(Plant*,Zombie*)>
          (Delegate2<Plant*,Zombie*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067117f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,Zombie*,GeneralPlantHypnoZombieListener,void(GeneralPlantHypnoZombieListener::*)(Plant*,Zombie*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PvZ1FinishLevelListener, void
   (PvZ1FinishLevelListener::*)(int, bool)>(Sexy::CBMemberTranslatorX<PvZ1FinishLevelListener, void
   (PvZ1FinishLevelListener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<PvZ1FinishLevelListener,void(PvZ1FinishLevelListener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PvZ1FinishLevelListener,void(PvZ1FinishLevelListener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PvZ1FinishHardLevelListener, void
   (PvZ1FinishHardLevelListener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<PvZ1FinishHardLevelListener, void
   (PvZ1FinishHardLevelListener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<PvZ1FinishHardLevelListener,void(PvZ1FinishHardLevelListener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PvZ1FinishHardLevelListener,void(PvZ1FinishHardLevelListener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<GeneralTaskAnyGachaListener, void
   (GeneralTaskAnyGachaListener::*)(int,
   int)>(Sexy::CBMemberTranslatorX<GeneralTaskAnyGachaListener, void
   (GeneralTaskAnyGachaListener::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<GeneralTaskAnyGachaListener,void(GeneralTaskAnyGachaListener::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,GeneralTaskAnyGachaListener,void(GeneralTaskAnyGachaListener::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<GeneralTaskFightZodiacListener, void
   (GeneralTaskFightZodiacListener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<GeneralTaskFightZodiacListener, void
   (GeneralTaskFightZodiacListener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<GeneralTaskFightZodiacListener,void(GeneralTaskFightZodiacListener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,GeneralTaskFightZodiacListener,void(GeneralTaskFightZodiacListener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<GeneralTaskChangeMaterialListener, void
   (GeneralTaskChangeMaterialListener::*)(int,
   int)>(Sexy::CBMemberTranslatorX<GeneralTaskChangeMaterialListener, void
   (GeneralTaskChangeMaterialListener::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<GeneralTaskChangeMaterialListener,void(GeneralTaskChangeMaterialListener::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,GeneralTaskChangeMaterialListener,void(GeneralTaskChangeMaterialListener::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<PvZ1BeatEliteZombieListener, void
   (PvZ1BeatEliteZombieListener::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<PvZ1BeatEliteZombieListener, void
   (PvZ1BeatEliteZombieListener::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<PvZ1BeatEliteZombieListener,void(PvZ1BeatEliteZombieListener::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,PvZ1BeatEliteZombieListener,void(PvZ1BeatEliteZombieListener::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PvZ1FinishWithBeatEliteAndLostPlantsListener, void
   (PvZ1FinishWithBeatEliteAndLostPlantsListener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<PvZ1FinishWithBeatEliteAndLostPlantsListener, void
   (PvZ1FinishWithBeatEliteAndLostPlantsListener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<PvZ1FinishWithBeatEliteAndLostPlantsListener,void(PvZ1FinishWithBeatEliteAndLostPlantsListener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PvZ1FinishWithBeatEliteAndLostPlantsListener,void(PvZ1FinishWithBeatEliteAndLostPlantsListener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PvZ1FinishNormalDifferentThemeListener, void
   (PvZ1FinishNormalDifferentThemeListener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<PvZ1FinishNormalDifferentThemeListener, void
   (PvZ1FinishNormalDifferentThemeListener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<PvZ1FinishNormalDifferentThemeListener,void(PvZ1FinishNormalDifferentThemeListener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PvZ1FinishNormalDifferentThemeListener,void(PvZ1FinishNormalDifferentThemeListener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PvZ1PassAllHardEliteListener, void
   (PvZ1PassAllHardEliteListener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<PvZ1PassAllHardEliteListener, void
   (PvZ1PassAllHardEliteListener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<PvZ1PassAllHardEliteListener,void(PvZ1PassAllHardEliteListener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PvZ1PassAllHardEliteListener,void(PvZ1PassAllHardEliteListener::*)(int,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<NewPVPAddPlantListener, void
   (NewPVPAddPlantListener::*)(int, int)>(Sexy::CBMemberTranslatorX<NewPVPAddPlantListener, void
   (NewPVPAddPlantListener::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<NewPVPAddPlantListener,void(NewPVPAddPlantListener::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,NewPVPAddPlantListener,void(NewPVPAddPlantListener::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<NewPVPKillZombieListener, void
   (NewPVPKillZombieListener::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<NewPVPKillZombieListener, void
   (NewPVPKillZombieListener::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<NewPVPKillZombieListener,void(NewPVPKillZombieListener::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,NewPVPKillZombieListener,void(NewPVPKillZombieListener::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<GeneralTaskPassPennyOrPvZ1LevelListener, void
   (GeneralTaskPassPennyOrPvZ1LevelListener::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<GeneralTaskPassPennyOrPvZ1LevelListener, void
   (GeneralTaskPassPennyOrPvZ1LevelListener::*)(int, bool)> const&) */

void __thiscall
Sexy::Delegate2<int,bool>::
Delegate2<GeneralTaskPassPennyOrPvZ1LevelListener,void(GeneralTaskPassPennyOrPvZ1LevelListener::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,GeneralTaskPassPennyOrPvZ1LevelListener,void(GeneralTaskPassPennyOrPvZ1LevelListener::*)(int,bool)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,bool>::Invoke
          (Delegate2<int,bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = RtInvokeVariant::Get<int>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar2,bVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Plant*, Zombie*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<Plant*,Zombie*>::Invoke
          (Delegate2<Plant*,Zombie*> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  Plant *pPVar1;
  Zombie *pZVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<Plant*>(param_2);
  pZVar2 = RtInvokeVariant::Get<Zombie*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pZVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Plant*, BoardEntity*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<Plant*,BoardEntity*>::Invoke
          (Delegate2<Plant*,BoardEntity*> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  Plant *pPVar1;
  BoardEntity *pBVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<Plant*>(param_2);
  pBVar2 = RtInvokeVariant::Get<BoardEntity*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pBVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UIRenaissanceChallenge, void
   (UIRenaissanceChallenge::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<UIRenaissanceChallenge, void (UIRenaissanceChallenge::*)(bool,
   S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UIRenaissanceChallenge,void(UIRenaissanceChallenge::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UIRenaissanceChallenge,void(UIRenaissanceChallenge::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UIRenaissanceChallengeNew, void
   (UIRenaissanceChallengeNew::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<UIRenaissanceChallengeNew, void
   (UIRenaissanceChallengeNew::*)(bool, S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UIRenaissanceChallengeNew,void(UIRenaissanceChallengeNew::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UIRenaissanceChallengeNew,void(UIRenaissanceChallengeNew::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<RenaissanceChallengeNewManager, void (RenaissanceChallengeNewManager::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<RenaissanceChallengeNewManager, void
   (RenaissanceChallengeNewManager::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<RenaissanceChallengeNewManager,void(RenaissanceChallengeNewManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,RenaissanceChallengeNewManager,void(RenaissanceChallengeNewManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UITheaterShop, void
   (UITheaterShop::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UITheaterShop, void
   (UITheaterShop::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UITheaterShop,void(UITheaterShop::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UITheaterShop,void(UITheaterShop::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_BillingReward const*>::Delegate2<UITheaterDiceShop, void
   (UITheaterDiceShop::*)(bool, S2C_BillingReward
   const*)>(Sexy::CBMemberTranslatorX<UITheaterDiceShop, void (UITheaterDiceShop::*)(bool,
   S2C_BillingReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_BillingReward_const*>::
Delegate2<UITheaterDiceShop,void(UITheaterDiceShop::*)(bool,S2C_BillingReward_const*)>
          (Delegate2<bool,S2C_BillingReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066f8f30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_BillingReward_const*,UITheaterDiceShop,void(UITheaterDiceShop::*)(bool,S2C_BillingReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UITheaterShop, void
   (UITheaterShop::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<UITheaterShop, void (UITheaterShop::*)(bool,
   S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UITheaterShop,void(UITheaterShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UITheaterShop,void(UITheaterShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UITheaterShop, void (UITheaterShop::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UITheaterShop, void
   (UITheaterShop::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UITheaterShop,void(UITheaterShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UITheaterShop,void(UITheaterShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UILuckBag, void (UILuckBag::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UILuckBag, void (UILuckBag::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::Delegate2<UILuckBag,void(UILuckBag::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UILuckBag,void(UILuckBag::*)(UIMessageBox*,int)>::thunk
  ;
  return;
}


/* Sexy::Delegate2<bool, S2C_BillingReward const*>::Delegate2<UILuckBag, void (UILuckBag::*)(bool,
   S2C_BillingReward const*)>(Sexy::CBMemberTranslatorX<UILuckBag, void (UILuckBag::*)(bool,
   S2C_BillingReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_BillingReward_const*>::
Delegate2<UILuckBag,void(UILuckBag::*)(bool,S2C_BillingReward_const*)>
          (Delegate2<bool,S2C_BillingReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066f8f30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_BillingReward_const*,UILuckBag,void(UILuckBag::*)(bool,S2C_BillingReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<FestivalEventUI, void (FestivalEventUI::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<FestivalEventUI, void
   (FestivalEventUI::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<FestivalEventUI,void(FestivalEventUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,FestivalEventUI,void(FestivalEventUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<RechargeWelfareUI, void (RechargeWelfareUI::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<RechargeWelfareUI, void
   (RechargeWelfareUI::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<RechargeWelfareUI,void(RechargeWelfareUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,RechargeWelfareUI,void(RechargeWelfareUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<FestivalGamePageMiniGame, void (FestivalGamePageMiniGame::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<FestivalGamePageMiniGame, void
   (FestivalGamePageMiniGame::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<FestivalGamePageMiniGame,void(FestivalGamePageMiniGame::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,FestivalGamePageMiniGame,void(FestivalGamePageMiniGame::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<FestivalGamePageFightZodiac, void (FestivalGamePageFightZodiac::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<FestivalGamePageFightZodiac, void
   (FestivalGamePageFightZodiac::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<FestivalGamePageFightZodiac,void(FestivalGamePageFightZodiac::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,FestivalGamePageFightZodiac,void(FestivalGamePageFightZodiac::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<FestivalGamePageBattleOrder, void (FestivalGamePageBattleOrder::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<FestivalGamePageBattleOrder, void
   (FestivalGamePageBattleOrder::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<FestivalGamePageBattleOrder,void(FestivalGamePageBattleOrder::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,FestivalGamePageBattleOrder,void(FestivalGamePageBattleOrder::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<FestivalGamePageLimitedSummon, void (FestivalGamePageLimitedSummon::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<FestivalGamePageLimitedSummon, void
   (FestivalGamePageLimitedSummon::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<FestivalGamePageLimitedSummon,void(FestivalGamePageLimitedSummon::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,FestivalGamePageLimitedSummon,void(FestivalGamePageLimitedSummon::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<FestivalGamePageCarnival, void (FestivalGamePageCarnival::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<FestivalGamePageCarnival, void
   (FestivalGamePageCarnival::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<FestivalGamePageCarnival,void(FestivalGamePageCarnival::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,FestivalGamePageCarnival,void(FestivalGamePageCarnival::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<FestivalGamePageNewYearGoods, void (FestivalGamePageNewYearGoods::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<FestivalGamePageNewYearGoods, void
   (FestivalGamePageNewYearGoods::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<FestivalGamePageNewYearGoods,void(FestivalGamePageNewYearGoods::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,FestivalGamePageNewYearGoods,void(FestivalGamePageNewYearGoods::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_PiggyBankReward const*>::Delegate2<ConsumeAndReceivePage, void
   (ConsumeAndReceivePage::*)(bool, S2C_PiggyBankReward
   const*)>(Sexy::CBMemberTranslatorX<ConsumeAndReceivePage, void (ConsumeAndReceivePage::*)(bool,
   S2C_PiggyBankReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_PiggyBankReward_const*>::
Delegate2<ConsumeAndReceivePage,void(ConsumeAndReceivePage::*)(bool,S2C_PiggyBankReward_const*)>
          (Delegate2<bool,S2C_PiggyBankReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06723370;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_PiggyBankReward_const*,ConsumeAndReceivePage,void(ConsumeAndReceivePage::*)(bool,S2C_PiggyBankReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<CustomVotingPage, void (CustomVotingPage::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<CustomVotingPage, void
   (CustomVotingPage::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<CustomVotingPage,void(CustomVotingPage::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,CustomVotingPage,void(CustomVotingPage::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<GenericFestivalPage, void (GenericFestivalPage::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<GenericFestivalPage,
   void (GenericFestivalPage::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<GenericFestivalPage,void(GenericFestivalPage::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,GenericFestivalPage,void(GenericFestivalPage::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<GoldenEggPage, void (GoldenEggPage::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<GoldenEggPage, void
   (GoldenEggPage::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<GoldenEggPage,void(GoldenEggPage::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,GoldenEggPage,void(GoldenEggPage::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_PiggyBankReward const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_PiggyBankReward_const*>::Invoke
          (Delegate2<bool,S2C_PiggyBankReward_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_PiggyBankReward *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_PiggyBankReward_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_AcFirstRechargeButton, void (WorldMap_AcFirstRechargeButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_AcFirstRechargeButton, void
   (WorldMap_AcFirstRechargeButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_AcFirstRechargeButton,void(WorldMap_AcFirstRechargeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_AcFirstRechargeButton,void(WorldMap_AcFirstRechargeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<HatMushroomTransportSubSystem, void
   (HatMushroomTransportSubSystem::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<HatMushroomTransportSubSystem, void
   (HatMushroomTransportSubSystem::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<HatMushroomTransportSubSystem,void(HatMushroomTransportSubSystem::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,HatMushroomTransportSubSystem,void(HatMushroomTransportSubSystem::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<IdentifierMgr, void (IdentifierMgr::*)(int,
   std::string const&)>(Sexy::CBMemberTranslatorX<IdentifierMgr, void (IdentifierMgr::*)(int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<IdentifierMgr,void(IdentifierMgr::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,IdentifierMgr,void(IdentifierMgr::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<BasePowerup*, Sexy::RtSerialCommand*>::Delegate2<void (*)(BasePowerup*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(BasePowerup*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<BasePowerup*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(BasePowerup*,Sexy::RtSerialCommand*)>
          (Delegate2<BasePowerup*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06734100;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<BasePowerup*,Sexy::RtSerialCommand*,void(*)(BasePowerup*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<BasePowerup*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<BasePowerup*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<BasePowerup*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  BasePowerup *pBVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = RtInvokeVariant::Get<BasePowerup*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pBVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<BoardEntity*, Sexy::RtSerialCommand*>::Delegate2<void (*)(BoardEntity*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(BoardEntity*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<BoardEntity*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(BoardEntity*,Sexy::RtSerialCommand*)>
          (Delegate2<BoardEntity*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06734b70;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<BoardEntity*,Sexy::RtSerialCommand*,void(*)(BoardEntity*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<BoardEntity*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<BoardEntity*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<BoardEntity*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  BoardEntity *pBVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = RtInvokeVariant::Get<BoardEntity*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pBVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Bomb*, Sexy::RtSerialCommand*>::Delegate2<void (*)(Bomb*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(Bomb*, Sexy::RtSerialCommand*)>
   const&) */

void __thiscall
Sexy::Delegate2<Bomb*,Sexy::RtSerialCommand*>::Delegate2<void(*)(Bomb*,Sexy::RtSerialCommand*)>
          (Delegate2<Bomb*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06736cc0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Bomb*,Sexy::RtSerialCommand*,void(*)(Bomb*,Sexy::RtSerialCommand*)>::
       thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Bomb*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Bomb*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<Bomb*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Bomb *pBVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = RtInvokeVariant::Get<Bomb*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pBVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, int>::Delegate2<BeghouledModule, void (BeghouledModule::*)(int,
   int)>(Sexy::CBMemberTranslatorX<BeghouledModule, void (BeghouledModule::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<BeghouledModule,void(BeghouledModule::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,BeghouledModule,void(BeghouledModule::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<CannonMinigameModule, void
   (CannonMinigameModule::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<CannonMinigameModule, void (CannonMinigameModule::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<CannonMinigameModule,void(CannonMinigameModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,CannonMinigameModule,void(CannonMinigameModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<GridItemDuskSeed, void
   (GridItemDuskSeed::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<GridItemDuskSeed,
   void (GridItemDuskSeed::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<GridItemDuskSeed,void(GridItemDuskSeed::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,GridItemDuskSeed,void(GridItemDuskSeed::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<PlantStatefulFramework*, Sexy::RtSerialCommand*>::Delegate2<void
   (*)(PlantStatefulFramework*, Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void
   (*)(PlantStatefulFramework*, Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<PlantStatefulFramework*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(PlantStatefulFramework*,Sexy::RtSerialCommand*)>
          (Delegate2<PlantStatefulFramework*,Sexy::RtSerialCommand*> *this,
          CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0673e960;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<PlantStatefulFramework*,Sexy::RtSerialCommand*,void(*)(PlantStatefulFramework*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, std::string const&>::Delegate2<PlantStatefulFramework, void
   (PlantStatefulFramework::*)(std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<PlantStatefulFramework, void
   (PlantStatefulFramework::*)(std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,std::string_const&>::
Delegate2<PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
          (Delegate2<std::string_const&,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0673e9a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,std::string_const&,PlantStatefulFramework,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, std::string
   const&>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<std::string_const&,std::string_const&>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_0673e9a0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::string const&, std::string const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<std::string_const&,std::string_const&>::Invoke
          (Delegate2<std::string_const&,std::string_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  string *psVar1;
  string *psVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = RtInvokeVariant::Get<std::string_const&>(param_2);
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,psVar1,psVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PlantStatefulFramework*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<PlantStatefulFramework*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<PlantStatefulFramework*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  PlantStatefulFramework *pPVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<PlantStatefulFramework*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<std::string const&, std::string const&>::Delegate2<PlantGrimrose, void
   (PlantGrimrose::*)(std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<PlantGrimrose, void (PlantGrimrose::*)(std::string const&,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,std::string_const&>::
Delegate2<PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
          (Delegate2<std::string_const&,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0673e9a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,std::string_const&,PlantGrimrose,void(PlantGrimrose::*)(std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<MissileToeTutorialModule, void
   (MissileToeTutorialModule::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<MissileToeTutorialModule, void
   (MissileToeTutorialModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<MissileToeTutorialModule,void(MissileToeTutorialModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,MissileToeTutorialModule,void(MissileToeTutorialModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<GameObject*, float>::Delegate2<ZombossSteamRushActionHandler, void
   (ZombossSteamRushActionHandler::*)(GameObject*,
   float)>(Sexy::CBMemberTranslatorX<ZombossSteamRushActionHandler, void
   (ZombossSteamRushActionHandler::*)(GameObject*, float)> const&) */

void __thiscall
Sexy::Delegate2<GameObject*,float>::
Delegate2<ZombossSteamRushActionHandler,void(ZombossSteamRushActionHandler::*)(GameObject*,float)>
          (Delegate2<GameObject*,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06753310;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<GameObject*,float,ZombossSteamRushActionHandler,void(ZombossSteamRushActionHandler::*)(GameObject*,float)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<GameObject*, float>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<GameObject*,float>::Invoke
          (Delegate2<GameObject*,float> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  GameObject *pGVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = RtInvokeVariant::Get<GameObject*>(param_2);
  RtInvokeVariant::Get<float>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pGVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Collectable*, Sexy::RtSerialCommand*>::Delegate2<void (*)(Collectable*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(Collectable*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<Collectable*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(Collectable*,Sexy::RtSerialCommand*)>
          (Delegate2<Collectable*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06754510;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Collectable*,Sexy::RtSerialCommand*,void(*)(Collectable*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Collectable*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Collectable*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<Collectable*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Collectable *pCVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = RtInvokeVariant::Get<Collectable*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pCVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, WaveDefinition const*>::Delegate2<ConveyorSeedBank, void
   (ConveyorSeedBank::*)(int, WaveDefinition const*)>(Sexy::CBMemberTranslatorX<ConveyorSeedBank,
   void (ConveyorSeedBank::*)(int, WaveDefinition const*)> const&) */

void __thiscall
Sexy::Delegate2<int,WaveDefinition_const*>::
Delegate2<ConveyorSeedBank,void(ConveyorSeedBank::*)(int,WaveDefinition_const*)>
          (Delegate2<int,WaveDefinition_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675a280;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,WaveDefinition_const*,ConveyorSeedBank,void(ConveyorSeedBank::*)(int,WaveDefinition_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::vector<std::string, std::allocator<std::string > > const&,
   float>::Delegate2<ConveyorSeedBank, void (ConveyorSeedBank::*)(std::vector<std::string,
   std::allocator<std::string > > const&, float)>(Sexy::CBMemberTranslatorX<ConveyorSeedBank, void
   (ConveyorSeedBank::*)(std::vector<std::string, std::allocator<std::string > > const&, float)>
   const&) */

void __thiscall
Sexy::Delegate2<std::vector<std::string,std::allocator<std::string>>const&,float>::
Delegate2<ConveyorSeedBank,void(ConveyorSeedBank::*)(std::vector<std::string,std::allocator<std::string>>const&,float)>
          (Delegate2<std::vector<std::string,std::allocator<std::string>>const&,float> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675a320;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::vector<std::string,std::allocator<std::string>>const&,float,ConveyorSeedBank,void(ConveyorSeedBank::*)(std::vector<std::string,std::allocator<std::string>>const&,float)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::vector<std::string, std::allocator<std::string > > const&,
   float>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<std::vector<std::string,std::allocator<std::string>>const&,float>::Invoke
          (Delegate2<std::vector<std::string,std::allocator<std::string>>const&,float> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  vector *pvVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = RtInvokeVariant::Get<std::vector<std::string,std::allocator<std::string>>const&>(param_2)
  ;
  RtInvokeVariant::Get<float>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pvVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, WaveDefinition const*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<int,WaveDefinition_const*>::Invoke
          (Delegate2<int,WaveDefinition_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  WaveDefinition *pWVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pWVar2 = RtInvokeVariant::Get<WaveDefinition_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pWVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<CowboyMinigameModule, void
   (CowboyMinigameModule::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<CowboyMinigameModule, void (CowboyMinigameModule::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<CowboyMinigameModule,void(CowboyMinigameModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,CowboyMinigameModule,void(CowboyMinigameModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<CrazyOlafTest, void
   (CrazyOlafTest::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<CrazyOlafTest, void
   (CrazyOlafTest::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<CrazyOlafTest,void(CrazyOlafTest::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,CrazyOlafTest,void(CrazyOlafTest::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<DangerRoomState, StateAction>::Delegate2<DangerRoomModule, void
   (DangerRoomModule::*)(DangerRoomState, StateAction)>(Sexy::CBMemberTranslatorX<DangerRoomModule,
   void (DangerRoomModule::*)(DangerRoomState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<DangerRoomState,StateAction>::
Delegate2<DangerRoomModule,void(DangerRoomModule::*)(DangerRoomState,StateAction)>
          (Delegate2<DangerRoomState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675bae0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<DangerRoomState,StateAction,DangerRoomModule,void(DangerRoomModule::*)(DangerRoomState,StateAction)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<DangerRoomModule, void
   (DangerRoomModule::*)(int, std::string const&)>(Sexy::CBMemberTranslatorX<DangerRoomModule, void
   (DangerRoomModule::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<DangerRoomModule,void(DangerRoomModule::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,DangerRoomModule,void(DangerRoomModule::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_DangerRoomEndLevel const*>::Delegate2<DangerRoomModule, void
   (DangerRoomModule::*)(int, S2C_DangerRoomEndLevel
   const*)>(Sexy::CBMemberTranslatorX<DangerRoomModule, void (DangerRoomModule::*)(int,
   S2C_DangerRoomEndLevel const*)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_DangerRoomEndLevel_const*>::
Delegate2<DangerRoomModule,void(DangerRoomModule::*)(int,S2C_DangerRoomEndLevel_const*)>
          (Delegate2<int,S2C_DangerRoomEndLevel_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675bb40;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_DangerRoomEndLevel_const*,DangerRoomModule,void(DangerRoomModule::*)(int,S2C_DangerRoomEndLevel_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, S2C_DangerRoomEndLevel const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,S2C_DangerRoomEndLevel_const*>::Invoke
          (Delegate2<int,S2C_DangerRoomEndLevel_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  S2C_DangerRoomEndLevel *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_DangerRoomEndLevel_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<DangerRoomState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<DangerRoomState,StateAction>::Invoke
          (Delegate2<DangerRoomState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<DangerRoomState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<FiregourdTutorialIntro*, Sexy::RtSerialCommand*>::Delegate2<void
   (*)(FiregourdTutorialIntro*, Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void
   (*)(FiregourdTutorialIntro*, Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<FiregourdTutorialIntro*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(FiregourdTutorialIntro*,Sexy::RtSerialCommand*)>
          (Delegate2<FiregourdTutorialIntro*,Sexy::RtSerialCommand*> *this,
          CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06761000;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<FiregourdTutorialIntro*,Sexy::RtSerialCommand*,void(*)(FiregourdTutorialIntro*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<FiregourdTutorialIntro*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<FiregourdTutorialIntro*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<FiregourdTutorialIntro*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  FiregourdTutorialIntro *pFVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = RtInvokeVariant::Get<FiregourdTutorialIntro*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pFVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Fuse*, Sexy::RtSerialCommand*>::Delegate2<void (*)(Fuse*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(Fuse*, Sexy::RtSerialCommand*)>
   const&) */

void __thiscall
Sexy::Delegate2<Fuse*,Sexy::RtSerialCommand*>::Delegate2<void(*)(Fuse*,Sexy::RtSerialCommand*)>
          (Delegate2<Fuse*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06761330;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Fuse*,Sexy::RtSerialCommand*,void(*)(Fuse*,Sexy::RtSerialCommand*)>::
       thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Fuse*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Fuse*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<Fuse*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Fuse *pFVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = RtInvokeVariant::Get<Fuse*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pFVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<FutureStage, void
   (FutureStage::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<FutureStage, void
   (FutureStage::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<FutureStage,void(FutureStage::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,FutureStage,void(FutureStage::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<float, float>::Delegate2<StatueMazeModule, void (StatueMazeModule::*)(float,
   float)>(Sexy::CBMemberTranslatorX<StatueMazeModule, void (StatueMazeModule::*)(float, float)>
   const&) */

void __thiscall
Sexy::Delegate2<float,float>::Delegate2<StatueMazeModule,void(StatueMazeModule::*)(float,float)>
          (Delegate2<float,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06764dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<float,float,StatueMazeModule,void(StatueMazeModule::*)(float,float)>::
       thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<float, float>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::Delegate2<float,float>::Invoke
          (Delegate2<float,float> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = RtInvokeVariant::Get<float>(param_2);
  fVar2 = RtInvokeVariant::Get<float>(param_2 + 0x10);
  (**(code **)(this + 0x28))(fVar1,fVar2,this);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, int>::Delegate2<GameStateMgr, void (GameStateMgr::*)(int,
   int)>(Sexy::CBMemberTranslatorX<GameStateMgr, void (GameStateMgr::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<GameStateMgr,void(GameStateMgr::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,GameStateMgr,void(GameStateMgr::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, int*>::Delegate2<PowerTileSubsystem, void
   (PowerTileSubsystem::*)(std::string const&, int*)>(Sexy::CBMemberTranslatorX<PowerTileSubsystem,
   void (PowerTileSubsystem::*)(std::string const&, int*)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,int*>::
Delegate2<PowerTileSubsystem,void(PowerTileSubsystem::*)(std::string_const&,int*)>
          (Delegate2<std::string_const&,int*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0676b1f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,int*,PowerTileSubsystem,void(PowerTileSubsystem::*)(std::string_const&,int*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::string const&, int*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<std::string_const&,int*>::Invoke
          (Delegate2<std::string_const&,int*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  string *psVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = RtInvokeVariant::Get<std::string_const&>(param_2);
  piVar2 = RtInvokeVariant::Get<int*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,psVar1,piVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo
   const*>::Delegate2<GridItemCardGameGravestoneZombieDeathSpawner, void
   (GridItemCardGameGravestoneZombieDeathSpawner::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<GridItemCardGameGravestoneZombieDeathSpawner, void
   (GridItemCardGameGravestoneZombieDeathSpawner::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<GridItemCardGameGravestoneZombieDeathSpawner,void(GridItemCardGameGravestoneZombieDeathSpawner::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,GridItemCardGameGravestoneZombieDeathSpawner,void(GridItemCardGameGravestoneZombieDeathSpawner::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<GridItemZombiePortal, void
   (GridItemZombiePortal::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<GridItemZombiePortal, void (GridItemZombiePortal::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<GridItemZombiePortal,void(GridItemZombiePortal::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,GridItemZombiePortal,void(GridItemZombiePortal::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<GridItemZombossPortal, void
   (GridItemZombossPortal::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<GridItemZombossPortal, void
   (GridItemZombossPortal::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<GridItemZombossPortal,void(GridItemZombossPortal::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,GridItemZombossPortal,void(GridItemZombossPortal::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<NostalgiaMainView, void (NostalgiaMainView::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<NostalgiaMainView, void
   (NostalgiaMainView::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<NostalgiaMainView,void(NostalgiaMainView::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,NostalgiaMainView,void(NostalgiaMainView::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIRedPacket, void (UIRedPacket::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UIRedPacket, void (UIRedPacket::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIRedPacket,void(UIRedPacket::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIRedPacket,void(UIRedPacket::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<UIRedPacket, void (UIRedPacket::*)(int,
   std::string const&)>(Sexy::CBMemberTranslatorX<UIRedPacket, void (UIRedPacket::*)(int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<UIRedPacket,void(UIRedPacket::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,UIRedPacket,void(UIRedPacket::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<void (*)(int, std::string
   const&)>(Sexy::CBFunctionTranslatorX<void (*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::Delegate2<void(*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<int,std::string_const&,void(*)(int,std::string_const&)>::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UIMysteryStore, void
   (UIMysteryStore::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<UIMysteryStore, void (UIMysteryStore::*)(bool,
   S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UIMysteryStore,void(UIMysteryStore::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UIMysteryStore,void(UIMysteryStore::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<SecretStoreMgr, void (SecretStoreMgr::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<SecretStoreMgr, void
   (SecretStoreMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<SecretStoreMgr,void(SecretStoreMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,SecretStoreMgr,void(SecretStoreMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<NewerPresentMgr, void (NewerPresentMgr::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<NewerPresentMgr, void
   (NewerPresentMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<NewerPresentMgr,void(NewerPresentMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,NewerPresentMgr,void(NewerPresentMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ArtifactPresentMgr, void (ArtifactPresentMgr::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<ArtifactPresentMgr, void
   (ArtifactPresentMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ArtifactPresentMgr,void(ArtifactPresentMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ArtifactPresentMgr,void(ArtifactPresentMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIUnchartedFestivalReward, void
   (UIUnchartedFestivalReward::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UIUnchartedFestivalReward, void
   (UIUnchartedFestivalReward::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIUnchartedFestivalReward,void(UIUnchartedFestivalReward::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIUnchartedFestivalReward,void(UIUnchartedFestivalReward::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UnchartedFestivalRewardItemWidget, void
   (UnchartedFestivalRewardItemWidget::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UnchartedFestivalRewardItemWidget, void
   (UnchartedFestivalRewardItemWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UnchartedFestivalRewardItemWidget,void(UnchartedFestivalRewardItemWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UnchartedFestivalRewardItemWidget,void(UnchartedFestivalRewardItemWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, New_S2C_BuySecretAreaReward const*>::Delegate2<SecretAreaRewardMgr, void
   (SecretAreaRewardMgr::*)(bool, New_S2C_BuySecretAreaReward
   const*)>(Sexy::CBMemberTranslatorX<SecretAreaRewardMgr, void (SecretAreaRewardMgr::*)(bool,
   New_S2C_BuySecretAreaReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,New_S2C_BuySecretAreaReward_const*>::
Delegate2<SecretAreaRewardMgr,void(SecretAreaRewardMgr::*)(bool,New_S2C_BuySecretAreaReward_const*)>
          (Delegate2<bool,New_S2C_BuySecretAreaReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0677d580;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,New_S2C_BuySecretAreaReward_const*,SecretAreaRewardMgr,void(SecretAreaRewardMgr::*)(bool,New_S2C_BuySecretAreaReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIUnchartedFestivalReward, void (UIUnchartedFestivalReward::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<UIUnchartedFestivalReward, void
   (UIUnchartedFestivalReward::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIUnchartedFestivalReward,void(UIUnchartedFestivalReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIUnchartedFestivalReward,void(UIUnchartedFestivalReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, New_S2C_BuySecretAreaReward const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,New_S2C_BuySecretAreaReward_const*>::Invoke
          (Delegate2<bool,New_S2C_BuySecretAreaReward_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  New_S2C_BuySecretAreaReward *pNVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pNVar2 = RtInvokeVariant::Get<New_S2C_BuySecretAreaReward_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pNVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<BronzeModule, void
   (BronzeModule::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<BronzeModule, void
   (BronzeModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<BronzeModule,void(BronzeModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,BronzeModule,void(BronzeModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<SecretGachaMgr, void (SecretGachaMgr::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<SecretGachaMgr, void
   (SecretGachaMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<SecretGachaMgr,void(SecretGachaMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,SecretGachaMgr,void(SecretGachaMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<SecretGachaMgr, void (SecretGachaMgr::*)(int,
   std::string const&)>(Sexy::CBMemberTranslatorX<SecretGachaMgr, void (SecretGachaMgr::*)(int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<SecretGachaMgr,void(SecretGachaMgr::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,SecretGachaMgr,void(SecretGachaMgr::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<GachaMgr, void (GachaMgr::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<GachaMgr, void (GachaMgr::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<GachaMgr,void(GachaMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,GachaMgr,void(GachaMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<GachaMgr, void (GachaMgr::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<GachaMgr, void (GachaMgr::*)(int, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<GachaMgr,void(GachaMgr::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,GachaMgr,void(GachaMgr::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<MagnifyingGrassTutorialIntro, void
   (MagnifyingGrassTutorialIntro::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<MagnifyingGrassTutorialIntro, void
   (MagnifyingGrassTutorialIntro::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<MagnifyingGrassTutorialIntro,void(MagnifyingGrassTutorialIntro::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,MagnifyingGrassTutorialIntro,void(MagnifyingGrassTutorialIntro::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<OakTrainIntro, void
   (OakTrainIntro::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<OakTrainIntro, void
   (OakTrainIntro::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<OakTrainIntro,void(OakTrainIntro::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,OakTrainIntro,void(OakTrainIntro::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<TowerDefendIntro*, Sexy::RtSerialCommand*>::Delegate2<void (*)(TowerDefendIntro*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(TowerDefendIntro*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<TowerDefendIntro*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(TowerDefendIntro*,Sexy::RtSerialCommand*)>
          (Delegate2<TowerDefendIntro*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0678b9e0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<TowerDefendIntro*,Sexy::RtSerialCommand*,void(*)(TowerDefendIntro*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<TowerDefendIntro*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<TowerDefendIntro*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<TowerDefendIntro*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  TowerDefendIntro *pTVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar1 = RtInvokeVariant::Get<TowerDefendIntro*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pTVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<SeedRainIntro*, Sexy::RtSerialCommand*>::Delegate2<void (*)(SeedRainIntro*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(SeedRainIntro*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<SeedRainIntro*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(SeedRainIntro*,Sexy::RtSerialCommand*)>
          (Delegate2<SeedRainIntro*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0678bec0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<SeedRainIntro*,Sexy::RtSerialCommand*,void(*)(SeedRainIntro*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<SeedRainIntro*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<SeedRainIntro*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<SeedRainIntro*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  SeedRainIntro *pSVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = RtInvokeVariant::Get<SeedRainIntro*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pSVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, int>::Delegate2<EliminateIntro, void (EliminateIntro::*)(int,
   int)>(Sexy::CBMemberTranslatorX<EliminateIntro, void (EliminateIntro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<EliminateIntro,void(EliminateIntro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,EliminateIntro,void(EliminateIntro::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<SkyCityIntro*, Sexy::RtSerialCommand*>::Delegate2<void (*)(SkyCityIntro*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(SkyCityIntro*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<SkyCityIntro*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(SkyCityIntro*,Sexy::RtSerialCommand*)>
          (Delegate2<SkyCityIntro*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0678c3c0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<SkyCityIntro*,Sexy::RtSerialCommand*,void(*)(SkyCityIntro*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<SkyCityIntro*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<SkyCityIntro*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<SkyCityIntro*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  SkyCityIntro *pSVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = RtInvokeVariant::Get<SkyCityIntro*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pSVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<ChristmasProtectIntro*, Sexy::RtSerialCommand*>::Delegate2<void
   (*)(ChristmasProtectIntro*, Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void
   (*)(ChristmasProtectIntro*, Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<ChristmasProtectIntro*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(ChristmasProtectIntro*,Sexy::RtSerialCommand*)>
          (Delegate2<ChristmasProtectIntro*,Sexy::RtSerialCommand*> *this,
          CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0678c640;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<ChristmasProtectIntro*,Sexy::RtSerialCommand*,void(*)(ChristmasProtectIntro*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*>::Delegate2<ChristmasProtectIntro, void (ChristmasProtectIntro::*)(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<ChristmasProtectIntro, void (ChristmasProtectIntro::*)(Sexy::Point
   const&, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>::
Delegate2<ChristmasProtectIntro,void(ChristmasProtectIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695de0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ChristmasProtectIntro,void(ChristmasProtectIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<ChristmasProtectIntro*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<ChristmasProtectIntro*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<ChristmasProtectIntro*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  ChristmasProtectIntro *pCVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = RtInvokeVariant::Get<ChristmasProtectIntro*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pCVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<ThunderIntro*, Sexy::RtSerialCommand*>::Delegate2<void (*)(ThunderIntro*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(ThunderIntro*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<ThunderIntro*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(ThunderIntro*,Sexy::RtSerialCommand*)>
          (Delegate2<ThunderIntro*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0678c8e0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<ThunderIntro*,Sexy::RtSerialCommand*,void(*)(ThunderIntro*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<ThunderIntro*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<ThunderIntro*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<ThunderIntro*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  ThunderIntro *pTVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar1 = RtInvokeVariant::Get<ThunderIntro*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pTVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<PlayerInfo const*, Sexy::MemoryImage*>::Delegate2<EditProfileWidget, void
   (EditProfileWidget::*)(PlayerInfo const*,
   Sexy::MemoryImage*)>(Sexy::CBMemberTranslatorX<EditProfileWidget, void
   (EditProfileWidget::*)(PlayerInfo const*, Sexy::MemoryImage*)> const&) */

void __thiscall
Sexy::Delegate2<PlayerInfo_const*,Sexy::MemoryImage*>::
Delegate2<EditProfileWidget,void(EditProfileWidget::*)(PlayerInfo_const*,Sexy::MemoryImage*)>
          (Delegate2<PlayerInfo_const*,Sexy::MemoryImage*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067920a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<PlayerInfo_const*,Sexy::MemoryImage*,EditProfileWidget,void(EditProfileWidget::*)(PlayerInfo_const*,Sexy::MemoryImage*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PlayerInfo const*, Sexy::MemoryImage*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<PlayerInfo_const*,Sexy::MemoryImage*>::Invoke
          (Delegate2<PlayerInfo_const*,Sexy::MemoryImage*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  PlayerInfo *pPVar1;
  MemoryImage *pMVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<PlayerInfo_const*>(param_2);
  pMVar2 = RtInvokeVariant::Get<Sexy::MemoryImage*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pMVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<CollectableSun*, int>::Delegate2<MetricsCollector, void
   (MetricsCollector::*)(CollectableSun*, int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(CollectableSun*, int)> const&) */

void __thiscall
Sexy::Delegate2<CollectableSun*,int>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(CollectableSun*,int)>
          (Delegate2<CollectableSun*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792710;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<CollectableSun*,int,MetricsCollector,void(MetricsCollector::*)(CollectableSun*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, int>::Delegate2<MetricsCollector, void
   (MetricsCollector::*)(std::string const&, int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(std::string const&, int)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,int>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(std::string_const&,int)>
          (Delegate2<std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792750;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,int,MetricsCollector,void(MetricsCollector::*)(std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, std::string const&>::Delegate2<MetricsCollector, void
   (MetricsCollector::*)(std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(std::string
   const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,std::string_const&>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&)>
          (Delegate2<std::string_const&,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0673e9a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,std::string_const&,MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, DamageInfo&>::Delegate2<MetricsCollector, void
   (MetricsCollector::*)(Plant*, DamageInfo&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(Plant*, DamageInfo&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,DamageInfo&>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(Plant*,DamageInfo&)>
          (Delegate2<Plant*,DamageInfo&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066a7e00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,DamageInfo&,MetricsCollector,void(MetricsCollector::*)(Plant*,DamageInfo&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<MetricsCollector, void (MetricsCollector::*)(int,
   int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(int, int)> const&)
    */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<MetricsCollector,void(MetricsCollector::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,MetricsCollector,void(MetricsCollector::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::RtWeakPtr<MagentoProductProps> const&, int>::Delegate2<MetricsCollector,
   void (MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps> const&,
   int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps> const&, int)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::RtWeakPtr<MagentoProductProps>const&,int>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int)>
          (Delegate2<Sexy::RtWeakPtr<MagentoProductProps>const&,int> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792810;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::RtWeakPtr<MagentoProductProps>const&,int,MetricsCollector,void(MetricsCollector::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<MetricsCollector, void
   (MetricsCollector::*)(int, std::string const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,MetricsCollector,void(MetricsCollector::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<EventMetrics*, int>::Delegate2<MetricsCollector, void
   (MetricsCollector::*)(EventMetrics*, int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(EventMetrics*, int)> const&) */

void __thiscall
Sexy::Delegate2<EventMetrics*,int>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(EventMetrics*,int)>
          (Delegate2<EventMetrics*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792890;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<EventMetrics*,int,MetricsCollector,void(MetricsCollector::*)(EventMetrics*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<MetricsCollector, void (MetricsCollector::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(int, bool)> const&)
    */

void __thiscall
Sexy::Delegate2<int,bool>::Delegate2<MetricsCollector,void(MetricsCollector::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,MetricsCollector,void(MetricsCollector::*)(int,bool)>::thunk;
  return;
}


/* Sexy::Delegate2<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>
   > > const&>::Delegate2<MetricsCollector, void (MetricsCollector::*)(int, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >
   const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(int,
   std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>
::
Delegate2<MetricsCollector,void(MetricsCollector::*)(int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&)>
          (Delegate2<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067928f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,MetricsCollector,void(MetricsCollector::*)(int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<TreasurePool const*, std::vector<TreasureReward const*,
   std::allocator<TreasureReward const*> >&>::Delegate2<MetricsCollector, void
   (MetricsCollector::*)(TreasurePool const*, std::vector<TreasureReward const*,
   std::allocator<TreasureReward const*> >&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(TreasurePool const*, std::vector<TreasureReward const*,
   std::allocator<TreasureReward const*> >&)> const&) */

void __thiscall
Sexy::
Delegate2<TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&>
::
Delegate2<MetricsCollector,void(MetricsCollector::*)(TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&)>
          (Delegate2<TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792930;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&,MetricsCollector,void(MetricsCollector::*)(TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, PlantAdventureLogInfo const&>::Delegate2<MetricsCollector, void
   (MetricsCollector::*)(int, PlantAdventureLogInfo
   const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(int,
   PlantAdventureLogInfo const&)> const&) */

void __thiscall
Sexy::Delegate2<int,PlantAdventureLogInfo_const&>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(int,PlantAdventureLogInfo_const&)>
          (Delegate2<int,PlantAdventureLogInfo_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792a10;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,PlantAdventureLogInfo_const&,MetricsCollector,void(MetricsCollector::*)(int,PlantAdventureLogInfo_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&>::Delegate2<MetricsCollector, void (MetricsCollector::*)(std::string const&,
   std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(std::string
   const&, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > const&)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&)>
          (Delegate2<std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792a30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&,MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >
   const&, int>::Delegate2<MetricsCollector, void (MetricsCollector::*)(std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > > const&,
   int)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > > const&, int)> const&) */

void __thiscall
Sexy::Delegate2<std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int>
::
Delegate2<MetricsCollector,void(MetricsCollector::*)(std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int)>
          (Delegate2<std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792a90;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int,MetricsCollector,void(MetricsCollector::*)(std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::vector<int, std::allocator<int> > const&>::Delegate2<MetricsCollector,
   void (MetricsCollector::*)(int, std::vector<int, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void (MetricsCollector::*)(int,
   std::vector<int, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::vector<int,std::allocator<int>>const&>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(int,std::vector<int,std::allocator<int>>const&)>
          (Delegate2<int,std::vector<int,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792ab0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::vector<int,std::allocator<int>>const&,MetricsCollector,void(MetricsCollector::*)(int,std::vector<int,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, std::vector<int, std::allocator<int> >
   const&>::Delegate2<MetricsCollector, void (MetricsCollector::*)(std::string const&,
   std::vector<int, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(std::string const&, std::vector<int, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<std::string_const&,std::vector<int,std::allocator<int>>const&>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::vector<int,std::allocator<int>>const&)>
          (Delegate2<std::string_const&,std::vector<int,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792ad0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,std::vector<int,std::allocator<int>>const&,MetricsCollector,void(MetricsCollector::*)(std::string_const&,std::vector<int,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&>::Delegate2<MetricsCollector, void
   (MetricsCollector::*)(std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<MetricsCollector, void
   (MetricsCollector::*)(std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::
Delegate2<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>::
Delegate2<MetricsCollector,void(MetricsCollector::*)(std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&)>
          (Delegate2<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792b10;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,MetricsCollector,void(MetricsCollector::*)(std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::vector<int, std::allocator<int> > const&, std::vector<int,
   std::allocator<int> > const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const
    */

void __thiscall
Sexy::
Delegate2<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>::
Invoke(Delegate2<std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&>
       *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  vector *pvVar1;
  vector *pvVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(param_2);
  pvVar2 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pvVar1,pvVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, std::vector<int, std::allocator<int> >
   const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,std::vector<int,std::allocator<int>>const&>::Invoke
          (Delegate2<int,std::vector<int,std::allocator<int>>const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  vector *pvVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pvVar2 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pvVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::string const&, std::vector<int, std::allocator<int> >
   const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<std::string_const&,std::vector<int,std::allocator<int>>const&>::Invoke
          (Delegate2<std::string_const&,std::vector<int,std::allocator<int>>const&> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  string *psVar1;
  vector *pvVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = RtInvokeVariant::Get<std::string_const&>(param_2);
  pvVar2 = RtInvokeVariant::Get<std::vector<int,std::allocator<int>>const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,psVar1,pvVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::string const&, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<std::string_const&,int>::Invoke
          (Delegate2<std::string_const&,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2
          )

{
  int iVar1;
  string *psVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,psVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >
   const&, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int>
::Invoke(Delegate2<std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int>
         *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  map *pmVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pmVar2 = RtInvokeVariant::
           Get<std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>
                     (param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pmVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>
   > > const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>
::Invoke(Delegate2<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>
         *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  map *pmVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pmVar2 = RtInvokeVariant::
           Get<std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&>
                     (param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pmVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::string const&, std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&>::
Invoke(Delegate2<std::string_const&,std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&>
       *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  string *psVar1;
  vector *pvVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = RtInvokeVariant::Get<std::string_const&>(param_2);
  pvVar2 = RtInvokeVariant::Get<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>const&>
                     (param_2 + 0x10);
  (**(code **)(this + 0x28))(this,psVar1,pvVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, PlantAdventureLogInfo const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,PlantAdventureLogInfo_const&>::Invoke
          (Delegate2<int,PlantAdventureLogInfo_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  PlantAdventureLogInfo *pPVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pPVar2 = RtInvokeVariant::Get<PlantAdventureLogInfo_const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pPVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Sexy::RtWeakPtr<MagentoProductProps> const&, int>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Sexy::RtWeakPtr<MagentoProductProps>const&,int>::Invoke
          (Delegate2<Sexy::RtWeakPtr<MagentoProductProps>const&,int> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  RtWeakPtr *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = RtInvokeVariant::Get<Sexy::RtWeakPtr<MagentoProductProps>const&>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pRVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<TreasurePool const*, std::vector<TreasureReward const*,
   std::allocator<TreasureReward const*> >&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::
Delegate2<TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&>
::Invoke(Delegate2<TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&>
         *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  TreasurePool *pTVar1;
  vector *pvVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar1 = RtInvokeVariant::Get<TreasurePool_const*>(param_2);
  pvVar2 = RtInvokeVariant::
           Get<std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&>
                     (param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pTVar1,pvVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<EventMetrics*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<EventMetrics*,int>::Invoke
          (Delegate2<EventMetrics*,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  EventMetrics *pEVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar2 = RtInvokeVariant::Get<EventMetrics*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pEVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<CollectableSun*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<CollectableSun*,int>::Invoke
          (Delegate2<CollectableSun*,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  CollectableSun *pCVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar2 = RtInvokeVariant::Get<CollectableSun*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pCVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<MinecartTutorialIntro, void
   (MinecartTutorialIntro::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<MinecartTutorialIntro, void
   (MinecartTutorialIntro::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<MinecartTutorialIntro,void(MinecartTutorialIntro::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,MinecartTutorialIntro,void(MinecartTutorialIntro::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UICustomLevelAppraise, void
   (UICustomLevelAppraise::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UICustomLevelAppraise,
   void (UICustomLevelAppraise::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UICustomLevelAppraise,void(UICustomLevelAppraise::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UICustomLevelAppraise,void(UICustomLevelAppraise::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, Sexy::Point&>::Delegate2<PlantGroupSubsystem, void
   (PlantGroupSubsystem::*)(Plant*, Sexy::Point&)>(Sexy::CBMemberTranslatorX<PlantGroupSubsystem,
   void (PlantGroupSubsystem::*)(Plant*, Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,Sexy::Point&>::
Delegate2<PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Plant*,Sexy::Point&)>
          (Delegate2<Plant*,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a50;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,Sexy::Point&,PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Plant*,Sexy::Point&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Plant*, Sexy::Point&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<Plant*,Sexy::Point&>::Invoke
          (Delegate2<Plant*,Sexy::Point&> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  Plant *pPVar1;
  Point *pPVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<Plant*>(param_2);
  pPVar2 = RtInvokeVariant::Get<Sexy::Point&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pPVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Plant*, Sexy::Point&>::Delegate2<PlantAquaVine, void (PlantAquaVine::*)(Plant*,
   Sexy::Point&)>(Sexy::CBMemberTranslatorX<PlantAquaVine, void (PlantAquaVine::*)(Plant*,
   Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,Sexy::Point&>::
Delegate2<PlantAquaVine,void(PlantAquaVine::*)(Plant*,Sexy::Point&)>
          (Delegate2<Plant*,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a50;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,Sexy::Point&,PlantAquaVine,void(PlantAquaVine::*)(Plant*,Sexy::Point&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<CollectableSun*, int>::Delegate2<PlantfoodTutorialIntro, void
   (PlantfoodTutorialIntro::*)(CollectableSun*,
   int)>(Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro, void
   (PlantfoodTutorialIntro::*)(CollectableSun*, int)> const&) */

void __thiscall
Sexy::Delegate2<CollectableSun*,int>::
Delegate2<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(CollectableSun*,int)>
          (Delegate2<CollectableSun*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792710;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<CollectableSun*,int,PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(CollectableSun*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<PlantfoodTutorialIntro, void
   (PlantfoodTutorialIntro::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro, void
   (PlantfoodTutorialIntro::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<PlantGroup*, bool*>::Delegate2<PlantfoodTutorialIntro, void
   (PlantfoodTutorialIntro::*)(PlantGroup*,
   bool*)>(Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro, void
   (PlantfoodTutorialIntro::*)(PlantGroup*, bool*)> const&) */

void __thiscall
Sexy::Delegate2<PlantGroup*,bool*>::
Delegate2<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(PlantGroup*,bool*)>
          (Delegate2<PlantGroup*,bool*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067a2830;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<PlantGroup*,bool*,PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(PlantGroup*,bool*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*>::Delegate2<PlantfoodTutorialIntro, void (PlantfoodTutorialIntro::*)(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<PlantfoodTutorialIntro, void
   (PlantfoodTutorialIntro::*)(Sexy::Point const&, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>::
Delegate2<PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695de0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,PlantfoodTutorialIntro,void(PlantfoodTutorialIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PlantGroup*, bool*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<PlantGroup*,bool*>::Invoke
          (Delegate2<PlantGroup*,bool*> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  PlantGroup *pPVar1;
  bool *pbVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<PlantGroup*>(param_2);
  pbVar2 = RtInvokeVariant::Get<bool*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pbVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Plant*, Sexy::Point&>::Delegate2<PlantHeavenDatura, void
   (PlantHeavenDatura::*)(Plant*, Sexy::Point&)>(Sexy::CBMemberTranslatorX<PlantHeavenDatura, void
   (PlantHeavenDatura::*)(Plant*, Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,Sexy::Point&>::
Delegate2<PlantHeavenDatura,void(PlantHeavenDatura::*)(Plant*,Sexy::Point&)>
          (Delegate2<Plant*,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a50;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,Sexy::Point&,PlantHeavenDatura,void(PlantHeavenDatura::*)(Plant*,Sexy::Point&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, Sexy::Point&>::Delegate2<PlantRhubarbarian, void
   (PlantRhubarbarian::*)(Plant*, Sexy::Point&)>(Sexy::CBMemberTranslatorX<PlantRhubarbarian, void
   (PlantRhubarbarian::*)(Plant*, Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,Sexy::Point&>::
Delegate2<PlantRhubarbarian,void(PlantRhubarbarian::*)(Plant*,Sexy::Point&)>
          (Delegate2<Plant*,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a50;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,Sexy::Point&,PlantRhubarbarian,void(PlantRhubarbarian::*)(Plant*,Sexy::Point&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, CarGridItem*>::Delegate2<CarGridItem, void (CarGridItem::*)(bool,
   CarGridItem*)>(Sexy::CBMemberTranslatorX<CarGridItem, void (CarGridItem::*)(bool, CarGridItem*)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,CarGridItem*>::Delegate2<CarGridItem,void(CarGridItem::*)(bool,CarGridItem*)>
          (Delegate2<bool,CarGridItem*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067af500;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,CarGridItem*,CarGridItem,void(CarGridItem::*)(bool,CarGridItem*)>::
       thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, CarGridItem*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<bool,CarGridItem*>::Invoke
          (Delegate2<bool,CarGridItem*> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  CarGridItem *pCVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pCVar2 = RtInvokeVariant::Get<CarGridItem*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pCVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<PlantBroccoli, void
   (PlantBroccoli::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<PlantBroccoli, void
   (PlantBroccoli::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<PlantBroccoli,void(PlantBroccoli::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,PlantBroccoli,void(PlantBroccoli::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<PlantIceburg*, Sexy::RtSerialCommand*>::Delegate2<void (*)(PlantIceburg*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(PlantIceburg*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<PlantIceburg*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(PlantIceburg*,Sexy::RtSerialCommand*)>
          (Delegate2<PlantIceburg*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067bb2b0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<PlantIceburg*,Sexy::RtSerialCommand*,void(*)(PlantIceburg*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PlantIceburg*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<PlantIceburg*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<PlantIceburg*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  PlantIceburg *pPVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<PlantIceburg*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Sexy::Point const&, bool*>::Delegate2<PlantSquash, void
   (PlantSquash::*)(Sexy::Point const&, bool*)>(Sexy::CBMemberTranslatorX<PlantSquash, void
   (PlantSquash::*)(Sexy::Point const&, bool*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,bool*>::
Delegate2<PlantSquash,void(PlantSquash::*)(Sexy::Point_const&,bool*)>
          (Delegate2<Sexy::Point_const&,bool*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067c62b0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,bool*,PlantSquash,void(PlantSquash::*)(Sexy::Point_const&,bool*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Sexy::Point const&, bool*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,bool*>::Invoke
          (Delegate2<Sexy::Point_const&,bool*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Point *pPVar1;
  bool *pbVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<Sexy::Point_const&>(param_2);
  pbVar2 = RtInvokeVariant::Get<bool*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pbVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Sexy::Point const&, float>::Delegate2<PlantTurnip, void
   (PlantTurnip::*)(Sexy::Point const&, float)>(Sexy::CBMemberTranslatorX<PlantTurnip, void
   (PlantTurnip::*)(Sexy::Point const&, float)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,float>::
Delegate2<PlantTurnip,void(PlantTurnip::*)(Sexy::Point_const&,float)>
          (Delegate2<Sexy::Point_const&,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067c8ba0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,float,PlantTurnip,void(PlantTurnip::*)(Sexy::Point_const&,float)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Sexy::Point const&, float>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,float>::Invoke
          (Delegate2<Sexy::Point_const&,float> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Point *pPVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<Sexy::Point_const&>(param_2);
  RtInvokeVariant::Get<float>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<MagicCard*, Sexy::RtSerialCommand*>::Delegate2<void (*)(MagicCard*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(MagicCard*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<MagicCard*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(MagicCard*,Sexy::RtSerialCommand*)>
          (Delegate2<MagicCard*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067db2b0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<MagicCard*,Sexy::RtSerialCommand*,void(*)(MagicCard*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<PlantMagicShroom*, Sexy::RtSerialCommand*>::Delegate2<void (*)(PlantMagicShroom*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(PlantMagicShroom*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<PlantMagicShroom*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(PlantMagicShroom*,Sexy::RtSerialCommand*)>
          (Delegate2<PlantMagicShroom*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067db900;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<PlantMagicShroom*,Sexy::RtSerialCommand*,void(*)(PlantMagicShroom*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, int>::Delegate2<PlantMagicShroom, void (PlantMagicShroom::*)(Plant*,
   int)>(Sexy::CBMemberTranslatorX<PlantMagicShroom, void (PlantMagicShroom::*)(Plant*, int)>
   const&) */

void __thiscall
Sexy::Delegate2<Plant*,int>::Delegate2<PlantMagicShroom,void(PlantMagicShroom::*)(Plant*,int)>
          (Delegate2<Plant*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066be840;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,int,PlantMagicShroom,void(PlantMagicShroom::*)(Plant*,int)>::thunk
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PlantMagicShroom*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<PlantMagicShroom*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<PlantMagicShroom*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  PlantMagicShroom *pPVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<PlantMagicShroom*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<MagicCard*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<MagicCard*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<MagicCard*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  MagicCard *pMVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pMVar1 = RtInvokeVariant::Get<MagicCard*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pMVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Projectile&, PlantLauncherProps const*>::Delegate2<void (*)(Projectile&,
   PlantLauncherProps const*)>(Sexy::CBFunctionTranslatorX<void (*)(Projectile&, PlantLauncherProps
   const*)> const&) */

void __thiscall
Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::
Delegate2<void(*)(Projectile&,PlantLauncherProps_const*)>
          (Delegate2<Projectile&,PlantLauncherProps_const*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067e6820;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Projectile&,PlantLauncherProps_const*,void(*)(Projectile&,PlantLauncherProps_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Projectile&, PlantLauncherProps const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::Invoke
          (Delegate2<Projectile&,PlantLauncherProps_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Projectile *pPVar1;
  PlantLauncherProps *pPVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<Projectile&>(param_2);
  pPVar2 = RtInvokeVariant::Get<PlantLauncherProps_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pPVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<SunGunState, StateAction>::Delegate2<PlantSunGun, void
   (PlantSunGun::*)(SunGunState, StateAction)>(Sexy::CBMemberTranslatorX<PlantSunGun, void
   (PlantSunGun::*)(SunGunState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<SunGunState,StateAction>::
Delegate2<PlantSunGun,void(PlantSunGun::*)(SunGunState,StateAction)>
          (Delegate2<SunGunState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067e8c80;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<SunGunState,StateAction,PlantSunGun,void(PlantSunGun::*)(SunGunState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<SunGunState, StateAction>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<SunGunState,StateAction>::Invoke
          (Delegate2<SunGunState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<SunGunState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<RedPackUI, void (RedPackUI::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<RedPackUI, void (RedPackUI::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<RedPackUI,void(RedPackUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,RedPackUI,void(RedPackUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<AchievementContent, void (AchievementContent::*)(int,
   int)>(Sexy::CBMemberTranslatorX<AchievementContent, void (AchievementContent::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<AchievementContent,void(AchievementContent::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,AchievementContent,void(AchievementContent::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<BananaTutorialModule, void
   (BananaTutorialModule::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<BananaTutorialModule, void (BananaTutorialModule::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<BananaTutorialModule,void(BananaTutorialModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,BananaTutorialModule,void(BananaTutorialModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<MagnetShroomState, StateAction>::Delegate2<PlantMagnetShroom, void
   (PlantMagnetShroom::*)(MagnetShroomState,
   StateAction)>(Sexy::CBMemberTranslatorX<PlantMagnetShroom, void
   (PlantMagnetShroom::*)(MagnetShroomState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<MagnetShroomState,StateAction>::
Delegate2<PlantMagnetShroom,void(PlantMagnetShroom::*)(MagnetShroomState,StateAction)>
          (Delegate2<MagnetShroomState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_068094a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<MagnetShroomState,StateAction,PlantMagnetShroom,void(PlantMagnetShroom::*)(MagnetShroomState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<MagnetShroomState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<MagnetShroomState,StateAction>::Invoke
          (Delegate2<MagnetShroomState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<MagnetShroomState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, int>::Delegate2<PlantOakshooter, void (PlantOakshooter::*)(int,
   int)>(Sexy::CBMemberTranslatorX<PlantOakshooter, void (PlantOakshooter::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<PlantOakshooter,void(PlantOakshooter::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,PlantOakshooter,void(PlantOakshooter::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<PlantHorsebean*, Sexy::RtSerialCommand*>::Delegate2<void (*)(PlantHorsebean*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(PlantHorsebean*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<PlantHorsebean*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(PlantHorsebean*,Sexy::RtSerialCommand*)>
          (Delegate2<PlantHorsebean*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0680ef80;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<PlantHorsebean*,Sexy::RtSerialCommand*,void(*)(PlantHorsebean*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, int>::Delegate2<PlantHorsebean, void (PlantHorsebean::*)(Plant*,
   int)>(Sexy::CBMemberTranslatorX<PlantHorsebean, void (PlantHorsebean::*)(Plant*, int)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,int>::Delegate2<PlantHorsebean,void(PlantHorsebean::*)(Plant*,int)>
          (Delegate2<Plant*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066be840;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,int,PlantHorsebean,void(PlantHorsebean::*)(Plant*,int)>::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PlantHorsebean*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<PlantHorsebean*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<PlantHorsebean*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  PlantHorsebean *pPVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<PlantHorsebean*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<HorsebeanPlane*, Sexy::RtSerialCommand*>::Delegate2<void (*)(HorsebeanPlane*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(HorsebeanPlane*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<HorsebeanPlane*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(HorsebeanPlane*,Sexy::RtSerialCommand*)>
          (Delegate2<HorsebeanPlane*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0680fd00;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<HorsebeanPlane*,Sexy::RtSerialCommand*,void(*)(HorsebeanPlane*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<HorsebeanPlane*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<HorsebeanPlane*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<HorsebeanPlane*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  HorsebeanPlane *pHVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = RtInvokeVariant::Get<HorsebeanPlane*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pHVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<std::string const&, std::string const&>::Delegate2<PlantTulipTrumpeter, void
   (PlantTulipTrumpeter::*)(std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<PlantTulipTrumpeter, void (PlantTulipTrumpeter::*)(std::string
   const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,std::string_const&>::
Delegate2<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)(std::string_const&,std::string_const&)>
          (Delegate2<std::string_const&,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0673e9a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,std::string_const&,PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)(std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<NukeLauncherSubSystem, void
   (NukeLauncherSubSystem::*)(Zombie*, int)>(Sexy::CBMemberTranslatorX<NukeLauncherSubSystem, void
   (NukeLauncherSubSystem::*)(Zombie*, int)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,int>::
Delegate2<NukeLauncherSubSystem,void(NukeLauncherSubSystem::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,NukeLauncherSubSystem,void(NukeLauncherSubSystem::*)(Zombie*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const&>::Delegate2<OliveOilUnit, void
   (OliveOilUnit::*)(Zombie*, DamageInfo const&)>(Sexy::CBMemberTranslatorX<OliveOilUnit, void
   (OliveOilUnit::*)(Zombie*, DamageInfo const&)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const&>::
Delegate2<OliveOilUnit,void(OliveOilUnit::*)(Zombie*,DamageInfo_const&)>
          (Delegate2<Zombie*,DamageInfo_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689850;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const&,OliveOilUnit,void(OliveOilUnit::*)(Zombie*,DamageInfo_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<StickybombBomb, void
   (StickybombBomb::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<StickybombBomb, void
   (StickybombBomb::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<StickybombBomb,void(StickybombBomb::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,StickybombBomb,void(StickybombBomb::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<ZombieGum, void (ZombieGum::*)(Zombie*,
   int)>(Sexy::CBMemberTranslatorX<ZombieGum, void (ZombieGum::*)(Zombie*, int)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,int>::Delegate2<ZombieGum,void(ZombieGum::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,ZombieGum,void(ZombieGum::*)(Zombie*,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Projectile&, PlantLauncherProps const*>::Delegate2<void (*)(Projectile&,
   PlantPropertySheet const*)>(Sexy::CBFunctionTranslatorX<void (*)(Projectile&, PlantPropertySheet
   const*)> const&) */

void __thiscall
Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::
Delegate2<void(*)(Projectile&,PlantPropertySheet_const*)>
          (Delegate2<Projectile&,PlantLauncherProps_const*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067e6820;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Projectile&,PlantLauncherProps_const*,void(*)(Projectile&,PlantPropertySheet_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Projectile&, PlantLauncherProps const*>::Delegate2(Sexy::Delegate2<Projectile&,
   PlantLauncherProps const*> const&) */

void __thiscall
Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::Delegate2
          (Delegate2<Projectile&,PlantLauncherProps_const*> *this,Delegate2 *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)this,(DelegateBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_067e6820;
  return;
}


/* Sexy::Delegate2<Projectile&, PlantLauncherProps
   const*>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<Projectile&,PlantLauncherProps_const*>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_067e6820;
  return;
}


/* Sexy::Delegate2<Plant*, int>::Delegate2<HeroPlantIntroModule, void
   (HeroPlantIntroModule::*)(Plant*, int)>(Sexy::CBMemberTranslatorX<HeroPlantIntroModule, void
   (HeroPlantIntroModule::*)(Plant*, int)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,int>::
Delegate2<HeroPlantIntroModule,void(HeroPlantIntroModule::*)(Plant*,int)>
          (Delegate2<Plant*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066be840;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,int,HeroPlantIntroModule,void(HeroPlantIntroModule::*)(Plant*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<PlantArmorflame, void
   (PlantArmorflame::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<PlantArmorflame, void
   (PlantArmorflame::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<PlantArmorflame,void(PlantArmorflame::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,PlantArmorflame,void(PlantArmorflame::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<DungeonWidget, void
   (DungeonWidget::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<DungeonWidget, void
   (DungeonWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<DungeonWidget,void(DungeonWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,DungeonWidget,void(DungeonWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PlantAdventureUI, void (PlantAdventureUI::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<PlantAdventureUI, void (PlantAdventureUI::*)(int, bool)> const&)
    */

void __thiscall
Sexy::Delegate2<int,bool>::Delegate2<PlantAdventureUI,void(PlantAdventureUI::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PlantAdventureUI,void(PlantAdventureUI::*)(int,bool)>::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_RechargeReward, void (WorldMap_RechargeReward::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<WorldMap_RechargeReward,
   void (WorldMap_RechargeReward::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_RechargeReward,void(WorldMap_RechargeReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_RechargeReward,void(WorldMap_RechargeReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, WaveDefinition const*>::Delegate2<PneumaticSeedBank, void
   (PneumaticSeedBank::*)(int, WaveDefinition const*)>(Sexy::CBMemberTranslatorX<PneumaticSeedBank,
   void (PneumaticSeedBank::*)(int, WaveDefinition const*)> const&) */

void __thiscall
Sexy::Delegate2<int,WaveDefinition_const*>::
Delegate2<PneumaticSeedBank,void(PneumaticSeedBank::*)(int,WaveDefinition_const*)>
          (Delegate2<int,WaveDefinition_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675a280;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,WaveDefinition_const*,PneumaticSeedBank,void(PneumaticSeedBank::*)(int,WaveDefinition_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<PowerTileIntro, void
   (PowerTileIntro::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<PowerTileIntro, void
   (PowerTileIntro::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<PowerTileIntro,void(PowerTileIntro::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,PowerTileIntro,void(PowerTileIntro::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<PowerupManager, void (PowerupManager::*)(int,
   std::string const&)>(Sexy::CBMemberTranslatorX<PowerupManager, void (PowerupManager::*)(int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<PowerupManager,void(PowerupManager::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,PowerupManager,void(PowerupManager::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<OakArrowUI, void (OakArrowUI::*)(int,
   int)>(Sexy::CBMemberTranslatorX<OakArrowUI, void (OakArrowUI::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<OakArrowUI,void(OakArrowUI::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,OakArrowUI,void(OakArrowUI::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<PowerupCukeTutorialIntro*, Sexy::RtSerialCommand*>::Delegate2<void
   (*)(PowerupCukeTutorialIntro*, Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void
   (*)(PowerupCukeTutorialIntro*, Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<PowerupCukeTutorialIntro*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(PowerupCukeTutorialIntro*,Sexy::RtSerialCommand*)>
          (Delegate2<PowerupCukeTutorialIntro*,Sexy::RtSerialCommand*> *this,
          CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06833060;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<PowerupCukeTutorialIntro*,Sexy::RtSerialCommand*,void(*)(PowerupCukeTutorialIntro*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<PlantGroup*, bool*>::Delegate2<PowerupCukeTutorialIntro, void
   (PowerupCukeTutorialIntro::*)(PlantGroup*,
   bool*)>(Sexy::CBMemberTranslatorX<PowerupCukeTutorialIntro, void
   (PowerupCukeTutorialIntro::*)(PlantGroup*, bool*)> const&) */

void __thiscall
Sexy::Delegate2<PlantGroup*,bool*>::
Delegate2<PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PlantGroup*,bool*)>
          (Delegate2<PlantGroup*,bool*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067a2830;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<PlantGroup*,bool*,PowerupCukeTutorialIntro,void(PowerupCukeTutorialIntro::*)(PlantGroup*,bool*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PowerupCukeTutorialIntro*,
   Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<PowerupCukeTutorialIntro*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<PowerupCukeTutorialIntro*,Sexy::RtSerialCommand*> *this,
          RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  PowerupCukeTutorialIntro *pPVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<PowerupCukeTutorialIntro*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, S2C_Purchase_LostPurchaseOrder const&>::Delegate2<PurchaseMgr, void
   (PurchaseMgr::*)(int, S2C_Purchase_LostPurchaseOrder
   const&)>(Sexy::CBMemberTranslatorX<PurchaseMgr, void (PurchaseMgr::*)(int,
   S2C_Purchase_LostPurchaseOrder const&)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_Purchase_LostPurchaseOrder_const&>::
Delegate2<PurchaseMgr,void(PurchaseMgr::*)(int,S2C_Purchase_LostPurchaseOrder_const&)>
          (Delegate2<int,S2C_Purchase_LostPurchaseOrder_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06833b30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_Purchase_LostPurchaseOrder_const&,PurchaseMgr,void(PurchaseMgr::*)(int,S2C_Purchase_LostPurchaseOrder_const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, S2C_Purchase_LostPurchaseOrder const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,S2C_Purchase_LostPurchaseOrder_const&>::Invoke
          (Delegate2<int,S2C_Purchase_LostPurchaseOrder_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  S2C_Purchase_LostPurchaseOrder *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_Purchase_LostPurchaseOrder_const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<SingleHandedModule, void
   (SingleHandedModule::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<SingleHandedModule, void (SingleHandedModule::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<SingleHandedModule,void(SingleHandedModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,SingleHandedModule,void(SingleHandedModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<RareFilterPanel, void (RareFilterPanel::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<RareFilterPanel, void (RareFilterPanel::*)(int, bool)> const&)
    */

void __thiscall
Sexy::Delegate2<int,bool>::Delegate2<RareFilterPanel,void(RareFilterPanel::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,RareFilterPanel,void(RareFilterPanel::*)(int,bool)>::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<PlantAvatarPackageItem, void
   (PlantAvatarPackageItem::*)(bool, int)>(Sexy::CBMemberTranslatorX<PlantAvatarPackageItem, void
   (PlantAvatarPackageItem::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::
Delegate2<PlantAvatarPackageItem,void(PlantAvatarPackageItem::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,PlantAvatarPackageItem,void(PlantAvatarPackageItem::*)(bool,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<BattleStatementUI, void (BattleStatementUI::*)(int,
   int)>(Sexy::CBMemberTranslatorX<BattleStatementUI, void (BattleStatementUI::*)(int, int)> const&)
    */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<BattleStatementUI,void(BattleStatementUI::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,BattleStatementUI,void(BattleStatementUI::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<int,std::string_const&>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06614600;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<PVZCachedNetworkTableManager, void
   (PVZCachedNetworkTableManager::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<PVZCachedNetworkTableManager, void
   (PVZCachedNetworkTableManager::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<PVZCachedNetworkTableManager,void(PVZCachedNetworkTableManager::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,PVZCachedNetworkTableManager,void(PVZCachedNetworkTableManager::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<PVZPackageNetworkManager, void
   (PVZPackageNetworkManager::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<PVZPackageNetworkManager, void
   (PVZPackageNetworkManager::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<PVZPackageNetworkManager,void(PVZPackageNetworkManager::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,PVZPackageNetworkManager,void(PVZPackageNetworkManager::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<AutoTestPlantsVsZombies, void
   (AutoTestPlantsVsZombies::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<AutoTestPlantsVsZombies, void
   (AutoTestPlantsVsZombies::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,AutoTestPlantsVsZombies,void(AutoTestPlantsVsZombies::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<PVZGameInfo*, Sexy::RtSerialCommand*>::Delegate2<void (*)(PVZGameInfo*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(PVZGameInfo*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<PVZGameInfo*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(PVZGameInfo*,Sexy::RtSerialCommand*)>
          (Delegate2<PVZGameInfo*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_068474c0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<PVZGameInfo*,Sexy::RtSerialCommand*,void(*)(PVZGameInfo*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PVZGameInfo*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<PVZGameInfo*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<PVZGameInfo*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  PVZGameInfo *pPVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<PVZGameInfo*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<PVZRemoteControl*, Sexy::RtSerialCommand*>::Delegate2<void (*)(PVZRemoteControl*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(PVZRemoteControl*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<PVZRemoteControl*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(PVZRemoteControl*,Sexy::RtSerialCommand*)>
          (Delegate2<PVZRemoteControl*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06847b00;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<PVZRemoteControl*,Sexy::RtSerialCommand*,void(*)(PVZRemoteControl*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PVZRemoteControl*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<PVZRemoteControl*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<PVZRemoteControl*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  PVZRemoteControl *pPVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = RtInvokeVariant::Get<PVZRemoteControl*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Plant*, int>::Delegate2<SeedPacket, void (SeedPacket::*)(Plant*,
   int)>(Sexy::CBMemberTranslatorX<SeedPacket, void (SeedPacket::*)(Plant*, int)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,int>::Delegate2<SeedPacket,void(SeedPacket::*)(Plant*,int)>
          (Delegate2<Plant*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066be840;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,int,SeedPacket,void(SeedPacket::*)(Plant*,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<StageModule, void
   (StageModule::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<StageModule, void
   (StageModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<StageModule,void(StageModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,StageModule,void(StageModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<StageModule, void (StageModule::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<StageModule, void (StageModule::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::Delegate2<StageModule,void(StageModule::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,StageModule,void(StageModule::*)(bool,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<DefeatZombiesOfTypeChallenge, void
   (DefeatZombiesOfTypeChallenge::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<DefeatZombiesOfTypeChallenge, void
   (DefeatZombiesOfTypeChallenge::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<DefeatZombiesOfTypeChallenge,void(DefeatZombiesOfTypeChallenge::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,DefeatZombiesOfTypeChallenge,void(DefeatZombiesOfTypeChallenge::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<StarChallengeKillZombiesInTime, void
   (StarChallengeKillZombiesInTime::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<StarChallengeKillZombiesInTime, void
   (StarChallengeKillZombiesInTime::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<StarChallengeKillZombiesInTime,void(StarChallengeKillZombiesInTime::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,StarChallengeKillZombiesInTime,void(StarChallengeKillZombiesInTime::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, int>::Delegate2<StarChallengePlantsSurvive, void
   (StarChallengePlantsSurvive::*)(Plant*,
   int)>(Sexy::CBMemberTranslatorX<StarChallengePlantsSurvive, void
   (StarChallengePlantsSurvive::*)(Plant*, int)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,int>::
Delegate2<StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)(Plant*,int)>
          (Delegate2<Plant*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066be840;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,int,StarChallengePlantsSurvive,void(StarChallengePlantsSurvive::*)(Plant*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<StarChallengeSandstormZombieKill, void
   (StarChallengeSandstormZombieKill::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<StarChallengeSandstormZombieKill, void
   (StarChallengeSandstormZombieKill::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<StarChallengeSandstormZombieKill,void(StarChallengeSandstormZombieKill::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,StarChallengeSandstormZombieKill,void(StarChallengeSandstormZombieKill::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<StarChallengeBufferTileZombieKill, void
   (StarChallengeBufferTileZombieKill::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<StarChallengeBufferTileZombieKill, void
   (StarChallengeBufferTileZombieKill::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<StarChallengeBufferTileZombieKill,void(StarChallengeBufferTileZombieKill::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,StarChallengeBufferTileZombieKill,void(StarChallengeBufferTileZombieKill::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<StarChallengeBufferTileZombieKill, void
   (StarChallengeBufferTileZombieKill::*)(Zombie*,
   int)>(Sexy::CBMemberTranslatorX<StarChallengeBufferTileZombieKill, void
   (StarChallengeBufferTileZombieKill::*)(Zombie*, int)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,int>::
Delegate2<StarChallengeBufferTileZombieKill,void(StarChallengeBufferTileZombieKill::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,StarChallengeBufferTileZombieKill,void(StarChallengeBufferTileZombieKill::*)(Zombie*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<StarChallengePotionZombieKill, void
   (StarChallengePotionZombieKill::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<StarChallengePotionZombieKill, void
   (StarChallengePotionZombieKill::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<StarChallengePotionZombieKill, void
   (StarChallengePotionZombieKill::*)(Zombie*,
   int)>(Sexy::CBMemberTranslatorX<StarChallengePotionZombieKill, void
   (StarChallengePotionZombieKill::*)(Zombie*, int)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,int>::
Delegate2<StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,StarChallengePotionZombieKill,void(StarChallengePotionZombieKill::*)(Zombie*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<StarChallengeTentZombieKill, void
   (StarChallengeTentZombieKill::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<StarChallengeTentZombieKill, void
   (StarChallengeTentZombieKill::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<StarChallengeTentZombieKill,void(StarChallengeTentZombieKill::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,StarChallengeTentZombieKill,void(StarChallengeTentZombieKill::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, int>::Delegate2<StarChallengeUnfreezePlants, void
   (StarChallengeUnfreezePlants::*)(Plant*,
   int)>(Sexy::CBMemberTranslatorX<StarChallengeUnfreezePlants, void
   (StarChallengeUnfreezePlants::*)(Plant*, int)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,int>::
Delegate2<StarChallengeUnfreezePlants,void(StarChallengeUnfreezePlants::*)(Plant*,int)>
          (Delegate2<Plant*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066be840;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,int,StarChallengeUnfreezePlants,void(StarChallengeUnfreezePlants::*)(Plant*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<StarChallengeFirecrackerZombieKill, void
   (StarChallengeFirecrackerZombieKill::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<StarChallengeFirecrackerZombieKill, void
   (StarChallengeFirecrackerZombieKill::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<StarChallengeFirecrackerZombieKill,void(StarChallengeFirecrackerZombieKill::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,StarChallengeFirecrackerZombieKill,void(StarChallengeFirecrackerZombieKill::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<StarChallengeFireworksZombieKill, void
   (StarChallengeFireworksZombieKill::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<StarChallengeFireworksZombieKill, void
   (StarChallengeFireworksZombieKill::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<StarChallengeFireworksZombieKill,void(StarChallengeFireworksZombieKill::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,StarChallengeFireworksZombieKill,void(StarChallengeFireworksZombieKill::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<MoldColonyChallenge, void (MoldColonyChallenge::*)(int,
   int)>(Sexy::CBMemberTranslatorX<MoldColonyChallenge, void (MoldColonyChallenge::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<MoldColonyChallenge,void(MoldColonyChallenge::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,MoldColonyChallenge,void(MoldColonyChallenge::*)(int,int)>::thunk
  ;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<OakTrainModule, void
   (OakTrainModule::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<OakTrainModule, void
   (OakTrainModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<OakTrainModule,void(OakTrainModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,OakTrainModule,void(OakTrainModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UITutorialSkipDialog*, int>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<UITutorialSkipDialog*,int>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06853840;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<UITutorialSkipDialog*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<UITutorialSkipDialog*,int>::Invoke
          (Delegate2<UITutorialSkipDialog*,int> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  UITutorialSkipDialog *pUVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar2 = RtInvokeVariant::Get<UITutorialSkipDialog*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pUVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<CollectableSun*, int>::Delegate2<TutorialLevel1, void
   (TutorialLevel1::*)(CollectableSun*, int)>(Sexy::CBMemberTranslatorX<TutorialLevel1, void
   (TutorialLevel1::*)(CollectableSun*, int)> const&) */

void __thiscall
Sexy::Delegate2<CollectableSun*,int>::
Delegate2<TutorialLevel1,void(TutorialLevel1::*)(CollectableSun*,int)>
          (Delegate2<CollectableSun*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792710;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<CollectableSun*,int,TutorialLevel1,void(TutorialLevel1::*)(CollectableSun*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIWidget*, Sexy::RtSerialCommand*>::Delegate2<void (*)(UIWidget*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(UIWidget*, Sexy::RtSerialCommand*)>
   const&) */

void __thiscall
Sexy::Delegate2<UIWidget*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(UIWidget*,Sexy::RtSerialCommand*)>
          (Delegate2<UIWidget*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06854690;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<UIWidget*,Sexy::RtSerialCommand*,void(*)(UIWidget*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<UIWidget*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<UIWidget*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<UIWidget*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  UIWidget *pUVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar1 = RtInvokeVariant::Get<UIWidget*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pUVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, WaveDefinition const*>::Delegate2<WaveProgressMeter, void
   (WaveProgressMeter::*)(int, WaveDefinition const*)>(Sexy::CBMemberTranslatorX<WaveProgressMeter,
   void (WaveProgressMeter::*)(int, WaveDefinition const*)> const&) */

void __thiscall
Sexy::Delegate2<int,WaveDefinition_const*>::
Delegate2<WaveProgressMeter,void(WaveProgressMeter::*)(int,WaveDefinition_const*)>
          (Delegate2<int,WaveDefinition_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675a280;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,WaveDefinition_const*,WaveProgressMeter,void(WaveProgressMeter::*)(int,WaveDefinition_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap, void (WorldMap::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<WorldMap, void (WorldMap::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap,void(WorldMap::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap,void(WorldMap::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, int>::Delegate2<WorldMap, void (WorldMap::*)(std::string
   const&, int)>(Sexy::CBMemberTranslatorX<WorldMap, void (WorldMap::*)(std::string const&, int)>
   const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,int>::
Delegate2<WorldMap,void(WorldMap::*)(std::string_const&,int)>
          (Delegate2<std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792750;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,int,WorldMap,void(WorldMap::*)(std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<WorldMapActionManager, void
   (WorldMapActionManager::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<WorldMapActionManager, void (WorldMapActionManager::*)(int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<WorldMapActionManager,void(WorldMapActionManager::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,WorldMapActionManager,void(WorldMapActionManager::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_UnchartedModePopUp, void (Action_UnchartedModePopUp::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<Action_UnchartedModePopUp, void
   (Action_UnchartedModePopUp::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_UnchartedModePopUp,void(Action_UnchartedModePopUp::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_UnchartedModePopUp,void(Action_UnchartedModePopUp::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_ReturnGems, void (Action_ReturnGems::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<Action_ReturnGems, void
   (Action_ReturnGems::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_ReturnGems,void(Action_ReturnGems::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_ReturnGems,void(Action_ReturnGems::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_LimitedSummonReward, void (Action_LimitedSummonReward::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<Action_LimitedSummonReward, void
   (Action_LimitedSummonReward::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_LimitedSummonReward,void(Action_LimitedSummonReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_LimitedSummonReward,void(Action_LimitedSummonReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_PennyGiftBoxReward, void (Action_PennyGiftBoxReward::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<Action_PennyGiftBoxReward, void
   (Action_PennyGiftBoxReward::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_PennyGiftBoxReward,void(Action_PennyGiftBoxReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_PennyGiftBoxReward,void(Action_PennyGiftBoxReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_BattleOrderIntroduction, void (Action_BattleOrderIntroduction::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<Action_BattleOrderIntroduction, void
   (Action_BattleOrderIntroduction::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_BattleOrderIntroduction,void(Action_BattleOrderIntroduction::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_BattleOrderIntroduction,void(Action_BattleOrderIntroduction::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_Cornucopia, void (Action_Cornucopia::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<Action_Cornucopia, void
   (Action_Cornucopia::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_Cornucopia,void(Action_Cornucopia::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_Cornucopia,void(Action_Cornucopia::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_PlantCultivate, void (Action_PlantCultivate::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<Action_PlantCultivate,
   void (Action_PlantCultivate::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_PlantCultivate,void(Action_PlantCultivate::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_PlantCultivate,void(Action_PlantCultivate::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_TravelLogTasks, void (Action_TravelLogTasks::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<Action_TravelLogTasks,
   void (Action_TravelLogTasks::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_TravelLogTasks,void(Action_TravelLogTasks::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_TravelLogTasks,void(Action_TravelLogTasks::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_DaveTreasureTasks, void (Action_DaveTreasureTasks::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<Action_DaveTreasureTasks, void
   (Action_DaveTreasureTasks::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_DaveTreasureTasks,void(Action_DaveTreasureTasks::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_DaveTreasureTasks,void(Action_DaveTreasureTasks::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_HappyVaseBreakerTasks, void (Action_HappyVaseBreakerTasks::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<Action_HappyVaseBreakerTasks, void
   (Action_HappyVaseBreakerTasks::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_HappyVaseBreakerTasks,void(Action_HappyVaseBreakerTasks::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_HappyVaseBreakerTasks,void(Action_HappyVaseBreakerTasks::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_NoviceSevenDaysTask, void (Action_NoviceSevenDaysTask::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<Action_NoviceSevenDaysTask, void
   (Action_NoviceSevenDaysTask::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_NoviceSevenDaysTask,void(Action_NoviceSevenDaysTask::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_NoviceSevenDaysTask,void(Action_NoviceSevenDaysTask::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_ShowFightZodiac, void (Action_ShowFightZodiac::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<Action_ShowFightZodiac,
   void (Action_ShowFightZodiac::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_ShowFightZodiac,void(Action_ShowFightZodiac::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_ShowFightZodiac,void(Action_ShowFightZodiac::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActionPlantSpecialOffer, void (ActionPlantSpecialOffer::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<ActionPlantSpecialOffer,
   void (ActionPlantSpecialOffer::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActionPlantSpecialOffer,void(ActionPlantSpecialOffer::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActionPlantSpecialOffer,void(ActionPlantSpecialOffer::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActionFirstRecharge, void (ActionFirstRecharge::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<ActionFirstRecharge,
   void (ActionFirstRecharge::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActionFirstRecharge,void(ActionFirstRecharge::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActionFirstRecharge,void(ActionFirstRecharge::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActionRechargeReward, void (ActionRechargeReward::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<ActionRechargeReward,
   void (ActionRechargeReward::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActionRechargeReward,void(ActionRechargeReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActionRechargeReward,void(ActionRechargeReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_NFSLinkage, void (Action_NFSLinkage::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<Action_NFSLinkage, void
   (Action_NFSLinkage::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_NFSLinkage,void(Action_NFSLinkage::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_NFSLinkage,void(Action_NFSLinkage::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_LuckyChest, void (Action_LuckyChest::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<Action_LuckyChest, void
   (Action_LuckyChest::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_LuckyChest,void(Action_LuckyChest::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_LuckyChest,void(Action_LuckyChest::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_TourismOctober, void (Action_TourismOctober::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<Action_TourismOctober,
   void (Action_TourismOctober::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_TourismOctober,void(Action_TourismOctober::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_TourismOctober,void(Action_TourismOctober::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<Action_NighttheToy, void (Action_NighttheToy::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<Action_NighttheToy, void
   (Action_NighttheToy::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<Action_NighttheToy,void(Action_NighttheToy::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Action_NighttheToy,void(Action_NighttheToy::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UISpringFestival2024ResetButton, void
   (UISpringFestival2024ResetButton::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UISpringFestival2024ResetButton, void
   (UISpringFestival2024ResetButton::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UISpringFestival2024ResetButton,void(UISpringFestival2024ResetButton::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UISpringFestival2024ResetButton,void(UISpringFestival2024ResetButton::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_ActivityLevelsButton, void (WorldMap_ActivityLevelsButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_ActivityLevelsButton, void
   (WorldMap_ActivityLevelsButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_ActivityLevelsButton,void(WorldMap_ActivityLevelsButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_ActivityLevelsButton,void(WorldMap_ActivityLevelsButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_ActivityHomeButton, void (WorldMap_ActivityHomeButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButton, void
   (WorldMap_ActivityHomeButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_ActivityHomeButton,void(WorldMap_ActivityHomeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_ActivityHomeButton,void(WorldMap_ActivityHomeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<WorldMap_ActivityHomeButton, void
   (WorldMap_ActivityHomeButton::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButton, void
   (WorldMap_ActivityHomeButton::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<WorldMap_ActivityHomeButton,void(WorldMap_ActivityHomeButton::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,WorldMap_ActivityHomeButton,void(WorldMap_ActivityHomeButton::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_StaticConfig const*>::Delegate2<WorldMap_ActivityHomeButton, void
   (WorldMap_ActivityHomeButton::*)(int, S2C_StaticConfig
   const*)>(Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButton, void
   (WorldMap_ActivityHomeButton::*)(int, S2C_StaticConfig const*)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_StaticConfig_const*>::
Delegate2<WorldMap_ActivityHomeButton,void(WorldMap_ActivityHomeButton::*)(int,S2C_StaticConfig_const*)>
          (Delegate2<int,S2C_StaticConfig_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06861060;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_StaticConfig_const*,WorldMap_ActivityHomeButton,void(WorldMap_ActivityHomeButton::*)(int,S2C_StaticConfig_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, S2C_StaticConfig const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,S2C_StaticConfig_const*>::Invoke
          (Delegate2<int,S2C_StaticConfig_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  S2C_StaticConfig *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_StaticConfig_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_ActivityHomeButtonExtra, void
   (WorldMap_ActivityHomeButtonExtra::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButtonExtra, void
   (WorldMap_ActivityHomeButtonExtra::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<WorldMap_ActivityHomeButtonExtra, void
   (WorldMap_ActivityHomeButtonExtra::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButtonExtra, void
   (WorldMap_ActivityHomeButtonExtra::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_StaticConfig const*>::Delegate2<WorldMap_ActivityHomeButtonExtra, void
   (WorldMap_ActivityHomeButtonExtra::*)(int, S2C_StaticConfig
   const*)>(Sexy::CBMemberTranslatorX<WorldMap_ActivityHomeButtonExtra, void
   (WorldMap_ActivityHomeButtonExtra::*)(int, S2C_StaticConfig const*)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_StaticConfig_const*>::
Delegate2<WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)(int,S2C_StaticConfig_const*)>
          (Delegate2<int,S2C_StaticConfig_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06861060;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_StaticConfig_const*,WorldMap_ActivityHomeButtonExtra,void(WorldMap_ActivityHomeButtonExtra::*)(int,S2C_StaticConfig_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_ChallengeButton, void (WorldMap_ChallengeButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_ChallengeButton, void
   (WorldMap_ChallengeButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<WorldMap_ChallengeButton, void
   (WorldMap_ChallengeButton::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_ChallengeButton, void
   (WorldMap_ChallengeButton::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_StaticConfig const*>::Delegate2<WorldMap_ChallengeButton, void
   (WorldMap_ChallengeButton::*)(int, S2C_StaticConfig
   const*)>(Sexy::CBMemberTranslatorX<WorldMap_ChallengeButton, void
   (WorldMap_ChallengeButton::*)(int, S2C_StaticConfig const*)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_StaticConfig_const*>::
Delegate2<WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)(int,S2C_StaticConfig_const*)>
          (Delegate2<int,S2C_StaticConfig_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06861060;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_StaticConfig_const*,WorldMap_ChallengeButton,void(WorldMap_ChallengeButton::*)(int,S2C_StaticConfig_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_DailyActivityButton, void (WorldMap_DailyActivityButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_DailyActivityButton, void
   (WorldMap_DailyActivityButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_DailyActivityButton,void(WorldMap_DailyActivityButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_DailyActivityButton,void(WorldMap_DailyActivityButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<WorldMap_DailyActivityButton, void
   (WorldMap_DailyActivityButton::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_DailyActivityButton, void
   (WorldMap_DailyActivityButton::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<WorldMap_DailyActivityButton,void(WorldMap_DailyActivityButton::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,WorldMap_DailyActivityButton,void(WorldMap_DailyActivityButton::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_ShopButton, void (WorldMap_ShopButton::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<WorldMap_ShopButton,
   void (WorldMap_ShopButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_ShopButton,void(WorldMap_ShopButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_ShopButton,void(WorldMap_ShopButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<WorldMap_ShopButton, void
   (WorldMap_ShopButton::*)(int, std::string const&)>(Sexy::CBMemberTranslatorX<WorldMap_ShopButton,
   void (WorldMap_ShopButton::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<WorldMap_ShopButton,void(WorldMap_ShopButton::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,WorldMap_ShopButton,void(WorldMap_ShopButton::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_WelfareButtonExtra, void (WorldMap_WelfareButtonExtra::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_WelfareButtonExtra, void
   (WorldMap_WelfareButtonExtra::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_WelfareButtonExtra,void(WorldMap_WelfareButtonExtra::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_WelfareButtonExtra,void(WorldMap_WelfareButtonExtra::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<WorldMap_WelfareButtonExtra, void
   (WorldMap_WelfareButtonExtra::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_WelfareButtonExtra, void
   (WorldMap_WelfareButtonExtra::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<WorldMap_WelfareButtonExtra,void(WorldMap_WelfareButtonExtra::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,WorldMap_WelfareButtonExtra,void(WorldMap_WelfareButtonExtra::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_TurnChangeButton, void (WorldMap_TurnChangeButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_TurnChangeButton, void
   (WorldMap_TurnChangeButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_TurnChangeButton,void(WorldMap_TurnChangeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_TurnChangeButton,void(WorldMap_TurnChangeButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<WorldMapChallengeChooseDialog, void
   (WorldMapChallengeChooseDialog::*)(int,
   int)>(Sexy::CBMemberTranslatorX<WorldMapChallengeChooseDialog, void
   (WorldMapChallengeChooseDialog::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<WorldMapChallengeChooseDialog,void(WorldMapChallengeChooseDialog::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,WorldMapChallengeChooseDialog,void(WorldMapChallengeChooseDialog::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_ScrollBannerButton, void (WorldMap_ScrollBannerButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_ScrollBannerButton, void
   (WorldMap_ScrollBannerButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_ScrollBannerButton,void(WorldMap_ScrollBannerButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_ScrollBannerButton,void(WorldMap_ScrollBannerButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_ScrollBannerSwitchButton, void
   (WorldMap_ScrollBannerSwitchButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_ScrollBannerSwitchButton, void
   (WorldMap_ScrollBannerSwitchButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_ScrollBannerSwitchButton,void(WorldMap_ScrollBannerSwitchButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_ScrollBannerSwitchButton,void(WorldMap_ScrollBannerSwitchButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_RechargeBundleButton, void (WorldMap_RechargeBundleButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_RechargeBundleButton, void
   (WorldMap_RechargeBundleButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_RechargeBundleButton,void(WorldMap_RechargeBundleButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_RechargeBundleButton,void(WorldMap_RechargeBundleButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIWorldLevelPackageDetail, void
   (UIWorldLevelPackageDetail::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UIWorldLevelPackageDetail, void
   (UIWorldLevelPackageDetail::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIWorldLevelPackageDetail,void(UIWorldLevelPackageDetail::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIWorldLevelPackageDetail,void(UIWorldLevelPackageDetail::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_LevelPackageButton, void (WorldMap_LevelPackageButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_LevelPackageButton, void
   (WorldMap_LevelPackageButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_LevelPackageButton,void(WorldMap_LevelPackageButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_LevelPackageButton,void(WorldMap_LevelPackageButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldLevelPackageManager, void (WorldLevelPackageManager::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldLevelPackageManager, void
   (WorldLevelPackageManager::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldLevelPackageManager,void(WorldLevelPackageManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldLevelPackageManager,void(WorldLevelPackageManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, Sexy::RtSerialCommand*>::Delegate2<void (*)(Zombie*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(Zombie*, Sexy::RtSerialCommand*)>
   const&) */

void __thiscall
Sexy::Delegate2<Zombie*,Sexy::RtSerialCommand*>::Delegate2<void(*)(Zombie*,Sexy::RtSerialCommand*)>
          (Delegate2<Zombie*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0686b340;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Zombie*,Sexy::RtSerialCommand*,void(*)(Zombie*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<PlantFramework*, int>::Delegate2<Zombie, void (Zombie::*)(PlantFramework*,
   int)>(Sexy::CBMemberTranslatorX<Zombie, void (Zombie::*)(PlantFramework*, int)> const&) */

void __thiscall
Sexy::Delegate2<PlantFramework*,int>::Delegate2<Zombie,void(Zombie::*)(PlantFramework*,int)>
          (Delegate2<PlantFramework*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0686b3c0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<PlantFramework*,int,Zombie,void(Zombie::*)(PlantFramework*,int)>::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<PlantFramework*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<PlantFramework*,int>::Invoke
          (Delegate2<PlantFramework*,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  PlantFramework *pPVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = RtInvokeVariant::Get<PlantFramework*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Zombie*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Zombie*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<Zombie*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Zombie *pZVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = RtInvokeVariant::Get<Zombie*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pZVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Sexy::Point const&, bool*>::Delegate2<ZombieBeachFisherman, void
   (ZombieBeachFisherman::*)(Sexy::Point const&,
   bool*)>(Sexy::CBMemberTranslatorX<ZombieBeachFisherman, void
   (ZombieBeachFisherman::*)(Sexy::Point const&, bool*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,bool*>::
Delegate2<ZombieBeachFisherman,void(ZombieBeachFisherman::*)(Sexy::Point_const&,bool*)>
          (Delegate2<Sexy::Point_const&,bool*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067c62b0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,bool*,ZombieBeachFisherman,void(ZombieBeachFisherman::*)(Sexy::Point_const&,bool*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, bool*>::Delegate2<ZombieDarkKing, void
   (ZombieDarkKing::*)(Sexy::Point const&, bool*)>(Sexy::CBMemberTranslatorX<ZombieDarkKing, void
   (ZombieDarkKing::*)(Sexy::Point const&, bool*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,bool*>::
Delegate2<ZombieDarkKing,void(ZombieDarkKing::*)(Sexy::Point_const&,bool*)>
          (Delegate2<Sexy::Point_const&,bool*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067c62b0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,bool*,ZombieDarkKing,void(ZombieDarkKing::*)(Sexy::Point_const&,bool*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<ZombieMechDiscoSubsystem, void
   (ZombieMechDiscoSubsystem::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<ZombieMechDiscoSubsystem, void
   (ZombieMechDiscoSubsystem::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<ZombieMechDiscoSubsystem,void(ZombieMechDiscoSubsystem::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,ZombieMechDiscoSubsystem,void(ZombieMechDiscoSubsystem::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<ZombiesAteYourBrainsOutro, void
   (ZombiesAteYourBrainsOutro::*)(int, int)>(Sexy::CBMemberTranslatorX<ZombiesAteYourBrainsOutro,
   void (ZombiesAteYourBrainsOutro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<ZombieTreasureYeti, void
   (ZombieTreasureYeti::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<ZombieTreasureYeti, void (ZombieTreasureYeti::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<ZombieTreasureYeti,void(ZombieTreasureYeti::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,ZombieTreasureYeti,void(ZombieTreasureYeti::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<ZombieZombossExplosive, void
   (ZombieZombossExplosive::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<ZombieZombossExplosive, void
   (ZombieZombossExplosive::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,ZombieZombossExplosive,void(ZombieZombossExplosive::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<ZombieZombossMech_Egypt, void
   (ZombieZombossMech_Egypt::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<ZombieZombossMech_Egypt, void
   (ZombieZombossMech_Egypt::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<ZombieZombossMech_Egypt,void(ZombieZombossMech_Egypt::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,ZombieZombossMech_Egypt,void(ZombieZombossMech_Egypt::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<ZombossBattleState, StateAction>::Delegate2<ZombossBattleModule, void
   (ZombossBattleModule::*)(ZombossBattleState,
   StateAction)>(Sexy::CBMemberTranslatorX<ZombossBattleModule, void
   (ZombossBattleModule::*)(ZombossBattleState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<ZombossBattleState,StateAction>::
Delegate2<ZombossBattleModule,void(ZombossBattleModule::*)(ZombossBattleState,StateAction)>
          (Delegate2<ZombossBattleState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_068cc220;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<ZombossBattleState,StateAction,ZombossBattleModule,void(ZombossBattleModule::*)(ZombossBattleState,StateAction)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<ZombossBattleState, StateAction>::Delegate2<DangerRoomHydraZombossBattleModule,
   void (DangerRoomHydraZombossBattleModule::*)(ZombossBattleState,
   StateAction)>(Sexy::CBMemberTranslatorX<DangerRoomHydraZombossBattleModule, void
   (DangerRoomHydraZombossBattleModule::*)(ZombossBattleState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<ZombossBattleState,StateAction>::
Delegate2<DangerRoomHydraZombossBattleModule,void(DangerRoomHydraZombossBattleModule::*)(ZombossBattleState,StateAction)>
          (Delegate2<ZombossBattleState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_068cc220;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<ZombossBattleState,StateAction,DangerRoomHydraZombossBattleModule,void(DangerRoomHydraZombossBattleModule::*)(ZombossBattleState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<ZombossBattleState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<ZombossBattleState,StateAction>::Invoke
          (Delegate2<ZombossBattleState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<ZombossBattleState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, int>::Delegate2<BossProgressMeter, void (BossProgressMeter::*)(int,
   int)>(Sexy::CBMemberTranslatorX<BossProgressMeter, void (BossProgressMeter::*)(int, int)> const&)
    */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<BossProgressMeter,void(BossProgressMeter::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,BossProgressMeter,void(BossProgressMeter::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<GridItemWalrusStatue*, Sexy::RtSerialCommand*>::Delegate2<void
   (*)(GridItemWalrusStatue*, Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void
   (*)(GridItemWalrusStatue*, Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<GridItemWalrusStatue*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(GridItemWalrusStatue*,Sexy::RtSerialCommand*)>
          (Delegate2<GridItemWalrusStatue*,Sexy::RtSerialCommand*> *this,
          CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_068d7f50;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<GridItemWalrusStatue*,Sexy::RtSerialCommand*,void(*)(GridItemWalrusStatue*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<GridItemWalrusStatue*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<GridItemWalrusStatue*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<GridItemWalrusStatue*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  GridItemWalrusStatue *pGVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = RtInvokeVariant::Get<GridItemWalrusStatue*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pGVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<PooyanModule, void
   (PooyanModule::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<PooyanModule, void
   (PooyanModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<PooyanModule,void(PooyanModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,PooyanModule,void(PooyanModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<BesiegeModule, void
   (BesiegeModule::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<BesiegeModule, void
   (BesiegeModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<BesiegeModule,void(BesiegeModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,BesiegeModule,void(BesiegeModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<FishingModule, void
   (FishingModule::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<FishingModule, void
   (FishingModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<FishingModule,void(FishingModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,FishingModule,void(FishingModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Touch const&, bool*>::Delegate2<IntroFishing, void
   (IntroFishing::*)(Sexy::Touch const&, bool*)>(Sexy::CBMemberTranslatorX<IntroFishing, void
   (IntroFishing::*)(Sexy::Touch const&, bool*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Touch_const&,bool*>::
Delegate2<IntroFishing,void(IntroFishing::*)(Sexy::Touch_const&,bool*)>
          (Delegate2<Sexy::Touch_const&,bool*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_068e4910;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Touch_const&,bool*,IntroFishing,void(IntroFishing::*)(Sexy::Touch_const&,bool*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Sexy::Touch const&, bool*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<Sexy::Touch_const&,bool*>::Invoke
          (Delegate2<Sexy::Touch_const&,bool*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Touch *pTVar1;
  bool *pbVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar1 = RtInvokeVariant::Get<Sexy::Touch_const&>(param_2);
  pbVar2 = RtInvokeVariant::Get<bool*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pTVar1,pbVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Creature*, Sexy::RtSerialCommand*>::Delegate2<void (*)(Creature*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(Creature*, Sexy::RtSerialCommand*)>
   const&) */

void __thiscall
Sexy::Delegate2<Creature*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(Creature*,Sexy::RtSerialCommand*)>
          (Delegate2<Creature*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069030a0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Creature*,Sexy::RtSerialCommand*,void(*)(Creature*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Creature*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Creature*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<Creature*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Creature *pCVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = RtInvokeVariant::Get<Creature*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pCVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<SharkMinion*, Sexy::RtSerialCommand*>::Delegate2<void (*)(SharkMinion*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(SharkMinion*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<SharkMinion*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(SharkMinion*,Sexy::RtSerialCommand*)>
          (Delegate2<SharkMinion*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06909190;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<SharkMinion*,Sexy::RtSerialCommand*,void(*)(SharkMinion*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<SharkMinion*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<SharkMinion*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<SharkMinion*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  SharkMinion *pSVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = RtInvokeVariant::Get<SharkMinion*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pSVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Sexy::Point const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*>::Delegate2<BowlingMinigameModule, void (BowlingMinigameModule::*)(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<BowlingMinigameModule, void (BowlingMinigameModule::*)(Sexy::Point
   const&, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>::
Delegate2<BowlingMinigameModule,void(BowlingMinigameModule::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695de0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,BowlingMinigameModule,void(BowlingMinigameModule::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<PurchaseBroker, void (PurchaseBroker::*)(int,
   std::string const&)>(Sexy::CBMemberTranslatorX<PurchaseBroker, void (PurchaseBroker::*)(int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<PurchaseBroker,void(PurchaseBroker::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,PurchaseBroker,void(PurchaseBroker::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, WaveDefinition const*>::Delegate2<RandZombieModule, void
   (RandZombieModule::*)(int, WaveDefinition const*)>(Sexy::CBMemberTranslatorX<RandZombieModule,
   void (RandZombieModule::*)(int, WaveDefinition const*)> const&) */

void __thiscall
Sexy::Delegate2<int,WaveDefinition_const*>::
Delegate2<RandZombieModule,void(RandZombieModule::*)(int,WaveDefinition_const*)>
          (Delegate2<int,WaveDefinition_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675a280;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,WaveDefinition_const*,RandZombieModule,void(RandZombieModule::*)(int,WaveDefinition_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<VaseBreakerTutorialState,
   StateAction>::Delegate2<VaseBreakerFlowActionTutorialBase, void
   (VaseBreakerFlowActionTutorialBase::*)(VaseBreakerTutorialState,
   StateAction)>(Sexy::CBMemberTranslatorX<VaseBreakerFlowActionTutorialBase, void
   (VaseBreakerFlowActionTutorialBase::*)(VaseBreakerTutorialState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<VaseBreakerTutorialState,StateAction>::
Delegate2<VaseBreakerFlowActionTutorialBase,void(VaseBreakerFlowActionTutorialBase::*)(VaseBreakerTutorialState,StateAction)>
          (Delegate2<VaseBreakerTutorialState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06917f00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<VaseBreakerTutorialState,StateAction,VaseBreakerFlowActionTutorialBase,void(VaseBreakerFlowActionTutorialBase::*)(VaseBreakerTutorialState,StateAction)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<VaseBreakerTutorialState,
   StateAction>::Delegate2<VaseBreakerFlowActionRevealTutorial, void
   (VaseBreakerFlowActionRevealTutorial::*)(VaseBreakerTutorialState,
   StateAction)>(Sexy::CBMemberTranslatorX<VaseBreakerFlowActionRevealTutorial, void
   (VaseBreakerFlowActionRevealTutorial::*)(VaseBreakerTutorialState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<VaseBreakerTutorialState,StateAction>::
Delegate2<VaseBreakerFlowActionRevealTutorial,void(VaseBreakerFlowActionRevealTutorial::*)(VaseBreakerTutorialState,StateAction)>
          (Delegate2<VaseBreakerTutorialState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06917f00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<VaseBreakerTutorialState,StateAction,VaseBreakerFlowActionRevealTutorial,void(VaseBreakerFlowActionRevealTutorial::*)(VaseBreakerTutorialState,StateAction)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<VaseBreakerTutorialState,
   StateAction>::Delegate2<VaseBreakerFlowActionMoveTutorial, void
   (VaseBreakerFlowActionMoveTutorial::*)(VaseBreakerTutorialState,
   StateAction)>(Sexy::CBMemberTranslatorX<VaseBreakerFlowActionMoveTutorial, void
   (VaseBreakerFlowActionMoveTutorial::*)(VaseBreakerTutorialState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<VaseBreakerTutorialState,StateAction>::
Delegate2<VaseBreakerFlowActionMoveTutorial,void(VaseBreakerFlowActionMoveTutorial::*)(VaseBreakerTutorialState,StateAction)>
          (Delegate2<VaseBreakerTutorialState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06917f00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<VaseBreakerTutorialState,StateAction,VaseBreakerFlowActionMoveTutorial,void(VaseBreakerFlowActionMoveTutorial::*)(VaseBreakerTutorialState,StateAction)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<VaseBreakerTutorialState,
   StateAction>::Delegate2<VaseBreakerFlowActionButterTutorial, void
   (VaseBreakerFlowActionButterTutorial::*)(VaseBreakerTutorialState,
   StateAction)>(Sexy::CBMemberTranslatorX<VaseBreakerFlowActionButterTutorial, void
   (VaseBreakerFlowActionButterTutorial::*)(VaseBreakerTutorialState, StateAction)> const&) */

void __thiscall
Sexy::Delegate2<VaseBreakerTutorialState,StateAction>::
Delegate2<VaseBreakerFlowActionButterTutorial,void(VaseBreakerFlowActionButterTutorial::*)(VaseBreakerTutorialState,StateAction)>
          (Delegate2<VaseBreakerTutorialState,StateAction> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06917f00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<VaseBreakerTutorialState,StateAction,VaseBreakerFlowActionButterTutorial,void(VaseBreakerFlowActionButterTutorial::*)(VaseBreakerTutorialState,StateAction)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<VaseBreakerTutorialState, StateAction>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<VaseBreakerTutorialState,StateAction>::Invoke
          (Delegate2<VaseBreakerTutorialState,StateAction> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = RtInvokeVariant::Get<VaseBreakerTutorialState>(param_2);
  uVar2 = RtInvokeVariant::Get<StateAction>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar1,uVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<SnakeNode*, Sexy::RtSerialCommand*>::Delegate2<void (*)(SnakeNode*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(SnakeNode*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<SnakeNode*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(SnakeNode*,Sexy::RtSerialCommand*)>
          (Delegate2<SnakeNode*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06929310;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<SnakeNode*,Sexy::RtSerialCommand*,void(*)(SnakeNode*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<SnakeNode*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<SnakeNode*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<SnakeNode*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  SnakeNode *pSVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = RtInvokeVariant::Get<SnakeNode*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pSVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, S2C_ICloud_GetChargeRewardInfo const*>::Delegate2<RechargeRewardContent,
   void (RechargeRewardContent::*)(bool, S2C_ICloud_GetChargeRewardInfo
   const*)>(Sexy::CBMemberTranslatorX<RechargeRewardContent, void (RechargeRewardContent::*)(bool,
   S2C_ICloud_GetChargeRewardInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ICloud_GetChargeRewardInfo_const*>::
Delegate2<RechargeRewardContent,void(RechargeRewardContent::*)(bool,S2C_ICloud_GetChargeRewardInfo_const*)>
          (Delegate2<bool,S2C_ICloud_GetChargeRewardInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0692b5b0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ICloud_GetChargeRewardInfo_const*,RechargeRewardContent,void(RechargeRewardContent::*)(bool,S2C_ICloud_GetChargeRewardInfo_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_ICloud_GetChargeRewardInfo const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_ICloud_GetChargeRewardInfo_const*>::Invoke
          (Delegate2<bool,S2C_ICloud_GetChargeRewardInfo_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_ICloud_GetChargeRewardInfo *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_ICloud_GetChargeRewardInfo_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<RechargeBundleUI, void (RechargeBundleUI::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<RechargeBundleUI, void
   (RechargeBundleUI::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<RechargeBundleUI,void(RechargeBundleUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,RechargeBundleUI,void(RechargeBundleUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<EliminateModule, void (EliminateModule::*)(int,
   int)>(Sexy::CBMemberTranslatorX<EliminateModule, void (EliminateModule::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<EliminateModule,void(EliminateModule::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,EliminateModule,void(EliminateModule::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<EliminateModule, void
   (EliminateModule::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<EliminateModule, void
   (EliminateModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<EliminateModule,void(EliminateModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,EliminateModule,void(EliminateModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<RiverEntitiesManager*, Sexy::RtSerialCommand*>::Delegate2<void
   (*)(RiverEntitiesManager*, Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void
   (*)(RiverEntitiesManager*, Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<RiverEntitiesManager*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(RiverEntitiesManager*,Sexy::RtSerialCommand*)>
          (Delegate2<RiverEntitiesManager*,Sexy::RtSerialCommand*> *this,
          CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0692e880;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<RiverEntitiesManager*,Sexy::RtSerialCommand*,void(*)(RiverEntitiesManager*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<RiverEntitiesManager*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<RiverEntitiesManager*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<RiverEntitiesManager*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  RiverEntitiesManager *pRVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = RtInvokeVariant::Get<RiverEntitiesManager*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pRVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<StarvingChomper*, Sexy::RtSerialCommand*>::Delegate2<void (*)(StarvingChomper*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(StarvingChomper*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<StarvingChomper*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(StarvingChomper*,Sexy::RtSerialCommand*)>
          (Delegate2<StarvingChomper*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0692f060;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<StarvingChomper*,Sexy::RtSerialCommand*,void(*)(StarvingChomper*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<StarvingChomper*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<StarvingChomper*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<StarvingChomper*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  StarvingChomper *pSVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = RtInvokeVariant::Get<StarvingChomper*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pSVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<RiverCrossingDodoRider*, Sexy::RtSerialCommand*>::Delegate2<void
   (*)(RiverCrossingDodoRider*, Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void
   (*)(RiverCrossingDodoRider*, Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<RiverCrossingDodoRider*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(RiverCrossingDodoRider*,Sexy::RtSerialCommand*)>
          (Delegate2<RiverCrossingDodoRider*,Sexy::RtSerialCommand*> *this,
          CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0692f620;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<RiverCrossingDodoRider*,Sexy::RtSerialCommand*,void(*)(RiverCrossingDodoRider*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<RiverCrossingDodoRider*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<RiverCrossingDodoRider*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<RiverCrossingDodoRider*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  RiverCrossingDodoRider *pRVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = RtInvokeVariant::Get<RiverCrossingDodoRider*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pRVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<DailySignReward, void
   (DailySignReward::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<DailySignReward, void
   (DailySignReward::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<DailySignReward,void(DailySignReward::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,DailySignReward,void(DailySignReward::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_DailySignWithTW const*>::Delegate2<DailySignRewardWithTW, void
   (DailySignRewardWithTW::*)(bool, S2C_DailySignWithTW
   const*)>(Sexy::CBMemberTranslatorX<DailySignRewardWithTW, void (DailySignRewardWithTW::*)(bool,
   S2C_DailySignWithTW const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_DailySignWithTW_const*>::
Delegate2<DailySignRewardWithTW,void(DailySignRewardWithTW::*)(bool,S2C_DailySignWithTW_const*)>
          (Delegate2<bool,S2C_DailySignWithTW_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069345b0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_DailySignWithTW_const*,DailySignRewardWithTW,void(DailySignRewardWithTW::*)(bool,S2C_DailySignWithTW_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_DailySignWithTW const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_DailySignWithTW_const*>::Invoke
          (Delegate2<bool,S2C_DailySignWithTW_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_DailySignWithTW *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_DailySignWithTW_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<SalesButton*, Sexy::RtSerialCommand*>::Delegate2<void (*)(SalesButton*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(SalesButton*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<SalesButton*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(SalesButton*,Sexy::RtSerialCommand*)>
          (Delegate2<SalesButton*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06936a60;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<SalesButton*,Sexy::RtSerialCommand*,void(*)(SalesButton*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<SalesButton*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<SalesButton*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<SalesButton*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  SalesButton *pSVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = RtInvokeVariant::Get<SalesButton*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pSVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<std::string const&, std::map<std::string, std::string, std::less<std::string >,
   std::allocator<std::pair<std::string const, std::string > > >*>::Delegate2<ChildrenDayUI, void
   (ChildrenDayUI::*)(std::string const&, std::map<std::string, std::string, std::less<std::string
   >, std::allocator<std::pair<std::string const, std::string > >
   >*)>(Sexy::CBMemberTranslatorX<ChildrenDayUI, void (ChildrenDayUI::*)(std::string const&,
   std::map<std::string, std::string, std::less<std::string >, std::allocator<std::pair<std::string
   const, std::string > > >*)> const&) */

void __thiscall
Sexy::
Delegate2<std::string_const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*>
::
Delegate2<ChildrenDayUI,void(ChildrenDayUI::*)(std::string_const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*)>
          (Delegate2<std::string_const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0693dc30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*,ChildrenDayUI,void(ChildrenDayUI::*)(std::string_const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::string const&, std::map<std::string, std::string, std::less<std::string >,
   std::allocator<std::pair<std::string const, std::string > > >*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::
Delegate2<std::string_const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*>
::Invoke(Delegate2<std::string_const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*>
         *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  string *psVar1;
  map *pmVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = RtInvokeVariant::Get<std::string_const&>(param_2);
  pmVar2 = RtInvokeVariant::
           Get<std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>*>
                     (param_2 + 0x10);
  (**(code **)(this + 0x28))(this,psVar1,pmVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<DangerRoomManager, void
   (DangerRoomManager::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<DangerRoomManager, void
   (DangerRoomManager::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<DangerRoomManager,void(DangerRoomManager::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,DangerRoomManager,void(DangerRoomManager::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<DangerRoomManager, void (DangerRoomManager::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<DangerRoomManager, void
   (DangerRoomManager::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<DangerRoomManager,void(DangerRoomManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,DangerRoomManager,void(DangerRoomManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<DangerRoomSeedChooser, void
   (DangerRoomSeedChooser::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<DangerRoomSeedChooser,
   void (DangerRoomSeedChooser::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<DangerRoomSeedChooser,void(DangerRoomSeedChooser::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,DangerRoomSeedChooser,void(DangerRoomSeedChooser::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PlaybackModule, void
   (PlaybackModule::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<PlaybackModule, void
   (PlaybackModule::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PlaybackModule,void(PlaybackModule::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PlaybackModule,void(PlaybackModule::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<PlaybackModule, void (PlaybackModule::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<PlaybackModule, void (PlaybackModule::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::Delegate2<PlaybackModule,void(PlaybackModule::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,PlaybackModule,void(PlaybackModule::*)(bool,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<PlaybackModule, void (PlaybackModule::*)(Zombie*,
   int)>(Sexy::CBMemberTranslatorX<PlaybackModule, void (PlaybackModule::*)(Zombie*, int)> const&)
    */

void __thiscall
Sexy::Delegate2<Zombie*,int>::Delegate2<PlaybackModule,void(PlaybackModule::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,PlaybackModule,void(PlaybackModule::*)(Zombie*,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<PVPSkillEnergyUI, void (PVPSkillEnergyUI::*)(Zombie*,
   int)>(Sexy::CBMemberTranslatorX<PVPSkillEnergyUI, void (PVPSkillEnergyUI::*)(Zombie*, int)>
   const&) */

void __thiscall
Sexy::Delegate2<Zombie*,int>::Delegate2<PVPSkillEnergyUI,void(PVPSkillEnergyUI::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,PVPSkillEnergyUI,void(PVPSkillEnergyUI::*)(Zombie*,int)>::
       thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<PVPManager, void (PVPManager::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<PVPManager, void (PVPManager::*)(bool, int)> const&) */

void __thiscall
Sexy::Delegate2<bool,int>::Delegate2<PVPManager,void(PVPManager::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,PVPManager,void(PVPManager::*)(bool,int)>::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PVPCancelUpgradeBtn, void
   (PVPCancelUpgradeBtn::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<PVPCancelUpgradeBtn, void
   (PVPCancelUpgradeBtn::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PVPCancelUpgradeBtn,void(PVPCancelUpgradeBtn::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PVPCancelUpgradeBtn,void(PVPCancelUpgradeBtn::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<unsigned long, bool>::Delegate2<PlaybackDlg, void (PlaybackDlg::*)(unsigned long,
   bool)>(Sexy::CBMemberTranslatorX<PlaybackDlg, void (PlaybackDlg::*)(unsigned long, bool)> const&)
    */

void __thiscall
Sexy::Delegate2<unsigned_long,bool>::Delegate2<PlaybackDlg,void(PlaybackDlg::*)(unsigned_long,bool)>
          (Delegate2<unsigned_long,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0694ce40;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<unsigned_long,bool,PlaybackDlg,void(PlaybackDlg::*)(unsigned_long,bool)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<unsigned long, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<unsigned_long,bool>::Invoke
          (Delegate2<unsigned_long,bool> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = RtInvokeVariant::Get<unsigned_long>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,uVar2,bVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, int>::Delegate2<PVPShopConfigData, void (PVPShopConfigData::*)(int,
   int)>(Sexy::CBMemberTranslatorX<PVPShopConfigData, void (PVPShopConfigData::*)(int, int)> const&)
    */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<PVPShopConfigData,void(PVPShopConfigData::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,PVPShopConfigData,void(PVPShopConfigData::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<UIMessageBox*,int>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06608b70;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PVPEntryDlg, void (PVPEntryDlg::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<PVPEntryDlg, void (PVPEntryDlg::*)(UIMessageBox*, int)> const&)
    */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::Delegate2<PVPEntryDlg,void(PVPEntryDlg::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PVPEntryDlg,void(PVPEntryDlg::*)(UIMessageBox*,int)>::
       thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PVPFinishButton, void
   (PVPFinishButton::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<PVPFinishButton, void
   (PVPFinishButton::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PVPFinishButton,void(PVPFinishButton::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PVPFinishButton,void(PVPFinishButton::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<ArenaBattleModule, void (ArenaBattleModule::*)(int,
   int)>(Sexy::CBMemberTranslatorX<ArenaBattleModule, void (ArenaBattleModule::*)(int, int)> const&)
    */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<ArenaBattleModule,void(ArenaBattleModule::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,ArenaBattleModule,void(ArenaBattleModule::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<ArenaBattleModule, void
   (ArenaBattleModule::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<ArenaBattleModule,
   void (ArenaBattleModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<ArenaBattleModule,void(ArenaBattleModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,ArenaBattleModule,void(ArenaBattleModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<ArenaBattleModule, void (ArenaBattleModule::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<ArenaBattleModule, void (ArenaBattleModule::*)(bool, int)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,int>::Delegate2<ArenaBattleModule,void(ArenaBattleModule::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,ArenaBattleModule,void(ArenaBattleModule::*)(bool,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<ArenaBattleModule, void
   (ArenaBattleModule::*)(int, std::string const&)>(Sexy::CBMemberTranslatorX<ArenaBattleModule,
   void (ArenaBattleModule::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<ArenaBattleModule,void(ArenaBattleModule::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,ArenaBattleModule,void(ArenaBattleModule::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<ArenaBattleModule, void (ArenaBattleModule::*)(Zombie*,
   int)>(Sexy::CBMemberTranslatorX<ArenaBattleModule, void (ArenaBattleModule::*)(Zombie*, int)>
   const&) */

void __thiscall
Sexy::Delegate2<Zombie*,int>::Delegate2<ArenaBattleModule,void(ArenaBattleModule::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,ArenaBattleModule,void(ArenaBattleModule::*)(Zombie*,int)>::
       thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<ArenaPlantModule, void (ArenaPlantModule::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<ArenaPlantModule, void (ArenaPlantModule::*)(bool, int)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,int>::Delegate2<ArenaPlantModule,void(ArenaPlantModule::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,ArenaPlantModule,void(ArenaPlantModule::*)(bool,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<IntroArenaTutorialBattleModule, void
   (IntroArenaTutorialBattleModule::*)(int,
   int)>(Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule, void
   (IntroArenaTutorialBattleModule::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<IntroArenaTutorialBattleModule, void
   (IntroArenaTutorialBattleModule::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule, void
   (IntroArenaTutorialBattleModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<IntroArenaTutorialBattleModule, void
   (IntroArenaTutorialBattleModule::*)(Zombie*,
   int)>(Sexy::CBMemberTranslatorX<IntroArenaTutorialBattleModule, void
   (IntroArenaTutorialBattleModule::*)(Zombie*, int)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,int>::
Delegate2<IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,IntroArenaTutorialBattleModule,void(IntroArenaTutorialBattleModule::*)(Zombie*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<LevelEditorSeedChooser, void
   (LevelEditorSeedChooser::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<LevelEditorSeedChooser, void
   (LevelEditorSeedChooser::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<LevelEditorSeedChooser,void(LevelEditorSeedChooser::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,LevelEditorSeedChooser,void(LevelEditorSeedChooser::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<LevelEditorVaseBreaker, void
   (LevelEditorVaseBreaker::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<LevelEditorVaseBreaker, void
   (LevelEditorVaseBreaker::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<LevelEditorVaseBreaker,void(LevelEditorVaseBreaker::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,LevelEditorVaseBreaker,void(LevelEditorVaseBreaker::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIInputDialog*, int>::Delegate2<UIEditor, void (UIEditor::*)(UIInputDialog*,
   int)>(Sexy::CBMemberTranslatorX<UIEditor, void (UIEditor::*)(UIInputDialog*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIInputDialog*,int>::Delegate2<UIEditor,void(UIEditor::*)(UIInputDialog*,int)>
          (Delegate2<UIInputDialog*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0696e730;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIInputDialog*,int,UIEditor,void(UIEditor::*)(UIInputDialog*,int)>::thunk
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<UIInputDialog*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<UIInputDialog*,int>::Invoke
          (Delegate2<UIInputDialog*,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  UIInputDialog *pUVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar2 = RtInvokeVariant::Get<UIInputDialog*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pUVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIInputDialog*, int>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<UIInputDialog*,int>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_0696e730;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<ActiveSummery, void
   (ActiveSummery::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<ActiveSummery, void
   (ActiveSummery::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<ActiveSummery,void(ActiveSummery::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,ActiveSummery,void(ActiveSummery::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_SummeryLotteryData const&>::Delegate2<ActiveSummery, void
   (ActiveSummery::*)(int, S2C_SummeryLotteryData const&)>(Sexy::CBMemberTranslatorX<ActiveSummery,
   void (ActiveSummery::*)(int, S2C_SummeryLotteryData const&)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_SummeryLotteryData_const&>::
Delegate2<ActiveSummery,void(ActiveSummery::*)(int,S2C_SummeryLotteryData_const&)>
          (Delegate2<int,S2C_SummeryLotteryData_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069747e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_SummeryLotteryData_const&,ActiveSummery,void(ActiveSummery::*)(int,S2C_SummeryLotteryData_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<ActiveSummery, void (ActiveSummery::*)(int,
   std::string const&)>(Sexy::CBMemberTranslatorX<ActiveSummery, void (ActiveSummery::*)(int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<ActiveSummery,void(ActiveSummery::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,ActiveSummery,void(ActiveSummery::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, S2C_SummeryLotteryData const&>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,S2C_SummeryLotteryData_const&>::Invoke
          (Delegate2<int,S2C_SummeryLotteryData_const&> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  S2C_SummeryLotteryData *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_SummeryLotteryData_const&>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityManager, void (ActivityManager::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<ActivityManager, void
   (ActivityManager::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityManager,void(ActivityManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityManager,void(ActivityManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_VacationLevelEndData*>::Delegate2<VolcanoSnowBattleModule, void
   (VolcanoSnowBattleModule::*)(int,
   S2C_VacationLevelEndData*)>(Sexy::CBMemberTranslatorX<VolcanoSnowBattleModule, void
   (VolcanoSnowBattleModule::*)(int, S2C_VacationLevelEndData*)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_VacationLevelEndData*>::
Delegate2<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(int,S2C_VacationLevelEndData*)>
          (Delegate2<int,S2C_VacationLevelEndData*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06975b10;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_VacationLevelEndData*,VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(int,S2C_VacationLevelEndData*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<AnimationMgr*, float*>::Delegate2<VolcanoSnowBattleModule, void
   (VolcanoSnowBattleModule::*)(AnimationMgr*,
   float*)>(Sexy::CBMemberTranslatorX<VolcanoSnowBattleModule, void
   (VolcanoSnowBattleModule::*)(AnimationMgr*, float*)> const&) */

void __thiscall
Sexy::Delegate2<AnimationMgr*,float*>::
Delegate2<VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(AnimationMgr*,float*)>
          (Delegate2<AnimationMgr*,float*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06975b30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<AnimationMgr*,float*,VolcanoSnowBattleModule,void(VolcanoSnowBattleModule::*)(AnimationMgr*,float*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<AnimationMgr*, float*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<AnimationMgr*,float*>::Invoke
          (Delegate2<AnimationMgr*,float*> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  AnimationMgr *pAVar1;
  float *pfVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = RtInvokeVariant::Get<AnimationMgr*>(param_2);
  pfVar2 = RtInvokeVariant::Get<float*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pAVar1,pfVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, S2C_VacationLevelEndData*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,S2C_VacationLevelEndData*>::Invoke
          (Delegate2<int,S2C_VacationLevelEndData*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  S2C_VacationLevelEndData *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_VacationLevelEndData*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<ActivityLevelsChoose, void
   (ActivityLevelsChoose::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<ActivityLevelsChoose,
   void (ActivityLevelsChoose::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,ActivityLevelsChoose,void(ActivityLevelsChoose::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<ActivityLevelsChoose, void (ActivityLevelsChoose::*)(int,
   int)>(Sexy::CBMemberTranslatorX<ActivityLevelsChoose, void (ActivityLevelsChoose::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,ActivityLevelsChoose,void(ActivityLevelsChoose::*)(int,int)>::
       thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<ActivityLevelsChoose, void (ActivityLevelsChoose::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<ActivityLevelsChoose,
   void (ActivityLevelsChoose::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<ActivityLevelsChoose,void(ActivityLevelsChoose::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,ActivityLevelsChoose,void(ActivityLevelsChoose::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_BossChallengeLevelEndData
   const*>::Delegate2<BossKillTimeChallengeModule, void (BossKillTimeChallengeModule::*)(int,
   S2C_BossChallengeLevelEndData const*)>(Sexy::CBMemberTranslatorX<BossKillTimeChallengeModule,
   void (BossKillTimeChallengeModule::*)(int, S2C_BossChallengeLevelEndData const*)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_BossChallengeLevelEndData_const*>::
Delegate2<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(int,S2C_BossChallengeLevelEndData_const*)>
          (Delegate2<int,S2C_BossChallengeLevelEndData_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06976c20;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_BossChallengeLevelEndData_const*,BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(int,S2C_BossChallengeLevelEndData_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<BossKillTimeChallengeModule, void
   (BossKillTimeChallengeModule::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<BossKillTimeChallengeModule, void
   (BossKillTimeChallengeModule::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<AnimationMgr*, float*>::Delegate2<BossKillTimeChallengeModule, void
   (BossKillTimeChallengeModule::*)(AnimationMgr*,
   float*)>(Sexy::CBMemberTranslatorX<BossKillTimeChallengeModule, void
   (BossKillTimeChallengeModule::*)(AnimationMgr*, float*)> const&) */

void __thiscall
Sexy::Delegate2<AnimationMgr*,float*>::
Delegate2<BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(AnimationMgr*,float*)>
          (Delegate2<AnimationMgr*,float*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06975b30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<AnimationMgr*,float*,BossKillTimeChallengeModule,void(BossKillTimeChallengeModule::*)(AnimationMgr*,float*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, S2C_BossChallengeLevelEndData const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,S2C_BossChallengeLevelEndData_const*>::Invoke
          (Delegate2<int,S2C_BossChallengeLevelEndData_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  S2C_BossChallengeLevelEndData *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_BossChallengeLevelEndData_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<BossChallenge, void (BossChallenge::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<BossChallenge, void
   (BossChallenge::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<BossChallenge,void(BossChallenge::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,BossChallenge,void(BossChallenge::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIBossMedalLottery, void
   (UIBossMedalLottery::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UIBossMedalLottery, void
   (UIBossMedalLottery::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIBossMedalLottery,void(UIBossMedalLottery::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIBossMedalLottery,void(UIBossMedalLottery::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_SummeryLotteryData const&>::Delegate2<UIBossMedalLottery, void
   (UIBossMedalLottery::*)(int, S2C_SummeryLotteryData
   const&)>(Sexy::CBMemberTranslatorX<UIBossMedalLottery, void (UIBossMedalLottery::*)(int,
   S2C_SummeryLotteryData const&)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_SummeryLotteryData_const&>::
Delegate2<UIBossMedalLottery,void(UIBossMedalLottery::*)(int,S2C_SummeryLotteryData_const&)>
          (Delegate2<int,S2C_SummeryLotteryData_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069747e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_SummeryLotteryData_const&,UIBossMedalLottery,void(UIBossMedalLottery::*)(int,S2C_SummeryLotteryData_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<UIBossMedalLottery, void
   (UIBossMedalLottery::*)(int, std::string const&)>(Sexy::CBMemberTranslatorX<UIBossMedalLottery,
   void (UIBossMedalLottery::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<UIBossMedalLottery,void(UIBossMedalLottery::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,UIBossMedalLottery,void(UIBossMedalLottery::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_BossChallengteReward const*>::Delegate2<UIBossChallengeReward, void
   (UIBossChallengeReward::*)(int, S2C_BossChallengteReward
   const*)>(Sexy::CBMemberTranslatorX<UIBossChallengeReward, void (UIBossChallengeReward::*)(int,
   S2C_BossChallengteReward const*)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_BossChallengteReward_const*>::
Delegate2<UIBossChallengeReward,void(UIBossChallengeReward::*)(int,S2C_BossChallengteReward_const*)>
          (Delegate2<int,S2C_BossChallengteReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06977d30;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_BossChallengteReward_const*,UIBossChallengeReward,void(UIBossChallengeReward::*)(int,S2C_BossChallengteReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<UIBossChallengeReward, void
   (UIBossChallengeReward::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<UIBossChallengeReward, void (UIBossChallengeReward::*)(int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<UIBossChallengeReward,void(UIBossChallengeReward::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,UIBossChallengeReward,void(UIBossChallengeReward::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, S2C_BossChallengteReward const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,S2C_BossChallengteReward_const*>::Invoke
          (Delegate2<int,S2C_BossChallengteReward_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  int iVar1;
  S2C_BossChallengteReward *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_BossChallengteReward_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<GeilivableLottery, void (GeilivableLottery::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<GeilivableLottery, void
   (GeilivableLottery::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<GeilivableLottery,void(GeilivableLottery::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,GeilivableLottery,void(GeilivableLottery::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<TransGenosisUI, void (TransGenosisUI::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<TransGenosisUI, void
   (TransGenosisUI::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<TransGenosisUI,void(TransGenosisUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,TransGenosisUI,void(TransGenosisUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<EASquaredImpl, void (EASquaredImpl::*)(int,
   int)>(Sexy::CBMemberTranslatorX<EASquaredImpl, void (EASquaredImpl::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<EASquaredImpl,void(EASquaredImpl::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,EASquaredImpl,void(EASquaredImpl::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_AdsRewardButton, void (WorldMap_AdsRewardButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_AdsRewardButton, void
   (WorldMap_AdsRewardButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_AdsRewardButton,void(WorldMap_AdsRewardButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_AdsRewardButton,void(WorldMap_AdsRewardButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_AdsLotteryButton, void (WorldMap_AdsLotteryButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_AdsLotteryButton, void
   (WorldMap_AdsLotteryButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_AdsLotteryButton,void(WorldMap_AdsLotteryButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_AdsLotteryButton,void(WorldMap_AdsLotteryButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<int,int>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06610c00;
  return;
}


/* Sexy::Delegate2<bool, S2C_CodeRewardResult const*>::Delegate2<CodeRewardUI, void
   (CodeRewardUI::*)(bool, S2C_CodeRewardResult const*)>(Sexy::CBMemberTranslatorX<CodeRewardUI,
   void (CodeRewardUI::*)(bool, S2C_CodeRewardResult const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_CodeRewardResult_const*>::
Delegate2<CodeRewardUI,void(CodeRewardUI::*)(bool,S2C_CodeRewardResult_const*)>
          (Delegate2<bool,S2C_CodeRewardResult_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06981940;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_CodeRewardResult_const*,CodeRewardUI,void(CodeRewardUI::*)(bool,S2C_CodeRewardResult_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_CodeRewardResult const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_CodeRewardResult_const*>::Invoke
          (Delegate2<bool,S2C_CodeRewardResult_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_CodeRewardResult *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_CodeRewardResult_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WebViewInteractMgr, void (WebViewInteractMgr::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<WebViewInteractMgr, void
   (WebViewInteractMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WebViewInteractMgr,void(WebViewInteractMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WebViewInteractMgr,void(WebViewInteractMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<AuthMgr, void (AuthMgr::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<AuthMgr, void (AuthMgr::*)(int, std::string const&)> const&)
    */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::Delegate2<AuthMgr,void(AuthMgr::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,AuthMgr,void(AuthMgr::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<NetworkItemMgr, void (NetworkItemMgr::*)(int,
   std::string const&)>(Sexy::CBMemberTranslatorX<NetworkItemMgr, void (NetworkItemMgr::*)(int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<NetworkItemMgr,void(NetworkItemMgr::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,NetworkItemMgr,void(NetworkItemMgr::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<NetworkProfileMgr, void
   (NetworkProfileMgr::*)(int, std::string const&)>(Sexy::CBMemberTranslatorX<NetworkProfileMgr,
   void (NetworkProfileMgr::*)(int, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<NetworkProfileMgr,void(NetworkProfileMgr::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,NetworkProfileMgr,void(NetworkProfileMgr::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_WechatShareResult const*>::Delegate2<ShareRewardView, void
   (ShareRewardView::*)(bool, S2C_WechatShareResult
   const*)>(Sexy::CBMemberTranslatorX<ShareRewardView, void (ShareRewardView::*)(bool,
   S2C_WechatShareResult const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_WechatShareResult_const*>::
Delegate2<ShareRewardView,void(ShareRewardView::*)(bool,S2C_WechatShareResult_const*)>
          (Delegate2<bool,S2C_WechatShareResult_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06982f80;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_WechatShareResult_const*,ShareRewardView,void(ShareRewardView::*)(bool,S2C_WechatShareResult_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_WechatShareResult const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_WechatShareResult_const*>::Invoke
          (Delegate2<bool,S2C_WechatShareResult_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_WechatShareResult *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_WechatShareResult_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<PlantBundleMgr, void (PlantBundleMgr::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<PlantBundleMgr, void
   (PlantBundleMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<PlantBundleMgr,void(PlantBundleMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,PlantBundleMgr,void(PlantBundleMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<PlantSpecialOfferUI, void (PlantSpecialOfferUI::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<PlantSpecialOfferUI,
   void (PlantSpecialOfferUI::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<PlantSpecialOfferUI,void(PlantSpecialOfferUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,PlantSpecialOfferUI,void(PlantSpecialOfferUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> >
   const&>::Delegate2<PlantSpecialOfferUI, void (PlantSpecialOfferUI::*)(int,
   std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> >
   const&)>(Sexy::CBMemberTranslatorX<PlantSpecialOfferUI, void (PlantSpecialOfferUI::*)(int,
   std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> > const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&>::
Delegate2<PlantSpecialOfferUI,void(PlantSpecialOfferUI::*)(int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&)>
          (Delegate2<int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06984350;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&,PlantSpecialOfferUI,void(PlantSpecialOfferUI::*)(int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<int, std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> >
   const&>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&>::Invoke
          (Delegate2<int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&>
           *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  vector *pvVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = RtInvokeVariant::Get<int>(param_2);
  pvVar2 = RtInvokeVariant::
           Get<std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&>
                     (param_2 + 0x10);
  (**(code **)(this + 0x28))(this,iVar1,pvVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<int, std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> >
   const&>::Delegate2<DangerRoomOfferMgr, void (DangerRoomOfferMgr::*)(int,
   std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> >
   const&)>(Sexy::CBMemberTranslatorX<DangerRoomOfferMgr, void (DangerRoomOfferMgr::*)(int,
   std::vector<PaymentBundleInfo, std::allocator<PaymentBundleInfo> > const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&>::
Delegate2<DangerRoomOfferMgr,void(DangerRoomOfferMgr::*)(int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&)>
          (Delegate2<int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06984350;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&,DangerRoomOfferMgr,void(DangerRoomOfferMgr::*)(int,std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_PlatformGiftData const*>::Delegate2<PuzzlePlatformGiftPanel, void
   (PuzzlePlatformGiftPanel::*)(bool, S2C_PlatformGiftData
   const*)>(Sexy::CBMemberTranslatorX<PuzzlePlatformGiftPanel, void
   (PuzzlePlatformGiftPanel::*)(bool, S2C_PlatformGiftData const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_PlatformGiftData_const*>::
Delegate2<PuzzlePlatformGiftPanel,void(PuzzlePlatformGiftPanel::*)(bool,S2C_PlatformGiftData_const*)>
          (Delegate2<bool,S2C_PlatformGiftData_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06987630;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_PlatformGiftData_const*,PuzzlePlatformGiftPanel,void(PuzzlePlatformGiftPanel::*)(bool,S2C_PlatformGiftData_const*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<bool, S2C_PlatformGiftData const*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<bool,S2C_PlatformGiftData_const*>::Invoke
          (Delegate2<bool,S2C_PlatformGiftData_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  S2C_PlatformGiftData *pSVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = RtInvokeVariant::Get<bool>(param_2);
  pSVar2 = RtInvokeVariant::Get<S2C_PlatformGiftData_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,bVar1,pSVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<WorldMap_PlatformGiftButton, void (WorldMap_PlatformGiftButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<WorldMap_PlatformGiftButton, void
   (WorldMap_PlatformGiftButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<WorldMap_PlatformGiftButton,void(WorldMap_PlatformGiftButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,WorldMap_PlatformGiftButton,void(WorldMap_PlatformGiftButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<RechargeDailySignActivityUI, void (RechargeDailySignActivityUI::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<RechargeDailySignActivityUI, void
   (RechargeDailySignActivityUI::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<RechargeDailySignActivityUI,void(RechargeDailySignActivityUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,RechargeDailySignActivityUI,void(RechargeDailySignActivityUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<DiscountShopActivityUI, void (DiscountShopActivityUI::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<DiscountShopActivityUI,
   void (DiscountShopActivityUI::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<DiscountShopActivityUI,void(DiscountShopActivityUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,DiscountShopActivityUI,void(DiscountShopActivityUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<DiscountShopActivityUI, void
   (DiscountShopActivityUI::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<DiscountShopActivityUI, void (DiscountShopActivityUI::*)(bool,
   S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<DiscountShopActivityUI,void(DiscountShopActivityUI::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,DiscountShopActivityUI,void(DiscountShopActivityUI::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<CommonUIManager, void
   (CommonUIManager::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<CommonUIManager, void
   (CommonUIManager::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<CommonUIManager,void(CommonUIManager::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,CommonUIManager,void(CommonUIManager::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIScrollDisplayWidgetBase, void (UIScrollDisplayWidgetBase::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<UIScrollDisplayWidgetBase, void
   (UIScrollDisplayWidgetBase::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIScrollDisplayWidgetBase,void(UIScrollDisplayWidgetBase::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIScrollDisplayWidgetBase,void(UIScrollDisplayWidgetBase::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<PVZ1ModeOutro, void (PVZ1ModeOutro::*)(int,
   int)>(Sexy::CBMemberTranslatorX<PVZ1ModeOutro, void (PVZ1ModeOutro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<PVZ1ModeOutro,void(PVZ1ModeOutro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,PVZ1ModeOutro,void(PVZ1ModeOutro::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<TimeEnergyModule, void (TimeEnergyModule::*)(int,
   int)>(Sexy::CBMemberTranslatorX<TimeEnergyModule, void (TimeEnergyModule::*)(int, int)> const&)
    */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<TimeEnergyModule,void(TimeEnergyModule::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,TimeEnergyModule,void(TimeEnergyModule::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<TimeEnergyModule, void
   (TimeEnergyModule::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<TimeEnergyModule,
   void (TimeEnergyModule::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<TimeEnergyModule,void(TimeEnergyModule::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,TimeEnergyModule,void(TimeEnergyModule::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<PVZ1ModeNetworkMgr, void (PVZ1ModeNetworkMgr::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<PVZ1ModeNetworkMgr, void
   (PVZ1ModeNetworkMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<PVZ1ModeNetworkMgr,void(PVZ1ModeNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,PVZ1ModeNetworkMgr,void(PVZ1ModeNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<ArtifactBeeEntity*, Sexy::RtSerialCommand*>::Delegate2<void
   (*)(ArtifactBeeEntity*, Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void
   (*)(ArtifactBeeEntity*, Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<ArtifactBeeEntity*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(ArtifactBeeEntity*,Sexy::RtSerialCommand*)>
          (Delegate2<ArtifactBeeEntity*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1
          )

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06999430;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<ArtifactBeeEntity*,Sexy::RtSerialCommand*,void(*)(ArtifactBeeEntity*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<ArtifactBeeEntity*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<ArtifactBeeEntity*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<ArtifactBeeEntity*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  ArtifactBeeEntity *pAVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = RtInvokeVariant::Get<ArtifactBeeEntity*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pAVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<ShadowVanillaWhirlPoolSubSystem, void
   (ShadowVanillaWhirlPoolSubSystem::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<ShadowVanillaWhirlPoolSubSystem, void
   (ShadowVanillaWhirlPoolSubSystem::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<ShadowVanillaWhirlPoolSubSystem,void(ShadowVanillaWhirlPoolSubSystem::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,ShadowVanillaWhirlPoolSubSystem,void(ShadowVanillaWhirlPoolSubSystem::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, std::string const&>::Delegate2<PlantPowerVine, void
   (PlantStatefulFramework::*)(std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<PlantPowerVine, void (PlantStatefulFramework::*)(std::string
   const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,std::string_const&>::
Delegate2<PlantPowerVine,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
          (Delegate2<std::string_const&,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0673e9a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,std::string_const&,PlantPowerVine,void(PlantStatefulFramework::*)(std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, std::string const&>::Delegate2<PlantPowerVine, void
   (PlantPowerVine::*)(std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<PlantPowerVine, void (PlantPowerVine::*)(std::string const&,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,std::string_const&>::
Delegate2<PlantPowerVine,void(PlantPowerVine::*)(std::string_const&,std::string_const&)>
          (Delegate2<std::string_const&,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0673e9a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,std::string_const&,PlantPowerVine,void(PlantPowerVine::*)(std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, Sexy::Point&>::Delegate2<PlantPowerVine, void (PlantPowerVine::*)(Plant*,
   Sexy::Point&)>(Sexy::CBMemberTranslatorX<PlantPowerVine, void (PlantPowerVine::*)(Plant*,
   Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,Sexy::Point&>::
Delegate2<PlantPowerVine,void(PlantPowerVine::*)(Plant*,Sexy::Point&)>
          (Delegate2<Plant*,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a50;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,Sexy::Point&,PlantPowerVine,void(PlantPowerVine::*)(Plant*,Sexy::Point&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, Sexy::Point&>::Delegate2<PlantCthulhuActinia, void
   (PlantCthulhuActinia::*)(Plant*, Sexy::Point&)>(Sexy::CBMemberTranslatorX<PlantCthulhuActinia,
   void (PlantCthulhuActinia::*)(Plant*, Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,Sexy::Point&>::
Delegate2<PlantCthulhuActinia,void(PlantCthulhuActinia::*)(Plant*,Sexy::Point&)>
          (Delegate2<Plant*,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a50;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,Sexy::Point&,PlantCthulhuActinia,void(PlantCthulhuActinia::*)(Plant*,Sexy::Point&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, Sexy::Point&>::Delegate2<GridItemCthulhuActiniaTentacle, void
   (GridItemCthulhuActiniaTentacle::*)(Plant*,
   Sexy::Point&)>(Sexy::CBMemberTranslatorX<GridItemCthulhuActiniaTentacle, void
   (GridItemCthulhuActiniaTentacle::*)(Plant*, Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,Sexy::Point&>::
Delegate2<GridItemCthulhuActiniaTentacle,void(GridItemCthulhuActiniaTentacle::*)(Plant*,Sexy::Point&)>
          (Delegate2<Plant*,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a50;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,Sexy::Point&,GridItemCthulhuActiniaTentacle,void(GridItemCthulhuActiniaTentacle::*)(Plant*,Sexy::Point&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, int>::Delegate2<CthulhuActiniaSubSystem, void
   (CthulhuActiniaSubSystem::*)(Zombie*, int)>(Sexy::CBMemberTranslatorX<CthulhuActiniaSubSystem,
   void (CthulhuActiniaSubSystem::*)(Zombie*, int)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,int>::
Delegate2<CthulhuActiniaSubSystem,void(CthulhuActiniaSubSystem::*)(Zombie*,int)>
          (Delegate2<Zombie*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695dc0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,int,CthulhuActiniaSubSystem,void(CthulhuActiniaSubSystem::*)(Zombie*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<DevilsParasiteEntity*, Sexy::RtSerialCommand*>::Delegate2<void
   (*)(DevilsParasiteEntity*, Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void
   (*)(DevilsParasiteEntity*, Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<DevilsParasiteEntity*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(DevilsParasiteEntity*,Sexy::RtSerialCommand*)>
          (Delegate2<DevilsParasiteEntity*,Sexy::RtSerialCommand*> *this,
          CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069b5f80;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<DevilsParasiteEntity*,Sexy::RtSerialCommand*,void(*)(DevilsParasiteEntity*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, Sexy::Point&>::Delegate2<PlantDevilsFlower, void
   (PlantDevilsFlower::*)(Plant*, Sexy::Point&)>(Sexy::CBMemberTranslatorX<PlantDevilsFlower, void
   (PlantDevilsFlower::*)(Plant*, Sexy::Point&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,Sexy::Point&>::
Delegate2<PlantDevilsFlower,void(PlantDevilsFlower::*)(Plant*,Sexy::Point&)>
          (Delegate2<Plant*,Sexy::Point&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06797a50;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,Sexy::Point&,PlantDevilsFlower,void(PlantDevilsFlower::*)(Plant*,Sexy::Point&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<DevilsParasiteEntity*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<DevilsParasiteEntity*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<DevilsParasiteEntity*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  DevilsParasiteEntity *pDVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = RtInvokeVariant::Get<DevilsParasiteEntity*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pDVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<RiftaShopButton, void
   (RiftaShopButton::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<RiftaShopButton, void
   (RiftaShopButton::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<RiftaShopButton,void(RiftaShopButton::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,RiftaShopButton,void(RiftaShopButton::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<RiftaShop, void (RiftaShop::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<RiftaShop, void (RiftaShop::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::Delegate2<RiftaShop,void(RiftaShop::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,RiftaShop,void(RiftaShop::*)(UIMessageBox*,int)>::thunk
  ;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<RiftaShop, void
   (RiftaShop::*)(bool, S2C_ShopItemPurchaseInfo const*)>(Sexy::CBMemberTranslatorX<RiftaShop, void
   (RiftaShop::*)(bool, S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<RiftaShop,void(RiftaShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,RiftaShop,void(RiftaShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<PlantWarsNetworkMgr, void (PlantWarsNetworkMgr::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<PlantWarsNetworkMgr,
   void (PlantWarsNetworkMgr::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<PlantWarsNetworkMgr,void(PlantWarsNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,PlantWarsNetworkMgr,void(PlantWarsNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<PlantWarsOutro, void (PlantWarsOutro::*)(int,
   int)>(Sexy::CBMemberTranslatorX<PlantWarsOutro, void (PlantWarsOutro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<PlantWarsOutro,void(PlantWarsOutro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,PlantWarsOutro,void(PlantWarsOutro::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PlantWarsLevelSelectUI, void
   (PlantWarsLevelSelectUI::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<PlantWarsLevelSelectUI, void
   (PlantWarsLevelSelectUI::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PlantWarsLevelSelectUI,void(PlantWarsLevelSelectUI::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PlantWarsLevelSelectUI,void(PlantWarsLevelSelectUI::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<UIPlantWarsActivityReward, void
   (UIPlantWarsActivityReward::*)(int, int)>(Sexy::CBMemberTranslatorX<UIPlantWarsActivityReward,
   void (UIPlantWarsActivityReward::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<UIPlantWarsActivityReward,void(UIPlantWarsActivityReward::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,UIPlantWarsActivityReward,void(UIPlantWarsActivityReward::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<FirstRechargeExtraManager, void (FirstRechargeExtraManager::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<FirstRechargeExtraManager, void
   (FirstRechargeExtraManager::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<FirstRechargeExtraManager,void(FirstRechargeExtraManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,FirstRechargeExtraManager,void(FirstRechargeExtraManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<FirstRechargeExtraUI, void (FirstRechargeExtraUI::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<FirstRechargeExtraUI,
   void (FirstRechargeExtraUI::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<FirstRechargeExtraUI,void(FirstRechargeExtraUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,FirstRechargeExtraUI,void(FirstRechargeExtraUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<MonthlyCardSpecialManager, void (MonthlyCardSpecialManager::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<MonthlyCardSpecialManager, void
   (MonthlyCardSpecialManager::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<MonthlyCardSpecialManager,void(MonthlyCardSpecialManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,MonthlyCardSpecialManager,void(MonthlyCardSpecialManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<MonthlyCardSpecialUI, void (MonthlyCardSpecialUI::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<MonthlyCardSpecialUI,
   void (MonthlyCardSpecialUI::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<MonthlyCardSpecialUI,void(MonthlyCardSpecialUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,MonthlyCardSpecialUI,void(MonthlyCardSpecialUI::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<DangerRoomSpecialOfferExtraManager, void
   (DangerRoomSpecialOfferExtraManager::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<DangerRoomSpecialOfferExtraManager, void
   (DangerRoomSpecialOfferExtraManager::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<DangerRoomSpecialOfferExtraManager,void(DangerRoomSpecialOfferExtraManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,DangerRoomSpecialOfferExtraManager,void(DangerRoomSpecialOfferExtraManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIBagItemBox*, int>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<UIBagItemBox*,int>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_069c1960;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<UIBagItemBox, void (UIBagItemBox::*)(int,
   int)>(Sexy::CBMemberTranslatorX<UIBagItemBox, void (UIBagItemBox::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<UIBagItemBox,void(UIBagItemBox::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,UIBagItemBox,void(UIBagItemBox::*)(int,int)>::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<UIBagItemBox*, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant const*)
   const */

void __thiscall
Sexy::Delegate2<UIBagItemBox*,int>::Invoke
          (Delegate2<UIBagItemBox*,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2)

{
  int iVar1;
  UIBagItemBox *pUVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar2 = RtInvokeVariant::Get<UIBagItemBox*>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pUVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<UIBagItemBox*, int>::Delegate2<PlantPieceButton, void
   (PlantPieceButton::*)(UIBagItemBox*, int)>(Sexy::CBMemberTranslatorX<PlantPieceButton, void
   (PlantPieceButton::*)(UIBagItemBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIBagItemBox*,int>::
Delegate2<PlantPieceButton,void(PlantPieceButton::*)(UIBagItemBox*,int)>
          (Delegate2<UIBagItemBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069c1960;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIBagItemBox*,int,PlantPieceButton,void(PlantPieceButton::*)(UIBagItemBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIBagItemBox*, int>::Delegate2<AvatarPieceButton, void
   (AvatarPieceButton::*)(UIBagItemBox*, int)>(Sexy::CBMemberTranslatorX<AvatarPieceButton, void
   (AvatarPieceButton::*)(UIBagItemBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIBagItemBox*,int>::
Delegate2<AvatarPieceButton,void(AvatarPieceButton::*)(UIBagItemBox*,int)>
          (Delegate2<UIBagItemBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069c1960;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIBagItemBox*,int,AvatarPieceButton,void(AvatarPieceButton::*)(UIBagItemBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIBagItemBox*, int>::Delegate2<AccessoryPieceButton, void
   (AccessoryPieceButton::*)(UIBagItemBox*, int)>(Sexy::CBMemberTranslatorX<AccessoryPieceButton,
   void (AccessoryPieceButton::*)(UIBagItemBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIBagItemBox*,int>::
Delegate2<AccessoryPieceButton,void(AccessoryPieceButton::*)(UIBagItemBox*,int)>
          (Delegate2<UIBagItemBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069c1960;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIBagItemBox*,int,AccessoryPieceButton,void(AccessoryPieceButton::*)(UIBagItemBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIBagItemBox*, int>::Delegate2<MaterialItemButton, void
   (MaterialItemButton::*)(UIBagItemBox*, int)>(Sexy::CBMemberTranslatorX<MaterialItemButton, void
   (MaterialItemButton::*)(UIBagItemBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIBagItemBox*,int>::
Delegate2<MaterialItemButton,void(MaterialItemButton::*)(UIBagItemBox*,int)>
          (Delegate2<UIBagItemBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069c1960;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIBagItemBox*,int,MaterialItemButton,void(MaterialItemButton::*)(UIBagItemBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIBagItemBox*, int>::Delegate2<TrialCardItemButton, void
   (TrialCardItemButton::*)(UIBagItemBox*, int)>(Sexy::CBMemberTranslatorX<TrialCardItemButton, void
   (TrialCardItemButton::*)(UIBagItemBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIBagItemBox*,int>::
Delegate2<TrialCardItemButton,void(TrialCardItemButton::*)(UIBagItemBox*,int)>
          (Delegate2<UIBagItemBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_069c1960;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIBagItemBox*,int,TrialCardItemButton,void(TrialCardItemButton::*)(UIBagItemBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<TrialCardItemButton, void
   (TrialCardItemButton::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<TrialCardItemButton, void
   (TrialCardItemButton::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<TrialCardItemButton,void(TrialCardItemButton::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,TrialCardItemButton,void(TrialCardItemButton::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<MaterialItemButton, void (MaterialItemButton::*)(int,
   int)>(Sexy::CBMemberTranslatorX<MaterialItemButton, void (MaterialItemButton::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<MaterialItemButton,void(MaterialItemButton::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,MaterialItemButton,void(MaterialItemButton::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIBag, void (UIBag::*)(bool, std::set<int, std::less<int>, std::allocator<int>
   > const&)>(Sexy::CBMemberTranslatorX<UIBag, void (UIBag::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIBag,void(UIBag::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIBag,void(UIBag::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<BoardEntity*, int>::Delegate2<AnimateArtifactMowerSwarm, void
   (AnimateArtifactMowerSwarm::*)(BoardEntity*,
   int)>(Sexy::CBMemberTranslatorX<AnimateArtifactMowerSwarm, void
   (AnimateArtifactMowerSwarm::*)(BoardEntity*, int)> const&) */

void __thiscall
Sexy::Delegate2<BoardEntity*,int>::
Delegate2<AnimateArtifactMowerSwarm,void(AnimateArtifactMowerSwarm::*)(BoardEntity*,int)>
          (Delegate2<BoardEntity*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695e00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<BoardEntity*,int,AnimateArtifactMowerSwarm,void(AnimateArtifactMowerSwarm::*)(BoardEntity*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PVZ1ModeShopButton, void
   (PVZ1ModeShopButton::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<PVZ1ModeShopButton, void
   (PVZ1ModeShopButton::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PVZ1ModeShopButton,void(PVZ1ModeShopButton::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PVZ1ModeShopButton,void(PVZ1ModeShopButton::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<PVZ1ModeShop, void
   (PVZ1ModeShop::*)(bool, S2C_ShopItemPurchaseInfo const*)>(Sexy::CBMemberTranslatorX<PVZ1ModeShop,
   void (PVZ1ModeShop::*)(bool, S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<PVZ1ModeShop,void(PVZ1ModeShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,PVZ1ModeShop,void(PVZ1ModeShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<CustomLevelShop, void
   (CustomLevelShop::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<CustomLevelShop, void (CustomLevelShop::*)(bool,
   S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<CustomLevelShop,void(CustomLevelShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,CustomLevelShop,void(CustomLevelShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<PVZ1ModeSelectLevelBonusWidget, void
   (PVZ1ModeSelectLevelBonusWidget::*)(int,
   int)>(Sexy::CBMemberTranslatorX<PVZ1ModeSelectLevelBonusWidget, void
   (PVZ1ModeSelectLevelBonusWidget::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::
Delegate2<PVZ1ModeSelectLevelBonusWidget,void(PVZ1ModeSelectLevelBonusWidget::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,PVZ1ModeSelectLevelBonusWidget,void(PVZ1ModeSelectLevelBonusWidget::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, bool>::Delegate2<PVZ1ModeSelectLevel, void (PVZ1ModeSelectLevel::*)(int,
   bool)>(Sexy::CBMemberTranslatorX<PVZ1ModeSelectLevel, void (PVZ1ModeSelectLevel::*)(int, bool)>
   const&) */

void __thiscall
Sexy::Delegate2<int,bool>::Delegate2<PVZ1ModeSelectLevel,void(PVZ1ModeSelectLevel::*)(int,bool)>
          (Delegate2<int,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06711790;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,bool,PVZ1ModeSelectLevel,void(PVZ1ModeSelectLevel::*)(int,bool)>::
       thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<PVZ1ModeSelectLevel, void (PVZ1ModeSelectLevel::*)(int,
   int)>(Sexy::CBMemberTranslatorX<PVZ1ModeSelectLevel, void (PVZ1ModeSelectLevel::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<PVZ1ModeSelectLevel,void(PVZ1ModeSelectLevel::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,PVZ1ModeSelectLevel,void(PVZ1ModeSelectLevel::*)(int,int)>::thunk
  ;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PennyClassroomShopButton, void
   (PVZ1ModeShopButton::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<PennyClassroomShopButton,
   void (PVZ1ModeShopButton::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PennyClassroomShopButton,void(PVZ1ModeShopButton::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PennyClassroomShopButton,void(PVZ1ModeShopButton::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIPennyClassroom, void (UIPennyClassroom::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UIPennyClassroom, void
   (UIPennyClassroom::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIPennyClassroom,void(UIPennyClassroom::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIPennyClassroom,void(UIPennyClassroom::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIPennyClassroomShop, void (UIPennyClassroomShop::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UIPennyClassroomShop,
   void (UIPennyClassroomShop::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIPennyClassroomShop,void(UIPennyClassroomShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIPennyClassroomShop,void(UIPennyClassroomShop::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UIPennyClassroomShop, void
   (UIPennyClassroomShop::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<UIPennyClassroomShop, void (UIPennyClassroomShop::*)(bool,
   S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UIPennyClassroomShop,void(UIPennyClassroomShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UIPennyClassroomShop,void(UIPennyClassroomShop::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<PennyClassroomManager, void (PennyClassroomManager::*)(bool, std::set<int,
   std::less<int>, std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<PennyClassroomManager,
   void (PennyClassroomManager::*)(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<PennyClassroomManager,void(PennyClassroomManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,PennyClassroomManager,void(PennyClassroomManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<PVZ2UnchartedModeOutro, void
   (PVZ2UnchartedModeOutro::*)(int, int)>(Sexy::CBMemberTranslatorX<PVZ2UnchartedModeOutro, void
   (PVZ2UnchartedModeOutro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,PVZ2UnchartedModeOutro,void(PVZ2UnchartedModeOutro::*)(int,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*>::Delegate2<NewBowlingMinigameModule, void (NewBowlingMinigameModule::*)(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<NewBowlingMinigameModule, void
   (NewBowlingMinigameModule::*)(Sexy::Point const&, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>::
Delegate2<NewBowlingMinigameModule,void(NewBowlingMinigameModule::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695de0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,NewBowlingMinigameModule,void(NewBowlingMinigameModule::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<CardGameOutro, void (CardGameOutro::*)(int,
   int)>(Sexy::CBMemberTranslatorX<CardGameOutro, void (CardGameOutro::*)(int, int)> const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<CardGameOutro,void(CardGameOutro::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,CardGameOutro,void(CardGameOutro::*)(int,int)>::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const&>::Delegate2<PlantMaybeeSubSystem, void
   (PlantMaybeeSubSystem::*)(Zombie*, DamageInfo
   const&)>(Sexy::CBMemberTranslatorX<PlantMaybeeSubSystem, void (PlantMaybeeSubSystem::*)(Zombie*,
   DamageInfo const&)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const&>::
Delegate2<PlantMaybeeSubSystem,void(PlantMaybeeSubSystem::*)(Zombie*,DamageInfo_const&)>
          (Delegate2<Zombie*,DamageInfo_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689850;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const&,PlantMaybeeSubSystem,void(PlantMaybeeSubSystem::*)(Zombie*,DamageInfo_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<GridItemThorns, void
   (GridItemThorns::*)(Zombie*, DamageInfo const*)>(Sexy::CBMemberTranslatorX<GridItemThorns, void
   (GridItemThorns::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<GridItemThorns,void(GridItemThorns::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,GridItemThorns,void(GridItemThorns::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<CornucopiaShopButton, void
   (CornucopiaShopButton::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<CornucopiaShopButton,
   void (CornucopiaShopButton::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<CornucopiaShopButton,void(CornucopiaShopButton::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,CornucopiaShopButton,void(CornucopiaShopButton::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<CornucopiaBubbleWidget, void
   (CornucopiaBubbleWidget::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<CornucopiaBubbleWidget, void
   (CornucopiaBubbleWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<CornucopiaBubbleWidget,void(CornucopiaBubbleWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,CornucopiaBubbleWidget,void(CornucopiaBubbleWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UICornucopia, void
   (UICornucopia::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UICornucopia, void
   (UICornucopia::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::Delegate2<UICornucopia,void(UICornucopia::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UICornucopia,void(UICornucopia::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<NewTreasureWidget, void
   (NewTreasureWidget::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<NewTreasureWidget, void
   (NewTreasureWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<NewTreasureWidget,void(NewTreasureWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,NewTreasureWidget,void(NewTreasureWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UICornucopia, void
   (UICornucopia::*)(bool, S2C_ShopItemPurchaseInfo const*)>(Sexy::CBMemberTranslatorX<UICornucopia,
   void (UICornucopia::*)(bool, S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UICornucopia,void(UICornucopia::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UICornucopia,void(UICornucopia::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UICornucopia, void (UICornucopia::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UICornucopia, void
   (UICornucopia::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UICornucopia,void(UICornucopia::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UICornucopia,void(UICornucopia::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<InvitationLotteryPanel, void
   (InvitationLotteryPanel::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<InvitationLotteryPanel, void
   (InvitationLotteryPanel::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<InvitationLotteryPanel,void(InvitationLotteryPanel::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,InvitationLotteryPanel,void(InvitationLotteryPanel::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PennyGiftConfig, void
   (PennyGiftConfig::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<PennyGiftConfig, void
   (PennyGiftConfig::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PennyGiftConfig,void(PennyGiftConfig::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PennyGiftConfig,void(PennyGiftConfig::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PenntGiftBoxItem, void
   (PenntGiftBoxItem::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<PenntGiftBoxItem, void
   (PenntGiftBoxItem::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PenntGiftBoxItem,void(PenntGiftBoxItem::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PenntGiftBoxItem,void(PenntGiftBoxItem::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PennyGiftBoxPage, void
   (PennyGiftBoxPage::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<PennyGiftBoxPage, void
   (PennyGiftBoxPage::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PennyGiftBoxPage,void(PennyGiftBoxPage::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PennyGiftBoxPage,void(PennyGiftBoxPage::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_7DaysLoginReward
   const*>::Delegate2<NFSLinkageDailySignActivityScrollPanel, void
   (NFSLinkageDailySignActivityScrollPanel::*)(bool, S2C_7DaysLoginReward
   const*)>(Sexy::CBMemberTranslatorX<NFSLinkageDailySignActivityScrollPanel, void
   (NFSLinkageDailySignActivityScrollPanel::*)(bool, S2C_7DaysLoginReward const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_7DaysLoginReward_const*>::
Delegate2<NFSLinkageDailySignActivityScrollPanel,void(NFSLinkageDailySignActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>
          (Delegate2<bool,S2C_7DaysLoginReward_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066ca740;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_7DaysLoginReward_const*,NFSLinkageDailySignActivityScrollPanel,void(NFSLinkageDailySignActivityScrollPanel::*)(bool,S2C_7DaysLoginReward_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UITourismOctober, void
   (UITourismOctober::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<UITourismOctober, void (UITourismOctober::*)(bool,
   S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UITourismOctober,void(UITourismOctober::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UITourismOctober,void(UITourismOctober::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIPartyAssist, void
   (UIPartyAssist::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UIPartyAssist, void
   (UIPartyAssist::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIPartyAssist,void(UIPartyAssist::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIPartyAssist,void(UIPartyAssist::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIPartyAssistWishingPoolSelect, void
   (UIPartyAssistWishingPoolSelect::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<UIPartyAssistWishingPoolSelect, void
   (UIPartyAssistWishingPoolSelect::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIPartyAssistWishingPoolSelect,void(UIPartyAssistWishingPoolSelect::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIPartyAssistWishingPoolSelect,void(UIPartyAssistWishingPoolSelect::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PartyTreasureWidget, void
   (PartyTreasureWidget::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<PartyTreasureWidget, void
   (PartyTreasureWidget::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PartyTreasureWidget,void(PartyTreasureWidget::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PartyTreasureWidget,void(PartyTreasureWidget::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<PartyAssistRewardFrame, void
   (AutumnHarvestRewardFrame::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<PartyAssistRewardFrame, void
   (AutumnHarvestRewardFrame::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<PartyAssistRewardFrame,void(AutumnHarvestRewardFrame::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,PartyAssistRewardFrame,void(AutumnHarvestRewardFrame::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIPartyAssist, void (UIPartyAssist::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UIPartyAssist, void
   (UIPartyAssist::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIPartyAssist,void(UIPartyAssist::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIPartyAssist,void(UIPartyAssist::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIAccumulatedLoginButton, void (UIAccumulatedLoginButton::*)(bool,
   std::set<int, std::less<int>, std::allocator<int> >
   const&)>(Sexy::CBMemberTranslatorX<UIAccumulatedLoginButton, void
   (UIAccumulatedLoginButton::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIAccumulatedLoginButton,void(UIAccumulatedLoginButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIAccumulatedLoginButton,void(UIAccumulatedLoginButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<UIAutumnHarvest, void
   (UIAutumnHarvest::*)(UIMessageBox*, int)>(Sexy::CBMemberTranslatorX<UIAutumnHarvest, void
   (UIAutumnHarvest::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<UIAutumnHarvest,void(UIAutumnHarvest::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,UIAutumnHarvest,void(UIAutumnHarvest::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<UIMessageBox*, int>::Delegate2<AutumnHarvestRewardFrame, void
   (AutumnHarvestRewardFrame::*)(UIMessageBox*,
   int)>(Sexy::CBMemberTranslatorX<AutumnHarvestRewardFrame, void
   (AutumnHarvestRewardFrame::*)(UIMessageBox*, int)> const&) */

void __thiscall
Sexy::Delegate2<UIMessageBox*,int>::
Delegate2<AutumnHarvestRewardFrame,void(AutumnHarvestRewardFrame::*)(UIMessageBox*,int)>
          (Delegate2<UIMessageBox*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06608b70;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<UIMessageBox*,int,AutumnHarvestRewardFrame,void(AutumnHarvestRewardFrame::*)(UIMessageBox*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<UIAutumnHarvest, void
   (UIAutumnHarvest::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<UIAutumnHarvest, void (UIAutumnHarvest::*)(bool,
   S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<UIAutumnHarvest,void(UIAutumnHarvest::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,UIAutumnHarvest,void(UIAutumnHarvest::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<UIAutumnHarvest, void (UIAutumnHarvest::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<UIAutumnHarvest, void
   (UIAutumnHarvest::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&)
    */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<UIAutumnHarvest,void(UIAutumnHarvest::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,UIAutumnHarvest,void(UIAutumnHarvest::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, S2C_ShopItemPurchaseInfo const*>::Delegate2<AutumnHarvestShopWidget, void
   (AutumnHarvestShopWidget::*)(bool, S2C_ShopItemPurchaseInfo
   const*)>(Sexy::CBMemberTranslatorX<AutumnHarvestShopWidget, void
   (AutumnHarvestShopWidget::*)(bool, S2C_ShopItemPurchaseInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<bool,S2C_ShopItemPurchaseInfo_const*>::
Delegate2<AutumnHarvestShopWidget,void(AutumnHarvestShopWidget::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
          (Delegate2<bool,S2C_ShopItemPurchaseInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06631230;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,S2C_ShopItemPurchaseInfo_const*,AutumnHarvestShopWidget,void(AutumnHarvestShopWidget::*)(bool,S2C_ShopItemPurchaseInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<ZombieZombossMech_PVZ1_Robot, void
   (ZombieZombossMech_PVZ1_Robot::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<ZombieZombossMech_PVZ1_Robot, void
   (ZombieZombossMech_PVZ1_Robot::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<ZombieZombossMech_PVZ1_Robot,void(ZombieZombossMech_PVZ1_Robot::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,ZombieZombossMech_PVZ1_Robot,void(ZombieZombossMech_PVZ1_Robot::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<GameObject*, float>::Delegate2<ZombieZombossMech_PVZ1_Robot, void
   (ZombieZombossMech_PVZ1_Robot::*)(GameObject*,
   float)>(Sexy::CBMemberTranslatorX<ZombieZombossMech_PVZ1_Robot, void
   (ZombieZombossMech_PVZ1_Robot::*)(GameObject*, float)> const&) */

void __thiscall
Sexy::Delegate2<GameObject*,float>::
Delegate2<ZombieZombossMech_PVZ1_Robot,void(ZombieZombossMech_PVZ1_Robot::*)(GameObject*,float)>
          (Delegate2<GameObject*,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06753310;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<GameObject*,float,ZombieZombossMech_PVZ1_Robot,void(ZombieZombossMech_PVZ1_Robot::*)(GameObject*,float)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*>::Delegate2<ZombieVanModule, void (ZombieVanModule::*)(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<ZombieVanModule, void (ZombieVanModule::*)(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>::
Delegate2<ZombieVanModule,void(ZombieVanModule::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695de0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ZombieVanModule,void(ZombieVanModule::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, int>::Delegate2<PVZ1CopycatsModule, void
   (PVZ1CopycatsModule::*)(Sexy::Point const&, int)>(Sexy::CBMemberTranslatorX<PVZ1CopycatsModule,
   void (PVZ1CopycatsModule::*)(Sexy::Point const&, int)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,int>::
Delegate2<PVZ1CopycatsModule,void(PVZ1CopycatsModule::*)(Sexy::Point_const&,int)>
          (Delegate2<Sexy::Point_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06a21400;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,int,PVZ1CopycatsModule,void(PVZ1CopycatsModule::*)(Sexy::Point_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*>::Delegate2<MinigameCopycatsTutorialIntro, void (MinigameCopycatsTutorialIntro::*)(Sexy::Point
   const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<MinigameCopycatsTutorialIntro, void
   (MinigameCopycatsTutorialIntro::*)(Sexy::Point const&, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>::
Delegate2<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695de0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, int>::Delegate2<MinigameCopycatsTutorialIntro, void
   (MinigameCopycatsTutorialIntro::*)(Sexy::Point const&,
   int)>(Sexy::CBMemberTranslatorX<MinigameCopycatsTutorialIntro, void
   (MinigameCopycatsTutorialIntro::*)(Sexy::Point const&, int)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,int>::
Delegate2<MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)(Sexy::Point_const&,int)>
          (Delegate2<Sexy::Point_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06a21400;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,int,MinigameCopycatsTutorialIntro,void(MinigameCopycatsTutorialIntro::*)(Sexy::Point_const&,int)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Sexy::Point const&, int>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,int>::Invoke
          (Delegate2<Sexy::Point_const&,int> *this,RtInvokeVariant *param_1,RtInvokeVariant *param_2
          )

{
  int iVar1;
  Point *pPVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = RtInvokeVariant::Get<Sexy::Point_const&>(param_2);
  iVar1 = RtInvokeVariant::Get<int>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pPVar2,iVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<ResilienceTutorialIntro, void
   (ResilienceTutorialIntro::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<ResilienceTutorialIntro, void
   (ResilienceTutorialIntro::*)(Zombie*, DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*>::Delegate2<ResilienceTutorialIntro, void (ResilienceTutorialIntro::*)(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<ResilienceTutorialIntro, void
   (ResilienceTutorialIntro::*)(Sexy::Point const&, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>::
Delegate2<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695de0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const&>::Delegate2<ResilienceTutorialIntro, void
   (ResilienceTutorialIntro::*)(Zombie*, DamageInfo
   const&)>(Sexy::CBMemberTranslatorX<ResilienceTutorialIntro, void
   (ResilienceTutorialIntro::*)(Zombie*, DamageInfo const&)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const&>::
Delegate2<ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Zombie*,DamageInfo_const&)>
          (Delegate2<Zombie*,DamageInfo_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689850;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const&,ResilienceTutorialIntro,void(ResilienceTutorialIntro::*)(Zombie*,DamageInfo_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, std::set<int, std::less<int>, std::allocator<int> >
   const&>::Delegate2<QuickJumpUtil, void (QuickJumpUtil::*)(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&)>(Sexy::CBMemberTranslatorX<QuickJumpUtil, void
   (QuickJumpUtil::*)(bool, std::set<int, std::less<int>, std::allocator<int> > const&)> const&) */

void __thiscall
Sexy::Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&>::
Delegate2<QuickJumpUtil,void(QuickJumpUtil::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
          (Delegate2<bool,std::set<int,std::less<int>,std::allocator<int>>const&> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066145e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,std::set<int,std::less<int>,std::allocator<int>>const&,QuickJumpUtil,void(QuickJumpUtil::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, S2C_StaticConfig const*>::Delegate2<QuickJumpUtil, void
   (QuickJumpUtil::*)(int, S2C_StaticConfig const*)>(Sexy::CBMemberTranslatorX<QuickJumpUtil, void
   (QuickJumpUtil::*)(int, S2C_StaticConfig const*)> const&) */

void __thiscall
Sexy::Delegate2<int,S2C_StaticConfig_const*>::
Delegate2<QuickJumpUtil,void(QuickJumpUtil::*)(int,S2C_StaticConfig_const*)>
          (Delegate2<int,S2C_StaticConfig_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06861060;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,S2C_StaticConfig_const*,QuickJumpUtil,void(QuickJumpUtil::*)(int,S2C_StaticConfig_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, int*>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(std::string const&,
   int*)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(std::string
   const&, int*)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,int*>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,int*)>
          (Delegate2<std::string_const&,int*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0676b1f0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,int*,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,int*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, int>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(std::string const&,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(std::string
   const&, int)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,int>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,int)>
          (Delegate2<std::string_const&,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792750;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, int>::Delegate2<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(int,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(int, int)>
   const&) */

void __thiscall
Sexy::Delegate2<int,int>::Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,int)>
          (Delegate2<int,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06610c00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,int)>::
       thunk;
  return;
}


/* Sexy::Delegate2<Plant*, int>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Plant*, int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Plant*, int)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,int>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Plant*,int)>
          (Delegate2<Plant*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066be840;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Plant*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, std::string const&>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(int, std::string
   const&)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(int,
   std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<int,std::string_const&>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,std::string_const&)>
          (Delegate2<int,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06614600;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,std::string_const&,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<EventMetrics*, int>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(EventMetrics*, int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter,
   void (Lua::LMMessageRouter::*)(EventMetrics*, int)> const&) */

void __thiscall
Sexy::Delegate2<EventMetrics*,int>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(EventMetrics*,int)>
          (Delegate2<EventMetrics*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792890;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<EventMetrics*,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(EventMetrics*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, std::string const&>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(std::string const&, std::string
   const&)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(std::string const&, std::string const&)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,std::string_const&>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,std::string_const&)>
          (Delegate2<std::string_const&,std::string_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0673e9a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,std::string_const&,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,std::string_const&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const*>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Zombie*, DamageInfo
   const*)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(Zombie*,
   DamageInfo const*)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const*>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Zombie*,DamageInfo_const*)>
          (Delegate2<Zombie*,DamageInfo_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066117e0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const*,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Zombie*,DamageInfo_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, bool>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Plant*, bool)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Plant*, bool)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,bool>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Plant*,bool)>
          (Delegate2<Plant*,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066cb360;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,bool,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Plant*,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<PlantFramework*, int>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(PlantFramework*, int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter,
   void (Lua::LMMessageRouter::*)(PlantFramework*, int)> const&) */

void __thiscall
Sexy::Delegate2<PlantFramework*,int>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(PlantFramework*,int)>
          (Delegate2<PlantFramework*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0686b3c0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<PlantFramework*,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(PlantFramework*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<PlayerInfo const*, Sexy::MemoryImage*>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(PlayerInfo const*,
   Sexy::MemoryImage*)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(PlayerInfo const*, Sexy::MemoryImage*)> const&) */

void __thiscall
Sexy::Delegate2<PlayerInfo_const*,Sexy::MemoryImage*>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(PlayerInfo_const*,Sexy::MemoryImage*)>
          (Delegate2<PlayerInfo_const*,Sexy::MemoryImage*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067920a0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<PlayerInfo_const*,Sexy::MemoryImage*,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(PlayerInfo_const*,Sexy::MemoryImage*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<std::string const&, bool>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(std::string const&,
   bool)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(std::string
   const&, bool)> const&) */

void __thiscall
Sexy::Delegate2<std::string_const&,bool>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,bool)>
          (Delegate2<std::string_const&,bool> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06a2ce40;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<std::string_const&,bool,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(std::string_const&,bool)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<int, WaveDefinition const*>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(int, WaveDefinition
   const*)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(int,
   WaveDefinition const*)> const&) */

void __thiscall
Sexy::Delegate2<int,WaveDefinition_const*>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,WaveDefinition_const*)>
          (Delegate2<int,WaveDefinition_const*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_0675a280;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<int,WaveDefinition_const*,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(int,WaveDefinition_const*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<bool, int>::Delegate2<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(bool,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(bool, int)>
   const&) */

void __thiscall
Sexy::Delegate2<bool,int>::Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(bool,int)>
          (Delegate2<bool,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06611860;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<bool,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(bool,int)>::
       thunk;
  return;
}


/* Sexy::Delegate2<CollectableSun*, int>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(CollectableSun*, int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter,
   void (Lua::LMMessageRouter::*)(CollectableSun*, int)> const&) */

void __thiscall
Sexy::Delegate2<CollectableSun*,int>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(CollectableSun*,int)>
          (Delegate2<CollectableSun*,int> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792710;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<CollectableSun*,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(CollectableSun*,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::RtWeakPtr<MagentoProductProps> const&,
   int>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps> const&,
   int)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps> const&, int)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::RtWeakPtr<MagentoProductProps>const&,int>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int)>
          (Delegate2<Sexy::RtWeakPtr<MagentoProductProps>const&,int> *this,
          CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792810;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::RtWeakPtr<MagentoProductProps>const&,int,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::RtWeakPtr<MagentoProductProps>const&,int)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, std::vector<PlantingReason, std::allocator<PlantingReason>
   >*>::Delegate2<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(Sexy::Point const&,
   std::vector<PlantingReason, std::allocator<PlantingReason>
   >*)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(Sexy::Point
   const&, std::vector<PlantingReason, std::allocator<PlantingReason> >*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
          (Delegate2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06695de0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::Point_const&,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, bool*>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::Point const&,
   bool*)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::Point const&, bool*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,bool*>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::Point_const&,bool*)>
          (Delegate2<Sexy::Point_const&,bool*> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067c62b0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,bool*,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::Point_const&,bool*)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<TreasurePool const*, std::vector<TreasureReward const*,
   std::allocator<TreasureReward const*> >&>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(TreasurePool const*, std::vector<TreasureReward const*,
   std::allocator<TreasureReward const*> >&)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(TreasurePool const*, std::vector<TreasureReward const*,
   std::allocator<TreasureReward const*> >&)> const&) */

void __thiscall
Sexy::
Delegate2<TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&>
::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&)>
          (Delegate2<TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&>
           *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06792930;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(TreasurePool_const*,std::vector<TreasureReward_const*,std::allocator<TreasureReward_const*>>&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Plant*, DamageInfo&>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Plant*, DamageInfo&)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter,
   void (Lua::LMMessageRouter::*)(Plant*, DamageInfo&)> const&) */

void __thiscall
Sexy::Delegate2<Plant*,DamageInfo&>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Plant*,DamageInfo&)>
          (Delegate2<Plant*,DamageInfo&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_066a7e00;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Plant*,DamageInfo&,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Plant*,DamageInfo&)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Sexy::Point const&, float>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::Point const&,
   float)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Sexy::Point const&, float)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Point_const&,float>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::Point_const&,float)>
          (Delegate2<Sexy::Point_const&,float> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_067c8ba0;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Sexy::Point_const&,float,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Sexy::Point_const&,float)>
       ::thunk;
  return;
}


/* Sexy::Delegate2<Zombie*, DamageInfo const&>::Delegate2<Lua::LMMessageRouter, void
   (Lua::LMMessageRouter::*)(Zombie*, DamageInfo
   const&)>(Sexy::CBMemberTranslatorX<Lua::LMMessageRouter, void (Lua::LMMessageRouter::*)(Zombie*,
   DamageInfo const&)> const&) */

void __thiscall
Sexy::Delegate2<Zombie*,DamageInfo_const&>::
Delegate2<Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Zombie*,DamageInfo_const&)>
          (Delegate2<Zombie*,DamageInfo_const&> *this,CBMemberTranslatorX *param_1)

{
  DelegateBase::
  DelegateBase<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06689850;
  *(code **)(this + 0x28) =
       CBMemberTranslator2<Zombie*,DamageInfo_const&,Lua::LMMessageRouter,void(Lua::LMMessageRouter::*)(Zombie*,DamageInfo_const&)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<std::string const&, bool>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<std::string_const&,bool>::Invoke
          (Delegate2<std::string_const&,bool> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  string *psVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = RtInvokeVariant::Get<std::string_const&>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,psVar2,bVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Sexy::Image*, Sexy::RtSerialCommand*>::Delegate2<void (*)(Sexy::Image*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(Sexy::Image*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::Image*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(Sexy::Image*,Sexy::RtSerialCommand*)>
          (Delegate2<Sexy::Image*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06a2eac0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Sexy::Image*,Sexy::RtSerialCommand*,void(*)(Sexy::Image*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Sexy::Image*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Sexy::Image*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<Sexy::Image*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  Image *pIVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar1 = RtInvokeVariant::Get<Sexy::Image*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pIVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Sexy::CurvedVal*, Sexy::RtSerialCommand*>::Delegate2<void (*)(Sexy::CurvedVal*,
   Sexy::RtSerialCommand*)>(Sexy::CBFunctionTranslatorX<void (*)(Sexy::CurvedVal*,
   Sexy::RtSerialCommand*)> const&) */

void __thiscall
Sexy::Delegate2<Sexy::CurvedVal*,Sexy::RtSerialCommand*>::
Delegate2<void(*)(Sexy::CurvedVal*,Sexy::RtSerialCommand*)>
          (Delegate2<Sexy::CurvedVal*,Sexy::RtSerialCommand*> *this,CBFunctionTranslatorX *param_1)

{
  DelegateBase::DelegateBase<Sexy::RtId(*)(Sexy::RtObject*)>((DelegateBase *)this,param_1);
  *(undefined ***)this = &PTR_Invoke_06a2fad0;
  *(code **)(this + 0x28) =
       CBFunctionTranslator2<Sexy::CurvedVal*,Sexy::RtSerialCommand*,void(*)(Sexy::CurvedVal*,Sexy::RtSerialCommand*)>
       ::thunk;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Sexy::CurvedVal*, Sexy::RtSerialCommand*>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Sexy::CurvedVal*,Sexy::RtSerialCommand*>::Invoke
          (Delegate2<Sexy::CurvedVal*,Sexy::RtSerialCommand*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  CurvedVal *pCVar1;
  RtSerialCommand *pRVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = RtInvokeVariant::Get<Sexy::CurvedVal*>(param_2);
  pRVar2 = RtInvokeVariant::Get<Sexy::RtSerialCommand*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pCVar1,pRVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<char const*, char const*>::Delegate2(Sexy::Delegate2<char const*, char const*>&&)
    */

void __thiscall
Sexy::Delegate2<char_const*,char_const*>::Delegate2
          (Delegate2<char_const*,char_const*> *this,Delegate2 *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)this,(DelegateBase *)param_1);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR_Invoke_06a31cb0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<char const*, char const*>::Invoke(Sexy::RtInvokeVariant*, Sexy::RtInvokeVariant
   const*) const */

void __thiscall
Sexy::Delegate2<char_const*,char_const*>::Invoke
          (Delegate2<char_const*,char_const*> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = RtInvokeVariant::Get<char_const*>(param_2);
  pcVar2 = RtInvokeVariant::Get<char_const*>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pcVar1,pcVar2);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Delegate2<Sexy::IPurchaseDriver*, bool>::Delegate2(Sexy::DelegateBase::DummyInit*) */

void Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::Delegate2(DummyInit *param_1)

{
  DelegateBase::DelegateBase((DelegateBase *)param_1);
  *(undefined ***)param_1 = &PTR_Invoke_06a35320;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Delegate2<Sexy::IPurchaseDriver*, bool>::Invoke(Sexy::RtInvokeVariant*,
   Sexy::RtInvokeVariant const*) const */

void __thiscall
Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::Invoke
          (Delegate2<Sexy::IPurchaseDriver*,bool> *this,RtInvokeVariant *param_1,
          RtInvokeVariant *param_2)

{
  bool bVar1;
  IPurchaseDriver *pIVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar2 = RtInvokeVariant::Get<Sexy::IPurchaseDriver*>(param_2);
  bVar1 = RtInvokeVariant::Get<bool>(param_2 + 0x10);
  (**(code **)(this + 0x28))(this,pIVar2,bVar1);
  if (param_1 != (RtInvokeVariant *)0x0) {
    RtInvokeVariant::RtInvokeVariant((RtInvokeVariant *)&local_18,0);
    *(undefined8 *)param_1 = local_18;
    *(undefined8 *)(param_1 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


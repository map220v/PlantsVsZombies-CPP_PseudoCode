// Class: PVPCompensationNoticeDlgCaller


/* PVPCompensationNoticeDlgCaller::destroy() */

void PVPCompensationNoticeDlgCaller::destroy(void)

{
  if (s_pInstance != (void *)0x0) {
    AK::FreeHook(s_pInstance);
    s_pInstance = (void *)0x0;
  }
  return;
}


/* PVPCompensationNoticeDlgCaller::requestService(int) */

void __thiscall
PVPCompensationNoticeDlgCaller::requestService(PVPCompensationNoticeDlgCaller *this,int param_1)

{
  INetworkMsgProcess *this_00;
  
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  INetworkMsgProcess::RequestPVPCompensationNoticeInfos(this_00,param_1);
  return;
}


/* PVPCompensationNoticeDlgCaller::onPVPCompensationReward(int, int, int) */

void __thiscall
PVPCompensationNoticeDlgCaller::onPVPCompensationReward
          (PVPCompensationNoticeDlgCaller *this,int param_1,int param_2,int param_3)

{
  PVPCompensationNoticeDlg *this_00;
  
  this_00 = (PVPCompensationNoticeDlg *)UISingletonDialog<PVPCompensationNoticeDlg>::ShowDialog();
  if (this_00 != (PVPCompensationNoticeDlg *)0x0) {
    PVPCompensationNoticeDlg::setInfos(this_00,param_1,param_2,param_3);
    return;
  }
  return;
}


/* PVPCompensationNoticeDlgCaller::getInstance() */

ReceivedDataCallback * PVPCompensationNoticeDlgCaller::getInstance(void)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  if (s_pInstance != (ReceivedDataCallback *)0x0) {
    return s_pInstance;
  }
  s_pInstance = ::operator_new(1);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (s_pInstance,onPVPCompensationReward);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,int,Sexy::CBMemberTranslatorX<PVPCompensationNoticeDlgCaller,void(PVPCompensationNoticeDlgCaller::*)(int,int,int)>>
            ((MessageRouter *)puVar1,Message::PVPCompensationReward,&local_40);
  return s_pInstance;
}


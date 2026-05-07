// Class: PlaybackDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackDlg::GetLayoutName() */

void __thiscall PlaybackDlg::GetLayoutName(PlaybackDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PlaybackUI");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlaybackDlg::~PlaybackDlg() */

void __thiscall PlaybackDlg::~PlaybackDlg(PlaybackDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_0694c730;
  *(undefined **)(this + 0xd8) = &DAT_0694ca80;
  UISingletonDialog<PlaybackDlg>::~UISingletonDialog((UISingletonDialog<PlaybackDlg> *)this);
  return;
}


/* PlaybackDlg::~PlaybackDlg() */

void __thiscall PlaybackDlg::~PlaybackDlg(PlaybackDlg *this)

{
  ~PlaybackDlg(this);
  AK::FreeHook(this);
  return;
}


/* PlaybackDlg::PlaybackDlg() */

void __thiscall PlaybackDlg::PlaybackDlg(PlaybackDlg *this)

{
  UISingletonDialog<PlaybackDlg>::UISingletonDialog((UISingletonDialog<PlaybackDlg> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_0694c730;
  *(undefined **)(this + 0xd8) = &DAT_0694ca80;
  return;
}


/* PlaybackDlg::ButtonDepress(int) */

void __thiscall PlaybackDlg::ButtonDepress(PlaybackDlg *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<PlaybackDlg>::CloseDialog();
  return;
}


/* non-virtual thunk to PlaybackDlg::ButtonDepress(int) */

void __thiscall PlaybackDlg::ButtonDepress(PlaybackDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PlaybackDlg::onPlaybackDownloadResult(unsigned long, bool) */

void __thiscall PlaybackDlg::onPlaybackDownloadResult(PlaybackDlg *this,ulong param_1,bool param_2)

{
  PVPManager *this_00;
  
  if (!param_2) {
    return;
  }
  UISingletonDialog<PlaybackDlg>::CloseDialog();
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::StartBattleReplay(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackDlg::OnCreate() */

void __thiscall PlaybackDlg::OnCreate(PlaybackDlg *this)

{
  undefined *puVar1;
  UIScrollControl *pUVar2;
  long lVar3;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  Widget *pWVar4;
  ScrollWidget *pSVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)&local_20,"UIScroll_0");
  pUVar2 = UI::Dialog::GetWidget<UIScrollControl>((Dialog *)this,(string *)&local_20);
  *(UIScrollControl **)(this + 0x138) = pUVar2;
  std::string::~string((string *)&local_20);
  nop();
  lVar3 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x138));
  pSVar5 = *(ScrollWidget **)(this + 0x138);
  *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(pSVar5 + 0x50);
  Sexy::ScrollWidget::SetScrollMode(pSVar5,2);
  UIScrollControl::SetAutoArrange(*(UIScrollControl **)(this + 0x138),true);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlaybackDownloadResult);
  local_60 = local_28;
  local_70 = local_38;
  uStack_68 = uStack_30;
  MessageRouter::
  Subscribe<unsigned_long,bool,Sexy::CBMemberTranslatorX<PlaybackDlg,void(PlaybackDlg::*)(unsigned_long,bool)>>
            ((MessageRouter *)puVar1,Message::PlaybackDownloadResult,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlaybackListRefresh);
  local_90 = local_20;
  uStack_88 = uStack_18;
  local_80 = local_10;
  MessageRouter::
  Subscribe<std::vector<unsigned_long,std::allocator<unsigned_long>>const&,Sexy::CBMemberTranslatorX<PlaybackDlg,void(PlaybackDlg::*)(std::vector<unsigned_long,std::allocator<unsigned_long>>const&)>>
            ((MessageRouter *)puVar1,Message::PlaybackListRefresh,&local_90);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestPlaybackList(this_01);
  std::string::string(asStack_40,"Background_0");
  pWVar4 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_40);
  UI::Dialog::SetCenter((Dialog *)this,pWVar4,true);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlaybackDlg::onPlaybackListRefresh(std::vector<unsigned long, std::allocator<unsigned long> >
   const&) */

void __thiscall PlaybackDlg::onPlaybackListRefresh(PlaybackDlg *this,vector *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  SalesProgressBar *this_00;
  ulong *puVar4;
  long lVar5;
  RecordWidget *this_01;
  PlaybackManager *pPVar6;
  ulong uVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIScrollControl::ClearContents(*(UIScrollControl **)(this + 0x138));
  uVar1 = *(undefined4 *)(*(long *)(this + 0x138) + 0x50);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b818b0);
  uVar3 = SalesProgressBar::GetCurrentLevel(this_00);
  local_18 = FUN_04ae50f8(*(undefined8 *)param_1);
  local_10 = FUN_04ae5148(*(undefined8 *)(param_1 + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar4 = (ulong *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar7 = *puVar4;
    pPVar6 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
    lVar5 = PlaybackManager::GetPlayback(pPVar6,uVar7);
    if ((uVar7 != 0) && (lVar5 != 0)) {
      this_01 = ::operator_new(0x120);
      RecordWidget::RecordWidget(this_01,uVar7);
      (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,uVar1,uVar3);
      (**(code **)(**(long **)(this + 0x138) + 0x60))(*(long **)(this + 0x138),this_01);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  pPVar6 = (PlaybackManager *)Sexy::LazySingleton<PlaybackManager>::GetInstancePtr();
  PlaybackManager::RefreshNewPlaybackID(pPVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: ActionShowBoardDlg


/* ActionShowBoardDlg::~ActionShowBoardDlg() */

void __thiscall ActionShowBoardDlg::~ActionShowBoardDlg(ActionShowBoardDlg *this)

{
  *(undefined ***)this = &PTR_GetClass_06858bc0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionShowBoardDlg::~ActionShowBoardDlg() */

void __thiscall ActionShowBoardDlg::~ActionShowBoardDlg(ActionShowBoardDlg *this)

{
  ~ActionShowBoardDlg(this);
  AK::FreeHook(this);
  return;
}


/* ActionShowBoardDlg::StaticGetClass() */

long * ActionShowBoardDlg::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionShowBoardDlg",uVar2,StaticNew);
  return sClass;
}


/* ActionShowBoardDlg::GetClass() const */

long * ActionShowBoardDlg::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionShowBoardDlg",uVar2,StaticNew);
  return sClass;
}


/* ActionShowBoardDlg::ActionShowBoardDlg() */

void __thiscall ActionShowBoardDlg::ActionShowBoardDlg(ActionShowBoardDlg *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_06858bc0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* ActionShowBoardDlg::StaticNew() */

ActionShowBoardDlg * ActionShowBoardDlg::StaticNew(void)

{
  ActionShowBoardDlg *this;
  
  this = ::operator_new(0x20);
  ActionShowBoardDlg(this);
  return this;
}


/* ActionShowBoardDlg::End() */

void ActionShowBoardDlg::End(void)

{
  if (UISingletonDialog<BoardDlg>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<BoardDlg>::m_pInstance + 0x318))();
    UISingletonDialog<BoardDlg>::m_pInstance = (long *)0x0;
  }
  return;
}


/* ActionShowBoardDlg::Update() */

void __thiscall ActionShowBoardDlg::Update(ActionShowBoardDlg *this)

{
  long lVar1;
  float fVar2;
  
  if (*(int *)(this + 0x14) == 0) {
    lVar1 = UISingletonDialog<BoardDlg>::GetSingletonPtr();
    if (lVar1 != 0) {
      *(undefined4 *)(this + 0x14) = 1;
      return;
    }
    fVar2 = (float)PVZ_T();
    if (fVar2 <= *(float *)(this + 0x18)) {
      return;
    }
  }
  else {
    if (*(int *)(this + 0x14) != 1) {
      return;
    }
    lVar1 = UISingletonDialog<BoardDlg>::GetSingletonPtr();
    if (lVar1 != 0) {
      return;
    }
  }
  *(undefined4 *)(this + 0x14) = 2;
  this[9] = (ActionShowBoardDlg)0x1;
  return;
}


/* ActionShowBoardDlg::Start() */

void __thiscall ActionShowBoardDlg::Start(ActionShowBoardDlg *this)

{
  undefined *puVar1;
  char cVar2;
  INetworkMsgProcess *this_00;
  float fVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  if (BoardDlg::s_NeedShow != '\0') {
    cVar2 = LawnApp::IsNetworkModuleOK();
    if (cVar2 != '\0') {
      this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
      INetworkMsgProcess::RequestBoardInfoList(this_00);
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x18) = fVar3 + 5.0;
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onNotifyBoardInfoList);
      local_30 = local_8;
      local_40 = local_18;
      uStack_38 = uStack_10;
      MessageRouter::
      Subscribe<S2C_NoticeInfoList_const*,Sexy::CBMemberTranslatorX<ActionShowBoardDlg,void(ActionShowBoardDlg::*)(S2C_NoticeInfoList_const*)>>
                ((MessageRouter *)puVar1,Message::NotifyBoardInfoList,&local_40);
      return;
    }
  }
  *(undefined4 *)(this + 0x14) = 2;
  this[9] = (ActionShowBoardDlg)0x1;
  return;
}


/* ActionShowBoardDlg::onNotifyBoardInfoList(S2C_NoticeInfoList const*) */

void __thiscall
ActionShowBoardDlg::onNotifyBoardInfoList(ActionShowBoardDlg *this,S2C_NoticeInfoList *param_1)

{
  char cVar1;
  BoardDlg *this_00;
  
  BoardDlg::s_NeedShow = 0;
  if ((param_1 != (S2C_NoticeInfoList *)0x0) &&
     (cVar1 = std::vector<S2C_NoticeInfo,std::allocator<S2C_NoticeInfo>>::empty
                        ((vector<S2C_NoticeInfo,std::allocator<S2C_NoticeInfo>> *)(param_1 + 0x18)),
     cVar1 == '\0')) {
    this_00 = (BoardDlg *)UISingletonDialog<BoardDlg>::ShowDialog();
    if (this_00 == (BoardDlg *)0x0) {
      return;
    }
    BoardDlg::InitInfoList(this_00,param_1);
    return;
  }
  *(undefined4 *)(this + 0x14) = 2;
  this[9] = (ActionShowBoardDlg)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionShowBoardDlg::CreateIfNeed(bool&) */

void ActionShowBoardDlg::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ActionShowBoardDlg *this_01;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar4 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_10,pLVar4,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if ((cVar1 == '\0') && (BoardDlg::s_NeedShow != '\0')) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if ((this_00 != (PlayerInfo *)0x0) &&
       (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) {
      std::string::string(asStack_10,"egypt4");
      iVar2 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (2 < iVar2) {
        this_01 = ::operator_new(0x20);
        *(undefined8 *)this_01 = 0;
        this_01[8] = (ActionShowBoardDlg)0x0;
        this_01[9] = (ActionShowBoardDlg)0x0;
        this_01[10] = (ActionShowBoardDlg)0x0;
        *(undefined4 *)(this_01 + 0xc) = 0;
        *(undefined4 *)(this_01 + 0x10) = 0;
        *(undefined4 *)(this_01 + 0x14) = 0;
        *(undefined4 *)(this_01 + 0x18) = 0;
        ActionShowBoardDlg(this_01);
        goto LAB_0455b95c;
      }
    }
  }
  this_01 = (ActionShowBoardDlg *)0x0;
LAB_0455b95c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


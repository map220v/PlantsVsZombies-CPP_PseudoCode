// Class: GachaMgr


/* GachaMgr::GetObtainTutorialAvatar() */

GachaMgr __thiscall GachaMgr::GetObtainTutorialAvatar(GachaMgr *this)

{
  return this[0x60];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::PopDelayDialog() */

void GachaMgr::PopDelayDialog(void)

{
  LawnApp *this;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
  FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05476c50(awStack_58);
  nop();
  FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaMgr::OnCanceledDraw() */

void GachaMgr::OnCanceledDraw(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::GetGachaKeyMatId(GachaType, bool) const */

void __thiscall GachaMgr::GetGachaKeyMatId(undefined8 param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  NameMapperBase *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"mat_gachakey");
  nop();
  if (param_2 == 1) {
    FUN_05475ad8(asStack_10,"_rare");
  }
  else if (param_2 == 0) {
    FUN_05475ad8(asStack_10,"_normal");
  }
  else {
    if (param_2 != 2) {
      uVar1 = 0;
      goto LAB_03df2cac;
    }
    FUN_05475ad8(asStack_10,"_legend");
  }
  if (param_3 != '\0') {
    FUN_05475ad8(asStack_10,"_multi");
  }
  this = (NameMapperBase *)MaterialItemMapper::GetInstance();
  uVar1 = NameMapperBase::GetIdForName(this,asStack_10);
LAB_03df2cac:
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* GachaMgr::IsDrawFirstPaidTemp(int, bool) */

GachaMgr __thiscall GachaMgr::IsDrawFirstPaidTemp(GachaMgr *this,int param_1,bool param_2)

{
  if (!param_2) {
    if (param_1 == 0) {
      return this[0x39];
    }
    if (param_1 == 1) {
      return this[0x3a];
    }
  }
  return (GachaMgr)0x1;
}


/* GachaMgr::SetDrawFirstPaidTemp(int, bool) */

void __thiscall GachaMgr::SetDrawFirstPaidTemp(GachaMgr *this,int param_1,bool param_2)

{
  if (param_1 == 0) {
    this[0x39] = (GachaMgr)param_2;
    return;
  }
  if (param_1 != 1) {
    return;
  }
  this[0x3a] = (GachaMgr)param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::DoLocalDraw() */

void GachaMgr::DoLocalDraw(void)

{
  LawnApp *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillGachaUI(gLawnApp);
  this = gLawnApp;
  std::string::string(asStack_10,"gacha_diamond");
  LawnApp::ShowGachaUI(this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaMgr::GachaDrawItemEqual(GachaType, bool, std::string const&) */

bool __thiscall
GachaMgr::GachaDrawItemEqual(undefined8 param_1,undefined4 param_2,char param_3,string *param_4)

{
  bool bVar1;
  
  switch(param_2) {
  case 0:
    break;
  case 1:
    if (param_3 != '\0') {
      bVar1 = std::operator==(param_4,"gacha_diamond_rare10");
      return bVar1;
    }
    bVar1 = std::operator==(param_4,"gacha_diamond_rare");
    return bVar1;
  case 2:
    if (param_3 != '\0') {
      bVar1 = std::operator==(param_4,"gacha_diamond_legend10");
      return bVar1;
    }
    bVar1 = std::operator==(param_4,"gacha_diamond_legend");
    return bVar1;
  case 3:
    if (param_3 != '\0') {
      bVar1 = std::operator==(param_4,"gacha_diamond_avatar10");
      return bVar1;
    }
    bVar1 = std::operator==(param_4,"gacha_diamond_avatar");
    return bVar1;
  default:
    return false;
  }
  if (param_3 != '\0') {
    bVar1 = std::operator==(param_4,"gacha_diamond_normal10");
    return bVar1;
  }
  bVar1 = std::operator==(param_4,"gacha_diamond_normal");
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::FindTargetGachaDrawItem(GachaType, bool) */

void GachaMgr::FindTargetGachaDrawItem
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               GachaMgr *param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  RtWeakPtrBase *pRVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  do {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_2 + 8))
    ;
    uVar4 = FUN_03df261c(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
    if (uVar4 <= uVar5) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (param_1);
LAB_03df3058:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_2 + 8))
    ;
    pRVar2 = (RtWeakPtrBase *)FUN_03df2628(*(undefined8 *)(lVar3 + 0x60),uVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    cVar1 = GachaDrawItemEqual(param_2,param_3,param_4,lVar3 + 0x80);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_03df3058;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar5 = uVar5 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::CreateTargetGachaItemDraw(GachaType, bool, Sexy::TRect<int> const&, Sexy::Widget*) */

void __thiscall
GachaMgr::CreateTargetGachaItemDraw
          (GachaMgr *this,ulong param_2,undefined1 param_3,undefined4 *param_4,long *param_5)

{
  long *plVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargetGachaDrawItem(aRStack_10,this,param_2,param_3);
  plVar1 = (long *)GachaItem::Create(param_2 & 0xffffffff,param_3,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  (**(code **)(*plVar1 + 0x198))(plVar1,*param_4,param_4[1],param_4[2],param_4[3]);
  (**(code **)(*param_5 + 0x60))(param_5,plVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar1);
}


/* GachaMgr::SetDrawLastFreeTimes(int, int) */

void __thiscall GachaMgr::SetDrawLastFreeTimes(GachaMgr *this,int param_1,int param_2)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::setLastFreeGachaTimeNew(this_01,param_1,param_2);
    return;
  }
  return;
}


/* GachaMgr::SetDrawFirstPaid(int, bool) */

void __thiscall GachaMgr::SetDrawFirstPaid(GachaMgr *this,int param_1,bool param_2)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::setFirstDiamondGachaNew(this_01,param_1,param_2);
    return;
  }
  return;
}


/* GachaMgr::IsDrawFirstPaid(int) */

undefined8 __thiscall GachaMgr::IsDrawFirstPaid(GachaMgr *this,int param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar1;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    uVar1 = PlayerInfo::isFirstDiamondGachaNew(this_01,param_1);
    return uVar1;
  }
  return 1;
}


/* GachaMgr::IsUseGachaKeyMode(GachaType, bool) const */

bool __thiscall GachaMgr::IsUseGachaKeyMode(GachaMgr *this,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (((param_3 != '\0') ||
      ((cVar1 = PlayerInfo::canFreeGachaNew(this_01,param_2), cVar1 == '\0' &&
       (iVar2 = FUN_03df22bc(*(undefined4 *)(this_01 + 0x40)), iVar2 != 0x17)))) &&
     (iVar2 = GetGachaKeyMatId(this,param_2,param_3), 0 < iVar2)) {
    iVar2 = PlayerInfo::GetMaterialNum(this_01,iVar2);
    return 0 < iVar2;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::OnGachaDrawResult(bool) */

void __thiscall GachaMgr::OnGachaDrawResult(GachaMgr *this,bool param_1)

{
  undefined4 uVar1;
  LawnApp *pLVar2;
  char cVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar2 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    LawnApp::KillGachaUI(gLawnApp);
    pLVar2 = gLawnApp;
    if (this[0x14] == (GachaMgr)0x0) {
      std::string::string(asStack_50,"gacha_diamond");
      uVar1 = *(undefined4 *)(this + 0x18);
    }
    else {
      std::string::string(asStack_50,"gacha_diamond10");
      uVar1 = *(undefined4 *)(this + 0x18);
    }
    LawnApp::ShowGachaUI(pLVar2,asStack_50,0,uVar1);
    std::string::~string(asStack_50);
    nop();
    cVar3 = IsDrawFirstPaid(this,*(int *)(this + 0x18));
    if ((cVar3 != '\0') &&
       (cVar3 = IsDrawFirstPaidTemp(this,*(int *)(this + 0x18),(bool)this[0x14]), cVar3 == '\0')) {
      SetDrawFirstPaidTemp(this,*(int *)(this + 0x18),true);
    }
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  else {
    FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
    FUN_05478178((wstring *)asStack_50,L"[GACHA_DRAW_FAILED]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar2,awStack_58,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)asStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::DoAdvertiseDraw(GachaType, bool) */

void __thiscall GachaMgr::DoAdvertiseDraw(GachaMgr *this,int param_2,GachaMgr param_3)

{
  LawnApp *this_00;
  char cVar1;
  NetworkMgr *this_01;
  long *plVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCanceledDraw);
    Sexy::Delegate0::Delegate0<GachaMgr,void(GachaMgr::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    *(int *)(this + 0x18) = param_2;
    this[0x14] = param_3;
    *(undefined4 *)(this + 0x10) = 0;
    this[0x15] = (GachaMgr)0x0;
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    plVar2 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
    (**(code **)(*plVar2 + 0x340))(plVar2,param_2 + 1,1,1,1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::DoFreeGachaDraw(GachaType, bool, int) */

void __thiscall
GachaMgr::DoFreeGachaDraw(GachaMgr *this,int param_2,GachaMgr param_3,undefined4 param_4)

{
  LawnApp *this_00;
  GachaMgr GVar1;
  char cVar2;
  ProfileMgr *this_01;
  long lVar3;
  NetworkMgr *this_02;
  long *plVar4;
  PVZ2UIDialog *pPVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_01);
  if (lVar3 != 0) {
    GVar1 = (GachaMgr)IsUseGachaKeyMode(this,param_2,param_3);
    cVar2 = LawnApp::IsNetworkModuleOK();
    this_00 = gLawnApp;
    if (cVar2 == '\0') {
      FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
      pPVar5 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnCanceledDraw);
      Sexy::Delegate0::Delegate0<GachaMgr,void(GachaMgr::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar5,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      uVar6 = 10;
      if (param_3 == (GachaMgr)0x0) {
        uVar6 = 1;
      }
      *(int *)(this + 0x18) = param_2;
      uVar7 = 2;
      if (GVar1 == (GachaMgr)0x0) {
        uVar7 = 1;
      }
      this[0x14] = param_3;
      *(undefined4 *)(this + 0x10) = 0;
      this[0x15] = GVar1;
      this_02 = (NetworkMgr *)NetworkMgr::Instance();
      plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
      (**(code **)(*plVar4 + 0x340))(plVar4,param_2 + 1,uVar6,param_4,uVar7,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::OnNetworkError(int, std::string const&) */

void __thiscall GachaMgr::OnNetworkError(GachaMgr *this,int param_1,string *param_2)

{
  LawnApp *this_00;
  char cVar1;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_d48 [8];
  undefined1 auStack_d40 [8];
  wstring awStack_d38 [8];
  wstring awStack_d30 [24];
  Delegate0 aDStack_d18 [48];
  _PacketId a_Stack_ce8 [1000];
  string asStack_900 [152];
  string asStack_868 [2144];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _PacketId::_PacketId(a_Stack_ce8);
  cVar1 = std::operator==(param_2,asStack_900);
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    cVar1 = std::operator==(param_2,asStack_868);
    if ((cVar1 != '\0') && (cVar1 = FUN_03df22f4(*(undefined4 *)(this + 0x3c)), cVar1 != '\0')) {
      FUN_03df22ec(this + 0x3c,0);
    }
  }
  else {
    FUN_05478178(awStack_d38,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_d48);
    FUN_05478178(awStack_d30,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_d40);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_d38,awStack_d30);
    FUN_05476c50(awStack_d30);
    nop();
    FUN_05476c50(awStack_d38);
    nop();
    FUN_05478178(awStack_d38,L"[BUTTON_OK]",auStack_d40);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCanceledDraw);
    Sexy::Delegate0::Delegate0<GachaMgr,void(GachaMgr::*)()>(aDStack_d18,awStack_d30);
    PVZ2UIDialog::AddButton(pPVar2,awStack_d38,aDStack_d18,1);
    FUN_05476c50(awStack_d38);
    nop();
  }
  _PacketId::~_PacketId(a_Stack_ce8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::TriggerTutorialShow(TutorialStep) */

void __thiscall GachaMgr::TriggerTutorialShow(GachaMgr *this,int param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  CrazyNPCManager *pCVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 local_58;
  string asStack_50 [8];
  Insets aIStack_48 [16];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x48));
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      lVar5 = *plVar3;
      iVar2 = FUN_03df2304(*(undefined4 *)(lVar5 + 0x13c));
      if (iVar2 == 0) {
        uVar6 = *(undefined8 *)(lVar5 + 0xe0);
        std::string::string(asStack_50,"");
        Sexy::Insets::Insets(aIStack_48);
        GameMaskUI::ShowMask(uVar6,2,asStack_50,aIStack_48);
        std::string::~string(asStack_50);
        nop();
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
  }
  else if (param_2 == 2) {
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x48));
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      lVar5 = *plVar3;
      iVar2 = FUN_03df2304(*(undefined4 *)(lVar5 + 0x13c));
      if (iVar2 == 1) {
        uVar6 = *(undefined8 *)(lVar5 + 0xe0);
        std::string::string(asStack_50,"");
        Sexy::Insets::Insets(aIStack_48);
        GameMaskUI::ShowMask(uVar6,2,asStack_50,aIStack_48);
        std::string::~string(asStack_50);
        nop();
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
  }
  else if (param_2 == 3) {
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x48));
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      lVar5 = *plVar3;
      iVar2 = FUN_03df2304(*(undefined4 *)(lVar5 + 0x13c));
      if (iVar2 == 3) {
        uVar6 = *(undefined8 *)(lVar5 + 0xe0);
        std::string::string(asStack_50,"");
        Sexy::Insets::Insets(aIStack_48);
        GameMaskUI::ShowMask(uVar6,2,asStack_50,aIStack_48);
        std::string::~string(asStack_50);
        nop();
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
  }
  else if (param_2 == 4) {
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x48));
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      lVar5 = *plVar3;
      iVar2 = FUN_03df2304(*(undefined4 *)(lVar5 + 0x13c));
      if (iVar2 == 2) {
        uVar6 = *(undefined8 *)(lVar5 + 0xe0);
        std::string::string(asStack_50,"");
        Sexy::Insets::Insets(aIStack_48);
        GameMaskUI::ShowMask(uVar6,2,asStack_50,aIStack_48);
        std::string::~string(asStack_50);
        nop();
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 != (CrazyNPCManager *)0x0) {
      std::string::string(asStack_50,"TUTORIAL_LEGEND_GACHA1_INTRO");
      Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
      std::string::string((string *)aIStack_48,"");
      CrazyNPCManager::StartNarrativeID(pCVar4,asStack_50,aDStack_38,(string *)aIStack_48);
      std::string::~string((string *)aIStack_48);
      nop();
      std::string::~string(asStack_50);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaMgr::SetTutorialStep(TutorialStep) */

void __thiscall GachaMgr::SetTutorialStep(GachaMgr *this,int param_2)

{
  if (param_2 != 2) {
    *(int *)(this + 0x44) = param_2;
    TriggerTutorialShow(this);
    return;
  }
  LawnApp::KillGachaDisplayerDialog(gLawnApp);
  *(undefined4 *)(this + 0x44) = 2;
  TriggerTutorialShow(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::GachaMgr() */

void __thiscall GachaMgr::GachaMgr(GachaMgr *this)

{
  undefined *puVar1;
  long lVar2;
  RtWeakPtr *pRVar3;
  string *extraout_x1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<GachaMgr>::LazySingleton((LazySingleton<GachaMgr> *)this);
  *(undefined ***)this = &PTR__GachaMgr_0677ff60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  CurrentDrawInfo::CurrentDrawInfo((CurrentDrawInfo *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  this[0x60] = (GachaMgr)0x0;
  this[0x61] = (GachaMgr)0x0;
  this[0x62] = (GachaMgr)0x0;
  this[0x38] = (GachaMgr)0x0;
  this[0x39] = (GachaMgr)0x0;
  this[0x3a] = (GachaMgr)0x0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  std::string::string((string *)&local_20,"iOS PvZ2 Gacha Store New");
  Magento::GetStore((Magento *)&local_20,extraout_x1);
  std::string::~string((string *)&local_20);
  nop();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  pRVar3 = (RtWeakPtr *)FUN_03df2898(*(undefined8 *)(lVar2 + 0x48));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)(this + 8),pRVar3)
  ;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGachaDrawResult);
  local_80 = local_50;
  uStack_78 = uStack_48;
  local_70 = local_40;
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<GachaMgr,void(GachaMgr::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifyNewGachaDrawResult,&local_80);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_90 = local_28;
  local_a0 = local_38;
  uStack_98 = uStack_30;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<GachaMgr,void(GachaMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNetworkError);
  local_c0 = local_20;
  uStack_b8 = uStack_18;
  local_b0 = local_10;
  MessageRouter::
  Subscribe<int,std::string_const&,Sexy::CBMemberTranslatorX<GachaMgr,void(GachaMgr::*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,&local_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaMgr::RemoveAllDisplayers() */

void __thiscall GachaMgr::RemoveAllDisplayers(GachaMgr *this)

{
  int iVar1;
  long lVar2;
  GachaMgr *pGVar3;
  
  std::vector<GachaItemDisplayer*,std::allocator<GachaItemDisplayer*>>::clear
            ((vector<GachaItemDisplayer*,std::allocator<GachaItemDisplayer*>> *)(this + 0x48));
  lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
  iVar1 = FUN_03df2300(*(undefined4 *)(lVar2 + 0x44));
  if (iVar1 != 2) {
    return;
  }
  pGVar3 = (GachaMgr *)Sexy::LazySingleton<GachaMgr>::GetInstance();
  SetTutorialStep(pGVar3,0);
  return;
}


/* GachaMgr::SetObtainTutorialAvatar(bool) */

void __thiscall GachaMgr::SetObtainTutorialAvatar(GachaMgr *this,bool param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
  iVar1 = FUN_03df2300(*(undefined4 *)(lVar2 + 0x44));
  if (iVar1 == 3) {
    this[0x60] = (GachaMgr)param_1;
  }
  return;
}


/* GachaMgr::GetTargetGachaRewardCoin(GachaType, bool) */

undefined4 __thiscall
GachaMgr::GetTargetGachaRewardCoin(GachaMgr *this,undefined4 param_2,char param_3)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  
  cVar1 = std::vector<GachaItemInfo,std::allocator<GachaItemInfo>>::empty
                    ((vector<GachaItemInfo,std::allocator<GachaItemInfo>> *)(this + 0x20));
  uVar3 = 0;
  if (cVar1 == '\0') {
    if (param_3 != '\0') {
      lVar2 = FUN_03df2610(*(undefined8 *)(this + 0x20),param_2);
      return *(undefined4 *)(lVar2 + 0x10);
    }
    lVar2 = FUN_03df2610(*(undefined8 *)(this + 0x20),param_2);
    uVar3 = *(undefined4 *)(lVar2 + 4);
  }
  return uVar3;
}


/* GachaMgr::GetTargetGachaCost(GachaType, bool) */

undefined4 __thiscall GachaMgr::GetTargetGachaCost(GachaMgr *this,int param_2,char param_3)

{
  char cVar1;
  long lVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 *puVar3;
  
  cVar1 = std::vector<GachaItemInfo,std::allocator<GachaItemInfo>>::empty
                    ((vector<GachaItemInfo,std::allocator<GachaItemInfo>> *)(this + 0x20));
  if (cVar1 == '\0') {
    if (param_3 != '\0') {
      lVar2 = FUN_03df2610(*(undefined8 *)(this + 0x20),param_2);
      return *(undefined4 *)(lVar2 + 0xc);
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if ((this_01 == (PlayerInfo *)0x0) ||
       (cVar1 = PlayerInfo::canFreeGachaNew(this_01,param_2), cVar1 == '\0')) {
      puVar3 = (undefined4 *)FUN_03df2610(*(undefined8 *)(this + 0x20),param_2);
      return *puVar3;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::DoGachaDraw(GachaType, bool) */

void __thiscall GachaMgr::DoGachaDraw(GachaMgr *this,ulong param_2,GachaMgr param_3)

{
  LawnApp *this_00;
  GachaMgr GVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NetworkMgr *this_03;
  long *plVar5;
  PVZ2UIDialog *pPVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = GetTargetGachaCost(this,param_2,param_3);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    GVar1 = (GachaMgr)IsUseGachaKeyMode(this,param_2 & 0xffffffff,param_3);
    if ((GVar1 == (GachaMgr)0x0) && (iVar4 = PlayerInfo::GetNumGems(this_02,true), iVar4 < iVar3)) {
      LawnApp::KillPVZ2Dialog(gLawnApp);
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,0);
      LawnApp::KillGachaDisplayerDialog(gLawnApp);
    }
    else {
      cVar2 = LawnApp::IsNetworkModuleOK();
      this_00 = gLawnApp;
      if (cVar2 == '\0') {
        FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
        FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
        pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnCanceledDraw);
        Sexy::Delegate0::Delegate0<GachaMgr,void(GachaMgr::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,1);
        FUN_05476c50(awStack_58);
        nop();
      }
      else {
        uVar7 = 10;
        if (param_3 == (GachaMgr)0x0) {
          uVar7 = 1;
        }
        *(int *)(this + 0x18) = (int)param_2;
        uVar8 = 2;
        if (GVar1 == (GachaMgr)0x0) {
          uVar8 = 1;
        }
        this[0x14] = param_3;
        *(int *)(this + 0x10) = iVar3;
        this[0x15] = GVar1;
        this_03 = (NetworkMgr *)NetworkMgr::Instance();
        plVar5 = (long *)NetworkMgr::GetNewNetWorkProcess(this_03);
        (**(code **)(*plVar5 + 0x340))(plVar5,(int)param_2 + 1,uVar7,iVar3 == 0,uVar8,0);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaMgr::DrawGachaAgain() */

void __thiscall GachaMgr::DrawGachaAgain(GachaMgr *this)

{
  DoGachaDraw(this,*(undefined4 *)(this + 0x18),this[0x14]);
  return;
}


/* GachaMgr::GetTargetGachaFreeTimes(GachaType) */

undefined4 __thiscall GachaMgr::GetTargetGachaFreeTimes(GachaMgr *this,undefined4 param_2)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  
  cVar1 = std::vector<GachaItemInfo,std::allocator<GachaItemInfo>>::empty
                    ((vector<GachaItemInfo,std::allocator<GachaItemInfo>> *)(this + 0x20));
  uVar3 = 0;
  if (cVar1 == '\0') {
    lVar2 = FUN_03df2610(*(undefined8 *)(this + 0x20),param_2);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  return uVar3;
}


/* GachaMgr::~GachaMgr() */

void __thiscall GachaMgr::~GachaMgr(GachaMgr *this)

{
  *(undefined ***)this = &PTR__GachaMgr_0677ff60;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<GachaItemDisplayer*,std::allocator<GachaItemDisplayer*>>::~vector
            ((vector<GachaItemDisplayer*,std::allocator<GachaItemDisplayer*>> *)(this + 0x48));
  std::vector<GachaItemInfo,std::allocator<GachaItemInfo>>::~vector
            ((vector<GachaItemInfo,std::allocator<GachaItemInfo>> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  Sexy::LazySingleton<GachaMgr>::~LazySingleton((LazySingleton<GachaMgr> *)this);
  return;
}


/* GachaMgr::~GachaMgr() */

void __thiscall GachaMgr::~GachaMgr(GachaMgr *this)

{
  ~GachaMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::RequestGachaInit() */

void __thiscall GachaMgr::RequestGachaInit(GachaMgr *this)

{
  char cVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  GachaDetailCacheMgr *this_02;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 == '\0') {
    FUN_03df289c(this + 0x38);
  }
  else {
    FUN_03df22ec(this + 0x3c,1);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_057528a0,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,false);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
    this_02 = (GachaDetailCacheMgr *)DSingleton<GachaDetailCacheMgr>::getInstance();
    GachaDetailCacheMgr::requestGetGachaDetail(this_02);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::CreateTargetGachaItem(GachaType, Sexy::TRect<int> const&, Sexy::Widget*) */

void __thiscall
GachaMgr::CreateTargetGachaItem(GachaMgr *this,undefined4 param_2,undefined8 param_3,long *param_4)

{
  GachaItemDisplayer *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = (GachaItemDisplayer *)GachaItemDisplayer::Create(param_2,param_3);
  (**(code **)(*param_4 + 0x60))(param_4,local_10);
  std::vector<GachaItemDisplayer*,std::allocator<GachaItemDisplayer*>>::push_back
            ((vector<GachaItemDisplayer*,std::allocator<GachaItemDisplayer*>> *)(this + 0x48),
             &local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::SyncActivityData(GachaActivityInfo const&) */

void __thiscall GachaMgr::SyncActivityData(GachaMgr *this,GachaActivityInfo *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar12 = *(undefined8 *)(param_1 + 8);
  uVar11 = 0;
  uVar8 = FUN_03df2630(uVar12,*(undefined8 *)(param_1 + 0x10));
  if (uVar8 != 0) {
    do {
      lVar9 = FUN_03df2658(uVar12,uVar11);
      uVar7 = *(int *)(lVar9 + 0x18) - 1;
      iVar2 = *(int *)(lVar9 + 8);
      if ((uVar7 < 2 || *(int *)(lVar9 + 0x18) == 4) && (this_01 != (PlayerInfo *)0x0)) {
        PlayerInfo::setLastFreeGachaTimeNew(this_01,uVar7,*(int *)(lVar9 + 4));
        bVar1 = iVar2 == 0;
        if (bVar1) {
          PlayerInfo::setFirstDiamondGachaNew(this_01,uVar7,false);
        }
        else {
          PlayerInfo::setFirstDiamondGachaNew(this_01,uVar7,true);
        }
        SetDrawFirstPaidTemp(this,uVar7,!bVar1);
        uVar12 = *(undefined8 *)(param_1 + 8);
        uVar8 = FUN_03df2630(uVar12,*(undefined8 *)(param_1 + 0x10));
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar8);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = 0;
  uVar11 = FUN_03df2660(uVar12,*(undefined8 *)(param_1 + 0x28));
  if (uVar11 != 0) {
    do {
      piVar10 = (int *)FUN_03df2690(uVar12,uVar8);
      iVar2 = piVar10[1];
      iVar3 = piVar10[2];
      iVar4 = piVar10[3];
      iVar5 = piVar10[4];
      iVar6 = piVar10[5];
      if (*piVar10 == (int)uVar8 + 1) {
        GachaItemInfo::GachaItemInfo((GachaItemInfo *)&local_20);
        local_20 = iVar2;
        local_1c = iVar3;
        local_18 = iVar4;
        local_14 = iVar5;
        local_10 = iVar6;
        std::vector<GachaItemInfo,std::allocator<GachaItemInfo>>::push_back
                  ((vector<GachaItemInfo,std::allocator<GachaItemInfo>> *)(this + 0x20),
                   (GachaItemInfo *)&local_20);
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        uVar11 = FUN_03df2660(uVar12,*(undefined8 *)(param_1 + 0x28));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar11);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::RefreshActivity() */

void __thiscall GachaMgr::RefreshActivity(GachaMgr *this)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  wstring awStack_110 [8];
  wstring awStack_108 [24];
  Delegate0 aDStack_f0 [48];
  GachaActivityInfo aGStack_c0 [56];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  pLVar1 = gLawnApp;
  if (local_70 == '\0') {
    FUN_05478178(awStack_108,&DAT_056f11a8,auStack_118);
    FUN_05478178((wstring *)aGStack_c0,L"[GACHA_ACTIVITY_CLOSED]",awStack_110);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_108,(wstring *)aGStack_c0);
    FUN_05476c50((wstring *)aGStack_c0);
    nop();
    FUN_05476c50(awStack_108);
    nop();
    FUN_05478178(awStack_108,L"[BUTTON_OK]",awStack_110);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_f0,(wstring *)aGStack_c0);
    PVZ2UIDialog::AddButton(pPVar4,awStack_108,aDStack_f0,1);
    FUN_05476c50(awStack_108);
    nop();
  }
  else {
    GachaActivityInfo::GachaActivityInfo(aGStack_c0);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aGStack_c0);
    pLVar1 = gLawnApp;
    if (cVar2 == '\0') {
      FUN_05478178(awStack_110,&DAT_056f11a8,auStack_120);
      FUN_05478178(awStack_108,L"[GACHA_ACTIVITY_DATA_ERROR]",auStack_118);
      pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_110,awStack_108);
      FUN_05476c50(awStack_108);
      nop();
      FUN_05476c50(awStack_110);
      nop();
      FUN_05478178(awStack_110,L"[BUTTON_OK]",auStack_118);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_f0,awStack_108);
      PVZ2UIDialog::AddButton(pPVar4,awStack_110,aDStack_f0,1);
      FUN_05476c50(awStack_110);
      nop();
    }
    else {
      SyncActivityData(this,aGStack_c0);
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::NotifySyncActivityData,true);
    }
    GachaActivityInfo::~GachaActivityInfo(aGStack_c0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaMgr::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void GachaMgr::OnNotifyRefreshActivityList(bool param_1,set *param_2)

{
  LawnApp *this;
  char cVar1;
  GachaMgr *this_00;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (GachaMgr *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03df22f4(*(undefined4 *)(this_00 + 0x3c));
  if (cVar1 != '\0') {
    FUN_03df22ec(this_00 + 0x3c,0);
    this = gLawnApp;
    if (((ulong)param_2 & 0xff) == 0) {
      FUN_05478178(awStack_58,&DAT_056f11a8,auStack_68);
      FUN_05478178(awStack_50,L"[GACHA_ACTIVITY_DATA_LOST]",auStack_60);
      pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
    }
    else {
      RefreshActivity(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


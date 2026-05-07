// Class: RiftValidateMgr


/* RiftValidateMgr::onZombieDied(Zombie*, DamageInfo const*) */

void RiftValidateMgr::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  return;
}


/* RiftValidateMgr::onforceExit() */

void RiftValidateMgr::onforceExit(void)

{
  char cVar1;
  LawnApp *this;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this = gLawnApp;
  cVar1 = LawnApp::IsPauseMenuOpen(gLawnApp);
  if (cVar1 != '\0') {
    LawnApp::KillNewOptionsDialog(this);
    this = gLawnApp;
  }
  (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::forceExit(int) */

void __thiscall RiftValidateMgr::forceExit(RiftValidateMgr *this,int param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  wstring awStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
  Sexy::StrFormat(L"[RIFT_CHECK_FAILED_TEXT_%d]",awStack_50,(ulong)(uint)param_1);
  TodStringTranslate(awStack_50);
  FUN_05476c50(awStack_50);
  this_00 = gLawnApp;
  FUN_05478178(awStack_50,L"[RIFT_CHECK_FAILED_TITLE]",auStack_58);
  pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_50,awStack_60);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_68);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onforceExit);
  Sexy::Delegate0::Delegate0<RiftValidateMgr,void(RiftValidateMgr::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05476c50(awStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftValidateMgr::GetLevelUsedTime() */

undefined1  [16] RiftValidateMgr::GetLevelUsedTime(void)

{
  RiftTimedEventModule *pRVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  pRVar1 = BoardHelpers::GetLevelModuleByClass<RiftTimedEventModule>();
  if (pRVar1 != (RiftTimedEventModule *)0x0) {
    FUN_037195a4(*(undefined4 *)(pRVar1 + 0x24));
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}


/* RiftValidateMgr::IsValidateLevel() */

bool RiftValidateMgr::IsValidateLevel(void)

{
  RiftTimedEventModule *pRVar1;
  
  pRVar1 = BoardHelpers::GetLevelModuleByClass<RiftTimedEventModule>();
  return pRVar1 != (RiftTimedEventModule *)0x0;
}


/* RiftValidateMgr::NotifyZombieDiedAndSunDrop(int) */

void __thiscall RiftValidateMgr::NotifyZombieDiedAndSunDrop(RiftValidateMgr *this,int param_1)

{
  char cVar1;
  
  cVar1 = IsValidateLevel();
  if (cVar1 != '\0') {
    *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + 1;
    *(int *)(this + 0xac) = *(int *)(this + 0xac) + param_1;
  }
  return;
}


/* RiftValidateMgr::onArtifactTrigger() */

void __thiscall RiftValidateMgr::onArtifactTrigger(RiftValidateMgr *this)

{
  char cVar1;
  
  cVar1 = IsValidateLevel();
  if (cVar1 != '\0') {
    *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
  }
  return;
}


/* RiftValidateMgr::onSunSpent(int) */

void __thiscall RiftValidateMgr::onSunSpent(RiftValidateMgr *this,int param_1)

{
  char cVar1;
  
  cVar1 = IsValidateLevel();
  if (cVar1 != '\0') {
    *(int *)(this + 0xa4) = *(int *)(this + 0xa4) + param_1;
  }
  return;
}


/* RiftValidateMgr::onPlantfoodUsed(PlantGroup*) */

void RiftValidateMgr::onPlantfoodUsed(PlantGroup *param_1)

{
  char cVar1;
  
  cVar1 = IsValidateLevel();
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::AddTimerModuleIfNeeded() */

void RiftValidateMgr::AddTimerModuleIfNeeded(void)

{
  bool bVar1;
  undefined8 uVar2;
  LevelModuleManager *pLVar3;
  RtId aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"RiftTimerModuleProps");
  PVZDB::GetIdByAlias(aRStack_28,uVar2,0x14,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
  if (bVar1) {
    pLVar3 = (LevelModuleManager *)
             FUN_037195a0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
    LevelModuleManager::AddModuleFromProperties(pLVar3,aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtId::~RtId(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::RiftValidateMgr() */

void __thiscall RiftValidateMgr::RiftValidateMgr(RiftValidateMgr *this)

{
  undefined *puVar1;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  CBMemberTranslatorX aCStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<RiftValidateMgr>::LazySingleton((LazySingleton<RiftValidateMgr> *)this);
  *(undefined ***)this = &PTR__RiftValidateMgr_0668a650;
  ValidateGameStartData::ValidateGameStartData((ValidateGameStartData *)(this + 8));
  ValidateGamePlayData::ValidateGamePlayData((ValidateGamePlayData *)(this + 0x38));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftTimedEventTimerStarted);
  Sexy::Delegate0::Delegate0<RiftValidateMgr,void(RiftValidateMgr::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RiftTimedEventTimerStarted,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombiePlaceOnBoard);
  local_f0 = local_b8;
  local_100 = local_c8;
  uStack_f8 = uStack_c0;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<RiftValidateMgr,void(RiftValidateMgr::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_120 = local_b0;
  uStack_118 = uStack_a8;
  local_110 = local_a0;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<RiftValidateMgr,void(RiftValidateMgr::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSunSpent);
  local_130 = local_88;
  local_140 = local_98;
  uStack_138 = uStack_90;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<RiftValidateMgr,void(RiftValidateMgr::*)(int)>>
            ((MessageRouter *)puVar1,Message::SunSpent,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantfoodUsed);
  local_160 = local_80;
  uStack_158 = uStack_78;
  local_150 = local_70;
  MessageRouter::
  Subscribe<PlantGroup*,Sexy::CBMemberTranslatorX<RiftValidateMgr,void(RiftValidateMgr::*)(PlantGroup*)>>
            ((MessageRouter *)puVar1,Message::ToolAppliedPlantfood,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDamageTakenRaw);
  local_170 = local_58;
  local_180 = local_68;
  uStack_178 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const&,Sexy::CBMemberTranslatorX<RiftValidateMgr,void(RiftValidateMgr::*)(Zombie*,DamageInfo_const&)>>
            ((MessageRouter *)puVar1,Message::ZombieDamageTakenRaw,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyToolPacketUsed);
  local_1a0 = local_50;
  uStack_198 = uStack_48;
  local_190 = local_40;
  MessageRouter::
  Subscribe<std::string_const&,int,int,Sexy::CBMemberTranslatorX<RiftValidateMgr,void(RiftValidateMgr::*)(std::string_const&,int,int)>>
            ((MessageRouter *)puVar1,Message::NotifyToolPacketUsed,&local_1a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftTimedEventTimerNotify);
  Sexy::Delegate0::Delegate0<RiftValidateMgr,void(RiftValidateMgr::*)()>(aDStack_38,aCStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RiftTimedEventTimerNotify,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onArtifactTrigger);
  Sexy::Delegate0::Delegate0<RiftValidateMgr,void(RiftValidateMgr::*)()>(aDStack_38,aCStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArtifactTrigger,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRiftPostEndPlay);
  Sexy::Delegate0::Delegate0<RiftValidateMgr,void(RiftValidateMgr::*)()>(aDStack_38,aCStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyRiftPostEndPlay,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftValidateMgr::~RiftValidateMgr() */

void __thiscall RiftValidateMgr::~RiftValidateMgr(RiftValidateMgr *this)

{
  *(undefined ***)this = &PTR__RiftValidateMgr_0668a650;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  ValidateGamePlayData::~ValidateGamePlayData((ValidateGamePlayData *)(this + 0x38));
  ValidateGameStartData::~ValidateGameStartData((ValidateGameStartData *)(this + 8));
  Sexy::LazySingleton<RiftValidateMgr>::~LazySingleton((LazySingleton<RiftValidateMgr> *)this);
  return;
}


/* RiftValidateMgr::~RiftValidateMgr() */

void __thiscall RiftValidateMgr::~RiftValidateMgr(RiftValidateMgr *this)

{
  ~RiftValidateMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::sendGamePlayInfos(std::string const&) */

void __thiscall RiftValidateMgr::sendGamePlayInfos(RiftValidateMgr *this,string *param_1)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  GachaConfig *this_00;
  undefined8 uVar7;
  DNetwork *this_01;
  ulong local_d68;
  string asStack_d60 [8];
  string asStack_d58 [8];
  string asStack_d50 [8];
  undefined8 local_d48 [2];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2168];
  string asStack_470 [1128];
  long local_8;
  
  local_d68 = 0x1400;
  local_8 = ___stack_chk_guard;
  AutoBuffer::AutoBuffer((AutoBuffer *)local_d48,0x1400);
  puVar3 = (uchar *)FUN_03719598(local_d48[0]);
  puVar4 = (uchar *)FUN_0547429c(param_1);
  uVar1 = FUN_05474178(param_1);
  base64_url_safe(puVar4,uVar1);
  puVar4 = (uchar *)FUN_0547429c(asStack_d60);
  uVar5 = FUN_05474178(asStack_d60);
  iVar2 = gzcompress(puVar4,uVar5,puVar3,&local_d68);
  if (iVar2 == 0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_ce8,"on");
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
    this_00 = (GachaConfig *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar7 = GachaConfig::GetGachaPlantRewardList(this_00);
    thunk_FUN_05475e00(uVar6,uVar7);
    std::string::~string(asStack_ce8);
    nop();
    base64_url_safe(puVar3,(uint)local_d68);
    std::string::string(asStack_ce8,"di");
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
    thunk_FUN_05475e00(uVar6,asStack_d58);
    std::string::~string(asStack_ce8);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_0371a5cc(afStack_d38,this);
    std::string::string(asStack_d50,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_470,(map *)amStack_d18,30.0,(function *)afStack_d38,false,true,
               asStack_d50,0);
    std::string::~string(asStack_d50);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::string::~string(asStack_d58);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  std::string::~string(asStack_d60);
  AutoBuffer::~AutoBuffer((AutoBuffer *)local_d48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::sendGameStartInfos(std::string const&) */

void __thiscall RiftValidateMgr::sendGameStartInfos(RiftValidateMgr *this,string *param_1)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  GachaConfig *this_00;
  undefined8 uVar7;
  DNetwork *this_01;
  ulong local_d68;
  string asStack_d60 [8];
  string asStack_d58 [8];
  string asStack_d50 [8];
  undefined8 local_d48 [2];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2160];
  string asStack_478 [1136];
  long local_8;
  
  local_d68 = 0x1400;
  local_8 = ___stack_chk_guard;
  AutoBuffer::AutoBuffer((AutoBuffer *)local_d48,0x1400);
  puVar3 = (uchar *)FUN_03719598(local_d48[0]);
  puVar4 = (uchar *)FUN_0547429c(param_1);
  uVar1 = FUN_05474178(param_1);
  base64_url_safe(puVar4,uVar1);
  puVar4 = (uchar *)FUN_0547429c(asStack_d60);
  uVar5 = FUN_05474178(asStack_d60);
  iVar2 = gzcompress(puVar4,uVar5,puVar3,&local_d68);
  if (iVar2 == 0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string(asStack_ce8,"on");
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
    this_00 = (GachaConfig *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar7 = GachaConfig::GetGachaPlantRewardList(this_00);
    thunk_FUN_05475e00(uVar6,uVar7);
    std::string::~string(asStack_ce8);
    nop();
    base64_url_safe(puVar3,(uint)local_d68);
    std::string::string(asStack_ce8,"di");
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
    thunk_FUN_05475e00(uVar6,asStack_d58);
    std::string::~string(asStack_ce8);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_0371a628(afStack_d38,this);
    std::string::string(asStack_d50,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_478,(map *)amStack_d18,30.0,(function *)afStack_d38,false,true,
               asStack_d50,0);
    std::string::~string(asStack_d50);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::string::~string(asStack_d58);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  std::string::~string(asStack_d60);
  AutoBuffer::~AutoBuffer((AutoBuffer *)local_d48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::getSelectedPlantTypes(std::vector<std::string, std::allocator<std::string > >&)
    */

void __thiscall RiftValidateMgr::getSelectedPlantTypes(RiftValidateMgr *this,vector *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetBoardPlants();
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_20);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_20);
  std::
  sort<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar1,uVar2);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_20);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_20);
  local_40 = std::
             unique<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
                       (uVar1,uVar2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_30,(__normal_iterator *)&local_40);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_28,(__normal_iterator *)&local_38);
  std::vector<std::string,std::allocator<std::string>>::erase
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,local_30,local_28);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)param_1,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::gatherGamePlayPlantLevels() */

void __thiscall RiftValidateMgr::gatherGamePlayPlantLevels(RiftValidateMgr *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if (((pPVar4 != (Plant *)0x0) &&
        (cVar2 = FUN_0371b33c(*(undefined4 *)(pPVar4 + 0x28)), cVar2 == '\0')) &&
       (cVar2 = RealObject::IsOnTeam(pPVar4,1), cVar2 != '\0')) {
      local_34 = FUN_03719594(*(undefined4 *)(pPVar4 + 0x50));
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0x88),&local_34);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::trySendGamePlayInfos() */

void __thiscall RiftValidateMgr::trySendGamePlayInfos(RiftValidateMgr *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  gatherGamePlayPlantLevels(this);
  PlantPacketJsonConverter::SerializeObj();
  sendGamePlayInfos(this,asStack_10);
  ValidateGamePlayData::Reset((ValidateGamePlayData *)(this + 0x38));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::onNotifyRiftPostEndPlay() */

void __thiscall RiftValidateMgr::onNotifyRiftPostEndPlay(RiftValidateMgr *this)

{
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  gatherGamePlayPlantLevels(this);
  PlantPacketJsonConverter::SerializeObj();
  sendGamePlayInfos(this,asStack_10);
  ValidateGamePlayData::Reset((ValidateGamePlayData *)(this + 0x38));
  std::string::~string(asStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::onRiftTimedEventTimerNotify() */

void __thiscall RiftValidateMgr::onRiftTimedEventTimerNotify(RiftValidateMgr *this)

{
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  gatherGamePlayPlantLevels(this);
  PlantPacketJsonConverter::SerializeObj();
  sendGamePlayInfos(this,asStack_10);
  ValidateGamePlayData::Reset((ValidateGamePlayData *)(this + 0x38));
  std::string::~string(asStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::gatherGameStartInfos() */

void __thiscall RiftValidateMgr::gatherGameStartInfos(RiftValidateMgr *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  string *psVar7;
  string *psVar8;
  long *plVar9;
  PlantType *pPVar10;
  PlantAccessoryMgr *pPVar11;
  Board *this_03;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_a0;
  undefined8 local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  string asStack_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_70 [24];
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> avStack_58 [24];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  vector<std::string,std::allocator<std::string>> avStack_30 [24];
  undefined4 local_18;
  undefined8 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = LawnApp::GetRealServerTime(gLawnApp);
  this_03 = *(Board **)(gLawnApp + 0x9f0);
  *(float *)(this + 0x28) = (float)lVar6;
  uVar3 = Board::GetSunCurrency(this_03);
  *(undefined4 *)(this + 0x2c) = uVar3;
  uVar4 = Board::GetPlantfoodCount(this_03);
  *(uint *)(this + 0x30) = uVar4 & 0xff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_70);
  getSelectedPlantTypes(this,(vector *)avStack_70);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_70);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_70);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    uVar3 = PlayerInfo::GetPlantStarLevel(this_01,psVar7,false);
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
    uVar5 = (**(code **)(*plVar9 + 0x70))(plVar9,0xfffffffe);
    pPVar10 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
    uVar13 = PlantType::GetPacketCoolDown(pPVar10,0xfffffffe);
    std::string::string(asStack_88,"");
    nop();
    pPVar11 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_90);
    lVar6 = PlantAccessoryMgr::GetAccessoryForPlant
                      (pPVar11,(vector<std::string,std::allocator<std::string>> *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (lVar6 == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      thunk_FUN_05475e00(asStack_88,lVar6 + 8);
      uVar12 = *(undefined4 *)(lVar6 + 0x10);
    }
    Sexy::LazySingleton<PlantFamilyMgr>::GetInstance();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)aRStack_90);
    PlantFamilyMgr::GetPlantBoostInFamilyRaw((PlantFamilyMgr *)&local_40,aRStack_78);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (avStack_58,(vector *)&local_40);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
    PlantImitater::GetImitatedPlant();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_78);
    if (bVar1) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      cVar2 = std::vector<PlantAction,std::allocator<PlantAction>>::empty
                        ((vector<PlantAction,std::allocator<PlantAction>> *)(lVar6 + 0x70));
      if (cVar2 == '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
        lVar6 = FUN_03719f1c(*(undefined8 *)(lVar6 + 0x70));
        local_80 = *(undefined4 *)(lVar6 + 0x24);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
        lVar6 = FUN_03719f1c(*(undefined8 *)(lVar6 + 0x70));
        uStack_7c = *(undefined4 *)(lVar6 + 0x28);
      }
    }
    ValidatePlantData::ValidatePlantData((ValidatePlantData *)&local_40);
    local_3c = uVar5;
    local_38 = uVar13;
    local_18 = uVar12;
    std::vector<std::string,std::allocator<std::string>>::operator=(avStack_30,(vector *)avStack_58)
    ;
    local_34 = uVar3;
    this_02 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    local_40 = NameMapperBase::GetIdForName(this_02,psVar7);
    local_14 = CONCAT44(uStack_7c,local_80);
    std::vector<ValidatePlantData,std::allocator<ValidatePlantData>>::push_back
              ((vector<ValidatePlantData,std::allocator<ValidatePlantData>> *)(this + 0x10),
               (ValidatePlantData *)&local_40);
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_58);
    std::string::~string(asStack_88);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::trySendGameStartInfos() */

void __thiscall RiftValidateMgr::trySendGameStartInfos(RiftValidateMgr *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  gatherGameStartInfos(this);
  PlantPacketJsonConverter::SerializeObj();
  sendGameStartInfos(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftValidateMgr::onRiftTimedEventTimerStarted() */

void __thiscall RiftValidateMgr::onRiftTimedEventTimerStarted(RiftValidateMgr *this)

{
  ValidateGamePlayData::Reset((ValidateGamePlayData *)(this + 0x38));
  trySendGameStartInfos(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::onZombiePlaceOnBoard(Zombie*) */

void __thiscall RiftValidateMgr::onZombiePlaceOnBoard(RiftValidateMgr *this,Zombie *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsValidateLevel();
  if ((cVar1 != '\0') && (param_1 != (Zombie *)0x0)) {
    fVar2 = (float)FUN_037195a8(*(undefined4 *)(param_1 + 0x280));
    fVar3 = (float)FUN_037195b0(*(undefined4 *)(param_1 + 0x2a8));
    fVar4 = (float)FUN_037195ac(*(undefined4 *)(param_1 + 0x284));
    fVar5 = (float)FUN_037195b4(*(undefined4 *)(param_1 + 0x2ac));
    Sexy::FastCurve::SetOutRange(aFStack_10,fVar3 + fVar2,fVar5 + fVar4);
    std::vector<ValidateZombieInfoData,std::allocator<ValidateZombieInfoData>>::push_back
              ((vector<ValidateZombieInfoData,std::allocator<ValidateZombieInfoData>> *)
               (this + 0x58),(ValidateZombieInfoData *)aFStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::onNotifyToolPacketUsed(std::string const&, int, int) */

void __thiscall
RiftValidateMgr::onNotifyToolPacketUsed
          (RiftValidateMgr *this,string *param_1,int param_2,int param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  wchar_t local_24;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x70);
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar_t *)
           std::
           map<std::string,ValidateToolPacketType,std::less<std::string>,std::allocator<std::pair<std::string_const,ValidateToolPacketType>>>
           ::operator[]((map<std::string,ValidateToolPacketType,std::less<std::string>,std::allocator<std::pair<std::string_const,ValidateToolPacketType>>>
                         *)&DAT_06aaf400,param_1);
  local_24 = *pwVar2;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_20 = FUN_0371e450(uVar3,uVar4,&local_24);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
  if (bVar1) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    *(int *)(lVar5 + 4) = param_3;
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + param_2;
  }
  else {
    SortedKern::SortedKern((SortedKern *)local_18,local_24,param_3,param_2);
    std::vector<ValidateToolPacketData,std::allocator<ValidateToolPacketData>>::push_back
              ((vector<ValidateToolPacketData,std::allocator<ValidateToolPacketData>> *)this_00,
               (ValidateToolPacketData *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftValidateMgr::tryReplaceDamageInfo(Plant*, DamageInfo const&) */

void __thiscall
RiftValidateMgr::tryReplaceDamageInfo(RiftValidateMgr *this,Plant *param_1,DamageInfo *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  NameMapperBase *this_03;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
  FUN_05475d88(asStack_28,lVar4 + 8);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_20 = FUN_0371e6b4(uVar5,uVar6,asStack_28);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
  if (bVar1) {
    fVar7 = *(float *)(param_2 + 8);
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    if (*(float *)(lVar4 + 8) < fVar7) {
      *(float *)(lVar4 + 8) = fVar7;
    }
  }
  else {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar2 = PlayerInfo::GetPlantStarLevel(this_02,asStack_28,bVar1);
    this_03 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    iVar3 = NameMapperBase::GetIdForName(this_03,asStack_28);
    ValidateDamageInfoData::ValidateDamageInfoData
              ((ValidateDamageInfoData *)local_18,iVar3,iVar2,*(float *)(param_2 + 8));
    std::vector<ValidateDamageInfoData,std::allocator<ValidateDamageInfoData>>::push_back
              ((vector<ValidateDamageInfoData,std::allocator<ValidateDamageInfoData>> *)this_00,
               (ValidateDamageInfoData *)local_18);
  }
  std::string::~string(asStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftValidateMgr::onZombieDamageTakenRaw(Zombie*, DamageInfo const&) */

void __thiscall
RiftValidateMgr::onZombieDamageTakenRaw(RiftValidateMgr *this,Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  bool bVar2;
  Plant *extraout_x0;
  
  cVar1 = IsValidateLevel();
  if ((((cVar1 != '\0') && (*(RtObject **)param_2 != (RtObject *)0x0)) &&
      (bVar2 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_2), bVar2)) &&
     (nop(), extraout_x0 != (Plant *)0x0)) {
    tryReplaceDamageInfo(this,extraout_x0,param_2);
    return;
  }
  return;
}


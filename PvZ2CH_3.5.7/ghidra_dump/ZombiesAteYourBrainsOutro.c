// Class: ZombiesAteYourBrainsOutro


/* ZombiesAteYourBrainsOutro::initializeModule() */

void __thiscall ZombiesAteYourBrainsOutro::initializeModule(ZombiesAteYourBrainsOutro *this)

{
  PrimeText *this_00;
  
  this[0x20] = (ZombiesAteYourBrainsOutro)0x0;
  *(undefined4 *)(this + 0x88) = 0;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  return;
}


/* ZombiesAteYourBrainsOutro::onRiftNetworkResponse(int, int) */

void __thiscall
ZombiesAteYourBrainsOutro::onRiftNetworkResponse
          (ZombiesAteYourBrainsOutro *this,int param_1,int param_2)

{
  if ((param_1 == 7) && (param_2 == 4)) {
    JoustUtils::ShowJoustNetworkIssuePopup(1);
    return;
  }
  return;
}


/* ZombiesAteYourBrainsOutro::outro_freezeGameplay(float) */

void ZombiesAteYourBrainsOutro::outro_freezeGameplay(float param_1)

{
  long in_x0;
  
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
  *(undefined1 *)(in_x0 + 0x20) = 1;
  return;
}


/* ZombiesAteYourBrainsOutro::outro_notifyComplete(float) */

void ZombiesAteYourBrainsOutro::outro_notifyComplete(float param_1)

{
  Board::NotifyOutroComplete(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* ZombiesAteYourBrainsOutro::StaticGetClass() */

long * ZombiesAteYourBrainsOutro::StaticGetClass(void)

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
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiesAteYourBrainsOutro",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsOutro::sendPostPVZ1ModeEndPlay() */

void ZombiesAteYourBrainsOutro::sendPostPVZ1ModeEndPlay(void)

{
  PVZ1ModeUtils *this;
  PVZ1ModeEndPlayParamData local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData(&local_38);
  local_38 = (PVZ1ModeEndPlayParamData)PVZ1ModeUtils::IsHardMode();
  local_37 = 0;
  this = (PVZ1ModeUtils *)PVZ1ModeUtils::GetCurrentWorldLevelIndexByNetworkMgr();
  local_34 = SUB84(this,0);
  PVZ1ModeUtils::GetChooseListStr(this);
  FUN_05474278(auStack_30,asStack_20);
  std::string::~string(asStack_20);
  local_28 = 3;
  PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData
            ((PVZ1ModeEndPlayParamData *)asStack_20,&local_38);
  PVZ1ModeUtils::SendPost_EndPlay(asStack_20);
  PakRecord::~PakRecord((PakRecord *)asStack_20);
  PakRecord::~PakRecord((PakRecord *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiesAteYourBrainsOutro::SetWinningZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ZombiesAteYourBrainsOutro::SetWinningZombie(ZombiesAteYourBrainsOutro *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  Zombie *this_01;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
  if (cVar1 == '\0') {
    return;
  }
  this_01 = (Zombie *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Zombie::SetIsWinningZombie(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsOutro::outro_showZombiesWonPAM(float) */

void ZombiesAteYourBrainsOutro::outro_showZombiesWonPAM(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_x0;
  PrimeText *this;
  Effect_FloatingText *this_00;
  wchar_t *pwVar4;
  code *pcVar5;
  undefined1 auStack_20 [8];
  DVec2 aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this);
  iVar1 = FUN_046d0f88(500);
  iVar2 = FUN_046d0f88(300);
  iVar3 = FUN_046d0f88(0x8c);
  this_00 = Board::AddEffect<Effect_FloatingText>(*(Board **)(gLawnApp + 0x9f0));
  Effect_FloatingText::SetDuration(this_00,2.0);
  pcVar5 = *(code **)(*(long *)this_00 + 0x78);
  Sexy::Color::Color((Color *)aDStack_18,1);
  (*pcVar5)(this_00,aDStack_18);
  DVec2::DVec2(aDStack_18,0.3,0.75);
  Effect_FloatingText::SetInitScale(this_00,aDStack_18);
  DVec2::DVec2(aDStack_18,1.0,0.75);
  Effect_FloatingText::SetScale(this_00,aDStack_18);
  Effect_FloatingText::SetFadeInDuration(this_00,3.0);
  Sexy::Point::Point((Point *)aDStack_18,(int)(float)iVar1,(int)(float)iVar2);
  Effect_FloatingText::SetTextAsParagraph(this_00,aDStack_18);
  FUN_05476574(auStack_20);
  switch(*(undefined4 *)(in_x0 + 0x88)) {
  case 0:
    pwVar4 = L"[OUTRO_ZOMBIESWON]";
    break;
  case 1:
    pwVar4 = L"[FAILED_CANNON_MINIGAME]";
    break;
  case 2:
    pwVar4 = L"[FAILED_PROTECT_THE_PLANT]";
    break;
  case 3:
    pwVar4 = L"[FAILED_NO_LIFE]";
    break;
  case 4:
    pwVar4 = L"[FAILED_STEAM_MINIGAME]";
    break;
  default:
    goto switchD_046d1620_default;
  }
  TodStringTranslate(pwVar4);
  FUN_054766c8(auStack_20,aDStack_18);
  FUN_05476c50(aDStack_18);
switchD_046d1620_default:
  Effect_FloatingText::SetStyle(this_00,1);
  Effect_FloatingText::SetText((wstring *)this_00);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
  FUN_046d0d74(this_00 + 0x1c);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)aDStack_18,(float)(*(int *)(gLawnApp + 0x724) / 2) - (float)iVar1 * 0.5,
             ((float)(*(int *)(gLawnApp + 0x728) / 2) - (float)iVar3) - (float)iVar2 * 0.5);
  StandaloneEffect::SetScreenSpaceOrigin((StandaloneEffect *)this_00,(SexyVector2 *)aDStack_18,-1);
  FUN_05476c50(auStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiesAteYourBrainsOutro::ZombiesAteYourBrainsOutro() */

void __thiscall
ZombiesAteYourBrainsOutro::ZombiesAteYourBrainsOutro(ZombiesAteYourBrainsOutro *this)

{
  OutroModule::OutroModule((OutroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068b4180;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  this[0x20] = (ZombiesAteYourBrainsOutro)0x0;
  TimeLine::TimeLine((TimeLine *)(this + 0x28));
  *(undefined4 *)(this + 0x88) = 0;
  return;
}


/* ZombiesAteYourBrainsOutro::StaticNew() */

ZombiesAteYourBrainsOutro * ZombiesAteYourBrainsOutro::StaticNew(void)

{
  ZombiesAteYourBrainsOutro *this;
  
  this = ::operator_new(0x90);
  ZombiesAteYourBrainsOutro(this);
  return this;
}


/* ZombiesAteYourBrainsOutro::outro_playChomp(float) */

void ZombiesAteYourBrainsOutro::outro_playChomp(float param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Chomp");
  return;
}


/* ZombiesAteYourBrainsOutro::outro_playScream(float) */

void ZombiesAteYourBrainsOutro::outro_playScream(float param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Scream");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsOutro::sendPostPVZ2UnchartedModeEndPlay() */

void ZombiesAteYourBrainsOutro::sendPostPVZ2UnchartedModeEndPlay(void)

{
  bool bVar1;
  PVZ2UnchartedModeUtils *this;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  string asStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  PVZ2UnchartedModeEndPlayParamData local_80 [8];
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined1 auStack_68 [8];
  undefined1 local_60;
  vector<bool,std::allocator<bool>> avStack_58 [40];
  undefined1 local_30 [2] [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UnchartedModeEndPlayParamData::PVZ2UnchartedModeEndPlayParamData(local_80);
  this = (PVZ2UnchartedModeUtils *)PVZ2UnchartedModeUtils::IsHardMode();
  local_80[0] = SUB81(this,0);
  PVZ2UnchartedModeUtils::GetPrefixWorld(this);
  FUN_05474278(auStack_78,(string *)local_30);
  std::string::~string((string *)local_30);
  local_70 = PVZ2UnchartedModeUtils::GetCurrentWorldLevelIndexByNetworkMgr();
  local_60 = 0;
  std::vector<bool,std::allocator<bool>>::vector(avStack_58);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  ProfileUtils::GetChallengeStatusForCurrentLevel((vector *)&local_98);
  uVar3 = local_98;
  lVar2 = FUN_046d0d5c(local_98,local_90);
  if (lVar2 != 0) {
    uVar5 = 0;
    while( true ) {
      lVar2 = FUN_046d0d70(uVar3);
      uVar4 = std::vector<bool,std::allocator<bool>>::size
                        ((vector<bool,std::allocator<bool>> *)(lVar2 + 0x58));
      if (uVar4 <= uVar5) break;
      lVar2 = FUN_046d0d70(local_98);
      auVar6 = FUN_046d0ddc(*(undefined8 *)(lVar2 + 0x58),uVar5);
      local_30[0] = auVar6;
      bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_30);
      std::vector<bool,std::allocator<bool>>::push_back(avStack_58,bVar1);
      uVar3 = local_98;
      uVar5 = uVar5 + 1;
    }
  }
  std::vector<bool,std::allocator<bool>>::vector
            ((vector<bool,std::allocator<bool>> *)local_30,(vector *)avStack_58);
  PVZ2UnchartedModeUtils::GetChallengeListStr
            ((PVZ2UnchartedModeUtils *)asStack_a0,(string *)local_30);
  FUN_05474278(auStack_68,asStack_a0);
  std::string::~string(asStack_a0);
  std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_30);
  PVZ2UnchartedModeEndPlayParamData::PVZ2UnchartedModeEndPlayParamData
            ((PVZ2UnchartedModeEndPlayParamData *)local_30,local_80);
  PVZ2UnchartedModeUtils::SendPost_EndPlay((string *)local_30);
  DiscountPlant::~DiscountPlant((DiscountPlant *)local_30);
  std::
  vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>::
  ~vector((vector<ProfileUtils::ChallengeStatusHolder,std::allocator<ProfileUtils::ChallengeStatusHolder>>
           *)&local_98);
  std::vector<bool,std::allocator<bool>>::~vector(avStack_58);
  DiscountPlant::~DiscountPlant((DiscountPlant *)local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiesAteYourBrainsOutro::~ZombiesAteYourBrainsOutro() */

void __thiscall
ZombiesAteYourBrainsOutro::~ZombiesAteYourBrainsOutro(ZombiesAteYourBrainsOutro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068b4180;
  TimeLine::~TimeLine((TimeLine *)(this + 0x28));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  OutroModule::~OutroModule((OutroModule *)this);
  return;
}


/* ZombiesAteYourBrainsOutro::~ZombiesAteYourBrainsOutro() */

void __thiscall
ZombiesAteYourBrainsOutro::~ZombiesAteYourBrainsOutro(ZombiesAteYourBrainsOutro *this)

{
  ~ZombiesAteYourBrainsOutro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsOutro::registerForEvents() */

void __thiscall ZombiesAteYourBrainsOutro::registerForEvents(ZombiesAteYourBrainsOutro *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,startLossOutro);
  Sexy::Delegate0::Delegate0<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLossOutroStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftNetworkResponse);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::RiftNetworkResponseReceived,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVZ1ModeNetworkResponse);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::PVZ1ModeNetworkResponseReceived,&local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiesAteYourBrainsOutro::onUpdate() */

void __thiscall ZombiesAteYourBrainsOutro::onUpdate(ZombiesAteYourBrainsOutro *this)

{
  char cVar1;
  BoardEntity *this_00;
  float fVar2;
  
  fVar2 = (float)PVZ_Dt();
  TimeLine::Update((TimeLine *)(this + 0x28),fVar2);
  if (this[0x20] != (ZombiesAteYourBrainsOutro)0x0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x18));
    if (cVar1 != '\0') {
      this_00 = (BoardEntity *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
      BoardEntity::Update(this_00);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsOutro::onPVZ1ModeNetworkResponse(int, int) */

void __thiscall
ZombiesAteYourBrainsOutro::onPVZ1ModeNetworkResponse
          (ZombiesAteYourBrainsOutro *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  long lVar6;
  TGALogMgr *pTVar7;
  OakArrowUI *this_00;
  BoardHeroPlantManager *this_01;
  undefined8 uVar8;
  int *piVar9;
  ulong uVar10;
  HeroPlantFramework *this_02;
  size_t __n;
  undefined1 *__n_00;
  ulong uVar11;
  float fVar12;
  string asStack_330 [8];
  RtWeakPtr aRStack_328 [8];
  string asStack_320 [8];
  UnchartedModeEndOfPlayData aUStack_318 [120];
  int local_2a0;
  DString aDStack_298 [16];
  string asStack_288 [16];
  string asStack_278 [8];
  string asStack_270 [32];
  string asStack_250 [8];
  string asStack_248 [16];
  string asStack_238 [32];
  string asStack_218 [16];
  TGAPVZ1ModeData aTStack_208 [8];
  int local_200 [2];
  undefined8 local_1f8;
  undefined8 local_1f0;
  string asStack_1e8 [112];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  __n = (size_t)(uint)param_2;
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF
            ((wchar_t *)"ZombiesAteYourBrainsOutro::onPVZ1ModeNetworkResponse context=%d status=%d")
  ;
  if (param_1 == 3) {
    if (param_2 == 2) {
      cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
      if (cVar1 == '\0') {
        cVar1 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
        if (cVar1 != '\0') {
          Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
          UnchartedModeNetworkMgr::GetEndPlayData();
          TGAUnchartedData::TGAUnchartedData((TGAUnchartedData *)aDStack_298);
          DString::DString((DString *)aTStack_208,2);
          pcVar5 = (char *)DString::c_str((DString *)aTStack_208);
          std::string::append((string *)aDStack_298,pcVar5,__n);
          DString::~DString((DString *)aTStack_208);
          DString::DString((DString *)aTStack_208,local_2a0);
          pcVar5 = (char *)DString::c_str((DString *)aTStack_208);
          std::string::append(asStack_288,pcVar5,__n);
          DString::~DString((DString *)aTStack_208);
          this_00 = (OakArrowUI *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
          OakArrowUI::GetArrowCount(this_00);
          Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
          UnchartedModeNetworkMgr::GetCurrentLevel();
          DString::DString((DString *)aTStack_208,asStack_330);
          pcVar5 = (char *)DString::c_str((DString *)aTStack_208);
          std::string::append(asStack_278,pcVar5,__n);
          DString::~DString((DString *)aTStack_208);
          std::string::append(asStack_270,"0",__n);
          iVar3 = PVZ2UnchartedModeUtils::GetUnchartedWorldType();
          DString::DString((DString *)aTStack_208,iVar3);
          pcVar5 = (char *)DString::c_str((DString *)aTStack_208);
          std::string::append(asStack_248,pcVar5,__n);
          DString::~DString((DString *)aTStack_208);
          cVar1 = PVZ2UnchartedModeUtils::IsUnchartedBirthday();
          if ((cVar1 != '\0') ||
             (cVar1 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(), cVar1 != '\0')) {
            lVar6 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
            iVar3 = FUN_046d0d44(*(undefined4 *)(lVar6 + 0x198));
            DString::DString((DString *)aTStack_208,iVar3);
            pcVar5 = (char *)DString::c_str((DString *)aTStack_208);
            std::string::append(asStack_250,pcVar5,__n);
            DString::~DString((DString *)aTStack_208);
          }
          this_01 = Board::FindGameSubSystem<BoardHeroPlantManager>(*(Board **)(gLawnApp + 0x9f0));
          if (this_01 == (BoardHeroPlantManager *)0x0) {
            std::string::append(asStack_238,"0",__n);
            std::string::append(asStack_218,"1,-1;2,-1;3,-1",__n);
          }
          else {
            BoardHeroPlantManager::GetHeroPlant();
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_328);
            if ((bVar2) &&
               (lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_328),
               *(long *)(lVar6 + 0xa8) != 0)) {
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_328);
              this_02 = Sexy::RtObject::Cast<HeroPlantFramework>(*(RtObject **)(lVar6 + 0xa8));
              if (this_02 != (HeroPlantFramework *)0x0) {
                HeroPlantFramework::SaveHeroPlantInfo(this_02);
              }
            }
            HeroPlantSaveInfo::HeroPlantSaveInfo((HeroPlantSaveInfo *)aTStack_208);
            BoardHeroPlantManager::LoadHeroPlantInfo(this_01,(HeroPlantSaveInfo *)aTStack_208);
            if (local_200[0] == 0) {
              std::string::append(asStack_238,"0",__n);
              std::string::append(asStack_218,"1,-1;2,-1;3,-1",__n);
            }
            else {
              __n_00 = auStack_178;
              uVar4 = operator|(0x10,8);
              FUN_05462470(auStack_178,uVar4);
              uVar11 = 0;
              while (uVar10 = FUN_046d0d48(local_1f8,local_1f0), uVar11 < uVar10) {
                uVar8 = thunk_FUN_0546069c(auStack_168,uVar11 + 1);
                uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
                piVar9 = (int *)FUN_046d0d54(local_1f8,uVar11);
                iVar3 = *piVar9;
                if (iVar3 == 0) {
                  iVar3 = -1;
                }
                uVar8 = FUN_0546065c(uVar8,iVar3);
                FUN_054603b8(uVar8,&DAT_05594620);
                uVar11 = uVar11 + 1;
              }
              std::string::append(asStack_238,"1",(size_t)__n_00);
              FUN_05462824(asStack_320,auStack_178);
              FUN_05474278(asStack_218,asStack_320);
              std::string::~string(asStack_320);
              FUN_054617bc(auStack_178);
            }
            HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)aTStack_208);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_328);
          }
          pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          TGAUnchartedData::TGAUnchartedData
                    ((TGAUnchartedData *)aTStack_208,(TGAUnchartedData *)aDStack_298);
          TGALogMgr::LogUncharted(pTVar7,(DString *)aTStack_208);
          TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)aTStack_208);
          std::string::~string(asStack_330);
          TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)aDStack_298);
          UnchartedModeEndOfPlayData::~UnchartedModeEndOfPlayData(aUStack_318);
        }
      }
      else {
        TGAPVZ1ModeData::TGAPVZ1ModeData(aTStack_208);
        DString::DString(aDStack_298,2);
        pcVar5 = (char *)DString::c_str(aDStack_298);
        std::string::append((string *)aTStack_208,pcVar5,__n);
        DString::~DString(aDStack_298);
        Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
        PVZ1ModeNetworkMgr::GetCurrentLevel();
        FUN_05474278(local_200,aDStack_298);
        std::string::~string((string *)aDStack_298);
        cVar1 = PVZ1ModeUtils::IsHardMode();
        if (cVar1 == '\0') {
          pcVar5 = "0";
        }
        else {
          pcVar5 = "1";
        }
        std::string::append((string *)&local_1f8,pcVar5,__n);
        DString::DString(aDStack_298,3);
        pcVar5 = (char *)DString::c_str(aDStack_298);
        std::string::append((string *)&local_1f0,pcVar5,__n);
        DString::~DString(aDStack_298);
        lVar6 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
        PVZ_T();
        FUN_046d0d34(lVar6 + 0x164);
        lVar6 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
        fVar12 = (float)FUN_046d0d3c(*(undefined4 *)(lVar6 + 0x160),*(undefined4 *)(lVar6 + 0x164));
        DString::DString(aDStack_298,fVar12);
        pcVar5 = (char *)DString::c_str(aDStack_298);
        std::string::append(asStack_1e8,pcVar5,__n);
        DString::~DString(aDStack_298);
        pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPVZ1Mode(pTVar7,aTStack_208);
        TGAPVZ1ModeData::~TGAPVZ1ModeData(aTStack_208);
      }
    }
    else if (param_2 == 5) {
      JoustUtils::ShowJoustNetworkIssuePopup(1,3);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsOutro::sendPostEndPlay() */

void ZombiesAteYourBrainsOutro::sendPostEndPlay(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  TGALogMgr *pTVar5;
  size_t __n;
  float fVar6;
  size_t local_150;
  ulong uStack_148;
  long local_140;
  undefined4 local_138;
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  undefined4 local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 local_f0;
  TGAPennyPursuitData aTStack_e8 [8];
  undefined1 auStack_e0 [8];
  string asStack_d8 [8];
  string asStack_d0 [64];
  string asStack_90 [8];
  undefined1 auStack_88 [16];
  DString aDStack_78 [8];
  int local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RiftPostEndPlay::RiftPostEndPlay((RiftPostEndPlay *)&local_108);
  iVar2 = RiftUtils::GetDifficultyForNextLevel();
  local_100 = iVar2 + 1;
  uVar3 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_120,uVar3);
  uStack_104 = RiftUtils::GetRiftWorldIndexOfLevel(asStack_120);
  cVar1 = RiftUtils::IsPlayingZombossLevel();
  local_108 = 2;
  if (cVar1 == '\0') {
    local_108 = 1;
  }
  uStack_f4 = uStack_f4 & 0xffffff00;
  local_138 = RiftUtils::GetZombossRewardRatio();
  local_f8 = 0;
  local_fc = 0;
  local_140 = (ulong)uStack_f4 << 0x20;
  __n = CONCAT44(uStack_104,local_108);
  uStack_148 = (ulong)local_100;
  local_150 = __n;
  local_f0 = local_138;
  RiftUtils::SendPost_EndPlay(&local_150);
  cVar1 = RiftUtils::IsPlayingZombossLevel();
  TGAPennyPursuitData::TGAPennyPursuitData(aTStack_e8);
  if (cVar1 == '\0') {
    pcVar4 = "2";
  }
  else {
    pcVar4 = "3";
  }
  std::string::append((string *)aTStack_e8,pcVar4,__n);
  uVar3 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_118,uVar3);
  thunk_FUN_05475e00(auStack_e0,asStack_118);
  iVar2 = RiftUtils::GetDifficultyForNextLevel();
  DString::DString(aDStack_78,iVar2);
  pcVar4 = (char *)DString::c_str(aDStack_78);
  std::string::append(asStack_d8,pcVar4,__n);
  DString::~DString(aDStack_78);
  std::string::append(asStack_d0,"0",__n);
  cVar1 = RiftUtils::IsPlayingZombossLevel();
  if (cVar1 == '\0') {
    fVar6 = (float)RiftUtils::GetLevelTime();
  }
  else {
    fVar6 = (float)RiftUtils::GetBossLevelTime();
  }
  DString::DString(aDStack_78,(int)fVar6);
  pcVar4 = (char *)DString::c_str(aDStack_78);
  std::string::append(asStack_90,pcVar4,__n);
  DString::~DString(aDStack_78);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  iVar2 = PlayerInfo::GetCurrentArtifact(this_00);
  DString::DString(aDStack_78,iVar2);
  pcVar4 = (char *)DString::c_str(aDStack_78);
  std::string::string(asStack_110,pcVar4);
  nop();
  DString::~DString(aDStack_78);
  PlayerInfo::GetArtifactInfoByID((int)this_00);
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)aDStack_78);
  FUN_05475ad8(asStack_110,&DAT_05593348);
  DString::DString(aDStack_78,local_70);
  uVar3 = DString::c_str(aDStack_78);
  FUN_05475ad8(asStack_110,uVar3);
  DString::~DString(aDStack_78);
  thunk_FUN_05475e00(auStack_88,asStack_110);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPennyPursuitData::TGAPennyPursuitData((TGAPennyPursuitData *)aDStack_78,aTStack_e8);
  TGALogMgr::LogPennyPursuit(pTVar5,aDStack_78);
  TGAPennyPursuitData::~TGAPennyPursuitData((TGAPennyPursuitData *)aDStack_78);
  std::string::~string(asStack_110);
  std::string::~string(asStack_118);
  TGAPennyPursuitData::~TGAPennyPursuitData(aTStack_e8);
  std::string::~string(asStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiesAteYourBrainsOutro::startLossOutro() */

void __thiscall ZombiesAteYourBrainsOutro::startLossOutro(ZombiesAteYourBrainsOutro *this)

{
  TimeLine *this_00;
  bool bVar1;
  char cVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  Insets aIStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::Insets::Insets(aIStack_50,0,0,0,0xff);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::StartBoardFade((Board *)0x40000000,uVar5,aIStack_50,aDStack_38);
  psVar3 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  bVar1 = std::operator==(psVar3,"ProtectChristmas1");
  if (bVar1) {
    MessageRouter::Post<int,int,int,int>
              ((MessageRouter *)gMessageRouter,Message::ActiveProtectFinish,0,0);
  }
  this_00 = (TimeLine *)(this + 0x28);
  TimeLine::Initialize(this_00,0.0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,outro_playChomp);
  Sexy::Delegate1<float>::
  Delegate1<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(float)>
            ((Delegate1<float> *)aDStack_38,aIStack_50);
  TimeLine::AddEvent((TimeLine *)0x3ecccccd,this_00,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,outro_playChomp);
  Sexy::Delegate1<float>::
  Delegate1<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(float)>
            ((Delegate1<float> *)aDStack_38,aIStack_50);
  TimeLine::AddEvent((TimeLine *)0x3f666666,this_00,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,outro_freezeGameplay);
  Sexy::Delegate1<float>::
  Delegate1<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(float)>
            ((Delegate1<float> *)aDStack_38,aIStack_50);
  TimeLine::AddEvent((TimeLine *)0x40066666,this_00,aDStack_38);
  if ((*(int *)(this + 0x88) == 0) &&
     (lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
     *(char *)(lVar4 + 0xe0) != '\0')) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,outro_playScream);
    Sexy::Delegate1<float>::
    Delegate1<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(float)>
              ((Delegate1<float> *)aDStack_38,aIStack_50);
    TimeLine::AddEvent((TimeLine *)0x40200000,this_00,aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,outro_notifyComplete);
    Sexy::Delegate1<float>::
    Delegate1<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(float)>
              ((Delegate1<float> *)aDStack_38,aIStack_50);
    TimeLine::AddEvent((TimeLine *)0x40400000,this_00,aDStack_38);
    cVar2 = RiftUtils::IsPlayingRiftLevel();
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,outro_showZombiesWonPAM);
    Sexy::Delegate1<float>::
    Delegate1<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(float)>
              ((Delegate1<float> *)aDStack_38,aIStack_50);
    TimeLine::AddEvent((TimeLine *)0x40200000,this_00,aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,outro_playScream);
    Sexy::Delegate1<float>::
    Delegate1<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(float)>
              ((Delegate1<float> *)aDStack_38,aIStack_50);
    TimeLine::AddEvent((TimeLine *)0x40200000,this_00,aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,outro_notifyComplete);
    Sexy::Delegate1<float>::
    Delegate1<ZombiesAteYourBrainsOutro,void(ZombiesAteYourBrainsOutro::*)(float)>
              ((Delegate1<float> *)aDStack_38,aIStack_50);
    TimeLine::AddEvent((TimeLine *)0x40c00000,this_00,aDStack_38);
    cVar2 = RiftUtils::IsPlayingRiftLevel();
  }
  if (cVar2 != '\0') {
    sendPostEndPlay();
  }
  cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar2 != '\0') {
    sendPostPVZ1ModeEndPlay();
  }
  cVar2 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
  if (cVar2 != '\0') {
    sendPostPVZ2UnchartedModeEndPlay();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


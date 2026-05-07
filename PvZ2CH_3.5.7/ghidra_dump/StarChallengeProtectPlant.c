// Class: StarChallengeProtectPlant


/* StarChallengeProtectPlant::gameplayEnded() */

void __thiscall StarChallengeProtectPlant::gameplayEnded(StarChallengeProtectPlant *this)

{
  char cVar1;
  
  cVar1 = FUN_04485630(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    Challenge::Complete((Challenge *)this);
  }
  Challenge::HideUI((Challenge *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlant::StaticClassInit() */

void StarChallengeProtectPlant::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"StarChallengeProtectPlant");
    (*pcVar2)(plVar1,asStack_10,FUN_0448622c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeProtectPlant::StaticGetClass() */

long * StarChallengeProtectPlant::StaticGetClass(void)

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
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeProtectPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlant::addToRenderQueue(RenderQueue*) */

void __thiscall
StarChallengeProtectPlant::addToRenderQueue(StarChallengeProtectPlant *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RenderMark);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<StarChallengeProtectPlant,void(StarChallengeProtectPlant::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,0x61a81,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeProtectPlant::RenderMark(Sexy::Graphics*) */

void __thiscall
StarChallengeProtectPlant::RenderMark(StarChallengeProtectPlant *this,Graphics *param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(this + 0x20);
    uVar4 = FUN_04485690(uVar7,*(undefined8 *)(this + 0x28));
    uVar1 = uVar6 + 1;
    if (uVar4 <= uVar6) break;
    this_00 = (RtWeakPtr *)FUN_0448569c(uVar7,uVar6);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    uVar6 = uVar1;
    if (pRVar5 != (ResourceInfo *)0x0) {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar2 = FUN_04485868(iVar2 * *(int *)(pRVar5 + 0x114) + 0xc5);
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar3 = FUN_04485868(iVar3 * *(int *)(pRVar5 + 0x110) + 0x9b);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x38));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar5,iVar2,iVar3,0x5a,100);
    }
  }
  return;
}


/* StarChallengeProtectPlant::StarChallengeProtectPlant() */

void __thiscall
StarChallengeProtectPlant::StarChallengeProtectPlant(StarChallengeProtectPlant *this)

{
  Challenge::Challenge((Challenge *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684fb50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* StarChallengeProtectPlant::StaticNew() */

StarChallengeProtectPlant * StarChallengeProtectPlant::StaticNew(void)

{
  StarChallengeProtectPlant *this;
  
  this = ::operator_new(0x40);
  StarChallengeProtectPlant(this);
  return this;
}


/* StarChallengeProtectPlant::~StarChallengeProtectPlant() */

void __thiscall
StarChallengeProtectPlant::~StarChallengeProtectPlant(StarChallengeProtectPlant *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684fb50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x20))
  ;
  Challenge::~Challenge((Challenge *)this);
  return;
}


/* StarChallengeProtectPlant::~StarChallengeProtectPlant() */

void __thiscall
StarChallengeProtectPlant::~StarChallengeProtectPlant(StarChallengeProtectPlant *this)

{
  ~StarChallengeProtectPlant(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlant::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
StarChallengeProtectPlant::AddResourceRequirements(StarChallengeProtectPlant *this,set *param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  string *psVar4;
  long *plVar5;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  for (uVar6 = 0;
      uVar3 = FUN_0448567c(*(undefined8 *)(pRVar2 + 0x40),*(undefined8 *)(pRVar2 + 0x48)),
      uVar6 < uVar3; uVar6 = uVar6 + 1) {
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    FUN_04485688(*(undefined8 *)(pRVar2 + 0x40),uVar6);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if (cVar1 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlant::SpawnPlants() */

void __thiscall StarChallengeProtectPlant::SpawnPlants(StarChallengeProtectPlant *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  string *psVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar7 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(pRVar3 + 0x40);
    uVar6 = FUN_0448567c(uVar8,*(undefined8 *)(pRVar3 + 0x48));
    if (uVar6 <= uVar7) break;
    lVar4 = FUN_04485688(uVar8,uVar7);
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    uVar1 = *(undefined4 *)(lVar4 + 8);
    uVar2 = *(undefined4 *)(lVar4 + 0xc);
    uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_20);
    lVar4 = Board::AddPlant((Board *)0x0,uVar8,uVar1,uVar2,aRStack_10,1,1,0xffffffff,0,1,1,0,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_044856a4(lVar4 + 0x189);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
               (this + 0x20),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    uVar7 = uVar7 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlant::onLoadComplete() */

void __thiscall StarChallengeProtectPlant::onLoadComplete(StarChallengeProtectPlant *this)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SpawnPlants(this);
  std::string::string(asStack_10,"IMAGE_UI_HUD_INGAME_PLANT_PROTECT");
  lVar1 = StringHelper::ToImage(asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (lVar1 == 0) {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x38));
  }
  else {
    Sexy::BaseResource::GetRtId();
    Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
              ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x38),(RtId *)asStack_10);
    Sexy::RtId::~RtId((RtId *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlant::registerForEvents() */

void __thiscall StarChallengeProtectPlant::registerForEvents(StarChallengeProtectPlant *this)

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
  Challenge::registerForEvents((Challenge *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<StarChallengeProtectPlant,void(StarChallengeProtectPlant::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<StarChallengeProtectPlant,void(StarChallengeProtectPlant::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayEnded);
  Sexy::Delegate0::Delegate0<StarChallengeProtectPlant,void(StarChallengeProtectPlant::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<StarChallengeProtectPlant,void(StarChallengeProtectPlant::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<StarChallengeProtectPlant,void(StarChallengeProtectPlant::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantConvertedToProjectile,&local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeProtectPlant::onPlantDied(Plant*) */

void __thiscall
StarChallengeProtectPlant::onPlantDied(StarChallengeProtectPlant *this,Plant *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  TGALogMgr *this_01;
  Plant **__n;
  Plant *local_78 [2];
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined1 auStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_78[0] = param_1;
  cVar1 = FUN_04485630(*(undefined4 *)(this + 0x1c));
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x20);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    __n = local_78;
    local_68[0] = std::
                  find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Plant*>
                            (uVar3,uVar4);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_68,(__normal_iterator *)&local_58);
    if (bVar2) {
      Challenge::Fail();
      cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
      if (cVar1 != '\0') {
        TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)&local_58);
        DString::DString((DString *)local_68,2);
        pcVar5 = (char *)DString::c_str((DString *)local_68);
        std::string::append((string *)&local_58,pcVar5,(size_t)__n);
        DString::~DString((DString *)local_68);
        Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
        PVZ1ModeNetworkMgr::GetCurrentLevel();
        FUN_05474278(auStack_50,(__normal_iterator *)local_68);
        std::string::~string((string *)local_68);
        cVar1 = PVZ1ModeUtils::IsHardMode();
        if (cVar1 == '\0') {
          pcVar5 = "0";
        }
        else {
          pcVar5 = "1";
        }
        std::string::append(asStack_48,pcVar5,(size_t)__n);
        std::string::append(asStack_40,"4",(size_t)__n);
        this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPVZ1Mode(this_01,(TGAPVZ1ModeData *)&local_58);
        TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)&local_58);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


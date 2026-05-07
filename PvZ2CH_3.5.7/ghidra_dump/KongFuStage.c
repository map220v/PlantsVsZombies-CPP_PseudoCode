// Class: KongFuStage


/* KongFuStage::parseGearImages() */

void KongFuStage::parseGearImages(void)

{
  return;
}


/* KongFuStage::onPostLoad() */

void __thiscall KongFuStage::onPostLoad(KongFuStage *this)

{
  StageModule::onPostLoad((StageModule *)this);
  parseGearImages();
  return;
}


/* KongFuStage::KongFuStage() */

void __thiscall KongFuStage::KongFuStage(KongFuStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06760b20;
  return;
}


/* KongFuStage::StaticNew() */

KongFuStage * KongFuStage::StaticNew(void)

{
  KongFuStage *this;
  
  this = ::operator_new(0xe8);
  KongFuStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KongFuStage::StaticClassInit() */

void KongFuStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"KongFuStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03ce18c8,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KongFuStage::StaticGetClass() */

long * KongFuStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"KongFuStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KongFuStage::renderBackground(Sexy::Graphics*) */

void __thiscall KongFuStage::renderBackground(KongFuStage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  int iVar4;
  int iVar5;
  Board *this_00;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::renderBackground((StageModule *)this,param_1);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = *(int *)(this_00 + 0xf8);
  if (0 < iVar1) {
    iVar2 = *(int *)(this_00 + 0xfc);
    iVar5 = 0;
    do {
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          while (iVar1 = Board::GetGridSquareType(this_00,iVar5,iVar4), iVar1 != 6) {
            iVar4 = iVar4 + 1;
            if (iVar2 <= iVar4) goto LAB_03ce1b6c;
          }
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)&local_10);
          iVar1 = BoardTransforms::GridToBoardSpaceX(iVar5);
          iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
          local_10 = (float)FUN_03ce148c(((float)iVar1 + DAT_06ad4ae0) - (float)iVar2 * 0.5);
          iVar1 = BoardTransforms::GridToBoardSpaceY(iVar4);
          iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
          local_c = (float)FUN_03ce148c(((float)iVar1 + DAT_06ad4ae4) - (float)iVar2 * 0.5);
          if ((iVar4 == 3) || (iVar4 == 0)) {
            pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                        ((CachedResourcePtr<Sexy::Image> *)
                                         IMAGE_BACKGROUNDS_MECHANISM_TRACK);
            Sexy::Graphics::DrawImage(param_1,pIVar3,(int)local_10,(int)local_c);
            iVar2 = *(int *)(this_00 + 0xfc);
          }
          else {
            iVar2 = *(int *)(this_00 + 0xfc);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
LAB_03ce1b6c:
        iVar1 = *(int *)(this_00 + 0xf8);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* KongFuStage::stopZombieGroans() */

void KongFuStage::stopZombieGroans(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Zomb_KongFu_Sarcophagus_Mommy");
  StageModule::stopZombieGroans();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KongFuStage::onZombieTypeCountChange(Sexy::RtWeakPtr<ZombieType const>, int, int) */

void __thiscall
KongFuStage::onZombieTypeCountChange
          (KongFuStage *this,RtWeakPtrBase *param_2,int param_3,int param_4)

{
  char cVar1;
  string *psVar2;
  char *pcVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  StageModule::onZombieTypeCountChange((StageModule *)this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"pharaoh");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (cVar1 != '\0') {
    if ((param_3 < 1) || (0 < param_4)) {
      if ((param_3 == 0) && (0 < param_4)) {
        pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar3,"Play_Zomb_KongFu_Sarcophagus_Mommy");
      }
    }
    else {
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Stop_Zomb_KongFu_Sarcophagus_Mommy");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* KongFuStage::registerForEvents() */

void __thiscall KongFuStage::registerForEvents(KongFuStage *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::registerForEvents((StageModule *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,parseGearImages);
  Sexy::Delegate0::Delegate0<KongFuStage,void(KongFuStage::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* KongFuStage::~KongFuStage() */

void __thiscall KongFuStage::~KongFuStage(KongFuStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06760b20;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* KongFuStage::~KongFuStage() */

void __thiscall KongFuStage::~KongFuStage(KongFuStage *this)

{
  ~KongFuStage(this);
  AK::FreeHook(this);
  return;
}


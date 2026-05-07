// Class: LevelMutatorModule


/* LevelMutatorModule::StaticGetClass() */

long * LevelMutatorModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelMutatorModule",uVar2,StaticNew);
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModule::insertRiftEventMutations(Sexy::RtWeakPtr<LevelDefinition>&) */

void __thiscall
LevelMutatorModule::insertRiftEventMutations(LevelMutatorModule *this,RtWeakPtr *param_1)

{
  long lVar1;
  LevelMutatorModuleInserter aLStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = RiftUtils::GetCurrentSubEventProps();
  if (lVar1 != 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_1);
    LevelMutatorModuleInserter::AddLevelModules(aLStack_18,aRStack_10,lVar1 + 0x28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelMutatorModule::LevelMutatorModule() */

void __thiscall LevelMutatorModule::LevelMutatorModule(LevelMutatorModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0667f190;
  return;
}


/* LevelMutatorModule::StaticNew() */

LevelMutatorModule * LevelMutatorModule::StaticNew(void)

{
  LevelMutatorModule *this;
  
  this = ::operator_new(0x18);
  LevelMutatorModule(this);
  return this;
}


/* LevelMutatorModule::~LevelMutatorModule() */

void __thiscall LevelMutatorModule::~LevelMutatorModule(LevelMutatorModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0667f190;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelMutatorModule::~LevelMutatorModule() */

void __thiscall LevelMutatorModule::~LevelMutatorModule(LevelMutatorModule *this)

{
  ~LevelMutatorModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelMutatorModule::onLevelInitialized(Sexy::RtWeakPtr<LevelDefinition>&) */

void __thiscall LevelMutatorModule::onLevelInitialized(LevelMutatorModule *this,RtWeakPtr *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  RtObject *this_00;
  LevelMutatorModuleProperties *pLVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = RiftUtils::IsPlayingRiftLevel();
  if (cVar1 != '\0') {
    uVar3 = RiftUtils::GetDifficultyForNextLevel();
  }
  LevelModule::GetPropsPtr((LevelModule *)this);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_18);
  if (bVar2) {
    LevelModule::GetPropsPtr((LevelModule *)this);
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pLVar4 = Sexy::RtObject::Cast<LevelMutatorModuleProperties>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    if ((pLVar4 != (LevelMutatorModuleProperties *)0x0) &&
       (lVar5 = FUN_0369ef20(*(undefined8 *)(pLVar4 + 0x40),*(undefined8 *)(pLVar4 + 0x48)),
       lVar5 != 0)) {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(pLVar4 + 0x40));
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(pLVar4 + 0x40));
      iVar7 = 0;
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
            bVar2) {
        uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)param_1);
        LevelMutatorModuleInserter::Execute(auStack_28,aRStack_10,uVar6,uVar3,0,iVar7);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
        iVar7 = iVar7 + 1;
      }
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  if (cVar1 != '\0') {
    insertRiftEventMutations(this,param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LevelMutatorModule::registerForEvents() */

void __thiscall LevelMutatorModule::registerForEvents(LevelMutatorModule *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelInitialized);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<LevelDefinition>&,Sexy::CBMemberTranslatorX<LevelMutatorModule,void(LevelMutatorModule::*)(Sexy::RtWeakPtr<LevelDefinition>&)>>
            ((MessageRouter *)puVar1,Message::InitializingModuleManagerForLevelDefinition,&local_40)
  ;
  return;
}


/* LevelMutatorModule::postInitialize() */

void LevelMutatorModule::postInitialize(void)

{
  BonusChallengeModule *pBVar1;
  StarChallengeModule *pSVar2;
  
  pBVar1 = BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>();
  if ((pBVar1 == (BonusChallengeModule *)0x0) &&
     (pSVar2 = BoardHelpers::GetLevelModuleByClass<StarChallengeModule>(),
     pSVar2 == (StarChallengeModule *)0x0)) {
    return;
  }
  FUN_0369ef30(*(long *)(gLawnApp + 0x9f0) + 0x87c);
  return;
}


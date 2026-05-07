// Class: VaseBreakerFlowModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowModule::StaticClassInit() */

void VaseBreakerFlowModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFlowModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0497d75c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowModule::StaticGetClass() */

long * VaseBreakerFlowModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VaseBreakerFlowModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowModule::addToRenderQueue(RenderQueue*) */

void VaseBreakerFlowModule::addToRenderQueue(RenderQueue *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  RtWeakPtrBase *pRVar4;
  ResourceInfo *pRVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x20));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x20));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_0497d004:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar4);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    uVar1 = *(undefined4 *)(pRVar5 + 0x18);
    cVar3 = FUN_0497c700(uVar1);
    if (cVar3 == '\0') {
      cVar3 = FUN_0497c70c(uVar1);
      if (cVar3 != '\0') goto LAB_0497cf84;
LAB_0497cffc:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      goto LAB_0497d004;
    }
    VaseBreakerFlowAction::AddToRenderQueue((RenderQueue *)pRVar5);
    cVar3 = FUN_0497c70c(*(undefined4 *)(pRVar5 + 0x18));
    if (cVar3 == '\0') goto LAB_0497cffc;
LAB_0497cf84:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* VaseBreakerFlowModule::VaseBreakerFlowModule() */

void __thiscall VaseBreakerFlowModule::VaseBreakerFlowModule(VaseBreakerFlowModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069183e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* VaseBreakerFlowModule::StaticNew() */

VaseBreakerFlowModule * VaseBreakerFlowModule::StaticNew(void)

{
  VaseBreakerFlowModule *this;
  
  this = ::operator_new(0x38);
  VaseBreakerFlowModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowModule::postInitialize() */

void __thiscall VaseBreakerFlowModule::postInitialize(VaseBreakerFlowModule *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0497d0fc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x18),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowModule::~VaseBreakerFlowModule() */

void __thiscall VaseBreakerFlowModule::~VaseBreakerFlowModule(VaseBreakerFlowModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069183e0;
  std::
  vector<Sexy::RtWeakPtr<VaseBreakerFlowAction>,std::allocator<Sexy::RtWeakPtr<VaseBreakerFlowAction>>>
  ::~vector((vector<Sexy::RtWeakPtr<VaseBreakerFlowAction>,std::allocator<Sexy::RtWeakPtr<VaseBreakerFlowAction>>>
             *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* VaseBreakerFlowModule::~VaseBreakerFlowModule() */

void __thiscall VaseBreakerFlowModule::~VaseBreakerFlowModule(VaseBreakerFlowModule *this)

{
  ~VaseBreakerFlowModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowModule::updateActions() */

void __thiscall VaseBreakerFlowModule::updateActions(VaseBreakerFlowModule *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  ResourceInfo *pRVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_0497dd50:
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_28 = std::
                 remove_if<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<VaseBreakerFlowAction>*,std::vector<Sexy::RtWeakPtr<VaseBreakerFlowAction>,std::allocator<Sexy::RtWeakPtr<VaseBreakerFlowAction>>>>,bool(*)(Sexy::RtWeakPtr<VaseBreakerFlowAction>)>
                           (uVar5,uVar6,RemoveIfOnActionQueue);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_20);
      std::
      vector<Sexy::RtWeakPtr<VaseBreakerFlowAction>,std::allocator<Sexy::RtWeakPtr<VaseBreakerFlowAction>>>
      ::erase((vector<Sexy::RtWeakPtr<VaseBreakerFlowAction>,std::allocator<Sexy::RtWeakPtr<VaseBreakerFlowAction>>>
               *)this_00,local_18,local_10);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_20,pRVar3);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
    uVar7 = *(undefined4 *)(pRVar4 + 0x18);
    cVar2 = FUN_0497c70c(uVar7);
    if (cVar2 == '\0') {
      cVar2 = FUN_0497c6f4(uVar7);
      if (cVar2 == '\0') {
        RunnableAction::Begin((RunnableAction *)(pRVar4 + 0x10));
        uVar7 = *(undefined4 *)(pRVar4 + 0x18);
        cVar2 = FUN_0497c700(uVar7);
        if (cVar2 != '\0') goto LAB_0497de40;
LAB_0497ddfc:
        cVar2 = FUN_0497c70c(uVar7);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          goto LAB_0497de14;
        }
      }
      else {
        cVar2 = FUN_0497c700(uVar7);
        if (cVar2 != '\0') {
LAB_0497de40:
          DataPersistorFactory::GetOfflinePersistor((DataPersistorFactory *)(pRVar4 + 0x10));
          uVar7 = *(undefined4 *)(pRVar4 + 0x18);
          goto LAB_0497ddfc;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      goto LAB_0497dd50;
    }
    (**(code **)(*(long *)pRVar4 + 0x48))(pRVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
LAB_0497de14:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowModule::CreateAndAddAction(Sexy::RtClass*) */

void __thiscall
VaseBreakerFlowModule::CreateAndAddAction(VaseBreakerFlowModule *this,RtClass *param_1)

{
  VaseBreakerFlowModule *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameObject::Create(param_1,0x34);
  nop();
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x18));
  VaseBreakerFlowAction::SetOwningModules(extraout_x0,(VaseBreakerModule *)this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::
  vector<Sexy::RtWeakPtr<VaseBreakerFlowAction>,std::allocator<Sexy::RtWeakPtr<VaseBreakerFlowAction>>>
  ::push_back((vector<Sexy::RtWeakPtr<VaseBreakerFlowAction>,std::allocator<Sexy::RtWeakPtr<VaseBreakerFlowAction>>>
               *)(this + 0x20),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* VaseBreakerFlowActionSetUIVisibility*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionSetUIVisibility>() */

VaseBreakerFlowActionSetUIVisibility * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionSetUIVisibility>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionSetUIVisibility *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionSetUIVisibility::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionWait* VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionWait>()
    */

VaseBreakerFlowActionWait * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionWait>(VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionWait *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionWait::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionDropPowerUpReward*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionDropPowerUpReward>() */

VaseBreakerFlowActionDropPowerUpReward * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionDropPowerUpReward>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionDropPowerUpReward *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionDropPowerUpReward::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionClearBoard*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionClearBoard>() */

VaseBreakerFlowActionClearBoard * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionClearBoard>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionClearBoard *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionClearBoard::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionLevelOfDayReward*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionLevelOfDayReward>() */

VaseBreakerFlowActionLevelOfDayReward * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionLevelOfDayReward>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionLevelOfDayReward *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionLevelOfDayReward::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionShowEndlessFanfare*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionShowEndlessFanfare>() */

VaseBreakerFlowActionShowEndlessFanfare * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionShowEndlessFanfare>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionShowEndlessFanfare *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionShowEndlessFanfare::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionCreateAndShowVases*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionCreateAndShowVases>() */

VaseBreakerFlowActionCreateAndShowVases * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionCreateAndShowVases>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionCreateAndShowVases *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionCreateAndShowVases::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionReadySetBreak*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionReadySetBreak>() */

VaseBreakerFlowActionReadySetBreak * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionReadySetBreak>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionReadySetBreak *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionReadySetBreak::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionStartGame*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionStartGame>() */

VaseBreakerFlowActionStartGame * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionStartGame>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionStartGame *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionStartGame::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionFirstTimeAdvice*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionFirstTimeAdvice>() */

VaseBreakerFlowActionFirstTimeAdvice * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionFirstTimeAdvice>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionFirstTimeAdvice *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionFirstTimeAdvice::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionMoveTutorial*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionMoveTutorial>() */

VaseBreakerFlowActionMoveTutorial * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionMoveTutorial>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionMoveTutorial *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionMoveTutorial::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionButterTutorial*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionButterTutorial>() */

VaseBreakerFlowActionButterTutorial * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionButterTutorial>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionButterTutorial *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionButterTutorial::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* VaseBreakerFlowActionRevealTutorial*
   VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionRevealTutorial>() */

VaseBreakerFlowActionRevealTutorial * __thiscall
VaseBreakerFlowModule::CreateAndAddAction<VaseBreakerFlowActionRevealTutorial>
          (VaseBreakerFlowModule *this)

{
  RtClass *pRVar1;
  VaseBreakerFlowActionRevealTutorial *extraout_x0;
  
  pRVar1 = (RtClass *)VaseBreakerFlowActionRevealTutorial::StaticGetClass();
  CreateAndAddAction(this,pRVar1);
  nop();
  return extraout_x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowModule::addActionsForPowerupTutorial(std::string const&) */

void VaseBreakerFlowModule::addActionsForPowerupTutorial(string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ProfileMgr *this;
  PlayerInfo *pPVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = ProfileUtils::Profile();
  lVar4 = FUN_0497d0fc(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if ((lVar3 != 0) && (lVar4 != 0)) {
    VaseBreakerModule::GetPowerUpTutorial();
    lVar3 = FUN_05474178(asStack_10);
    if (lVar3 != 0) {
      this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
      cVar1 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar5);
      if (cVar1 == '\0') {
        bVar2 = std::operator==(asStack_10,"powerupvasebreakermove");
        if (bVar2) {
          CreateAndAddAction<VaseBreakerFlowActionMoveTutorial>((VaseBreakerFlowModule *)param_1);
        }
        else {
          bVar2 = std::operator==(asStack_10,"powerupvasebreakerbutter");
          if (bVar2) {
            CreateAndAddAction<VaseBreakerFlowActionButterTutorial>
                      ((VaseBreakerFlowModule *)param_1);
          }
          else {
            bVar2 = std::operator==(asStack_10,"powerupvasebreakerreveal");
            if (bVar2) {
              CreateAndAddAction<VaseBreakerFlowActionRevealTutorial>
                        ((VaseBreakerFlowModule *)param_1);
            }
          }
        }
      }
    }
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowModule::addRequiredTutorials() */

void __thiscall VaseBreakerFlowModule::addRequiredTutorials(VaseBreakerFlowModule *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  addActionsForPowerupTutorial((string *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowModule::addStartGameplayFlow() */

void __thiscall VaseBreakerFlowModule::addStartGameplayFlow(VaseBreakerFlowModule *this)

{
  char cVar1;
  LevelModule *this_00;
  long *extraout_x0;
  VaseBreakerFlowActionWait *pVVar2;
  VaseBreakerFlowActionSetUIVisibility *this_01;
  PlayerInfo *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModule *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18))
  ;
  LevelModule::GetPropsPtr(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  (**(code **)(*extraout_x0 + 0xa8))();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  addRequiredTutorials(this);
  CreateAndAddAction<VaseBreakerFlowActionCreateAndShowVases>(this);
  pVVar2 = CreateAndAddAction<VaseBreakerFlowActionWait>(this);
  VaseBreakerFlowActionWait::SetWaitTime(pVVar2,1.5);
  CreateAndAddAction<VaseBreakerFlowActionReadySetBreak>(this);
  this_01 = CreateAndAddAction<VaseBreakerFlowActionSetUIVisibility>(this);
  VaseBreakerFlowActionSetUIVisibility::SetVisibility(this_01,true);
  CreateAndAddAction<VaseBreakerFlowActionStartGame>(this);
  this_02 = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string((string *)aRStack_10,"nar_vasebreaker_first_time_tutorial");
  cVar1 = PlayerInfo::GetNarrationEventCompleted(this_02,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  if (cVar1 == '\0') {
    pVVar2 = CreateAndAddAction<VaseBreakerFlowActionWait>(this);
    VaseBreakerFlowActionWait::SetWaitTime(pVVar2,0.5);
    CreateAndAddAction<VaseBreakerFlowActionFirstTimeAdvice>(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowModule::setupInitialFlow() */

void __thiscall VaseBreakerFlowModule::setupInitialFlow(VaseBreakerFlowModule *this)

{
  VaseBreakerFlowActionSetUIVisibility *this_00;
  VaseBreakerFlowActionWait *this_01;
  
  this_00 = CreateAndAddAction<VaseBreakerFlowActionSetUIVisibility>(this);
  VaseBreakerFlowActionSetUIVisibility::SetVisibility(this_00,false);
  this_01 = CreateAndAddAction<VaseBreakerFlowActionWait>(this);
  VaseBreakerFlowActionWait::SetWaitTime(this_01,1.0);
  nop();
  addStartGameplayFlow(this);
  return;
}


/* VaseBreakerFlowModule::StartEndlessVictoryFlow(int, bool, std::string const&) */

void __thiscall
VaseBreakerFlowModule::StartEndlessVictoryFlow
          (VaseBreakerFlowModule *this,int param_1,bool param_2,string *param_3)

{
  VaseBreakerFlowActionSetUIVisibility *this_00;
  long lVar1;
  VaseBreakerFlowActionDropPowerUpReward *pVVar2;
  VaseBreakerFlowActionWait *pVVar3;
  VaseBreakerFlowActionShowEndlessFanfare *this_01;
  
  this_00 = CreateAndAddAction<VaseBreakerFlowActionSetUIVisibility>(this);
  VaseBreakerFlowActionSetUIVisibility::SetVisibility(this_00,false);
  lVar1 = FUN_05474184(param_3);
  if (lVar1 != 0) {
    CreateAndAddAction<VaseBreakerFlowActionClearBoard>(this);
    pVVar2 = CreateAndAddAction<VaseBreakerFlowActionDropPowerUpReward>(this);
    AuthMgr::SetCharacterId((string *)pVVar2);
  }
  pVVar3 = CreateAndAddAction<VaseBreakerFlowActionWait>(this);
  VaseBreakerFlowActionWait::SetWaitTime(pVVar3,0.5);
  CreateAndAddAction<VaseBreakerFlowActionClearBoard>(this);
  CreateAndAddAction<VaseBreakerFlowActionLevelOfDayReward>(this);
  this_01 = CreateAndAddAction<VaseBreakerFlowActionShowEndlessFanfare>(this);
  VaseBreakerFlowActionShowEndlessFanfare::SetParameters(this_01,param_1,param_2);
  pVVar3 = CreateAndAddAction<VaseBreakerFlowActionWait>(this);
  VaseBreakerFlowActionWait::SetWaitTime(pVVar3,0.5);
  addStartGameplayFlow(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowModule::registerForEvents() */

void __thiscall VaseBreakerFlowModule::registerForEvents(VaseBreakerFlowModule *this)

{
  long lVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = LevelModule::getManager();
  FUN_0497c718(lVar1 + 0x80);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,setupInitialFlow);
  Sexy::Delegate0::Delegate0<VaseBreakerFlowModule,void(VaseBreakerFlowModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,updateActions);
  Sexy::Delegate0::Delegate0<VaseBreakerFlowModule,void(VaseBreakerFlowModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::
  Delegate1<VaseBreakerFlowModule,void(VaseBreakerFlowModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


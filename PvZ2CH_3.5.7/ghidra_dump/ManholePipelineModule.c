// Class: ManholePipelineModule


/* ManholePipelineModule::onLoadComplete() */

void __thiscall ManholePipelineModule::onLoadComplete(ManholePipelineModule *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x18);
    uVar2 = FUN_038ebd9c(uVar4,*(undefined8 *)(this + 0x20));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_038ebdc4(uVar4,uVar3);
    ManholePipeline::SetupPipelineImage((ManholePipeline *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* ManholePipelineModule::onZombieDestroyed(Zombie*) */

void __thiscall
ManholePipelineModule::onZombieDestroyed(ManholePipelineModule *this,Zombie *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x18);
    uVar2 = FUN_038ebd9c(uVar4,*(undefined8 *)(this + 0x20));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_038ebdc4(uVar4,uVar3);
    ManholePipeline::onZombieDie((ManholePipeline *)*puVar1,param_1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModule::StaticClassInit() */

void ManholePipelineModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ManholePipelineModule");
    (*pcVar2)(plVar1,asStack_10,FUN_038ed6e8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ManholePipelineModule::StaticGetClass() */

long * ManholePipelineModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ManholePipelineModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModule::onBlockPipleline(PlantFlattenedshroom*) */

void __thiscall
ManholePipelineModule::onBlockPipleline(ManholePipelineModule *this,PlantFlattenedshroom *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ManholePipeline::BlockPipeline((ManholePipeline *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModule::onUnblockPipleline(PlantFlattenedshroom*) */

void __thiscall
ManholePipelineModule::onUnblockPipleline(ManholePipelineModule *this,PlantFlattenedshroom *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    ManholePipeline::UnBlockPipeline((ManholePipeline *)*puVar2,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModule::onGamePlayUpdate() */

void __thiscall ManholePipelineModule::onGamePlayUpdate(ManholePipelineModule *this)

{
  bool bVar1;
  undefined8 *puVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ManholePipeline *this_00;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (ManholePipeline *)*puVar2;
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar5 = *(float *)(pRVar3 + 0x60);
    fVar4 = (float)PVZ_Dt();
    ManholePipeline::onUpdate(this_00,fVar4 * fVar5);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModule::CanPlantFlatMushroom(PlantFlattenedshroom*) */

void __thiscall
ManholePipelineModule::CanPlantFlatMushroom
          (ManholePipelineModule *this,PlantFlattenedshroom *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x18));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = ManholePipeline::CanPlantFlatMushroom((ManholePipeline *)*puVar3,param_1);
    if (cVar1 != '\0') break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ManholePipelineModule::ManholePipelineModule() */

void __thiscall ManholePipelineModule::ManholePipelineModule(ManholePipelineModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066be020;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* ManholePipelineModule::StaticNew() */

ManholePipelineModule * ManholePipelineModule::StaticNew(void)

{
  ManholePipelineModule *this;
  
  this = ::operator_new(0x30);
  ManholePipelineModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModule::CheckGridPlants(int, int) */

void __thiscall
ManholePipelineModule::CheckGridPlants(ManholePipelineModule *this,int param_1,int param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  Plant *this_00;
  long lVar3;
  long *plVar4;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,param_1,param_2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar2);
    if (((bVar1) && (nop(), this_00 != (Plant *)0x0)) && (0.0 < *(float *)(this_00 + 0xd8))) {
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      bVar1 = std::operator!=((string *)(lVar3 + 8),"flattenedshroom");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (bVar1) {
        Plant::beThrown(this_00);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  plVar4 = (long *)FUN_038ecd44(param_1,param_2);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x230))();
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ManholePipelineModule::onGameStart() */

void __thiscall ManholePipelineModule::onGameStart(ManholePipelineModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(pRVar1 + 0x48);
    uVar3 = FUN_038ebe94(uVar5,*(undefined8 *)(pRVar1 + 0x50));
    if (uVar3 <= uVar4) break;
    piVar2 = (int *)FUN_038ebebc(uVar5,uVar4);
    CheckGridPlants(this,*piVar2,piVar2[1]);
    CheckGridPlants(this,piVar2[2],piVar2[3]);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* ManholePipelineModule::~ManholePipelineModule() */

void __thiscall ManholePipelineModule::~ManholePipelineModule(ManholePipelineModule *this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x18);
  uVar4 = 0;
  *(undefined ***)this = &PTR_GetModuleClass_066be020;
  uVar1 = FUN_038ebd9c(uVar5,*(undefined8 *)(this + 0x20));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_038ebdc4(uVar5,uVar4);
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        puVar3 = (undefined8 *)FUN_038ebdc4(*(undefined8 *)(this + 0x18),uVar4);
        *puVar3 = 0;
        uVar5 = *(undefined8 *)(this + 0x18);
        uVar1 = FUN_038ebd9c(uVar5,*(undefined8 *)(this + 0x20));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::vector<ManholePipeline*,std::allocator<ManholePipeline*>>::clear
            ((vector<ManholePipeline*,std::allocator<ManholePipeline*>> *)(this + 0x18));
  std::vector<ManholePipeline*,std::allocator<ManholePipeline*>>::~vector
            ((vector<ManholePipeline*,std::allocator<ManholePipeline*>> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ManholePipelineModule::~ManholePipelineModule() */

void __thiscall ManholePipelineModule::~ManholePipelineModule(ManholePipelineModule *this)

{
  ~ManholePipelineModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModule::onPlantDie(Plant*) */

void __thiscall ManholePipelineModule::onPlantDie(ManholePipelineModule *this,Plant *param_1)

{
  bool bVar1;
  long lVar2;
  PlantFlattenedshroom *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  bVar1 = std::operator==((string *)(lVar2 + 8),"flattenedshroom");
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if ((bVar1) && (nop(), extraout_x0 != (PlantFlattenedshroom *)0x0)) {
    MessageRouter::Post<PlantFlattenedshroom*,PlantFlattenedshroom*>
              ((MessageRouter *)gMessageRouter,Message::UnblockPipleline,extraout_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
ManholePipelineModule::AddResourceRequirements(ManholePipelineModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"SteamPipelineGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModule::registerForEvents() */

void __thiscall ManholePipelineModule::registerForEvents(ManholePipelineModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
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
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<ManholePipelineModule,void(ManholePipelineModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGamePlayUpdate);
  Sexy::Delegate0::Delegate0<ManholePipelineModule,void(ManholePipelineModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameStart);
  Sexy::Delegate0::Delegate0<ManholePipelineModule,void(ManholePipelineModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBlockPipleline);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<PlantFlattenedshroom*,Sexy::CBMemberTranslatorX<ManholePipelineModule,void(ManholePipelineModule::*)(PlantFlattenedshroom*)>>
            ((MessageRouter *)puVar1,Message::BlockPipleline,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUnblockPipleline);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<PlantFlattenedshroom*,Sexy::CBMemberTranslatorX<ManholePipelineModule,void(ManholePipelineModule::*)(PlantFlattenedshroom*)>>
            ((MessageRouter *)puVar1,Message::UnblockPipleline,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDie);
  local_d0 = local_58;
  local_e0 = local_68;
  uStack_d8 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ManholePipelineModule,void(ManholePipelineModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ManholePipelineModule,void(ManholePipelineModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipelineModule::initializeModule() */

void __thiscall ManholePipelineModule::initializeModule(ManholePipelineModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  int *piVar2;
  ManholePipeline *this_00;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ManholePipeline *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(pRVar1 + 0x48);
    uVar3 = FUN_038ebe94(uVar5,*(undefined8 *)(pRVar1 + 0x50));
    if (uVar3 <= uVar4) break;
    piVar2 = (int *)FUN_038ebebc(uVar5,uVar4);
    this_00 = ::operator_new(0x58);
    ManholePipeline::ManholePipeline(this_00);
    local_10 = this_00;
    ManholePipeline::InitPipleline
              (this_00,*piVar2,piVar2[1],piVar2[2],piVar2[3],*(float *)(pRVar1 + 0x40),1.0,1.0);
    std::vector<ManholePipeline*,std::allocator<ManholePipeline*>>::push_back
              ((vector<ManholePipeline*,std::allocator<ManholePipeline*>> *)(this + 0x18),&local_10)
    ;
    uVar4 = uVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


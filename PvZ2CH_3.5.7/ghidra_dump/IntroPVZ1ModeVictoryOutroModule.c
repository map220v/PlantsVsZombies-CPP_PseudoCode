// Class: IntroPVZ1ModeVictoryOutroModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroPVZ1ModeVictoryOutroModule::StaticClassInit() */

void IntroPVZ1ModeVictoryOutroModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroPVZ1ModeVictoryOutroModule");
    (*pcVar2)(plVar1,asStack_10,FUN_036162a4,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroPVZ1ModeVictoryOutroModule::StaticGetClass() */

long * IntroPVZ1ModeVictoryOutroModule::StaticGetClass(void)

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
  uVar2 = VictoryOutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"IntroPVZ1ModeVictoryOutroModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroPVZ1ModeVictoryOutroModule::onUpdate() */

void __thiscall IntroPVZ1ModeVictoryOutroModule::onUpdate(IntroPVZ1ModeVictoryOutroModule *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x90) < fVar1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x90) = uVar2;
    VictoryOutroModule::onEndOfLevelRewardCollected((VictoryOutroModule *)this);
  }
  VictoryOutroModule::onUpdate((VictoryOutroModule *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroPVZ1ModeVictoryOutroModule::registerForEvents() */

void __thiscall
IntroPVZ1ModeVictoryOutroModule::registerForEvents(IntroPVZ1ModeVictoryOutroModule *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  VictoryOutroModule::registerForEvents((VictoryOutroModule *)this);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTutorialWormHoleEnd);
  Sexy::Delegate0::
  Delegate0<IntroPVZ1ModeVictoryOutroModule,void(IntroPVZ1ModeVictoryOutroModule::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyTutorialWormHoleEnd,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroPVZ1ModeVictoryOutroModule::triggerEndLevelEffect() */

void IntroPVZ1ModeVictoryOutroModule::triggerEndLevelEffect(void)

{
  WormHoleSubsystem *this;
  
  this = Board::GetGameSubSystem<WormHoleSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  WormHoleSubsystem::GenerateTutorial(this);
  return;
}


/* IntroPVZ1ModeVictoryOutroModule::onCollectableFinishCollected(Collectable*) */

void IntroPVZ1ModeVictoryOutroModule::onCollectableFinishCollected(Collectable *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  if (pRVar1[100] == (ResilienceTutorialIntroProperties)0x0) {
    VictoryOutroModule::onEndOfLevelRewardCollected((VictoryOutroModule *)param_1);
    return;
  }
  triggerEndLevelEffect();
  return;
}


/* IntroPVZ1ModeVictoryOutroModule::IntroPVZ1ModeVictoryOutroModule() */

void __thiscall
IntroPVZ1ModeVictoryOutroModule::IntroPVZ1ModeVictoryOutroModule
          (IntroPVZ1ModeVictoryOutroModule *this)

{
  undefined4 uVar1;
  
  VictoryOutroModule::VictoryOutroModule((VictoryOutroModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06668ed0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x90) = uVar1;
  return;
}


/* IntroPVZ1ModeVictoryOutroModule::StaticNew() */

IntroPVZ1ModeVictoryOutroModule * IntroPVZ1ModeVictoryOutroModule::StaticNew(void)

{
  IntroPVZ1ModeVictoryOutroModule *this;
  
  this = ::operator_new(0x98);
  IntroPVZ1ModeVictoryOutroModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroPVZ1ModeVictoryOutroModule::triggerPortal() */

void __thiscall
IntroPVZ1ModeVictoryOutroModule::triggerPortal(IntroPVZ1ModeVictoryOutroModule *this)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  Point *pPVar4;
  TPoint *pTVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  Point aPStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined8 local_38 [3];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_20,"zombieportal_pvz1_tutorial");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  Sexy::Point::Point((Point *)asStack_20,4,2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_50,(Point *)asStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_50);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1) {
    pPVar4 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    cVar2 = Board::CanAddGraveStoneAt
                      (*(Board **)(gLawnApp + 0x9f0),*(int *)pPVar4,*(int *)(pPVar4 + 4),false);
    if (cVar2 == '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)asStack_20,pPVar4);
    }
    else {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38,pPVar4);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  cVar2 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38);
  if (cVar2 == '\0') {
    pTVar5 = (TPoint *)FUN_03615ce8(local_38[0]);
    Sexy::Point::Point(aPStack_70,pTVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_78);
    std::string::string((string *)&local_60,"");
    std::string::string((string *)&local_58,"");
    TimeEnergyModule::spawnGridItem
              (this,aPStack_70,aRStack_68,
               (generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60,(string *)&local_58);
    std::string::~string((string *)&local_58);
    nop();
    std::string::~string((string *)&local_60);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)asStack_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroPVZ1ModeVictoryOutroModule::onNotifyTutorialWormHoleEnd() */

void __thiscall
IntroPVZ1ModeVictoryOutroModule::onNotifyTutorialWormHoleEnd(IntroPVZ1ModeVictoryOutroModule *this)

{
  float fVar1;
  
  Board::ClearAllEntitiesAndCollectCollectables(*(Board **)(gLawnApp + 0x9f0));
  triggerPortal(this);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x90) = fVar1 + 1.5;
  return;
}


/* IntroPVZ1ModeVictoryOutroModule::~IntroPVZ1ModeVictoryOutroModule() */

void __thiscall
IntroPVZ1ModeVictoryOutroModule::~IntroPVZ1ModeVictoryOutroModule
          (IntroPVZ1ModeVictoryOutroModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06668ed0;
  VictoryOutroModule::~VictoryOutroModule((VictoryOutroModule *)this);
  return;
}


/* IntroPVZ1ModeVictoryOutroModule::~IntroPVZ1ModeVictoryOutroModule() */

void __thiscall
IntroPVZ1ModeVictoryOutroModule::~IntroPVZ1ModeVictoryOutroModule
          (IntroPVZ1ModeVictoryOutroModule *this)

{
  ~IntroPVZ1ModeVictoryOutroModule(this);
  AK::FreeHook(this);
  return;
}


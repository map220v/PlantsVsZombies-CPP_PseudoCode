// Class: InitialPlantModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantModule::StaticClassInit() */

void InitialPlantModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"InitialPlantModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04358d38,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InitialPlantModule::StaticGetClass() */

long * InitialPlantModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InitialPlantModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialPlantModule::InitialPlantModule() */

void __thiscall InitialPlantModule::InitialPlantModule(InitialPlantModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06834840;
  return;
}


/* InitialPlantModule::StaticNew() */

InitialPlantModule * InitialPlantModule::StaticNew(void)

{
  InitialPlantModule *this;
  
  this = ::operator_new(0x18);
  InitialPlantModule(this);
  return this;
}


/* InitialPlantModule::~InitialPlantModule() */

void __thiscall InitialPlantModule::~InitialPlantModule(InitialPlantModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06834840;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* InitialPlantModule::~InitialPlantModule() */

void __thiscall InitialPlantModule::~InitialPlantModule(InitialPlantModule *this)

{
  ~InitialPlantModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall InitialPlantModule::AddResourceRequirements(InitialPlantModule *this,set *param_1)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  string *psVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar10 = *(undefined8 *)(pRVar2 + 0x40);
  lVar3 = FUN_04358944(uVar10,*(undefined8 *)(pRVar2 + 0x48));
  if (lVar3 != 0) {
    do {
      uVar8 = 0;
      while( true ) {
        puVar4 = (undefined8 *)FUN_04358974(uVar10,uVar9);
        uVar5 = FUN_04358980(*puVar4,puVar4[1]);
        if (uVar5 <= uVar8) break;
        psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        puVar4 = (undefined8 *)FUN_04358974(*(undefined8 *)(pRVar2 + 0x40),uVar9);
        FUN_0435898c(*puVar4,uVar8);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        if (cVar1 != '\0') {
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          (**(code **)(*plVar7 + 0x48))(plVar7,param_1);
        }
        uVar8 = uVar8 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        uVar10 = *(undefined8 *)(pRVar2 + 0x40);
      }
      uVar9 = uVar9 + 1;
      uVar8 = FUN_04358944(uVar10,*(undefined8 *)(pRVar2 + 0x48));
    } while (uVar9 < uVar8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantModule::onLoadComplete() */

void __thiscall InitialPlantModule::onLoadComplete(InitialPlantModule *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  string *psVar8;
  Plant *this_00;
  ulong uVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar9 = 0;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar10 = *(undefined8 *)(pRVar4 + 0x40);
  uVar5 = FUN_04358944(uVar10,*(undefined8 *)(pRVar4 + 0x48));
  if (uVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_04358974(uVar10,uVar9);
      lVar7 = FUN_04358980(*puVar6,puVar6[1]);
      if (lVar7 != 0) {
        iVar3 = RandRangeInt(0,(int)lVar7 + -1);
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        FUN_0435898c(*puVar6,(long)iVar3);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
        uVar1 = *(undefined4 *)(puVar6 + 3);
        uVar2 = *(undefined4 *)((long)puVar6 + 0x1c);
        uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar10,uVar1,uVar2,aRStack_10,
                                           *(undefined1 *)((long)puVar6 + 0x24),
                                           0 < *(int *)(puVar6 + 4),*(int *)(puVar6 + 4),0,1,1,0,0,0
                                           ,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (*(char *)((long)puVar6 + 0x24) != '\0') {
          Plant::SetPlantAvatarShowIndex(this_00,0);
          PlantFramework::SetAvatarEnable(*(PlantFramework **)(this_00 + 0xa8),true);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        uVar10 = *(undefined8 *)(pRVar4 + 0x40);
        uVar5 = FUN_04358944(uVar10,*(undefined8 *)(pRVar4 + 0x48));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialPlantModule::registerForEvents() */

void __thiscall InitialPlantModule::registerForEvents(InitialPlantModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<InitialPlantModule,void(InitialPlantModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


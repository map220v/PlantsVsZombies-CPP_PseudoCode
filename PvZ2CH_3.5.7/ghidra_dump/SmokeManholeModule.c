// Class: SmokeManholeModule


/* SmokeManholeModule::onLoadComplete() */

void __thiscall SmokeManholeModule::onLoadComplete(SmokeManholeModule *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x18);
    uVar2 = FUN_038f17c4(uVar4,*(undefined8 *)(this + 0x20));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_038f17bc(uVar4,uVar3);
    GridItemSmokeManhole::SetupAnimation((GridItemSmokeManhole *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* SmokeManholeModule::onHurrikaleBlow(int) */

void __thiscall SmokeManholeModule::onHurrikaleBlow(SmokeManholeModule *this,int param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x18);
  lVar2 = FUN_038f17c4(uVar6,*(undefined8 *)(this + 0x20));
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_038f17bc(uVar6,uVar5);
      iVar1 = SharkMinion::getRow((SharkMinion *)*puVar3);
      if ((param_1 - iVar1) + 1U < 3) {
        puVar3 = (undefined8 *)FUN_038f17bc(*(undefined8 *)(this + 0x18),uVar5);
        GridItemSmokeManhole::BlowSmoke((GridItemSmokeManhole *)*puVar3);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x18);
      uVar4 = FUN_038f17c4(uVar6,*(undefined8 *)(this + 0x20));
    } while (uVar5 < uVar4);
  }
  return;
}


/* SmokeManholeModule::onBloverBlow() */

void __thiscall SmokeManholeModule::onBloverBlow(SmokeManholeModule *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x18);
    uVar2 = FUN_038f17c4(uVar4,*(undefined8 *)(this + 0x20));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_038f17bc(uVar4,uVar3);
    GridItemSmokeManhole::BlowSmoke((GridItemSmokeManhole *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* SmokeManholeModule::onAbsorbSmoke(PlantLotusshooter*) */

void __thiscall
SmokeManholeModule::onAbsorbSmoke(SmokeManholeModule *this,PlantLotusshooter *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  BoardEntity *this_00;
  undefined8 uVar8;
  ulong uVar9;
  
  if (param_1 != (PlantLotusshooter *)0x0) {
    this_00 = *(BoardEntity **)(param_1 + 0x10);
    uVar9 = 0;
    iVar1 = BoardEntity::CalcColumnPosition(this_00);
    iVar2 = SharkMinion::getRow((SharkMinion *)this_00);
    uVar8 = *(undefined8 *)(this + 0x18);
    lVar5 = FUN_038f17c4(uVar8,*(undefined8 *)(this + 0x20));
    if (lVar5 != 0) {
      do {
        puVar6 = (undefined8 *)FUN_038f17bc(uVar8,uVar9);
        iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar6);
        puVar6 = (undefined8 *)FUN_038f17bc(*(undefined8 *)(this + 0x18),uVar9);
        iVar4 = SharkMinion::getRow((SharkMinion *)*puVar6);
        if (((iVar1 - iVar3) + 1U < 3) && ((iVar2 - iVar4) + 1U < 3)) {
          puVar6 = (undefined8 *)FUN_038f17bc(*(undefined8 *)(this + 0x18),uVar9);
          GridItemSmokeManhole::AbsorbSmoke((GridItemSmokeManhole *)*puVar6);
        }
        uVar9 = uVar9 + 1;
        uVar8 = *(undefined8 *)(this + 0x18);
        uVar7 = FUN_038f17c4(uVar8,*(undefined8 *)(this + 0x20));
      } while (uVar9 < uVar7);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmokeManholeModule::StaticClassInit() */

void SmokeManholeModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SmokeManholeModule");
    (*pcVar2)(plVar1,asStack_10,FUN_038f213c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SmokeManholeModule::StaticGetClass() */

long * SmokeManholeModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SmokeManholeModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SmokeManholeModule::SmokeManholeModule() */

void __thiscall SmokeManholeModule::SmokeManholeModule(SmokeManholeModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066be740;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* SmokeManholeModule::StaticNew() */

SmokeManholeModule * SmokeManholeModule::StaticNew(void)

{
  SmokeManholeModule *this;
  
  this = ::operator_new(0x30);
  SmokeManholeModule(this);
  return this;
}


/* SmokeManholeModule::~SmokeManholeModule() */

void __thiscall SmokeManholeModule::~SmokeManholeModule(SmokeManholeModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066be740;
  std::vector<GridItemSmokeManhole*,std::allocator<GridItemSmokeManhole*>>::~vector
            ((vector<GridItemSmokeManhole*,std::allocator<GridItemSmokeManhole*>> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SmokeManholeModule::~SmokeManholeModule() */

void __thiscall SmokeManholeModule::~SmokeManholeModule(SmokeManholeModule *this)

{
  ~SmokeManholeModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmokeManholeModule::CheckGridPlants(int, int) */

void __thiscall
SmokeManholeModule::CheckGridPlants(SmokeManholeModule *this,int param_1,int param_2)

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
  plVar4 = (long *)FUN_038f2a84(param_1,param_2);
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


/* SmokeManholeModule::onGameStart() */

void __thiscall SmokeManholeModule::onGameStart(SmokeManholeModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(pRVar1 + 0x48);
    uVar3 = FUN_038f1780(uVar7,*(undefined8 *)(pRVar1 + 0x50));
    if (uVar3 <= uVar6) break;
    piVar2 = (int *)FUN_038f17b0(uVar7,uVar6);
    CheckGridPlants(this,*piVar2,piVar2[1]);
    uVar6 = uVar6 + 1;
  }
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(this + 0x18);
    uVar3 = FUN_038f17c4(uVar7,*(undefined8 *)(this + 0x20));
    if (uVar3 <= uVar6) break;
    lVar4 = FUN_038f17b0(*(undefined8 *)(pRVar1 + 0x48),uVar6);
    puVar5 = (undefined8 *)FUN_038f17bc(uVar7,uVar6);
    GridItemSmokeManhole::GetReady((GridItemSmokeManhole *)*puVar5,*(float *)(lVar4 + 8));
    uVar6 = uVar6 + 1;
  }
  return;
}


/* SmokeManholeModule::onBlockSmokeManhole(PlantFlattenedshroom*) */

void __thiscall
SmokeManholeModule::onBlockSmokeManhole(SmokeManholeModule *this,PlantFlattenedshroom *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  GridItemSmokeManhole *this_00;
  BoardEntity *this_01;
  
  this_01 = *(BoardEntity **)(param_1 + 0x10);
  uVar1 = BoardEntity::CalcColumnPosition(this_01);
  uVar2 = SharkMinion::getRow((SharkMinion *)this_01);
  this_00 = (GridItemSmokeManhole *)FUN_038f2d94(uVar1,uVar2);
  if (this_00 != (GridItemSmokeManhole *)0x0) {
    GridItemSmokeManhole::BlockSmoke(this_00,param_1);
    return;
  }
  return;
}


/* SmokeManholeModule::onUnblockSmokeManhole(PlantFlattenedshroom*) */

SmokeManholeModule * __thiscall
SmokeManholeModule::onUnblockSmokeManhole(SmokeManholeModule *this,PlantFlattenedshroom *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  GridItemSmokeManhole *this_00;
  SmokeManholeModule *pSVar3;
  BoardEntity *this_01;
  
  if (param_1 != (PlantFlattenedshroom *)0x0) {
    this_01 = *(BoardEntity **)(param_1 + 0x10);
    uVar1 = BoardEntity::CalcColumnPosition(this_01);
    uVar2 = SharkMinion::getRow((SharkMinion *)this_01);
    this_00 = (GridItemSmokeManhole *)FUN_038f2d94(uVar1,uVar2);
    this = (SmokeManholeModule *)0x0;
    if (this_00 != (GridItemSmokeManhole *)0x0) {
      pSVar3 = (SmokeManholeModule *)GridItemSmokeManhole::UnBlockSmoke(this_00,param_1);
      return pSVar3;
    }
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmokeManholeModule::onPlantDie(Plant*) */

void __thiscall SmokeManholeModule::onPlantDie(SmokeManholeModule *this,Plant *param_1)

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
              ((MessageRouter *)gMessageRouter,Message::UnblockSmokeManhole,extraout_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmokeManholeModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SmokeManholeModule::AddResourceRequirements(SmokeManholeModule *this,set *param_1)

{
  string *psVar1;
  GridItemType *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  this_00 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  GridItemType::AddResourceRequirements(this_00,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmokeManholeModule::registerForEvents() */

void __thiscall SmokeManholeModule::registerForEvents(SmokeManholeModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
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
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<SmokeManholeModule,void(SmokeManholeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameStart);
  Sexy::Delegate0::Delegate0<SmokeManholeModule,void(SmokeManholeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBlockSmokeManhole);
  local_d0 = local_b0;
  uStack_c8 = uStack_a8;
  local_c0 = local_a0;
  MessageRouter::
  Subscribe<PlantFlattenedshroom*,Sexy::CBMemberTranslatorX<SmokeManholeModule,void(SmokeManholeModule::*)(PlantFlattenedshroom*)>>
            ((MessageRouter *)puVar1,Message::BlockSmokeManhole,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUnblockSmokeManhole);
  local_c0 = local_88;
  local_d0 = local_98;
  uStack_c8 = uStack_90;
  MessageRouter::
  Subscribe<PlantFlattenedshroom*,Sexy::CBMemberTranslatorX<SmokeManholeModule,void(SmokeManholeModule::*)(PlantFlattenedshroom*)>>
            ((MessageRouter *)puVar1,Message::UnblockSmokeManhole,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onHurrikaleBlow);
  local_f0 = local_80;
  uStack_e8 = uStack_78;
  local_e0 = local_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<SmokeManholeModule,void(SmokeManholeModule::*)(int)>>
            ((MessageRouter *)puVar1,Message::HurrikaleWind,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBloverBlow);
  Sexy::Delegate0::Delegate0<SmokeManholeModule,void(SmokeManholeModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantBloverWind,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAbsorbSmoke);
  local_110 = local_68;
  uStack_108 = uStack_60;
  local_100 = local_58;
  MessageRouter::
  Subscribe<PlantLotusshooter*,Sexy::CBMemberTranslatorX<SmokeManholeModule,void(SmokeManholeModule::*)(PlantLotusshooter*)>>
            ((MessageRouter *)puVar1,Message::AbsorbSmoke,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDie);
  local_130 = local_50;
  uStack_128 = uStack_48;
  local_120 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<SmokeManholeModule,void(SmokeManholeModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SmokeManholeModule::initializeModule() */

void __thiscall SmokeManholeModule::initializeModule(SmokeManholeModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ulong uVar2;
  long extraout_x0;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long extraout_x0_00;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar2 = FUN_038f1780(*(undefined8 *)(pRVar1 + 0x48),*(undefined8 *)(pRVar1 + 0x50));
  std::vector<GridItemSmokeManhole*,std::allocator<GridItemSmokeManhole*>>::resize
            ((vector<GridItemSmokeManhole*,std::allocator<GridItemSmokeManhole*>> *)(this + 0x18),
             uVar2);
  uVar2 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(pRVar1 + 0x48);
    uVar4 = FUN_038f1780(uVar7,*(undefined8 *)(pRVar1 + 0x50));
    if (uVar4 <= uVar2) break;
    piVar5 = (int *)FUN_038f17b0(uVar7,uVar2);
    Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pRVar1 + 0x40),*piVar5,piVar5[1],1);
    fVar8 = *(float *)(pRVar1 + 0x60);
    if (0.0 < fVar8) {
      nop();
      lVar6 = extraout_x0;
      if (extraout_x0 != 0) {
        FUN_038f15a8(fVar8,extraout_x0 + 0x1c8);
      }
    }
    else {
      nop();
      lVar6 = extraout_x0_00;
    }
    plVar3 = (long *)FUN_038f17bc(*(undefined8 *)(this + 0x18),uVar2);
    *plVar3 = lVar6;
    uVar2 = uVar2 + 1;
  }
  return;
}


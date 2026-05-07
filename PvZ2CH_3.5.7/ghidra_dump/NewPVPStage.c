// Class: NewPVPStage


/* NewPVPStage::onUpdate() */

void NewPVPStage::onUpdate(void)

{
  return;
}


/* NewPVPStage::NewPVPStage() */

void __thiscall NewPVPStage::NewPVPStage(NewPVPStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06647380;
  return;
}


/* NewPVPStage::StaticNew() */

NewPVPStage * NewPVPStage::StaticNew(void)

{
  NewPVPStage *this;
  
  this = ::operator_new(0xe8);
  NewPVPStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPStage::StaticClassInit() */

void NewPVPStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPStage");
    (*pcVar2)(plVar1,asStack_10,FUN_034b9b5c,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPStage::StaticGetClass() */

long * NewPVPStage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPStage::CanZombieSpawnInRow(int, Sexy::RtWeakPtr<ZombieType const>) */

void NewPVPStage::CanZombieSpawnInRow(undefined8 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,0,param_2);
  cVar1 = NewPVPUtils::IsConcreteRegion(aPStack_10);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = NewPVPUtils::IsOppoentRegion(aPStack_10);
    bVar2 = bVar2 ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPStage::generateConcreteRegion() */

void NewPVPStage::generateConcreteRegion(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BoardRegionConcrete *this;
  int iVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = iVar3 + 1;
  this = Board::AddRegion<BoardRegionConcrete>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets(aIStack_18,-1,iVar2 / 2,iVar3,1);
  BoardRegion::SetRegionFromGridSquares((BoardRegion *)this,(TRect *)aIStack_18);
  if (-1 < iVar3) {
    iVar4 = -1;
    do {
      iVar1 = iVar4 + 1;
      Board::SetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar4,iVar2 / 2,0xb);
      iVar4 = iVar1;
    } while (iVar1 != iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPStage::generateOppoentRegion() */

void NewPVPStage::generateOppoentRegion(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BoardRegionOppoent *this;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar5 = iVar5 + 1;
  iVar6 = BoardConstants::NUMBER_OF_ROWS();
  iVar4 = iVar4 / 2 + 1;
  this = Board::AddRegion<BoardRegionOppoent>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Insets::Insets(aIStack_18,-1,iVar4,iVar5,iVar6 / 2);
  BoardRegion::SetRegionFromGridSquares((BoardRegion *)this,(TRect *)aIStack_18);
  if (-1 < iVar5) {
    iVar3 = iVar4 + iVar6 / 2;
    iVar6 = -1;
    do {
      iVar1 = iVar4;
      if (iVar4 < iVar3) {
        do {
          iVar2 = iVar1 + 1;
          Board::SetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar6,iVar1,0xc);
          iVar1 = iVar2;
        } while (iVar2 != iVar3);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPStage::generateRegions() */

void NewPVPStage::generateRegions(void)

{
  generateConcreteRegion();
  generateOppoentRegion();
  return;
}


/* NewPVPStage::onLoadComplete() */

void NewPVPStage::onLoadComplete(void)

{
  generateConcreteRegion();
  generateOppoentRegion();
  return;
}


/* NewPVPStage::~NewPVPStage() */

void __thiscall NewPVPStage::~NewPVPStage(NewPVPStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06647380;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* NewPVPStage::~NewPVPStage() */

void __thiscall NewPVPStage::~NewPVPStage(NewPVPStage *this)

{
  ~NewPVPStage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPStage::registerForEvents() */

void __thiscall NewPVPStage::registerForEvents(NewPVPStage *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::registerForEvents((StageModule *)this);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<NewPVPStage,void(NewPVPStage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<NewPVPStage,void(NewPVPStage::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<NewPVPStage,void(NewPVPStage::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPStage::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
NewPVPStage::gatherPlantingRestrictions
          (NewPVPStage *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPUtils::IsConcreteRegion(param_1);
  if (cVar1 != '\0') {
    local_c = 1;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  cVar1 = NewPVPUtils::IsOppoentRegion(param_1);
  if (cVar1 != '\0') {
    local_c = 2;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


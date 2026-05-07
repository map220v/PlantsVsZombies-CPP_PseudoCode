// Class: ShovelPlantSpawnGraveStoneModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelPlantSpawnGraveStoneModule::StaticClassInit() */

void ShovelPlantSpawnGraveStoneModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShovelPlantSpawnGraveStoneModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04d8f034,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShovelPlantSpawnGraveStoneModule::StaticGetClass() */

long * ShovelPlantSpawnGraveStoneModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShovelPlantSpawnGraveStoneModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShovelPlantSpawnGraveStoneModule::ShovelPlantSpawnGraveStoneModule() */

void __thiscall
ShovelPlantSpawnGraveStoneModule::ShovelPlantSpawnGraveStoneModule
          (ShovelPlantSpawnGraveStoneModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069ba690;
  return;
}


/* ShovelPlantSpawnGraveStoneModule::StaticNew() */

ShovelPlantSpawnGraveStoneModule * ShovelPlantSpawnGraveStoneModule::StaticNew(void)

{
  ShovelPlantSpawnGraveStoneModule *this;
  
  this = ::operator_new(0x18);
  ShovelPlantSpawnGraveStoneModule(this);
  return this;
}


/* ShovelPlantSpawnGraveStoneModule::~ShovelPlantSpawnGraveStoneModule() */

void __thiscall
ShovelPlantSpawnGraveStoneModule::~ShovelPlantSpawnGraveStoneModule
          (ShovelPlantSpawnGraveStoneModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069ba690;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ShovelPlantSpawnGraveStoneModule::~ShovelPlantSpawnGraveStoneModule() */

void __thiscall
ShovelPlantSpawnGraveStoneModule::~ShovelPlantSpawnGraveStoneModule
          (ShovelPlantSpawnGraveStoneModule *this)

{
  ~ShovelPlantSpawnGraveStoneModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelPlantSpawnGraveStoneModule::PlantDied(Plant*) */

void __thiscall
ShovelPlantSpawnGraveStoneModule::PlantDied(ShovelPlantSpawnGraveStoneModule *this,Plant *param_1)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  RtObject *this_00;
  GridItemGravestoneShovelPlant *this_01;
  Board *pBVar5;
  undefined4 uVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  uVar6 = *(undefined4 *)(pRVar3 + 0x40);
  if (param_1 != (Plant *)0x0) {
    iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    if ((-1 < iVar2) && (-1 < iVar1)) {
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"gravestone_shovelplant");
      lVar4 = Board::GetGridItemAt(pBVar5,asStack_10,iVar1,iVar2);
      std::string::~string(asStack_10);
      nop();
      if (lVar4 == 0) {
        pBVar5 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"gravestone_shovelplant");
        this_00 = (RtObject *)Board::AddGridItem(pBVar5,asStack_10,iVar1,iVar2,1);
        this_01 = Sexy::RtObject::Cast<GridItemGravestoneShovelPlant>(this_00);
        std::string::~string(asStack_10);
        nop();
        FUN_04d8c384(uVar6,this_01 + 0x1e0);
        GridItemGravestoneShovelPlant::CalcDamagePerFrame(this_01);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShovelPlantSpawnGraveStoneModule::registerForEvents() */

void __thiscall
ShovelPlantSpawnGraveStoneModule::registerForEvents(ShovelPlantSpawnGraveStoneModule *this)

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
            ((ReceivedDataCallback *)this,PlantDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<ShovelPlantSpawnGraveStoneModule,void(ShovelPlantSpawnGraveStoneModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShovelPlantSpawnGraveStoneModule::AddResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) */

void __thiscall
ShovelPlantSpawnGraveStoneModule::AddResourceRequirements
          (ShovelPlantSpawnGraveStoneModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"Egypt_Gravestone");
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


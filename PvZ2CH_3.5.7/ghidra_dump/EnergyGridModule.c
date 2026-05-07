// Class: EnergyGridModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnergyGridModule::StaticClassInit() */

void EnergyGridModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"EnergyGridModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03dd2f08,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EnergyGridModule::StaticGetClass() */

long * EnergyGridModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EnergyGridModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EnergyGridModule::onePlantfoodSpawn() */

void __thiscall EnergyGridModule::onePlantfoodSpawn(EnergyGridModule *this)

{
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + -1;
  return;
}


/* EnergyGridModule::EnergyGridModule() */

void __thiscall EnergyGridModule::EnergyGridModule(EnergyGridModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined ***)this = &PTR_GetModuleClass_0677da30;
  *(undefined4 *)(this + 0x18) = 0xbf800000;
  return;
}


/* EnergyGridModule::StaticNew() */

EnergyGridModule * EnergyGridModule::StaticNew(void)

{
  EnergyGridModule *this;
  
  this = ::operator_new(0x28);
  EnergyGridModule(this);
  return this;
}


/* EnergyGridModule::~EnergyGridModule() */

void __thiscall EnergyGridModule::~EnergyGridModule(EnergyGridModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0677da30;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* EnergyGridModule::~EnergyGridModule() */

void __thiscall EnergyGridModule::~EnergyGridModule(EnergyGridModule *this)

{
  ~EnergyGridModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnergyGridModule::spawnEnergyGrid(int) */

void __thiscall EnergyGridModule::spawnEnergyGrid(EnergyGridModule *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  undefined8 uVar4;
  long lVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  Board *this_00;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  cVar1 = std::
          vector<EnergyGridProperties::EnergyGridData,std::allocator<EnergyGridProperties::EnergyGridData>>
          ::empty((vector<EnergyGridProperties::EnergyGridData,std::allocator<EnergyGridProperties::EnergyGridData>>
                   *)(pRVar3 + 0x48));
  if (cVar1 == '\0') {
    uVar4 = *(undefined8 *)(pRVar3 + 0x48);
    *(int *)(this + 0x1c) = param_1;
    lVar5 = FUN_03dd29fc(uVar4,(long)(param_1 + -1));
    uVar2 = FUN_03dd2a04(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    *(undefined4 *)(this + 0x20) = uVar2;
    pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    uVar4 = *(undefined8 *)(pRVar3 + 0x48);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(pRVar6 + 0x40);
    lVar5 = FUN_03dd29fc(uVar4,(long)(*(int *)(this + 0x1c) + -1));
    uVar4 = *(undefined8 *)(lVar5 + 8);
    uVar11 = 0;
    while (uVar7 = FUN_03dd2a04(uVar4,*(undefined8 *)(lVar5 + 0x10)), uVar11 < uVar7) {
      Sexy::Point::Point((Point *)&local_18);
      lVar5 = FUN_03dd29fc(*(undefined8 *)(pRVar3 + 0x48),(long)(*(int *)(this + 0x1c) + -1));
      piVar8 = (int *)FUN_03dd2a34(*(undefined8 *)(lVar5 + 8),uVar11);
      local_18 = *piVar8;
      local_14 = piVar8[1];
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"energyGrid");
      lVar9 = Board::AddGridItem(this_00,asStack_10,local_18,local_14,1);
      std::string::~string(asStack_10);
      nop();
      if (lVar9 == 0) {
        uVar11 = uVar11 + 1;
        lVar5 = FUN_03dd29fc(*(undefined8 *)(pRVar3 + 0x48),(long)(*(int *)(this + 0x1c) + -1));
        uVar4 = *(undefined8 *)(lVar5 + 8);
      }
      else {
        lVar5 = FUN_03dd29fc(*(undefined8 *)(pRVar3 + 0x48),(long)(*(int *)(this + 0x1c) + -1));
        uVar4 = *(undefined8 *)(lVar5 + 8);
        lVar10 = FUN_03dd2a34(uVar4,uVar11);
        *(undefined4 *)(lVar9 + 0x194) = *(undefined4 *)(lVar10 + 8);
        uVar11 = uVar11 + 1;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EnergyGridModule::finishLoad() */

void __thiscall EnergyGridModule::finishLoad(EnergyGridModule *this)

{
  spawnEnergyGrid(this,1);
  return;
}


/* EnergyGridModule::update() */

void __thiscall EnergyGridModule::update(EnergyGridModule *this)

{
  int iVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(this + 0x20) < 1) {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    cVar2 = std::
            vector<EnergyGridProperties::EnergyGridData,std::allocator<EnergyGridProperties::EnergyGridData>>
            ::empty((vector<EnergyGridProperties::EnergyGridData,std::allocator<EnergyGridProperties::EnergyGridData>>
                     *)(pRVar3 + 0x48));
    if ((cVar2 == '\0') &&
       (uVar4 = FUN_03dd2a40(*(undefined8 *)(pRVar3 + 0x48),*(undefined8 *)(pRVar3 + 0x50)),
       (ulong)(long)*(int *)(this + 0x1c) < uVar4)) {
      fVar5 = (float)PVZ_Dt();
      fVar6 = *(float *)(this + 0x18);
      *(float *)(this + 0x18) = fVar6 - fVar5;
      if (fVar6 - fVar5 <= 0.0) {
        iVar1 = *(int *)(this + 0x1c);
        *(int *)(this + 0x1c) = iVar1 + 1;
        spawnEnergyGrid(this,iVar1 + 1);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnergyGridModule::registerForEvents() */

void __thiscall EnergyGridModule::registerForEvents(EnergyGridModule *this)

{
  LevelModuleManager *pLVar1;
  Board *this_00;
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,finishLoad);
  Sexy::Delegate0::Delegate0<EnergyGridModule,void(EnergyGridModule::*)()>(aDStack_38,asStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_50,"KongFuEnergyGridGroup");
  Board::LoadResourceGroupForGameplay(this_00,asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: PlantWarsSeedBankModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsSeedBankModule::StaticClassInit() */

void PlantWarsSeedBankModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWarsSeedBankModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04d8fb18,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsSeedBankModule::StaticGetClass() */

long * PlantWarsSeedBankModule::StaticGetClass(void)

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
  uVar2 = SeedBankModule::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWarsSeedBankModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWarsSeedBankModule::PlantWarsSeedBankModule() */

void __thiscall PlantWarsSeedBankModule::PlantWarsSeedBankModule(PlantWarsSeedBankModule *this)

{
  SeedBankModule::SeedBankModule((SeedBankModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069bac60;
  return;
}


/* PlantWarsSeedBankModule::StaticNew() */

PlantWarsSeedBankModule * PlantWarsSeedBankModule::StaticNew(void)

{
  PlantWarsSeedBankModule *this;
  
  this = ::operator_new(0x48);
  PlantWarsSeedBankModule(this);
  return this;
}


/* PlantWarsSeedBankModule::~PlantWarsSeedBankModule() */

void __thiscall PlantWarsSeedBankModule::~PlantWarsSeedBankModule(PlantWarsSeedBankModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069bac60;
  SeedBankModule::~SeedBankModule((SeedBankModule *)this);
  return;
}


/* PlantWarsSeedBankModule::~PlantWarsSeedBankModule() */

void __thiscall PlantWarsSeedBankModule::~PlantWarsSeedBankModule(PlantWarsSeedBankModule *this)

{
  ~PlantWarsSeedBankModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsSeedBankModule::initializeModule() */

void __thiscall PlantWarsSeedBankModule::initializeModule(PlantWarsSeedBankModule *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  bool bVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  this[0x40] = (PlantWarsSeedBankModule)0x0;
  std::vector<std::string,std::allocator<std::string>>::clear(this_00);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar7 = *(long *)pRVar3;
  iVar8 = *(int *)(pRVar3 + 0x40);
  *(int *)(this + 0x44) = iVar8;
  iVar2 = (**(code **)(lVar7 + 0xa0))();
  if (((((iVar2 == 0) || (iVar2 = (**(code **)(*(long *)pRVar3 + 0xa0))(pRVar3), iVar2 == 5)) ||
       (iVar2 = (**(code **)(*(long *)pRVar3 + 0xa0))(pRVar3), iVar2 == 6)) ||
      (iVar2 = (**(code **)(*(long *)pRVar3 + 0xa0))(pRVar3), iVar2 == 7)) &&
     (((*(uint *)(pRVar3 + 0x40) & 0xfffffffd) == 0 && (*(long *)(gLawnApp + 0x9f0) != 0)))) {
    uVar4 = PlantWarsUtils::GetCurfentLevelIndex();
    lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    FUN_05475d88(asStack_40,lVar7 + 0xb0);
    FUN_05475d88((string *)&local_20,asStack_40);
    iVar2 = PlantWarsUtils::CalcNodeType((string *)&local_20);
    std::string::~string((string *)&local_20);
    PlantWarsUtils::GetNodePlantPackets((PlantWarsUtils *)(uVar4 & 0xffffffff),iVar2,iVar8);
    std::string::string(asStack_38,"");
    nop();
    for (uVar4 = 0; uVar6 = local_20, uVar5 = FUN_04d8c688(local_20,local_18), uVar4 < uVar5;
        uVar4 = uVar4 + 1) {
      uVar6 = FUN_04d8c3c4(uVar6,uVar4);
      FUN_05475d88(asStack_30,uVar6);
      bVar1 = std::operator!=(asStack_30,asStack_38);
      if (bVar1) {
        std::vector<std::string,std::allocator<std::string>>::push_back(this_00,asStack_30);
      }
      else {
        std::string::string(asStack_28,"imitater");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_00,asStack_28);
        std::string::~string(asStack_28);
        nop();
      }
      thunk_FUN_05475e00(asStack_38,asStack_30);
      std::string::~string(asStack_30);
    }
    std::string::~string(asStack_38);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
    std::string::~string(asStack_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


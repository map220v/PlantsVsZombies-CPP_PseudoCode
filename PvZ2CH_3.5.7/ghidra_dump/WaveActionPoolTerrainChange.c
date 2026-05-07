// Class: WaveActionPoolTerrainChange


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionPoolTerrainChange::StaticClassInit() */

void WaveActionPoolTerrainChange::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveActionPoolTerrainChange");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca8f30,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionPoolTerrainChange::StaticGetClass() */

long * WaveActionPoolTerrainChange::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionPoolTerrainChange",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionPoolTerrainChange::WaveActionPoolTerrainChange() */

void __thiscall
WaveActionPoolTerrainChange::WaveActionPoolTerrainChange(WaveActionPoolTerrainChange *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_069982a0;
  return;
}


/* WaveActionPoolTerrainChange::StaticNew() */

WaveActionPoolTerrainChange * WaveActionPoolTerrainChange::StaticNew(void)

{
  WaveActionPoolTerrainChange *this;
  
  this = ::operator_new(0x18);
  WaveActionPoolTerrainChange(this);
  return this;
}


/* WaveActionPoolTerrainChange::~WaveActionPoolTerrainChange() */

void __thiscall
WaveActionPoolTerrainChange::~WaveActionPoolTerrainChange(WaveActionPoolTerrainChange *this)

{
  *(undefined ***)this = &PTR_GetActionClass_069982a0;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* WaveActionPoolTerrainChange::~WaveActionPoolTerrainChange() */

void __thiscall
WaveActionPoolTerrainChange::~WaveActionPoolTerrainChange(WaveActionPoolTerrainChange *this)

{
  ~WaveActionPoolTerrainChange(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionPoolTerrainChange::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void WaveActionPoolTerrainChange::WaveStart(WaveAction *param_1)

{
  FairyTaleWindWaveActionProps *pFVar1;
  long lVar2;
  RtObject *this;
  PoolDaylightStage *this_00;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar1 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  lVar2 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar2 != 0) {
    this = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    this_00 = Sexy::RtObject::Cast<PoolDaylightStage>(this);
    uVar5 = 0;
    if (this_00 != (PoolDaylightStage *)0x0) {
      while( true ) {
        uVar6 = *(undefined8 *)(pFVar1 + 0x40);
        uVar3 = FUN_04ca879c(uVar6,*(undefined8 *)(pFVar1 + 0x48));
        if (uVar3 <= uVar5) break;
        piVar4 = (int *)FUN_04ca87a8(uVar6,uVar5);
        PoolDaylightStage::upWaterGrid(this_00,*piVar4,piVar4[1]);
        piVar4 = (int *)FUN_04ca87a8(*(undefined8 *)(pFVar1 + 0x40),uVar5);
        Sexy::Point::Point(aPStack_10,*piVar4,piVar4[1]);
        piVar4 = (int *)FUN_04ca87a8(*(undefined8 *)(pFVar1 + 0x40),uVar5);
        PoolDaylightStage::showFloatIslandsUPDown(this_00,*piVar4,piVar4[1],true);
        uVar5 = uVar5 + 1;
      }
      uVar5 = 0;
      while( true ) {
        uVar6 = *(undefined8 *)(pFVar1 + 0x58);
        uVar3 = FUN_04ca879c(uVar6,*(undefined8 *)(pFVar1 + 0x60));
        if (uVar3 <= uVar5) break;
        piVar4 = (int *)FUN_04ca87a8(uVar6,uVar5);
        PoolDaylightStage::downWaterGrid(this_00,*piVar4,piVar4[1]);
        piVar4 = (int *)FUN_04ca87a8(*(undefined8 *)(pFVar1 + 0x58),uVar5);
        PoolDaylightStage::showFloatIslandsUPDown(this_00,*piVar4,piVar4[1],false);
        uVar5 = uVar5 + 1;
      }
      PoolDaylightStage::freshenWaterGrid(this_00);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionPoolTerrainChange::AddResourceRequirements(std::set<std::string, std::less<std::string
   >, std::allocator<std::string > >&) */

void __thiscall
WaveActionPoolTerrainChange::AddResourceRequirements(WaveActionPoolTerrainChange *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombieImpPorterGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ZombieBeachSurferAudio");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ZombieRenaiPerfumerGroup");
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


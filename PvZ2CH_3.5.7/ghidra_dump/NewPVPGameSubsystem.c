// Class: NewPVPGameSubsystem


/* NewPVPGameSubsystem::onPlantPlanted(Plant*) */

void NewPVPGameSubsystem::onPlantPlanted(Plant *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::StaticClassInit() */

void NewPVPGameSubsystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieCacheData");
    (*pcVar3)(plVar2,asStack_10,FUN_034c788c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieCreatedCacheData");
    (*pcVar3)(plVar2,asStack_10,FUN_034d901c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantCacheData");
    (*pcVar3)(plVar2,asStack_10,FUN_034c8288,0x1c,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CurrentHealthData");
    (*pcVar3)(plVar2,asStack_10,FUN_034ae974,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPZombieSkillData");
    (*pcVar3)(plVar2,asStack_10,FUN_034ae7b8,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPZombieUpgradeData");
    (*pcVar3)(plVar2,asStack_10,FUN_034afcb8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPGameSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_034d940c,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::StaticGetClass() */

long * NewPVPGameSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGameSubsystem::GetClass() const */

long * NewPVPGameSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPGameSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPGameSubsystem::addCurrentRow() */

void __thiscall NewPVPGameSubsystem::addCurrentRow(NewPVPGameSubsystem *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x15c);
  *(int *)(this + 0x15c) = iVar1 + 1;
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  if (iVar2 / 2 <= iVar1 + 1) {
    *(undefined4 *)(this + 0x15c) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::setTutorialArrowPos(int, int) */

void __thiscall
NewPVPGameSubsystem::setTutorialArrowPos(NewPVPGameSubsystem *this,int param_1,int param_2)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)param_1,(float)param_2);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x1a4) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::setTutorialArrowOffset(int, int, float) */

void __thiscall
NewPVPGameSubsystem::setTutorialArrowOffset
          (NewPVPGameSubsystem *this,int param_1,int param_2,float param_3)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)param_1,(float)param_2);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x19c) = local_10;
  *(float *)(this + 0x1ac) = param_3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::showTutorialArrow(int, int, int) */

void __thiscall
NewPVPGameSubsystem::showTutorialArrow
          (NewPVPGameSubsystem *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  switch(param_1) {
  case 1:
    iVar1 = FUN_034b7438(0x8c);
    iVar2 = FUN_034b7438(100);
    setTutorialArrowOffset(this,iVar1,iVar2,270.0);
    break;
  case 2:
    iVar1 = FUN_034b7438(0xffffffa7);
    iVar2 = FUN_034b7438(0x3c);
    setTutorialArrowOffset(this,iVar1,iVar2,90.0);
    break;
  case 3:
    iVar1 = FUN_034b7438(0);
    iVar2 = FUN_034b7438(0xffffffce);
    setTutorialArrowOffset(this,iVar1,iVar2,0.0);
    break;
  case 4:
    iVar1 = FUN_034b7438(0x3c);
    iVar2 = FUN_034b7438(0xbe);
    setTutorialArrowOffset(this,iVar1,iVar2,180.0);
  }
  setTutorialArrowPos(this,param_2,param_3);
  PassionFlowerProjectile::setShouldStun((PassionFlowerProjectile *)this,true);
  return;
}


/* NewPVPGameSubsystem::drawTutorialArrow(Sexy::Graphics*) */

void __thiscall NewPVPGameSubsystem::drawTutorialArrow(NewPVPGameSubsystem *this,Graphics *param_1)

{
  if ((this[0x1b8] != (NewPVPGameSubsystem)0x0) &&
     (*(PopAnimRig **)(this + 0x1b0) != (PopAnimRig *)0x0)) {
    PopAnimRig::Draw(*(PopAnimRig **)(this + 0x1b0),param_1);
    return;
  }
  return;
}


/* NewPVPGameSubsystem::draw(Sexy::Graphics*) */

void __thiscall NewPVPGameSubsystem::draw(NewPVPGameSubsystem *this,Graphics *param_1)

{
  drawTutorialArrow(this,param_1);
  TutorialFinger::Draw((TutorialFinger *)(this + 0x160),param_1);
  return;
}


/* NewPVPGameSubsystem::GetCurrentSun() */

void NewPVPGameSubsystem::GetCurrentSun(void)

{
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::removePlant(int, int) */

void __thiscall NewPVPGameSubsystem::removePlant(NewPVPGameSubsystem *this,int param_1,int param_2)

{
  long *plVar1;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  plVar1 = (long *)Board::GetPlantAt(this_00,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x150))(plVar1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar1 != (long *)0x0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::applyPlantfood(int, int) */

void __thiscall
NewPVPGameSubsystem::applyPlantfood(NewPVPGameSubsystem *this,int param_1,int param_2)

{
  char cVar1;
  Plant *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_01,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (Plant *)0x0) {
    cVar1 = Plant::CanApplyPlantfood(this_00);
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(this_00 + 0xa8) + 0x220))(*(long **)(this_00 + 0xa8));
      goto LAB_034b8c30;
    }
  }
  cVar1 = '\0';
LAB_034b8c30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* NewPVPGameSubsystem::GetCurrentZombieCacheSize() */

void __thiscall NewPVPGameSubsystem::GetCurrentZombieCacheSize(NewPVPGameSubsystem *this)

{
  FUN_034b0424(*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18));
  return;
}


/* NewPVPGameSubsystem::GetTargetZombieCacheData(int) */

undefined * __thiscall
NewPVPGameSubsystem::GetTargetZombieCacheData(NewPVPGameSubsystem *this,int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = GetCurrentZombieCacheSize(this);
  if (param_1 < iVar1) {
    puVar2 = (undefined *)FUN_034b047c(*(undefined8 *)(this + 0x10),(long)param_1);
    return puVar2;
  }
  return &DAT_06aa4068;
}


/* NewPVPGameSubsystem::triggerFPSCheck() */

void NewPVPGameSubsystem::triggerFPSCheck(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* NewPVPGameSubsystem::CanAfford(int) */

bool __thiscall NewPVPGameSubsystem::CanAfford(NewPVPGameSubsystem *this,int param_1)

{
  int iVar1;
  
  iVar1 = GetCurrentSun();
  return param_1 <= iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::arrangeTopUIs() */

void NewPVPGameSubsystem::arrangeTopUIs(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int local_38 [2];
  int local_30;
  UIWidgetArranger aUStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidgetArranger::UIWidgetArranger(aUStack_28,2);
  std::string::string((string *)local_38,"UINewPVPSunIncreaseBank");
  UIWidgetArranger::AddBySheetName(aUStack_28,(string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  std::string::string((string *)local_38,"UINewPVPTopZombieQueue");
  UIWidgetArranger::AddBySheetName(aUStack_28,(string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  iVar1 = FUN_034b7438(0x81);
  iVar5 = *(int *)(gLawnApp + 0x724);
  iVar2 = FUN_034b7438(0xf2);
  std::string::string((string *)local_38,"UINewPVPSeedBank");
  lVar4 = UIWidget::GetWidgetBySheetName((string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  if (lVar4 != 0) {
    UIWidget::GetDrawRect();
    iVar1 = local_38[0] + local_30;
  }
  std::string::string((string *)local_38,"UINewPVPSurrenderButton");
  lVar4 = UIWidget::GetWidgetBySheetName((string *)local_38);
  std::string::~string((string *)local_38);
  nop();
  iVar5 = iVar5 - iVar2;
  if (lVar4 != 0) {
    UIWidget::GetDrawRect();
    iVar5 = local_38[0];
  }
  uVar3 = FUN_034b7438(8);
  UIWidgetArranger::Arrange(aUStack_28,0,iVar1,0,uVar3,0,iVar5 - iVar1,iVar5 - iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::GetMaxTurn() */

void NewPVPGameSubsystem::GetMaxTurn(void)

{
  WaveManager *this;
  
  this = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (this != (WaveManager *)0x0) {
    WaveManager::GetWaveCount(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::findEmptyRow(int, int, int, bool, Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
NewPVPGameSubsystem::findEmptyRow
          (undefined8 param_1_00,int param_1,int param_2,int param_3,char param_4,
          RtWeakPtrBase *param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  Board *pBVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < 1) {
    iVar2 = -1;
  }
  else if (param_4 == '\0') {
    iVar5 = 0;
    iVar2 = -1;
    do {
      while( true ) {
        iVar4 = iVar5;
        pBVar6 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"");
        lVar3 = Board::GetPlantAt(pBVar6,param_1,param_2 + 1 + iVar4,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (lVar3 != 0) break;
        iVar2 = param_3;
        if ((iVar4 == param_3) || (iVar2 = iVar4, iVar5 = iVar4 + 1, iVar4 + 1 == param_2))
        goto LAB_034c311c;
      }
      iVar5 = iVar4 + 1;
    } while (iVar4 + 1 != param_2);
  }
  else {
    iVar5 = 0;
    iVar2 = -1;
    do {
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"");
      lVar3 = Board::GetPlantAt(pBVar6,param_1,param_2 + 1 + iVar5,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (lVar3 == 0) {
LAB_034c31f8:
        iVar2 = param_3;
        iVar4 = iVar5;
        if (iVar5 == param_3) break;
      }
      else {
        Plant::GetType();
        cVar1 = Sexy::RtWeakPtrBase::operator!=((RtWeakPtrBase *)asStack_10,param_6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        iVar4 = iVar2;
        if (cVar1 != '\0') goto LAB_034c31f8;
      }
      iVar2 = iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_2);
  }
LAB_034c311c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


/* NewPVPGameSubsystem::initCPU() */

void __thiscall NewPVPGameSubsystem::initCPU(NewPVPGameSubsystem *this)

{
  undefined4 uVar1;
  
  std::vector<NewPVPCurrentCPUPlant,std::allocator<NewPVPCurrentCPUPlant>>::clear
            ((vector<NewPVPCurrentCPUPlant,std::allocator<NewPVPCurrentCPUPlant>> *)(this + 0x140));
  uVar1 = NewPVPUtils::GetCurrentCPULevel();
  *(undefined4 *)(this + 0x158) = uVar1;
  return;
}


/* NewPVPGameSubsystem::updateZombieSkills() */

void __thiscall NewPVPGameSubsystem::updateZombieSkills(NewPVPGameSubsystem *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x84);
  if ((fVar2 != 0.0) && (fVar1 = (float)PVZ_T(), fVar2 - fVar1 <= 0.0)) {
    *(undefined4 *)(this + 0x84) = 0;
  }
  fVar2 = *(float *)(this + 0x90);
  if ((fVar2 != 0.0) && (fVar1 = (float)PVZ_T(), fVar2 - fVar1 <= 0.0)) {
    *(undefined4 *)(this + 0x90) = 0;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::updateTutorialArrow() */

void __thiscall NewPVPGameSubsystem::updateTutorialArrow(NewPVPGameSubsystem *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1b0) != 0) {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar4 = *(float *)(this + 0x1a8);
    fVar1 = *(float *)(this + 0x19c);
    fVar3 = *(float *)(this + 0x1a4);
    fVar2 = *(float *)(this + 0x1a0);
    Sexy::SexyTransform2D::RotateDeg(aSStack_30,*(float *)(this + 0x1ac));
    FUN_034ad664((float)(int)(fVar1 + fVar3),(float)(int)(fVar2 + fVar4),auStack_28,auStack_1c);
    PopAnimRig::SetRenderTransform(*(PopAnimRig **)(this + 0x1b0),aSStack_30);
    if (this[0x1b8] != (NewPVPGameSubsystem)0x0) {
      this_00 = *(PopAnimRig **)(this + 0x1b0);
      fVar1 = (float)PVZ_T();
      fVar2 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::playRemoveEffect(BoardEntity*) */

void __thiscall
NewPVPGameSubsystem::playRemoveEffect(NewPVPGameSubsystem *this,BoardEntity *param_1)

{
  int iVar1;
  Effect_PopAnim *this_00;
  SexyVector3 *this_01;
  ResourceInfo *pRVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  uVar3 = 0x41700000;
  uVar4 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,15.0,0.0);
  local_18 = Sexy::SexyVector3::operator-(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar3;
  local_10 = uVar4;
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar1 + 1);
  std::string::string((string *)aVStack_28,"POPANIM_EFFECTS_PLANT_UNPLANTED");
  GetPAMByName((string *)aVStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string((string *)aVStack_28);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::AddToRenderQueue(RenderQueue*) */

void __thiscall
NewPVPGameSubsystem::AddToRenderQueue(NewPVPGameSubsystem *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,draw);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,900000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::OnNarrativeTutorialStartCompleted() */

void NewPVPGameSubsystem::OnNarrativeTutorialStartCompleted(void)

{
  int iVar1;
  
  iVar1 = NewPVPUtils::GetTutorialStep();
  if (iVar1 == 2) {
    Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),false);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::WavesNotify,0);
    return;
  }
  iVar1 = NewPVPUtils::GetTutorialStep();
  if (iVar1 != 7) {
    return;
  }
  Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),false);
  Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),true);
  NewPVPUtils::TrySetTutorialStep(8);
  return;
}


/* NewPVPGameSubsystem::triggerSurrender(bool) */

void __thiscall NewPVPGameSubsystem::triggerSurrender(NewPVPGameSubsystem *this,bool param_1)

{
  if (param_1) {
    this[0x138] = (NewPVPGameSubsystem)0x1;
    return;
  }
  MessageRouter::Post<bool,bool>((MessageRouter *)gMessageRouter,Message::NotifyHealthEmpty,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::NewPVPGameSubsystem() */

void __thiscall NewPVPGameSubsystem::NewPVPGameSubsystem(NewPVPGameSubsystem *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
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
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06646ee0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  EndLevelData::EndLevelData((EndLevelData *)(this + 0x80));
  EndLevelData::EndLevelData((EndLevelData *)(this + 0x8c));
  DVec3::DVec3((DVec3 *)(this + 0xb0));
  DVec3::DVec3((DVec3 *)(this + 0xbc));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 200));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x110));
  NewPVPCurrentLevelCPU::NewPVPCurrentLevelCPU((NewPVPCurrentLevelCPU *)(this + 0x140));
  TutorialFinger::TutorialFinger((TutorialFinger *)(this + 0x160));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x19c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1a4));
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  uVar2 = PVZ_EOT();
  this[0x138] = (NewPVPGameSubsystem)0x0;
  this[0x198] = (NewPVPGameSubsystem)0x0;
  this[0x199] = (NewPVPGameSubsystem)0x0;
  *(undefined4 *)(this + 0x128) = 0x3f800000;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0xa8) = uVar2;
  *(undefined4 *)(this + 0x134) = 0xbf800000;
  *(undefined4 *)(this + 0x13c) = uVar2;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,0.0,0.0);
  *(undefined8 *)(this + 0x19c) = local_50;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,0.0,0.0);
  *(undefined8 *)(this + 0x1a4) = local_50;
  this[0x1b8] = (NewPVPGameSubsystem)0x0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)()>
            (aDStack_38,(FastCurve *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_100 = local_e0;
  uStack_f8 = uStack_d8;
  local_f0 = local_d0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWaveStarted);
  local_120 = local_c8;
  uStack_118 = uStack_c0;
  local_110 = local_b8;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(int)>>
            ((MessageRouter *)puVar1,Message::WavesNotify,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBarTakeDamage);
  local_140 = local_b0;
  uStack_138 = uStack_a8;
  local_130 = local_a0;
  MessageRouter::
  Subscribe<int,float,Sexy::CBMemberTranslatorX<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(int,float)>>
            ((MessageRouter *)puVar1,Message::BarTakeDamage,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGatherPlantingRestrictions);
  local_150 = local_88;
  local_160 = local_98;
  uStack_158 = uStack_90;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_180 = local_80;
  uStack_178 = uStack_78;
  local_170 = local_70;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTutorialStep);
  local_110 = local_58;
  local_120 = local_68;
  uStack_118 = uStack_60;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTutorialStep,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlanted);
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::StaticNew() */

NewPVPGameSubsystem * NewPVPGameSubsystem::StaticNew(void)

{
  NewPVPGameSubsystem *this;
  
  this = ::operator_new(0x1c0);
  NewPVPGameSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::GetZombieCost(Zombie*) */

void __thiscall NewPVPGameSubsystem::GetZombieCost(NewPVPGameSubsystem *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034d2b4c(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  uVar5 = 0;
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar5 = *(undefined4 *)(lVar4 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::addTutorialArrow() */

void __thiscall NewPVPGameSubsystem::addTutorialArrow(NewPVPGameSubsystem *this)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  long *plVar3;
  code *pcVar4;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = CachedUIResourcePtr::operator_cast_to_PopAnim_((CachedUIResourcePtr *)&DAT_06aa3cf0);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  plVar3 = (long *)PopAnimRig::CreateRigOutsideTable(pPVar1,pRVar2);
  *(long **)(this + 0x1b0) = plVar3;
  pcVar4 = *(code **)(*plVar3 + 0x78);
  std::string::string(asStack_28,"idle");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (*pcVar4)(plVar3,asStack_28,1,0,avStack_20);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  std::string::~string(asStack_28);
  nop();
  updateTutorialArrow(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::IsSpawnedZombie(Zombie*) */

void NewPVPGameSubsystem::IsSpawnedZombie(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x58);
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_18 = FUN_034d5c9c(uVar2,uVar3,aRStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::getPlantCount() */

void NewPVPGameSubsystem::getPlantCount(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  Plant *this;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Point aPStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!(bool)cVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar9);
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
    if (this != (Plant *)0x0) {
      iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
      iVar5 = SharkMinion::getRow((SharkMinion *)this);
      Sexy::Point::Point(aPStack_28,iVar4,iVar5);
      cVar2 = NewPVPUtils::IsOppoentRegion(aPStack_28);
      if (cVar2 == '\0') {
        Plant::GetType();
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        bVar3 = std::operator==((string *)(lVar7 + 8),"pumpkin");
        if (!bVar3) {
          Plant::GetType();
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          bVar3 = std::operator==((string *)(lVar7 + 8),"smallChestnut");
          if (bVar3) {
            if (bVar3) {
LAB_034d8a40:
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            }
          }
          else {
            Plant::GetType();
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            bVar3 = std::operator==((string *)(lVar7 + 8),"powervine");
            cVar2 = bVar3;
            if (!bVar3) {
              Plant::GetType();
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              cVar2 = std::operator==((string *)(lVar7 + 8),"peavine");
              if (!(bool)cVar2) {
                Plant::GetType();
                plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_28);
                if (*(code **)(*plVar8 + 0xa0) == PlantType::IsVine) {
                  cVar2 = PlantType::IsVine();
                }
                else {
                  cVar2 = (**(code **)(*plVar8 + 0xa0))();
                }
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_28);
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
              bVar3 = (bool)cVar1;
            }
            cVar1 = cVar2;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            if (bVar3 != false) goto LAB_034d8a40;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        if (cVar1 == '\0') {
          iVar9 = iVar9 + 1;
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::hasCPUPlant(int) */

void __thiscall NewPVPGameSubsystem::hasCPUPlant(NewPVPGameSubsystem *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034da344(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::takeDamage(bool) */

void __thiscall NewPVPGameSubsystem::takeDamage(NewPVPGameSubsystem *this,bool param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if (*(float *)(this + 0xb0) <= 0.0) {
LAB_034da684:
      uVar2 = 0;
      goto LAB_034da65c;
    }
    fVar4 = *(float *)(this + 0xb8);
    local_c = 0.0;
    *(float *)(this + 0xb0) = *(float *)(this + 0xb0) - fVar4;
    pfVar1 = eastl::max_alt<float>(&local_c,(float *)(this + 0xb0));
    iVar3 = 0;
    *(float *)(this + 0xb0) = *pfVar1;
  }
  else {
    if (*(float *)(this + 0xbc) <= 0.0) goto LAB_034da684;
    fVar4 = *(float *)(this + 0xc4);
    local_c = 0.0;
    *(float *)(this + 0xbc) = *(float *)(this + 0xbc) - fVar4;
    pfVar1 = eastl::max_alt<float>(&local_c,(float *)(this + 0xbc));
    iVar3 = 1;
    *(float *)(this + 0xbc) = *pfVar1;
  }
  MessageRouter::Post<int,float,int,float>
            ((MessageRouter *)gMessageRouter,Message::BarTakeDamage,iVar3,fVar4);
  if ((*(float *)(this + 0xb0) == 0.0) || (uVar2 = 1, *(float *)(this + 0xbc) == 0.0)) {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyHealthEmpty,param_1);
    uVar2 = 1;
  }
LAB_034da65c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* NewPVPGameSubsystem::onBarTakeDamage(int, float) */

void __thiscall
NewPVPGameSubsystem::onBarTakeDamage(NewPVPGameSubsystem *this,int param_1,float param_2)

{
  if (param_1 == 0) {
    MessageRouter::Post<int,float,int,float>
              ((MessageRouter *)gMessageRouter,Message::BarSetPercentage,0,
               (*(float *)(this + 0xb0) / *(float *)(this + 0xb4)) * 100.0);
    return;
  }
  MessageRouter::Post<int,float,int,float>
            ((MessageRouter *)gMessageRouter,Message::BarSetPercentage,param_1,
             (*(float *)(this + 0xbc) / *(float *)(this + 0xc0)) * 100.0);
  if (((param_1 == 1) &&
      (MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,param_2),
      *(float *)(this + 0xb0) == *(float *)(this + 0xb4))) &&
     (*(float *)(this + 0xbc) == *(float *)(this + 0xc0) - param_2)) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::TryUpgradePlant(int, int) */

void __thiscall
NewPVPGameSubsystem::TryUpgradePlant(NewPVPGameSubsystem *this,int param_1,int param_2)

{
  char cVar1;
  Plant *pPVar2;
  Board *this_00;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,param_1,param_2);
  cVar1 = NewPVPUtils::IsConcreteRegion(aPStack_18);
  if (cVar1 == '\0') {
    Sexy::Point::Point(aPStack_10,param_1,param_2);
    cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
    if (cVar1 == '\0') {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aPStack_10,"");
      pPVar2 = (Plant *)Board::GetPlantAt(this_00,param_1,param_2,(string *)aPStack_10);
      std::string::~string((string *)aPStack_10);
      nop();
      if (pPVar2 != (Plant *)0x0) {
        MessageRouter::Post<Plant*,Plant*>
                  ((MessageRouter *)gMessageRouter,Message::NotifyUpgradePlant,pPVar2);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::~NewPVPGameSubsystem() */

void __thiscall NewPVPGameSubsystem::~NewPVPGameSubsystem(NewPVPGameSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06646ee0;
  if (*(long **)(this + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1b0) + 0x18))();
    *(undefined8 *)(this + 0x1b0) = 0;
  }
  TutorialFinger::~TutorialFinger((TutorialFinger *)(this + 0x160));
  NewPVPCurrentLevelCPU::~NewPVPCurrentLevelCPU((NewPVPCurrentLevelCPU *)(this + 0x140));
  std::vector<PlantCacheData,std::allocator<PlantCacheData>>::~vector
            ((vector<PlantCacheData,std::allocator<PlantCacheData>> *)(this + 0x110));
  std::vector<PlantCacheData,std::allocator<PlantCacheData>>::~vector
            ((vector<PlantCacheData,std::allocator<PlantCacheData>> *)(this + 0xf8));
  std::vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>>::~vector
            ((vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>> *)
             (this + 0xe0));
  std::vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>>::~vector
            ((vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>> *)(this + 200)
            );
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x58));
  std::vector<ZombieCreatedCacheData,std::allocator<ZombieCreatedCacheData>>::~vector
            ((vector<ZombieCreatedCacheData,std::allocator<ZombieCreatedCacheData>> *)(this + 0x40))
  ;
  std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::~vector
            ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)(this + 0x28));
  std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::~vector
            ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* NewPVPGameSubsystem::~NewPVPGameSubsystem() */

void __thiscall NewPVPGameSubsystem::~NewPVPGameSubsystem(NewPVPGameSubsystem *this)

{
  ~NewPVPGameSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::GetZombieUpgradeInfoForLog() */

void NewPVPGameSubsystem::GetZombieUpgradeInfoForLog(void)

{
  long in_x0;
  ulong uVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar1 = FUN_034b0454(*(undefined8 *)(in_x0 + 200),*(undefined8 *)(in_x0 + 0xd0));
  if (uVar1 < 3) {
    if (uVar1 == 2) {
      std::vector<int,std::allocator<int>>::vector(avStack_20,&DAT_05751520,3,auStack_28);
    }
    else if (uVar1 == 0) {
      std::vector<int,std::allocator<int>>::vector(avStack_20,&DAT_05751530,3,auStack_28);
    }
    else {
      std::vector<int,std::allocator<int>>::vector(avStack_20,&DAT_05751590,3,auStack_28);
    }
  }
  else {
    std::vector<int,std::allocator<int>>::vector(avStack_20,&DAT_05751510,3,auStack_30);
  }
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)in_x8,(vector *)avStack_20);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::onZombieDestroyed(Zombie*) */

void __thiscall NewPVPGameSubsystem::onZombieDestroyed(NewPVPGameSubsystem *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_034d299c(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
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
    std::vector<ZombieCreatedCacheData,std::allocator<ZombieCreatedCacheData>>::erase
              ((vector<ZombieCreatedCacheData,std::allocator<ZombieCreatedCacheData>> *)this_00,
               local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::hasUpgradeUnlocked(bool, int) */

void __thiscall
NewPVPGameSubsystem::hasUpgradeUnlocked(NewPVPGameSubsystem *this,bool param_1,int param_2)

{
  vector *pvVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>> avStack_20 [24];
  long local_8;
  
  pvVar1 = (vector *)(this + 0xe0);
  if (param_1) {
    pvVar1 = (vector *)(this + 200);
  }
  local_8 = ___stack_chk_guard;
  std::vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>>::vector
            (avStack_20,pvVar1);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = FUN_034daf90(uVar3,uVar4,param_2);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::hasUpgradeTriggered(bool, int) */

void __thiscall
NewPVPGameSubsystem::hasUpgradeTriggered(NewPVPGameSubsystem *this,bool param_1,int param_2)

{
  vector *pvVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_30;
  undefined8 local_28;
  vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>> avStack_20 [24];
  long local_8;
  
  pvVar1 = (vector *)(this + 0xe0);
  if (param_1) {
    pvVar1 = (vector *)(this + 200);
  }
  local_8 = ___stack_chk_guard;
  std::vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>>::vector
            (avStack_20,pvVar1);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = FUN_034db164(uVar4,uVar5,param_2);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  uVar2 = 0;
  if (bVar3) {
    lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    uVar2 = *(undefined1 *)(lVar6 + 0xc);
  }
  std::vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::getCPUTargetRowSpawnPlant(int, bool, Sexy::RtWeakPtr<PlantType const>) */

void __thiscall
NewPVPGameSubsystem::getCPUTargetRowSpawnPlant
          (NewPVPGameSubsystem *this,undefined4 param_1,undefined1 param_2,RtWeakPtrBase *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  Zombie *pZVar8;
  undefined8 *puVar9;
  int *piVar10;
  Plant *pPVar11;
  int local_74;
  int local_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50 [3];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  iVar4 = iVar4 / 2;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  local_74 = 0;
  if (0 < iVar4) {
    uVar5 = operator|(2,1);
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
      iVar7 = iVar4 + local_74;
      iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
      Sexy::Insets::Insets((Insets *)local_60,0,iVar7 + 1,iVar6,1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50,uVar5,
                 (Insets *)local_60);
      Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_70);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_50);
      local_60[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)local_50);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)local_60), bVar2
            ) {
        puVar9 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
        if (pZVar8 == (Zombie *)0x0) {
          pPVar11 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar9);
          if (pPVar11 != (Plant *)0x0) {
            iStack_6c = iStack_6c + 1;
          }
        }
        else {
          local_70 = local_70 + 1;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      }
      puVar9 = (undefined8 *)
               std::
               map<int,NewPVPCPUCountObject,std::less<int>,std::allocator<std::pair<int_const,NewPVPCPUCountObject>>>
               ::operator[]((map<int,NewPVPCPUCountObject,std::less<int>,std::allocator<std::pair<int_const,NewPVPCPUCountObject>>>
                             *)amStack_38,&local_74);
      *puVar9 = CONCAT44(iStack_6c,local_70);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_50);
      local_74 = local_74 + 1;
    } while (local_74 < iVar4);
  }
  cVar3 = std::
          map<int,NewPVPCPUCountObject,std::less<int>,std::allocator<std::pair<int_const,NewPVPCPUCountObject>>>
          ::empty((map<int,NewPVPCPUCountObject,std::less<int>,std::allocator<std::pair<int_const,NewPVPCPUCountObject>>>
                   *)amStack_38);
  if (cVar3 == '\0') {
    iVar7 = -1;
    local_60[0] = std::
                  map<int,NewPVPCPUCountObject,std::less<int>,std::allocator<std::pair<int_const,NewPVPCPUCountObject>>>
                  ::begin((map<int,NewPVPCPUCountObject,std::less<int>,std::allocator<std::pair<int_const,NewPVPCPUCountObject>>>
                           *)amStack_38);
    iVar6 = 0;
    while( true ) {
      local_50[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)amStack_38);
      bVar2 = eastl::operator!=((rbtree_iterator *)local_60,(rbtree_iterator *)local_50);
      if (!bVar2) break;
      piVar10 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                 ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_60);
      if ((piVar10[2] == 0) && (iVar1 = piVar10[1], iVar6 < iVar1)) {
        iVar7 = *piVar10;
        *(int *)(this + 0x15c) = iVar7;
        iVar6 = iVar1;
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_60);
    }
    if (iVar7 == -1) goto LAB_034f1aa0;
  }
  else {
LAB_034f1aa0:
    uVar5 = *(undefined4 *)(this + 0x15c);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_50,param_4);
    iVar7 = findEmptyRow(this,param_1,iVar4,uVar5,param_2,(RtWeakPtr<Sexy::SoundResource> *)local_50
                        );
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    if (iVar7 == -1) goto LAB_034f1a58;
  }
  *(int *)(this + 0x15c) = iVar7;
  addCurrentRow(this);
LAB_034f1a58:
  std::
  map<int,NewPVPCPUCountObject,std::less<int>,std::allocator<std::pair<int_const,NewPVPCPUCountObject>>>
  ::~map((map<int,NewPVPCPUCountObject,std::less<int>,std::allocator<std::pair<int_const,NewPVPCPUCountObject>>>
          *)amStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::addToZombieCreatedCache(Zombie*, ZombieCacheData const&) */

void __thiscall
NewPVPGameSubsystem::addToZombieCreatedCache
          (NewPVPGameSubsystem *this,Zombie *param_1,ZombieCacheData *param_2)

{
  char cVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    Sexy::Point::Point(aPStack_18,5,iVar2);
    cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_18);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
      ProbabilitySet<Sexy::RtWeakPtr<SharkMinion>>::ProbabilityBucket::ProbabilityBucket
                ((ProbabilityBucket *)aPStack_18,aRStack_20,*(undefined4 *)(param_2 + 0xc));
      std::vector<ZombieCreatedCacheData,std::allocator<ZombieCreatedCacheData>>::push_back
                ((vector<ZombieCreatedCacheData,std::allocator<ZombieCreatedCacheData>> *)
                 (this + 0x40),(ZombieCreatedCacheData *)aPStack_18);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aPStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::checkZombieSkill(Zombie*) */

void __thiscall NewPVPGameSubsystem::checkZombieSkill(NewPVPGameSubsystem *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  Zombie *pZVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    Sexy::Point::Point(aPStack_10,5,iVar2);
    cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
    if (cVar1 != '\0') {
      if (*(float *)(this + 0x84) != 0.0) {
        puVar3 = (undefined4 *)
                 std::
                 map<NewPVPZombieSkillType,ZombieConditions,std::less<NewPVPZombieSkillType>,std::allocator<std::pair<NewPVPZombieSkillType_const,ZombieConditions>>>
                 ::operator[]((map<NewPVPZombieSkillType,ZombieConditions,std::less<NewPVPZombieSkillType>,std::allocator<std::pair<NewPVPZombieSkillType_const,ZombieConditions>>>
                               *)&DAT_06aa3a50,(NewPVPZombieSkillType *)(this + 0x80));
        pZVar4._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar4._0_4_,0,param_1,*puVar3,1);
      }
      if (cVar1 != '\0') goto LAB_034f2394;
    }
    if (*(float *)(this + 0x90) != 0.0) {
      puVar3 = (undefined4 *)
               std::
               map<NewPVPZombieSkillType,ZombieConditions,std::less<NewPVPZombieSkillType>,std::allocator<std::pair<NewPVPZombieSkillType_const,ZombieConditions>>>
               ::operator[]((map<NewPVPZombieSkillType,ZombieConditions,std::less<NewPVPZombieSkillType>,std::allocator<std::pair<NewPVPZombieSkillType_const,ZombieConditions>>>
                             *)&DAT_06aa3a50,(NewPVPZombieSkillType *)(this + 0x8c));
      pZVar4._0_4_ = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar4._0_4_,0,param_1,*puVar3,1);
    }
  }
LAB_034f2394:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::spawnZombieCheckResource(Sexy::RtWeakPtr<ZombieType const>, int, int, int,
   unsigned int) */

void __thiscall
NewPVPGameSubsystem::spawnZombieCheckResource
          (undefined8 param_1,RtMixedPtrBase *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  long lVar2;
  ZombieType *this;
  undefined8 uVar3;
  Board *pBVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_54;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if ((cVar1 == '\0') ||
     (lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2),
     *(char *)(lVar2 + 0x28) == '\0')) {
    uVar5 = 0;
  }
  else {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    this = (ZombieType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    ZombieType::AddInGameResourceRequirements(this,(set *)amStack_38);
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    uVar5 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                      ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                       amStack_38);
    uVar3 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)amStack_38);
    std::vector<std::string,std::allocator<std::string>>::
    vector<std::_Rb_tree_const_iterator<std::string>,void>
              ((vector<std::string,std::allocator<std::string>> *)local_60,uVar5,uVar3,aRStack_68);
    Board::LoadResourceGroupsForGameplay(pBVar4,(vector *)local_60);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_60);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_60);
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    local_60[0] = param_4;
    local_58 = param_5;
    local_54 = param_6;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)param_2);
    uVar5 = Board::AddZombieInRow
                      (pBVar4,aRStack_68,param_3,0xffffffff,
                       (vector<std::string,std::allocator<std::string>> *)local_60,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_60);
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::updatePlantSpawn(std::vector<PlantCacheData, std::allocator<PlantCacheData>
   >&, bool) */

void __thiscall
NewPVPGameSubsystem::updatePlantSpawn(NewPVPGameSubsystem *this,vector *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  undefined4 *puVar8;
  PlantNameMapperServerID *this_00;
  int *piVar9;
  BoardEntity *pBVar10;
  PlantType *this_01;
  long lVar11;
  Board *this_02;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_38 = (ulong)local_38._4_4_ << 0x20;
  while( true ) {
    uVar14 = *(undefined8 *)param_1;
    uVar7 = FUN_034ad9b4(uVar14,*(undefined8 *)(param_1 + 8));
    if (uVar7 <= (ulong)(long)iVar6) break;
    puVar8 = (undefined4 *)FUN_034b0488(uVar14,(long)iVar6);
    fVar16 = (float)PVZ_T();
    if ((float)puVar8[4] <= fVar16) {
      this_00 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
      PlantNameMapperServerID::GetTypeForID(this_00,puVar8[1]);
      if (!param_2) {
        iVar6 = puVar8[2];
        iVar3 = puVar8[3];
        this_02 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)&local_28,"");
        pBVar10 = (BoardEntity *)Board::GetPlantAt(this_02,iVar6,iVar3,(string *)&local_28);
        std::string::~string((string *)&local_28);
        nop();
        if (pBVar10 != (BoardEntity *)0x0) {
          this_01 = (PlantType *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
          lVar11 = PlantType::GetProps(this_01);
          if (*(int *)(lVar11 + 0xbc) != 0) {
            playRemoveEffect(this,pBVar10);
            Plant::KillPlant((Plant *)pBVar10,0,param_2,1);
          }
        }
      }
      uVar1 = puVar8[3];
      uVar2 = puVar8[2];
      uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
                    /* WARNING: Load size is inaccurate */
      Board::AddPlant(*(Board **)(puVar8 + 6),uVar14,uVar2,uVar1,
                      (RtWeakPtr<Sexy::SoundResource> *)&local_28,1,1,*puVar8,0,1,1,0,1,puVar8[5],0)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      cVar5 = NewPVPUtils::IsPlayingNewPVPTutorial();
      if ((((cVar5 != '\0') && (iVar6 = NewPVPUtils::GetTutorialStep(), iVar6 == 3)) &&
          (puVar8[2] == 1)) && (puVar8[3] == 1)) {
        NewPVPUtils::TrySetTutorialStep(4);
      }
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)&local_20,(int *)&local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    }
    iVar6 = (int)local_38 + 1;
    local_38 = CONCAT44(local_38._4_4_,iVar6);
  }
  iVar6 = FUN_034ad994(local_20,local_18);
  uVar4 = iVar6 - 1;
  if (-1 < (int)uVar4) {
    lVar12 = (long)(int)uVar4 + -1;
    lVar11 = lVar12;
    lVar15 = (long)(int)uVar4;
    while( true ) {
      lVar13 = lVar11;
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)param_1);
      piVar9 = (int *)FUN_034ad9ac(local_20,lVar15);
      local_30 = __gnu_cxx::
                 __normal_iterator<Curve<Sexy::Point>*,std::vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>>>
                 ::operator+((__normal_iterator<Curve<Sexy::Point>*,std::vector<Curve<Sexy::Point>,std::allocator<Curve<Sexy::Point>>>>
                              *)&local_38,(long)*piVar9);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_28,(__normal_iterator *)&local_30);
      std::vector<PlantCacheData,std::allocator<PlantCacheData>>::erase
                ((vector<PlantCacheData,std::allocator<PlantCacheData>> *)param_1,local_28);
      if (lVar13 == lVar12 - (ulong)uVar4) break;
      lVar11 = lVar13 + -1;
      lVar15 = lVar13;
    }
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::updatePlants() */

void __thiscall NewPVPGameSubsystem::updatePlants(NewPVPGameSubsystem *this)

{
  char cVar1;
  
  cVar1 = std::vector<PlantCacheData,std::allocator<PlantCacheData>>::empty
                    ((vector<PlantCacheData,std::allocator<PlantCacheData>> *)(this + 0xf8));
  if (cVar1 == '\0') {
    updatePlantSpawn(this,(vector *)(this + 0xf8),true);
  }
  cVar1 = std::vector<PlantCacheData,std::allocator<PlantCacheData>>::empty
                    ((vector<PlantCacheData,std::allocator<PlantCacheData>> *)(this + 0x110));
  if (cVar1 != '\0') {
    return;
  }
  updatePlantSpawn(this,(vector *)(this + 0x110),false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::checkZombieUpgrade(int) */

void NewPVPGameSubsystem::checkZombieUpgrade(int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  Sexy::Point::Point((Point *)&local_10,5,in_w1);
  cVar2 = NewPVPUtils::IsOppoentRegion((Point *)&local_10);
  if (cVar2 == '\0') {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)((ulong)(uint)param_1 + 0xe0);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if ((char)piVar4[3] != '\0') {
        local_1c = *piVar4;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)in_x8,&local_1c);
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
    }
  }
  else {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)((ulong)(uint)param_1 + 200);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if ((char)piVar4[3] != '\0') {
        local_1c = *piVar4;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)in_x8,&local_1c);
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::GetNewPVPPropertySheet() */

void NewPVPGameSubsystem::GetNewPVPPropertySheet(void)

{
  AndroidHttpTransaction *this;
  
  this = (AndroidHttpTransaction *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  Sexy::AndroidHttpTransaction::GetUserData(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::onGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
NewPVPGameSubsystem::onGatherPlantingRestrictions
          (NewPVPGameSubsystem *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  vector *pvVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  NewPVPMgr *pNVar9;
  long lVar10;
  undefined8 local_30;
  undefined8 local_28;
  vector<PlantCacheData,std::allocator<PlantCacheData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_28,*(int *)param_1,*(int *)(param_1 + 4));
  cVar2 = NewPVPUtils::IsOppoentRegion((Point *)&local_28);
  pvVar1 = (vector *)(this + 0xf8);
  if (cVar2 != '\0') {
    pvVar1 = (vector *)(this + 0x110);
  }
  std::vector<PlantCacheData,std::allocator<PlantCacheData>>::vector(avStack_20,pvVar1);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  Sexy::Point::Point((Point *)&local_28,(TPoint *)param_1);
  local_30 = FUN_034e70b0(uVar7,uVar8,(Point *)&local_28);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar3) {
    local_28 = CONCAT44(local_28._4_4_,0x4d);
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_28);
  }
  else {
    iVar4 = getPlantCount();
    iVar5 = FUN_034ada00((vector *)(this + 0xf8));
    pNVar9 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar6 = NewPVPMgr::GetCurrentMaxPlantNum(pNVar9);
    if ((((iVar6 <= iVar5 + iVar4) && (param_2 != (PlantType *)0x0)) &&
        (lVar10 = PlantType::GetProps(param_2), lVar10 != 0)) &&
       (lVar10 = PlantType::GetProps(param_2), *(int *)(lVar10 + 0xbc) != 0)) {
      pNVar9 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      cVar2 = NewPVPMgr::IsSunUpgradeFull(pNVar9);
      if (cVar2 == '\0') {
        local_28 = CONCAT44(local_28._4_4_,0x53);
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)&local_28);
      }
      else {
        local_28 = CONCAT44(local_28._4_4_,0x56);
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                   (PlantingReason *)&local_28);
      }
    }
  }
  std::vector<PlantCacheData,std::allocator<PlantCacheData>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::addTutorialPlant(int) */

void __thiscall NewPVPGameSubsystem::addTutorialPlant(NewPVPGameSubsystem *this,int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  NewPVPMgr *this_00;
  vector *pvVar4;
  int *piVar5;
  PlantNameMapperServerID *this_01;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  vector<NewPVPTutorialPlantInfo,std::allocator<NewPVPTutorialPlantInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar4 = (vector *)NewPVPMgr::GetTutorialPlantInfo(this_00);
  std::vector<NewPVPTutorialPlantInfo,std::allocator<NewPVPTutorialPlantInfo>>::vector
            (avStack_20,pvVar4);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3) {
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if (piVar5[4] == param_1) {
      this_01 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
      PlantNameMapperServerID::GetTypeForID(this_01,*piVar5);
      iVar1 = piVar5[1];
      iVar2 = piVar5[2];
      uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
      Board::AddPlant((Board *)0x0,uVar6,iVar1,iVar2,aRStack_28,1,1,1,0,1,1,0,1,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&local_40);
  }
  std::vector<NewPVPTutorialPlantInfo,std::allocator<NewPVPTutorialPlantInfo>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::fillCPU(int, int) */

void __thiscall NewPVPGameSubsystem::fillCPU(NewPVPGameSubsystem *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  NewPVPMgr *this_00;
  vector *pvVar3;
  int *piVar4;
  undefined8 local_48;
  undefined8 local_40;
  NewPVPCurrentCPUPlant aNStack_38 [24];
  vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar3 = (vector *)NewPVPMgr::GetCPUInfo(this_00,param_1);
  std::vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>>::vector(avStack_20,pvVar3);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    if ((piVar4[1] <= param_2) && (cVar2 = hasCPUPlant(this,*piVar4), cVar2 == '\0')) {
      NewPVPCurrentCPUPlant::NewPVPCurrentCPUPlant
                (aNStack_38,*piVar4,piVar4[2],0.0,piVar4[3],SUB41(piVar4[4],0));
      std::vector<NewPVPCurrentCPUPlant,std::allocator<NewPVPCurrentCPUPlant>>::push_back
                ((vector<NewPVPCurrentCPUPlant,std::allocator<NewPVPCurrentCPUPlant>> *)
                 (this + 0x140),aNStack_38);
    }
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&local_48);
  }
  std::vector<NewPVPCPULevelInfo,std::allocator<NewPVPCPULevelInfo>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::onWaveStarted(int) */

void __thiscall NewPVPGameSubsystem::onWaveStarted(NewPVPGameSubsystem *this,int param_1)

{
  long lVar1;
  
  *(int *)(this + 0xa0) = param_1;
  lVar1 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  FUN_034ad8fc(lVar1 + 0x4c8,*(undefined4 *)(this + 0xa0));
  if (-1 < *(int *)(this + 0x158)) {
    fillCPU(this,*(int *)(this + 0x158),param_1);
    return;
  }
  return;
}


/* NewPVPGameSubsystem::GetCurrentSunAdd() */

ulong __thiscall NewPVPGameSubsystem::GetCurrentSunAdd(NewPVPGameSubsystem *this)

{
  char cVar1;
  NewPVPMgr *this_00;
  ulong uVar2;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (cVar1 == '\0') {
    return (ulong)*(uint *)(this + 0x98);
  }
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar2 = NewPVPMgr::GetTutorialSunAdd(this_00);
  return uVar2;
}


/* NewPVPGameSubsystem::updateSun() */

void __thiscall NewPVPGameSubsystem::updateSun(NewPVPGameSubsystem *this)

{
  int iVar1;
  NewPVPMgr *this_00;
  Board *this_01;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)PVZ_T();
  fVar4 = *(float *)(this + 0xa8);
  if (fVar4 <= fVar2) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    if (this_01 != (Board *)0x0) {
      iVar1 = GetCurrentSunAdd(this);
      Board::AddSunMoney(this_01,iVar1);
      fVar4 = *(float *)(this + 0xa8);
      *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
    }
    fVar2 = (float)PVZ_T();
    this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    fVar3 = (float)NewPVPMgr::GetSunAddCD(this_00,*(int *)(this + 0x9c));
    *(float *)(this + 0xa8) = fVar3 + fVar2;
    if (fVar3 + fVar2 != fVar4) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::initHp() */

void __thiscall NewPVPGameSubsystem::initHp(NewPVPGameSubsystem *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = (bool)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  fVar2 = (float)NewPVPMgr::GetMaxHealthAmount(bVar1);
  bVar1 = (bool)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  fVar3 = (float)NewPVPMgr::GetDamageDealt(bVar1);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar2,fVar2,fVar3);
  *(undefined8 *)(this + 0xb0) = local_18;
  *(undefined4 *)(this + 0xb8) = local_10;
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar2,fVar2,fVar3);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0xbc) = local_18;
  *(undefined4 *)(this + 0xc4) = local_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::killPlant(bool, int, int, int, int) */

void NewPVPGameSubsystem::killPlant(bool param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  NewPVPMgr *this;
  Plant *pPVar2;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 & 0xffU) == 0) {
    this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    cVar1 = NewPVPMgr::IsUnsyncDyingPlant(this,param_5);
    if (cVar1 == '\0') {
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"");
      pPVar2 = (Plant *)Board::GetPlantAt(this_00,param_3,param_4,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (pPVar2 != (Plant *)0x0) {
        Plant::KillPlant(pPVar2,0,0,1);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::upgradePlant(bool, int, int) */

void __thiscall
NewPVPGameSubsystem::upgradePlant(NewPVPGameSubsystem *this,bool param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BoardEntity *this_00;
  NewPVPMgr *pNVar4;
  PlantNameMapperServerID *pPVar5;
  Board *pBVar6;
  undefined8 uVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  this_00 = (BoardEntity *)Board::GetPlantAt(pBVar6,param_2,param_3,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (BoardEntity *)0x0) {
    iVar1 = FUN_034ad7bc(*(undefined4 *)(this_00 + 0x50));
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar2 = NewPVPMgr::GetPlantLevelUpValue(pNVar4);
    iVar3 = FUN_034ad7c4(*(undefined4 *)(this_00 + 0x1ec));
    if (iVar1 + iVar2 <= iVar3) {
      uVar7 = 1;
      BoardEntity::LevelUp(this_00,iVar1 + iVar2);
      if (param_1) {
        pPVar5 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
        Plant::GetType();
        iVar1 = PlantNameMapperServerID::GetIdForType(pPVar5,asStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        iVar2 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        iVar1 = NewPVPMgr::GetPlantCost(iVar2,iVar1);
        pBVar6 = *(Board **)(gLawnApp + 0x9f0);
        pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        iVar1 = NewPVPMgr::GetSafeCost(pNVar4,iVar1);
        Board::TakeSunMoney(pBVar6,iVar1,true,false);
      }
      goto LAB_034fb960;
    }
  }
  uVar7 = 0;
LAB_034fb960:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* NewPVPGameSubsystem::CalcSunCostMultiplier() */

float __thiscall NewPVPGameSubsystem::CalcSunCostMultiplier(NewPVPGameSubsystem *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  NewPVPMgr *this_00;
  float fVar4;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 200));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 200));
  lVar3 = thunk_FUN_034c9184(uVar1,uVar2);
  fVar4 = 1.0;
  if (lVar3 != 0) {
    this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    fVar4 = (float)NewPVPMgr::GetSunCostMultiplier(this_00);
    fVar4 = fVar4 * (float)lVar3;
  }
  return fVar4;
}


/* NewPVPGameSubsystem::triggerZombieSkill(bool, int) */

void __thiscall
NewPVPGameSubsystem::triggerZombieSkill(NewPVPGameSubsystem *this,bool param_1,int param_2)

{
  undefined4 uVar1;
  NewPVPMgr *this_00;
  long lVar2;
  float fVar3;
  float fVar4;
  
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar2 = NewPVPMgr::GetZombieSkillInfo(this_00,param_2);
  fVar4 = *(float *)(lVar2 + 4);
  uVar1 = *(undefined4 *)(lVar2 + 8);
  if (!param_1) {
    *(int *)(this + 0x8c) = param_2;
    fVar3 = (float)PVZ_T();
    *(undefined4 *)(this + 0x94) = uVar1;
    *(float *)(this + 0x90) = fVar3 + fVar4;
    return;
  }
  *(int *)(this + 0x80) = param_2;
  fVar3 = (float)PVZ_T();
  *(undefined4 *)(this + 0x88) = uVar1;
  *(float *)(this + 0x84) = fVar3 + fVar4;
  return;
}


/* NewPVPGameSubsystem::CanAddZombie(int, int) */

undefined4 __thiscall
NewPVPGameSubsystem::CanAddZombie(NewPVPGameSubsystem *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  NewPVPMgr *pNVar4;
  float fVar5;
  
  pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar1 = NewPVPMgr::GetCurrentZombiePacketLevel(pNVar4,param_1);
  pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar2 = NewPVPMgr::GetZombieCost(pNVar4,param_1,param_2);
  iVar1 = NewPVPUtils::ApplyOverride_ZombieCost(param_1,iVar1,iVar2);
  fVar5 = (float)CalcSunCostMultiplier(this);
  iVar2 = GetCurrentSun();
  uVar3 = 1;
  if ((float)iVar1 * fVar5 <= (float)iVar2) {
    iVar1 = GetCurrentZombieCacheSize(this);
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar2 = NewPVPMgr::GetMaxZombieCacheSize(pNVar4);
    uVar3 = 0;
    if (iVar2 <= iVar1) {
      uVar3 = 4;
    }
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::playAddPlantEffect(Sexy::Point) */

void __thiscall NewPVPGameSubsystem::playAddPlantEffect(undefined8 param_1,BoardTransforms *param_2)

{
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  NewPVPMgr *this_00;
  Point *extraout_x1;
  int local_28;
  int local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::SetCentered(this,true);
  std::string::string(asStack_20,"POPANIM_EFFECTS_NEW_PVP_PLANT_EFFECT");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  Effect_PopAnim::SetCentered(this,true);
  BoardTransforms::GridToBoardSpaceRect(param_2,extraout_x1);
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_28,(TPoint *)asStack_20);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_28 + 5.0,(float)local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  FUN_034ad7a8(this + 0x1c,900000);
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  std::string::string((string *)aRStack_18,"Play_Plant_Imitater_Attack");
  NewPVPMgr::PlayPositionalSound(this_00,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::addPlant(bool, int, int, Sexy::Point, float, unsigned int, float) */

void __thiscall
NewPVPGameSubsystem::addPlant
          (PlantCacheData *param_1_00,undefined8 param_2_00,NewPVPGameSubsystem *this,char param_1,
          int param_2,int param_3,TPoint *param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ToxicWaterPerfumeBottleProjectile *this_00;
  Point aPStack_30 [8];
  PlantCacheData aPStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == '\0') {
    Sexy::Point::Point(aPStack_30,param_7);
    PlantCacheData::PlantCacheData
              (param_1_00,param_2_00,aPStack_28,param_2,param_3,aPStack_30,param_8);
    std::vector<PlantCacheData,std::allocator<PlantCacheData>>::push_back
              ((vector<PlantCacheData,std::allocator<PlantCacheData>> *)(this + 0x110),aPStack_28);
  }
  else {
    iVar2 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    cVar1 = NewPVPMgr::IsValidPlant(iVar2,param_2);
    if (cVar1 != '\0') {
      Sexy::Point::Point(aPStack_30,param_7);
      PlantCacheData::PlantCacheData
                (param_1_00,param_2_00,(Point *)aPStack_28,param_2,param_3,aPStack_30,param_8);
      std::vector<PlantCacheData,std::allocator<PlantCacheData>>::push_back
                ((vector<PlantCacheData,std::allocator<PlantCacheData>> *)(this + 0xf8),aPStack_28);
      lVar4 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      FUN_034ad908(lVar4 + 0x4e8);
      Sexy::Point::Point((Point *)aPStack_28,param_7);
      playAddPlantEffect(this,(Point *)aPStack_28);
      std::string::string((string *)aPStack_28,"UIChallengePlantSurviveNewPVP");
      UIWidget::GetWidgetBySheetName((string *)aPStack_28);
      nop();
      iVar2 = getPlantCount();
      iVar3 = FUN_034ada00((vector<PlantCacheData,std::allocator<PlantCacheData>> *)(this + 0xf8));
      ToxicWaterPerfumeBottleProjectile::SetType(this_00,iVar2 + iVar3);
      std::string::~string((string *)aPStack_28);
      nop();
      MessageRouter::Post<int,int,int,int>
                ((MessageRouter *)gMessageRouter,Message::NewPVPAddPlant,param_2,param_3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::addZombie(bool, int, int, int, int, unsigned int) */

void __thiscall
NewPVPGameSubsystem::addZombie
          (NewPVPGameSubsystem *this,bool param_1,int param_2,int param_3,int param_4,int param_5,
          uint param_6)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  NewPVPMgr *pNVar4;
  long lVar5;
  Board *this_00;
  float fVar6;
  vector avStack_68 [24];
  vector<int,std::allocator<int>> avStack_50 [24];
  HeroPlantSaveInfo aHStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    cVar2 = NewPVPMgr::IsValidZombie(pNVar4,param_2,param_3);
    if (cVar2 == '\0') goto LAB_034fc080;
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar3 = NewPVPMgr::GetZombieCost(pNVar4,param_2,param_3);
    iVar3 = NewPVPUtils::ApplyOverride_ZombieCost(param_2,param_5,iVar3);
    fVar6 = (float)CalcSunCostMultiplier(this);
    checkZombieUpgrade((int)this);
    std::vector<int,std::allocator<int>>::vector(avStack_50,avStack_68);
    ZombieCacheData::ZombieCacheData
              ((ZombieCacheData *)aHStack_38,param_2,param_3,param_4,(int)((float)iVar3 * fVar6),
               avStack_50,param_5,param_6);
    std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::push_back
              ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)(this + 0x10),
               (ZombieCacheData *)aHStack_38);
    HeroPlantSaveInfo::~HeroPlantSaveInfo(aHStack_38);
    std::vector<int,std::allocator<int>>::~vector(avStack_50);
    lVar5 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    FUN_034ad918(lVar5 + 0x4ec);
    puVar1 = gMessageRouter;
    std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::vector
              ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)aHStack_38,
               (vector *)(this + 0x10));
    MessageRouter::
    Post<std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>const&,std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>>
              ((MessageRouter *)puVar1,Message::NotifyZombieCacheDatasChanged,aHStack_38);
    std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::~vector
              ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)aHStack_38);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar3 = NewPVPMgr::GetSafeCost(pNVar4,(int)((float)iVar3 * fVar6));
    Board::TakeSunMoney(this_00,iVar3,true,false);
  }
  else {
    checkZombieUpgrade((int)this);
    std::vector<int,std::allocator<int>>::vector(avStack_50,avStack_68);
    ZombieCacheData::ZombieCacheData
              ((ZombieCacheData *)aHStack_38,param_2,param_3,param_4,0,avStack_50,param_5,param_6);
    std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::push_back
              ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)(this + 0x28),
               (ZombieCacheData *)aHStack_38);
    HeroPlantSaveInfo::~HeroPlantSaveInfo(aHStack_38);
    std::vector<int,std::allocator<int>>::~vector(avStack_50);
    cVar2 = NewPVPUtils::IsPlayingNewPVPTutorial();
    if ((cVar2 != '\0') && (this[0x199] != (NewPVPGameSubsystem)0x0)) {
      this[0x199] = (NewPVPGameSubsystem)0x0;
    }
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_68);
LAB_034fc080:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::triggerUpgradeEffect(int, Zombie*) */

void __thiscall
NewPVPGameSubsystem::triggerUpgradeEffect(NewPVPGameSubsystem *this,int param_1,Zombie *param_2)

{
  NewPVPMgr *this_00;
  long lVar1;
  undefined8 uVar2;
  ZombieConditionTracker *pZVar4;
  Zombie *pZVar3;
  
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar1 = NewPVPMgr::GetZombieUpgradeInfo(this_00,param_1);
                    /* WARNING: Load size is inaccurate */
  pZVar4._0_4_ = *(ZombieConditionTracker **)(lVar1 + 8);
  switch(param_1) {
  case 0:
    uVar2 = Zombie::GetConditionTracker(param_2);
    ZombieConditionTracker::SetAdditionalValue(pZVar4._0_4_,uVar2,0x78);
    pZVar3 = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar3,0,param_2,0x78,1);
    return;
  case 1:
    uVar2 = Zombie::GetConditionTracker(param_2);
    ZombieConditionTracker::SetAdditionalValue(pZVar4._0_4_,uVar2,0x79);
    pZVar3 = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar3,0,param_2,0x79,1);
    return;
  case 2:
    pZVar3 = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar3,0,param_2,0x7a,1);
    return;
  case 3:
    pZVar3 = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar3,0,param_2,100,1);
    return;
  case 4:
    Zombie::InvokeInvisible(param_2,true,true,false);
    return;
  default:
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::checkZombieUpgrade(Zombie*) */

void __thiscall NewPVPGameSubsystem::checkZombieUpgrade(NewPVPGameSubsystem *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
    Sexy::Point::Point((Point *)&local_10,5,iVar3);
    cVar1 = NewPVPUtils::IsOppoentRegion((Point *)&local_10);
    if (cVar1 == '\0') {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0xe0));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0xe0));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if ((char)piVar4[3] != '\0') {
          triggerUpgradeEffect(this,*piVar4,param_1);
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
      }
    }
    else {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 200));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 200));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        if ((char)piVar4[3] != '\0') {
          triggerUpgradeEffect(this,*piVar4,param_1);
        }
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::checkZombieUpgrade() */

void __thiscall NewPVPGameSubsystem::checkZombieUpgrade(NewPVPGameSubsystem *this)

{
  bool bVar1;
  char cVar2;
  NewPVPMgr *this_00;
  vector *pvVar3;
  int *piVar4;
  undefined8 local_40;
  undefined8 local_38;
  NewPVPZombieUpgradeData aNStack_30 [16];
  vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar3 = (vector *)NewPVPMgr::GetZombieUpgradeInfos(this_00);
  std::vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>>::vector
            (avStack_20,pvVar3);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if (piVar4[3] <= *(int *)(this + 0xa0)) {
      cVar2 = hasUpgradeUnlocked(this,true,*piVar4);
      if (cVar2 == '\0') {
                    /* WARNING: Load size is inaccurate */
        NewPVPZombieUpgradeData::NewPVPZombieUpgradeData
                  (*(NewPVPZombieUpgradeData **)(piVar4 + 2),aNStack_30,*piVar4,piVar4[1]);
        std::vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>>::push_back
                  ((vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>> *)
                   (this + 200),aNStack_30);
        MessageRouter::Post<int,int>
                  ((MessageRouter *)gMessageRouter,Message::NotifyZombieUpgradeUnlocked,*piVar4);
      }
      cVar2 = hasUpgradeUnlocked(this,false,*piVar4);
      if (cVar2 == '\0') {
                    /* WARNING: Load size is inaccurate */
        NewPVPZombieUpgradeData::NewPVPZombieUpgradeData
                  (*(NewPVPZombieUpgradeData **)(piVar4 + 2),aNStack_30,*piVar4,piVar4[1]);
        std::vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>>::push_back
                  ((vector<NewPVPZombieUpgradeData,std::allocator<NewPVPZombieUpgradeData>> *)
                   (this + 0xe0),aNStack_30);
      }
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  std::vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::updateTurns() */

void __thiscall NewPVPGameSubsystem::updateTurns(NewPVPGameSubsystem *this)

{
  char cVar1;
  int iVar2;
  UIWidget *this_00;
  UINewPVPZombieUpgradeSkillBank *this_01;
  NewPVPSeedBank *this_02;
  Board *pBVar3;
  TPoint aTStack_38 [8];
  int local_30;
  int local_2c;
  TPoint<int> aTStack_28 [8];
  TPoint aTStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xa4) < *(int *)(this + 0xa0)) {
    *(int *)(this + 0xa4) = *(int *)(this + 0xa0);
    checkZombieUpgrade(this);
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::NotifyTurnChanged,*(int *)(this + 0xa0));
    iVar2 = *(int *)(this + 0xa0);
    if (iVar2 == 0) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
      if ((cVar1 != '\0') && (this[0x198] == (NewPVPGameSubsystem)0x0)) {
        this[0x198] = (NewPVPGameSubsystem)0x1;
      }
    }
    else if (iVar2 == 1) {
      cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
      if ((cVar1 != '\0') && (iVar2 = NewPVPUtils::GetTutorialStep(), iVar2 == 6)) {
        std::string::string(asStack_18,"UINewPVPSeedBank");
        UIWidget::GetWidgetBySheetName(asStack_18);
        nop();
        std::string::~string(asStack_18);
        nop();
        NewPVPSeedBank::ShowZombieBank(this_02,true);
        addTutorialPlant(this,1);
        NewPVPUtils::TrySetTutorialStep(7);
      }
    }
    else if (((iVar2 == 2) && (cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial(), cVar1 != '\0')) &&
            (iVar2 = NewPVPUtils::GetTutorialStep(), iVar2 == 9)) {
      std::string::string(asStack_18,"UINewPVPZombieUpgradeSkillBank");
      this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
      UIWidget::SetVisible(this_00,true);
      std::string::~string(asStack_18);
      nop();
      Board::GetBoardBaseOffset();
      std::string::string(asStack_18,"UINewPVPZombieUpgradeSkillBank");
      UIWidget::GetWidgetBySheetName(asStack_18);
      nop();
      std::string::~string(asStack_18);
      nop();
      UINewPVPZombieUpgradeSkillBank::GetButton(this_01,0);
      UIWidget::GetDrawRect();
      Sexy::TRect<int>::GetCenter();
      Sexy::TPoint<int>::operator-(aTStack_28,aTStack_38);
      Sexy::Point::Point((Point *)&local_30,aTStack_20);
      Board::TranslateScreenPositionToBoardPosition
                (*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
      showTutorialArrow(this,2,local_30,local_2c);
      addTutorialPlant(this,2);
      pBVar3 = *(Board **)(gLawnApp + 0x9f0);
      FUN_05478178(aTStack_20,L"[NEW_PVP_TUTORIAL_STEP_10]",aTStack_28);
      Board::DisplayAdvice(pBVar3,aTStack_20,8,2);
      FUN_05476c50(aTStack_20);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::updateUpgrade(int, std::vector<NewPVPZombieUpgradeData,
   std::allocator<NewPVPZombieUpgradeData> >&) */

void __thiscall
NewPVPGameSubsystem::updateUpgrade(NewPVPGameSubsystem *this,int param_1,vector *param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  NewPVPMgr *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_2);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_2);
  local_18 = FUN_034db338(uVar3,uVar4,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_2);
  cVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((bool)cVar2) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *(byte *)(lVar5 + 0xc) = *(byte *)(lVar5 + 0xc) ^ 1;
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = *(char *)(lVar5 + 0xc);
    if (cVar1 != '\0') {
      this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      NewPVPMgr::AddZombieUpgradeTriggerCount(this_00);
      cVar2 = cVar1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* NewPVPGameSubsystem::triggerUpgrade(bool, int) */

ulong __thiscall
NewPVPGameSubsystem::triggerUpgrade(NewPVPGameSubsystem *this,bool param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  
  cVar2 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (((cVar2 != '\0') && (iVar4 = NewPVPUtils::GetTutorialStep(), iVar4 == 9)) && (param_2 == 0)) {
    NewPVPUtils::TrySetTutorialStep(10);
  }
  if (param_1) {
    bVar3 = updateUpgrade(this,param_2,(vector *)(this + 200));
    puVar1 = gMessageRouter;
    if (bVar3 != 0) {
      fVar6 = (float)CalcSunCostMultiplier(this);
      MessageRouter::Post<float,float>((_func_void_float *)puVar1,fVar6);
    }
    return (ulong)bVar3;
  }
  uVar5 = updateUpgrade(this,param_2,(vector *)(this + 0xe0));
  return uVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::TriggerEvent(TriggerEventType, bool, int, int, int, int, float, unsigned
   int, std::vector<float, std::allocator<float> > const&) */

void __thiscall
NewPVPGameSubsystem::TriggerEvent
          (NewPVPDataSubsystem *param_1,NewPVPGameSubsystem *this,int param_3,bool param_4,
          uint param_5,int param_6,int param_7,int param_8,uint param_9,
          vector<float,std::allocator<float>> *param_10)

{
  char cVar1;
  int iVar2;
  NewPVPDataSubsystem *pNVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float fVar6;
  undefined4 extraout_s0;
  float fVar7;
  undefined4 uVar8;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 1) {
    cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
    if ((cVar1 != '\0') &&
       ((iVar2 = NewPVPUtils::GetTutorialStep(), iVar2 == 4 ||
        (iVar2 = NewPVPUtils::GetTutorialStep(), iVar2 == 5)))) {
      this[0x199] = (NewPVPGameSubsystem)0x1;
    }
    pNVar3 = Board::GetGameSubSystem<NewPVPDataSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    NewPVPDataSubsystem::AddEvent
              (param_1._0_4_,pNVar3,1,param_5,param_6,param_7,param_8,param_9,param_10);
    goto LAB_034fcaf8;
  }
  NewPVPUtils::GetGridBySrcGrid
            ((NewPVPUtils *)(ulong)param_5,param_7,param_8,(uint)param_4,SUB41(param_6,0));
  switch(param_5) {
  case 0:
    Sexy::Point::Point(aPStack_10,(TPoint *)&local_18);
    fVar6 = (float)PVZ_T();
    if (param_4 == false) {
      fVar7 = *(float *)(this + 300);
    }
    else {
      fVar7 = *(float *)(this + 0x128);
    }
    cVar1 = std::vector<float,std::allocator<float>>::empty(param_10);
    uVar8 = 0;
    if (cVar1 == '\0') {
      puVar4 = (undefined4 *)FUN_034b2680(extraout_s0,0,*(undefined8 *)param_10);
      uVar8 = *puVar4;
    }
    addPlant((NewPVPGameSubsystem *)(fVar7 + fVar6),uVar8,this,param_4,param_6,
             (int)(float)param_1._0_4_,aPStack_10,param_9);
    break;
  case 1:
    cVar1 = upgradePlant(this,param_4,local_18,local_14);
    goto joined_r0x034fcbe8;
  case 2:
    cVar1 = removePlant(this,local_18,local_14);
    goto joined_r0x034fcbe8;
  case 3:
    killPlant(SUB81(this,0),(uint)param_4,local_18,local_14,param_6);
    break;
  case 4:
    cVar1 = std::vector<float,std::allocator<float>>::empty(param_10);
    iVar2 = 1;
    if (cVar1 == '\0') {
      pfVar5 = (float *)FUN_034b2680(*(undefined8 *)param_10);
      iVar2 = (int)*pfVar5;
    }
    addZombie(this,param_4,param_6,(int)(float)param_1._0_4_,local_14,iVar2,param_9);
    break;
  case 5:
    cVar1 = triggerUpgrade(this,param_4,param_6);
    goto joined_r0x034fcbe8;
  case 6:
    triggerZombieSkill(this,param_4,param_6);
    break;
  case 7:
    cVar1 = applyPlantfood(this,local_18,local_14);
joined_r0x034fcbe8:
    if (cVar1 == '\0') goto LAB_034fcaf8;
    break;
  case 8:
    triggerSurrender(this,param_4);
    break;
  case 9:
    triggerFPSCheck();
    break;
  case 10:
    takeDamage(this,param_4);
    goto LAB_034fcaf8;
  }
  if (param_4 != false) {
    pNVar3 = Board::GetGameSubSystem<NewPVPDataSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    NewPVPDataSubsystem::AddEvent
              (param_1._0_4_,pNVar3,param_3,param_5,param_6,param_7,param_8,param_9,param_10);
  }
LAB_034fcaf8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::updateCPUPlant(NewPVPCurrentCPUPlant&) */

void NewPVPGameSubsystem::updateCPUPlant(NewPVPCurrentCPUPlant *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PlantNameMapperServerID *this;
  PlantType *pPVar4;
  int *in_x1;
  undefined1 in_w4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30;
  int local_2c;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  if ((float)in_x1[2] <= fVar5) {
    this = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
    PlantNameMapperServerID::GetTypeForID(this,*in_x1);
    iVar1 = in_x1[1];
    iVar2 = in_x1[4];
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_38);
    iVar2 = getCPUTargetRowSpawnPlant((NewPVPGameSubsystem *)param_1,iVar1,(char)iVar2,aRStack_20);
    Sexy::Point::Point((Point *)&local_30,iVar1,iVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (local_2c == -1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    else {
      fVar5 = (float)PVZ_T();
      pPVar4 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      fVar6 = (float)PlantType::GetPacketCoolDown(pPVar4,0xfffffffe);
      in_x1[2] = (int)(fVar6 + fVar5);
      NewPVPUtils::GetGridBySrcGrid((NewPVPUtils *)0x0,local_30,local_2c,0,(bool)in_w4);
      iVar1 = in_x1[3];
      iVar2 = *in_x1;
      uVar3 = CalcRandomSeed(1);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
      TriggerEvent((NewPVPGameSubsystem *)(float)iVar1,param_1,1,1,0,iVar2,local_30,local_2c,uVar3,
                   aRStack_20);
      std::vector<float,std::allocator<float>>::~vector
                ((vector<float,std::allocator<float>> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::updateCPU() */

void __thiscall NewPVPGameSubsystem::updateCPU(NewPVPGameSubsystem *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (-1 < *(int *)(this + 0x158)) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x140));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x140));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      updateCPUPlant((NewPVPCurrentCPUPlant *)this);
      __gnu_cxx::
      __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
      ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                    *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::addTutorialZombie() */

void __thiscall NewPVPGameSubsystem::addTutorialZombie(NewPVPGameSubsystem *this)

{
  int iVar1;
  int iVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = 0;
  do {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    iVar1 = iVar2 + 1;
    TriggerEvent((NewPVPGameSubsystem *)0x3f800000,this,1,1,4,0x61a81,0xffffffff,iVar2,0,avStack_20)
    ;
    std::vector<float,std::allocator<float>>::~vector
              ((vector<float,std::allocator<float>> *)avStack_20);
    iVar2 = iVar1;
  } while (iVar1 != 3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::updateTutorial() */

void __thiscall NewPVPGameSubsystem::updateTutorial(NewPVPGameSubsystem *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
  *this_00;
  Zombie *pZVar7;
  WaveManager *this_01;
  CrazyNPCManager *pCVar8;
  undefined8 *puVar9;
  Plant *pPVar10;
  float fVar11;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (cVar1 == '\0') goto LAB_034fd250;
  TutorialFinger::Update((TutorialFinger *)(this + 0x160));
  updateTutorialArrow(this);
  lVar6 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (lVar6 != 0) {
    this_00 = (BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
               *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = Sexy::
            BaseRenderDevice<Sexy::AndroidGL20Vertex,Sexy::GLTexHolder,Sexy::GLExtraRenderDataInfo,Sexy::AndroidRenderDeviceES20>
            ::SceneBegun(this_00);
    if (cVar1 != '\0') goto LAB_034fd2c0;
    this_01 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    WaveManager::SetPause(this_01,true);
    if (this[0x198] != (NewPVPGameSubsystem)0x0) goto LAB_034fd3f0;
    goto LAB_034fd2c8;
  }
LAB_034fd2c0:
  if (this[0x198] == (NewPVPGameSubsystem)0x0) goto LAB_034fd2c8;
LAB_034fd3f0:
  uVar5 = NewPVPUtils::GetTutorialStep();
  switch(uVar5) {
  case 1:
    NewPVPUtils::TrySetTutorialStep(2);
    this[0x198] = (NewPVPGameSubsystem)0x0;
    break;
  case 2:
    NewPVPUtils::TrySetTutorialStep(3);
    this[0x198] = (NewPVPGameSubsystem)0x0;
    break;
  default:
    goto switchD_034fd414_caseD_3;
  case 6:
    iVar3 = 1;
    goto LAB_034fd41c;
  case 7:
    Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
    pCVar8 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)&local_60,"NEW_PVP_SECOND_TURN_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnNarrativeTutorialStartCompleted);
    Sexy::Delegate0::Delegate0<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)()>
              (aDStack_38,avStack_50);
    std::string::string((string *)&local_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar8,(string *)&local_60,aDStack_38,(string *)&local_58);
    std::string::~string((string *)&local_58);
    nop();
    std::string::~string((string *)&local_60);
    nop();
    this[0x198] = (NewPVPGameSubsystem)0x0;
    break;
  case 9:
    iVar3 = 2;
LAB_034fd41c:
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::WavesNotify,iVar3);
switchD_034fd414_caseD_3:
    this[0x198] = (NewPVPGameSubsystem)0x0;
  }
LAB_034fd2c8:
  iVar3 = NewPVPUtils::GetTutorialStep();
  if ((iVar3 == 4) || (iVar3 = NewPVPUtils::GetTutorialStep(), iVar3 == 5)) {
    if (this[0x199] != (NewPVPGameSubsystem)0x0) goto LAB_034fd250;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    EntityFinder::GetEntities(avStack_50,2);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_50);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
    iVar3 = 0;
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2)
    {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60)
      ;
      pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
      if (pZVar7 != (Zombie *)0x0) {
        iVar3 = iVar3 + 1;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    if ((iVar3 == 0) &&
       (lVar6 = FUN_034b0424(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30)), lVar6 == 0)
       ) {
      iVar4 = NewPVPUtils::GetTutorialStep();
      iVar3 = 5;
      if (iVar4 != 4) {
        iVar3 = 6;
      }
      NewPVPUtils::TrySetTutorialStep(iVar3);
    }
  }
  else {
    iVar3 = NewPVPUtils::GetTutorialStep();
    if (iVar3 != 8) {
      iVar3 = NewPVPUtils::GetTutorialStep();
      if ((iVar3 == 0xb) && (fVar11 = (float)PVZ_T(), *(float *)(this + 0x1bc) < fVar11)) {
        addTutorialZombie(this);
        fVar11 = (float)PVZ_T();
        *(float *)(this + 0x1bc) = fVar11 + 8.0;
      }
      goto LAB_034fd250;
    }
    iVar3 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
    EntityFinder::GetEntities(avStack_50,1);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_50);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar2)
    {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68)
      ;
      pPVar10 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar9);
      if (pPVar10 != (Plant *)0x0) {
        Plant::GetType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58)
        ;
        bVar2 = std::operator==((string *)(lVar6 + 8),"wallnut");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        if (bVar2) {
          iVar3 = iVar3 + 1;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
    }
    if (iVar3 == 0) {
      NewPVPUtils::TrySetTutorialStep(9);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
LAB_034fd250:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::onNotifyTutorialStep(int) */

void __thiscall NewPVPGameSubsystem::onNotifyTutorialStep(NewPVPGameSubsystem *this,int param_1)

{
  int iVar1;
  UINewPVPTopZombieQueue *this_00;
  StandaloneEffect *this_01;
  UINewPVPTopZombieQueue *this_02;
  CrazyNPCManager *pCVar2;
  UINewPVPTopZombieQueue *this_03;
  UIWidget *this_04;
  Board *pBVar3;
  float fVar4;
  float fVar5;
  TPoint aTStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  int local_78;
  int local_74;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  int local_68;
  int local_64;
  TPoint<int> aTStack_60 [8];
  FastCurve aFStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 2:
    addTutorialPlant(this,0);
    Board::SetGameplayObjectPause(*(Board **)(gLawnApp + 0x9f0),true);
    pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string((string *)aTStack_60,"NEW_PVP_START_INTRO");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnNarrativeTutorialStartCompleted);
    Sexy::Delegate0::Delegate0<NewPVPGameSubsystem,void(NewPVPGameSubsystem::*)()>
              (aDStack_38,asStack_50);
    std::string::string((string *)aFStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar2,(string *)aTStack_60,aDStack_38,(string *)aFStack_58);
    std::string::~string((string *)aFStack_58);
    nop();
    std::string::~string((string *)aTStack_60);
    nop();
    break;
  case 3:
    Board::SetSoftPause(*(Board **)(gLawnApp + 0x9f0),true);
    Board::GetBoardBaseOffset();
    std::string::string(asStack_50,"UINewPVPSeedBank");
    UIWidget::GetWidgetBySheetName(asStack_50);
    nop();
    std::string::~string(asStack_50);
    nop();
    UINewPVPTopZombieQueue::gettItem(this_03,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
    UIWidget::GetDrawRect();
    Sexy::Point::Point((Point *)aFStack_58,1,1);
    BoardTransforms::GridToBoardSpace((Point *)aFStack_58);
    fVar5 = (float)local_74;
    Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_70,(float)local_78,fVar5);
    fVar4 = (float)FUN_034b73f0();
    fVar4 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)aRStack_70,fVar4);
    Sexy::TRect<int>::GetCenter();
    Sexy::TPoint<int>::operator-(aTStack_60,aTStack_88);
    Sexy::Point::Point((Point *)&local_68,(TPoint *)aFStack_58);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_68);
    TutorialFinger::StartCurvingTutorialFinger((TutorialFinger *)(this + 0x160));
    iVar1 = FUN_034b7438(0xf);
    TutorialFinger::SetCurvingTutorialFinger
              ((TutorialFinger *)(this + 0x160),(float)(local_68 - iVar1),(float)local_64,fVar4,
               fVar5,1.0);
    NewPVPSeedBank::ShowZombieBank((NewPVPSeedBank *)this_03,false);
    std::string::string((string *)aFStack_58,"UINewPVPZombieUpgradeSkillBank");
    this_04 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aFStack_58);
    UIWidget::SetVisible(this_04,false);
    std::string::~string((string *)aFStack_58);
    nop();
    NewPVPSeedBank::EnableSinglePacket((NewPVPSeedBank *)this_03,1);
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((Point *)aFStack_58,L"[NEW_PVP_TUTORIAL_STEP_4]",aTStack_60);
    Board::DisplayAdvice(pBVar3,(Point *)aFStack_58,8,2);
    FUN_05476c50((Point *)aFStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    break;
  case 4:
  case 5:
    TutorialFinger::StopCurvingTutorialFinger((TutorialFinger *)(this + 0x160));
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    addTutorialZombie(this);
    break;
  case 6:
  case 7:
  case 9:
    if (this[0x198] == (NewPVPGameSubsystem)0x0) {
      this[0x198] = (NewPVPGameSubsystem)0x1;
    }
    break;
  case 8:
    Board::GetBoardBaseOffset();
    std::string::string(asStack_50,"UINewPVPSeedBank");
    UIWidget::GetWidgetBySheetName(asStack_50);
    nop();
    std::string::~string(asStack_50);
    nop();
    UINewPVPTopZombieQueue::gettItem(this_00,8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    UIWidget::GetDrawRect();
    Sexy::TRect<int>::GetCenter();
    Sexy::TPoint<int>::operator-(aTStack_60,(TPoint *)&local_78);
    Sexy::Point::Point((Point *)&local_68,(TPoint *)aFStack_58);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_68);
    NewPVPSeedBank::EnableSinglePacket((NewPVPSeedBank *)this_00,8);
    TutorialFinger::TriggerFade((TutorialFinger *)(this + 0x160),true);
    this_01 = (StandaloneEffect *)FUN_034ad80c(*(undefined8 *)(this + 0x160));
    Sexy::FastCurve::SetOutRange(aFStack_58,(float)local_68,(float)local_64);
    StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)aFStack_58,900000);
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(aFStack_58,L"[NEW_PVP_TUTORIAL_STEP_9]",aTStack_60);
    Board::DisplayAdvice(pBVar3,aFStack_58,8,2);
    FUN_05476c50(aFStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    break;
  case 10:
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    Board::GetBoardBaseOffset();
    std::string::string(asStack_50,"UINewPVPSeedBank");
    UIWidget::GetWidgetBySheetName(asStack_50);
    nop();
    std::string::~string(asStack_50);
    nop();
    UINewPVPTopZombieQueue::gettItem(this_02,7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    UIWidget::GetDrawRect();
    Sexy::TRect<int>::GetCenter();
    Sexy::TPoint<int>::operator-(aTStack_60,(TPoint *)&local_78);
    Sexy::Point::Point((Point *)&local_68,(TPoint *)aFStack_58);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_68);
    showTutorialArrow(this,3,local_68,local_64);
    NewPVPSeedBank::RecoverPackets((NewPVPSeedBank *)this_02);
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178((TPoint *)aFStack_58,L"[NEW_PVP_TUTORIAL_STEP_11]",aTStack_60);
    Board::DisplayAdvice(pBVar3,(TPoint *)aFStack_58,8,2);
    FUN_05476c50((TPoint *)aFStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::onPlantDied(Plant*) */

void __thiscall NewPVPGameSubsystem::onPlantDied(NewPVPGameSubsystem *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ToxicWaterPerfumeBottleProjectile *this_00;
  PlantNameMapperServerID *pPVar6;
  NewPVPGameSubsystem *pNVar7;
  Point aPStack_28 [8];
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  iVar3 = SharkMinion::getRow((SharkMinion *)param_1);
  Sexy::Point::Point(aPStack_28,iVar2,iVar3);
  cVar1 = NewPVPUtils::IsConcreteRegion(aPStack_28);
  if (cVar1 == '\0') {
    Sexy::Point::Point(aPStack_20,iVar2,iVar3);
    cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_20);
    if ((cVar1 == '\0') && (*(long *)(param_1 + 0x108) != 0x40000000000)) {
      pPVar6 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
      Plant::GetType();
      uVar4 = PlantNameMapperServerID::GetIdForType(pPVar6,aPStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
      pNVar7 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      iVar5 = FUN_034ad7bc(*(undefined4 *)(param_1 + 0x50));
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_20);
      TriggerEvent((NewPVPGameSubsystem *)(float)iVar5,pNVar7,0,1,3,uVar4,iVar2,iVar3,0,aPStack_20);
      std::vector<float,std::allocator<float>>::~vector
                ((vector<float,std::allocator<float>> *)aPStack_20);
    }
  }
  Sexy::Point::Point(aPStack_28,iVar2,iVar3);
  cVar1 = NewPVPUtils::IsConcreteRegion(aPStack_28);
  if (cVar1 == '\0') {
    Sexy::Point::Point(aPStack_20,iVar2,iVar3);
    cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_20);
    if (cVar1 == '\0') {
      std::string::string((string *)aPStack_20,"UIChallengePlantSurviveNewPVP");
      UIWidget::GetWidgetBySheetName((string *)aPStack_20);
      nop();
      iVar2 = getPlantCount();
      ToxicWaterPerfumeBottleProjectile::SetType(this_00,iVar2 + -1);
      std::string::~string((string *)aPStack_20);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::TryUpgradePlantEffect(int, int) */

void __thiscall
NewPVPGameSubsystem::TryUpgradePlantEffect(NewPVPGameSubsystem *this,int param_1,int param_2)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  TriggerEvent((NewPVPGameSubsystem *)0xbf800000,this,0,1,1,0xffffffff,param_1,param_2,0,avStack_20)
  ;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::TryTriggerZombieSkill(int) */

void __thiscall NewPVPGameSubsystem::TryTriggerZombieSkill(NewPVPGameSubsystem *this,int param_1)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  TriggerEvent((NewPVPGameSubsystem *)0x0,this,0,1,6,param_1,0xffffffff,0xffffffff,0,avStack_20);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::TryTriggerZombieUpgrade(int) */

void __thiscall NewPVPGameSubsystem::TryTriggerZombieUpgrade(NewPVPGameSubsystem *this,int param_1)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  TriggerEvent((NewPVPGameSubsystem *)0x0,this,0,1,5,param_1,0xffffffff,0xffffffff,0,avStack_20);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::TryAddZombie(int, int) */

void __thiscall NewPVPGameSubsystem::TryAddZombie(NewPVPGameSubsystem *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  NewPVPMgr *this_00;
  NewPVPGameSubsystem *pNVar7;
  float local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar4 = NewPVPMgr::GetCurrentZombiePacketLevel(this_00,param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_24 = (float)iVar4;
  std::vector<float,std::allocator<float>>::push_back
            ((vector<float,std::allocator<float>> *)avStack_20,&local_24);
  pNVar7 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  uVar1 = *(undefined4 *)(this + 0x7c);
  uVar5 = CalcRandomSeed(1);
  TriggerEvent((NewPVPGameSubsystem *)(float)param_2,pNVar7,0,1,4,param_1,0xffffffff,uVar1,uVar5,
               avStack_20);
  iVar2 = *(int *)(this + 0x7c);
  iVar6 = BoardConstants::NUMBER_OF_ROWS();
  iVar4 = 0;
  if (iVar2 < iVar6 / 2 + -1) {
    iVar4 = *(int *)(this + 0x7c) + 1;
  }
  *(int *)(this + 0x7c) = iVar4;
  cVar3 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (cVar3 != '\0') {
    iVar4 = NewPVPUtils::GetTutorialStep();
    if (iVar4 == 8) {
      TutorialFinger::TriggerFade((TutorialFinger *)(this + 0x160),false);
      Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    }
    else {
      iVar4 = NewPVPUtils::GetTutorialStep();
      if (iVar4 == 10) {
        Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
        PassionFlowerProjectile::setShouldStun((PassionFlowerProjectile *)this,false);
        NewPVPUtils::TrySetTutorialStep(0xb);
      }
    }
  }
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::updateFPSCheck() */

void __thiscall NewPVPGameSubsystem::updateFPSCheck(NewPVPGameSubsystem *this)

{
  char cVar1;
  NewPVPMgr *this_00;
  float fVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x13c) != fVar2) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x13c) <= fVar2)) {
    this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    cVar1 = NewPVPMgr::ReachFPSLimit(this_00,false);
    if (cVar1 != '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      TriggerEvent((NewPVPGameSubsystem *)0x0,this,0,1,9,0xffffffff,0xffffffff,0xffffffff,0,
                   avStack_20);
      std::vector<float,std::allocator<float>>::~vector
                ((vector<float,std::allocator<float>> *)avStack_20);
    }
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x13c) = fVar2 + 10.0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::TryUpgradeSun(int) */

void __thiscall NewPVPGameSubsystem::TryUpgradeSun(NewPVPGameSubsystem *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  NewPVPMgr *pNVar3;
  GridItemWaterMist *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar1 = NewPVPMgr::GetSunUpgradeValue(pNVar3,param_1);
  FUN_034ad818(this + 0x98,uVar1);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar2 = NewPVPMgr::GetSunUpgradeCost(pNVar3,param_1);
  Board::TakeSunMoney(this_01,iVar2,true,false);
  std::string::string(asStack_10,"UIChallengePlantSurviveNewPVP");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar2 = NewPVPMgr::GetCurrentMaxPlantNum(pNVar3);
  GridItemWaterMist::SetType(this_00,iVar2);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::initSun() */

void __thiscall NewPVPGameSubsystem::initSun(NewPVPGameSubsystem *this)

{
  int iVar1;
  undefined4 uVar2;
  NewPVPMgr *pNVar3;
  GridItemWaterMist *this_00;
  UIWidget *this_01;
  float fVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar1 = NewPVPMgr::GetStartingSun(pNVar3);
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::SetSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar1);
  }
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar2 = NewPVPMgr::GetSunUpgradeValue(pNVar3,0);
  FUN_034ad818(this + 0x98,uVar2);
  fVar4 = (float)PVZ_T();
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  fVar5 = (float)NewPVPMgr::GetSunAddCD(pNVar3,*(int *)(this + 0x9c));
  *(undefined4 *)(this + 0xac) = 0x3f800000;
  *(float *)(this + 0xa8) = fVar5 + fVar4;
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::SetCurrentSunLevel(pNVar3,0);
  std::string::string(asStack_10,"UIChallengePlantSurviveNewPVP");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar1 = NewPVPMgr::GetCurrentMaxPlantNum(pNVar3);
  GridItemWaterMist::SetType(this_00,iVar1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIChallengePlantSurviveNewPVP");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  UIWidget::SetVisible(this_01,true);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::onGameplayStarted() */

void __thiscall NewPVPGameSubsystem::onGameplayStarted(NewPVPGameSubsystem *this)

{
  char cVar1;
  NewPVPMgr *this_00;
  long lVar2;
  float fVar3;
  
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::GetGlobalZombieCreatedCD(this_00);
  FUN_034ad810(this + 0x70);
  initSun(this);
  initHp(this);
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x13c) = fVar3 + 10.0;
  lVar2 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  FUN_034c65c4(lVar2 + 0x4c4);
  cVar1 = NewPVPUtils::IsPlayingWithCPU();
  if (cVar1 != '\0') {
    initCPU(this);
  }
  cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (cVar1 != '\0') {
    if (this[0x198] == (NewPVPGameSubsystem)0x0) {
      this[0x198] = (NewPVPGameSubsystem)0x1;
    }
    addTutorialArrow(this);
    return;
  }
  return;
}


/* NewPVPGameSubsystem::updateSurrender() */

void __thiscall NewPVPGameSubsystem::updateSurrender(NewPVPGameSubsystem *this)

{
  NewPVPMgr *pNVar1;
  
  if (this[0x138] != (NewPVPGameSubsystem)0x0) {
    pNVar1 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    NewPVPMgr::SetCurrentGameResult(pNVar1,2);
    Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),9);
    this[0x138] = (NewPVPGameSubsystem)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::spawnZombie(ZombieCacheData const&) */

void __thiscall NewPVPGameSubsystem::spawnZombie(NewPVPGameSubsystem *this,ZombieCacheData *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  string *psVar6;
  SharkMinion *this_00;
  int *piVar7;
  NewPVPAddZombieMessageData *this_01;
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ServerZombieID::ServerZombieID((ServerZombieID *)&local_18,*(int *)param_1);
  ServerZombieID::ToString();
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
  this_00 = (SharkMinion *)
            spawnZombieCheckResource
                      (this,(ServerZombieID *)&local_18,*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x28),
                       *(undefined4 *)(param_1 + 0x2c));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,0.0,0.0);
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar5 = BoardTransforms::GridToBoardSpaceX(iVar5 + -1);
  local_18 = (float)iVar5;
  iVar5 = SharkMinion::getRow(this_00);
  iVar5 = BoardTransforms::GridToBoardSpaceY(iVar5);
  local_14 = (float)iVar5;
  (**(code **)(*(long *)this_00 + 0x78))(this_00,(ServerZombieID *)&local_18);
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
  checkZombieSkill(this,(Zombie *)this_00);
  local_28 = FUN_034c91f4(*(undefined8 *)(param_1 + 0x10));
  local_20 = FUN_034c9244(*(undefined8 *)(param_1 + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    triggerUpgradeEffect(this,*piVar7,(Zombie *)this_00);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_28);
  }
  addToZombieCreatedCache(this,(Zombie *)this_00,param_1);
  iVar5 = SharkMinion::getRow(this_00);
  Sexy::Point::Point((Point *)&local_20,5,iVar5);
  cVar2 = NewPVPUtils::IsOppoentRegion((Point *)&local_20);
  if (cVar2 != '\0') {
    bVar1 = (bool)Zombie::HasCondition(this_00,0x78);
    bVar3 = (bool)Zombie::HasCondition(this_00,0x79);
    bVar4 = (bool)Zombie::HasCondition(this_00,0x7a);
    this_01 = ::operator_new(0xc);
    NewPVPAddZombieMessageData::NewPVPAddZombieMessageData
              (this_01,*(int *)param_1,*(int *)param_1,bVar1,bVar3,bVar4);
    MessageRouter::Post<NewPVPAddZombieMessageData*,NewPVPAddZombieMessageData*>
              ((MessageRouter *)gMessageRouter,Message::NewPVPAddZombie,this_01);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::updateZombieSpawn(std::vector<ZombieCacheData,
   std::allocator<ZombieCacheData> >&) */

void __thiscall NewPVPGameSubsystem::updateZombieSpawn(NewPVPGameSubsystem *this,vector *param_1)

{
  ZombieCacheData *pZVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  ZombieCacheData aZStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = (ZombieCacheData *)FUN_034b047c(*(undefined8 *)param_1,0);
  ZombieCacheData::ZombieCacheData(aZStack_38,pZVar1);
  uVar2 = spawnZombie(this,aZStack_38);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_40,(__normal_iterator *)&local_48);
  std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::erase
            ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)param_1,local_40);
  HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)aZStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPGameSubsystem::updateZombies() */

void __thiscall NewPVPGameSubsystem::updateZombies(NewPVPGameSubsystem *this)

{
  vector<ZombieCacheData,std::allocator<ZombieCacheData>> *this_00;
  undefined *puVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  this_00 = (vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::empty(this_00);
  if (cVar2 == '\0') {
    if (*(float *)(this + 0x74) == 0.0) {
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x74) = *(float *)(this + 0x130) + *(float *)(this + 0x70) + fVar4;
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x74) < fVar4) goto LAB_0350c01c;
    }
    else {
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x74) < fVar4) {
LAB_0350c01c:
        lVar3 = updateZombieSpawn(this,(vector *)this_00);
        if (lVar3 != 0) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     (this + 0x58),(RtWeakPtr *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        }
        puVar1 = gMessageRouter;
        std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::vector
                  ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)aRStack_20,
                   (vector *)this_00);
        MessageRouter::
        Post<std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>const&,std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>>
                  ((MessageRouter *)puVar1,Message::NotifyZombieCacheDatasChanged,aRStack_20);
        std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::~vector
                  ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)aRStack_20);
        fVar4 = (float)PVZ_T();
        *(float *)(this + 0x74) = *(float *)(this + 0x130) + *(float *)(this + 0x70) + fVar4;
      }
    }
  }
  else if (*(float *)(this + 0x74) != 0.0) {
    *(undefined4 *)(this + 0x74) = 0;
  }
  cVar2 = std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::empty
                    ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)(this + 0x28));
  if (cVar2 == '\0') {
    if (*(float *)(this + 0x78) == 0.0) {
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x78) = *(float *)(this + 0x134) + *(float *)(this + 0x70) + fVar4;
      fVar4 = (float)PVZ_T();
      if (fVar4 <= *(float *)(this + 0x78)) goto LAB_0350bfac;
    }
    else {
      fVar4 = (float)PVZ_T();
      if (fVar4 <= *(float *)(this + 0x78)) goto LAB_0350bfac;
    }
    updateZombieSpawn(this,(vector *)(this + 0x28));
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x78) = *(float *)(this + 0x134) + *(float *)(this + 0x70) + fVar4;
  }
  else if (*(float *)(this + 0x78) != 0.0) {
    *(undefined4 *)(this + 0x78) = 0;
  }
LAB_0350bfac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPGameSubsystem::Update() */

void __thiscall NewPVPGameSubsystem::Update(NewPVPGameSubsystem *this)

{
  updateFPSCheck(this);
  updateSurrender(this);
  updatePlants(this);
  updateZombies(this);
  updateTurns(this);
  updateZombieSkills(this);
  updateSun(this);
  updateCPU(this);
  updateTutorial(this);
  return;
}


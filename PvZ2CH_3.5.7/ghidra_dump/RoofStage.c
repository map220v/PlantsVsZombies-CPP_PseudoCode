// Class: RoofStage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoofStage::onLoadComplete() */

void RoofStage::onLoadComplete(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"UIPlantfood");
  lVar3 = UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (lVar3 != 0) {
    iVar1 = FUN_03d6f074(0x19a);
    iVar2 = FUN_03d6f074(0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar1,(float)iVar2);
    UIWidget::SetPositionOffset(local_10,local_c,lVar3);
  }
  std::string::string((string *)&local_10,"UICoinBank");
  lVar3 = UIWidget::GetWidgetBySheetName((string *)&local_10);
  std::string::~string((string *)&local_10);
  nop();
  if (lVar3 != 0) {
    iVar1 = FUN_03d6f074(0xfffffe0c);
    iVar2 = FUN_03d6f074(0xfffffff6);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar1,(float)iVar2);
    UIWidget::SetPositionOffset(local_10,local_c,lVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RoofStage::RoofStage() */

void __thiscall RoofStage::RoofStage(RoofStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0676ec70;
  return;
}


/* RoofStage::StaticNew() */

RoofStage * RoofStage::StaticNew(void)

{
  RoofStage *this;
  
  this = ::operator_new(0xe8);
  RoofStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoofStage::StaticClassInit() */

void RoofStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"RoofStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03d6f340,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RoofStage::StaticGetClass() */

long * RoofStage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RoofStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoofStage::onLevelLoaded() */

void __thiscall RoofStage::onLevelLoaded(RoofStage *this)

{
  BoardRegionRoof *this_00;
  Rectangle aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::onLevelLoaded((StageModule *)this);
  this_00 = Board::AddRegion<BoardRegionRoof>(*(Board **)(gLawnApp + 0x9f0));
  EA::Text::Rectangle::Rectangle(aRStack_18,200.0,0.0,800.0,600.0);
  BoardRegion::SetRegionFromBoardCoordinates((BoardRegion *)this_00,(TRect *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RoofStage::registerForEvents() */

void __thiscall RoofStage::registerForEvents(RoofStage *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::registerForEvents((StageModule *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<RoofStage,void(RoofStage::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RoofStage::~RoofStage() */

void __thiscall RoofStage::~RoofStage(RoofStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0676ec70;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* RoofStage::~RoofStage() */

void __thiscall RoofStage::~RoofStage(RoofStage *this)

{
  ~RoofStage(this);
  AK::FreeHook(this);
  return;
}


// Class: InitialGridItemWizardCrucible


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialGridItemWizardCrucible::StaticClassInit() */

void InitialGridItemWizardCrucible::StaticClassInit(void)

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
    std::string::string(asStack_10,"InitialGridItemWizardCrucible");
    (*pcVar2)(plVar1,asStack_10,FUN_04c89638,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InitialGridItemWizardCrucible::StaticGetClass() */

long * InitialGridItemWizardCrucible::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InitialGridItemWizardCrucible",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialGridItemWizardCrucible::InitialGridItemWizardCrucible() */

void __thiscall
InitialGridItemWizardCrucible::InitialGridItemWizardCrucible(InitialGridItemWizardCrucible *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_069947e0;
  return;
}


/* InitialGridItemWizardCrucible::StaticNew() */

InitialGridItemWizardCrucible * InitialGridItemWizardCrucible::StaticNew(void)

{
  InitialGridItemWizardCrucible *this;
  
  this = ::operator_new(0x18);
  InitialGridItemWizardCrucible(this);
  return this;
}


/* InitialGridItemWizardCrucible::~InitialGridItemWizardCrucible() */

void __thiscall
InitialGridItemWizardCrucible::~InitialGridItemWizardCrucible(InitialGridItemWizardCrucible *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_069947e0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* InitialGridItemWizardCrucible::~InitialGridItemWizardCrucible() */

void __thiscall
InitialGridItemWizardCrucible::~InitialGridItemWizardCrucible(InitialGridItemWizardCrucible *this)

{
  ~InitialGridItemWizardCrucible(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialGridItemWizardCrucible::onLoadComplete() */

void __thiscall InitialGridItemWizardCrucible::onLoadComplete(InitialGridItemWizardCrucible *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  int *piVar5;
  RtObject *this_00;
  GridItemWizardCrucible *this_01;
  Board *this_02;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_20 = FUN_04c89980(*(undefined8 *)(pRVar4 + 0x40));
  local_18 = FUN_04c899d0(*(undefined8 *)(pRVar4 + 0x48));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar3) {
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    fVar8 = (float)piVar5[2];
    iVar10 = piVar5[3];
    fVar7 = (float)piVar5[4];
    fVar6 = (float)piVar5[5];
    iVar1 = piVar5[1];
    fVar9 = (float)piVar5[6];
    iVar2 = *piVar5;
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"wizard_crucible");
    this_00 = (RtObject *)Board::AddGridItem(this_02,asStack_10,iVar2,iVar1,1);
    std::string::~string(asStack_10);
    nop();
    this_01 = Sexy::RtObject::Cast<GridItemWizardCrucible>(this_00);
    if (this_01 != (GridItemWizardCrucible *)0x0) {
      FUN_04c89008(iVar10,this_01 + 0x128);
      if (*(code **)(*(long *)this_01 + 0x1d8) == GridItem::GetHitpoints) {
        GridItem::GetHitpoints((GridItem *)this_01);
      }
      else {
        (**(code **)(*(long *)this_01 + 0x1d8))();
      }
      FUN_04c89000(this_01 + 300);
      GridItemWizardCrucible::setValues(this_01,fVar8,fVar7,fVar6,fVar9);
    }
    std::move_iterator<MagicMirrorTeleportationArrayData2*>::operator++
              ((move_iterator<MagicMirrorTeleportationArrayData2*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialGridItemWizardCrucible::registerForEvents() */

void __thiscall
InitialGridItemWizardCrucible::registerForEvents(InitialGridItemWizardCrucible *this)

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
  Sexy::Delegate0::Delegate0<InitialGridItemWizardCrucible,void(InitialGridItemWizardCrucible::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: LevelBasedModifier_MoldModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_MoldModule::StaticClassInit() */

void LevelBasedModifier_MoldModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_MoldModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033fde7c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_MoldModule::StaticGetClass() */

long * LevelBasedModifier_MoldModule::StaticGetClass(void)

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
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_MoldModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_MoldModule::LevelBasedModifier_MoldModule() */

void __thiscall
LevelBasedModifier_MoldModule::LevelBasedModifier_MoldModule(LevelBasedModifier_MoldModule *this)

{
  LevelBasedModifierModule::LevelBasedModifierModule((LevelBasedModifierModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661f0d0;
  return;
}


/* LevelBasedModifier_MoldModule::StaticNew() */

LevelBasedModifier_MoldModule * LevelBasedModifier_MoldModule::StaticNew(void)

{
  LevelBasedModifier_MoldModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifier_MoldModule(this);
  return this;
}


/* LevelBasedModifier_MoldModule::~LevelBasedModifier_MoldModule() */

void __thiscall
LevelBasedModifier_MoldModule::~LevelBasedModifier_MoldModule(LevelBasedModifier_MoldModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661f0d0;
  LevelBasedModifierModule::~LevelBasedModifierModule((LevelBasedModifierModule *)this);
  return;
}


/* LevelBasedModifier_MoldModule::~LevelBasedModifier_MoldModule() */

void __thiscall
LevelBasedModifier_MoldModule::~LevelBasedModifier_MoldModule(LevelBasedModifier_MoldModule *this)

{
  ~LevelBasedModifier_MoldModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_MoldModule::generateGridMap() */

void __thiscall LevelBasedModifier_MoldModule::generateGridMap(LevelBasedModifier_MoldModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  BoardGridMapProps *this_00;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  iVar4 = 0;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar1) {
    do {
      uVar3 = 0;
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      if (0 < iVar1) {
        do {
          this_00 = (BoardGridMapProps *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar2 + 0x60));
          iVar1 = BoardGridMapProps::At(this_00,uVar5,uVar3);
          if (iVar1 != 0) {
            this_01 = *(Board **)(gLawnApp + 0x9f0);
            std::string::string(asStack_10,"fake_mold");
            Board::AddGridItem(this_01,asStack_10,(int)uVar3,iVar4,1);
            std::string::~string(asStack_10);
            nop();
          }
          uVar3 = uVar3 + 1;
          iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
        } while ((int)uVar3 < iVar1);
      }
      uVar5 = uVar5 + 1;
      iVar1 = BoardConstants::NUMBER_OF_ROWS();
      iVar4 = (int)uVar5;
    } while (iVar4 < iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_MoldModule::loadComplete() */

void LevelBasedModifier_MoldModule::loadComplete(void)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  BoardGridMapProps *this;
  LevelModule *in_x0;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  Board *this_00;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar5 = 0;
  iVar4 = 0;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar1) {
    do {
      uVar3 = 0;
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      if (0 < iVar1) {
        do {
          this = (BoardGridMapProps *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar2 + 0x60));
          iVar1 = BoardGridMapProps::At(this,uVar5,uVar3);
          if (iVar1 != 0) {
            this_00 = *(Board **)(gLawnApp + 0x9f0);
            std::string::string(asStack_10,"fake_mold");
            Board::AddGridItem(this_00,asStack_10,(int)uVar3,iVar4,1);
            std::string::~string(asStack_10);
            nop();
          }
          uVar3 = uVar3 + 1;
          iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
        } while ((int)uVar3 < iVar1);
      }
      uVar5 = uVar5 + 1;
      iVar1 = BoardConstants::NUMBER_OF_ROWS();
      iVar4 = (int)uVar5;
    } while (iVar4 < iVar1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_MoldModule::registerForEvents() */

void __thiscall
LevelBasedModifier_MoldModule::registerForEvents(LevelBasedModifier_MoldModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,loadComplete);
  Sexy::Delegate0::Delegate0<LevelBasedModifier_MoldModule,void(LevelBasedModifier_MoldModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


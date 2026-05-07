// Class: IZombieModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieModule::gameplayStarted() */

void __thiscall IZombieModule::gameplayStarted(IZombieModule *this)

{
  UIWidget *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIPowerupHolder");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_10,"UIShovel");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  this[0x18] = (IZombieModule)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieModule::StaticClassInit() */

void IZombieModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"IZombieModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03419ce0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IZombieModule::StaticGetClass() */

long * IZombieModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IZombieModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieModule::IZombieModule() */

void __thiscall IZombieModule::IZombieModule(IZombieModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x18] = (IZombieModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_06621310;
  return;
}


/* IZombieModule::StaticNew() */

IZombieModule * IZombieModule::StaticNew(void)

{
  IZombieModule *this;
  
  this = ::operator_new(0x20);
  IZombieModule(this);
  return this;
}


/* IZombieModule::~IZombieModule() */

void __thiscall IZombieModule::~IZombieModule(IZombieModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06621310;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* IZombieModule::~IZombieModule() */

void __thiscall IZombieModule::~IZombieModule(IZombieModule *this)

{
  ~IZombieModule(this);
  AK::FreeHook(this);
  return;
}


/* IZombieModule::levelStarted() */

void IZombieModule::levelStarted(void)

{
  long lVar1;
  Board *this;
  
  this = *(Board **)(gLawnApp + 0x9f0);
  lVar1 = Board::GetLevelDefinition(this);
  LawnKeyField::operator=((LawnKeyField *)(this + 0x1b8),(int)*(short *)(lVar1 + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieModule::update() */

void __thiscall IZombieModule::update(IZombieModule *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  PVZDB *pPVar5;
  long lVar6;
  UINewPVPTopZombieQueue *this_00;
  long *plVar7;
  RichManUIMgr *this_01;
  int iVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] != (IZombieModule)0x0) {
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    lVar6 = PVZDB::GetTable(pPVar5,0x29);
    if (lVar6 != 0) {
      iVar3 = FUN_03419204(*(undefined4 *)(lVar6 + 0x80));
      if (iVar3 == 0) {
        this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
        if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
          iVar8 = 100000;
          for (iVar3 = 0; cVar1 = FUN_03419290(this_00[0x199]), iVar3 < cVar1; iVar3 = iVar3 + 1) {
            UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
            bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
            if (bVar2) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
              PowerupUI::GetPowerupDownImage();
              bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
              if (bVar2) {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
                PowerupUI::GetPowerupDownImage();
                plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                iVar4 = (**(code **)(*plVar7 + 0x48))();
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                if (iVar4 < iVar8) {
                  iVar8 = iVar4;
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          }
          cVar1 = Board::CanTakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar8);
          if (cVar1 != '\0') goto LAB_0341cc04;
        }
        cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
        if (cVar1 == '\0') {
          cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1);
          if (cVar1 == '\0') {
            this[0x18] = (IZombieModule)0x0;
          }
          else {
            this_01 = (RichManUIMgr *)
                      FUN_0341c53c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
            RichManUIMgr::SetPrevNode(this_01,0);
            this[0x18] = (IZombieModule)0x0;
          }
        }
      }
    }
  }
LAB_0341cc04:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieModule::registerForEvents() */

void __thiscall IZombieModule::registerForEvents(IZombieModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<IZombieModule,void(IZombieModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<IZombieModule,void(IZombieModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,update);
  Sexy::Delegate0::Delegate0<IZombieModule,void(IZombieModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


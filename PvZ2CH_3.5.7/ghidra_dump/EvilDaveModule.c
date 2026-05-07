// Class: EvilDaveModule


/* EvilDaveModule::onPlantLost(Plant*) */

void __thiscall EvilDaveModule::onPlantLost(EvilDaveModule *this,Plant *param_1)

{
  SexyVector3 *pSVar1;
  
  if (param_1 != (Plant *)0x0) {
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar1,0x96,false,false,true,false,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EvilDaveModule::StaticClassInit() */

void EvilDaveModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"EvilDaveModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03ddd098,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EvilDaveModule::StaticGetClass() */

long * EvilDaveModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EvilDaveModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EvilDaveModule::~EvilDaveModule() */

void __thiscall EvilDaveModule::~EvilDaveModule(EvilDaveModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0677e290;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* EvilDaveModule::~EvilDaveModule() */

void __thiscall EvilDaveModule::~EvilDaveModule(EvilDaveModule *this)

{
  ~EvilDaveModule(this);
  AK::FreeHook(this);
  return;
}


/* EvilDaveModule::EvilDaveModule() */

void __thiscall EvilDaveModule::EvilDaveModule(EvilDaveModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0677e290;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  this[0x18] = (EvilDaveModule)0x0;
  return;
}


/* EvilDaveModule::StaticNew() */

EvilDaveModule * EvilDaveModule::StaticNew(void)

{
  EvilDaveModule *this;
  
  this = ::operator_new(0x28);
  EvilDaveModule(this);
  return this;
}


/* EvilDaveModule::levelStarted() */

void EvilDaveModule::levelStarted(void)

{
  long lVar1;
  Board *this;
  
  this = *(Board **)(gLawnApp + 0x9f0);
  lVar1 = Board::GetLevelDefinition(this);
  LawnKeyField::operator=((LawnKeyField *)(this + 0x1b8),(int)*(short *)(lVar1 + 0x28));
  return;
}


/* EvilDaveModule::initializeModule() */

void __thiscall EvilDaveModule::initializeModule(EvilDaveModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  long lVar2;
  
  lVar2 = *(long *)(gLawnApp + 0x9f0);
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  *(int *)(lVar2 + 0x100) = (int)*(float *)(pRVar1 + 0x40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EvilDaveModule::addToRenderQueue(RenderQueue*) */

void __thiscall EvilDaveModule::addToRenderQueue(EvilDaveModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderLine);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<EvilDaveModule,void(EvilDaveModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,400000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EvilDaveModule::gameplayStarted() */

void __thiscall EvilDaveModule::gameplayStarted(EvilDaveModule *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  UIWidget *pUVar1;
  GridItemWaterMist *this_01;
  GridItemWaterMist *this_02;
  ToxicWaterPerfumeBottleProjectile *this_03;
  Effect_Protrusion *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIPlantfood");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_18,"UIPowerupHolder");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  std::string::string(asStack_18,"UIShovel");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,false);
  }
  this[0x18] = (EvilDaveModule)0x1;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x20);
  Sexy::RtName::RtName((RtName *)asStack_18,L"UIChallengePlantCounter");
  UIWidget::CreateWidget(asStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName((RtName *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  GridItemWaterMist::SetAvatar(this_01,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  GridItemWaterMist::SetType(this_02,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  ToxicWaterPerfumeBottleProjectile::SetType(this_03,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  nop();
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06adad00);
  Effect_Protrusion::SetInstigator(extraout_x0,asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EvilDaveModule::renderLine(Sexy::Graphics*) */

void __thiscall EvilDaveModule::renderLine(EvilDaveModule *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  float fVar3;
  
  pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06adad30);
  fVar3 = (float)ArenaBattleModule::calcGoalX((ArenaBattleModule *)this);
  fVar3 = (float)FUN_03ddc330(fVar3 - 8.0);
  iVar1 = FUN_03ddc31c();
  Sexy::Graphics::DrawImage(param_1,pIVar2,(int)fVar3,iVar1);
  return;
}


/* EvilDaveModule::checkWin() */

bool EvilDaveModule::checkWin(void)

{
  bool bVar1;
  int iVar2;
  PVZDB *pPVar3;
  long lVar4;
  
  pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  lVar4 = PVZDB::GetTable(pPVar3,0x2c);
  bVar1 = false;
  if (lVar4 != 0) {
    iVar2 = FUN_03ddc09c(*(undefined4 *)(lVar4 + 0x80));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EvilDaveModule::update() */

void __thiscall EvilDaveModule::update(EvilDaveModule *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  PVZDB *pPVar7;
  UINewPVPTopZombieQueue *this_00;
  long *plVar8;
  ToxicWaterPerfumeBottleProjectile *this_01;
  RichManUIMgr *this_02;
  int extraout_w1;
  int iVar9;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x2c);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    Plant::GetType();
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
    if (cVar2 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      bVar1 = std::operator!=((string *)(lVar6 + 8),"imitater");
      if (bVar1) {
        iVar3 = iVar3 + 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x20));
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
    nop();
    ToxicWaterPerfumeBottleProjectile::SetType(this_01,iVar3);
  }
  if (this[0x18] != (EvilDaveModule)0x0) {
    pPVar7 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    lVar6 = PVZDB::GetTable(pPVar7,0x29);
    if (lVar6 != 0) {
      iVar3 = FUN_03ddc09c(*(undefined4 *)(lVar6 + 0x80));
      if (iVar3 == 0) {
        this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
        if (this_00 != (UINewPVPTopZombieQueue *)0x0) {
          iVar9 = 100000;
          for (iVar3 = 0; cVar2 = FUN_03ddc0f0(this_00[0x199]), iVar3 < cVar2; iVar3 = iVar3 + 1) {
            UINewPVPTopZombieQueue::gettItem(this_00,iVar3);
            bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
            if (bVar1) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
              PowerupUI::GetPowerupDownImage();
              bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aIStack_28);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_28);
              if (bVar1) {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
                PowerupUI::GetPowerupDownImage();
                plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_28);
                iVar4 = (**(code **)(*plVar8 + 0x48))();
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_28);
                if (iVar4 < iVar9) {
                  iVar9 = iVar4;
                }
              }
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          }
          cVar2 = Board::CanTakeSunMoney(*(Board **)(gLawnApp + 0x9f0),iVar9);
          if (cVar2 != '\0') goto LAB_03ddceec;
        }
        cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
        if (cVar2 == '\0') {
          cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1);
          if (cVar2 == '\0') {
            this[0x18] = (EvilDaveModule)0x0;
          }
          else {
            this_02 = (RichManUIMgr *)
                      FUN_03ddcb44(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
            RichManUIMgr::SetPrevNode(this_02,0);
            this[0x18] = (EvilDaveModule)0x0;
          }
        }
      }
    }
  }
LAB_03ddceec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EvilDaveModule::registerForEvents() */

void __thiscall EvilDaveModule::registerForEvents(EvilDaveModule *this)

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
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelStarted);
  Sexy::Delegate0::Delegate0<EvilDaveModule,void(EvilDaveModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<EvilDaveModule,void(EvilDaveModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,update);
  Sexy::Delegate0::Delegate0<EvilDaveModule,void(EvilDaveModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<EvilDaveModule,bool(EvilDaveModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<EvilDaveModule,void(EvilDaveModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantLost);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<EvilDaveModule,void(EvilDaveModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


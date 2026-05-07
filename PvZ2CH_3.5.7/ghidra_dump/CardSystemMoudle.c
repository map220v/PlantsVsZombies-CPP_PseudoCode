// Class: CardSystemMoudle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSystemMoudle::StaticClassInit() */

void CardSystemMoudle::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardSystemMoudle");
    (*pcVar2)(plVar1,asStack_10,FUN_035faa00,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardSystemMoudle::StaticGetClass() */

long * CardSystemMoudle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardSystemMoudle",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardSystemMoudle::CardSystemMoudle() */

void __thiscall CardSystemMoudle::CardSystemMoudle(CardSystemMoudle *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06665f50;
  return;
}


/* CardSystemMoudle::StaticNew() */

CardSystemMoudle * CardSystemMoudle::StaticNew(void)

{
  CardSystemMoudle *this;
  
  this = ::operator_new(0x18);
  CardSystemMoudle(this);
  return this;
}


/* CardSystemMoudle::~CardSystemMoudle() */

void __thiscall CardSystemMoudle::~CardSystemMoudle(CardSystemMoudle *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06665f50;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* CardSystemMoudle::~CardSystemMoudle() */

void __thiscall CardSystemMoudle::~CardSystemMoudle(CardSystemMoudle *this)

{
  ~CardSystemMoudle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSystemMoudle::onLoadComplete() */

void CardSystemMoudle::onLoadComplete(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UIWidget *pUVar4;
  CardUtils *extraout_x0;
  CardUtils *this;
  undefined8 uVar5;
  SexyVector3 *extraout_x0_00;
  RtWeakPtrBase *pRVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Vec3 aVStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UIPlantfood");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string((string *)&local_20,"UIArtifactIcon");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  this = extraout_x0;
  if (pUVar4 != (UIWidget *)0x0) {
    this = (CardUtils *)UIWidget::SetVisible(pUVar4,false);
  }
  lVar9 = 0;
  CardUtils::GetAllCardType(this);
  for (uVar8 = 0; uVar7 = FUN_035fa460(local_20,local_18), uVar8 < uVar7; uVar8 = uVar8 + 1) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar2 = BoardConstants::NUMBER_OF_ROWS();
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    EATextSquish::Vec3::Vec3
              (aVStack_30,(float)(ulong)(lVar9 + (iVar1 + -100)),(float)(iVar2 * iVar3 + 0xa0),0.0);
    uVar5 = Sexy::RtClass::StaticGetClassNamed("TempCard");
    GameObject::Create(uVar5,0x28);
    nop();
    if (extraout_x0_00 != (SexyVector3 *)0x0) {
      BoardEntity::PlaceOnBoard(extraout_x0_00);
      pRVar6 = (RtWeakPtrBase *)FUN_035fa46c(local_20,uVar8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar6);
      TempCard::CardInitialize((TempCard *)extraout_x0_00,aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
    lVar9 = lVar9 + 0x28;
  }
  std::vector<Sexy::RtWeakPtr<CardType>,std::allocator<Sexy::RtWeakPtr<CardType>>>::~vector
            ((vector<Sexy::RtWeakPtr<CardType>,std::allocator<Sexy::RtWeakPtr<CardType>>> *)
             &local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardSystemMoudle::registerForEvents() */

void __thiscall CardSystemMoudle::registerForEvents(CardSystemMoudle *this)

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
  Sexy::Delegate0::Delegate0<CardSystemMoudle,void(CardSystemMoudle::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


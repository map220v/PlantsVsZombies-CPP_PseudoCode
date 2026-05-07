// Class: JoustStage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustStage::StaticClassInit() */

void JoustStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustStage");
    (*pcVar2)(plVar1,asStack_10,FUN_0388deb8,0x100,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustStage::StaticGetClass() */

long * JoustStage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustStage::drawMultiplierLabel(Sexy::Graphics*, Sexy::PrimeTypeface*, int, int, Sexy::Color
   const&, float) */

void __thiscall
JoustStage::drawMultiplierLabel
          (JoustStage *this,Graphics *param_1,PrimeTypeface *param_2,int param_3,int param_4,
          Color *param_5,float param_6)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%.0fx",auStack_28,(double)param_6);
  iVar1 = FUN_0388d95c(0x4e);
  iVar2 = FUN_0388d95c(0x27);
  FUN_05477b24(auStack_20,auStack_28);
  Sexy::Insets::Insets(aIStack_18,(Insets *)param_5);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)(float)param_3,(float)param_4,(float)iVar1,(float)iVar2,param_2,
             param_1,auStack_20,1,1,aIStack_18,0);
  FUN_05476c50(auStack_20);
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustStage::addFlagOverlayToRenderQueue(RenderQueue*) */

void __thiscall JoustStage::addFlagOverlayToRenderQueue(JoustStage *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,renderFlagOverlay);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<JoustStage,void(JoustStage::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,500000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustStage::JoustStage() */

void __thiscall JoustStage::JoustStage(JoustStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066af370;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  return;
}


/* JoustStage::StaticNew() */

JoustStage * JoustStage::StaticNew(void)

{
  JoustStage *this;
  
  this = ::operator_new(0x100);
  JoustStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustStage::renderFlagOverlay(Sexy::Graphics*) */

void __thiscall JoustStage::renderFlagOverlay(JoustStage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  Image *pIVar4;
  PrimeTypeface *pPVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  GraphicsAutoState aGStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (pRVar3[0x130] != (ResilienceTutorialIntroProperties)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
    pIVar4 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                ((CachedResourcePtr<Sexy::Image> *)&DAT_06ab5de8);
    iVar1 = FUN_0388d95c(0xbc);
    iVar2 = FUN_0388d95c(0x200);
    Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1,iVar2);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar3[0x131] != (ResilienceTutorialIntroProperties)0x0) {
      pPVar5 = (PrimeTypeface *)
               PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_CafeteriaBlack_22_ThickOutline);
      lVar6 = FUN_0388d7fc(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
      if (lVar6 != 0) {
        Sexy::Color::Color(aCStack_18,8);
        iVar1 = FUN_0388d95c(0x1a4);
        iVar2 = FUN_0388d95c(0x20c);
        pfVar7 = (float *)FUN_0388d808(*(undefined8 *)(this + 0xe8),0);
        drawMultiplierLabel(this,param_1,pPVar5,iVar1,iVar2,aCStack_18,*pfVar7);
        uVar8 = FUN_0388d7fc(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
        if (1 < uVar8) {
          Sexy::Color::Color(aCStack_18,2);
          iVar1 = FUN_0388d95c(0x223);
          iVar2 = FUN_0388d95c(0x20d);
          pfVar7 = (float *)FUN_0388d808(*(undefined8 *)(this + 0xe8),1);
          drawMultiplierLabel(this,param_1,pPVar5,iVar1,iVar2,aCStack_18,*pfVar7);
          uVar8 = FUN_0388d7fc(*(undefined8 *)(this + 0xe8),*(undefined8 *)(this + 0xf0));
          if (2 < uVar8) {
            Sexy::Color::Color(aCStack_18,4);
            iVar1 = FUN_0388d95c(0x2a4);
            iVar2 = FUN_0388d95c(0x211);
            pfVar7 = (float *)FUN_0388d808(*(undefined8 *)(this + 0xe8),2);
            drawMultiplierLabel(this,param_1,pPVar5,iVar1,iVar2,aCStack_18,*pfVar7);
          }
        }
      }
    }
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustStage::findMultiplierValues() */

void __thiscall JoustStage::findMultiplierValues(JoustStage *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  float local_34;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  fVar5 = -1.0;
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar2) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),iVar4,0,(vector *)avStack_20);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        bVar1 = Sexy::RtObject::IsA<GridItemScoreTile>((RtObject *)*puVar3);
        if (bVar1) {
          nop();
          local_34 = (float)GridItemScoreTile::GetBonusModifier();
          if (fVar5 < local_34) {
            std::vector<float,std::allocator<float>>::push_back
                      ((vector<float,std::allocator<float>> *)(this + 0xe8),&local_34);
            fVar5 = local_34;
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      iVar4 = iVar4 + 1;
      std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                ((vector<GridItem*,std::allocator<GridItem*>> *)avStack_20);
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    } while (iVar4 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustStage::~JoustStage() */

void __thiscall JoustStage::~JoustStage(JoustStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066af370;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0xe8));
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* JoustStage::~JoustStage() */

void __thiscall JoustStage::~JoustStage(JoustStage *this)

{
  ~JoustStage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustStage::registerForEvents() */

void __thiscall JoustStage::registerForEvents(JoustStage *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<RenderQueue*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::registerForEvents((StageModule *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,addFlagOverlayToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<JoustStage,void(JoustStage::*)(RenderQueue*)>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,findMultiplierValues);
  Sexy::Delegate0::Delegate0<JoustStage,void(JoustStage::*)()>((Delegate0 *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


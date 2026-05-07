// Class: WorldMap_AlmanacButton


/* WorldMap_AlmanacButton::~WorldMap_AlmanacButton() */

void __thiscall WorldMap_AlmanacButton::~WorldMap_AlmanacButton(WorldMap_AlmanacButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685b9e0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AlmanacButton_0685bb88;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_AlmanacButton::~WorldMap_AlmanacButton() */

void __thiscall WorldMap_AlmanacButton::~WorldMap_AlmanacButton(WorldMap_AlmanacButton *this)

{
  ~WorldMap_AlmanacButton(this + -0x10);
  return;
}


/* WorldMap_AlmanacButton::~WorldMap_AlmanacButton() */

void __thiscall WorldMap_AlmanacButton::~WorldMap_AlmanacButton(WorldMap_AlmanacButton *this)

{
  ~WorldMap_AlmanacButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_AlmanacButton::~WorldMap_AlmanacButton() */

void __thiscall WorldMap_AlmanacButton::~WorldMap_AlmanacButton(WorldMap_AlmanacButton *this)

{
  ~WorldMap_AlmanacButton(this + -0x10);
  return;
}


/* WorldMap_AlmanacButton::OnWorldMapWorldLoaded() */

void __thiscall WorldMap_AlmanacButton::OnWorldMapWorldLoaded(WorldMap_AlmanacButton *this)

{
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}


/* WorldMap_AlmanacButton::OnUniverseMapOpened() */

void __thiscall WorldMap_AlmanacButton::OnUniverseMapOpened(WorldMap_AlmanacButton *this)

{
  UIWidget::SetVisible((UIWidget *)this,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AlmanacButton::StaticClassInit() */

void WorldMap_AlmanacButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_AlmanacButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04567b30,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AlmanacButton::StaticGetClass() */

long * WorldMap_AlmanacButton::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_AlmanacButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AlmanacButton::GetClass() const */

long * WorldMap_AlmanacButton::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_AlmanacButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_AlmanacButton::WorldMap_AlmanacButton() */

void __thiscall WorldMap_AlmanacButton::WorldMap_AlmanacButton(WorldMap_AlmanacButton *this)

{
  WorldMap_AlmanacButton WVar1;
  PlantPediaManager *this_00;
  
  UIWidget::UIWidget((UIWidget *)this);
  this[0x164] = (WorldMap_AlmanacButton)0x0;
  this[0x163] = (WorldMap_AlmanacButton)0x0;
  *(undefined ***)this = &PTR_GetClass_0685b9e0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_AlmanacButton_0685bb88;
  this_00 = (PlantPediaManager *)Sexy::LazySingleton<PlantPediaManager>::GetInstancePtr();
  WVar1 = (WorldMap_AlmanacButton)PlantPediaManager::HasAnyUnRewardedPedia(this_00);
  this[0x163] = WVar1;
  return;
}


/* WorldMap_AlmanacButton::StaticNew() */

WorldMap_AlmanacButton * WorldMap_AlmanacButton::StaticNew(void)

{
  WorldMap_AlmanacButton *this;
  
  this = ::operator_new(0x168);
  WorldMap_AlmanacButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AlmanacButton::onEnterState_Initializing(WidgetState) */

void WorldMap_AlmanacButton::onEnterState_Initializing(ReceivedDataCallback *param_1)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,OnWorldMapWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_AlmanacButton,void(WorldMap_AlmanacButton::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapWorldLoaded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,OnUniverseMapOpened);
  Sexy::Delegate0::Delegate0<WorldMap_AlmanacButton,void(WorldMap_AlmanacButton::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::UniverseMapOpened,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_AlmanacButton::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_AlmanacButton::updateButtonStates
          (WorldMap_AlmanacButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  WorldMap *this_00;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_0456796c(this + 0x160);
  }
  else {
    cVar1 = FUN_04567974(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Almanac_Open_Press");
      FUN_0456796c(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Almanac_Open_Release");
    this[0x164] = (WorldMap_AlmanacButton)0x1;
    this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::SwitchToAlmanac(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_AlmanacButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_AlmanacButton::Draw(WorldMap_AlmanacButton *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_04567974(this[0x160]);
  if (cVar1 == '\0') {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10b30);
  }
  else {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10b08);
  }
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0);
  if (this[0x163] != (WorldMap_AlmanacButton)0x0) {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b10b78);
    iVar2 = FUN_045679e8(0x32);
    iVar3 = FUN_045679e8(0xfffffff6);
    Sexy::Graphics::DrawImage(param_1,pIVar4,iVar2,iVar3);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_AlmanacButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_AlmanacButton::Draw(WorldMap_AlmanacButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


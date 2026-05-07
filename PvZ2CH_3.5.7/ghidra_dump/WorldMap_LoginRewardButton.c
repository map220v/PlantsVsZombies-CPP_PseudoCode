// Class: WorldMap_LoginRewardButton


/* WorldMap_LoginRewardButton::~WorldMap_LoginRewardButton() */

void __thiscall
WorldMap_LoginRewardButton::~WorldMap_LoginRewardButton(WorldMap_LoginRewardButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685e4a0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LoginRewardButton_0685e648;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_LoginRewardButton::~WorldMap_LoginRewardButton() */

void __thiscall
WorldMap_LoginRewardButton::~WorldMap_LoginRewardButton(WorldMap_LoginRewardButton *this)

{
  ~WorldMap_LoginRewardButton(this + -0x10);
  return;
}


/* WorldMap_LoginRewardButton::~WorldMap_LoginRewardButton() */

void __thiscall
WorldMap_LoginRewardButton::~WorldMap_LoginRewardButton(WorldMap_LoginRewardButton *this)

{
  ~WorldMap_LoginRewardButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_LoginRewardButton::~WorldMap_LoginRewardButton() */

void __thiscall
WorldMap_LoginRewardButton::~WorldMap_LoginRewardButton(WorldMap_LoginRewardButton *this)

{
  ~WorldMap_LoginRewardButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LoginRewardButton::StaticClassInit() */

void WorldMap_LoginRewardButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_LoginRewardButton");
    (*pcVar2)(plVar1,asStack_10,FUN_045721d0,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LoginRewardButton::StaticGetClass() */

long * WorldMap_LoginRewardButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LoginRewardButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LoginRewardButton::GetClass() const */

long * WorldMap_LoginRewardButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LoginRewardButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LoginRewardButton::WorldMap_LoginRewardButton() */

void __thiscall
WorldMap_LoginRewardButton::WorldMap_LoginRewardButton(WorldMap_LoginRewardButton *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685e4a0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LoginRewardButton_0685e648;
  return;
}


/* WorldMap_LoginRewardButton::StaticNew() */

WorldMap_LoginRewardButton * WorldMap_LoginRewardButton::StaticNew(void)

{
  WorldMap_LoginRewardButton *this;
  
  this = ::operator_new(0x168);
  WorldMap_LoginRewardButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LoginRewardButton::SignToday() */

void WorldMap_LoginRewardButton::SignToday(void)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this;
  long lVar3;
  bool bVar4;
  long local_18;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this);
  if (lVar3 == 0) {
    bVar4 = true;
  }
  else {
    local_18 = LawnApp::GetRealBeijingTime(gLawnApp);
    local_10 = FUN_04572084(*(undefined8 *)(lVar3 + 0xa68));
    lVar3 = LawnApp::BeijingTime(gLawnApp,&local_18);
    iVar1 = *(int *)(lVar3 + 0x14);
    iVar2 = *(int *)(lVar3 + 0x1c);
    lVar3 = LawnApp::BeijingTime(gLawnApp,&local_10);
    bVar4 = false;
    if (iVar1 <= *(int *)(lVar3 + 0x14)) {
      bVar4 = iVar2 <= *(int *)(lVar3 + 0x1c) || iVar1 != *(int *)(lVar3 + 0x14);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


/* WorldMap_LoginRewardButton::ShowSignUI() */

void WorldMap_LoginRewardButton::ShowSignUI(void)

{
  char cVar1;
  char *pcVar2;
  NetworkMgr *this;
  long *plVar3;
  
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Release");
  cVar1 = LawnApp::CheckNetWork(gLawnApp);
  if (cVar1 != '\0') {
    if (s_SyncFinish != '\0') {
      LawnApp::ShowDailySignReward(gLawnApp,false);
      return;
    }
    this = (NetworkMgr *)NetworkMgr::Instance();
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
    (**(code **)(*plVar3 + 0x360))(plVar3,1);
    s_SyncFinish = '\x01';
  }
  return;
}


/* WorldMap_LoginRewardButton::updateButtonStates(int, int, bool) */

void __thiscall
WorldMap_LoginRewardButton::updateButtonStates
          (WorldMap_LoginRewardButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_04572070(this + 0x160);
  }
  else {
    cVar1 = FUN_04572078(this[0x160]);
    if (cVar1 == '\0') {
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Play_UI_Map_Select_Universe_Press");
      FUN_04572070(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    ShowSignUI();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LoginRewardButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_LoginRewardButton::Draw(WorldMap_LoginRewardButton *this,Graphics *param_1)

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
  cVar1 = FUN_04572078(this[0x160]);
  if (cVar1 == '\0') {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11138);
  }
  else {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b110e8);
  }
  Sexy::Graphics::DrawImage(param_1,pIVar4,0,0);
  cVar1 = SignToday();
  if (cVar1 == '\0') {
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b111e0);
    iVar2 = FUN_04572088(0x32);
    iVar3 = FUN_04572088(0xfffffff6);
    Sexy::Graphics::DrawImage(param_1,pIVar4,iVar2,iVar3);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_LoginRewardButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_LoginRewardButton::Draw(WorldMap_LoginRewardButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


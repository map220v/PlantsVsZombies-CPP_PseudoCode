// Class: WorldMap_LuaButtonsDelegate


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuaButtonsDelegate::onUpdate() */

void WorldMap_LuaButtonsDelegate::onUpdate(void)

{
  ModalFlags aMStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (s_pBtnContainer != (long *)0x0) {
    Sexy::WidgetManager::InitModalFlags(*(WidgetManager **)(gLawnApp + 0x360),aMStack_18);
    (**(code **)(*s_pBtnContainer + 0x110))(s_pBtnContainer,aMStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuaButtonsDelegate::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_LuaButtonsDelegate::Draw(WorldMap_LuaButtonsDelegate *this,Graphics *param_1)

{
  GraphicsAutoState aGStack_20 [8];
  ModalFlags aMStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (s_pBtnContainer != (long *)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
    Sexy::WidgetManager::InitModalFlags(*(WidgetManager **)(gLawnApp + 0x360),aMStack_18);
    (**(code **)(*s_pBtnContainer + 0x130))(s_pBtnContainer,aMStack_18,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_LuaButtonsDelegate::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_LuaButtonsDelegate::Draw(WorldMap_LuaButtonsDelegate *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuaButtonsDelegate::StaticClassInit() */

void WorldMap_LuaButtonsDelegate::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_LuaButtonsDelegate");
    (*pcVar2)(plVar1,asStack_10,FUN_0457fce4,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LuaButtonsDelegate::StaticGetClass() */

long * WorldMap_LuaButtonsDelegate::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LuaButtonsDelegate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LuaButtonsDelegate::GetClass() const */

long * WorldMap_LuaButtonsDelegate::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_LuaButtonsDelegate",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_LuaButtonsDelegate::GetBtnContainer() */

WidgetContainer * WorldMap_LuaButtonsDelegate::GetBtnContainer(void)

{
  WidgetContainer *this;
  
  if (s_pBtnContainer != (WidgetContainer *)0x0) {
    return s_pBtnContainer;
  }
  this = ::operator_new(0x70);
  Sexy::WidgetContainer::WidgetContainer(this);
  s_pBtnContainer = this;
  this[0x59] = (WidgetContainer)0x0;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(gLawnApp + 0x360);
  return this;
}


/* WorldMap_LuaButtonsDelegate::IsMouseOver(int, int) */

bool __thiscall
WorldMap_LuaButtonsDelegate::IsMouseOver(WorldMap_LuaButtonsDelegate *this,int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0457fe3c(param_1,param_2);
  return lVar1 != 0;
}


/* WorldMap_LuaButtonsDelegate::TouchMoved(Sexy::Touch const&, int, int) */

void WorldMap_LuaButtonsDelegate::TouchMoved(Touch *param_1,int param_2,int param_3)

{
  DAT_06b12c58 = *(undefined8 *)param_1;
  DAT_06b12c60 = *(undefined8 *)(param_1 + 8);
  DAT_06b12c68 = *(undefined8 *)(param_1 + 0x10);
  DAT_06b12c70 = *(undefined8 *)(param_1 + 0x18);
  DAT_06b12c78 = *(undefined8 *)(param_1 + 0x20);
  DAT_06b12c80 = *(undefined8 *)(param_1 + 0x28);
  DAT_06b12c88 = *(undefined4 *)(param_1 + 0x30);
  return;
}


/* WorldMap_LuaButtonsDelegate::TouchesCanceled() */

void WorldMap_LuaButtonsDelegate::TouchesCanceled(void)

{
  long *plVar1;
  
  if (DAT_06b12c48 != 0) {
    plVar1 = (long *)FUN_0457fe3c((undefined4)DAT_06b12c08,DAT_06b12c08._4_4_);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x268))();
    }
    DAT_06b12c48 = 0;
  }
  return;
}


/* WorldMap_LuaButtonsDelegate::~WorldMap_LuaButtonsDelegate() */

void __thiscall
WorldMap_LuaButtonsDelegate::~WorldMap_LuaButtonsDelegate(WorldMap_LuaButtonsDelegate *this)

{
  *(undefined ***)this = &PTR_GetClass_06860c90;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LuaButtonsDelegate_06860e30;
  FUN_0458004c("onDestroy",0);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (s_pBtnContainer != (long *)0x0) {
    (**(code **)(*s_pBtnContainer + 0x80))(s_pBtnContainer,1,1);
  }
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_LuaButtonsDelegate::~WorldMap_LuaButtonsDelegate() */

void __thiscall
WorldMap_LuaButtonsDelegate::~WorldMap_LuaButtonsDelegate(WorldMap_LuaButtonsDelegate *this)

{
  ~WorldMap_LuaButtonsDelegate(this + -0x10);
  return;
}


/* WorldMap_LuaButtonsDelegate::~WorldMap_LuaButtonsDelegate() */

void __thiscall
WorldMap_LuaButtonsDelegate::~WorldMap_LuaButtonsDelegate(WorldMap_LuaButtonsDelegate *this)

{
  ~WorldMap_LuaButtonsDelegate(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_LuaButtonsDelegate::~WorldMap_LuaButtonsDelegate() */

void __thiscall
WorldMap_LuaButtonsDelegate::~WorldMap_LuaButtonsDelegate(WorldMap_LuaButtonsDelegate *this)

{
  ~WorldMap_LuaButtonsDelegate(this + -0x10);
  return;
}


/* WorldMap_LuaButtonsDelegate::onVisibleStateChange(bool) */

void __thiscall
WorldMap_LuaButtonsDelegate::onVisibleStateChange(WorldMap_LuaButtonsDelegate *this,bool param_1)

{
  FUN_0458004c("onDelegateVisibleChange",param_1);
  return;
}


/* WorldMap_LuaButtonsDelegate::onWorldLoaded() */

void WorldMap_LuaButtonsDelegate::onWorldLoaded(void)

{
  FUN_0458004c("onWorldLoaded",0);
  return;
}


/* WorldMap_LuaButtonsDelegate::CheckActivated() */

void WorldMap_LuaButtonsDelegate::CheckActivated(void)

{
  FUN_0458004c("CheckActivated",0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuaButtonsDelegate::TouchEnded(Sexy::Touch const&, int, int) */

void WorldMap_LuaButtonsDelegate::TouchEnded(Touch *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 auStack_40 [56];
  long local_8;
  
  DAT_06b12c58 = *(undefined8 *)param_1;
  DAT_06b12c60 = *(undefined8 *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  DAT_06b12c68 = *(undefined8 *)(param_1 + 0x10);
  DAT_06b12c70 = *(undefined8 *)(param_1 + 0x18);
  DAT_06b12c78 = *(undefined8 *)(param_1 + 0x20);
  DAT_06b12c80 = *(undefined8 *)(param_1 + 0x28);
  DAT_06b12c88 = *(undefined4 *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  plVar3 = (long *)FUN_0457fe3c(param_2 + iVar1,param_3 + iVar2);
  if (plVar3 != (long *)0x0) {
    pcVar4 = *(code **)(*plVar3 + 0x260);
    FUN_04580150(auStack_40,param_2 + iVar1,param_3 + iVar2,plVar3);
    (*pcVar4)(plVar3,auStack_40);
  }
  if ((plVar3 != DAT_06b12c48) && (DAT_06b12c48 != (long *)0x0)) {
    TouchesCanceled();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuaButtonsDelegate::OnMouseMove(int, int) */

void __thiscall
WorldMap_LuaButtonsDelegate::OnMouseMove(WorldMap_LuaButtonsDelegate *this,int param_1,int param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)FUN_0457fe3c(param_1,param_2);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 600);
    FUN_04580150(auStack_40,param_1,param_2,plVar1);
    (*pcVar2)(plVar1,auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuaButtonsDelegate::OnMouseDown(int, int) */

void __thiscall
WorldMap_LuaButtonsDelegate::OnMouseDown(WorldMap_LuaButtonsDelegate *this,int param_1,int param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)FUN_0457fe3c(param_1,param_2);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x250);
    FUN_04580150(&local_40,param_1,param_2,plVar1);
    (*pcVar2)(plVar1,&local_40);
    DAT_06b12c48 = plVar1;
    FUN_04580150(&local_40,param_1,param_2,0);
    DAT_06b12bf8 = local_40;
    DAT_06b12c00 = uStack_38;
    DAT_06b12c08 = local_30;
    DAT_06b12c10 = uStack_28;
    DAT_06b12c28 = local_10;
    DAT_06b12c18 = local_20;
    DAT_06b12c20 = uStack_18;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LuaButtonsDelegate::onClickableStateChanged() */

void __thiscall
WorldMap_LuaButtonsDelegate::onClickableStateChanged(WorldMap_LuaButtonsDelegate *this)

{
  undefined1 uVar1;
  
  uVar1 = FUN_04580458(*(undefined4 *)(this + 0x68));
  FUN_0458004c("onDelegateClickableChanged",uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_LuaButtonsDelegate::WorldMap_LuaButtonsDelegate() */

void __thiscall
WorldMap_LuaButtonsDelegate::WorldMap_LuaButtonsDelegate(WorldMap_LuaButtonsDelegate *this)

{
  undefined *this_00;
  CLuaEngine *this_01;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06860c90;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_LuaButtonsDelegate_06860e30;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldLoaded);
  Sexy::Delegate0::Delegate0<WorldMap_LuaButtonsDelegate,void(WorldMap_LuaButtonsDelegate::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::WorldMapWorldLoaded,aDStack_38);
  this_01 = (CLuaEngine *)Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  Lua::CLuaEngine::ExecuteTableFunction(this_01,"luaApp","CreateWorldMapBtns");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_LuaButtonsDelegate::StaticNew() */

WorldMap_LuaButtonsDelegate * WorldMap_LuaButtonsDelegate::StaticNew(void)

{
  WorldMap_LuaButtonsDelegate *this;
  
  this = ::operator_new(0x168);
  WorldMap_LuaButtonsDelegate(this);
  return this;
}


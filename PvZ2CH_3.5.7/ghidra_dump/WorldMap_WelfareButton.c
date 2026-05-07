// Class: WorldMap_WelfareButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WelfareButton::initLoadingResourcesGroupList() */

void __thiscall WorldMap_WelfareButton::initLoadingResourcesGroupList(WorldMap_WelfareButton *this)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)this + 0xd0);
  std::string::string(asStack_10,"UI_WorldMap");
  (*pcVar1)(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_WelfareButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_WelfareButton::Draw(WorldMap_WelfareButton *this,Graphics *param_1)

{
  undefined4 uVar1;
  
  uVar1 = LawnApp::IsChooseWelfareDialogValid(gLawnApp);
  FUN_0457a374(this + 0x1a8,uVar1);
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  return;
}


/* non-virtual thunk to WorldMap_WelfareButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_WelfareButton::Draw(WorldMap_WelfareButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WorldMap_WelfareButton::OnKillChooseDialog(UIWidget*) */

void __thiscall
WorldMap_WelfareButton::OnKillChooseDialog(WorldMap_WelfareButton *this,UIWidget *param_1)

{
  LawnApp *this_00;
  char cVar1;
  
  this_00 = gLawnApp;
  if (param_1 != (UIWidget *)this) {
    cVar1 = LawnApp::IsChooseWelfareDialogValid(gLawnApp);
    if (cVar1 != '\0') {
      LawnApp::KillChooseWelfareDialog(this_00);
      MessageRouter::Post((_func_void *)gMessageRouter);
      return;
    }
  }
  return;
}


/* WorldMap_WelfareButton::KillChooseDialog() */

void WorldMap_WelfareButton::KillChooseDialog(void)

{
  LawnApp *this;
  char cVar1;
  
  this = gLawnApp;
  cVar1 = LawnApp::IsChooseWelfareDialogValid(gLawnApp);
  if (cVar1 == '\0') {
    return;
  }
  LawnApp::KillChooseWelfareDialog(this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WelfareButton::StaticClassInit() */

void WorldMap_WelfareButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_WelfareButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0457a890,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_WelfareButton::StaticGetClass() */

long * WorldMap_WelfareButton::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_WelfareButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_WelfareButton::GetClass() const */

long * WorldMap_WelfareButton::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_WelfareButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_WelfareButton::~WorldMap_WelfareButton() */

void __thiscall WorldMap_WelfareButton::~WorldMap_WelfareButton(WorldMap_WelfareButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0685ff10;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_WelfareButton_068600b8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_WelfareButton::~WorldMap_WelfareButton() */

void __thiscall WorldMap_WelfareButton::~WorldMap_WelfareButton(WorldMap_WelfareButton *this)

{
  ~WorldMap_WelfareButton(this + -0x10);
  return;
}


/* WorldMap_WelfareButton::~WorldMap_WelfareButton() */

void __thiscall WorldMap_WelfareButton::~WorldMap_WelfareButton(WorldMap_WelfareButton *this)

{
  ~WorldMap_WelfareButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_WelfareButton::~WorldMap_WelfareButton() */

void __thiscall WorldMap_WelfareButton::~WorldMap_WelfareButton(WorldMap_WelfareButton *this)

{
  ~WorldMap_WelfareButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_WelfareButton::WorldMap_WelfareButton() */

void __thiscall WorldMap_WelfareButton::WorldMap_WelfareButton(WorldMap_WelfareButton *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685ff10;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_WelfareButton_068600b8;
  std::string::string((string *)&local_50,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_BOON");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  std::string::string((string *)&local_50,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)&local_50);
  nop();
  FUN_0457a5e4(afStack_38,this);
  PopingBonusUI::SetCloseFuction((PopingBonusUI *)this,afStack_38);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnKillChooseDialog);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<UIWidget*,Sexy::CBMemberTranslatorX<WorldMap_WelfareButton,void(WorldMap_WelfareButton::*)(UIWidget*)>>
            ((MessageRouter *)puVar1,Message::KillChooseDialog,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillChooseDialog);
  Sexy::Delegate0::Delegate0<WorldMap_WelfareButton,void(WorldMap_WelfareButton::*)()>
            ((Delegate0 *)afStack_38,aCStack_68);
  MessageRouter::Subscribe
            ((MessageRouter *)puVar1,Message::CheckValidChooseDialog,(Delegate0 *)afStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_WelfareButton::StaticNew() */

WorldMap_WelfareButton * WorldMap_WelfareButton::StaticNew(void)

{
  WorldMap_WelfareButton *this;
  
  this = ::operator_new(0x1d0);
  WorldMap_WelfareButton(this);
  return this;
}


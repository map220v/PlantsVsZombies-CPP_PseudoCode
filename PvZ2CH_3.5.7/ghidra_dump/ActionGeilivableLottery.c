// Class: ActionGeilivableLottery


/* ActionGeilivableLottery::OnGeilivableLotteryClosed() */

void __thiscall ActionGeilivableLottery::OnGeilivableLotteryClosed(ActionGeilivableLottery *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this[9] = (ActionGeilivableLottery)0x1;
  return;
}


/* ActionGeilivableLottery::~ActionGeilivableLottery() */

void __thiscall ActionGeilivableLottery::~ActionGeilivableLottery(ActionGeilivableLottery *this)

{
  *(undefined ***)this = &PTR_GetClass_068590c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionGeilivableLottery::~ActionGeilivableLottery() */

void __thiscall ActionGeilivableLottery::~ActionGeilivableLottery(ActionGeilivableLottery *this)

{
  ~ActionGeilivableLottery(this);
  AK::FreeHook(this);
  return;
}


/* ActionGeilivableLottery::StaticGetClass() */

long * ActionGeilivableLottery::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionGeilivableLottery",uVar2,StaticNew);
  return sClass;
}


/* ActionGeilivableLottery::GetClass() const */

long * ActionGeilivableLottery::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionGeilivableLottery",uVar2,StaticNew);
  return sClass;
}


/* ActionGeilivableLottery::ActionGeilivableLottery() */

void __thiscall ActionGeilivableLottery::ActionGeilivableLottery(ActionGeilivableLottery *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068590c0;
  return;
}


/* ActionGeilivableLottery::StaticNew() */

ActionGeilivableLottery * ActionGeilivableLottery::StaticNew(void)

{
  ActionGeilivableLottery *this;
  
  this = ::operator_new(0x18);
  ActionGeilivableLottery(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionGeilivableLottery::Start() */

void __thiscall ActionGeilivableLottery::Start(ActionGeilivableLottery *this)

{
  undefined *this_00;
  char cVar1;
  int iVar2;
  CBMemberTranslatorX aCStack_a0 [24];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  if (cVar1 != '\0') {
    cVar1 = LawnApp::IsChannelWithBigDeal();
    if (cVar1 != '\0') {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem(aAStack_88);
      this_00 = gMessageRouter;
      if (local_70 != '\0') {
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnGeilivableLotteryClosed);
        Sexy::Delegate0::Delegate0<ActionGeilivableLottery,void(ActionGeilivableLottery::*)()>
                  ((Delegate0 *)aAStack_88,aCStack_a0);
        MessageRouter::Subscribe
                  ((MessageRouter *)this_00,Message::ActivePopupUIClosed,(Delegate0 *)aAStack_88);
        LawnApp::ShowGeilivableLottery(SUB81(gLawnApp,0));
        goto LAB_0455f0b0;
      }
    }
  }
  this[9] = (ActionGeilivableLottery)0x1;
LAB_0455f0b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionGeilivableLottery::CreateIfNeed(bool&) */

void ActionGeilivableLottery::CreateIfNeed(bool *param_1)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  ActionGeilivableLottery *this;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_98 [8];
  string asStack_90 [8];
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  pLVar4 = aLStack_98;
  local_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_90,"PopUpDisabled");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_90,pLVar4,in_x3,in_x4);
  std::string::~string(asStack_90);
  nop();
  if ((cVar1 == '\0') && (*param_1 == false)) {
    cVar1 = LawnApp::IsChannelWithBigDeal();
    if (cVar1 != '\0') {
      cVar1 = LawnApp::IsNetworkModuleOK();
      if (cVar1 != '\0') {
        iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar2);
        ActiveItem::~ActiveItem(aAStack_88);
        if (local_70 != '\0') {
          this = ::operator_new(0x18);
          *(undefined8 *)this = 0;
          this[8] = (ActionGeilivableLottery)0x0;
          this[9] = (ActionGeilivableLottery)0x0;
          this[10] = (ActionGeilivableLottery)0x0;
          *(undefined4 *)(this + 0xc) = 0;
          *(undefined4 *)(this + 0x10) = 0;
          ActionGeilivableLottery(this);
          goto LAB_0456074c;
        }
      }
    }
  }
  this = (ActionGeilivableLottery *)0x0;
LAB_0456074c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


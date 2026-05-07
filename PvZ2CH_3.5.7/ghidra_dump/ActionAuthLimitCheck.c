// Class: ActionAuthLimitCheck


/* ActionAuthLimitCheck::~ActionAuthLimitCheck() */

void __thiscall ActionAuthLimitCheck::~ActionAuthLimitCheck(ActionAuthLimitCheck *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a8c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionAuthLimitCheck::~ActionAuthLimitCheck() */

void __thiscall ActionAuthLimitCheck::~ActionAuthLimitCheck(ActionAuthLimitCheck *this)

{
  ~ActionAuthLimitCheck(this);
  AK::FreeHook(this);
  return;
}


/* ActionAuthLimitCheck::StaticGetClass() */

long * ActionAuthLimitCheck::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionAuthLimitCheck",uVar2,StaticNew);
  return sClass;
}


/* ActionAuthLimitCheck::GetClass() const */

long * ActionAuthLimitCheck::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionAuthLimitCheck",uVar2,StaticNew);
  return sClass;
}


/* ActionAuthLimitCheck::ActionAuthLimitCheck() */

void __thiscall ActionAuthLimitCheck::ActionAuthLimitCheck(ActionAuthLimitCheck *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a8c0;
  return;
}


/* ActionAuthLimitCheck::StaticNew() */

ActionAuthLimitCheck * ActionAuthLimitCheck::StaticNew(void)

{
  ActionAuthLimitCheck *this;
  
  this = ::operator_new(0x18);
  ActionAuthLimitCheck(this);
  return this;
}


/* ActionAuthLimitCheck::CreateIfNeed(bool&) */

ActionAuthLimitCheck * ActionAuthLimitCheck::CreateIfNeed(bool *param_1)

{
  char cVar1;
  long lVar2;
  ActionAuthLimitCheck *this;
  
  lVar2 = Sexy::LazySingleton<AuthMgr>::GetInstance();
  cVar1 = FUN_0454b2b0(*(undefined1 *)(lVar2 + 0x1c));
  if (cVar1 == '\0') {
    lVar2 = Sexy::LazySingleton<AuthMgr>::GetInstance();
    cVar1 = FUN_0454b2ac(*(undefined1 *)(lVar2 + 0x1d));
    if (cVar1 == '\0') {
      return (ActionAuthLimitCheck *)0x0;
    }
  }
  this = ::operator_new(0x18);
  *(undefined8 *)this = 0;
  this[8] = (ActionAuthLimitCheck)0x0;
  this[9] = (ActionAuthLimitCheck)0x0;
  this[10] = (ActionAuthLimitCheck)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  ActionAuthLimitCheck(this);
  return this;
}


/* ActionAuthLimitCheck::Start() */

void __thiscall ActionAuthLimitCheck::Start(ActionAuthLimitCheck *this)

{
  char cVar1;
  
  Sexy::LazySingleton<AuthMgr>::GetInstance();
  cVar1 = AuthMgr::HandleReachLimit();
  if (cVar1 == '\0') {
    this[9] = (ActionAuthLimitCheck)0x1;
  }
  return;
}


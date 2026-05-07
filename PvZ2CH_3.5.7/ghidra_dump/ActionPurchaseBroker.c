// Class: ActionPurchaseBroker


/* ActionPurchaseBroker::~ActionPurchaseBroker() */

void __thiscall ActionPurchaseBroker::~ActionPurchaseBroker(ActionPurchaseBroker *this)

{
  *(undefined ***)this = &PTR_GetClass_068593c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionPurchaseBroker::~ActionPurchaseBroker() */

void __thiscall ActionPurchaseBroker::~ActionPurchaseBroker(ActionPurchaseBroker *this)

{
  ~ActionPurchaseBroker(this);
  AK::FreeHook(this);
  return;
}


/* ActionPurchaseBroker::StaticGetClass() */

long * ActionPurchaseBroker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ActionPurchaseBroker",uVar2,StaticNew);
  return sClass;
}


/* ActionPurchaseBroker::GetClass() const */

long * ActionPurchaseBroker::GetClass(void)

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
  (*pcVar3)(plVar1,"ActionPurchaseBroker",uVar2,StaticNew);
  return sClass;
}


/* ActionPurchaseBroker::ActionPurchaseBroker() */

void __thiscall ActionPurchaseBroker::ActionPurchaseBroker(ActionPurchaseBroker *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_068593c0;
  return;
}


/* ActionPurchaseBroker::StaticNew() */

ActionPurchaseBroker * ActionPurchaseBroker::StaticNew(void)

{
  ActionPurchaseBroker *this;
  
  this = ::operator_new(0x18);
  ActionPurchaseBroker(this);
  return this;
}


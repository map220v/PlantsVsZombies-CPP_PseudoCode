// Class: MiniGamePerkItemTimeBack


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemTimeBack::StaticClassInit() */

void MiniGamePerkItemTimeBack::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItemTimeBack");
    (*pcVar2)(plVar1,asStack_10,FUN_038992bc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemTimeBack::StaticGetClass() */

long * MiniGamePerkItemTimeBack::StaticGetClass(void)

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
  uVar2 = MiniGamePerkItem::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemTimeBack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemTimeBack::GetClass() const */

long * MiniGamePerkItemTimeBack::GetClass(void)

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
  uVar2 = MiniGamePerkItem::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemTimeBack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemTimeBack::~MiniGamePerkItemTimeBack() */

void __thiscall MiniGamePerkItemTimeBack::~MiniGamePerkItemTimeBack(MiniGamePerkItemTimeBack *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0be0;
  MiniGamePerkItem::~MiniGamePerkItem((MiniGamePerkItem *)this);
  return;
}


/* MiniGamePerkItemTimeBack::~MiniGamePerkItemTimeBack() */

void __thiscall MiniGamePerkItemTimeBack::~MiniGamePerkItemTimeBack(MiniGamePerkItemTimeBack *this)

{
  ~MiniGamePerkItemTimeBack(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkItemTimeBack::MiniGamePerkItemTimeBack() */

void __thiscall MiniGamePerkItemTimeBack::MiniGamePerkItemTimeBack(MiniGamePerkItemTimeBack *this)

{
  MiniGamePerkItem::MiniGamePerkItem((MiniGamePerkItem *)this);
  *(undefined ***)this = &PTR_GetClass_066b0be0;
  return;
}


/* MiniGamePerkItemTimeBack::StaticNew() */

MiniGamePerkItemTimeBack * MiniGamePerkItemTimeBack::StaticNew(void)

{
  MiniGamePerkItemTimeBack *this;
  
  this = ::operator_new(0x30);
  MiniGamePerkItemTimeBack(this);
  return this;
}


/* MiniGamePerkItemTimeBack::tryUse() */

void MiniGamePerkItemTimeBack::tryUse(void)

{
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::NotifyTimeBack,5);
  return;
}


/* MiniGamePerkItemTimeBack::Use() */

void __thiscall MiniGamePerkItemTimeBack::Use(MiniGamePerkItemTimeBack *this)

{
  MiniGamePerkItem::Use((MiniGamePerkItem *)this);
  tryUse();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemTimeBack::Activate() */

void __thiscall MiniGamePerkItemTimeBack::Activate(MiniGamePerkItemTimeBack *this)

{
  undefined4 uVar1;
  bool bVar2;
  long extraout_x0;
  undefined4 *puVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  MiniGamePerk::Activate((MiniGamePerk *)this);
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  puVar3 = (undefined4 *)
           FUN_03896768(*(undefined8 *)(extraout_x0 + 0x48),(long)*(int *)(this + 0x10));
  uVar1 = *(undefined4 *)(extraout_x0 + 0x60);
  bVar2 = lStack_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x24) = *puVar3;
  *(undefined4 *)(this + 0x28) = uVar1;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: RiftThemeInvisible


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeInvisible::StaticClassInit() */

void RiftThemeInvisible::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeInvisible");
    (*pcVar2)(plVar1,asStack_10,FUN_036faeb8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeInvisible::StaticGetClass() */

long * RiftThemeInvisible::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeInvisible",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeInvisible::GetClass() const */

long * RiftThemeInvisible::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeInvisible",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeInvisible::~RiftThemeInvisible() */

void __thiscall RiftThemeInvisible::~RiftThemeInvisible(RiftThemeInvisible *this)

{
  *(undefined ***)this = &PTR_GetClass_06687550;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeInvisible::~RiftThemeInvisible() */

void __thiscall RiftThemeInvisible::~RiftThemeInvisible(RiftThemeInvisible *this)

{
  ~RiftThemeInvisible(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeInvisible::RiftThemeInvisible() */

void __thiscall RiftThemeInvisible::RiftThemeInvisible(RiftThemeInvisible *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06687550;
  return;
}


/* RiftThemeInvisible::StaticNew() */

RiftThemeInvisible * RiftThemeInvisible::StaticNew(void)

{
  RiftThemeInvisible *this;
  
  this = ::operator_new(0x20);
  RiftThemeInvisible(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeInvisible::onZombiePlaceOnBoard(Zombie*) */

void __thiscall RiftThemeInvisible::onZombiePlaceOnBoard(RiftThemeInvisible *this,Zombie *param_1)

{
  char cVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(extraout_x0 + 0x20),param_1);
    if (cVar1 != '\0') {
      Zombie::InvokeInvisible(param_1,true,true,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeInvisible::Activate() */

void __thiscall RiftThemeInvisible::Activate(RiftThemeInvisible *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  RiftTheme::Activate((RiftTheme *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombiePlaceOnBoard);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<RiftThemeInvisible,void(RiftThemeInvisible::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_40);
  return;
}


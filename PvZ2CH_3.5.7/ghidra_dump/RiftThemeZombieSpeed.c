// Class: RiftThemeZombieSpeed


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeZombieSpeed::StaticClassInit() */

void RiftThemeZombieSpeed::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeZombieSpeed");
    (*pcVar2)(plVar1,asStack_10,FUN_036fa778,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeZombieSpeed::StaticGetClass() */

long * RiftThemeZombieSpeed::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeZombieSpeed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeZombieSpeed::GetClass() const */

long * RiftThemeZombieSpeed::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeZombieSpeed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeZombieSpeed::~RiftThemeZombieSpeed() */

void __thiscall RiftThemeZombieSpeed::~RiftThemeZombieSpeed(RiftThemeZombieSpeed *this)

{
  *(undefined ***)this = &PTR_GetClass_066872f0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeZombieSpeed::~RiftThemeZombieSpeed() */

void __thiscall RiftThemeZombieSpeed::~RiftThemeZombieSpeed(RiftThemeZombieSpeed *this)

{
  ~RiftThemeZombieSpeed(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeZombieSpeed::RiftThemeZombieSpeed() */

void __thiscall RiftThemeZombieSpeed::RiftThemeZombieSpeed(RiftThemeZombieSpeed *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_066872f0;
  return;
}


/* RiftThemeZombieSpeed::StaticNew() */

RiftThemeZombieSpeed * RiftThemeZombieSpeed::StaticNew(void)

{
  RiftThemeZombieSpeed *this;
  
  this = ::operator_new(0x20);
  RiftThemeZombieSpeed(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeZombieSpeed::onZombiePlaceOnBoard(Zombie*) */

void __thiscall
RiftThemeZombieSpeed::onZombiePlaceOnBoard(RiftThemeZombieSpeed *this,Zombie *param_1)

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
      (**(code **)(*(long *)param_1 + 0x358))(*(undefined4 *)(extraout_x0 + 0x48),param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeZombieSpeed::Activate() */

void __thiscall RiftThemeZombieSpeed::Activate(RiftThemeZombieSpeed *this)

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
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<RiftThemeZombieSpeed,void(RiftThemeZombieSpeed::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_40);
  return;
}


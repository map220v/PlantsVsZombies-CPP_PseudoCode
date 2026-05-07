// Class: RiftThemeColdReduce


/* RiftThemeColdReduce::OnZombieConditionPrepare(Zombie*, int*, float*) */

void __thiscall
RiftThemeColdReduce::OnZombieConditionPrepare
          (RiftThemeColdReduce *this,Zombie *param_1,int *param_2,float *param_3)

{
  if (*param_2 != 1) {
    return;
  }
  *param_3 = -1.0;
  return;
}


/* RiftThemeColdReduce::onZombiePlaceOnBoard(Zombie*) */

void __thiscall RiftThemeColdReduce::onZombiePlaceOnBoard(RiftThemeColdReduce *this,Zombie *param_1)

{
  if (param_1 != (Zombie *)0x0) {
    Zombie::SetDamageBalancer((Zombie *)0xbf000000,param_1,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeColdReduce::StaticClassInit() */

void RiftThemeColdReduce::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeColdReduce");
    (*pcVar2)(plVar1,asStack_10,FUN_03700ca4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeColdReduce::StaticGetClass() */

long * RiftThemeColdReduce::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeColdReduce",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeColdReduce::GetClass() const */

long * RiftThemeColdReduce::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeColdReduce",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeColdReduce::~RiftThemeColdReduce() */

void __thiscall RiftThemeColdReduce::~RiftThemeColdReduce(RiftThemeColdReduce *this)

{
  *(undefined ***)this = &PTR_GetClass_06688f20;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeColdReduce::~RiftThemeColdReduce() */

void __thiscall RiftThemeColdReduce::~RiftThemeColdReduce(RiftThemeColdReduce *this)

{
  ~RiftThemeColdReduce(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeColdReduce::RiftThemeColdReduce() */

void __thiscall RiftThemeColdReduce::RiftThemeColdReduce(RiftThemeColdReduce *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06688f20;
  return;
}


/* RiftThemeColdReduce::StaticNew() */

RiftThemeColdReduce * RiftThemeColdReduce::StaticNew(void)

{
  RiftThemeColdReduce *this;
  
  this = ::operator_new(0x20);
  RiftThemeColdReduce(this);
  return this;
}


/* RiftThemeColdReduce::Activate() */

void __thiscall RiftThemeColdReduce::Activate(RiftThemeColdReduce *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  RiftTheme::Activate((RiftTheme *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieConditionPrepare);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Zombie*,int*,float*,Sexy::CBMemberTranslatorX<RiftThemeColdReduce,void(RiftThemeColdReduce::*)(Zombie*,int*,float*)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionPrepare,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombiePlaceOnBoard);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<RiftThemeColdReduce,void(RiftThemeColdReduce::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_70);
  return;
}


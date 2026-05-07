// Class: RiftThemeLightingReduce


/* RiftThemeLightingReduce::OnZombieConditionPrepare(Zombie*, int*, float*) */

void __thiscall
RiftThemeLightingReduce::OnZombieConditionPrepare
          (RiftThemeLightingReduce *this,Zombie *param_1,int *param_2,float *param_3)

{
  if (*param_2 != 0x18) {
    return;
  }
  *param_3 = -1.0;
  return;
}


/* RiftThemeLightingReduce::onZombiePlaceOnBoard(Zombie*) */

void __thiscall
RiftThemeLightingReduce::onZombiePlaceOnBoard(RiftThemeLightingReduce *this,Zombie *param_1)

{
  if (param_1 != (Zombie *)0x0) {
    Zombie::SetDamageBalancer((Zombie *)0xbf000000,param_1,0x80);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLightingReduce::StaticClassInit() */

void RiftThemeLightingReduce::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeLightingReduce");
    (*pcVar2)(plVar1,asStack_10,FUN_0370087c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeLightingReduce::StaticGetClass() */

long * RiftThemeLightingReduce::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeLightingReduce",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeLightingReduce::GetClass() const */

long * RiftThemeLightingReduce::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeLightingReduce",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeLightingReduce::~RiftThemeLightingReduce() */

void __thiscall RiftThemeLightingReduce::~RiftThemeLightingReduce(RiftThemeLightingReduce *this)

{
  *(undefined ***)this = &PTR_GetClass_06688df0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeLightingReduce::~RiftThemeLightingReduce() */

void __thiscall RiftThemeLightingReduce::~RiftThemeLightingReduce(RiftThemeLightingReduce *this)

{
  ~RiftThemeLightingReduce(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeLightingReduce::RiftThemeLightingReduce() */

void __thiscall RiftThemeLightingReduce::RiftThemeLightingReduce(RiftThemeLightingReduce *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06688df0;
  return;
}


/* RiftThemeLightingReduce::StaticNew() */

RiftThemeLightingReduce * RiftThemeLightingReduce::StaticNew(void)

{
  RiftThemeLightingReduce *this;
  
  this = ::operator_new(0x20);
  RiftThemeLightingReduce(this);
  return this;
}


/* RiftThemeLightingReduce::Activate() */

void __thiscall RiftThemeLightingReduce::Activate(RiftThemeLightingReduce *this)

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
  Subscribe<Zombie*,int*,float*,Sexy::CBMemberTranslatorX<RiftThemeLightingReduce,void(RiftThemeLightingReduce::*)(Zombie*,int*,float*)>>
            ((MessageRouter *)puVar1,Message::ZombieConditionPrepare,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombiePlaceOnBoard);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<RiftThemeLightingReduce,void(RiftThemeLightingReduce::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_70);
  return;
}


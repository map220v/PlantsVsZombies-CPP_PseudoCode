// Class: Entangle_Effect


/* Entangle_Effect::~Entangle_Effect() */

void __thiscall Entangle_Effect::~Entangle_Effect(Entangle_Effect *this)

{
  *(undefined ***)this = &PTR_GetClass_069ae800;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Entangle_Effect::~Entangle_Effect() */

void __thiscall Entangle_Effect::~Entangle_Effect(Entangle_Effect *this)

{
  ~Entangle_Effect(this);
  AK::FreeHook(this);
  return;
}


/* Entangle_Effect::Entangle_Effect() */

void __thiscall Entangle_Effect::Entangle_Effect(Entangle_Effect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_069ae800;
  return;
}


/* Entangle_Effect::StaticNew() */

Entangle_Effect * Entangle_Effect::StaticNew(void)

{
  Entangle_Effect *this;
  
  this = ::operator_new(0x110);
  Entangle_Effect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Entangle_Effect::StaticClassInit() */

void Entangle_Effect::StaticClassInit(void)

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
    std::string::string(asStack_10,"Entangle_Effect");
    (*pcVar2)(plVar1,asStack_10,FUN_04d374c0,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Entangle_Effect::StaticGetClass() */

long * Entangle_Effect::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Entangle_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Entangle_Effect::GetClass() const */

long * Entangle_Effect::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"Entangle_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Entangle_Effect::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall
Entangle_Effect::OnAnimCommand(Entangle_Effect *this,string *param_1,string *param_2)

{
  bool bVar1;
  long lVar2;
  RtObject *this_00;
  Zombie *pZVar3;
  char *pcVar4;
  
  bVar1 = std::operator==(param_1,"do_hit");
  if (((bVar1) || (bVar1 = std::operator==(param_2,"do_hit"), bVar1)) &&
     (lVar2 = StandaloneEffect::GetAttachedTo((StandaloneEffect *)this), lVar2 != 0)) {
    this_00 = (RtObject *)StandaloneEffect::GetAttachedTo((StandaloneEffect *)this);
    pZVar3 = Sexy::RtObject::Cast<Zombie>(this_00);
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Plant_Attack_Hit");
    MessageRouter::Broadcast<Zombie*,Zombie*>
              ((MessageRouter *)gMessageRouter,Message::DoEntangleZombie,pZVar3);
    return;
  }
  return;
}


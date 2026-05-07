// Class: Effect_PoisonGas


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PoisonGas::StaticClassInit() */

void Effect_PoisonGas::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_PoisonGas");
    (*pcVar2)(plVar1,asStack_10,FUN_04165678,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PoisonGas::StaticGetClass() */

long * Effect_PoisonGas::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_PoisonGas",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_PoisonGas::GetClass() const */

long * Effect_PoisonGas::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_PoisonGas",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_PoisonGas::~Effect_PoisonGas() */

void __thiscall Effect_PoisonGas::~Effect_PoisonGas(Effect_PoisonGas *this)

{
  *(undefined ***)this = &PTR_GetClass_067f35e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_PoisonGas::~Effect_PoisonGas() */

void __thiscall Effect_PoisonGas::~Effect_PoisonGas(Effect_PoisonGas *this)

{
  ~Effect_PoisonGas(this);
  AK::FreeHook(this);
  return;
}


/* Effect_PoisonGas::Effect_PoisonGas() */

void __thiscall Effect_PoisonGas::Effect_PoisonGas(Effect_PoisonGas *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067f35e0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* Effect_PoisonGas::StaticNew() */

Effect_PoisonGas * Effect_PoisonGas::StaticNew(void)

{
  Effect_PoisonGas *this;
  
  this = ::operator_new(0x118);
  Effect_PoisonGas(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_PoisonGas::PoisonZombie(Zombie*, float) */

void __thiscall Effect_PoisonGas::PoisonZombie(Effect_PoisonGas *this,Zombie *param_1,float param_2)

{
  PopAnim *pPVar1;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_18,10.0,-50.0,0.0);
  std::string::string(asStack_28,"POPANIM_EFFECTS_GARLIC_DUQI");
  GetPAMByName(asStack_28);
  pPVar1 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this,(RealObject *)param_1,(SexyVector3 *)aVStack_18,1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x110),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  std::string::string((string *)aRStack_20,"idle2");
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)param_2,this,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_PoisonGas::onUpdate() */

void __thiscall Effect_PoisonGas::onUpdate(Effect_PoisonGas *this)

{
  char cVar1;
  long *plVar2;
  
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x110));
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
    cVar1 = (**(code **)(*plVar2 + 0x328))();
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x48))(this);
      return;
    }
  }
  return;
}


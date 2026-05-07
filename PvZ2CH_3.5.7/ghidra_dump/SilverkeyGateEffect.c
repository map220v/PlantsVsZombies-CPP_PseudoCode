// Class: SilverkeyGateEffect


/* SilverkeyGateEffect::onInitialized() */

void __thiscall SilverkeyGateEffect::onInitialized(SilverkeyGateEffect *this)

{
  Effect_PopAnim::onInitialized((Effect_PopAnim *)this);
  *(undefined4 *)(this + 0x10c) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SilverkeyGateEffect::StaticClassInit() */

void SilverkeyGateEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"SilverkeyGateEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_03767484,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SilverkeyGateEffect::StaticGetClass() */

long * SilverkeyGateEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SilverkeyGateEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SilverkeyGateEffect::GetClass() const */

long * SilverkeyGateEffect::GetClass(void)

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
  (*pcVar3)(plVar1,"SilverkeyGateEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SilverkeyGateEffect::SetState(int) */

void __thiscall SilverkeyGateEffect::SetState(SilverkeyGateEffect *this,int param_1)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x10c) != param_1) && (*(int *)(this + 0x10c) = param_1, (uint)param_1 < 4))
  {
    switch(param_1) {
    case 0:
      __s = "attack_start";
      break;
    case 1:
      std::string::string(asStack_10,"attack_loop");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      goto LAB_03737734;
    case 2:
      __s = "attack_over";
      break;
    case 3:
      __s = "summon";
    }
    std::string::string(asStack_10,__s);
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
LAB_03737734:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SilverkeyGateEffect::Start() */

void __thiscall SilverkeyGateEffect::Start(SilverkeyGateEffect *this)

{
  SetState(this,0);
  return;
}


/* SilverkeyGateEffect::PlaySummon() */

void __thiscall SilverkeyGateEffect::PlaySummon(SilverkeyGateEffect *this)

{
  SetState(this,3);
  return;
}


/* SilverkeyGateEffect::PlayEnd() */

void __thiscall SilverkeyGateEffect::PlayEnd(SilverkeyGateEffect *this)

{
  SetState(this,2);
  return;
}


/* SilverkeyGateEffect::~SilverkeyGateEffect() */

void __thiscall SilverkeyGateEffect::~SilverkeyGateEffect(SilverkeyGateEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_06693bf0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* SilverkeyGateEffect::~SilverkeyGateEffect() */

void __thiscall SilverkeyGateEffect::~SilverkeyGateEffect(SilverkeyGateEffect *this)

{
  ~SilverkeyGateEffect(this);
  AK::FreeHook(this);
  return;
}


/* SilverkeyGateEffect::SilverkeyGateEffect() */

void __thiscall SilverkeyGateEffect::SilverkeyGateEffect(SilverkeyGateEffect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_06693bf0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* SilverkeyGateEffect::StaticNew() */

SilverkeyGateEffect * SilverkeyGateEffect::StaticNew(void)

{
  SilverkeyGateEffect *this;
  
  this = ::operator_new(0x118);
  SilverkeyGateEffect(this);
  return this;
}


/* SilverkeyGateEffect::onAnimStopped(std::string const&) */

void __thiscall SilverkeyGateEffect::onAnimStopped(SilverkeyGateEffect *this,string *param_1)

{
  bool bVar1;
  GridItemArtifactSilverkeyGate *this_00;
  
  bVar1 = std::operator==(param_1,"attack_start");
  if (bVar1) {
    SetState(this,1);
    return;
  }
  bVar1 = std::operator==(param_1,"attack_over");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"summon");
    if (bVar1) {
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x110));
      if (bVar1) {
        this_00 = (GridItemArtifactSilverkeyGate *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
        GridItemArtifactSilverkeyGate::PlayEnd(this_00);
        return;
      }
    }
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* SilverkeyGateEffect::OnAnimCommand(std::string const&, std::string const&) */

void SilverkeyGateEffect::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  GridItemArtifactSilverkeyGate *this;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x110));
    if (bVar1) {
      this = (GridItemArtifactSilverkeyGate *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x110));
      GridItemArtifactSilverkeyGate::SummonZombie(this);
      return;
    }
  }
  return;
}


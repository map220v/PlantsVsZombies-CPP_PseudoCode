// Class: LemonRainDropperEffectAnim


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonRainDropperEffectAnim::StaticClassInit() */

void LemonRainDropperEffectAnim::StaticClassInit(void)

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
    std::string::string(asStack_10,"LemonRainDropperEffectAnim");
    (*pcVar2)(plVar1,asStack_10,FUN_0370bf64,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LemonRainDropperEffectAnim::StaticGetClass() */

long * LemonRainDropperEffectAnim::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LemonRainDropperEffectAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonRainDropperEffectAnim::GetClass() const */

long * LemonRainDropperEffectAnim::GetClass(void)

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
  (*pcVar3)(plVar1,"LemonRainDropperEffectAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonRainDropperEffectAnim::LemonRainDropperEffectAnim() */

void __thiscall
LemonRainDropperEffectAnim::LemonRainDropperEffectAnim(LemonRainDropperEffectAnim *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_066880a0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* LemonRainDropperEffectAnim::StaticNew() */

LemonRainDropperEffectAnim * LemonRainDropperEffectAnim::StaticNew(void)

{
  LemonRainDropperEffectAnim *this;
  
  this = ::operator_new(0x118);
  LemonRainDropperEffectAnim(this);
  return this;
}


/* LemonRainDropperEffectAnim::~LemonRainDropperEffectAnim() */

void __thiscall
LemonRainDropperEffectAnim::~LemonRainDropperEffectAnim(LemonRainDropperEffectAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_066880a0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* LemonRainDropperEffectAnim::~LemonRainDropperEffectAnim() */

void __thiscall
LemonRainDropperEffectAnim::~LemonRainDropperEffectAnim(LemonRainDropperEffectAnim *this)

{
  ~LemonRainDropperEffectAnim(this);
  AK::FreeHook(this);
  return;
}


/* LemonRainDropperEffectAnim::onAnimStopped(std::string const&) */

void __thiscall
LemonRainDropperEffectAnim::onAnimStopped(LemonRainDropperEffectAnim *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  RtObject *this_00;
  Zombie *this_01;
  undefined8 uVar3;
  Plant *this_02;
  BoardEntity *this_03;
  
  Effect_PopAnim::onAnimStopped((string *)this);
  this_03 = (BoardEntity *)0x0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x110));
  if (cVar1 == '\0') {
    bVar2 = std::operator==(param_1,"PLANTFOOD");
  }
  else {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
    this_03 = Sexy::RtObject::Cast<BoardEntity>(this_00);
    bVar2 = std::operator==(param_1,"PLANTFOOD");
  }
  if (((bVar2) && (cVar1 = BalloonDropper::TargetIsValid(this_03), cVar1 != '\0')) &&
     (this_03 != (BoardEntity *)0x0)) {
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_03);
    if (this_01 != (Zombie *)0x0) {
      Zombie::ApplyCondition((Zombie *)0x41200000,0,this_01,0x68,1);
      uVar3 = Zombie::GetConditionTracker(this_01);
                    /* WARNING: Load size is inaccurate */
      ZombieConditionTracker::SetAdditionalValue
                (*(ZombieConditionTracker **)(this + 0x10c),uVar3,0x68);
      return;
    }
    this_02 = Sexy::RtObject::Cast<Plant>((RtObject *)this_03);
    if (this_02 != (Plant *)0x0) {
      Plant::ApplyCondition(0x41200000,0,this_02,0x1b);
      uVar3 = PlayerInfo::GetDisplayingBundleList((PlayerInfo *)this_02);
                    /* WARNING: Load size is inaccurate */
      PlantConditionTracker::SetAdditionalValue
                (*(PlantConditionTracker **)(this + 0x10c),uVar3,0x1b);
      return;
    }
  }
  return;
}


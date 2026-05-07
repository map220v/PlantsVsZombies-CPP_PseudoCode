// Class: ZombieRomanHealerHealActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealerHealActionHandler::StaticClassInit() */

void ZombieRomanHealerHealActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanHealerHealActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04ee8818,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanHealerHealActionHandler::StaticGetClass() */

long * ZombieRomanHealerHealActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanHealerHealActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanHealerHealActionHandler::GetClass() const */

long * ZombieRomanHealerHealActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanHealerHealActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanHealerHealActionHandler::ZombieRomanHealerHealActionHandler() */

void __thiscall
ZombieRomanHealerHealActionHandler::ZombieRomanHealerHealActionHandler
          (ZombieRomanHealerHealActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a00bb0;
  return;
}


/* ZombieRomanHealerHealActionHandler::StaticNew() */

ZombieRomanHealerHealActionHandler * ZombieRomanHealerHealActionHandler::StaticNew(void)

{
  ZombieRomanHealerHealActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieRomanHealerHealActionHandler(this);
  return this;
}


/* ZombieRomanHealerHealActionHandler::~ZombieRomanHealerHealActionHandler() */

void __thiscall
ZombieRomanHealerHealActionHandler::~ZombieRomanHealerHealActionHandler
          (ZombieRomanHealerHealActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a00bb0;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieRomanHealerHealActionHandler::~ZombieRomanHealerHealActionHandler() */

void __thiscall
ZombieRomanHealerHealActionHandler::~ZombieRomanHealerHealActionHandler
          (ZombieRomanHealerHealActionHandler *this)

{
  ~ZombieRomanHealerHealActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealerHealActionHandler::onStartAction() */

void __thiscall
ZombieRomanHealerHealActionHandler::onStartAction(ZombieRomanHealerHealActionHandler *this)

{
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_RomanHealer::StartCasting((ZombieAnimRig_RomanHealer *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealerHealActionHandler::onSpellImpact(Zombie*) */

void __thiscall
ZombieRomanHealerHealActionHandler::onSpellImpact
          (ZombieRomanHealerHealActionHandler *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  ZombieRomanHealer *this_01;
  ZombossHydraSprayActionDefinition *pZVar3;
  undefined8 *puVar4;
  Effect_PopAnim *this_02;
  PopAnim *pPVar5;
  string asStack_38 [8];
  float local_30;
  float fStack_2c;
  undefined4 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieRomanHealer>(this_00);
  if ((param_1 != (Zombie *)0x0) &&
     (cVar1 = ZombieRomanHealer::IsValidFriendlyTarget(this_01,param_1), cVar1 != '\0')) {
    pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_28 = *(undefined4 *)(puVar4 + 1);
    local_30 = (float)*puVar4;
    fStack_2c = (float)((ulong)*puVar4 >> 0x20);
    _local_30 = CONCAT44((float)*(int *)(pZVar3 + 0x4c) + fStack_2c,
                         (float)*(int *)(pZVar3 + 0x48) + local_30);
    this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName((string *)(pZVar3 + 0x40));
    pPVar5 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(this_02,pPVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    iVar2 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
    StandaloneEffect::SetBoardSpaceOrigin
              ((StandaloneEffect *)this_02,(SexyVector3 *)&local_30,iVar2 + 2);
    Effect_PopAnim::SetCentered(this_02,true);
    StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_02,true);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
    std::string::string(asStack_38,"start");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_38,0);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_38,"idle");
    AnimationSequence::AddLoopingAnimation(0x3f400000,aRStack_20,asStack_38,3);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_38,"end");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_38,0);
    std::string::~string(asStack_38);
    nop();
    Effect_PopAnim::PlayAnimationSequence(this_02,(AnimationSequence *)aRStack_20);
    ZombieRomanHealer::HealZombie(this_01,param_1,*(float *)(pZVar3 + 200));
    AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  }
  ZombieRomanHealer::SetNotHealing(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanHealerHealActionHandler::performHeal() */

void __thiscall
ZombieRomanHealerHealActionHandler::performHeal(ZombieRomanHealerHealActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieRomanHealer *this_01;
  Zombie *pZVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieRomanHealer>(this_00);
  pZVar2 = (Zombie *)ZombieRomanHealer::TryFindTarget(this_01);
  cVar1 = ZombieRomanHealer::IsValidFriendlyTarget(this_01,pZVar2);
  if (cVar1 == '\0') {
    ZombieRomanHealer::SetNotHealing(this_01);
    return;
  }
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  RealObject::PlayPositionalSound((RealObject *)this_01,(string *)(pZVar3 + 0x38),0.0);
  onSpellImpact(this,pZVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanHealerHealActionHandler::onAnimationDone(std::string const&) */

void __thiscall
ZombieRomanHealerHealActionHandler::onAnimationDone
          (ZombieRomanHealerHealActionHandler *this,string *param_1)

{
  bool bVar1;
  Zombie *pZVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"power_up");
  if (bVar1) {
    pZVar2 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar2);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_RomanHealer::ContinueCasting((ZombieAnimRig_RomanHealer *)pZVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    performHeal(this);
  }
  else {
    bVar1 = std::operator==(param_1,"power");
    if (bVar1) {
      pZVar2 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar2);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimationDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_RomanHealer::StopCasting((ZombieAnimRig_RomanHealer *)pZVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else {
      bVar1 = std::operator==(param_1,"power_down");
      if (bVar1) {
        ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


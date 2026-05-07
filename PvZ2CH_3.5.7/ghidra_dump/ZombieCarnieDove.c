// Class: ZombieCarnieDove


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDove::StaticClassInit() */

void ZombieCarnieDove::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieCarnieDove");
    (*pcVar2)(plVar1,asStack_10,FUN_04f2e5a4,0x830,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieDove::StaticGetClass() */

long * ZombieCarnieDove::StaticGetClass(void)

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
  uVar2 = ZombiePirateParrot::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieDove",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCarnieDove::GetClass() const */

long * ZombieCarnieDove::GetClass(void)

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
  uVar2 = ZombiePirateParrot::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieCarnieDove",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCarnieDove::~ZombieCarnieDove() */

void __thiscall ZombieCarnieDove::~ZombieCarnieDove(ZombieCarnieDove *this)

{
  *(undefined ***)this = &PTR_GetClass_06a14b50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCarnieDove_06a15620;
  ZombiePirateParrot::~ZombiePirateParrot((ZombiePirateParrot *)this);
  return;
}


/* non-virtual thunk to ZombieCarnieDove::~ZombieCarnieDove() */

void __thiscall ZombieCarnieDove::~ZombieCarnieDove(ZombieCarnieDove *this)

{
  ~ZombieCarnieDove(this + -0x10);
  return;
}


/* ZombieCarnieDove::~ZombieCarnieDove() */

void __thiscall ZombieCarnieDove::~ZombieCarnieDove(ZombieCarnieDove *this)

{
  ~ZombieCarnieDove(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCarnieDove::~ZombieCarnieDove() */

void __thiscall ZombieCarnieDove::~ZombieCarnieDove(ZombieCarnieDove *this)

{
  ~ZombieCarnieDove(this + -0x10);
  return;
}


/* ZombieCarnieDove::ZombieCarnieDove() */

void __thiscall ZombieCarnieDove::ZombieCarnieDove(ZombieCarnieDove *this)

{
  ZombiePirateParrot::ZombiePirateParrot((ZombiePirateParrot *)this);
  *(undefined ***)this = &PTR_GetClass_06a14b50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCarnieDove_06a15620;
  return;
}


/* ZombieCarnieDove::StaticNew() */

ZombieCarnieDove * ZombieCarnieDove::StaticNew(void)

{
  ZombieCarnieDove *this;
  
  this = ::operator_new(0x830);
  ZombieCarnieDove(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCarnieDove::playBirdLossAnimation(bool) */

void ZombieCarnieDove::playBirdLossAnimation(bool param_1)

{
  int iVar1;
  Zombie *this;
  ZombieCarnieMagicianDoveProps *pZVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  PopAnim *pPVar4;
  float local_28;
  float local_24;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  this = (Zombie *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieCarnieMagicianDoveProps>(this);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,*pfVar3,pfVar3[1]);
  Sexy::SexyVector2::operator-=((SexyVector2 *)&local_28,(SexyVector2 *)(pZVar2 + 0xc4));
  Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_28,(TPoint *)(pZVar2 + 0x21c));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_ZOMBIE_CHICKEN");
  GetPAMByName(asStack_20);
  pPVar4 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,local_28,local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_04f2d488(this_00 + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_18,"feather_burst");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  std::string::string((string *)aRStack_18,"Play_Bird_Explo");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCarnieDove::onTakeFatalDamage(DamageInfo const&) */

void ZombieCarnieDove::onTakeFatalDamage(DamageInfo *param_1)

{
  ZombiePumpkinScarecrowBird::onTakeFatalDamage(param_1);
  playBirdLossAnimation(SUB81(param_1,0));
  return;
}


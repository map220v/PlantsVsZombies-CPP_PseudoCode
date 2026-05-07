// Class: ZombiePirateSeagull


/* ZombiePirateSeagull::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombiePirateSeagull::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  SexyVector3 *pSVar3;
  
  bVar1 = std::operator==(param_4,"hit_ground");
  if (!bVar1) {
    Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
    return;
  }
  Zombie::SetIsFlying((Zombie *)param_1,false);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  cVar2 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar3);
  if ((cVar2 == '\0') && (cVar2 = Zombie::HasHead((Zombie *)param_1), cVar2 != '\0')) {
    (**(code **)(*(long *)param_1 + 0x240))(param_1);
    return;
  }
  return;
}


/* ZombiePirateSeagull::onZombieInitialize() */

void __thiscall ZombiePirateSeagull::onZombieInitialize(ZombiePirateSeagull *this)

{
  Zombie::SetIsFlying((Zombie *)this,true);
  this[0x800] = (ZombiePirateSeagull)0x0;
  this[0x802] = (ZombiePirateSeagull)0x1;
  this[0x801] = (ZombiePirateSeagull)0x0;
  return;
}


/* ZombiePirateSeagull::onApplyCondition(ZombieConditions) */

void __thiscall ZombiePirateSeagull::onApplyCondition(ZombiePirateSeagull *this,int param_2)

{
  if (param_2 - 3U < 2) {
    this[0x801] = (ZombiePirateSeagull)0x1;
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
    this[0x801] = (ZombiePirateSeagull)0x0;
    Zombie::EndCondition((Zombie *)this,3);
    Zombie::EndCondition((Zombie *)this,4);
  }
  if (param_2 - 0x40U < 2) {
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
    Zombie::EndCondition((Zombie *)this,0x40);
    Zombie::EndCondition((Zombie *)this,0x41);
  }
  else if (param_2 == 0x60) {
    Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
    Zombie::EndCondition((Zombie *)this,0x60);
  }
  if (2 < param_2 - 0x42U) {
    return;
  }
  Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  Zombie::EndCondition((Zombie *)this,0x42);
  Zombie::EndCondition((Zombie *)this,0x43);
  Zombie::EndCondition((Zombie *)this,0x44);
  return;
}


/* ZombiePirateSeagull::~ZombiePirateSeagull() */

void __thiscall ZombiePirateSeagull::~ZombiePirateSeagull(ZombiePirateSeagull *this)

{
  *(undefined ***)this = &PTR_GetClass_068aea20;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateSeagull_068af438;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePirateSeagull::~ZombiePirateSeagull() */

void __thiscall ZombiePirateSeagull::~ZombiePirateSeagull(ZombiePirateSeagull *this)

{
  ~ZombiePirateSeagull(this + -0x10);
  return;
}


/* ZombiePirateSeagull::~ZombiePirateSeagull() */

void __thiscall ZombiePirateSeagull::~ZombiePirateSeagull(ZombiePirateSeagull *this)

{
  ~ZombiePirateSeagull(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePirateSeagull::~ZombiePirateSeagull() */

void __thiscall ZombiePirateSeagull::~ZombiePirateSeagull(ZombiePirateSeagull *this)

{
  ~ZombiePirateSeagull(this + -0x10);
  return;
}


/* ZombiePirateSeagull::ZombiePirateSeagull() */

void __thiscall ZombiePirateSeagull::ZombiePirateSeagull(ZombiePirateSeagull *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068aea20;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePirateSeagull_068af438;
  return;
}


/* ZombiePirateSeagull::StaticNew() */

ZombiePirateSeagull * ZombiePirateSeagull::StaticNew(void)

{
  ZombiePirateSeagull *this;
  
  this = ::operator_new(0x808);
  ZombiePirateSeagull(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateSeagull::StaticClassInit() */

void ZombiePirateSeagull::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePirateSeagull");
    (*pcVar2)(plVar1,asStack_10,FUN_046b0828,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePirateSeagull::StaticGetClass() */

long * ZombiePirateSeagull::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePirateSeagull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateSeagull::GetClass() const */

long * ZombiePirateSeagull::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePirateSeagull",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateSeagull::playBirdLossAnimation(bool) */

void __thiscall ZombiePirateSeagull::playBirdLossAnimation(ZombiePirateSeagull *this,bool param_1)

{
  int iVar1;
  float *pfVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  float local_28;
  float local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,*pfVar2,pfVar2[1]);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::SexyVector2::operator-=((SexyVector2 *)&local_28,(SexyVector2 *)(lVar3 + 0xc4));
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_ZOMBIE_SEAGULL");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,local_28,local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_046b05b0(this_01 + 0x1c,iVar1 + 1);
  if (param_1) {
    std::string::string((string *)aRStack_18,"die2");
    Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
    std::string::string((string *)aRStack_18,"Play_Bird_Explo");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aRStack_18,0.0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  else {
    std::string::string((string *)aRStack_18,"die1");
    Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateSeagull::onTakeFatalDamage(DamageInfo const&) */

void __thiscall
ZombiePirateSeagull::onTakeFatalDamage(ZombiePirateSeagull *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  undefined8 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x801] == (ZombiePirateSeagull)0x0) {
    bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x800);
    if (((((bVar1) || (cVar2 = Zombie::HasCondition(this,0x40), cVar2 != '\0')) ||
         (cVar2 = Zombie::HasCondition(this,0x41), cVar2 != '\0')) ||
        ((cVar2 = Zombie::HasCondition(this,0x60), cVar2 != '\0' ||
         (cVar2 = Zombie::HasCondition(this,0x42), cVar2 != '\0')))) ||
       ((cVar2 = Zombie::HasCondition(this,0x43), cVar2 != '\0' ||
        (cVar2 = Zombie::HasCondition(this,0x44), cVar2 != '\0')))) {
      playBirdLossAnimation(this,true);
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ZombieAnimRig_Seagull::HideBird((ZombieAnimRig_Seagull *)pZVar3);
      std::string::string(asStack_10,"Play_Seagull_DeathSquawk");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      bVar1 = TestFlag<DamageTypeFlags>(uVar4,0x80);
      if ((bVar1) || (bVar1 = TestFlag<DamageTypeFlags>(uVar4,0x1000), bVar1)) {
        this[0x802] = (ZombiePirateSeagull)0x0;
      }
      else {
        bVar1 = TestFlag<DamageTypeFlags>(uVar4,4);
        if (!bVar1) {
          (**(code **)(*(long *)this + 0x240))(this);
        }
        playBirdLossAnimation(this,false);
        pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
        ZombieAnimRig_Seagull::HideBird((ZombieAnimRig_Seagull *)pZVar3);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


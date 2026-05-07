// Class: ZombieWeasel


/* ZombieWeasel::~ZombieWeasel() */

void __thiscall ZombieWeasel::~ZombieWeasel(ZombieWeasel *this)

{
  *(undefined ***)this = &PTR_GetClass_0689deb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWeasel_0689e8d0;
  ZombieChicken::~ZombieChicken((ZombieChicken *)this);
  return;
}


/* non-virtual thunk to ZombieWeasel::~ZombieWeasel() */

void __thiscall ZombieWeasel::~ZombieWeasel(ZombieWeasel *this)

{
  ~ZombieWeasel(this + -0x10);
  return;
}


/* ZombieWeasel::~ZombieWeasel() */

void __thiscall ZombieWeasel::~ZombieWeasel(ZombieWeasel *this)

{
  ~ZombieWeasel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieWeasel::~ZombieWeasel() */

void __thiscall ZombieWeasel::~ZombieWeasel(ZombieWeasel *this)

{
  ~ZombieWeasel(this + -0x10);
  return;
}


/* ZombieWeasel::ZombieWeasel() */

void __thiscall ZombieWeasel::ZombieWeasel(ZombieWeasel *this)

{
  ZombieChicken::ZombieChicken((ZombieChicken *)this);
  *(undefined ***)this = &PTR_GetClass_0689deb0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieWeasel_0689e8d0;
  return;
}


/* ZombieWeasel::StaticNew() */

ZombieWeasel * ZombieWeasel::StaticNew(void)

{
  ZombieWeasel *this;
  
  this = ::operator_new(0x800);
  ZombieWeasel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeasel::StaticClassInit() */

void ZombieWeasel::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieWeasel");
    (*pcVar2)(plVar1,asStack_10,FUN_0468a534,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieWeasel::StaticGetClass() */

long * ZombieWeasel::StaticGetClass(void)

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
  uVar2 = ZombieChicken::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWeasel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieWeasel::GetClass() const */

long * ZombieWeasel::GetClass(void)

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
  uVar2 = ZombieChicken::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieWeasel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeasel::GetElectrocutName() */

void __thiscall ZombieWeasel::GetElectrocutName(ZombieWeasel *this)

{
  bool bVar1;
  string *__n;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_10;
  std::string::string(in_x8,"weasel_shock");
  nop();
  Zombie::GetElectrocuteColor();
  bVar1 = std::operator==(asStack_10,"red");
  if (bVar1) {
    std::string::append(in_x8,"weasel_shock2",(size_t)__n);
  }
  else {
    bVar1 = std::operator==(asStack_10,"blue");
    if (bVar1) {
      std::string::append(in_x8,"weasel_shock3",(size_t)__n);
    }
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeasel::playBirdLossAnimation(bool) */

void ZombieWeasel::playBirdLossAnimation(bool param_1)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  Effect_PopAnim *this_00;
  PVPManager *this_01;
  string *psVar5;
  ResourceInfo *pRVar6;
  float local_20;
  float local_1c;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,*pfVar2,pfVar2[1]);
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  Sexy::SexyVector2::operator-=((SexyVector2 *)&local_20,(SexyVector2 *)(lVar4 + 0xc4));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
  this_01 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  psVar5 = (string *)PVPManager::GetSkillDatas(this_01);
  GetPAMByName(psVar5);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,local_20,local_1c,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_04689c1c(this_00 + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_18,"weasel_die");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeasel::onTurnedToAsh() */

void __thiscall ZombieWeasel::onTurnedToAsh(ZombieWeasel *this)

{
  int iVar1;
  float *pfVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  Effect_PopAnim *this_00;
  PVPManager *this_01;
  string *psVar5;
  ResourceInfo *pRVar6;
  float local_20;
  float local_1c;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,*pfVar2,pfVar2[1]);
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  Sexy::SexyVector2::operator-=((SexyVector2 *)&local_20,(SexyVector2 *)(lVar4 + 0xc4));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
  this_01 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  psVar5 = (string *)PVPManager::GetSkillDatas(this_01);
  GetPAMByName(psVar5);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,local_20,local_1c,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_04689c1c(this_00 + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_18,"weasel_burn");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  MessageRouter::Broadcast<Zombie*,ZombieWeasel*>
            ((MessageRouter *)gMessageRouter,Message::ZombieBurnedToAsh,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieWeasel::onElectrocuted() */

void __thiscall ZombieWeasel::onElectrocuted(ZombieWeasel *this)

{
  int iVar1;
  float *pfVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  Effect_PopAnim *this_00;
  PVPManager *this_01;
  string *psVar5;
  ResourceInfo *pRVar6;
  float local_20;
  float local_1c;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,*pfVar2,pfVar2[1]);
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  Sexy::SexyVector2::operator-=((SexyVector2 *)&local_20,(SexyVector2 *)(lVar4 + 0xc4));
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this);
  this_01 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  psVar5 = (string *)PVPManager::GetSkillDatas(this_01);
  GetPAMByName(psVar5);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,local_20,local_1c,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_04689c1c(this_00 + 0x1c,iVar1 + 1);
  GetElectrocutName(this);
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  MessageRouter::Broadcast<Zombie*,ZombieWeasel*>
            ((MessageRouter *)gMessageRouter,Message::ZombieElectrified,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


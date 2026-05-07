// Class: ZombiePumpkin


/* ZombiePumpkin::setIsFromPlantfood(bool) */

void __thiscall ZombiePumpkin::setIsFromPlantfood(ZombiePumpkin *this,bool param_1)

{
  this[0x810] = (ZombiePumpkin)param_1;
  return;
}


/* ZombiePumpkin::setAncestorHitPoint(float) */

void __thiscall ZombiePumpkin::setAncestorHitPoint(ZombiePumpkin *this,float param_1)

{
  *(float *)(this + 0x808) = param_1;
  return;
}


/* ZombiePumpkin::setHitRate(float) */

void __thiscall ZombiePumpkin::setHitRate(ZombiePumpkin *this,float param_1)

{
  *(float *)(this + 0x814) = param_1;
  return;
}


/* ZombiePumpkin::setAncestorLevel(int) */

void __thiscall ZombiePumpkin::setAncestorLevel(ZombiePumpkin *this,int param_1)

{
  *(int *)(this + 0x80c) = param_1;
  return;
}


/* ZombiePumpkin::hasHeadParticle() const */

ZombiePumpkin __thiscall ZombiePumpkin::hasHeadParticle(ZombiePumpkin *this)

{
  return this[0x810];
}


/* ZombiePumpkin::setAncestor(std::string const&) */

void ZombiePumpkin::setAncestor(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x800);
  return;
}


/* ZombiePumpkin::~ZombiePumpkin() */

void __thiscall ZombiePumpkin::~ZombiePumpkin(ZombiePumpkin *this)

{
  *(undefined ***)this = &PTR_GetClass_06907850;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePumpkin_069082b0;
  std::string::~string((string *)(this + 0x818));
  std::string::~string((string *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePumpkin::~ZombiePumpkin() */

void __thiscall ZombiePumpkin::~ZombiePumpkin(ZombiePumpkin *this)

{
  ~ZombiePumpkin(this + -0x10);
  return;
}


/* ZombiePumpkin::~ZombiePumpkin() */

void __thiscall ZombiePumpkin::~ZombiePumpkin(ZombiePumpkin *this)

{
  ~ZombiePumpkin(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePumpkin::~ZombiePumpkin() */

void __thiscall ZombiePumpkin::~ZombiePumpkin(ZombiePumpkin *this)

{
  ~ZombiePumpkin(this + -0x10);
  return;
}


/* ZombiePumpkin::ZombiePumpkin() */

void __thiscall ZombiePumpkin::ZombiePumpkin(ZombiePumpkin *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06907850;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePumpkin_069082b0;
  Set8BytesTo0(this + 0x800);
  Set8BytesTo0(this + 0x818);
  return;
}


/* ZombiePumpkin::StaticNew() */

ZombiePumpkin * ZombiePumpkin::StaticNew(void)

{
  ZombiePumpkin *this;
  
  this = ::operator_new(0x820);
  ZombiePumpkin(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkin::StaticClassInit() */

void ZombiePumpkin::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePumpkin");
    (*pcVar2)(plVar1,asStack_10,FUN_04836b4c,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkin::StaticGetClass() */

long * ZombiePumpkin::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePumpkin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePumpkin::GetClass() const */

long * ZombiePumpkin::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePumpkin",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePumpkin::setColor(std::string const&) */

void ZombiePumpkin::setColor(string *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  thunk_FUN_05475e00(param_1 + 0x818);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  (**(code **)(*(long *)pZVar1 + 0x268))(pZVar1,1,param_1 + 0x818);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkin::createDropHeadEffect() */

void __thiscall ZombiePumpkin::createDropHeadEffect(ZombiePumpkin *this)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  float *pfVar4;
  float fVar5;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ZOMBIE_PUMPKIN_DIE");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = FUN_04836774(0x55);
  fVar5 = *pfVar4;
  iVar2 = FUN_04836774(0x91);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar5 - (float)iVar1,pfVar4[1] - (float)iVar2,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  FUN_04836684(this_00 + 0x1c);
  std::string::string((string *)aRStack_18,"r2");
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
/* ZombiePumpkin::onLostHead() */

void __thiscall ZombiePumpkin::onLostHead(ZombiePumpkin *this)

{
  char cVar1;
  float *pfVar2;
  code *pcVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(this + 0x800);
  if (((cVar1 == '\0') && (this[0x810] == (ZombiePumpkin)0x0)) &&
     (pfVar2 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this), *pfVar2 <= 950.0)) {
    (**(code **)(*(long *)this + 0xa48))(this);
    (**(code **)(*(long *)this + 0xa40))(this);
    pcVar3 = *(code **)(*(long *)this + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
    (*pcVar3)(this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkin::spawnAncestorZombie() */

void __thiscall ZombiePumpkin::spawnAncestorZombie(ZombiePumpkin *this)

{
  string *psVar1;
  ZombieType *this_00;
  SexyVector3 *this_01;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_30 = *(undefined4 *)(this + 0x80c);
  local_2b = 1;
  plVar3 = *(long **)(gLawnApp + 0x9f0);
  pcVar4 = *(code **)(*plVar3 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
  this_01 = (SexyVector3 *)(*pcVar4)(plVar3,aRStack_38,0xfffffffb,(SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  (**(code **)(*(long *)this_01 + 0x78))(this_01,uVar2);
  BoardEntity::PlaceOnBoard(this_01);
  Zombie::SetHitpoints((Zombie *)this_01,*(float *)(this + 0x808));
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkin::onZombieInitialize() */

void __thiscall ZombiePumpkin::onZombieInitialize(ZombiePumpkin *this)

{
  size_t in_x2;
  
  Zombie::onZombieInitialize((Zombie *)this);
  std::string::append((string *)(this + 0x800),"",in_x2);
  this[0x810] = (ZombiePumpkin)0x0;
  *(undefined4 *)(this + 0x814) = 0x3f800000;
  *(undefined4 *)(this + 0x808) = 0x42c80000;
  std::string::append((string *)(this + 0x818),"yellow",0x42c80000);
  return;
}


/* ZombiePumpkin::onUpdate() */

void __thiscall ZombiePumpkin::onUpdate(ZombiePumpkin *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  float fVar2;
  float fVar3;
  
  Zombie::onUpdate((Zombie *)this);
  fVar2 = (float)FUN_048365bc(*(undefined4 *)(this + 0x280));
  fVar3 = (float)FUN_048365c0(*(undefined4 *)(this + 0x284));
  if (fVar2 < fVar3 * 0.6) {
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    (**(code **)(*(long *)pZVar1 + 0x268))(pZVar1,3,this + 0x818);
    return;
  }
  if (fVar3 * 0.8 <= fVar2) {
    return;
  }
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar1 + 0x268))(pZVar1,2,this + 0x818);
  return;
}


/* ZombiePumpkin::GetBaseEatDPS() */

float __thiscall ZombiePumpkin::GetBaseEatDPS(ZombiePumpkin *this)

{
  float fVar1;
  
  fVar1 = (float)Zombie::GetBaseEatDPS((Zombie *)this);
  return fVar1 * *(float *)(this + 0x814);
}


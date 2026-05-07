// Class: ZombieSupernova


/* ZombieSupernova::~ZombieSupernova() */

void __thiscall ZombieSupernova::~ZombieSupernova(ZombieSupernova *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  return;
}


void __thiscall ZombieSupernova::~ZombieSupernova(ZombieSupernova *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  return;
}


void __thiscall ZombieSupernova::~ZombieSupernova(ZombieSupernova *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  return;
}


void __thiscall ZombieSupernova::~ZombieSupernova(ZombieSupernova *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  return;
}


/* ZombieSupernova::ZombieSupernova() */

void __thiscall ZombieSupernova::ZombieSupernova(ZombieSupernova *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSupernova::playNovaExplode(Zombie*) */

void __thiscall ZombieSupernova::playNovaExplode(ZombieSupernova *this,Zombie *param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_28;
  float local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_28);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar4 = pfVar2[1];
    fVar6 = *pfVar2;
    fVar5 = pfVar2[2];
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_SUNBEAN_PLANTFOOD_EFFECT_OVERLAY1");
    GetPAMByName(asStack_20);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar6 + local_28,(fVar4 + local_24) - fVar5,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
    uVar1 = SharkMinion::getRow((SharkMinion *)param_1);
    uVar1 = Board::MakeRenderOrder(0x64961,uVar1,0);
    FUN_041ff5e8(this_00 + 0x1c,uVar1);
    std::string::string((string *)aRStack_18,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,2);
    std::string::~string((string *)aRStack_18);
    nop();
    *(undefined4 *)(this + 0x10) = 0x40000000;
    Zombie::ApplyCondition((Zombie *)0x40000000,0,param_1,2,1);
    *(undefined4 *)this = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSupernova::ZombieSupernova(ZombieSupernova const&) */

void __thiscall ZombieSupernova::ZombieSupernova(ZombieSupernova *this,ZombieSupernova *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = *(undefined4 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x18),(RtWeakPtrBase *)(param_1 + 0x18));
  return;
}


/* ZombieSupernova::TEMPNAMEPLACEHOLDERVALUE(ZombieSupernova&&) */

ZombieSupernova * __thiscall
ZombieSupernova::operator=(ZombieSupernova *this,ZombieSupernova *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = *(undefined4 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),(RtWeakPtr *)(param_1 + 0x18));
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSupernova::playNovaExplodePart2(Zombie*) */

void __thiscall ZombieSupernova::playNovaExplodePart2(ZombieSupernova *this,Zombie *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  PlantSunBeanSubSystem *this_01;
  char *pcVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_38;
  float local_34;
  string asStack_30 [8];
  undefined8 local_28;
  float local_20;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_38)
  ;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  local_28 = *(undefined8 *)pfVar3;
  fVar11 = *pfVar3;
  fVar10 = pfVar3[1];
  uVar1 = *(undefined8 *)pfVar3;
  local_20 = pfVar3[2];
  fVar9 = pfVar3[2];
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_EFFECTS_SUNBEAN_PLANTFOOD_EFFECT_OVERLAY2");
  GetPAMByName(asStack_30);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_30);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,fVar11 + local_38,(local_34 + -378.0 + fVar10) - fVar9,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  (**(code **)(*(long *)this_00 + 0xb8))(0x3f800000,0x41f00000,this_00);
  uVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  uVar2 = Board::MakeRenderOrder(0x64961,uVar2,0);
  FUN_041ff5e8(this_00 + 0x1c,uVar2);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,2);
  std::string::~string((string *)aRStack_18);
  nop();
  this_01 = Board::GetGameSubSystem<PlantSunBeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  fVar6 = (float)FUN_041ff614(*(undefined4 *)(param_1 + 0x280));
  fVar7 = (float)FUN_041ff618(*(undefined4 *)(param_1 + 0x2a8));
  uVar8 = PlantSunBeanSubSystem::GetSunAmountToSpew(this_01,*(float *)(this + 8),fVar7 + fVar6,true)
  ;
  local_28 = uVar1;
  local_20 = fVar9;
  PlantSunBeanSubSystem::SpewSun(uVar8,fVar11,fVar10,fVar9,0);
  Zombie::TurnToAsh(param_1);
  thunk_FUN_04201124(gMessageRouter,param_1);
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_Plant_DarkAges_SunBean_Disintegrate");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSupernova::Update() */

void __thiscall ZombieSupernova::Update(ZombieSupernova *this)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(this + 0x10);
  fVar5 = *(float *)(this + 0xc);
  fVar4 = (float)PVZ_T();
  bVar1 = fVar3 + fVar5 <= fVar4;
  if (*(int *)this == 0) {
    if (bVar1) {
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x18));
      playNovaExplode(this,(Zombie *)pRVar2);
      return;
    }
  }
  else if ((*(int *)this == 1) && (bVar1)) {
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x18));
    playNovaExplodePart2(this,(Zombie *)pRVar2);
    *(undefined4 *)this = 2;
    return;
  }
  return;
}


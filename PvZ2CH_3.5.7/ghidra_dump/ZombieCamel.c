// Class: ZombieCamel


/* ZombieCamel::ZombieCamel() */

void __thiscall ZombieCamel::ZombieCamel(ZombieCamel *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0689be00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCamel_0689c890;
  return;
}


/* ZombieCamel::~ZombieCamel() */

void __thiscall ZombieCamel::~ZombieCamel(ZombieCamel *this)

{
  *(undefined ***)this = &PTR_GetClass_0689be00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCamel_0689c890;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieCamel::~ZombieCamel() */

void __thiscall ZombieCamel::~ZombieCamel(ZombieCamel *this)

{
  ~ZombieCamel(this + -0x10);
  return;
}


/* ZombieCamel::~ZombieCamel() */

void __thiscall ZombieCamel::~ZombieCamel(ZombieCamel *this)

{
  ~ZombieCamel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCamel::~ZombieCamel() */

void __thiscall ZombieCamel::~ZombieCamel(ZombieCamel *this)

{
  ~ZombieCamel(this + -0x10);
  return;
}


/* ZombieCamel::canBecomeUncamel() */

undefined8 ZombieCamel::canBecomeUncamel(void)

{
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::addCamelArmor(ZombieCamelSegmentType) */

void __thiscall ZombieCamel::addCamelArmor(ZombieCamel *this,int param_2)

{
  string *__n;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_10;
  std::string::string(asStack_18,"CamelSignHeadDefault");
  nop();
  if (param_2 == 2) {
    std::string::append(asStack_18,"CamelSignMiddleDefault",(size_t)__n);
  }
  else if (param_2 == 3) {
    std::string::append(asStack_18,"CamelSignTailDefault",(size_t)__n);
  }
  else if (param_2 == 0) {
    std::string::append(asStack_18,"CamelSignBlankDefault",(size_t)__n);
  }
  else {
    std::string::append(asStack_18,"CamelSignHeadDefault",(size_t)__n);
  }
  FUN_05475d88(asStack_10,asStack_18);
  Zombie::AddArmor((Zombie *)this,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamel::onChangeTeams(TeamFlags, TeamFlags) */

void ZombieCamel::onChangeTeams(long *param_1)

{
  char cVar1;
  
  cVar1 = RealObject::IsOnTeam(param_1,1);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_046849d4(*(undefined1 *)((long)param_1 + 0x804)), cVar1 != '\0')) {
    *(undefined1 *)((long)param_1 + 0x804) = 0;
    (**(code **)(*param_1 + 0xa78))(param_1);
  }
  return;
}


/* ZombieCamel::StaticNew() */

ZombieCamel * ZombieCamel::StaticNew(void)

{
  ZombieCamel *this;
  
  this = ::operator_new(0x810);
  ZombieCamel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::getSegmentTypeName(ZombieCamelSegmentType) */

void __thiscall ZombieCamel::getSegmentTypeName(string *param_1,ZombieCamel *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar2 = Zombie::GetTypeName((Zombie *)this);
  lVar3 = FUN_05474374(uVar2,"spring",0);
  if (lVar3 == -1) {
    uVar2 = Zombie::GetTypeName((Zombie *)this);
    lVar3 = FUN_05474374(uVar2,&DAT_0564bb00,0);
    if (lVar3 == -1) {
      uVar2 = Zombie::GetTypeName((Zombie *)this);
      lVar3 = FUN_05474374(uVar2,"christmas",0);
      if (lVar3 == -1) {
        uVar2 = Zombie::GetTypeName((Zombie *)this);
        lVar3 = FUN_05474374(uVar2,"bowling",0);
        if (lVar3 == -1) {
          std::string::string(param_1,"camel_segment");
          nop();
        }
        else {
          std::string::string(param_1,"bowling_camel_segment");
          nop();
        }
      }
      else {
        std::string::string(param_1,"christmas_camel_segment");
        nop();
      }
    }
    else {
      std::string::string(param_1,"lny_camel_segment");
      nop();
    }
  }
  else {
    std::string::string(param_1,"spring_camel_segment");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::getHeadParticlePAMBase() */

void ZombieCamel::getHeadParticlePAMBase(void)

{
  long lVar1;
  Zombie *in_x0;
  undefined8 uVar2;
  long lVar3;
  string *in_x8;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  __s = "spring";
  uVar2 = Zombie::GetTypeName(in_x0);
  lVar3 = FUN_05474374(uVar2,"spring",0);
  if (lVar3 == -1) {
    __s = "lny";
    uVar2 = Zombie::GetTypeName(in_x0);
    lVar3 = FUN_05474374(uVar2,&DAT_0564bb00,0);
    if (lVar3 == -1) {
      __s = "christmas";
      uVar2 = Zombie::GetTypeName(in_x0);
      lVar3 = FUN_05474374(uVar2,"christmas",0);
      if (lVar3 == -1) {
        std::string::string(in_x8,"mummy");
        nop();
        goto LAB_04684d8c;
      }
    }
  }
  std::string::string(in_x8,__s);
  nop();
LAB_04684d8c:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamel::getCamelManager() */

void ZombieCamel::getCamelManager(void)

{
  Board::GetGameSubSystem<ZombieCamelSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::initializeCamel(ZombieCamelSegmentType, Sexy::RtWeakPtr<Zombie>) */

void __thiscall ZombieCamel::initializeCamel(ZombieCamel *this,int param_2,RtMixedPtrBase *param_3)

{
  char cVar1;
  ZombieCamelSubSystem *pZVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAirMissile::SetTargetRow((ZombieAirMissile *)this,param_2);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3);
  if (cVar1 != '\0') {
    pZVar2 = (ZombieCamelSubSystem *)getCamelManager();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)param_3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
    ZombieCamelSubSystem::OnCamelSegmentCreated(pZVar2,aRStack_18,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  (**(code **)(*(long *)this + 0xa10))(this,param_2);
  (**(code **)(*(long *)this + 0xa78))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::isHeadZombie() */

void ZombieCamel::isHeadZombie(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar2 = getCamelManager();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
  ZombieCamelSubSystem::GetHeadZombie(aRStack_10,uVar2,aRStack_18);
  uVar1 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::onCamelStateChange() */

void __thiscall ZombieCamel::onCamelStateChange(ZombieCamel *this)

{
  char cVar1;
  ZombieCamelSubSystem *pZVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_046849d4(this[0x804]);
  if (cVar1 == '\0') {
    if ((this[0x805] != (ZombieCamel)0x0) || (this[0x806] != (ZombieCamel)0x0)) {
      this[0x806] = (ZombieCamel)0x0;
      this[0x805] = (ZombieCamel)0x0;
    }
    pZVar2 = (ZombieCamelSubSystem *)getCamelManager();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    ZombieCamelSubSystem::NotifyZombieLeftCamel(pZVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::updateWalkingBasedOnNeighborDistance() */

void __thiscall ZombieCamel::updateWalkingBasedOnNeighborDistance(ZombieCamel *this)

{
  uint uVar1;
  char cVar2;
  ZombieCamelProps *pZVar3;
  undefined8 uVar4;
  ResourceInfo *pRVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  RtMixedPtrBase aRStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieCamelProps>((Zombie *)this);
  uVar4 = getCamelManager();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieCamelSubSystem::GetPreviousZombie(aRStack_28,uVar4,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar2 == '\0') {
    if (this[0x805] != (ZombieCamel)0x0) {
LAB_04685380:
      this[0x805] = (ZombieCamel)0x0;
    }
  }
  else {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)pRVar5);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    uVar1 = (int)(*pfVar6 - *pfVar7) >> 0x1f;
    iVar8 = ((int)(*pfVar6 - *pfVar7) ^ uVar1) - uVar1;
    if (this[0x805] == (ZombieCamel)0x0) {
      if (iVar8 < *(int *)(pZVar3 + 0x210) - *(int *)(pZVar3 + 0x214)) {
        this[0x805] = (ZombieCamel)0x1;
      }
    }
    else if ((int)((float)*(int *)(pZVar3 + 0x210) - (float)*(int *)(pZVar3 + 0x214) * 0.5) < iVar8)
    goto LAB_04685380;
  }
  uVar4 = getCamelManager();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieCamelSubSystem::GetNextZombie(aRStack_20,uVar4,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  if (cVar2 == '\0') {
    if (this[0x806] == (ZombieCamel)0x0) goto LAB_046852e4;
  }
  else {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)pRVar5);
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    uVar1 = (int)(*pfVar6 - *pfVar7) >> 0x1f;
    iVar8 = ((int)(*pfVar6 - *pfVar7) ^ uVar1) - uVar1;
    if (this[0x806] == (ZombieCamel)0x0) {
      if (*(int *)(pZVar3 + 0x210) + *(int *)(pZVar3 + 0x218) < iVar8) {
        this[0x806] = (ZombieCamel)0x1;
      }
      goto LAB_046852e4;
    }
    if ((int)((float)*(int *)(pZVar3 + 0x210) + (float)*(int *)(pZVar3 + 0x218) * 0.5) <= iVar8)
    goto LAB_046852e4;
  }
  this[0x806] = (ZombieCamel)0x0;
LAB_046852e4:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieCamel::updateState_CamelIdle() */

void __thiscall ZombieCamel::updateState_CamelIdle(ZombieCamel *this)

{
  char cVar1;
  
  cVar1 = FUN_046849d4(this[0x804]);
  if ((cVar1 != '\0') &&
     ((updateWalkingBasedOnNeighborDistance(this), this[0x805] != (ZombieCamel)0x0 ||
      (this[0x806] != (ZombieCamel)0x0)))) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* ZombieCamel::BecomeHeadZombie(Sexy::RtWeakPtr<ZombieType const>) */

void ZombieCamel::BecomeHeadZombie(Zombie *param_1)

{
  ZombieCamelProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieCamelProps>(param_1);
  if (pZVar1[0x241] == (ZombieCamelProps)0x0) {
    return;
  }
  Zombie::GetProps<ZombieCamelProps>(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::onEnterState_CamelIdle(ZombieState) */

void ZombieCamel::onEnterState_CamelIdle(Zombie *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this;
  ZombieCamelSubSystem *pZVar2;
  ZombieCamelProps *pZVar3;
  code *pcVar4;
  int local_64;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar4 = *(code **)(*(long *)this + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar4)(this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  local_64 = 0;
  pZVar2 = (ZombieCamelSubSystem *)getCamelManager();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
  pZVar3 = Zombie::GetProps<ZombieCamelProps>(param_1);
  cVar1 = ZombieCamelSubSystem::GetAnimationOffset
                    (pZVar2,aRStack_58,*(undefined4 *)(pZVar3 + 0x21c),&local_64);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (cVar1 != '\0') {
    ZombieAnimRig_Camel::SetIdleAnimFrame((ZombieAnimRig_Camel *)this,local_64);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamel::updateState_Surprised() */

void __thiscall ZombieCamel::updateState_Surprised(ZombieCamel *this)

{
  ZombieCamelProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar1 = Zombie::GetProps<ZombieCamelProps>((Zombie *)this);
  if (fVar2 <= *(float *)(pZVar1 + 0x23c)) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::spawnInitialSegments(int, bool) */

void __thiscall ZombieCamel::spawnInitialSegments(ZombieCamel *this,int param_1,bool param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ZombieCamelProps *pZVar3;
  SexyVector3 *pSVar4;
  ZombieCamel *pZVar5;
  undefined4 uVar6;
  long *plVar7;
  int iVar8;
  code *pcVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_40 = *puVar2;
  local_38 = *(undefined4 *)(puVar2 + 1);
  if (0 < param_1) {
    iVar8 = 0;
    do {
      while( true ) {
        uVar6 = 3;
        if (param_1 + -1 != iVar8) {
          uVar6 = 2;
        }
        pZVar3 = Zombie::GetProps<ZombieCamelProps>((Zombie *)this);
        local_40 = CONCAT44(local_40._4_4_,(float)*(int *)(pZVar3 + 0x210) + (float)local_40);
        Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
        local_30 = *(undefined4 *)(this + 0x50);
        local_2b = 1;
        plVar7 = *(long **)(gLawnApp + 0x9f0);
        pcVar9 = *(code **)(*plVar7 + 0x318);
        local_2c = param_2;
        (**(code **)(*(long *)this + 0xa20))(aRStack_48,this,uVar6);
        uVar1 = FUN_046849cc(*(undefined4 *)(this + 0x2b0));
        pSVar4 = (SexyVector3 *)(*pcVar9)(plVar7,aRStack_48,uVar1,(ValidatePlantData *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)aRStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        pZVar5 = (ZombieCamel *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_50);
        initializeCamel(pZVar5,uVar6,aRStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
        if (param_2) break;
        iVar8 = iVar8 + 1;
        BoardEntity::PlaceOnBoard(pSVar4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
        if (iVar8 == param_1) goto LAB_0468580c;
      }
      iVar8 = iVar8 + 1;
      Zombie::PlaceOnStreet((float)local_40,local_40._4_4_,local_38,pSVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
    } while (iVar8 != param_1);
  }
LAB_0468580c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::takePropagatedSignDamage(float, DamageTypeFlags) */

void __thiscall
ZombieCamel::takePropagatedSignDamage(DamageInfo *param_1,ZombieCamel *this,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  float fVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 0x110);
  uVar1 = operator|(param_3,0x40);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo(param_1._0_4_,local_70,local_6c,aDStack_68,uVar1,aPStack_78,0);
  (*pcVar2)(this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  fVar3 = (float)FUN_046849d0(*(undefined4 *)(this + 0x2a8));
  if (0.0 < fVar3) {
    std::string::string((string *)aDStack_68,"Play_CamelPanel_Hit");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aDStack_68,0.0);
    std::string::~string((string *)aDStack_68);
    nop();
    BoardEntity::SetHasPlayedImpactSound((BoardEntity *)this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::getSegmentType(ZombieCamelSegmentType) */

void ZombieCamel::getSegmentType(undefined8 param_1,long *param_2,undefined8 param_3)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  (**(code **)(*param_2 + 0xa18))(asStack_10,param_2,param_3);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::GetHeadParticlePopAnim() */

void ZombieCamel::GetHeadParticlePopAnim(void)

{
  long *in_x0;
  string *psVar1;
  PVPManager *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  (**(code **)(*in_x0 + 0xa30))(asStack_10);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  this = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  psVar1 = (string *)PVPManager::GetSkillDatas(this);
  GetPAMByName(psVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::switchToNormalZombiePAM() */

void __thiscall ZombieCamel::switchToNormalZombiePAM(ZombieCamel *this)

{
  string *psVar1;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  (**(code **)(*(long *)this + 0xa28))(asStack_18,this);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Zombie::initializeAnimRigForType((Zombie *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::onArmorDropped(std::string) */

void ZombieCamel::onArmorDropped(ZombieCamel *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  CreatureConditionTracker *this;
  float *pfVar4;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  long lVar6;
  Effect_PopAnim *this_00;
  PVPManager *this_01;
  string *psVar7;
  PopAnim *pPVar8;
  RtClass *pRVar9;
  ZombieCamelProps *pZVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar11 = *(code **)(*(long *)param_1 + 0xa68);
  FUN_05475d88(asStack_18);
  cVar1 = (*pcVar11)(param_1,asStack_18);
  std::string::~string(asStack_18);
  if (cVar1 != '\0') {
    this = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)param_1);
    fVar12 = (float)CreatureConditionTracker::GetDrawScale(this);
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar16 = *pfVar4;
    fVar15 = pfVar4[1];
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    fVar14 = *(float *)(lVar6 + 0xc4);
    pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)param_1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
    fVar13 = *(float *)(lVar6 + 200);
    if (param_1[0x80c] != (ZombieCamel)0x0) {
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)param_1);
      this_01 = (PVPManager *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
      psVar7 = (string *)PVPManager::GetSkillDatas(this_01);
      GetPAMByName(psVar7);
      pPVar8 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18)
      ;
      pRVar9 = (RtClass *)ZombieAnimRig_Camel::StaticGetClass();
      Effect_PopAnim::CreatePopAnimRig(this_00,pPVar8,pRVar9);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      EATextSquish::Vec3::Vec3
                ((Vec3 *)asStack_18,(float)(int)(fVar16 - fVar14 * fVar12),
                 (float)(int)(fVar15 - fVar13 * fVar12),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
      iVar2 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
      FUN_046849c4(this_00 + 0x1c,iVar2 + 1);
      std::string::string(asStack_18,"die");
      Effect_PopAnim::PlaySingleAnimation(this_00,asStack_18,0);
      std::string::~string(asStack_18);
      nop();
      (**(code **)(*(long *)this_00 + 0x80))(fVar12,this_00);
    }
  }
  if (*(code **)(*(long *)param_1 + 0xa70) == canBecomeUncamel) {
    cVar1 = canBecomeUncamel();
  }
  else {
    cVar1 = (**(code **)(*(long *)param_1 + 0xa70))(param_1);
  }
  if (cVar1 != '\0') {
    param_1[0x804] = (ZombieCamel)0x0;
    (**(code **)(*(long *)param_1 + 0xa78))(param_1);
    switchToNormalZombiePAM(param_1);
    Zombie::EndCondition((Zombie *)param_1,3);
    Zombie::EndCondition((Zombie *)param_1,4);
    cVar1 = Zombie::HasHead((Zombie *)param_1);
    if (cVar1 == '\0') {
      plVar3 = (long *)Zombie::GetAnimRig((Zombie *)param_1);
      (**(code **)(*plVar3 + 400))();
      iVar2 = Zombie::getZombieStateSerialization((Zombie *)param_1);
      if (iVar2 != 8) {
        Zombie::setZombieState((Zombie *)param_1,5,0);
      }
    }
    else {
      cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
      if (cVar1 == '\0') {
        pZVar10 = Zombie::GetProps<ZombieCamelProps>((Zombie *)param_1);
        if (*(float *)(pZVar10 + 0x23c) <= 0.0) {
          Zombie::setZombieState((Zombie *)param_1,1,0);
        }
        else {
          Zombie::setZombieState((Zombie *)param_1,0x20,0);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::StaticClassInit() */

void ZombieCamel::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  StateMachineTableBuilder *this;
  RtClass *pRVar3;
  StateMachineTable *pSVar4;
  code *pcVar5;
  string asStack_188 [8];
  undefined4 local_180 [6];
  pair<std::string,unsigned_int> apStack_168 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_150);
  local_180[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_168,"none",(MagicianActionStatus *)local_180);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_150,(pair *)apStack_168);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_168);
  local_180[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_168,"head",(MagicianActionStatus *)local_180);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_150,(pair *)apStack_168);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_168);
  local_180[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_168,"body",(MagicianActionStatus *)local_180);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_150,(pair *)apStack_168);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_168);
  local_180[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_168,"tail",(MagicianActionStatus *)local_180);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_150,(pair *)apStack_168);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_168);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_168,"ZombieCamelSegmentType");
    (*pcVar5)(plVar2,apStack_168,avStack_150,0);
    std::string::~string((string *)apStack_168);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_150);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_150,"ZombieCamel");
    (*pcVar5)(plVar2,avStack_150,FUN_04686258,0x810,0);
    std::string::~string((string *)avStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<ZombieState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCamel,void(ZombieCamel::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieCamel,void(ZombieCamel::*)()>(aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCamel,void(ZombieCamel::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZS_C_CamelIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04685e44(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCamel,void(ZombieCamel::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieCamel,void(ZombieCamel::*)()>(aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCamel,void(ZombieCamel::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZS_C_Surprised");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04685e44(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamel::StaticGetClass() */

long * ZombieCamel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCamel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCamel::GetClass() const */

long * ZombieCamel::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCamel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCamel::onZombieInitialize() */

void __thiscall ZombieCamel::onZombieInitialize(ZombieCamel *this)

{
  Zombie::onZombieInitialize((Zombie *)this);
  *(undefined4 *)(this + 0x800) = 0;
  this[0x804] = (ZombieCamel)0x1;
  this[0x805] = (ZombieCamel)0x0;
  this[0x806] = (ZombieCamel)0x0;
  *(undefined4 *)(this + 0x808) = 0;
  this[0x80c] = (ZombieCamel)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::onPlaceOnBoard() */

void __thiscall ZombieCamel::onPlaceOnBoard(ZombieCamel *this)

{
  RtWeakPtr *this_00;
  ResourceInfo *pRVar1;
  long lVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  iVar3 = 2;
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard((Zombie *)this);
  this_00 = (RtWeakPtr *)Zombie::GetType((Zombie *)this);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  pRVar1 = pRVar1 + 8;
  lVar2 = FUN_05474374(pRVar1,"camel_onehump",0);
  if (lVar2 == -1) {
    iVar3 = 3;
    lVar2 = FUN_05474374(pRVar1,"camel_twohump",0);
    if (lVar2 == -1) {
      iVar3 = 5;
      lVar2 = FUN_05474374(pRVar1,"camel_manyhump",0);
      if (lVar2 == -1) goto LAB_046866d4;
    }
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  initializeCamel(this,1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  spawnInitialSegments(this,iVar3,false);
LAB_046866d4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::onPlaceOnStreet() */

void __thiscall ZombieCamel::onPlaceOnStreet(ZombieCamel *this)

{
  char cVar1;
  RtWeakPtrBase *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnStreet((Zombie *)this);
  this_00 = (RtWeakPtrBase *)Zombie::GetType((Zombie *)this);
  (**(code **)(*(long *)this + 0xa20))(aRStack_18,this,2);
  cVar1 = Sexy::RtWeakPtrBase::operator!=(this_00,(RtWeakPtrBase *)aRStack_18);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  else {
    (**(code **)(*(long *)this + 0xa20))(aRStack_10,this,3);
    cVar1 = Sexy::RtWeakPtrBase::operator!=(this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar1 != '\0') {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      initializeCamel(this,1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      spawnInitialSegments(this,2,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::onEnterState_Walk(ZombieState) */

void ZombieCamel::onEnterState_Walk(Zombie *param_1)

{
  char cVar1;
  ZombieCamelSubSystem *pZVar2;
  ZombieCamelProps *pZVar3;
  ZombieHydraHeadAnimRig *this;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onEnterState_Walk();
  local_1c = 0;
  pZVar2 = (ZombieCamelSubSystem *)getCamelManager();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  pZVar3 = Zombie::GetProps<ZombieCamelProps>(param_1);
  cVar1 = ZombieCamelSubSystem::GetAnimationOffset
                    (pZVar2,aRStack_10,*(undefined4 *)(pZVar3 + 0x21c),&local_1c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (cVar1 != '\0') {
    this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
    ZombieAnimRig_Camel::SetWalkAnimFrame((ZombieAnimRig_Camel *)this,local_1c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamel::updateState_Walk() */

void __thiscall ZombieCamel::updateState_Walk(ZombieCamel *this)

{
  char cVar1;
  
  cVar1 = FUN_046849d4(this[0x804]);
  if ((cVar1 != '\0') &&
     ((updateWalkingBasedOnNeighborDistance(this), this[0x805] != (ZombieCamel)0x0 ||
      (this[0x806] != (ZombieCamel)0x0)))) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieCamel::CalcHelmDamageIndex() const */

ulong __thiscall ZombieCamel::CalcHelmDamageIndex(ZombieCamel *this)

{
  ulong uVar1;
  ZombieCamelProps *pZVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = Zombie::CalcHelmDamageIndex((Zombie *)this);
  if ((int)uVar1 == 0) {
    if (*(int *)(this + 0x800) == 1) {
      pZVar2 = Zombie::GetProps<ZombieCamelProps>((Zombie *)this);
      fVar3 = *(float *)(pZVar2 + 0x224);
    }
    else {
      pZVar2 = Zombie::GetProps<ZombieCamelProps>((Zombie *)this);
      fVar3 = *(float *)(pZVar2 + 0x228);
    }
    fVar4 = (float)FUN_046849d0(*(undefined4 *)(this + 0x2a8));
    uVar1 = (ulong)(fVar4 < (float)(int)fVar3);
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::onApplyCondition(ZombieConditions) */

void __thiscall ZombieCamel::onApplyCondition(ZombieCamel *this,uint param_2)

{
  char cVar1;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar2;
  undefined8 uVar3;
  Zombie *pZVar4;
  RtMixedPtrBase aRStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onApplyCondition();
  if (((param_2 < 2) || (param_2 == 0x10)) || (param_2 - 0x28 < 2)) {
    pEVar2 = (EntityConditionTracker<Zombie,ZombieConditions> *)
             Zombie::GetConditionTracker((Zombie *)this);
    pZVar4._0_4_ = (Zombie *)
                   EntityConditionTracker<Zombie,ZombieConditions>::GetConditionDuration
                             (pEVar2,param_2);
    uVar3 = getCamelManager();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    ZombieCamelSubSystem::GetPreviousZombie(aRStack_28,uVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      Zombie::ApplyCondition(pZVar4._0_4_,0,uVar3,param_2,1);
    }
    uVar3 = getCamelManager();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    ZombieCamelSubSystem::GetNextZombie(aRStack_20,uVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    else {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Zombie::ApplyCondition(pZVar4._0_4_,0,uVar3,param_2,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCamel::findTarget() */

undefined8 __thiscall ZombieCamel::findTarget(ZombieCamel *this)

{
  char cVar1;
  ZombieCamelProps *pZVar2;
  undefined8 uVar3;
  
  pZVar2 = Zombie::GetProps<ZombieCamelProps>((Zombie *)this);
  if (((pZVar2[0x238] != (ZombieCamelProps)0x0) &&
      (cVar1 = FUN_046849d4(this[0x804]), cVar1 != '\0')) && (cVar1 = isHeadZombie(), cVar1 == '\0')
     ) {
    return 0;
  }
  uVar3 = Zombie::findTarget((Zombie *)this);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCamel::getArmDropFraction() const */

void __thiscall ZombieCamel::getArmDropFraction(ZombieCamel *this)

{
  char cVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"CamelSign");
  cVar1 = Zombie::HasArmor((Zombie *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  uVar2 = 0xbf800000;
  if (cVar1 == '\0') {
    uVar2 = Zombie::getArmDropFraction((Zombie *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


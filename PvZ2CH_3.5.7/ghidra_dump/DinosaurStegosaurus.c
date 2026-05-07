// Class: DinosaurStegosaurus


/* DinosaurStegosaurus::CalcBaseCreatureRenderLayer() const */

undefined8 __thiscall DinosaurStegosaurus::CalcBaseCreatureRenderLayer(DinosaurStegosaurus *this)

{
  if (this[0x250] == (DinosaurStegosaurus)0x0) {
    return 0x639c0;
  }
  return 0x631f0;
}


/* DinosaurStegosaurus::activate() */

void __thiscall DinosaurStegosaurus::activate(DinosaurStegosaurus *this)

{
  Creature::setState((Creature *)this,0xd,0);
  return;
}


/* DinosaurStegosaurus::onAnnoyedComplete(std::string const&) */

void DinosaurStegosaurus::onAnnoyedComplete(string *param_1)

{
  Creature::setState((Creature *)param_1,0xb,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::onEnterState_Idle(CreatureState) */

void DinosaurStegosaurus::onEnterState_Idle
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  undefined8 *puVar1;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_1);
  local_10 = *(undefined4 *)(puVar1 + 1);
  local_18 = (float)*puVar1;
  _local_18 = CONCAT44((int)((ulong)*puVar1 >> 0x20),local_18 - 100.0);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurStegosaurus::CanBeCharmed() */

DinosaurStegosaurus __thiscall DinosaurStegosaurus::CanBeCharmed(DinosaurStegosaurus *this)

{
  DinosaurStegosaurus DVar1;
  int iVar2;
  
  DVar1 = (DinosaurStegosaurus)Dinosaur::CanBeCharmed((Dinosaur *)this);
  if ((DVar1 == (DinosaurStegosaurus)0x0) ||
     (iVar2 = Creature::getState((Creature *)this), iVar2 == 0xd)) {
    DVar1 = (DinosaurStegosaurus)0x0;
  }
  else {
    iVar2 = Creature::getState((Creature *)this);
    if (iVar2 == 0xb) {
      DVar1 = this[0x250];
    }
  }
  return DVar1;
}


/* DinosaurStegosaurus::getNumZombiesOnTail() */

void __thiscall DinosaurStegosaurus::getNumZombiesOnTail(DinosaurStegosaurus *this)

{
  FUN_048250c0(*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x220));
  return;
}


/* DinosaurStegosaurus::isZombieOwnedByAnotherStegoasaurus(Zombie*) */

byte __thiscall
DinosaurStegosaurus::isZombieOwnedByAnotherStegoasaurus(DinosaurStegosaurus *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = Zombie::IsIgnoringAllDamage(param_1);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = Zombie::IsTargetable(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* DinosaurStegosaurus::isValidZombieToSmash(Zombie*) */

byte __thiscall DinosaurStegosaurus::isValidZombieToSmash(DinosaurStegosaurus *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  if ((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsFriendZombie(param_1), cVar1 != '\0')) ||
      (cVar1 = Zombie::IsFlickedOff(param_1), cVar1 != '\0')) ||
     ((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0' ||
      (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')))) {
    bVar2 = 0;
  }
  else {
    bVar2 = Zombie::IsControlled(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* DinosaurStegosaurus::isCollectingZombies() */

bool __thiscall DinosaurStegosaurus::isCollectingZombies(DinosaurStegosaurus *this)

{
  int iVar1;
  
  iVar1 = Creature::getState((Creature *)this);
  return iVar1 == 0xc;
}


/* DinosaurStegosaurus::setupCapturedZombieState(Zombie*, bool) */

void __thiscall
DinosaurStegosaurus::setupCapturedZombieState
          (DinosaurStegosaurus *this,Zombie *param_1,bool param_2)

{
  undefined1 auVar1 [16];
  
  Zombie::SetIgnoresAllDamage(param_1,param_2);
  Zombie::SetIsTargetable(param_1,!param_2);
  Zombie::SetIgnoresCollisions(param_1,param_2);
  Zombie::SetIsControlled(param_1,param_2);
  if (!param_2) {
    (**(code **)(*(long *)param_1 + 0x260))();
    Zombie::EndCondition(param_1,2);
    return;
  }
  (**(code **)(*(long *)param_1 + 600))(param_1);
  auVar1 = PVZ_EOT();
  Zombie::ApplyCondition((Zombie *)auVar1,0,param_1,2,1);
  return;
}


/* DinosaurStegosaurus::isInitialHeadEntrance() */

DinosaurStegosaurus __thiscall DinosaurStegosaurus::isInitialHeadEntrance(DinosaurStegosaurus *this)

{
  return this[0x250];
}


/* DinosaurStegosaurus::onEnterComplete(std::string const&) */

void DinosaurStegosaurus::onEnterComplete(string *param_1)

{
  char cVar1;
  
  cVar1 = isInitialHeadEntrance((DinosaurStegosaurus *)param_1);
  if (cVar1 == '\0') {
    Creature::setState((Creature *)param_1,0xc);
    return;
  }
  Creature::setState((Creature *)param_1,9,0);
  return;
}


/* DinosaurStegosaurus::isInitialTailEntrance() */

byte __thiscall DinosaurStegosaurus::isInitialTailEntrance(DinosaurStegosaurus *this)

{
  return (byte)this[0x250] ^ 1;
}


/* DinosaurStegosaurus::isTimeToFling() */

bool __thiscall DinosaurStegosaurus::isTimeToFling(DinosaurStegosaurus *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x248) <= fVar1;
}


/* DinosaurStegosaurus::onExitComplete(std::string const&) */

void DinosaurStegosaurus::onExitComplete(string *param_1)

{
  char cVar1;
  DinosaurAnimRig_Runner *pDVar2;
  
  cVar1 = isInitialHeadEntrance((DinosaurStegosaurus *)param_1);
  if ((cVar1 != '\0') && (cVar1 = Creature::IsWaveToLeave((Creature *)param_1), cVar1 == '\0')) {
    cVar1 = Dinosaur::isTimedOut((Dinosaur *)param_1);
    if (cVar1 == '\0') {
      param_1[0x250] = (string)((byte)param_1[0x250] ^ 1);
      pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
      FUN_0482509c(pDVar2 + 0x22d,param_1[0x250]);
      Creature::setState((Creature *)param_1,8,0);
      return;
    }
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}


/* DinosaurStegosaurus::DinosaurStegosaurus() */

void __thiscall DinosaurStegosaurus::DinosaurStegosaurus(DinosaurStegosaurus *this)

{
  Dinosaur::Dinosaur((Dinosaur *)this);
  *(undefined ***)this = &PTR_GetClass_06904ce0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurStegosaurus_069050d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x218));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  *(undefined4 *)(this + 0x24c) = 0;
  this[0x252] = (DinosaurStegosaurus)0x0;
  this[0x250] = (DinosaurStegosaurus)0x1;
  return;
}


/* DinosaurStegosaurus::StaticNew() */

DinosaurStegosaurus * DinosaurStegosaurus::StaticNew(void)

{
  DinosaurStegosaurus *this;
  
  this = ::operator_new(600);
  DinosaurStegosaurus(this);
  return this;
}


/* DinosaurStegosaurus::isActivateReady() */

ulong __thiscall DinosaurStegosaurus::isActivateReady(DinosaurStegosaurus *this)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  WaveManager *this_00;
  long lVar5;
  DinosaurStegosaurusPropertySheet *pDVar6;
  ulong uVar7;
  
  cVar2 = Dinosaur::isTimedOut((Dinosaur *)this);
  if ((cVar2 == '\0') && (cVar2 = Creature::IsWaveToLeave((Creature *)this), cVar2 == '\0')) {
    cVar2 = isTimeToFling(this);
    if (cVar2 == '\0') {
      this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      if (this_00 != (WaveManager *)0x0) {
        uVar3 = WaveManager::ShouldFreeCapturedZombies(this_00);
        if (((uVar3 & 0xff) != 0) &&
           (lVar5 = FUN_048250c0(*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x220)),
           lVar5 != 0)) {
          return (ulong)(uVar3 & 0xff);
        }
      }
      pDVar6 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
      iVar1 = *(int *)(pDVar6 + 0xac);
      iVar4 = getNumZombiesOnTail(this);
      if (iVar4 < iVar1) {
        return 0;
      }
      uVar7 = isCollectingZombies(this);
      return uVar7;
    }
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::calcTossDestination(Zombie*) */

void __thiscall DinosaurStegosaurus::calcTossDestination(DinosaurStegosaurus *this,Zombie *param_1)

{
  int iVar1;
  DinosaurStegosaurusPropertySheet *pDVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_34 [2];
  int local_2c;
  float local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar2 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
  fVar7 = *(float *)(pDVar2 + 200);
  pDVar2 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
  fVar4 = (float)Sexy::Rand(ABS(*(float *)(pDVar2 + 0xcc)) - ABS(fVar7));
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar5 = *pfVar3;
  fVar8 = pfVar3[1];
  BoardEntity::CalcGridPosition();
  iVar1 = Sexy::Rand(5);
  local_18 = (ulong)local_18._4_4_ << 0x20;
  local_34[0] = (float)(iVar1 + -2) + (float)local_2c;
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  local_28 = (float)iVar1 - 1.0;
  pfVar3 = eastl::min_alt<float>(local_34,&local_28);
  pfVar3 = eastl::max_alt<float>((float *)&local_18,pfVar3);
  fVar6 = *pfVar3;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,(fVar5 - fVar4) - fVar7,
             fVar8 + (float)iVar1 * (fVar6 - (float)local_2c),0.0);
  local_18 = CONCAT44(uStack_24,local_28);
  local_10 = local_20;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,uStack_24,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::flingAZombie(Zombie*) */

void DinosaurStegosaurus::flingAZombie(Zombie *param_1)

{
  char cVar1;
  DinosaurStegosaurusPropertySheet *pDVar2;
  ZombieTosserSubSystem *pZVar3;
  Zombie *in_x1;
  undefined4 uVar4;
  ZombieTosserSubSystem *pZVar5;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setupCapturedZombieState((DinosaurStegosaurus *)param_1,in_x1,false);
  cVar1 = Dinosaur::isCharmed((Dinosaur *)param_1);
  if (cVar1 == '\0') {
    pDVar2 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
    uVar4 = *(undefined4 *)(pDVar2 + 0xc0);
    pDVar2 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
                    /* WARNING: Load size is inaccurate */
    pZVar5._0_4_ = *(ZombieTosserSubSystem **)(pDVar2 + 0xc4);
    calcTossDestination((DinosaurStegosaurus *)param_1,in_x1);
    pZVar3 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    ZombieTosserSubSystem::LaunchZombie(pZVar5._0_4_,uVar4,pZVar3);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::zombieOverlapsZombie(Zombie*) */

void __thiscall DinosaurStegosaurus::zombieOverlapsZombie(DinosaurStegosaurus *this,Zombie *param_1)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar3;
  float *pfVar4;
  DinosaurStegosaurusPropertySheet *pDVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x218));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x218));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_04827084:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar2);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    if ((this_00 !=
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)param_1) &&
       (this_00 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0)) {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      fVar6 = (float)Sexy::SexyMath::Fabs(*pfVar3 - *pfVar4);
      pDVar5 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
      if (fVar6 < *(float *)(pDVar5 + 0xdc)) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        bVar1 = true;
        goto LAB_04827084;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* DinosaurStegosaurus::setupTimeToFling() */

void __thiscall DinosaurStegosaurus::setupTimeToFling(DinosaurStegosaurus *this)

{
  DinosaurStegosaurusPropertySheet *pDVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_EOT();
  if (*(float *)(this + 0x248) == fVar2) {
    pDVar1 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x248) = fVar2 + *(float *)(pDVar1 + 0xbc);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::onEnterState_Enter(StegoState) */

void DinosaurStegosaurus::onEnterState_Enter(Dinosaur *param_1)

{
  char cVar1;
  int iVar2;
  DinosaurAnimRig_Runner *pDVar3;
  undefined8 *puVar4;
  DinosaurStegosaurusPropertySheet *pDVar5;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::disableTimeout(param_1);
  cVar1 = isInitialHeadEntrance((DinosaurStegosaurus *)param_1);
  if ((cVar1 != '\0') && (param_1[0xa1] == (Dinosaur)0x0)) {
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_60 = *puVar4;
    local_58 = *(undefined4 *)(puVar4 + 1);
    pDVar5 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
    iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(pDVar5 + 0xa0));
    local_60 = CONCAT44(local_60._4_4_,(float)iVar2);
    (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_60);
  }
  pDVar3 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)&local_60,"onEnterComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             (string *)&local_60);
  DinosaurAnimRig_Stegosaurus::PlayEnterAnimation((DinosaurAnimRig_Stegosaurus *)pDVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::onEnterState_Head_Annoyed(StegoState) */

void DinosaurStegosaurus::onEnterState_Head_Annoyed(Dinosaur *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::disableTimeout(param_1);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnnoyedComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Stegosaurus::PlayAnnoyedAnimation
            ((DinosaurAnimRig_Stegosaurus *)pDVar1,aRStack_50);
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
/* DinosaurStegosaurus::onEnterState_Withdraw(StegoState) */

void DinosaurStegosaurus::onEnterState_Withdraw(Creature *param_1)

{
  char cVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onExitComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Stegosaurus::PlayExitAnimation((DinosaurAnimRig_Stegosaurus *)pDVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = Creature::IsWaveToLeave(param_1);
  if (((cVar1 != '\0') || (cVar1 = Dinosaur::isTimedOut((Dinosaur *)param_1), cVar1 != '\0')) ||
     (cVar1 = isInitialHeadEntrance((DinosaurStegosaurus *)param_1), cVar1 == '\0')) {
    Creature::ApplyExitSpeedup(param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::onEnterState_Tail_Fling_Zombies(StegoState) */

void DinosaurStegosaurus::onEnterState_Tail_Fling_Zombies(Dinosaur *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::disableTimeout(param_1);
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAttackAnimComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  DinosaurAnimRig_Stegosaurus::PlayAttackAnimation((DinosaurAnimRig_Stegosaurus *)pDVar1,aRStack_50)
  ;
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
/* DinosaurStegosaurus::doCharmAnimation() */

void __thiscall DinosaurStegosaurus::doCharmAnimation(DinosaurStegosaurus *this)

{
  int iVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Creature::getState((Creature *)this);
  if (iVar1 == 9) {
    pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onStartCharmedComplete");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    DinosaurAnimRig_Stegosaurus::DoCharmAnimation((DinosaurAnimRig_Stegosaurus *)pDVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this[0x252] = (DinosaurStegosaurus)0x1;
  }
  pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)this);
  FUN_0482515c(pDVar2 + 0x22c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::onEnterState_Head_Wait(StegoState) */

void DinosaurStegosaurus::onEnterState_Head_Wait(Dinosaur *param_1)

{
  char cVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Dinosaur::resetTimeout(param_1);
  cVar1 = Dinosaur::isCharmed(param_1);
  if (cVar1 == '\0') {
    pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onIdleContinued");
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
               aRStack_50,aRStack_60,asStack_58);
    DinosaurAnimRig_Stegosaurus::PlayIdleAnimation((DinosaurAnimRig_Stegosaurus *)pDVar2,aRStack_50)
    ;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  else {
    doCharmAnimation((DinosaurStegosaurus *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::onEnterState_Tail_Collect_Zombies(StegoState) */

void DinosaurStegosaurus::onEnterState_Tail_Collect_Zombies(Creature *param_1)

{
  DinosaurAnimRig_Runner *pDVar1;
  undefined4 uVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onIdleContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  DinosaurAnimRig_Stegosaurus::PlayIdleAnimation((DinosaurAnimRig_Stegosaurus *)pDVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  param_1[0x251] = (Creature)0x0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(param_1 + 0x248) = uVar2;
  Dinosaur::resetTimeout((Dinosaur *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::onIdleContinued(std::string const&, std::string const&, int) */

void DinosaurStegosaurus::onIdleContinued(string *param_1,string *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  DinosaurAnimRig_Runner *pDVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1[0x252] == (string)0x0) &&
      (cVar1 = Dinosaur::isCharmed((Dinosaur *)param_1), cVar1 != '\0')) &&
     (iVar2 = Creature::getState((Creature *)param_1), iVar2 == 0xc)) {
    param_1[0x252] = (string)0x1;
    pDVar3 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onIdleContinued");
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
               aRStack_50,aRStack_60,asStack_58);
    DinosaurAnimRig_Stegosaurus::PlayIdleAnimation((DinosaurAnimRig_Stegosaurus *)pDVar3,aRStack_50)
    ;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::onStartCharmedComplete(std::string const&) */

void DinosaurStegosaurus::onStartCharmedComplete(string *param_1)

{
  int iVar1;
  DinosaurAnimRig_Runner *pDVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Creature::getState((Creature *)param_1);
  if (iVar1 == 9) {
    pDVar2 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onIdleContinued");
    RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
    RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
               aRStack_50,aRStack_60,asStack_58);
    DinosaurAnimRig_Stegosaurus::PlayIdleAnimation((DinosaurAnimRig_Stegosaurus *)pDVar2,aRStack_50)
    ;
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::updateState_Head_Wait() */

void __thiscall DinosaurStegosaurus::updateState_Head_Wait(DinosaurStegosaurus *this)

{
  char cVar1;
  bool bVar2;
  DinosaurStegosaurusPropertySheet *pDVar3;
  long lVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xa1] == (DinosaurStegosaurus)0x0) {
    cVar1 = Creature::IsWaveToLeave((Creature *)this);
    if ((cVar1 == '\0') && (cVar1 = Dinosaur::isTimedOut((Dinosaur *)this), cVar1 == '\0')) {
      BoardEntity::CalcGridPosition();
      pDVar3 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
      Sexy::Insets::Insets(aIStack_30,*(int *)(pDVar3 + 0xb0),local_44,2,1);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
                 aIStack_30);
      lVar4 = FUN_048250b4(local_20,local_18);
      if (lVar4 != 0) {
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
              bVar2) {
          puVar5 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
          pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
          cVar1 = (**(code **)(*(long *)this + 0x350))(this,pZVar6);
          if (cVar1 != '\0') {
            Creature::setState((Creature *)this,10,0);
            break;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
    else {
      Creature::setState((Creature *)this,0xb,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::isZombieOnTail(Zombie*) */

void DinosaurStegosaurus::isZombieOnTail(Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x218);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar2,uVar3,aRStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* DinosaurStegosaurus::isValidZombieTarget(Zombie*) */

byte __thiscall DinosaurStegosaurus::isValidZombieTarget(DinosaurStegosaurus *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if ((((((param_1 == (Zombie *)0x0) || (cVar1 = isZombieOnTail((Zombie *)this), cVar1 != '\0')) ||
        (cVar1 = Zombie::IsFriendZombie(param_1), cVar1 != '\0')) ||
       ((cVar1 = isZombieOwnedByAnotherStegoasaurus(this,param_1), cVar1 != '\0' ||
        (cVar1 = Zombie::IsFlying(param_1), cVar1 != '\0')))) ||
      ((cVar1 = Zombie::IsFlickedOff(param_1), cVar1 != '\0' ||
       ((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0' ||
        (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')))))) ||
     ((cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0' ||
      (cVar1 = Zombie::IsTargetable(param_1), cVar1 == '\0')))) {
    bVar2 = 0;
  }
  else {
    pcVar4 = *(code **)(*(long *)param_1 + 0x20);
    uVar3 = ZombieZombossMech::StaticGetClass();
    bVar2 = (*pcVar4)(param_1,uVar3);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::flingZombies() */

void __thiscall DinosaurStegosaurus::flingZombies(DinosaurStegosaurus *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x218);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      flingAZombie((Zombie *)this);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::onAttackAnimComplete(std::string const&) */

void DinosaurStegosaurus::onAttackAnimComplete(string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  DinosaurStegosaurusPropertySheet *pDVar5;
  RtWeakPtrBase *pRVar6;
  Zombie *pZVar7;
  long *plVar8;
  code *pcVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar5 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
  cVar3 = Dinosaur::isCharmed((Dinosaur *)param_1);
  if (cVar3 != '\0') {
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(param_1 + 0x230);
    iVar1 = *(int *)(pDVar5 + 0xd8);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    while (bVar4 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar4)
    {
      pRVar6 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,pRVar6);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_90);
      if (cVar3 != '\0') {
        pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        cVar3 = isValidZombieToSmash((DinosaurStegosaurus *)param_1,pZVar7);
        if (cVar3 != '\0') {
          FUN_0482508c(*(long *)(gLawnApp + 0x9f0) + 0xcab);
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
          pcVar9 = *(code **)(*plVar8 + 0x110);
          Sexy::Point::Point(aPStack_78,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)(float)iVar1,local_70,local_6c,aDStack_68,aPStack_78,0);
          (*pcVar9)(plVar8,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this);
  }
  iVar1 = *(int *)(param_1 + 0x24c);
  iVar2 = *(int *)(pDVar5 + 0xa8);
  *(int *)(param_1 + 0x24c) = iVar1 + 1;
  if (iVar1 + 1 < iVar2) {
    Creature::setState((Creature *)param_1,0xc,0);
  }
  else {
    Creature::setState((Creature *)param_1,0xb,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurStegosaurus::~DinosaurStegosaurus() */

void __thiscall DinosaurStegosaurus::~DinosaurStegosaurus(DinosaurStegosaurus *this)

{
  *(undefined ***)this = &PTR_GetClass_06904ce0;
  *(undefined ***)(this + 0x10) = &PTR__DinosaurStegosaurus_069050d8;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x230));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x218));
  Dinosaur::~Dinosaur((Dinosaur *)this);
  return;
}


/* non-virtual thunk to DinosaurStegosaurus::~DinosaurStegosaurus() */

void __thiscall DinosaurStegosaurus::~DinosaurStegosaurus(DinosaurStegosaurus *this)

{
  ~DinosaurStegosaurus(this + -0x10);
  return;
}


/* DinosaurStegosaurus::~DinosaurStegosaurus() */

void __thiscall DinosaurStegosaurus::~DinosaurStegosaurus(DinosaurStegosaurus *this)

{
  ~DinosaurStegosaurus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DinosaurStegosaurus::~DinosaurStegosaurus() */

void __thiscall DinosaurStegosaurus::~DinosaurStegosaurus(DinosaurStegosaurus *this)

{
  ~DinosaurStegosaurus(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::addZombieToTail(Zombie*) */

void __thiscall DinosaurStegosaurus::addZombieToTail(DinosaurStegosaurus *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  DinosaurStegosaurusPropertySheet *pDVar8;
  float *pfVar9;
  ZombieTosserSubSystem *pZVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ZombieTosserSubSystem *pZVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x218);
  local_8 = ___stack_chk_guard;
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_60 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar6,uVar7,aRStack_68);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (bVar1) {
    FUN_0482508c(*(long *)(gLawnApp + 0x9f0) + 0xcab);
    setupCapturedZombieState(this,param_1,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)&local_60);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
               (RtWeakPtr *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    iVar3 = FUN_048250c0(*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x220));
    pDVar8 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
    if (((iVar3 < *(int *)(pDVar8 + 0xac)) && (1 < iVar3)) &&
       (cVar2 = zombieOverlapsZombie(this,param_1), cVar2 != '\0')) {
      pDVar8 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
      fVar13 = *(float *)(pDVar8 + 0xb4);
      pDVar8 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
      fVar12 = *(float *)(pDVar8 + 0xb8);
      pDVar8 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
                    /* WARNING: Load size is inaccurate */
      pZVar14._0_4_ = *(ZombieTosserSubSystem **)(pDVar8 + 0xdc);
      fVar11 = (float)std::modf(fVar13 - 0.5,(float *)&local_58);
      iVar3 = BoardTransforms::GridToBoardSpaceX((int)(fVar13 - 0.5));
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      pfVar9 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      if (fVar12 * 0.5 * (float)iVar5 + fVar11 * (float)iVar4 + (float)iVar3 <= *pfVar9) {
        pZVar14._0_4_ = (ZombieTosserSubSystem *)-(float)pZVar14._0_4_;
      }
      pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombieHorizontal
                (pZVar14._0_4_,0x41200000,0x3e4ccccd,pZVar10,param_1,aRStack_50,1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::updateState_Tail_Collect_Zombies() */

void __thiscall DinosaurStegosaurus::updateState_Tail_Collect_Zombies(DinosaurStegosaurus *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  DinosaurStegosaurusPropertySheet *pDVar8;
  undefined8 *puVar9;
  Zombie *pZVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_44;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x338))();
  if (cVar1 == '\0') {
    cVar1 = isCollectingZombies(this);
    if (cVar1 != '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      pDVar8 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
      fVar11 = *(float *)(pDVar8 + 0xb4);
      fVar13 = *(float *)(pDVar8 + 0xb8);
      fVar12 = (float)std::modf(fVar11 - 0.5,&fStack_44);
      iVar3 = BoardTransforms::GridToBoardSpaceX((int)(fVar11 - 0.5));
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      lVar7 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
      fVar11 = *(float *)(lVar7 + 4);
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
      Sexy::Insets::Insets
                (aIStack_30,(int)((float)iVar3 + fVar12 * (float)iVar4),(int)fVar11,
                 (int)((float)iVar5 * fVar13),(int)((double)iVar6 * 0.3));
      EntityFinder::GetEntitiesInRectangle(avStack_20,2,aIStack_30);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar2) {
        puVar9 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
        cVar1 = (**(code **)(*(long *)this + 0x350))(this,pZVar10);
        if (cVar1 != '\0') {
          addZombieToTail(this,pZVar10);
          Dinosaur::resetTimeout((Dinosaur *)this);
          setupTimeToFling(this);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  else {
    cVar1 = Dinosaur::isTimedOut((Dinosaur *)this);
    if (((cVar1 == '\0') && (cVar1 = Creature::IsWaveToLeave((Creature *)this), cVar1 == '\0')) ||
       (lVar7 = FUN_048250c0(*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x220)),
       lVar7 != 0)) {
      (**(code **)(*(long *)this + 0x340))(this);
    }
    else {
      Creature::setState((Creature *)this,0xb,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::smashZombiesOnTail() */

void __thiscall DinosaurStegosaurus::smashZombiesOnTail(DinosaurStegosaurus *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  DinosaurStegosaurusPropertySheet *pDVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  RtWeakPtrBase *pRVar14;
  Zombie *pZVar15;
  code *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  undefined8 local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68 [12];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x218);
  local_8 = ___stack_chk_guard;
  pDVar9 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
  iVar1 = *(int *)(pDVar9 + 0xd4);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x230));
  pDVar9 = Creature::GetProps<DinosaurStegosaurusPropertySheet>();
  fVar19 = *(float *)(pDVar9 + 0xd0);
  pfVar10 = (float *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
  fVar18 = *pfVar10;
  fVar2 = fVar19 + 0.5;
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar17 = pfVar10[1];
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  fVar19 = fVar19 * 2.0 + 1.0;
  iVar7 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar8 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (aIStack_90,(int)(fVar18 - fVar2 * (float)iVar5),(int)(fVar17 - fVar2 * (float)iVar6),
             (int)((float)iVar7 * fVar19),(int)((float)iVar8 * fVar19));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesInRectangle(avStack_80,2,aIStack_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar3) {
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    pZVar15 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar11);
    if (pZVar15 != (Zombie *)0x0) {
      uVar12 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
      uVar13 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
      ToolPacketData::GetProps();
      local_98 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar12,uVar13,aRStack_a0);
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_98,(__normal_iterator *)local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
      if (bVar3) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_98);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x230),(RtWeakPtr *)local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar3) {
    pRVar14 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_b8,pRVar14);
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_b8);
    if (cVar4 != '\0') {
      pZVar15 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
      setupCapturedZombieState(this,pZVar15,false);
      cVar4 = isValidZombieToSmash(this,pZVar15);
      if (cVar4 != '\0') {
        pcVar16 = *(code **)(*(long *)pZVar15 + 0x110);
        Sexy::Point::Point((Point *)aRStack_a0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)(float)iVar1,(undefined4)local_98,local_98._4_4_,
                   (DamageInfo *)local_68,(Point *)aRStack_a0,0);
        (*pcVar16)(pZVar15,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurStegosaurus::doFling() */

void __thiscall DinosaurStegosaurus::doFling(DinosaurStegosaurus *this)

{
  char cVar1;
  
  this[0x251] = (DinosaurStegosaurus)0x1;
  cVar1 = Dinosaur::isCharmed((Dinosaur *)this);
  if (cVar1 == '\0') {
    flingZombies(this);
    return;
  }
  smashZombiesOnTail(this);
  return;
}


/* DinosaurStegosaurus::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void DinosaurStegosaurus::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = Creature::isInState((Creature *)param_1,0xd);
  if (((cVar1 != '\0') && (bVar2 = std::operator==(param_4,"use_action"), bVar2)) &&
     (param_1[0x251] == (string)0x0)) {
    doFling((DinosaurStegosaurus *)param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::StaticClassInit() */

void DinosaurStegosaurus::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<StegoState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<StegoState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"DinosaurStegosaurus");
      (*pcVar4)(plVar1,asStack_150,FUN_04829598,600,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<StegoState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x358);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x360);
  Sexy::Delegate0::Delegate0<DinosaurStegosaurus,void(DinosaurStegosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x368);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_STEGO_Enter");
  StateDefinition<StegoState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04828e90(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x370);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x378);
  Sexy::Delegate0::Delegate0<DinosaurStegosaurus,void(DinosaurStegosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x380);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_STEGO_Head_Wait");
  StateDefinition<StegoState>::StateDefinition
            (aSStack_a8,9,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04828e90(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x388);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x390);
  Sexy::Delegate0::Delegate0<DinosaurStegosaurus,void(DinosaurStegosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x398);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_STEGO_Head_Annoyed");
  StateDefinition<StegoState>::StateDefinition
            (aSStack_a8,10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04828e90(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3a0);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3a8);
  Sexy::Delegate0::Delegate0<DinosaurStegosaurus,void(DinosaurStegosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3b0);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_STEGO_Withdraw");
  StateDefinition<StegoState>::StateDefinition
            (aSStack_a8,0xb,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04828e90(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3b8);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3c0);
  Sexy::Delegate0::Delegate0<DinosaurStegosaurus,void(DinosaurStegosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3c8);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_STEGO_Tail_Collect_Zombies");
  StateDefinition<StegoState>::StateDefinition
            (aSStack_a8,0xc,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04828e90(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3d0);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3d8);
  Sexy::Delegate0::Delegate0<DinosaurStegosaurus,void(DinosaurStegosaurus::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x3e0);
  Sexy::Delegate1<StegoState>::
  Delegate1<DinosaurStegosaurus,void(DinosaurStegosaurus::*)(StegoState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"CS_STEGO_Tail_Fling_Zombies");
  StateDefinition<StegoState>::StateDefinition
            (aSStack_a8,0xd,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04828e90(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DinosaurStegosaurus::StaticGetClass() */

long * DinosaurStegosaurus::StaticGetClass(void)

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
  uVar2 = Dinosaur::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurStegosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurStegosaurus::GetClass() const */

long * DinosaurStegosaurus::GetClass(void)

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
  uVar2 = Dinosaur::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurStegosaurus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurStegosaurus::onCreatureInitialize() */

void __thiscall DinosaurStegosaurus::onCreatureInitialize(DinosaurStegosaurus *this)

{
  DinosaurAnimRig_Runner *pDVar1;
  
  Dinosaur::onCreatureInitialize((Dinosaur *)this);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x218));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x230));
  pDVar1 = Creature::GetAnimRig<DinosaurAnimRig_Runner>((Creature *)this);
  FUN_0482509c(pDVar1 + 0x22d,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurus::onUpdate() */

void __thiscall DinosaurStegosaurus::onUpdate(DinosaurStegosaurus *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CreatureAnimRig *pCVar4;
  SexyVector3 *this_00;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  Vec3 aVStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Creature::updateRushCondition((Creature *)this);
  Creature::updateStateMachine((Creature *)this);
  EntityConditionTracker<Creature,CreatureConditions>::Update
            ((EntityConditionTracker<Creature,CreatureConditions> *)(this + 400),(Creature *)this);
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x16c),1);
  pCVar4 = (CreatureAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
  CreatureAnimRig::CreatureUpdateAnim(pCVar4,bVar1);
  if (bVar1) {
    pCVar4 = (CreatureAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xb0));
    fVar6 = (float)CreatureAnimRig::GetGroundTrackTranslation(pCVar4);
    fVar7 = (float)Creature::GetFacingMultiplier((Creature *)this);
    uVar3 = 0;
    uVar8 = 0;
    EATextSquish::Vec3::Vec3(aVStack_28,-(fVar6 * fVar7 * *(float *)(this + 0x178)),0.0,0.0);
    pcVar5 = *(code **)(*(long *)this + 0x78);
    this_00 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    uStack_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)aVStack_28);
    uStack_14 = uVar3;
    uStack_10 = uVar8;
    (*pcVar5)(this,&uStack_18);
  }
  uVar3 = Creature::IsFlying((Creature *)this);
  (**(code **)(*(long *)this + 0xa8))(this,uVar3);
  (**(code **)(*(long *)this + 0xa8))(this,uVar3);
  Creature::updateCheckForPitOfDoomDeath((Creature *)this);
  nop();
  cVar2 = (**(code **)(*(long *)this + 0x298))(this);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurStegosaurus::onPlaceOnBoard() */

void __thiscall DinosaurStegosaurus::onPlaceOnBoard(DinosaurStegosaurus *this)

{
  DinoYoungTyrannosaurus::wakeAnimDoneHandler((DinoYoungTyrannosaurus *)this);
  this[0x250] = (DinosaurStegosaurus)0x1;
  Creature::setState((Creature *)this,8,0);
  return;
}


/* DinosaurStegosaurus::Charm() */

void __thiscall DinosaurStegosaurus::Charm(DinosaurStegosaurus *this)

{
  Dinosaur::Charm((Dinosaur *)this);
  doCharmAnimation(this);
  return;
}


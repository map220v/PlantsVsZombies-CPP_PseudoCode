// Class: ZombieTombRaiser


/* ZombieTombRaiser::isPendingGraveAt(int, int) */

undefined8 __thiscall
ZombieTombRaiser::isPendingGraveAt(ZombieTombRaiser *this,int param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x818);
  uVar1 = FUN_046d78f0(uVar5,*(undefined8 *)(this + 0x820));
  uVar3 = 0;
  do {
    uVar4 = (ulong)((int)uVar3 + 1);
    if (uVar1 <= uVar3) {
      return 0;
    }
    lVar2 = FUN_046d792c(uVar5,uVar3);
    uVar3 = uVar4;
  } while ((*(int *)(lVar2 + 0x14) != param_1) || (*(int *)(lVar2 + 0x18) != param_2));
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiser::onThrow() */

void __thiscall ZombieTombRaiser::onThrow(ZombieTombRaiser *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_046d78dc(*(undefined8 *)(this + 0x830),*(undefined8 *)(this + 0x838));
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0xa50))(this,this + 0x80c);
    *(int *)(this + 0x800) = *(int *)(this + 0x800) + -1;
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x830);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      (**(code **)(*(long *)this + 0xa50))(this,uVar3);
      *(int *)(this + 0x800) = *(int *)(this + 0x800) + -1;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00);
  }
  std::string::string((string *)&local_10,"Play_TombRaiser_Throw");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_10,0.0);
  std::string::~string((string *)&local_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiser::isInExistPosition(Sexy::Point const&) */

void __thiscall ZombieTombRaiser::isInExistPosition(ZombieTombRaiser *this,Point *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x830);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::Point::Point((Point *)&local_10,(TPoint *)param_1);
  local_18 = FUN_046d8454(uVar2,uVar3,(Point *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* ZombieTombRaiser::ZombieTombRaiser() */

void __thiscall ZombieTombRaiser::ZombieTombRaiser(ZombieTombRaiser *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068b5ef0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTombRaiser_068b6960;
  Sexy::Point::Point((Point *)(this + 0x80c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x818));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x830));
  return;
}


/* ZombieTombRaiser::StaticNew() */

ZombieTombRaiser * ZombieTombRaiser::StaticNew(void)

{
  ZombieTombRaiser *this;
  
  this = ::operator_new(0x848);
  ZombieTombRaiser(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiser::throwBone(Sexy::Point const&) */

void __thiscall ZombieTombRaiser::throwBone(ZombieTombRaiser *this,Point *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PopAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  ZombieTombRaiserProps *pZVar6;
  TombraiserProjectile *this_01;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_30;
  int local_2c;
  string asStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_18);
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_046d753c(*(undefined8 *)(lVar4 + 0x20));
  uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0x50) + 0xc);
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_046d753c(*(undefined8 *)(lVar4 + 0x20));
  lVar7 = *(long *)(lVar4 + 0x50);
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_046d753c(*(undefined8 *)(lVar4 + 0x20));
  *(float *)(lVar7 + 0xc) = (float)((int)*(float *)(*(long *)(lVar4 + 0x50) + 0xc) + -1);
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_28,"zombie_egypt_tr_bone");
  PopAnimRig::CalcSymbolRect(this_00,asStack_28,(TRect *)&local_18);
  std::string::~string(asStack_28);
  nop();
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_046d753c(*(undefined8 *)(lVar4 + 0x20));
  *(undefined4 *)(*(long *)(lVar4 + 0x50) + 0xc) = uVar1;
  fVar12 = *(float *)(this + 0x1c);
  fVar9 = (float)FUN_046d79c4(*(undefined4 *)(this + 0x18),fVar12,*(undefined4 *)(this + 0x20));
  iVar2 = FUN_046d7af8(local_18 + local_10 / 2);
  pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
  fVar10 = *(float *)(lVar4 + 0xc4);
  iVar3 = FUN_046d7af8(local_14 + local_c / 2);
  pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
  fVar11 = *(float *)(lVar4 + 200);
  uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
  pZVar6 = Zombie::GetProps<ZombieTombRaiserProps>((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)(pZVar6 + 0x220));
  this_01 = (TombraiserProjectile *)
            Board::AddProjectile
                      ((Board *)(float)(int)((fVar9 - fVar10) + (float)iVar2),(float)(int)fVar12,
                       (float)-(int)((float)iVar3 - fVar11),uVar8,asStack_28,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  TombraiserProjectile::SetGridTarget(this_01,param_1);
  BoardTransforms::GridToBoardSpace(param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)local_30,(float)local_2c,0.0);
  Projectile::LaunchAt((Projectile *)this_01,(SexyVector3 *)asStack_28,250.0,1.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiser::updateState_Waiting() */

void __thiscall ZombieTombRaiser::updateState_Waiting(ZombieTombRaiser *this)

{
  char cVar1;
  uint uVar2;
  RiftThemeFastSpell *pRVar3;
  ZombieTombRaiserProps *pZVar4;
  float fVar5;
  float fVar6;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  uVar2 = (uint)pRVar3;
  if (pRVar3 != (RiftThemeFastSpell *)0x0) {
    uVar2 = Creature::IsOnBoard();
    uVar2 = uVar2 & 0xff;
  }
  fVar5 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar4 = Zombie::GetProps<ZombieTombRaiserProps>((Zombie *)this);
  fVar6 = *(float *)(pZVar4 + 0x210);
  Sexy::Point::Point(aPStack_10);
  if (fVar6 < fVar5) {
    cVar1 = (**(code **)(*(long *)this + 0xa58))(this,aPStack_10);
    if (cVar1 == '\0') {
      if (uVar2 == 0) {
        Zombie::setZombieState((Zombie *)this,1,0);
      }
      else {
        (**(code **)(*(long *)this + 600))(this);
      }
    }
    else {
      Zombie::setZombieState((Zombie *)this,0x20,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTombRaiser::onSpawnAnimDone() */

void __thiscall ZombieTombRaiser::onSpawnAnimDone(ZombieTombRaiser *this)

{
  int iVar1;
  char cVar2;
  ZombieTombRaiserProps *pZVar3;
  RiftThemeFastSpell *pRVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  iVar1 = *(int *)(this + 0x804);
  *(int *)(this + 0x804) = iVar1 + -1;
  if (0 < iVar1 + -1) {
    (**(code **)(*(long *)this + 0xa38))();
    return;
  }
  if (*(int *)(this + 0x800) < 1) {
    uVar6 = PVZ_EOT();
    *(undefined4 *)(this + 0x808) = uVar6;
    pRVar4 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  }
  else {
    pZVar3 = Zombie::GetProps<ZombieTombRaiserProps>((Zombie *)this);
    fVar7 = *(float *)(pZVar3 + 0x214);
    pRVar4 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
    if (pRVar4 != (RiftThemeFastSpell *)0x0) {
      fVar5 = (float)RiftThemeFastSpell::GetReducedCDRate();
      fVar7 = fVar7 * (1.0 - fVar5);
    }
    fVar5 = (float)PVZ_T();
    cVar2 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar2 == '\0') {
      *(float *)(this + 0x808) = fVar7 + fVar5;
    }
    else {
      *(float *)(this + 0x808) = fVar5 + 0.0;
    }
    pRVar4 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  }
  if ((pRVar4 == (RiftThemeFastSpell *)0x0) || (cVar2 = Creature::IsOnBoard(), cVar2 == '\0')) {
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar2 == '\0') {
      Zombie::setZombieState((Zombie *)this,1);
      return;
    }
  }
  else {
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar2 == '\0') {
      (**(code **)(*(long *)this + 600))(this);
    }
  }
  return;
}


/* ZombieTombRaiser::~ZombieTombRaiser() */

void __thiscall ZombieTombRaiser::~ZombieTombRaiser(ZombieTombRaiser *this)

{
  *(undefined ***)this = &PTR_GetClass_068b5ef0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieTombRaiser_068b6960;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x830));
  std::vector<ZombieTombRaiser::SpellBolt,std::allocator<ZombieTombRaiser::SpellBolt>>::~vector
            ((vector<ZombieTombRaiser::SpellBolt,std::allocator<ZombieTombRaiser::SpellBolt>> *)
             (this + 0x818));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieTombRaiser::~ZombieTombRaiser() */

void __thiscall ZombieTombRaiser::~ZombieTombRaiser(ZombieTombRaiser *this)

{
  ~ZombieTombRaiser(this + -0x10);
  return;
}


/* ZombieTombRaiser::~ZombieTombRaiser() */

void __thiscall ZombieTombRaiser::~ZombieTombRaiser(ZombieTombRaiser *this)

{
  ~ZombieTombRaiser(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieTombRaiser::~ZombieTombRaiser() */

void __thiscall ZombieTombRaiser::~ZombieTombRaiser(ZombieTombRaiser *this)

{
  ~ZombieTombRaiser(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiser::startSpawnAnim() */

void __thiscall ZombieTombRaiser::startSpawnAnim(ZombieTombRaiser *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  int iVar3;
  float fVar4;
  RtMixedPtr aRStack_c8 [8];
  RtId aRStack_c0 [8];
  string asStack_b8 [8];
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  string asStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_a0,"Play_TombRaiser_Puke");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_a0,0.0);
  std::string::~string(asStack_a0);
  nop();
  fVar4 = (float)BoardHelpers::ApplyLevelBasedModifierValue(1.0,0xe,1,1);
  if ((int)fVar4 < 2) {
    (**(code **)(*(long *)this + 0xa58))(this,this + 0x80c);
  }
  else {
    iVar3 = 0;
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x830));
    do {
      iVar3 = iVar3 + 1;
      Sexy::Point::Point((Point *)asStack_a0);
      (**(code **)(*(long *)this + 0xa58))(this,asStack_a0);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x830),
                 (Point *)asStack_a0);
    } while (iVar3 != (int)fVar4);
  }
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x268);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
  std::string::string(asStack_b8,"onSpawnAnimDone");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_98,aRStack_c0,asStack_b8);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
  std::string::string(asStack_a0,"onThrow");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,aRStack_a8,asStack_a0);
  (*pcVar2)(pZVar1,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_a0);
  nop();
  Sexy::RtId::~RtId(aRStack_a8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  std::string::~string(asStack_b8);
  nop();
  Sexy::RtId::~RtId(aRStack_c0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiser::findTargetPosition(Sexy::Point&) */

void __thiscall ZombieTombRaiser::findTargetPosition(ZombieTombRaiser *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  RiftThemeFastSpell *pRVar6;
  float *pfVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  TPoint *pTVar11;
  ulong uVar12;
  ZombieTombRaiserProps *pZVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  Board *this_00;
  int iVar17;
  int local_28;
  int iStack_24;
  int local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar3 != '\0') {
    BoardEntity::CalcGridPosition();
    *(ulong *)param_1 = CONCAT44(uStack_1c,local_20);
    *(int *)param_1 = local_20 + -1;
    goto LAB_046d9044;
  }
  pRVar6 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if (pRVar6 == (RiftThemeFastSpell *)0x0) {
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    local_28 = BoardTransforms::BoardSpaceToGridX(*pfVar7);
    local_28 = local_28 + -2;
    local_20 = 2;
    piVar8 = eastl::max_alt<int>(&local_28,&local_20);
    local_28 = *piVar8 + 2;
    local_20 = 9;
    iVar5 = *piVar8 + -1;
    piVar8 = eastl::min_alt<int>(&local_28,&local_20);
    iVar17 = *piVar8;
    lVar14 = *(long *)(gLawnApp + 0x9f0);
  }
  else {
    iVar5 = -1;
    lVar14 = *(long *)(gLawnApp + 0x9f0);
    iVar17 = *(int *)(lVar14 + 0xf8);
  }
  iVar2 = *(int *)(lVar14 + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (iVar5 < iVar17) {
    do {
      iVar15 = 0;
      if (0 < iVar2) {
        do {
          while (((cVar4 = Board::CanAddGraveStoneAt(this_00,iVar5,iVar15,false), cVar4 == '\0' ||
                  (cVar4 = isPendingGraveAt(this,iVar5,iVar15), cVar4 != '\0')) ||
                 (cVar4 = ZombieLollipops::isTombraiserZombieAt
                                    ((ZombieLollipops *)this,iVar5,iVar15), cVar4 != '\0'))) {
LAB_046d8f7c:
            iVar15 = iVar15 + 1;
            if (iVar15 == iVar2) goto LAB_046d9020;
          }
          Sexy::Point::Point((Point *)&local_28,iVar5,iVar15);
          cVar4 = isInExistPosition(this,(Point *)&local_28);
          if (cVar4 != '\0') goto LAB_046d8f7c;
          Sexy::Point::Point((Point *)&local_28);
          iVar1 = iVar15 + 1;
          local_28 = iVar5;
          iStack_24 = iVar15;
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_28
                    );
          iVar15 = iVar1;
        } while (iVar1 != iVar2);
      }
LAB_046d9020:
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar17);
  }
  lVar14 = FUN_046d78dc(CONCAT44(uStack_1c,local_20),local_18);
  if (lVar14 != 0) {
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
              (uVar9,uVar10);
    if (pRVar6 == (RiftThemeFastSpell *)0x0) {
      pZVar13 = Zombie::GetProps<ZombieTombRaiserProps>((Zombie *)this);
      iVar5 = *(int *)(pZVar13 + 0x30);
    }
    else {
      iVar5 = 99999;
    }
    if (iVar5 == *(int *)(this + 0x800)) {
      iVar5 = SharkMinion::getRow((SharkMinion *)this);
      cVar3 = Board::CanAddGraveStoneAt(this_00,7,iVar5,false);
      if ((cVar3 == '\0') || (cVar3 = isPendingGraveAt(this,7,iVar5), cVar3 != '\0'))
      goto LAB_046d9150;
      Sexy::Point::Point((Point *)&local_28,7,iVar5);
      cVar3 = isInExistPosition(this,(Point *)&local_28);
      if (cVar3 != '\0') goto LAB_046d9150;
      cVar3 = '\x01';
      Sexy::Point::Point((Point *)&local_28,7,iVar5);
      *(ulong *)param_1 = CONCAT44(iStack_24,local_28);
    }
    else {
LAB_046d9150:
      cVar3 = '\0';
    }
    uVar9 = CONCAT44(uStack_1c,local_20);
    uVar16 = 0;
    lVar14 = FUN_046d78dc(uVar9,local_18);
    if (lVar14 != 0) {
      do {
        if (cVar3 != '\0') break;
        pTVar11 = (TPoint *)FUN_046d78e8(uVar9,uVar16);
        Sexy::Point::Point((Point *)&local_28,pTVar11);
        cVar3 = Board::CanAddGraveStoneAt(this_00,local_28,iStack_24,false);
        if ((cVar3 == '\0') || (cVar3 = isPendingGraveAt(this,local_28,iStack_24), cVar3 != '\0')) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
          *(ulong *)param_1 = CONCAT44(iStack_24,local_28);
        }
        uVar16 = uVar16 + 1;
        uVar9 = CONCAT44(uStack_1c,local_20);
        uVar12 = FUN_046d78dc(uVar9,local_18);
      } while (uVar16 < uVar12);
    }
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
LAB_046d9044:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiser::StaticClassInit() */

void ZombieTombRaiser::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  StateMachineTableBuilder *this;
  RtClass *pRVar3;
  StateMachineTable *pSVar4;
  code *pcVar5;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_150,"SpellBolt");
      (*pcVar5)(plVar2,asStack_150,FUN_046d755c,0x1c,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"ZombieTombRaiser");
    (*pcVar5)(plVar2,asStack_150,FUN_046d9940,0x848,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<ZombieState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieTombRaiser,void(ZombieTombRaiser::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieTombRaiser,void(ZombieTombRaiser::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieTombRaiser,void(ZombieTombRaiser::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TR_Waiting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046d95e0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieTombRaiser,void(ZombieTombRaiser::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieTombRaiser,void(ZombieTombRaiser::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieTombRaiser,void(ZombieTombRaiser::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_TR_Spawning");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046d95e0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieTombRaiser::StaticGetClass() */

long * ZombieTombRaiser::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTombRaiser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTombRaiser::GetClass() const */

long * ZombieTombRaiser::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTombRaiser",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTombRaiser::onZombieInitialize() */

void __thiscall ZombieTombRaiser::onZombieInitialize(ZombieTombRaiser *this)

{
  char cVar1;
  int iVar2;
  RiftThemeFastSpell *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  undefined4 uVar5;
  
  Zombie::onZombieInitialize((Zombie *)this);
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  uVar5 = 99999;
  if (pRVar3 == (RiftThemeFastSpell *)0x0) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar5 = *(undefined4 *)(lVar4 + 0x30);
  }
  *(undefined4 *)(this + 0x800) = uVar5;
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  iVar2 = 8;
  if (cVar1 != '\0') {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar2 = iVar2 + -1;
  }
  *(int *)(this + 0x814) = iVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiser::updateState_Idle() */

void __thiscall ZombieTombRaiser::updateState_Idle(ZombieTombRaiser *this)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  float fVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar2 != (RiftThemeFastSpell *)0x0) && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')
     ) {
    Sexy::Point::Point(aPStack_10);
    fVar3 = (float)PVZ_T();
    if ((*(float *)(this + 0x808) < fVar3) &&
       (cVar1 = (**(code **)(*(long *)this + 0xa58))(this,aPStack_10), cVar1 != '\0')) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      goto LAB_046da5b0;
    }
  }
  Zombie::updateState_Idle((Zombie *)this);
LAB_046da5b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiser::updateState_Walk() */

void __thiscall ZombieTombRaiser::updateState_Walk(ZombieTombRaiser *this)

{
  char cVar1;
  int iVar2;
  RiftThemeFastSpell *pRVar3;
  float *pfVar4;
  float fVar5;
  Zombie *pZVar6;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar3 == (RiftThemeFastSpell *)0x0) || (cVar1 = Creature::IsOnBoard(), cVar1 == '\0')) {
    iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x814));
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    if ((*pfVar4 <= (float)iVar2) && (cVar1 = FUN_046d7540(this[0xa0]), cVar1 == '\0')) {
      BoardEntity::CalcGridPosition();
      if (local_10[0] != 0) {
        cVar1 = NewPVPUtils::IsPlayingNewPVP();
        if (cVar1 != '\0') {
          BoardEntity::CalcGridPosition();
          *(int *)(this + 0x814) = local_10[0] + -2;
        }
        cVar1 = RealObject::IsOnTeam(this,2);
        if (cVar1 != '\0') {
          Sexy::Point::Point((Point *)local_10);
          fVar5 = (float)PVZ_T();
          if ((*(float *)(this + 0x808) < fVar5) &&
             (cVar1 = (**(code **)(*(long *)this + 0xa58))(this,(Point *)local_10), cVar1 != '\0'))
          {
            Zombie::setZombieState((Zombie *)this,0x1f,0);
            goto LAB_046da678;
          }
        }
      }
    }
    Zombie::updateState_Walk((Zombie *)this);
  }
  else {
    pZVar6._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar6._0_4_,0,this,0x6f,1);
  }
LAB_046da678:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTombRaiser::onTakeFatalDamage(DamageInfo const&) */

void __thiscall ZombieTombRaiser::onTakeFatalDamage(ZombieTombRaiser *this,DamageInfo *param_1)

{
  int iVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x800);
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if ((iVar1 == *(int *)(lVar3 + 0x30)) &&
     (bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x4000), !bVar2)) {
    std::string::string(asStack_10,"dog_whisperer_ch");
    Achievement::Queue(asStack_10,100.0);
    std::string::~string(asStack_10);
    nop();
    Achievement::ShowAll();
    std::string::string(asStack_10,"dog_whisperer_ch");
    Achievement::SubmitOneShotAchievement(asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  Zombie::onTakeFatalDamage((DamageInfo *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


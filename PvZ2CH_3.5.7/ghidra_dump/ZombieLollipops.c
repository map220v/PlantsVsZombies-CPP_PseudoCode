// Class: ZombieLollipops


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLollipops::onEnterState_Waiting(ZombieState) */

void ZombieLollipops::onEnterState_Waiting(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLollipops::isTombraiserZombieAt(int, int) */

undefined8 __thiscall
ZombieLollipops::isTombraiserZombieAt(ZombieLollipops *this,int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  undefined8 uVar3;
  
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridX(*pfVar2);
  if ((iVar1 == param_1) &&
     (iVar1 = BoardTransforms::BoardSpaceToGridY(pfVar2[1]), iVar1 == param_2)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* ZombieLollipops::onEnterState_Spawning(ZombieState) */

void ZombieLollipops::onEnterState_Spawning(Zombie *param_1)

{
  ZombieTombRaiserProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieTombRaiserProps>(param_1);
  *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(pZVar1 + 0x218);
  (**(code **)(*(long *)param_1 + 0xa38))(param_1);
  return;
}


/* ZombieLollipops::onPlaceOnBoard() */

void __thiscall ZombieLollipops::onPlaceOnBoard(ZombieLollipops *this)

{
  Zombie::onPlaceOnBoard((Zombie *)this);
  *(undefined4 *)(this + 0x808) = 0;
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLollipops::onThrow() */

void __thiscall ZombieLollipops::onThrow(ZombieLollipops *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xa50))(this,this + 0x80c);
  *(int *)(this + 0x800) = *(int *)(this + 0x800) + -1;
  std::string::string(asStack_10,"Play_TombRaiser_Throw");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLollipops::isPendingGraveAt(int, int) */

undefined8 __thiscall
ZombieLollipops::isPendingGraveAt(ZombieLollipops *this,int param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x818);
  uVar1 = FUN_04a724e4(uVar5,*(undefined8 *)(this + 0x820));
  uVar3 = 0;
  do {
    uVar4 = (ulong)((int)uVar3 + 1);
    if (uVar1 <= uVar3) {
      return 0;
    }
    lVar2 = FUN_04a72520(uVar5,uVar3);
    uVar3 = uVar4;
  } while ((*(int *)(lVar2 + 0x14) != param_1) || (*(int *)(lVar2 + 0x18) != param_2));
  return 1;
}


/* ZombieLollipops::ZombieLollipops() */

void __thiscall ZombieLollipops::ZombieLollipops(ZombieLollipops *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06939fa0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLollipops_0693aa10;
  Sexy::Point::Point((Point *)(this + 0x80c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x818));
  return;
}


/* ZombieLollipops::StaticNew() */

ZombieLollipops * ZombieLollipops::StaticNew(void)

{
  ZombieLollipops *this;
  
  this = ::operator_new(0x830);
  ZombieLollipops(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLollipops::updateState_Waiting() */

void __thiscall ZombieLollipops::updateState_Waiting(ZombieLollipops *this)

{
  char cVar1;
  ZombieTombRaiserProps *pZVar2;
  float fVar3;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar2 = Zombie::GetProps<ZombieTombRaiserProps>((Zombie *)this);
  fVar4 = *(float *)(pZVar2 + 0x210);
  Sexy::Point::Point(aPStack_10);
  if (fVar4 < fVar3) {
    cVar1 = (**(code **)(*(long *)this + 0xa58))(this,aPStack_10);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,1);
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


/* ZombieLollipops::onSpawnAnimDone() */

void __thiscall ZombieLollipops::onSpawnAnimDone(ZombieLollipops *this)

{
  int iVar1;
  char cVar2;
  ZombieTombRaiserProps *pZVar3;
  code *pcVar4;
  float fVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(this + 0x804);
  *(int *)(this + 0x804) = iVar1 + -1;
  if (0 < iVar1 + -1) {
    (**(code **)(*(long *)this + 0xa38))();
    return;
  }
  if (*(int *)(this + 0x800) < 1) {
    uVar6 = PVZ_EOT();
    *(undefined4 *)(this + 0x808) = uVar6;
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
  }
  else {
    fVar5 = (float)PVZ_T();
    pZVar3 = Zombie::GetProps<ZombieTombRaiserProps>((Zombie *)this);
    pcVar4 = *(code **)(*(long *)this + 0x328);
    *(float *)(this + 0x808) = fVar5 + *(float *)(pZVar3 + 0x214);
    cVar2 = (*pcVar4)(this);
  }
  if (cVar2 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLollipops::throwLollipop(Sexy::Point const&) */

void __thiscall ZombieLollipops::throwLollipop(ZombieLollipops *this,Point *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PopAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar5;
  ZombieTombRaiserProps *pZVar6;
  Projectile *this_01;
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
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_04a72138(*(undefined8 *)(lVar4 + 0x20));
  uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0x50) + 0xc);
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_04a72138(*(undefined8 *)(lVar4 + 0x20));
  lVar7 = *(long *)(lVar4 + 0x50);
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_04a72138(*(undefined8 *)(lVar4 + 0x20));
  *(float *)(lVar7 + 0xc) = (float)((int)*(float *)(*(long *)(lVar4 + 0x50) + 0xc) + -1);
  Sexy::Insets::Insets((Insets *)&local_18);
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_28,"Lollipop");
  PopAnimRig::CalcSymbolRect(this_00,asStack_28,(TRect *)&local_18);
  std::string::~string(asStack_28);
  nop();
  lVar4 = Zombie::GetAnimRig((Zombie *)this);
  lVar4 = FUN_04a72138(*(undefined8 *)(lVar4 + 0x20));
  *(undefined4 *)(*(long *)(lVar4 + 0x50) + 0xc) = uVar1;
  fVar12 = *(float *)(this + 0x1c);
  fVar9 = (float)FUN_04a725b0(*(undefined4 *)(this + 0x18),fVar12,*(undefined4 *)(this + 0x20));
  iVar2 = FUN_04a726e4(local_18 + local_10 / 2);
  pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
  fVar10 = *(float *)(lVar4 + 0xc4);
  iVar3 = FUN_04a726e4(local_14 + local_c / 2);
  pRVar5 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar5);
  fVar11 = *(float *)(lVar4 + 200);
  uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
  pZVar6 = Zombie::GetProps<ZombieTombRaiserProps>((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)(pZVar6 + 0x220));
  this_01 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(float)(int)((fVar9 - fVar10) + (float)iVar2),(float)(int)fVar12,
                       (float)-(int)((float)iVar3 - fVar11),uVar8,asStack_28,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  ToxicWaterPerfumeBottleProjectile::SetTargetPoint
            ((ToxicWaterPerfumeBottleProjectile *)this_01,param_1);
  BoardTransforms::GridToBoardSpace(param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)local_30,(float)local_2c,0.0);
  Projectile::LaunchAt(this_01,(SexyVector3 *)asStack_28,250.0,1.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLollipops::startSpawnAnim() */

void __thiscall ZombieLollipops::startSpawnAnim(ZombieLollipops *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
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
  (**(code **)(*(long *)this + 0xa58))(this,this + 0x80c);
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


/* ZombieLollipops::~ZombieLollipops() */

void __thiscall ZombieLollipops::~ZombieLollipops(ZombieLollipops *this)

{
  *(undefined ***)this = &PTR_GetClass_06939fa0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLollipops_0693aa10;
  std::vector<SpellBolt,std::allocator<SpellBolt>>::~vector
            ((vector<SpellBolt,std::allocator<SpellBolt>> *)(this + 0x818));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieLollipops::~ZombieLollipops() */

void __thiscall ZombieLollipops::~ZombieLollipops(ZombieLollipops *this)

{
  ~ZombieLollipops(this + -0x10);
  return;
}


/* ZombieLollipops::~ZombieLollipops() */

void __thiscall ZombieLollipops::~ZombieLollipops(ZombieLollipops *this)

{
  ~ZombieLollipops(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieLollipops::~ZombieLollipops() */

void __thiscall ZombieLollipops::~ZombieLollipops(ZombieLollipops *this)

{
  ~ZombieLollipops(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLollipops::findTargetPosition(Sexy::Point&) */

void __thiscall ZombieLollipops::findTargetPosition(ZombieLollipops *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ZombieTombRaiserProps *pZVar10;
  ulong uVar11;
  TPoint *pTVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  Board *this_00;
  int local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  local_28 = BoardTransforms::BoardSpaceToGridX(*pfVar5);
  local_28 = local_28 + -2;
  local_20 = 2;
  piVar6 = eastl::max_alt<int>(&local_28,(int *)&local_20);
  local_28 = *piVar6 + 2;
  local_20 = 9;
  iVar14 = *piVar6 + -1;
  piVar6 = eastl::min_alt<int>(&local_28,(int *)&local_20);
  iVar4 = *piVar6;
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  do {
    if (iVar4 <= iVar14) {
      iVar14 = 0;
      lVar7 = FUN_04a724d0(CONCAT44(uStack_1c,local_20),local_18);
      if (lVar7 != 0) {
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_20);
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
                  (uVar8,uVar9);
        iVar4 = *(int *)(this + 0x800);
        pZVar10 = Zombie::GetProps<ZombieTombRaiserProps>((Zombie *)this);
        if (iVar4 == *(int *)(pZVar10 + 0x30)) {
          iVar4 = SharkMinion::getRow((SharkMinion *)this);
          cVar3 = Board::CanAddGraveStoneAt(this_00,7,iVar4,false);
          if ((cVar3 == '\0') || (cVar3 = isPendingGraveAt(this,7,iVar4), cVar3 != '\0')) {
            iVar14 = 0;
          }
          else {
            iVar14 = 1;
            Sexy::Point::Point((Point *)&local_28,7,iVar4);
            *(ulong *)param_1 = CONCAT44(iStack_24,local_28);
          }
        }
        uVar15 = 0;
        while( true ) {
          uVar8 = CONCAT44(uStack_1c,local_20);
          uVar11 = FUN_04a724d0(uVar8,local_18);
          if ((uVar11 <= uVar15) || (iVar14 != 0)) break;
          pTVar12 = (TPoint *)FUN_04a724dc(uVar8,uVar15);
          Sexy::Point::Point((Point *)&local_28,pTVar12);
          cVar3 = Board::CanAddGraveStoneAt(this_00,local_28,iStack_24,false);
          if ((cVar3 == '\0') || (cVar3 = isPendingGraveAt(this,local_28,iStack_24), cVar3 != '\0'))
          {
            iVar14 = 0;
            uVar15 = uVar15 + 1;
          }
          else {
            iVar14 = 1;
            *(ulong *)param_1 = CONCAT44(iStack_24,local_28);
            uVar15 = uVar15 + 1;
          }
        }
      }
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar14);
    }
    iVar13 = 0;
    if (0 < iVar2) {
      do {
        while (((cVar3 = Board::CanAddGraveStoneAt(this_00,iVar14,iVar13,false), cVar3 != '\0' &&
                (cVar3 = isPendingGraveAt(this,iVar14,iVar13), cVar3 == '\0')) &&
               (cVar3 = isTombraiserZombieAt(this,iVar14,iVar13), cVar3 == '\0'))) {
          Sexy::Point::Point((Point *)&local_28);
          iVar1 = iVar13 + 1;
          local_28 = iVar14;
          iStack_24 = iVar13;
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_28
                    );
          iVar13 = iVar1;
          if (iVar1 == iVar2) goto LAB_04a73458;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != iVar2);
    }
LAB_04a73458:
    iVar14 = iVar14 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLollipops::StaticClassInit() */

void ZombieLollipops::StaticClassInit(void)

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
      (*pcVar5)(plVar2,asStack_150,FUN_04a72154,0x1c,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"ZombieLollipops");
    (*pcVar5)(plVar2,asStack_150,FUN_04a73b94,0x830,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<ZombieState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLollipops,void(ZombieLollipops::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieLollipops,void(ZombieLollipops::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLollipops,void(ZombieLollipops::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_LP_Waiting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a73834(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLollipops,void(ZombieLollipops::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieLollipops,void(ZombieLollipops::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLollipops,void(ZombieLollipops::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_LP_Spawning");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04a73834(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieLollipops::StaticGetClass() */

long * ZombieLollipops::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLollipops",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLollipops::GetClass() const */

long * ZombieLollipops::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLollipops",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLollipops::onZombieInitialize() */

void __thiscall ZombieLollipops::onZombieInitialize(ZombieLollipops *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  *(undefined4 *)(this + 0x800) = *(undefined4 *)(lVar1 + 0x30);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLollipops::updateState_Walk() */

void __thiscall ZombieLollipops::updateState_Walk(ZombieLollipops *this)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardTransforms::GridToBoardSpaceX(8);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((*pfVar3 <= (float)iVar2) && (cVar1 = RealObject::IsOnTeam(this,2), cVar1 != '\0')) {
    Sexy::Point::Point(aPStack_10);
    fVar4 = (float)PVZ_T();
    if ((*(float *)(this + 0x808) < fVar4) &&
       (cVar1 = (**(code **)(*(long *)this + 0xa58))(this,aPStack_10), cVar1 != '\0')) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      goto LAB_04a745a4;
    }
  }
  Zombie::updateState_Walk((Zombie *)this);
LAB_04a745a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


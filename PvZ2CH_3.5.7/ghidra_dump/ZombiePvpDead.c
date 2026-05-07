// Class: ZombiePvpDead


/* ZombiePvpDead::updateState_Walk() */

void __thiscall ZombiePvpDead::updateState_Walk(ZombiePvpDead *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 == '\0') {
    ZombieTombRaiser::updateState_Walk((ZombieTombRaiser *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* ZombiePvpDead::onSpawnAnimDone() */

void __thiscall ZombiePvpDead::onSpawnAnimDone(ZombiePvpDead *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 == '\0') {
    ZombieTombRaiser::onSpawnAnimDone((ZombieTombRaiser *)this);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpDead::onThrow() */

void __thiscall ZombiePvpDead::onThrow(ZombiePvpDead *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar2 = FUN_046d78dc(*(undefined8 *)(this + 0x830),*(undefined8 *)(this + 0x838));
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0xa50))(this,this + 0x80c);
    *(int *)(this + 0x800) = *(int *)(this + 0x800) + -1;
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x830);
    uStack_18 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
    uStack_10 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10),
          bVar1) {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18);
      (**(code **)(*(long *)this + 0xa50))(this,uVar3);
      *(int *)(this + 0x800) = *(int *)(this + 0x800) + -1;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_18);
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00);
  }
  std::string::string((string *)&uStack_10,"Play_TombRaiser_Throw");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)&uStack_10,0.0);
  std::string::~string((string *)&uStack_10);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpDead::StaticClassInit() */

void ZombiePvpDead::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePvpDead");
    (*pcVar2)(plVar1,asStack_10,FUN_0499b6e8,0x868,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePvpDead::StaticGetClass() */

long * ZombiePvpDead::StaticGetClass(void)

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
  uVar2 = ZombieTombRaiser::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePvpDead",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpDead::GetClass() const */

long * ZombiePvpDead::GetClass(void)

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
  uVar2 = ZombieTombRaiser::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePvpDead",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpDead::onUpdate() */

void __thiscall ZombiePvpDead::onUpdate(ZombiePvpDead *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  Zombie::onUpdate((Zombie *)this);
  cVar1 = (**(code **)(*(long *)this + 0x4c0))(this);
  if (cVar1 != '\0') {
    fVar2 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0x848);
    *(float *)(this + 0x848) = fVar3 - fVar2;
    if (fVar3 - fVar2 <= 0.0) {
      (**(code **)(*(long *)this + 0x4b8))(this);
    }
  }
  return;
}


/* ZombiePvpDead::CancelZombieFood() */

void __thiscall ZombiePvpDead::CancelZombieFood(ZombiePvpDead *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 == '\0') {
    return;
  }
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  (**(code **)(*(long *)pZVar2 + 0x88))();
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x850));
  Zombie::CancelZombieFood((Zombie *)this);
  return;
}


/* ZombiePvpDead::ZombiePvpDead() */

void __thiscall ZombiePvpDead::ZombiePvpDead(ZombiePvpDead *this)

{
  ZombieTombRaiser::ZombieTombRaiser((ZombieTombRaiser *)this);
  *(undefined ***)this = &PTR_GetClass_0691e240;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePvpDead_0691ecb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x850));
  return;
}


/* ZombiePvpDead::StaticNew() */

ZombiePvpDead * ZombiePvpDead::StaticNew(void)

{
  ZombiePvpDead *this;
  
  this = ::operator_new(0x868);
  ZombiePvpDead(this);
  return this;
}


/* ZombiePvpDead::onZombieInitialize() */

void __thiscall ZombiePvpDead::onZombieInitialize(ZombiePvpDead *this)

{
  ZombiePvpDeadProps *pZVar1;
  
  ZombieTombRaiser::onZombieInitialize((ZombieTombRaiser *)this);
  pZVar1 = Zombie::GetProps<ZombiePvpDeadProps>((Zombie *)this);
  *(undefined4 *)(this + 0x848) = *(undefined4 *)(pZVar1 + 0x230);
  return;
}


/* ZombiePvpDead::ApplyZombieFood() */

void __thiscall ZombiePvpDead::ApplyZombieFood(ZombiePvpDead *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  ZombiePvpDeadProps *pZVar3;
  code *pcVar4;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 != '\0') {
    return;
  }
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  pcVar4 = *(code **)(*(long *)pZVar2 + 0x80);
  pZVar3 = Zombie::GetProps<ZombiePvpDeadProps>((Zombie *)this);
  (*pcVar4)(*(undefined4 *)(pZVar3 + 0x234),pZVar2);
  pZVar3 = Zombie::GetProps<ZombiePvpDeadProps>((Zombie *)this);
  *(undefined4 *)(this + 0x848) = *(undefined4 *)(pZVar3 + 0x230);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x850));
  Zombie::ApplyZombieFood((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpDead::throwBone(Sexy::Point const&) */

void __thiscall ZombiePvpDead::throwBone(ZombiePvpDead *this,Point *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  PopAnimRig *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  ZombieTombRaiserProps *pZVar7;
  TombraiserProjectile *this_01;
  ZombiePvpDeadProps *pZVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  lVar5 = Zombie::GetAnimRig((Zombie *)this);
  lVar5 = FUN_0499b12c(*(undefined8 *)(lVar5 + 0x20));
  uVar1 = *(undefined4 *)(*(long *)(lVar5 + 0x50) + 0xc);
  lVar5 = Zombie::GetAnimRig((Zombie *)this);
  lVar5 = FUN_0499b12c(*(undefined8 *)(lVar5 + 0x20));
  lVar9 = *(long *)(lVar5 + 0x50);
  lVar5 = Zombie::GetAnimRig((Zombie *)this);
  lVar5 = FUN_0499b12c(*(undefined8 *)(lVar5 + 0x20));
  *(float *)(lVar9 + 0xc) = (float)((int)*(float *)(*(long *)(lVar5 + 0x50) + 0xc) + -1);
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  std::string::string(asStack_28,"zombie_egypt_tr_bone");
  PopAnimRig::CalcSymbolRect(this_00,asStack_28,(TRect *)&local_18);
  std::string::~string(asStack_28);
  nop();
  lVar5 = Zombie::GetAnimRig((Zombie *)this);
  lVar5 = FUN_0499b12c(*(undefined8 *)(lVar5 + 0x20));
  *(undefined4 *)(*(long *)(lVar5 + 0x50) + 0xc) = uVar1;
  fVar14 = *(float *)(this + 0x1c);
  fVar11 = (float)FUN_0499b160(*(undefined4 *)(this + 0x18),fVar14,*(undefined4 *)(this + 0x20));
  iVar3 = FUN_0499b1bc(local_18 + local_10 / 2);
  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
  fVar12 = *(float *)(lVar5 + 0xc4);
  iVar4 = FUN_0499b1bc(local_14 + local_c / 2);
  pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
  fVar13 = *(float *)(lVar5 + 200);
  uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
  pZVar7 = Zombie::GetProps<ZombieTombRaiserProps>((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)(pZVar7 + 0x220));
  this_01 = (TombraiserProjectile *)
            Board::AddProjectile
                      ((Board *)(float)(int)((fVar11 - fVar12) + (float)iVar3),(float)(int)fVar14,
                       (float)-(int)((float)iVar4 - fVar13),uVar10,asStack_28,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
  TombraiserProjectile::SetGridTarget(this_01,param_1);
  pZVar8 = Zombie::GetProps<ZombiePvpDeadProps>((Zombie *)this);
  FUN_0499b140(*(undefined4 *)(pZVar8 + 0x22c),this_01 + 0x1b4);
  BoardTransforms::GridToBoardSpace(param_1);
  cVar2 = (**(code **)(*(long *)this + 0x4c0))(this);
  if (cVar2 == '\0') {
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)local_30,(float)local_2c,0.0);
    Projectile::LaunchAt((Projectile *)this_01,(SexyVector3 *)asStack_28,250.0,1.5);
  }
  else {
    FUN_0499b134(this_01 + 0x1b0);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)local_30,(float)local_2c,0.0);
    Projectile::LaunchAt((Projectile *)this_01,(SexyVector3 *)asStack_28,250.0,0.75);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpDead::TriggerPlaybackParams(int) */

void __thiscall ZombiePvpDead::TriggerPlaybackParams(ZombiePvpDead *this,int param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_c8 [8];
  RtId aRStack_c0 [8];
  string asStack_b8 [8];
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  undefined8 local_a0;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::TriggerPlaybackParams((Zombie *)this,param_1);
  if (param_1 == 3) {
    PlaybackController::GetParamPoint((char)this + '@');
    *(undefined8 *)(this + 0x80c) = local_a0;
    std::string::string((string *)&local_a0,"Play_TombRaiser_Puke");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_a0,0.0);
    std::string::~string((string *)&local_a0);
    nop();
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    pcVar2 = *(code **)(*(long *)pZVar1 + 0x268);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
    std::string::string(asStack_b8,"onSpawnAnimDone");
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_98,aRStack_c0,asStack_b8);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
    std::string::string((string *)&local_a0,"onThrow");
    RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_50,aRStack_a8,(string *)&local_a0);
    (*pcVar2)(pZVar1,aRStack_98,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_a0);
    nop();
    Sexy::RtId::~RtId(aRStack_a8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_98);
    std::string::~string(asStack_b8);
    nop();
    Sexy::RtId::~RtId(aRStack_c0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePvpDead::~ZombiePvpDead() */

void __thiscall ZombiePvpDead::~ZombiePvpDead(ZombiePvpDead *this)

{
  *(undefined ***)this = &PTR_GetClass_0691e240;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePvpDead_0691ecb0;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x850));
  ZombieTombRaiser::~ZombieTombRaiser((ZombieTombRaiser *)this);
  return;
}


/* non-virtual thunk to ZombiePvpDead::~ZombiePvpDead() */

void __thiscall ZombiePvpDead::~ZombiePvpDead(ZombiePvpDead *this)

{
  ~ZombiePvpDead(this + -0x10);
  return;
}


/* ZombiePvpDead::~ZombiePvpDead() */

void __thiscall ZombiePvpDead::~ZombiePvpDead(ZombiePvpDead *this)

{
  ~ZombiePvpDead(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePvpDead::~ZombiePvpDead() */

void __thiscall ZombiePvpDead::~ZombiePvpDead(ZombiePvpDead *this)

{
  ~ZombiePvpDead(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpDead::findTargetPosition(Sexy::Point&) */

void __thiscall ZombiePvpDead::findTargetPosition(ZombiePvpDead *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  TPoint *pTVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  Board *this_00;
  int local_28;
  int iStack_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar12 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < iVar2) {
    do {
      iVar11 = 0;
      if (0 < iVar3) {
        do {
          while (((cVar4 = Board::CanAddGraveStoneAt(this_00,iVar12,iVar11,false), cVar4 == '\0' ||
                  (cVar4 = ZombieTombRaiser::isPendingGraveAt
                                     ((ZombieTombRaiser *)this,iVar12,iVar11), cVar4 != '\0')) ||
                 (cVar4 = ZombieLollipops::isTombraiserZombieAt
                                    ((ZombieLollipops *)this,iVar12,iVar11), cVar4 != '\0'))) {
            iVar11 = iVar11 + 1;
            if (iVar11 == iVar3) goto LAB_0499c380;
          }
          Sexy::Point::Point((Point *)&local_28);
          iVar1 = iVar11 + 1;
          local_28 = iVar12;
          iStack_24 = iVar11;
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_28
                    );
          iVar11 = iVar1;
        } while (iVar1 != iVar3);
      }
LAB_0499c380:
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar2);
  }
  iVar12 = 0;
  lVar5 = FUN_0499b14c(local_20,local_18);
  if (lVar5 != 0) {
    uVar13 = 0;
    iVar12 = 0;
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
              (uVar6,uVar7);
    uVar6 = local_20;
    puVar8 = (undefined8 *)FUN_0499b158(local_20,0);
    *(undefined8 *)param_1 = *puVar8;
    while ((uVar9 = FUN_0499b14c(uVar6,local_18), uVar13 < uVar9 && (iVar12 == 0))) {
      pTVar10 = (TPoint *)FUN_0499b158(uVar6,uVar13);
      Sexy::Point::Point((Point *)&local_28,pTVar10);
      cVar4 = Board::CanAddGraveStoneAt(this_00,local_28,iStack_24,false);
      if ((cVar4 == '\0') ||
         (cVar4 = ZombieTombRaiser::isPendingGraveAt((ZombieTombRaiser *)this,local_28,iStack_24),
         cVar4 != '\0')) {
        iVar12 = 0;
      }
      else {
        iVar12 = 1;
        *(ulong *)param_1 = CONCAT44(iStack_24,local_28);
      }
      uVar13 = uVar13 + 1;
      uVar6 = local_20;
    }
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar12);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpDead::findGraveTargetPosition(Sexy::Point&) */

void __thiscall ZombiePvpDead::findGraveTargetPosition(ZombiePvpDead *this,Point *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar9 = 0;
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  if (0 < iVar1) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x850);
    do {
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          while (lVar4 = Board::GetGridItemGravestone(*(Board **)(gLawnApp + 0x9f0),iVar9,iVar8),
                lVar4 == 0) {
LAB_0499c538:
            iVar8 = iVar8 + 1;
            if (iVar8 == iVar2) goto LAB_0499c5d0;
          }
          Sexy::Point::Point((Point *)&local_38);
          local_38 = iVar9;
          local_34 = iVar8;
          uVar5 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          local_30 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                               (uVar5,uVar6,(Point *)&local_38);
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
          if (bVar3) goto LAB_0499c538;
          iVar8 = iVar8 + 1;
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_38
                    );
        } while (iVar8 != iVar2);
      }
LAB_0499c5d0:
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar1);
  }
  lVar4 = FUN_0499b14c(local_20,local_18);
  if (lVar4 != 0) {
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
              (uVar5,uVar6);
    puVar7 = (undefined8 *)FUN_0499b158(local_20,0);
    *(undefined8 *)param_1 = *puVar7;
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4 != 0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpDead::updateState_Waiting() */

void __thiscall ZombiePvpDead::updateState_Waiting(ZombiePvpDead *this)

{
  char cVar1;
  ZombiePvpDeadProps *pZVar2;
  float fVar3;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 == '\0') {
    ZombieTombRaiser::updateState_Waiting((ZombieTombRaiser *)this);
  }
  else {
    fVar3 = (float)Zombie::getTimeInState((Zombie *)this);
    pZVar2 = Zombie::GetProps<ZombiePvpDeadProps>((Zombie *)this);
    fVar4 = *(float *)(pZVar2 + 0x228);
    Sexy::Point::Point(aPStack_10);
    if ((fVar4 < fVar3) &&
       ((cVar1 = findGraveTargetPosition(this,aPStack_10), cVar1 != '\0' ||
        (cVar1 = (**(code **)(*(long *)this + 0xa58))(this,aPStack_10), cVar1 != '\0')))) {
      Zombie::setZombieState((Zombie *)this,0x20,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpDead::startSpawnAnim() */

void __thiscall ZombiePvpDead::startSpawnAnim(ZombiePvpDead *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  long lVar3;
  code *pcVar4;
  RtMixedPtr aRStack_c8 [8];
  RtId aRStack_c0 [8];
  string asStack_b8 [8];
  RtMixedPtr aRStack_b0 [8];
  RtId aRStack_a8 [8];
  string asStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0499b130(this[0x174]);
  if (cVar1 != '\0') goto LAB_0499c7a4;
  cVar1 = (**(code **)(*(long *)this + 0x4c0))(this);
  if (cVar1 == '\0') {
    lVar3 = *(long *)this;
LAB_0499c7f4:
    cVar1 = (**(code **)(lVar3 + 0xa58))(this,this + 0x80c);
    if (cVar1 == '\0') goto LAB_0499c7a4;
  }
  else {
    cVar1 = findGraveTargetPosition(this,(Point *)(this + 0x80c));
    if (cVar1 == '\0') {
      lVar3 = *(long *)this;
      goto LAB_0499c7f4;
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x850),
               (Point *)(this + 0x80c));
  }
  std::string::string(asStack_a0,"Play_TombRaiser_Puke");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_a0,0.0);
  std::string::~string(asStack_a0);
  nop();
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  pcVar4 = *(code **)(*(long *)pZVar2 + 0x268);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c8);
  std::string::string(asStack_b8,"onSpawnAnimDone");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_98,aRStack_c0,asStack_b8);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_b0);
  std::string::string(asStack_a0,"onThrow");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50,aRStack_a8,asStack_a0);
  (*pcVar4)(pZVar2,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
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
  PlaybackController::SetParam((PlaybackController *)(this + 0x140),'\x01',(Point *)(this + 0x80c));
  MessageRouter::Post<Zombie*,int,ZombiePvpDead*,PlaybackAddParamsType>
            ((MessageRouter *)gMessageRouter,Message::ZombiePlaybackAddParams,this,3);
LAB_0499c7a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


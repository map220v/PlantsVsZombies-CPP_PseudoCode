// Class: FishHookGrassProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookGrassProjectile::getAttachmentPosition(Zombie*) */

void __thiscall
FishHookGrassProjectile::getAttachmentPosition(FishHookGrassProjectile *this,Zombie *param_1)

{
  Insets *pIVar1;
  float *pfVar2;
  float local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  Insets aIStack_18 [8];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_38);
  pIVar1 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets(aIStack_18,pIVar1);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  local_20 = 0;
  uStack_34 = *(undefined4 *)(this + 0x1c8);
  local_38 = *pfVar2 + (float)local_10 * 0.5;
  local_30 = 0;
  local_28 = CONCAT44(uStack_34,local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,0);
}


/* FishHookGrassProjectile::~FishHookGrassProjectile() */

void __thiscall FishHookGrassProjectile::~FishHookGrassProjectile(FishHookGrassProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067b6f90;
  *(undefined ***)(this + 0x10) = &PTR__FishHookGrassProjectile_067b7180;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1e0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to FishHookGrassProjectile::~FishHookGrassProjectile() */

void __thiscall FishHookGrassProjectile::~FishHookGrassProjectile(FishHookGrassProjectile *this)

{
  ~FishHookGrassProjectile(this + -0x10);
  return;
}


/* FishHookGrassProjectile::~FishHookGrassProjectile() */

void __thiscall FishHookGrassProjectile::~FishHookGrassProjectile(FishHookGrassProjectile *this)

{
  ~FishHookGrassProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FishHookGrassProjectile::~FishHookGrassProjectile() */

void __thiscall FishHookGrassProjectile::~FishHookGrassProjectile(FishHookGrassProjectile *this)

{
  ~FishHookGrassProjectile(this + -0x10);
  return;
}


/* FishHookGrassProjectile::FishHookGrassProjectile() */

void __thiscall FishHookGrassProjectile::FishHookGrassProjectile(FishHookGrassProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (FishHookGrassProjectile)0x0;
  this[0x1a6] = (FishHookGrassProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067b6f90;
  *(undefined ***)(this + 0x10) = &PTR__FishHookGrassProjectile_067b7180;
  this[0x1a7] = (FishHookGrassProjectile)0x0;
  this[0x1a8] = (FishHookGrassProjectile)0x0;
  this[0x1a9] = (FishHookGrassProjectile)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  DVec3::DVec3((DVec3 *)(this + 0x1c4));
  DVec3::DVec3((DVec3 *)(this + 0x1d0));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1e0));
  return;
}


/* FishHookGrassProjectile::StaticNew() */

FishHookGrassProjectile * FishHookGrassProjectile::StaticNew(void)

{
  FishHookGrassProjectile *this;
  
  this = ::operator_new(0x200);
  FishHookGrassProjectile(this);
  return this;
}


/* FishHookGrassProjectile::GetHookedZombie() */

void __thiscall FishHookGrassProjectile::GetHookedZombie(FishHookGrassProjectile *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1b0));
  return;
}


/* FishHookGrassProjectile::CastHook(float, std::function<void ()>) */

void FishHookGrassProjectile::CastHook(long param_1,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(param_1 + 0x1e0),param_2);
  *(undefined4 *)(param_1 + 0x1b8) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookGrassProjectile::ReelHook(float, float, Sexy::SexyVector2, std::function<void ()>) */

void FishHookGrassProjectile::ReelHook
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_5,function *param_6)

{
  char cVar1;
  int iVar2;
  SexyVector3 *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void()>::operator=((function<void()> *)(param_5 + 0x1e0),param_6);
  *(undefined4 *)(param_5 + 0x1b8) = 2;
  fVar4 = (float)PVZ_T();
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_5 + 0x1b0));
  fVar6 = 0.5;
  if (cVar1 == '\0') {
    fVar6 = 0.0;
  }
  *(float *)(param_5 + 0x1bc) = fVar6 + fVar4;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_5 + 0x1b0));
  fVar5 = 1.0;
  if (cVar1 == '\0') {
    fVar5 = 2.0;
  }
  *(float *)(param_5 + 0x1c0) = fVar6 + fVar4 + param_2 * fVar5;
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_5);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_5 + 0x1c4),pSVar3);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3(aVStack_18,param_3 - (float)iVar2 * 2.5,param_4,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_5 + 0x1d0),(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookGrassProjectile::onUpdate(float) */

void FishHookGrassProjectile::onUpdate(float param_1)

{
  RtMixedPtrBase *this;
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  SexyVector3 *pSVar6;
  long *plVar7;
  ResourceInfo *pRVar8;
  Zombie *this_00;
  code *pcVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 in_s1;
  undefined4 uVar12;
  undefined4 in_s2;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::CalcSweptCollisionRectBoardSpace();
  pSVar6 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  iVar1 = local_18;
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  if (iVar4 * iVar5 + 200 < iVar1) {
LAB_0401fa8c:
    if (in_x0[0x1a6] ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0) {
      bVar3 = std::function::operator_cast_to_bool((function *)(in_x0 + 0x1e0));
      if ((bVar3) &&
         (in_x0[0x1a7] ==
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           )0x0)) {
        in_x0[0x1a6] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        )0x1;
        in_x0[0x1a7] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        )0x1;
        std::function<void()>::operator()((function<void()> *)(in_x0 + 0x1e0));
      }
    }
  }
  else {
    in_s1 = 0x43200000;
    if (((*(float *)(pSVar6 + 4) < 160.0) || (in_s1 = 0x443e0000, 760.0 < *(float *)(pSVar6 + 4)))
       || (local_18 < 200)) goto LAB_0401fa8c;
  }
  iVar1 = *(int *)(in_x0 + 0x1b8);
  if (iVar1 == 0) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x1b0));
    if (cVar2 == '\0') {
      iVar1 = *(int *)(in_x0 + 0x1b8);
    }
    else {
      pcVar9 = *(code **)(*(long *)in_x0 + 0x78);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x1b0));
      local_28 = getAttachmentPosition((FishHookGrassProjectile *)in_x0,(Zombie *)pRVar8);
      local_24 = in_s1;
      local_20 = in_s2;
      (*pcVar9)();
      iVar1 = *(int *)(in_x0 + 0x1b8);
    }
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      uVar15 = *(undefined4 *)(in_x0 + 0x1bc);
      uVar12 = *(undefined4 *)(in_x0 + 0x1c0);
      local_20 = PVZ_T();
      local_28 = CurveLerp<Sexy::SexyVector3>(uVar15,in_x0 + 0x1c4,in_x0 + 0x1d0,3);
      local_24 = uVar12;
      (**(code **)(*(long *)in_x0 + 0x78))();
      fVar11 = (float)PVZ_T();
      if (*(float *)(in_x0 + 0x1c0) < fVar11) {
        bVar3 = std::function::operator_cast_to_bool((function *)(in_x0 + 0x1e0));
        if (bVar3) {
          std::function<void()>::operator()((function<void()> *)(in_x0 + 0x1e0));
        }
      }
    }
    goto LAB_0401fa60;
  }
  fVar13 = *(float *)(in_x0 + 0x1bc);
  fVar11 = (float)PVZ_T();
  if (fVar11 <= fVar13) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(in_x0 + 0x1b0));
    if (cVar2 != '\0') {
      pcVar9 = *(code **)(*(long *)in_x0 + 0x78);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(in_x0 + 0x1b0));
      local_28 = getAttachmentPosition((FishHookGrassProjectile *)in_x0,(Zombie *)pRVar8);
      local_24 = in_s1;
      local_20 = in_s2;
      (*pcVar9)();
      Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x1c4),pSVar6);
    }
  }
  else {
    uVar14 = *(undefined4 *)(in_x0 + 0x1bc);
    this = (RtMixedPtrBase *)(in_x0 + 0x1b0);
    uVar15 = *(undefined4 *)(in_x0 + 0x1c0);
    uVar10 = PVZ_T();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    uVar12 = 3;
    if (cVar2 == '\0') {
      uVar12 = 4;
    }
    local_20 = uVar10;
    local_28 = CurveLerp<Sexy::SexyVector3>(uVar14,in_x0 + 0x1c4,in_x0 + 0x1d0,uVar12);
    local_24 = uVar15;
    (**(code **)(*(long *)in_x0 + 0x78))();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      if (in_x0[0x1a8] ==
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           )0x0) {
        this_00 = (Zombie *)GetHookedZombie((FishHookGrassProjectile *)in_x0);
        cVar2 = Zombie::IsControlled(this_00);
        if (cVar2 != '\0') {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    (a_Stack_30);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
          goto LAB_0401fba4;
        }
      }
      plVar7 = (long *)GetHookedZombie((FishHookGrassProjectile *)in_x0);
      (**(code **)(*plVar7 + 0x78))(plVar7,&local_28);
    }
  }
LAB_0401fba4:
  fVar13 = *(float *)(in_x0 + 0x1c0);
  fVar11 = (float)PVZ_T();
  if (fVar13 < fVar11) {
    *(undefined4 *)(in_x0 + 0x1b8) = 0;
    bVar3 = std::function::operator_cast_to_bool((function *)(in_x0 + 0x1e0));
    if ((bVar3) &&
       (in_x0[0x1a5] ==
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         )0x0)) {
      in_x0[0x1a5] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      )0x1;
      std::function<void()>::operator()((function<void()> *)(in_x0 + 0x1e0));
    }
  }
LAB_0401fa60:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookGrassProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
FishHookGrassProjectile::OnCollideEntity(FishHookGrassProjectile *this,BoardEntity *param_1)

{
  FishHookGrassProjectile FVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Zombie *this_00;
  char *pcVar6;
  Insets *pIVar7;
  SexyVector3 *this_01;
  ZombieSkyCityTwinsPlane *pZVar8;
  ZombieCavalry *pZVar9;
  ZombieModernSolarTruck *pZVar10;
  ZombieSkycityBattlePlane *pZVar11;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar12;
  float *pfVar13;
  code *pcVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 local_80;
  Insets aIStack_78 [8];
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    this[0x1a6] = (FishHookGrassProjectile)0x1;
    DangerRoomManager::SetMaxLevel((DangerRoomManager *)this,0);
LAB_04020ef4:
    if (*(int *)(this + 0x1b8) != 1) goto LAB_04020ea0;
    *(undefined4 *)(this + 0x1b8) = 3;
    if (param_1 != (BoardEntity *)0x0) {
      this_00 = (Zombie *)0x0;
      goto LAB_04020f10;
    }
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1c4),this_01);
  }
  else {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    this[0x1a6] = (FishHookGrassProjectile)0x1;
    DangerRoomManager::SetMaxLevel((DangerRoomManager *)this,0);
    if (this_00 == (Zombie *)0x0) goto LAB_04020ef4;
    cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
    if ((((cVar2 == '\0') && (iVar4 = Zombie::GetSizeType(this_00), iVar4 != 2)) &&
        ((cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0' ||
         ((cVar2 = Zombie::IsFlying(this_00), cVar2 != '\0' && (*(float *)(this_00 + 0x7f0) != 0.0))
         )))) && ((cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0' &&
                  ((((((cVar2 = Zombie::IsBoss(this_00), cVar2 == '\0' &&
                       (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0')) &&
                      (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')) &&
                     ((cVar2 = Zombie::IsIgnoringAllDamage(this_00), cVar2 == '\0' &&
                      (cVar2 = Zombie::CanBeLaunchedByPlants(this_00), cVar2 != '\0')))) &&
                    ((pZVar8 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>((RtObject *)this_00),
                     pZVar8 == (ZombieSkyCityTwinsPlane *)0x0 &&
                     ((pZVar9 = Sexy::RtObject::Cast<ZombieCavalry>((RtObject *)this_00),
                      pZVar9 == (ZombieCavalry *)0x0 &&
                      (pZVar10 = Sexy::RtObject::Cast<ZombieModernSolarTruck>((RtObject *)this_00),
                      pZVar10 == (ZombieModernSolarTruck *)0x0)))))) &&
                   (pZVar11 = Sexy::RtObject::Cast<ZombieSkycityBattlePlane>((RtObject *)this_00),
                   pZVar11 == (ZombieSkycityBattlePlane *)0x0)))))) {
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      bVar3 = std::operator!=((string *)(lVar12 + 8),"mech_cone");
      if (bVar3) {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
        bVar3 = std::operator!=((string *)(lVar12 + 8),"football_mech");
        if (bVar3) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          bVar3 = std::operator!=((string *)(lVar12 + 8),"disco_mech");
          if (bVar3) {
            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
            bVar3 = std::operator!=((string *)(lVar12 + 8),"cannon");
            if (bVar3) {
              lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
              bVar3 = std::operator!=((string *)(lVar12 + 8),"west_bull");
              if (bVar3) {
                lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                bVar3 = std::operator!=((string *)(lVar12 + 8),"dark_king");
                if (bVar3) {
                  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                  bVar3 = std::operator!=((string *)(lVar12 + 8),"piano");
                  if (bVar3) {
                    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                    bVar3 = std::operator!=((string *)(lVar12 + 8),"feastivus_piano");
                    if (bVar3) {
                      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                      bVar3 = std::operator!=((string *)(lVar12 + 8),"pirate_barrel");
                      if (bVar3) {
                        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                        bVar3 = std::operator!=((string *)(lVar12 + 8),"birthday_barrel");
                        if (bVar3) {
                          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                          bVar3 = std::operator!=((string *)(lVar12 + 8),"skycity_armor1");
                          if (bVar3) {
                            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                            bVar3 = std::operator!=((string *)(lVar12 + 8),"skycity_armor2");
                            if (bVar3) {
                              lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                              bVar3 = std::operator!=((string *)(lVar12 + 8),"skycity");
                              if (bVar3) {
                                lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                                bVar3 = std::operator!=((string *)(lVar12 + 8),"chicken");
                                if (bVar3) {
                                  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                                  bVar3 = std::operator!=((string *)(lVar12 + 8),"foodfight_turkey")
                                  ;
                                  if (bVar3) {
                                    lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                                    bVar3 = std::operator!=((string *)(lVar12 + 8),"iceage_weasel");
                                    if (bVar3) {
                                      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                                      bVar3 = std::operator!=((string *)(lVar12 + 8),"skycity_flag")
                                      ;
                                      if (bVar3) {
                                        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
                                        bVar3 = std::operator!=((string *)(lVar12 + 8),
                                                                "camel_manyhump");
                                        if (bVar3) {
                                          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02)
                                          ;
                                          bVar3 = std::operator!=((string *)(lVar12 + 8),
                                                                  "camel_onehump");
                                          if (bVar3) {
                                            lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                               (this_02);
                                            bVar3 = std::operator!=((string *)(lVar12 + 8),
                                                                    "camel_towhump");
                                            if (bVar3) {
                                              lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                 (this_02);
                                              bVar3 = std::operator!=((string *)(lVar12 + 8),
                                                                      "camel_segment");
                                              if (bVar3) {
                                                lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                   (this_02);
                                                bVar3 = std::operator!=((string *)(lVar12 + 8),
                                                                        "skycity_electric");
                                                if (bVar3) {
                                                  lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                                     (this_02);
                                                  bVar3 = std::operator!=((string *)(lVar12 + 8),
                                                                          "beach_surfer");
                                                  if (bVar3) {
                                                    if (*(int *)(this + 0x1b8) == 1) {
                                                      lVar12 = *(long *)this_00;
                                                      *(undefined4 *)(this + 0x1b8) = 0;
                                                      pIVar7 = (Insets *)
                                                               (**(code **)(lVar12 + 0x178))
                                                                         (this_00);
                                                      Sexy::Insets::Insets(aIStack_78,pIVar7);
                                                      pfVar13 = (float *)std::
                                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  ::_M_leftmost((
                                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)this);
                                                  fVar15 = *pfVar13;
                                                  *(float *)(this + 0x1c8) = pfVar13[1];
                                                  *(float *)(this + 0x1c4) =
                                                       fVar15 + (float)local_70 * 0.1;
                                                  ToolPacketData::GetProps();
                                                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::
                                                  operator=((RtWeakPtr<SpartanBambooMatrixSystem> *)
                                                            (this + 0x1b0),
                                                            (RtWeakPtrBase *)&local_68);
                                                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                                            ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                             &local_68);
                                                  Zombie::ApplyCondition
                                                            ((Zombie *)0x41200000,0,this_00,0x18,1);
                                                  (**(code **)(*(long *)this + 0x1b0))(this,param_1)
                                                  ;
                                                  if ((this[0x1a8] != (FishHookGrassProjectile)0x0)
                                                     && (this[0x1a9] != (FishHookGrassProjectile)0x0
                                                        )) {
                                                    Zombie::ApplyCondition
                                                              ((Zombie *)0x40a00000,0,this_00,0x30,1
                                                              );
                                                    DamageInfo::DamageInfo((DamageInfo *)&local_68);
                                                    (**(code **)(*(long *)this + 0x178))
                                                              (this,(RtWeakPtr<Sexy::ResourceInfo> *
                                                                    )&local_68,param_1);
                                                    iVar4 = BoardEntity::CalcColumnPosition(param_1)
                                                    ;
                                                    iVar5 = FUN_04019a64(*(undefined4 *)
                                                                          (this + 0xa8));
                                                    Sexy::Point::Point((Point *)&local_80,iVar4,
                                                                       iVar5);
                                                    local_50 = local_80;
                                                    Zombie::SetConditionTracker
                                                              (local_60 * 0.5,this_00,0x30);
                                                    DamageInfo::~DamageInfo((DamageInfo *)&local_68)
                                                    ;
                                                  }
                                                  bVar3 = std::function::operator_cast_to_bool
                                                                    ((function *)(this + 0x1e0));
                                                  if (bVar3) {
                                                    std::function<void()>::operator()
                                                              ((function<void()> *)(this + 0x1e0));
                                                  }
                                                  }
                                                  goto LAB_04020ea0;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar4 = *(int *)(this + 0x1b8);
    *(undefined4 *)(this_00 + 0x7ec) = 0;
    if (iVar4 != 1) goto LAB_04020ea0;
    *(undefined4 *)(this + 0x1b8) = 3;
LAB_04020f10:
    pIVar7 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
    Sexy::Insets::Insets(aIStack_78,pIVar7);
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    uVar16 = *(undefined4 *)(this_01 + 4);
    pcVar14 = *(code **)(*(long *)this + 0x78);
    *(undefined4 *)(this + 0x1c4) = *(undefined4 *)this_01;
    *(undefined4 *)(this + 0x1c8) = uVar16;
    *(undefined4 *)(this + 0x1cc) = 0;
    (*pcVar14)(this,this + 0x1c4);
    (**(code **)(*(long *)this + 0x1b0))(this,param_1);
    if (this_00 == (Zombie *)0x0) {
      if (this[0x1a8] != (FishHookGrassProjectile)0x0) {
        (**(code **)(*(long *)this + 0x1b0))(this,param_1);
        (**(code **)(*(long *)this + 0x1b0))(this,param_1);
      }
    }
    else {
      iVar4 = Zombie::GetSizeType(this_00);
      if ((iVar4 == 2) || (cVar2 = Zombie::IsFlying(this_00), cVar2 != '\0')) {
        (**(code **)(*(long *)this + 0x1b0))(this,param_1);
        FVar1 = this[0x1a8];
      }
      else {
        FVar1 = this[0x1a8];
      }
      if (FVar1 != (FishHookGrassProjectile)0x0) {
        (**(code **)(*(long *)this + 0x1b0))(this,param_1);
        (**(code **)(*(long *)this + 0x1b0))(this,param_1);
        if (this[0x1a9] != (FishHookGrassProjectile)0x0) {
          Zombie::ApplyCondition((Zombie *)0x40a00000,0,this_00,0x30,1);
          DamageInfo::DamageInfo((DamageInfo *)&local_68);
          (**(code **)(*(long *)this + 0x178))(this,(DamageInfo *)&local_68,param_1);
          iVar4 = BoardEntity::CalcColumnPosition(param_1);
          iVar5 = FUN_04019a64(*(undefined4 *)(this + 0xa8));
          Sexy::Point::Point((Point *)&local_80,iVar4,iVar5);
          local_50 = local_80;
          Zombie::SetConditionTracker(local_60 * 0.5,this_00,0x30);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        }
      }
    }
  }
  fVar15 = (float)PVZ_T();
  fVar17 = 0.0;
  uVar16 = 0x41f00000;
  *(float *)(this + 0x1bc) = fVar15;
  *(float *)(this + 0x1c0) = fVar15 + 0.5;
  EATextSquish::Vec3::Vec3((Vec3 *)aIStack_78,10.0,30.0,0.0);
  local_68 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aIStack_78);
  local_64 = uVar16;
  local_60 = fVar17;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1d0),(SexyVector3 *)&local_68);
LAB_04020ea0:
  pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar6,"Play_Zomb_Beach_Fisher_Hook_Impact");
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishHookGrassProjectile::StaticClassInit() */

void FishHookGrassProjectile::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"idle",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"casting",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"reeling",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"bouncing",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"HookState");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"FishHookGrassProjectile");
    (*pcVar3)(plVar2,avStack_20,FUN_04025e64,0x200,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishHookGrassProjectile::StaticGetClass() */

long * FishHookGrassProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"FishHookGrassProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FishHookGrassProjectile::GetClass() const */

long * FishHookGrassProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"FishHookGrassProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


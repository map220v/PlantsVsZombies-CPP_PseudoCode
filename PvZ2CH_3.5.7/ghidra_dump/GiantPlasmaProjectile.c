// Class: GiantPlasmaProjectile


/* GiantPlasmaProjectile::~GiantPlasmaProjectile() */

void __thiscall GiantPlasmaProjectile::~GiantPlasmaProjectile(GiantPlasmaProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067cbee0;
  *(undefined ***)(this + 0x10) = &PTR__GiantPlasmaProjectile_067cc0d0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GiantPlasmaProjectile::~GiantPlasmaProjectile() */

void __thiscall GiantPlasmaProjectile::~GiantPlasmaProjectile(GiantPlasmaProjectile *this)

{
  ~GiantPlasmaProjectile(this + -0x10);
  return;
}


/* GiantPlasmaProjectile::~GiantPlasmaProjectile() */

void __thiscall GiantPlasmaProjectile::~GiantPlasmaProjectile(GiantPlasmaProjectile *this)

{
  ~GiantPlasmaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GiantPlasmaProjectile::~GiantPlasmaProjectile() */

void __thiscall GiantPlasmaProjectile::~GiantPlasmaProjectile(GiantPlasmaProjectile *this)

{
  ~GiantPlasmaProjectile(this + -0x10);
  return;
}


/* GiantPlasmaProjectile::GiantPlasmaProjectile() */

void __thiscall GiantPlasmaProjectile::GiantPlasmaProjectile(GiantPlasmaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067cbee0;
  *(undefined ***)(this + 0x10) = &PTR__GiantPlasmaProjectile_067cc0d0;
  return;
}


/* GiantPlasmaProjectile::StaticNew() */

GiantPlasmaProjectile * GiantPlasmaProjectile::StaticNew(void)

{
  GiantPlasmaProjectile *this;
  
  this = ::operator_new(0x1a8);
  GiantPlasmaProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantPlasmaProjectile::StaticClassInit() */

void GiantPlasmaProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiantPlasmaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04086c20,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiantPlasmaProjectile::StaticGetClass() */

long * GiantPlasmaProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GiantPlasmaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantPlasmaProjectile::GetClass() const */

long * GiantPlasmaProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GiantPlasmaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantPlasmaProjectile::playHitEffect(BoardEntity*, bool) */

void __thiscall
GiantPlasmaProjectile::playHitEffect(GiantPlasmaProjectile *this,BoardEntity *param_1,bool param_2)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  undefined8 *puVar3;
  string asStack_20 [8];
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (param_2) {
    std::string::string(asStack_20,"POPANIM_EFFECTS_CITRON_PLANTFOOD_SHOCK");
    GetPAMByName(asStack_20);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    nop();
    std::string::string((string *)&local_18,"animation3");
  }
  else {
    std::string::string(asStack_20,"POPANIM_EFFECTS_CITRON_PLANTFOOD_ORB_HIT");
    GetPAMByName(asStack_20);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    nop();
    std::string::string((string *)&local_18,"animation");
  }
  Effect_PopAnim::PlaySingleAnimation(this_00,(string *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_040866cc(this_00 + 0x1c,iVar1 + 1);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this_00,false);
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_10 = *(undefined4 *)(puVar3 + 1);
  local_18 = (float)*puVar3;
  fStack_14 = (float)((ulong)*puVar3 >> 0x20);
  _local_18 = CONCAT44(fStack_14 - 135.0,local_18 - 85.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,-1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantPlasmaProjectile::hitNormalZombie(Zombie*) */

void __thiscall GiantPlasmaProjectile::hitNormalZombie(GiantPlasmaProjectile *this,Zombie *param_1)

{
  char cVar1;
  long extraout_x0;
  float *pfVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float local_40;
  float local_3c;
  FastCurve aFStack_38 [4];
  float local_34;
  FastCurve aFStack_30 [8];
  float local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar4 = (float)RandRangeFloat(*(float *)(extraout_x0 + 0x1e0),*(float *)(extraout_x0 + 0x1e4));
  fVar4 = (float)Sexy::SexyMath::DegToRad(fVar4);
  fVar7 = *(float *)(extraout_x0 + 0x1e8);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar8 = *(float *)(extraout_x0 + 0x1ec);
  Sexy::FastCurve::SetOutRange(aFStack_38,*pfVar2,pfVar2[2]);
  fVar5 = cosf(fVar4);
  fVar4 = sinf(fVar4);
  Sexy::FastCurve::SetOutRange(aFStack_30,fVar5,fVar4);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_28,850.0,0.0);
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,local_28[0],pfVar2[1],local_34);
  uVar6 = 0x3f800000;
  local_40 = 0.0;
  local_3c = 0.0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,0.0,1.0);
  cVar1 = LineLineIntersect((SexyVector2 *)aFStack_38,(SexyVector2 *)aFStack_30,
                            (SexyVector2 *)local_28,(SexyVector2 *)&local_20,&local_40,&local_3c,
                            0.0001);
  if (cVar1 != '\0') {
    local_20 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_30,local_40);
    local_1c = uVar6;
    local_18[0] = Sexy::SexyVector2::operator+((SexyVector2 *)aFStack_38,(SexyVector2 *)&local_20);
    local_10 = uVar6;
  }
  Zombie::FlickOff((SexyVector3 *)param_1,fVar7,fVar8);
  Zombie::ApplyCondition((Zombie *)0x42c80000,0,param_1,6,1);
  playHitEffect(this,(BoardEntity *)param_1,true);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_Plant_Future_Citron_PF_Impact_Flick");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantPlasmaProjectile::hitMechZombie(Zombie*) */

void __thiscall GiantPlasmaProjectile::hitMechZombie(GiantPlasmaProjectile *this,Zombie *param_1)

{
  char *pcVar1;
  undefined8 local_68 [2];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo((DamageInfo *)local_68);
  local_68[0] = Projectile::GetInstigator((Projectile *)this);
  operator|=(auStack_58,0x2000);
  (**(code **)(*(long *)param_1 + 0x120))(param_1,(DamageInfo *)local_68);
  playHitEffect(this,(BoardEntity *)param_1,false);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_Future_Citron_PF_Impact_Orb");
  DamageInfo::~DamageInfo((DamageInfo *)local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantPlasmaProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
GiantPlasmaProjectile::OnCollideEntity(GiantPlasmaProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  Zombie *this_00;
  Board *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined8 local_70 [2];
  undefined1 auStack_60 [8];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 == (BoardEntity *)0x0) ||
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 == (Zombie *)0x0)) ||
     (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 != '\0')) {
    bVar2 = false;
    DamageInfo::DamageInfo((DamageInfo *)local_70);
    local_70[0] = Projectile::GetInstigator((Projectile *)this);
    operator|=(auStack_60,0x2000);
    (**(code **)(*(long *)param_1 + 0x120))(param_1,(DamageInfo *)local_70);
    DamageInfo::~DamageInfo((DamageInfo *)local_70);
    goto LAB_04089d8c;
  }
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  uVar4 = (uint)this_01;
  if (this_01 != (Board *)0x0) {
    uVar4 = Board::IsDangerRoom(this_01);
    uVar4 = uVar4 & 0xff;
  }
  bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00);
  if ((((!bVar2) && (bVar2 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)this_00), !bVar2)) &&
      ((bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)this_00), !bVar2 &&
       ((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar2 &&
        (bVar2 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)this_00), !bVar2)))))) &&
     ((bVar2 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)this_00), !bVar2 &&
      (((((bVar2 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)this_00), !bVar2 &&
          (bVar2 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)this_00), !bVar2)) &&
         (bVar2 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)this_00), !bVar2)) &&
        ((bVar2 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)this_00), !bVar2 &&
         (bVar2 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)this_00), !bVar2)))) &&
       ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0' &&
        (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))))))) {
    Zombie::GetCurrentTitleStatus();
    if (((local_58 == '\0') && (cVar1 = Zombie::HasFogImmune(this_00), cVar1 == '\0')) &&
       (cVar1 = Zombie::IsBerserk(this_00), cVar1 == '\0')) {
      bVar2 = Sexy::RtObject::IsA<ZombieMirrorQueen>((RtObject *)this_00);
      TitleStatus::~TitleStatus((TitleStatus *)local_70);
      if (!bVar2) {
        if (uVar4 == 0) {
LAB_04089f78:
          bVar3 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)this_00);
          if (!bVar3) {
            bVar2 = false;
            hitNormalZombie(this,this_00);
            goto LAB_04089d8c;
          }
        }
        else {
          iVar5 = FUN_040866e0(*(undefined4 *)(this + 0x70));
          iVar6 = FUN_040866e4(*(undefined4 *)(this_00 + 0x50));
          if (iVar6 <= iVar5) goto LAB_04089f78;
        }
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_70,(RtWeakPtrBase *)aRStack_78);
        cVar1 = BoardEntity::HasBeHitted((BoardEntity *)this_00,(TitleStatus *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
        if (cVar1 == '\0') {
          bVar2 = false;
          (**(code **)(*(long *)this + 0x1b0))(this,param_1);
          playHitEffect(this,param_1,false);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_70,(RtWeakPtrBase *)aRStack_78);
          BoardEntity::SetHitted((BoardEntity *)this_00,(TitleStatus *)local_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
        }
        goto LAB_04089d8c;
      }
    }
    else {
      TitleStatus::~TitleStatus((TitleStatus *)local_70);
    }
  }
  bVar2 = true;
  (**(code **)(*(long *)this + 0x1b0))(this,param_1);
  playHitEffect(this,param_1,false);
  (**(code **)(*(long *)this + 0x48))(this);
LAB_04089d8c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


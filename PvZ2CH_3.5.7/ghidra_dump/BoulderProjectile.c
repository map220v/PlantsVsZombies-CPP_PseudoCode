// Class: BoulderProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoulderProjectile::onProjectileInitialized() */

void __thiscall BoulderProjectile::onProjectileInitialized(BoulderProjectile *this)

{
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x1a8) = 0;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Play_LostCity_Trap_Boulder_Start");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoulderProjectile::~BoulderProjectile() */

void __thiscall BoulderProjectile::~BoulderProjectile(BoulderProjectile *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0690f750;
  *(undefined ***)(this + 0x10) = &PTR__BoulderProjectile_0690f940;
  std::string::string(asStack_10,"Play_LostCity_Trap_Boulder_Rolling_Stop");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Projectile::~Projectile((Projectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BoulderProjectile::~BoulderProjectile() */

void __thiscall BoulderProjectile::~BoulderProjectile(BoulderProjectile *this)

{
  ~BoulderProjectile(this + -0x10);
  return;
}


/* BoulderProjectile::~BoulderProjectile() */

void __thiscall BoulderProjectile::~BoulderProjectile(BoulderProjectile *this)

{
  ~BoulderProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoulderProjectile::~BoulderProjectile() */

void __thiscall BoulderProjectile::~BoulderProjectile(BoulderProjectile *this)

{
  ~BoulderProjectile(this + -0x10);
  return;
}


/* BoulderProjectile::BoulderProjectile() */

void __thiscall BoulderProjectile::BoulderProjectile(BoulderProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_0690f750;
  *(undefined ***)(this + 0x10) = &PTR__BoulderProjectile_0690f940;
  return;
}


/* BoulderProjectile::StaticNew() */

BoulderProjectile * BoulderProjectile::StaticNew(void)

{
  BoulderProjectile *this;
  
  this = ::operator_new(0x1b0);
  BoulderProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoulderProjectile::StaticClassInit() */

void BoulderProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoulderProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04918770,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoulderProjectile::StaticGetClass() */

long * BoulderProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BoulderProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoulderProjectile::GetClass() const */

long * BoulderProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BoulderProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoulderProjectile::isToTheRight(BoardEntity*) */

void __thiscall BoulderProjectile::isToTheRight(BoulderProjectile *this,BoardEntity *param_1)

{
  int local_28;
  int local_20;
  int local_18 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::CalcCollisionRectBoardSpace();
  (**(code **)(*(long *)param_1 + 0xb0))(local_18,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((float)local_28 + (float)local_20 * 0.5 <
                   (float)local_18[0] + (float)local_10 * 0.5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoulderProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall BoulderProjectile::OnCollideEntity(BoulderProjectile *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ZombieZombossMech *pZVar6;
  Zombie *pZVar7;
  PlantGroup *this_00;
  float *pfVar8;
  BoardEntity *pBVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  string asStack_48 [16];
  undefined1 local_38;
  float local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = FUN_04918494(*(undefined4 *)(this + 0xa8));
  if ((*(int *)(this + 0x1a8) < 1) || (cVar2 = BoardEntity::IsInRow(param_1,iVar5), cVar2 == '\0'))
  {
    uVar4 = 0;
    goto LAB_04918c84;
  }
  if (param_1 == (BoardEntity *)0x0) {
LAB_04918e98:
    (**(code **)(*(long *)this + 0x1b0))(this,param_1);
  }
  else {
    pZVar6 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1);
    pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    this_00 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
    if ((pZVar7 == (Zombie *)0x0) ||
       (cVar2 = (**(code **)(*(long *)pZVar7 + 0x3f0))(pZVar7), cVar2 == '\0')) {
      bVar3 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)param_1);
      if ((bVar3) &&
         (cVar2 = PlantGroup::CanAttackRelocateGroup(this_00,(BoardEntity *)0x0), cVar2 != '\0')) {
        pBVar9 = (BoardEntity *)Projectile::GetInstigator((Projectile *)this);
        std::string::string(asStack_48,"Play_Zomb_Future_Football_Mvmt_Fling");
        BoardEntityPusher::BoardEntityPusher((BoardEntityPusher *)local_30,pBVar9,asStack_48);
        std::string::~string(asStack_48);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
        cVar2 = isToTheRight(this,param_1);
        uVar1 = BoardEntityPusher::PUSH_DIRECTION_LEFT;
        if (cVar2 != '\0') {
          uVar1 = BoardEntityPusher::PUSH_DIRECTION_RIGHT;
        }
        PushPlantGroupProps::PushPlantGroupProps
                  ((PushPlantGroupProps *)asStack_48,aRStack_50,uVar1,0x4b0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        local_38 = 1;
        BoardEntityPusher::PushPlantGroup
                  ((BoardEntityPusher *)local_30,(PushPlantGroupProps *)asStack_48);
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_48);
        BoardEntityPusher::~BoardEntityPusher((BoardEntityPusher *)local_30);
      }
      else if (pZVar6 == (ZombieZombossMech *)0x0) goto LAB_04918e98;
    }
    else {
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      EATextSquish::Vec3::Vec3((Vec3 *)local_30,*pfVar8,pfVar8[1],pfVar8[2] + 150.0);
      cVar2 = isToTheRight(this,param_1);
      if (cVar2 == '\0') {
        fVar10 = -850.0;
      }
      else {
        fVar10 = 850.0;
      }
      local_30[0] = fVar10 + local_30[0];
      Zombie::FlickOff((SexyVector3 *)pZVar7,400.0,-1120.0);
    }
  }
  Projectile::playSound((Projectile *)this,param_1);
  uVar4 = (**(code **)(*(long *)this + 0x168))(this,param_1);
LAB_04918c84:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoulderProjectile::OnCollideGround() */

void __thiscall BoulderProjectile::OnCollideGround(BoulderProjectile *this)

{
  int iVar1;
  RtObject *this_00;
  BoulderProjectileProps *pBVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 local_28;
  float local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pBVar2 = Sexy::RtObject::Cast<BoulderProjectileProps>(this_00);
  puVar3 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
  local_20 = *(float *)(puVar3 + 1);
  local_28 = *puVar3;
  fVar4 = (float)Sexy::SexyMath::Fabs(local_20);
  if (fVar4 <= *(float *)(pBVar2 + 0x1f0)) {
    local_20 = 0.0;
    EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
    Projectile::SetAcceleration((Projectile *)this,(SexyVector3 *)aVStack_18);
    iVar1 = *(int *)(this + 0x1a8);
  }
  else {
    iVar1 = *(int *)(this + 0x1a8);
  }
  if (iVar1 < 1) {
    EATextSquish::Vec3::operator+=((Vec3 *)&local_28,(Vec3 *)(pBVar2 + 0x1e0));
    *(undefined4 *)(this + 0x1a8) = 1;
    std::string::string((string *)aVStack_18,"Play_LostCity_Trap_Boulder_Rolling_Bounce");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)aVStack_18,0.0);
    std::string::~string((string *)aVStack_18);
    nop();
  }
  EATextSquish::Vec3::Vec3
            (aVStack_18,(float)local_28,local_28._4_4_,-(local_20 * *(float *)(pBVar2 + 0x1ec)));
  Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)aVStack_18);
  Projectile::OnCollideGround((Projectile *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


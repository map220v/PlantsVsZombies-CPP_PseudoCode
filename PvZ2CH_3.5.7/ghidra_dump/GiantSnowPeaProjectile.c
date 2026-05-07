// Class: GiantSnowPeaProjectile


/* GiantSnowPeaProjectile::onProjectileInitialized() */

void __thiscall GiantSnowPeaProjectile::onProjectileInitialized(GiantSnowPeaProjectile *this)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantSnowPeaProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
GiantSnowPeaProjectile::OnCollideEntity(GiantSnowPeaProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar3,uVar4,aRStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  uVar2 = 0;
  if (!bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* GiantSnowPeaProjectile::handleImpact(BoardEntity*) */

GiantSnowPeaProjectile __thiscall
GiantSnowPeaProjectile::handleImpact(GiantSnowPeaProjectile *this,BoardEntity *param_1)

{
  GiantSnowPeaProjectile GVar1;
  
  Projectile::handleImpact((Projectile *)this,param_1);
  GVar1 = this[0x1ac];
  if (GVar1 != (GiantSnowPeaProjectile)0x0) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return GVar1;
}


/* GiantSnowPeaProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void GiantSnowPeaProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  Projectile::fillDamageInfo(param_1,param_2);
  *(float *)(param_2 + 8) = *(float *)(param_2 + 8) - *(float *)(param_1 + 0x1a8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantSnowPeaProjectile::StaticClassInit() */

void GiantSnowPeaProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GiantSnowPeaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04063768,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiantSnowPeaProjectile::StaticGetClass() */

long * GiantSnowPeaProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GiantSnowPeaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantSnowPeaProjectile::GetClass() const */

long * GiantSnowPeaProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GiantSnowPeaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GiantSnowPeaProjectile::GiantSnowPeaProjectile() */

void __thiscall GiantSnowPeaProjectile::GiantSnowPeaProjectile(GiantSnowPeaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1ac] = (GiantSnowPeaProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067c4630;
  *(undefined ***)(this + 0x10) = &PTR__GiantSnowPeaProjectile_067c4820;
  *(undefined4 *)(this + 0x1a8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  return;
}


/* GiantSnowPeaProjectile::StaticNew() */

GiantSnowPeaProjectile * GiantSnowPeaProjectile::StaticNew(void)

{
  GiantSnowPeaProjectile *this;
  
  this = ::operator_new(0x1c8);
  GiantSnowPeaProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GiantSnowPeaProjectile::damageEntity(BoardEntity*) */

void __thiscall
GiantSnowPeaProjectile::damageEntity(GiantSnowPeaProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItem *this_00;
  Zombie *this_01;
  code *pcVar4;
  float fVar5;
  undefined8 local_70;
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] != (GiantSnowPeaProjectile)0x0) {
    DamageInfo::DamageInfo(aDStack_68);
    (**(code **)(*(long *)this + 0x178))(this,aDStack_68,param_1);
    iVar2 = BoardEntity::CalcColumnPosition(param_1);
    iVar3 = FUN_04063488(*(undefined4 *)(this + 0xa8));
    Sexy::Point::Point((Point *)&local_70,iVar2,iVar3);
    local_50 = local_70;
    this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (this_00 == (GridItem *)0x0) {
      if (((this_01 == (Zombie *)0x0) ||
          (cVar1 = (**(code **)(*(long *)this_01 + 0x330))(), cVar1 != '\0')) ||
         (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar1 != '\0')) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = (float)Zombie::GetTotalHitpoints(this_01);
      }
    }
    else if (*(code **)(*(long *)this_00 + 0x1d8) == GridItem::GetHitpoints) {
      fVar5 = (float)GridItem::GetHitpoints(this_00);
    }
    else {
      fVar5 = (float)(**(code **)(*(long *)this_00 + 0x1d8))();
    }
    pcVar4 = *(code **)(*(long *)param_1 + 0x110);
    this[0x1ac] = (GiantSnowPeaProjectile)(local_60 <= fVar5);
    *(float *)(this + 0x1a8) = *(float *)(this + 0x1a8) + fVar5;
    (*pcVar4)(param_1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GiantSnowPeaProjectile::~GiantSnowPeaProjectile() */

void __thiscall GiantSnowPeaProjectile::~GiantSnowPeaProjectile(GiantSnowPeaProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067c4630;
  *(undefined ***)(this + 0x10) = &PTR__GiantSnowPeaProjectile_067c4820;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GiantSnowPeaProjectile::~GiantSnowPeaProjectile() */

void __thiscall GiantSnowPeaProjectile::~GiantSnowPeaProjectile(GiantSnowPeaProjectile *this)

{
  ~GiantSnowPeaProjectile(this + -0x10);
  return;
}


/* GiantSnowPeaProjectile::~GiantSnowPeaProjectile() */

void __thiscall GiantSnowPeaProjectile::~GiantSnowPeaProjectile(GiantSnowPeaProjectile *this)

{
  ~GiantSnowPeaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GiantSnowPeaProjectile::~GiantSnowPeaProjectile() */

void __thiscall GiantSnowPeaProjectile::~GiantSnowPeaProjectile(GiantSnowPeaProjectile *this)

{
  ~GiantSnowPeaProjectile(this + -0x10);
  return;
}


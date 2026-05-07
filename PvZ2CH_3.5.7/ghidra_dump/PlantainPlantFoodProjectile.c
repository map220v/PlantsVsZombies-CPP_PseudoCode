// Class: PlantainPlantFoodProjectile


/* PlantainPlantFoodProjectile::onDestroy() */

void __thiscall PlantainPlantFoodProjectile::onDestroy(PlantainPlantFoodProjectile *this)

{
  this[0x1bc] = (PlantainPlantFoodProjectile)0x0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainPlantFoodProjectile::StaticClassInit() */

void PlantainPlantFoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantainPlantFoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03906fb8,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantainPlantFoodProjectile::StaticGetClass() */

long * PlantainPlantFoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantainPlantFoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantainPlantFoodProjectile::GetClass() const */

long * PlantainPlantFoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantainPlantFoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantainPlantFoodProjectile::setOwnerLevel(int) */

void __thiscall
PlantainPlantFoodProjectile::setOwnerLevel(PlantainPlantFoodProjectile *this,int param_1)

{
  *(int *)(this + 0x1c0) = param_1;
  return;
}


/* PlantainPlantFoodProjectile::isZombieCanBeBlackOff(Zombie*) */

PlantainPlantFoodProjectile __thiscall
PlantainPlantFoodProjectile::isZombieCanBeBlackOff
          (PlantainPlantFoodProjectile *this,Zombie *param_1)

{
  PlantainPlantFoodProjectile PVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  PlantainPlantFoodProjectile PVar5;
  
  cVar2 = Zombie::HasCondition(param_1,0x55);
  if ((cVar2 == '\0') && (cVar2 = Zombie::HasCondition(param_1,0x8c), cVar2 == '\0')) {
    bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1);
    PVar5 = (PlantainPlantFoodProjectile)0x0;
    if ((((!bVar3) &&
         (((bVar3 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)param_1), !bVar3 &&
           (bVar3 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)param_1), !bVar3)) &&
          (bVar3 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar3)))) &&
        ((((cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0' &&
           (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 == '\0')) &&
          (bVar3 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)param_1), !bVar3)) &&
         (((bVar3 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)param_1), !bVar3 &&
           (bVar3 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)param_1), !bVar3)) &&
          (((bVar3 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)param_1), !bVar3 &&
            ((((bVar3 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)param_1), !bVar3 &&
               (bVar3 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)param_1), !bVar3))
              && (bVar3 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)param_1), !bVar3))
             && ((bVar3 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)param_1), !bVar3 &&
                 (bVar3 = Sexy::RtObject::IsA<ZombieModernSolarTruck>((RtObject *)param_1), !bVar3))
                )))) && (bVar3 = Sexy::RtObject::IsA<ZombieGum>((RtObject *)param_1), !bVar3))))))))
       && (PVar1 = this[0x1c4], PVar1 != (PlantainPlantFoodProjectile)0x0)) {
      iVar4 = Zombie::GetSizeType(param_1);
      PVar5 = (PlantainPlantFoodProjectile)0x0;
      if (iVar4 == 1) {
        PVar5 = PVar1;
      }
    }
  }
  else {
    PVar5 = (PlantainPlantFoodProjectile)0x0;
  }
  return PVar5;
}


/* PlantainPlantFoodProjectile::isZombieShouldFlickOff(Zombie*) */

bool __thiscall
PlantainPlantFoodProjectile::isZombieShouldFlickOff
          (PlantainPlantFoodProjectile *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = Zombie::IsBoss(param_1);
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')
       ) && (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')) &&
     (((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0' &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) &&
      (cVar1 = Zombie::IsInvisible(param_1), cVar1 == '\0')))) {
    iVar3 = Zombie::GetSizeType(param_1);
    if (iVar3 == 2) {
      return false;
    }
    iVar3 = Zombie::GetSizeType(param_1);
    if (iVar3 == 1) {
      return false;
    }
    cVar1 = Zombie::HasCondition(param_1,0x55);
    if (cVar1 != '\0') {
      return false;
    }
    cVar1 = Zombie::HasCondition(param_1,0x8c);
    if (cVar1 != '\0') {
      return false;
    }
    bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1);
    if ((((!bVar2) && (bVar2 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)param_1), !bVar2)) &&
        ((((bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)param_1), !bVar2 &&
           (((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar2 &&
             (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
            (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')))) &&
          ((bVar2 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)param_1), !bVar2 &&
           (bVar2 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)param_1), !bVar2)))) &&
         (bVar2 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)param_1), !bVar2)))) &&
       (((bVar2 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)param_1), !bVar2 &&
         (bVar2 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)param_1), !bVar2)) &&
        ((bVar2 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)param_1), !bVar2 &&
         ((((bVar2 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)param_1), !bVar2 &&
            (bVar2 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)param_1), !bVar2)) &&
           (bVar2 = Sexy::RtObject::IsA<ZombieModernSolarTruck>((RtObject *)param_1), !bVar2)) &&
          (bVar2 = Sexy::RtObject::IsA<ZombieGum>((RtObject *)param_1), !bVar2)))))))) {
      cVar1 = Zombie::IsFlying(param_1);
      if (cVar1 == '\0') {
        return false;
      }
      cVar1 = (**(code **)(*(long *)param_1 + 0x3f0))(param_1);
      if (cVar1 == '\0') {
        return false;
      }
      iVar3 = FUN_03906000(*(undefined4 *)(param_1 + 0x50));
      return iVar3 <= *(int *)(this + 0x1c0) + 2;
    }
  }
  return false;
}


/* PlantainPlantFoodProjectile::isZombieShouldStun(Zombie*) */

byte __thiscall
PlantainPlantFoodProjectile::isZombieShouldStun(PlantainPlantFoodProjectile *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  
  cVar1 = Zombie::IsBoss(param_1);
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')
       ) && (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')) &&
     ((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0' &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')))) {
    cVar1 = Zombie::IsInvisible(param_1);
    if (cVar1 == '\0') {
      iVar4 = Zombie::GetSizeType(param_1);
      if (iVar4 == 2) {
        return 0;
      }
      iVar4 = Zombie::GetSizeType(param_1);
      if (iVar4 == 1) {
        return 0;
      }
      cVar1 = Zombie::HasCondition(param_1,0x55);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = Zombie::HasCondition(param_1,0x8c);
      if (cVar1 != '\0') {
        return 0;
      }
      bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1);
      if (((((!bVar2) && (bVar2 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)param_1), !bVar2)) &&
           ((bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)param_1), !bVar2 &&
            (((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar2 &&
              (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
             (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')))))) &&
          ((bVar2 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)param_1), !bVar2 &&
           (bVar2 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)param_1), !bVar2)))) &&
         ((bVar2 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)param_1), !bVar2 &&
          (((bVar2 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)param_1), !bVar2 &&
            (bVar2 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)param_1), !bVar2)) &&
           ((bVar2 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)param_1), !bVar2 &&
            ((((bVar2 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)param_1), !bVar2 &&
               (bVar2 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)param_1), !bVar2)) &&
              (bVar2 = Sexy::RtObject::IsA<ZombieModernSolarTruck>((RtObject *)param_1), !bVar2)) &&
             (bVar2 = Sexy::RtObject::IsA<ZombieGum>((RtObject *)param_1), !bVar2)))))))))) {
        bVar3 = Zombie::HasCondition(param_1,0x18);
        return bVar3 ^ 1;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainPlantFoodProjectile::isCanFlicOff(Zombie*) */

void __thiscall
PlantainPlantFoodProjectile::isCanFlicOff(PlantainPlantFoodProjectile *this,Zombie *param_1)

{
  bool bVar1;
  RtWeakPtr<Zombie> *this_00;
  Zombie *pZVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1c8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x1c8));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    this_00 = (RtWeakPtr<Zombie> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pZVar2 = (Zombie *)Sexy::RtWeakPtr<Zombie>::GetPtr(this_00);
    if (param_1 == pZVar2) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantainPlantFoodProjectile::PlantainPlantFoodProjectile() */

void __thiscall
PlantainPlantFoodProjectile::PlantainPlantFoodProjectile(PlantainPlantFoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066c1d20;
  *(undefined ***)(this + 0x10) = &PTR__PlantainPlantFoodProjectile_066c1f10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c8));
  return;
}


/* PlantainPlantFoodProjectile::StaticNew() */

PlantainPlantFoodProjectile * PlantainPlantFoodProjectile::StaticNew(void)

{
  PlantainPlantFoodProjectile *this;
  
  this = ::operator_new(0x1e0);
  PlantainPlantFoodProjectile(this);
  return this;
}


/* PlantainPlantFoodProjectile::onProjectileInitialized() */

void __thiscall
PlantainPlantFoodProjectile::onProjectileInitialized(PlantainPlantFoodProjectile *this)

{
  undefined4 uVar1;
  undefined *puVar2;
  RtObject *this_00;
  PlantainPlantFoodProjectileProps *pPVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined4 *)(this + 0x1b0) = 0x3f000000;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pPVar3 = Sexy::RtObject::Cast<PlantainPlantFoodProjectileProps>(this_00);
  uVar1 = *(undefined4 *)(pPVar3 + 0x1e4);
  *(undefined4 *)(this + 0x1a8) = 0;
  this[0x1bc] = (PlantainPlantFoodProjectile)0x0;
  *(undefined4 *)(this + 0x1c0) = 1;
  *(undefined4 *)(this + 0x1ac) = uVar1;
  this[0x1c4] = (PlantainPlantFoodProjectile)0x0;
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieTossEnd);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<PlantainPlantFoodProjectile,void(PlantainPlantFoodProjectile::*)(Zombie*)>>
            ((MessageRouter *)puVar2,Message::ZombieTossEnd,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainPlantFoodProjectile::dealTornadoAreaDamage() */

void __thiscall
PlantainPlantFoodProjectile::dealTornadoAreaDamage(PlantainPlantFoodProjectile *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  GridItem *pGVar5;
  Zombie *this_00;
  ResourceInfo *pRVar6;
  ulong uVar7;
  RtObject *this_01;
  PlantainPlantFoodProjectileProps *pPVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  DamageInfo *pDVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  Point aPStack_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"Play_Bonk");
  uVar10 = 0;
  RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  lVar3 = Projectile::GetProps((Projectile *)this);
  Sexy::TRect<float>::TRect((TRect<float> *)&local_a0,(TRect *)(lVar3 + 0x120));
  Sexy::Insets::Insets
            (aIStack_90,(int)(local_a0 + *(float *)(this + 0x18)),
             (int)(local_9c + *(float *)(this + 0x1c)),(int)local_98,(int)local_94);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar2 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
             aIStack_90,0xffffffff,0xffffffff);
  uVar11 = local_80;
  lVar3 = FUN_03906080(local_80,local_78);
  if (lVar3 != 0) {
    do {
      FUN_0390608c(uVar11,uVar10);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)asStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
      puVar4 = (undefined8 *)FUN_0390608c(local_80,uVar10);
      pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
      puVar4 = (undefined8 *)FUN_0390608c(local_80,uVar10);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_b8);
      if (cVar1 == '\0') {
LAB_0390a5f8:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8)
        ;
      }
      else {
        pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_b8);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pRVar6);
        if (((cVar1 == '\0') ||
            ((pGVar5 != (GridItem *)0x0 &&
             (cVar1 = (**(code **)(*(long *)pGVar5 + 0x200))(pGVar5), cVar1 == '\0')))) ||
           ((this_00 != (Zombie *)0x0 &&
            ((((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 != '\0' ||
               (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 != '\0')) ||
              (cVar1 = Zombie::IsControlled(this_00), cVar1 != '\0')) ||
             (cVar1 = Zombie::IsInvisible(this_00), cVar1 != '\0')))))) goto LAB_0390a5f8;
        this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
        pPVar8 = Sexy::RtObject::Cast<PlantainPlantFoodProjectileProps>(this_01);
                    /* WARNING: Load size is inaccurate */
        pDVar13._0_4_ = *(DamageInfo **)(pPVar8 + 0x1e0);
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
        pcVar12 = *(code **)(*plVar9 + 0x110);
        Sexy::Point::Point(aPStack_b0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_a8,1.0,0.0);
        DamageInfo::DamageInfo(pDVar13._0_4_,local_a8,local_a4,asStack_68,aPStack_b0,0);
        (*pcVar12)(plVar9,asStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8)
        ;
      }
      uVar11 = local_80;
      uVar10 = uVar10 + 1;
      uVar7 = FUN_03906080(local_80,local_78);
    } while (uVar10 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantainPlantFoodProjectile::onUpdate(float) */

float PlantainPlantFoodProjectile::onUpdate(float param_1)

{
  PlantainPlantFoodProjectile *in_x0;
  float fVar1;
  float fVar2;
  
  if (*(int *)(in_x0 + 0x1a8) == 1) {
    fVar2 = *(float *)(in_x0 + 0x1b8);
    fVar1 = (float)PVZ_T();
    if (fVar2 < fVar1) {
      param_1 = (float)(**(code **)(*(long *)in_x0 + 0x48))();
    }
    else {
      fVar1 = *(float *)(in_x0 + 0x1b4);
      param_1 = (float)PVZ_T();
      if (fVar1 < param_1) {
        dealTornadoAreaDamage(in_x0);
        fVar1 = (float)PVZ_T();
        param_1 = fVar1 + *(float *)(in_x0 + 0x1b0);
        *(float *)(in_x0 + 0x1b4) = param_1;
      }
    }
  }
  return param_1;
}


/* PlantainPlantFoodProjectile::~PlantainPlantFoodProjectile() */

void __thiscall
PlantainPlantFoodProjectile::~PlantainPlantFoodProjectile(PlantainPlantFoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066c1d20;
  *(undefined ***)(this + 0x10) = &PTR__PlantainPlantFoodProjectile_066c1f10;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PlantainPlantFoodProjectile::~PlantainPlantFoodProjectile() */

void __thiscall
PlantainPlantFoodProjectile::~PlantainPlantFoodProjectile(PlantainPlantFoodProjectile *this)

{
  ~PlantainPlantFoodProjectile(this + -0x10);
  return;
}


/* PlantainPlantFoodProjectile::~PlantainPlantFoodProjectile() */

void __thiscall
PlantainPlantFoodProjectile::~PlantainPlantFoodProjectile(PlantainPlantFoodProjectile *this)

{
  ~PlantainPlantFoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantainPlantFoodProjectile::~PlantainPlantFoodProjectile() */

void __thiscall
PlantainPlantFoodProjectile::~PlantainPlantFoodProjectile(PlantainPlantFoodProjectile *this)

{
  ~PlantainPlantFoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainPlantFoodProjectile::isZombieCanBeToss(Zombie*) */

void __thiscall
PlantainPlantFoodProjectile::isZombieCanBeToss(PlantainPlantFoodProjectile *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsBoss(param_1);
  if (cVar1 == '\0') {
    Zombie::GetCurrentTitleStatus();
    if ((((local_58 == '\0') &&
         (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) &&
        (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')) &&
       (cVar1 = Zombie::IsBerserk(param_1), cVar1 == '\0')) {
      cVar1 = Zombie::HasFogImmune(param_1);
      TitleStatus::~TitleStatus(aTStack_70);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
        bVar3 = false;
        if (((cVar1 != '\0') ||
            (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')) ||
           (cVar1 = Zombie::IsInvisible(param_1), cVar1 != '\0')) goto LAB_0390b1c4;
        iVar4 = Zombie::GetSizeType(param_1);
        if (((iVar4 != 2) &&
            (iVar4 = FUN_03906000(*(undefined4 *)(param_1 + 0x50)),
            iVar4 <= *(int *)(this + 0x1c0) + 2)) &&
           ((iVar4 = Zombie::GetSizeType(param_1), iVar4 != 1 &&
            ((cVar1 = Zombie::HasCondition(param_1,0x55), cVar1 == '\0' &&
             (cVar1 = Zombie::HasCondition(param_1,0x8c), cVar1 == '\0')))))) {
          bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1);
          if (((!bVar2) &&
              ((((bVar2 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)param_1), !bVar2 &&
                 (bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)param_1), !bVar2)) &&
                (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), !bVar2)) &&
               ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0' &&
                (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')))))) &&
             (((((bVar2 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)param_1), !bVar2 &&
                 ((bVar2 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)param_1), !bVar2 &&
                  (bVar2 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)param_1), !bVar2))))
                && (bVar2 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)param_1), !bVar2)) &&
               (((bVar2 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)param_1), !bVar2 &&
                 (bVar2 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)param_1), !bVar2)
                 ) && (bVar2 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)param_1),
                      !bVar2)))) &&
              ((bVar2 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)param_1), !bVar2 &&
               (bVar2 = Sexy::RtObject::IsA<ZombieModernSolarTruck>((RtObject *)param_1), !bVar2))))
             )) {
            bVar3 = Sexy::RtObject::IsA<ZombieGum>((RtObject *)param_1);
            bVar3 = !bVar3;
          }
          goto LAB_0390b1c4;
        }
      }
    }
    else {
      TitleStatus::~TitleStatus(aTStack_70);
    }
  }
  bVar3 = false;
LAB_0390b1c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainPlantFoodProjectile::onZombieTossEnd(Zombie*) */

void __thiscall
PlantainPlantFoodProjectile::onZombieTossEnd(PlantainPlantFoodProjectile *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Zombie *)0x0) && (cVar1 = isZombieCanBeToss(this,param_1), cVar1 != '\0')) {
    cVar1 = isCanFlicOff(this,param_1);
    if (cVar1 == '\0') {
      cVar1 = isZombieShouldStun(this,param_1);
      if (cVar1 != '\0') {
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(this + 0x1ac),0,param_1,2,1);
      }
    }
    else {
      iVar2 = Zombie::GetFacing(param_1);
      if (iVar2 == 1) {
        iVar2 = Sexy::Rand(600);
        fVar3 = -500.0;
      }
      else {
        iVar2 = Sexy::Rand(600);
        fVar3 = 1000.0;
      }
      EATextSquish::Vec3::Vec3(aVStack_18,fVar3,(float)iVar2,0.0);
      Zombie::FlickOff(param_1,(SexyVector3 *)aVStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantainPlantFoodProjectile::TakeAttack_Hit1() */

void __thiscall PlantainPlantFoodProjectile::TakeAttack_Hit1(PlantainPlantFoodProjectile *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  ResourceInfo *pRVar7;
  ZombieTosserSubSystem *pZVar8;
  undefined8 *puVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ZombieTosserSubSystem *pZVar10;
  int extraout_w1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  RtId aRStack_80 [16];
  Iterator aIStack_70 [32];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c8));
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_70,uVar5,0x29);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_70), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)aRStack_80);
    Sexy::RtId::~RtId(aRStack_80);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_90);
    cVar2 = isZombieShouldFlickOff(this,(Zombie *)pRVar7);
    if (cVar2 != '\0') {
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x1c8),(RtWeakPtr *)&local_90);
      pZVar8 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_90);
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x41200000,0x3f800000,pZVar8,pRVar7,pfVar6,aRStack_50,1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
    Sexy::RtDbTable::Iterator::operator++(aIStack_70,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_70);
  iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar6);
  iVar4 = FUN_03905ff4(*(undefined4 *)(this + 0xa8));
  Sexy::Insets::Insets((Insets *)aRStack_80,iVar3,iVar4 + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aIStack_70);
  EntityFinder::GetEntitiesInGridSquares(aIStack_70,2,aRStack_80);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aIStack_70);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aIStack_70);
  pZVar8 = _FUN_0390cbec;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar9);
    if (bVar1) {
      nop();
      cVar2 = isZombieShouldFlickOff(this,(Zombie *)this_00);
      if (cVar2 == '\0') {
        cVar2 = isZombieCanBeToss(this,(Zombie *)this_00);
        if (cVar2 == '\0') {
          cVar2 = isZombieCanBeBlackOff(this,(Zombie *)this_00);
          if (cVar2 != '\0') {
            puVar9 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(this_00);
            local_90 = *puVar9;
            local_88 = *(undefined4 *)(puVar9 + 1);
            iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
            iVar3 = iVar3 + 2;
            iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
            if (iVar4 < iVar3) {
              iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
            }
            iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3);
            local_90 = CONCAT44(local_90._4_4_,(float)iVar3);
            pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
            ZombieTosserSubSystem::LaunchZombie
                      (pZVar8,0x3f000000,pZVar10,this_00,&local_90,aRStack_50,1);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
          }
        }
        else {
          pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x41200000,0x3f800000,pZVar10,this_00,pfVar6,
                     aRStack_50,1);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aIStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantainPlantFoodProjectile::OnCollideEntity(BoardEntity*) */

undefined8 PlantainPlantFoodProjectile::OnCollideEntity(BoardEntity *param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  if (param_1[0x1bc] == (BoardEntity)0x0) {
    *(undefined4 *)(param_1 + 0x1a8) = 1;
    uVar1 = PVZ_T();
    *(undefined4 *)(param_1 + 0x1b4) = uVar1;
    fVar2 = (float)PVZ_T();
    *(float *)(param_1 + 0x1b8) = fVar2 + *(float *)(param_1 + 0x1ac);
    Projectile::SetVelocity((Projectile *)param_1,0.0,0.0,0.0);
    TakeAttack_Hit1((PlantainPlantFoodProjectile *)param_1);
    param_1[0x1bc] = (BoardEntity)0x1;
  }
  return 0;
}


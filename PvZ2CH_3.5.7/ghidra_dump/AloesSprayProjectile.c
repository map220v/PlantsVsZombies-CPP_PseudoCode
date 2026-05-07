// Class: AloesSprayProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AloesSprayProjectile::StaticClassInit() */

void AloesSprayProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"AloesSprayProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc198c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AloesSprayProjectile::StaticGetClass() */

long * AloesSprayProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AloesSprayProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AloesSprayProjectile::GetClass() const */

long * AloesSprayProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"AloesSprayProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AloesSprayProjectile::AloesSprayProjectile() */

void __thiscall AloesSprayProjectile::AloesSprayProjectile(AloesSprayProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0699af60;
  *(undefined ***)(this + 0x10) = &PTR__AloesSprayProjectile_0699b150;
  Sexy::Point::Point((Point *)(this + 0x1b0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  return;
}


/* AloesSprayProjectile::StaticNew() */

AloesSprayProjectile * AloesSprayProjectile::StaticNew(void)

{
  AloesSprayProjectile *this;
  
  this = ::operator_new(0x1d8);
  AloesSprayProjectile(this);
  return this;
}


/* AloesSprayProjectile::~AloesSprayProjectile() */

void __thiscall AloesSprayProjectile::~AloesSprayProjectile(AloesSprayProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699af60;
  *(undefined ***)(this + 0x10) = &PTR__AloesSprayProjectile_0699b150;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to AloesSprayProjectile::~AloesSprayProjectile() */

void __thiscall AloesSprayProjectile::~AloesSprayProjectile(AloesSprayProjectile *this)

{
  ~AloesSprayProjectile(this + -0x10);
  return;
}


/* AloesSprayProjectile::~AloesSprayProjectile() */

void __thiscall AloesSprayProjectile::~AloesSprayProjectile(AloesSprayProjectile *this)

{
  ~AloesSprayProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AloesSprayProjectile::~AloesSprayProjectile() */

void __thiscall AloesSprayProjectile::~AloesSprayProjectile(AloesSprayProjectile *this)

{
  ~AloesSprayProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AloesSprayProjectile::CreateWaterMist(std::vector<Sexy::Point, std::allocator<Sexy::Point> >) */

void __thiscall
AloesSprayProjectile::CreateWaterMist
          (AloesSprayProjectile *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  char cVar2;
  WaterMistTileSubSystem *pWVar3;
  GridItemWaterMist *this_00;
  TPoint *pTVar4;
  undefined8 *puVar5;
  GridItemWaterMist *this_01;
  Board *this_02;
  code *pcVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar3 = Board::GetGameSubSystem<WaterMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pTVar4 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pcVar6 = *(code **)(*(long *)pWVar3 + 0xa8);
    Sexy::Point::Point((Point *)asStack_20,pTVar4);
    cVar2 = (*pcVar6)(pWVar3,asStack_20);
    if (cVar2 == '\0') {
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_20,"aloes_water_mist");
      Board::AddGridItem(this_02,asStack_20,*(int *)pTVar4,*(int *)(pTVar4 + 4),1);
      nop();
      std::string::~string(asStack_20);
      nop();
      GridItemWaterMist::SetType(this_00,*(int *)(this + 0x1a8));
      GridItemWaterMist::SetAvatar(this_00,(bool)this[0x1ac]);
      GridItemWaterMist::SetExtraAttackRate(this_00,*(float *)(this + 0x1b8));
    }
    else {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
      EntityFinder::GetEntitiesAtGridSquare
                (asStack_20,4,*(undefined4 *)pTVar4,*(undefined4 *)(pTVar4 + 4));
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)asStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        if ((((RtObject *)*puVar5 != (RtObject *)0x0) &&
            (bVar1 = Sexy::RtObject::IsA<GridItemWaterMist>((RtObject *)*puVar5), bVar1)) &&
           (nop(), this_01 != (GridItemWaterMist *)0x0)) {
          Sexy::OutputDebugStrF
                    ((wchar_t *)"AloesSprayProjectile::CreateWaterMist TurnToLoop x=%d y=%d",
                     (ulong)*(uint *)pTVar4,(ulong)*(uint *)(pTVar4 + 4));
          GridItemWaterMist::TurnToLoop(this_01);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
          goto LAB_04cc4870;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
    }
LAB_04cc4870:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AloesSprayProjectile::InitParam(Plant*, Sexy::Point) */

void __thiscall
AloesSprayProjectile::InitParam(AloesSprayProjectile *this,Plant *param_1,undefined8 *param_3)

{
  AloesSprayProjectile AVar1;
  undefined4 uVar2;
  long extraout_x0;
  undefined8 uVar3;
  undefined8 uVar4;
  Point aPStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  uVar2 = FUN_04cbfc64(*(undefined4 *)(extraout_x0 + 0x30));
  *(undefined4 *)(this + 0x1a8) = uVar2;
  AVar1 = (AloesSprayProjectile)Plant::GetAvatarEnable(param_1);
  *(undefined8 *)(this + 0x1b0) = *param_3;
  this[0x1ac] = AVar1;
  uVar2 = Plant::GetGeneSkillBoost(param_1);
  *(undefined4 *)(this + 0x1b8) = uVar2;
  Sexy::Point::Point(aPStack_28,(TPoint *)(this + 0x1b0));
  PlantAloes::FillSprayFields(avStack_20,this,aPStack_28);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x1c0));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::
  assign<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,void>
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x1c0),uVar3,uVar4);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AloesSprayProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
AloesSprayProjectile::OnCollideEntity(AloesSprayProjectile *this,BoardEntity *param_1)

{
  long extraout_x0;
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (extraout_x0 != 0) {
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
              (avStack_20,(vector *)(this + 0x1c0));
    CreateWaterMist(this,avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_20);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AloesSprayProjectile::OnCollideGround() */

void __thiscall AloesSprayProjectile::OnCollideGround(AloesSprayProjectile *this)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector(avStack_20,(vector *)(this + 0x1c0));
  CreateWaterMist(this,avStack_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_20);
  Projectile::OnCollideGround((Projectile *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


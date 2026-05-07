// Class: ArtifactSquidProjectile


/* ArtifactSquidProjectile::~ArtifactSquidProjectile() */

void __thiscall ArtifactSquidProjectile::~ArtifactSquidProjectile(ArtifactSquidProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0668ec20;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactSquidProjectile_0668ee10;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactSquidProjectile::~ArtifactSquidProjectile() */

void __thiscall ArtifactSquidProjectile::~ArtifactSquidProjectile(ArtifactSquidProjectile *this)

{
  ~ArtifactSquidProjectile(this + -0x10);
  return;
}


/* ArtifactSquidProjectile::~ArtifactSquidProjectile() */

void __thiscall ArtifactSquidProjectile::~ArtifactSquidProjectile(ArtifactSquidProjectile *this)

{
  ~ArtifactSquidProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactSquidProjectile::~ArtifactSquidProjectile() */

void __thiscall ArtifactSquidProjectile::~ArtifactSquidProjectile(ArtifactSquidProjectile *this)

{
  ~ArtifactSquidProjectile(this + -0x10);
  return;
}


/* ArtifactSquidProjectile::ArtifactSquidProjectile() */

void __thiscall ArtifactSquidProjectile::ArtifactSquidProjectile(ArtifactSquidProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0668ec20;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactSquidProjectile_0668ee10;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  return;
}


/* ArtifactSquidProjectile::StaticNew() */

ArtifactSquidProjectile * ArtifactSquidProjectile::StaticNew(void)

{
  ArtifactSquidProjectile *this;
  
  this = ::operator_new(0x1b0);
  ArtifactSquidProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSquidProjectile::StaticClassInit() */

void ArtifactSquidProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSquidProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0372e308,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSquidProjectile::StaticGetClass() */

long * ArtifactSquidProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSquidProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSquidProjectile::GetClass() const */

long * ArtifactSquidProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSquidProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSquidProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
ArtifactSquidProjectile::OnCollideEntity(ArtifactSquidProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  Zombie *this_00;
  Zombie *pZVar3;
  
  if ((((((param_1 != (BoardEntity *)0x0) &&
         (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
        (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 == '\0')) &&
       ((cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0' &&
        (cVar1 = IsValidTarget(this_00), cVar1 != '\0')))) &&
      ((iVar2 = Zombie::GetSizeType(this_00), iVar2 != 2 || (0.0 < *(float *)(this + 0x1ac))))) &&
     ((((cVar1 = FUN_0373c274(*(undefined4 *)(this_00 + 0x28)), cVar1 == '\0' &&
        (cVar1 = Zombie::HasCondition(this_00,0x5a), cVar1 == '\0')) &&
       (cVar1 = Zombie::HasCondition(this_00,0x65), cVar1 == '\0')) &&
      (cVar1 = Zombie::IsTargetable(this_00), cVar1 != '\0')))) {
    Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1a8),this_00,0x65);
    Zombie::SetExtraConditionTracker(*(undefined4 *)(this + 0x1ac),this_00,0x65);
    pZVar3._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar3._0_4_,0x3f000000,this_00,0x65,1);
    (**(code **)(*(long *)this + 0x168))(this,this_00);
    return 1;
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSquidProjectile::OnCollideGround() */

void __thiscall ArtifactSquidProjectile::OnCollideGround(ArtifactSquidProjectile *this)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BoardTransforms *this_00;
  long lVar7;
  undefined8 *puVar8;
  Zombie *this_01;
  int in_w4;
  Zombie *pZVar9;
  undefined8 local_50;
  FastCurve aFStack_48 [4];
  float local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  int local_24;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_50,-1,-1);
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  local_50 = local_20[0];
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_50);
  if (((cVar1 == '\0') &&
      (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_50), cVar1 == '\0')) &&
     (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_50), cVar1 == '\0'
     )) {
    lVar7 = Projectile::getProps((Projectile *)this);
    Sexy::FastCurve::SetOutRange(aFStack_48,*(float *)this_00,*(float *)(this_00 + 4));
    iVar4 = FUN_03723ae0(*(undefined4 *)(this + 0xa8));
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,iVar4,1,1,in_w4);
    local_44 = (float)(local_2c + local_24 / 2);
    iVar4 = (int)*(float *)(lVar7 + 0x60) / 2;
    iVar5 = FUN_03723ae0(*(undefined4 *)(this + 0xa8));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar6 * SQRT(*(float *)(lVar7 + 0x60)),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,2,
               aFStack_48,iVar5 - iVar4,iVar4 + iVar5);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
      if (((((this_01 != (Zombie *)0x0) &&
            (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(), cVar1 == '\0')) &&
           ((cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 == '\0' &&
            (cVar1 = IsValidTarget(this_01), cVar1 != '\0')))) &&
          ((iVar4 = Zombie::GetSizeType(this_01), iVar4 != 2 || (0.0 < *(float *)(this + 0x1ac)))))
         && ((cVar1 = FUN_0373c274(*(undefined4 *)(this_01 + 0x28)), cVar1 == '\0' &&
             (((cVar1 = Zombie::HasCondition(this_01,0x5a), cVar1 == '\0' &&
               (cVar1 = Zombie::HasCondition(this_01,0x65), cVar1 == '\0')) &&
              (cVar1 = Zombie::IsTargetable(this_01), cVar1 != '\0')))))) {
        Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1a8),this_01,0x65);
        Zombie::SetExtraConditionTracker(*(undefined4 *)(this + 0x1ac),this_01,0x65);
        pZVar9 = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar9,0x3f000000,this_01,0x65,1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    uVar3 = Projectile::OnCollideGround((Projectile *)this);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
  }
  else {
    uVar3 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


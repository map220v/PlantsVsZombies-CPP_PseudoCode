// Class: BurdockBatterFallProjectile


/* BurdockBatterFallProjectile::~BurdockBatterFallProjectile() */

void __thiscall
BurdockBatterFallProjectile::~BurdockBatterFallProjectile(BurdockBatterFallProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0666df10;
  *(undefined ***)(this + 0x10) = &PTR__BurdockBatterFallProjectile_0666e100;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BurdockBatterFallProjectile::~BurdockBatterFallProjectile() */

void __thiscall
BurdockBatterFallProjectile::~BurdockBatterFallProjectile(BurdockBatterFallProjectile *this)

{
  ~BurdockBatterFallProjectile(this + -0x10);
  return;
}


/* BurdockBatterFallProjectile::~BurdockBatterFallProjectile() */

void __thiscall
BurdockBatterFallProjectile::~BurdockBatterFallProjectile(BurdockBatterFallProjectile *this)

{
  ~BurdockBatterFallProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BurdockBatterFallProjectile::~BurdockBatterFallProjectile() */

void __thiscall
BurdockBatterFallProjectile::~BurdockBatterFallProjectile(BurdockBatterFallProjectile *this)

{
  ~BurdockBatterFallProjectile(this + -0x10);
  return;
}


/* BurdockBatterFallProjectile::onProjectileInitialized() */

void __thiscall
BurdockBatterFallProjectile::onProjectileInitialized(BurdockBatterFallProjectile *this)

{
  Projectile::SetShadow((Projectile *)this,false);
  FUN_03635b40(this + 0x24,1);
  return;
}


/* BurdockBatterFallProjectile::BurdockBatterFallProjectile() */

void __thiscall
BurdockBatterFallProjectile::BurdockBatterFallProjectile(BurdockBatterFallProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0666df10;
  *(undefined ***)(this + 0x10) = &PTR__BurdockBatterFallProjectile_0666e100;
  return;
}


/* BurdockBatterFallProjectile::StaticNew() */

BurdockBatterFallProjectile * BurdockBatterFallProjectile::StaticNew(void)

{
  BurdockBatterFallProjectile *this;
  
  this = ::operator_new(0x1a8);
  BurdockBatterFallProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatterFallProjectile::StaticClassInit() */

void BurdockBatterFallProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BurdockBatterFallProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0363699c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BurdockBatterFallProjectile::StaticGetClass() */

long * BurdockBatterFallProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BurdockBatterFallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BurdockBatterFallProjectile::GetClass() const */

long * BurdockBatterFallProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BurdockBatterFallProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatterFallProjectile::doFallDamage() */

void __thiscall BurdockBatterFallProjectile::doFallDamage(BurdockBatterFallProjectile *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  GridItem *this_00;
  RtObject *this_01;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar2 = operator|(2,4);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  uVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar5);
  uVar4 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar5[1]);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,uVar2,uVar3,uVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_01 = (RtObject *)*puVar6;
    this_00 = Sexy::RtObject::Cast<GridItem>(this_01);
    if ((this_00 == (GridItem *)0x0) ||
       (bVar1 = Sexy::RtObject::IsA<GridItemLilyPad>((RtObject *)this_00), !bVar1)) {
      (**(code **)(*(long *)this + 0x1b0))(this,this_01);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BurdockBatterFallProjectile::OnCollideGround() */

void __thiscall BurdockBatterFallProjectile::OnCollideGround(BurdockBatterFallProjectile *this)

{
  doFallDamage(this);
  Projectile::OnCollideGround((Projectile *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BurdockBatterFallProjectile::fall() */

void __thiscall BurdockBatterFallProjectile::fall(BurdockBatterFallProjectile *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  Zombie *this_00;
  SexyVector3 *pSVar13;
  float fVar14;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined8 local_50;
  float local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_60);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)avStack_20);
  Sexy::Point::Point((Point *)local_40,0,2);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)local_30,(Point *)local_40);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar10,uVar11,(DVec3 *)local_30);
  local_40[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_40,(__normal_iterator *)local_30),
        bVar1) {
    puVar12 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_40);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar12);
    if (this_00 != (Zombie *)0x0) {
      uVar3 = operator|(1,8);
      cVar2 = Zombie::MatchesAny(this_00,uVar3);
      if ((cVar2 == '\0') && (cVar2 = RealObject::IsOnOpposingTeam(this_00,1), cVar2 != '\0'))
      goto LAB_0363c160;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,4);
  local_40[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_40,(__normal_iterator *)local_30),
        bVar1) {
    puVar12 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_40);
    this_00 = (Zombie *)Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar12);
    if ((this_00 != (Zombie *)0x0) &&
       (cVar2 = (**(code **)(*(long *)this_00 + 0x200))(), cVar2 != '\0')) goto LAB_0363c160;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_40);
  }
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  fVar14 = (float)((iVar4 * iVar5) / 2 + 200);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar7 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar8 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar9 = BoardConstants::NUMBER_OF_ROWS();
  local_60 = (float)Sexy::Rand((float)((iVar4 * iVar5 + 200) - iVar6 / 2) - fVar14);
  local_60 = fVar14 + local_60;
  local_5c = (float)Sexy::Rand((float)(iVar8 * (iVar9 + -1)));
  local_58 = 0;
  local_5c = (float)(iVar7 / 2 + 0xa0) + local_5c;
LAB_0363c174:
  puVar12 = (undefined8 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  local_50 = *puVar12;
  local_48 = *(float *)(puVar12 + 1);
  fVar14 = (float)Sexy::Rand(0.5);
  DVec3::DVec3((DVec3 *)local_40);
  DVec3::DVec3((DVec3 *)local_30);
  CalculateTossVelocity
            ((SexyVector3 *)&local_50,(SexyVector3 *)&local_60,local_48,fVar14 + 1.5,
             (SexyVector3 *)local_40,(SexyVector3 *)local_30);
  Projectile::SetShadow((Projectile *)this,true);
  Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)local_40);
  Projectile::SetAcceleration((Projectile *)this,(SexyVector3 *)local_30);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0363c160:
  pSVar13 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this_00);
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_60,pSVar13);
  goto LAB_0363c174;
}


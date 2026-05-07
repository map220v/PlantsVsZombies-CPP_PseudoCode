// Class: ThrowCoalProjectile


/* ThrowCoalProjectile::~ThrowCoalProjectile() */

void __thiscall ThrowCoalProjectile::~ThrowCoalProjectile(ThrowCoalProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06753030;
  *(undefined ***)(this + 0x10) = &PTR__ThrowCoalProjectile_06753220;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ThrowCoalProjectile::~ThrowCoalProjectile() */

void __thiscall ThrowCoalProjectile::~ThrowCoalProjectile(ThrowCoalProjectile *this)

{
  ~ThrowCoalProjectile(this + -0x10);
  return;
}


/* ThrowCoalProjectile::~ThrowCoalProjectile() */

void __thiscall ThrowCoalProjectile::~ThrowCoalProjectile(ThrowCoalProjectile *this)

{
  ~ThrowCoalProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ThrowCoalProjectile::~ThrowCoalProjectile() */

void __thiscall ThrowCoalProjectile::~ThrowCoalProjectile(ThrowCoalProjectile *this)

{
  ~ThrowCoalProjectile(this + -0x10);
  return;
}


/* ThrowCoalProjectile::ThrowCoalProjectile() */

void __thiscall ThrowCoalProjectile::ThrowCoalProjectile(ThrowCoalProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06753030;
  *(undefined ***)(this + 0x10) = &PTR__ThrowCoalProjectile_06753220;
  return;
}


/* ThrowCoalProjectile::StaticNew() */

ThrowCoalProjectile * ThrowCoalProjectile::StaticNew(void)

{
  ThrowCoalProjectile *this;
  
  this = ::operator_new(0x1a8);
  ThrowCoalProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThrowCoalProjectile::StaticClassInit() */

void ThrowCoalProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThrowCoalProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c42f80,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThrowCoalProjectile::StaticGetClass() */

long * ThrowCoalProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ThrowCoalProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThrowCoalProjectile::GetClass() const */

long * ThrowCoalProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ThrowCoalProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThrowCoalProjectile::spawnCoals(int, int) */

void __thiscall ThrowCoalProjectile::spawnCoals(ThrowCoalProjectile *this,int param_1,int param_2)

{
  int iVar1;
  GridItemCoalSteam *this_00;
  RtObject *this_01;
  GridItemCoalSteamZomboss *this_02;
  Board *this_03;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((-1 < param_1) && (iVar1 = BoardConstants::NUMBER_OF_COLUMNS(), param_1 < iVar1)) &&
      (-1 < param_2)) && (iVar1 = BoardConstants::NUMBER_OF_ROWS(), param_2 < iVar1)) {
    this_00 = (GridItemCoalSteam *)FUN_03c48e90(param_1,param_2);
    if (this_00 == (GridItemCoalSteam *)0x0) {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"coal_steam_zomboss");
      this_01 = (RtObject *)Board::AddGridItem(this_03,asStack_10,param_1,param_2,1);
      this_02 = Sexy::RtObject::Cast<GridItemCoalSteamZomboss>(this_01);
      std::string::~string(asStack_10);
      nop();
      FUN_03c3ef3c(this_02 + 0x24);
      GridItemCoalSteam::SetBirth((GridItemCoalSteam *)this_02);
    }
    else {
      GridItemCoalSteam::ResetTimer(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThrowCoalProjectile::OnCollideGround() */

void __thiscall ThrowCoalProjectile::OnCollideGround(ThrowCoalProjectile *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  long *extraout_x0;
  undefined8 uVar6;
  code *pcVar7;
  FastCurve aFStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange(aFStack_a8,*pfVar5,pfVar5[1]);
  iVar2 = BoardTransforms::BoardSpaceToGridX(*pfVar5);
  iVar3 = BoardTransforms::BoardSpaceToGridY(pfVar5[1]);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesAtGridSquare(avStack_80,1,iVar2,iVar3);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    nop();
    if ((extraout_x0 != (long *)0x0) && (0.0 < *(float *)(extraout_x0 + 0x1b))) {
      pcVar7 = *(code **)(*extraout_x0 + 0x120);
      uVar6 = Projectile::GetInstigator((Projectile *)this);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,2,uVar6,aPStack_90,0);
      (*pcVar7)(extraout_x0,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  spawnCoals(this,iVar2,iVar3);
  uVar4 = Projectile::OnCollideGround((Projectile *)this);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


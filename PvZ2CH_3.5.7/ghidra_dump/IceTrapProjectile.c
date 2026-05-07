// Class: IceTrapProjectile


/* IceTrapProjectile::~IceTrapProjectile() */

void __thiscall IceTrapProjectile::~IceTrapProjectile(IceTrapProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067ac860;
  *(undefined ***)(this + 0x10) = &PTR__IceTrapProjectile_067aca50;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to IceTrapProjectile::~IceTrapProjectile() */

void __thiscall IceTrapProjectile::~IceTrapProjectile(IceTrapProjectile *this)

{
  ~IceTrapProjectile(this + -0x10);
  return;
}


/* IceTrapProjectile::~IceTrapProjectile() */

void __thiscall IceTrapProjectile::~IceTrapProjectile(IceTrapProjectile *this)

{
  ~IceTrapProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to IceTrapProjectile::~IceTrapProjectile() */

void __thiscall IceTrapProjectile::~IceTrapProjectile(IceTrapProjectile *this)

{
  ~IceTrapProjectile(this + -0x10);
  return;
}


/* IceTrapProjectile::IceTrapProjectile() */

void __thiscall IceTrapProjectile::IceTrapProjectile(IceTrapProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067ac860;
  *(undefined ***)(this + 0x10) = &PTR__IceTrapProjectile_067aca50;
  return;
}


/* IceTrapProjectile::StaticNew() */

IceTrapProjectile * IceTrapProjectile::StaticNew(void)

{
  IceTrapProjectile *this;
  
  this = ::operator_new(0x1a8);
  IceTrapProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceTrapProjectile::StaticClassInit() */

void IceTrapProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"IceTrapProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03fc8430,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IceTrapProjectile::StaticGetClass() */

long * IceTrapProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IceTrapProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IceTrapProjectile::GetClass() const */

long * IceTrapProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"IceTrapProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IceTrapProjectile::SpawnIceTrap(Sexy::Point const&) */

void __thiscall IceTrapProjectile::SpawnIceTrap(IceTrapProjectile *this,Point *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  RtObject *pRVar4;
  IceTrapProjectileProps *pIVar5;
  long lVar6;
  GridItemIceTrap *pGVar7;
  
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_1);
  if (((cVar1 == '\0') &&
      (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) &&
     (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) {
    pRVar4 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pIVar5 = Sexy::RtObject::Cast<IceTrapProjectileProps>(pRVar4);
    iVar2 = FUN_03fc6224(*(undefined4 *)(this + 0x70));
    if (((*(int *)param_1 != -1) && (*(int *)(param_1 + 4) != -1)) &&
       (lVar6 = FUN_03fcb464(), lVar6 == 0)) {
      pGVar7 = (GridItemIceTrap *)FUN_03fcb548(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
      lVar6 = FUN_03fcb62c(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
      if (pGVar7 != (GridItemIceTrap *)0x0) {
        GridItemIceTrap::ResetTimer(pGVar7);
        return;
      }
      if (lVar6 == 0) {
        pRVar4 = (RtObject *)
                 Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pIVar5 + 0x1e0),
                                    *(int *)param_1,*(int *)(param_1 + 4),iVar2);
        pGVar7 = Sexy::RtObject::Cast<GridItemIceTrap>(pRVar4);
        uVar3 = FUN_02fd3e8c(*(undefined4 *)(this + 0x24));
        FUN_03fc6208(pGVar7 + 0x24,uVar3);
        GridItemIceTrap::SetResetting(pGVar7);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceTrapProjectile::handleImpact(BoardEntity*) */

void __thiscall IceTrapProjectile::handleImpact(IceTrapProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *extraout_x0;
  undefined8 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  Plant *pPVar8;
  RtObject *this_00;
  code *pcVar9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  ulong local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_a8,-1,-1);
  if (param_1 == (BoardEntity *)0x0) {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    BoardTransforms::BoardSpaceToGrid((BoardTransforms *)&local_88,*pfVar6,pfVar6[1]);
    local_a8 = local_68[0];
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,1,
               local_a8 & 0xffffffff,local_a8._4_4_);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      this_00 = (RtObject *)*puVar7;
      cVar2 = RealObject::IsOnOpposingTeam(this_00,2);
      if (((cVar2 != '\0') && (bVar1 = Sexy::RtObject::IsA<Plant>(this_00), bVar1)) &&
         (pPVar8 = Sexy::RtObject::Cast<Plant>(this_00), pPVar8 != (Plant *)0x0)) {
        pcVar9 = *(code **)(*(long *)pPVar8 + 0x120);
        uVar5 = Projectile::GetInstigator((Projectile *)this);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_88,local_84,(DamageInfo *)local_68,2,uVar5,aPStack_90,0);
        (*pcVar9)(pPVar8,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  else {
    iVar3 = BoardEntity::CalcColumnPosition(param_1);
    iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
    Sexy::Point::Point((Point *)local_68,iVar3,iVar4);
    local_a8 = local_68[0];
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if (((bVar1) && (nop(), extraout_x0 != (long *)0x0)) && (0.0 < *(float *)(extraout_x0 + 0x1b)))
    {
      pcVar9 = *(code **)(*extraout_x0 + 0x120);
      uVar5 = Projectile::GetInstigator((Projectile *)this);
      Sexy::Point::Point((Point *)&local_88,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,local_80,local_7c,(Point *)local_68,2,uVar5,(Point *)&local_88,0)
      ;
      (*pcVar9)(extraout_x0,(Point *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
  }
  SpawnIceTrap(this,(Point *)&local_a8);
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


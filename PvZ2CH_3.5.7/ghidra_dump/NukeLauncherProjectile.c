// Class: NukeLauncherProjectile


/* NukeLauncherProjectile::~NukeLauncherProjectile() */

void __thiscall NukeLauncherProjectile::~NukeLauncherProjectile(NukeLauncherProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06816280;
  *(undefined ***)(this + 0x10) = &PTR__NukeLauncherProjectile_06816470;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to NukeLauncherProjectile::~NukeLauncherProjectile() */

void __thiscall NukeLauncherProjectile::~NukeLauncherProjectile(NukeLauncherProjectile *this)

{
  ~NukeLauncherProjectile(this + -0x10);
  return;
}


/* NukeLauncherProjectile::~NukeLauncherProjectile() */

void __thiscall NukeLauncherProjectile::~NukeLauncherProjectile(NukeLauncherProjectile *this)

{
  ~NukeLauncherProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NukeLauncherProjectile::~NukeLauncherProjectile() */

void __thiscall NukeLauncherProjectile::~NukeLauncherProjectile(NukeLauncherProjectile *this)

{
  ~NukeLauncherProjectile(this + -0x10);
  return;
}


/* NukeLauncherProjectile::NukeLauncherProjectile() */

void __thiscall NukeLauncherProjectile::NukeLauncherProjectile(NukeLauncherProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06816280;
  *(undefined ***)(this + 0x10) = &PTR__NukeLauncherProjectile_06816470;
  return;
}


/* NukeLauncherProjectile::StaticNew() */

NukeLauncherProjectile * NukeLauncherProjectile::StaticNew(void)

{
  NukeLauncherProjectile *this;
  
  this = ::operator_new(0x1a8);
  NukeLauncherProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherProjectile::StaticClassInit() */

void NukeLauncherProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"NukeLauncherProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04242eb4,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NukeLauncherProjectile::StaticGetClass() */

long * NukeLauncherProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NukeLauncherProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NukeLauncherProjectile::GetClass() const */

long * NukeLauncherProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"NukeLauncherProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NukeLauncherProjectile::SpawnRadiationPiles(Sexy::Point const&) */

void __thiscall
NukeLauncherProjectile::SpawnRadiationPiles(NukeLauncherProjectile *this,Point *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  RtObject *pRVar6;
  Plant *pPVar7;
  long *extraout_x0;
  GridItemRadiationPile *this_00;
  NukeLauncherProjectileProps *pNVar8;
  
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_1);
  if (((cVar1 == '\0') &&
      (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) &&
     (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) {
    iVar2 = FUN_04241f68(*(undefined4 *)(this + 0x70));
    if (((*(int *)param_1 != -1) && (*(int *)(param_1 + 4) != -1)) &&
       ((lVar5 = FUN_04245cdc(), lVar5 == 0 &&
        (lVar5 = Projectile::GetInstigator((Projectile *)this), lVar5 != 0)))) {
      pRVar6 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
      pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar6);
      if (pPVar7 != (Plant *)0x0) {
        nop();
        uVar3 = (**(code **)(*extraout_x0 + 0x428))();
        this_00 = (GridItemRadiationPile *)
                  FUN_042455c4(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
        lVar5 = FUN_04245dc0(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
        if (this_00 == (GridItemRadiationPile *)0x0) {
          if (lVar5 != 0) {
            return;
          }
          pRVar6 = (RtObject *)Projectile::GetProps((Projectile *)this);
          pNVar8 = Sexy::RtObject::Cast<NukeLauncherProjectileProps>(pRVar6);
          pRVar6 = (RtObject *)
                   Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pNVar8 + 0x1e0),
                                      *(int *)param_1,*(int *)(param_1 + 4),iVar2);
          this_00 = Sexy::RtObject::Cast<GridItemRadiationPile>(pRVar6);
          uVar4 = FUN_04241f50(*(undefined4 *)(this + 0x24));
          FUN_04241f54(this_00 + 0x24,uVar4);
          GridItemPotionPoisonPile::SetIdle((GridItemPotionPoisonPile *)this_00);
        }
        else {
          GridItemRadiationPile::ResetTimer(this_00);
          (**(code **)(*(long *)this_00 + 0x198))(this_00,iVar2);
        }
        FUN_04241fac(this_00 + 0x1b0,uVar3);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherProjectile::GetRadiationArea(std::vector<Sexy::Point, std::allocator<Sexy::Point> >&,
   Sexy::Point const&) */

void __thiscall
NukeLauncherProjectile::GetRadiationArea
          (NukeLauncherProjectile *this,vector *param_1,Point *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04241f68(*(undefined4 *)(this + 0x70));
  if (iVar2 == 5) {
    iVar2 = 0;
    Sexy::Point::Point((Point *)&local_18,*(int *)param_2 + -1,*(int *)(param_2 + 4) + -1);
    do {
      iVar3 = 0;
      do {
        iVar1 = iVar3 + local_18;
        iVar3 = iVar3 + 1;
        Sexy::Point::Point(aPStack_10,iVar1,iVar2 + local_14);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
      } while (iVar3 != 3);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 3);
  }
  else {
    Sexy::Point::Point(aPStack_10,*(int *)param_2,*(int *)(param_2 + 4));
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
    Sexy::Point::Point(aPStack_10,*(int *)param_2 + -1,*(int *)(param_2 + 4));
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
    Sexy::Point::Point(aPStack_10,*(int *)param_2 + 1,*(int *)(param_2 + 4));
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
    Sexy::Point::Point(aPStack_10,*(int *)param_2,*(int *)(param_2 + 4) + 1);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
    Sexy::Point::Point(aPStack_10,*(int *)param_2,*(int *)(param_2 + 4) + -1);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherProjectile::CreateRadiation(Sexy::Point const&) */

void __thiscall NukeLauncherProjectile::CreateRadiation(NukeLauncherProjectile *this,Point *param_1)

{
  undefined8 uVar1;
  Point *pPVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  GetRadiationArea(this,(vector *)&local_20,param_1);
  uVar4 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar3 = FUN_04242018(local_20,local_18);
    if (uVar3 <= uVar4) break;
    pPVar2 = (Point *)FUN_04242024(uVar1,uVar4);
    SpawnRadiationPiles(this,pPVar2);
    uVar4 = uVar4 + 1;
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherProjectile::handleImpact(BoardEntity*) */

void __thiscall
NukeLauncherProjectile::handleImpact(NukeLauncherProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  BoardTransforms *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_18,-1,-1);
  if (param_1 == (BoardEntity *)0x0) {
    this_00 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
    local_18 = local_10;
  }
  else {
    iVar1 = BoardEntity::CalcColumnPosition(param_1);
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    Sexy::Point::Point((Point *)&local_10,iVar1,iVar2);
    local_18 = local_10;
  }
  CreateRadiation(this,(Point *)&local_18);
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


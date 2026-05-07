// Class: NukeLauncherPlantfoodProjectile


/* NukeLauncherPlantfoodProjectile::~NukeLauncherPlantfoodProjectile() */

void __thiscall
NukeLauncherPlantfoodProjectile::~NukeLauncherPlantfoodProjectile
          (NukeLauncherPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068164a0;
  *(undefined ***)(this + 0x10) = &PTR__NukeLauncherPlantfoodProjectile_06816698;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to NukeLauncherPlantfoodProjectile::~NukeLauncherPlantfoodProjectile() */

void __thiscall
NukeLauncherPlantfoodProjectile::~NukeLauncherPlantfoodProjectile
          (NukeLauncherPlantfoodProjectile *this)

{
  ~NukeLauncherPlantfoodProjectile(this + -0x10);
  return;
}


/* NukeLauncherPlantfoodProjectile::~NukeLauncherPlantfoodProjectile() */

void __thiscall
NukeLauncherPlantfoodProjectile::~NukeLauncherPlantfoodProjectile
          (NukeLauncherPlantfoodProjectile *this)

{
  ~NukeLauncherPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NukeLauncherPlantfoodProjectile::~NukeLauncherPlantfoodProjectile() */

void __thiscall
NukeLauncherPlantfoodProjectile::~NukeLauncherPlantfoodProjectile
          (NukeLauncherPlantfoodProjectile *this)

{
  ~NukeLauncherPlantfoodProjectile(this + -0x10);
  return;
}


/* NukeLauncherPlantfoodProjectile::NukeLauncherPlantfoodProjectile() */

void __thiscall
NukeLauncherPlantfoodProjectile::NukeLauncherPlantfoodProjectile
          (NukeLauncherPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068164a0;
  *(undefined ***)(this + 0x10) = &PTR__NukeLauncherPlantfoodProjectile_06816698;
  return;
}


/* NukeLauncherPlantfoodProjectile::StaticNew() */

NukeLauncherPlantfoodProjectile * NukeLauncherPlantfoodProjectile::StaticNew(void)

{
  NukeLauncherPlantfoodProjectile *this;
  
  this = ::operator_new(0x1a8);
  NukeLauncherPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherPlantfoodProjectile::StaticClassInit() */

void NukeLauncherPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"NukeLauncherPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0424312c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NukeLauncherPlantfoodProjectile::StaticGetClass() */

long * NukeLauncherPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NukeLauncherPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NukeLauncherPlantfoodProjectile::GetClass() const */

long * NukeLauncherPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"NukeLauncherPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NukeLauncherPlantfoodProjectile::handleImpact(BoardEntity*) */

void NukeLauncherPlantfoodProjectile::handleImpact(BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  RtObject *this;
  Plant *pPVar8;
  long *extraout_x0;
  float *pfVar9;
  undefined8 *puVar10;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  NukeLauncherSubSystem *this_02;
  BoardTransforms *this_03;
  BoardEntity *in_x1;
  int in_w4;
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
  Projectile::handleImpact((Projectile *)param_1,in_x1);
  lVar7 = Projectile::GetInstigator((Projectile *)param_1);
  if (lVar7 != 0) {
    this = (RtObject *)Projectile::GetInstigator((Projectile *)param_1);
    pPVar8 = Sexy::RtObject::Cast<Plant>(this);
    if (pPVar8 != (Plant *)0x0) {
      nop();
      iVar3 = (**(code **)(*extraout_x0 + 0x428))();
      Sexy::Point::Point((Point *)&local_50,-1,-1);
      if (in_x1 == (BoardEntity *)0x0) {
        this_03 = (BoardTransforms *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)param_1);
        BoardTransforms::BoardSpaceToGrid(this_03,*(float *)this_03,*(float *)(this_03 + 4));
        local_50 = local_20[0];
      }
      else {
        iVar4 = BoardEntity::CalcColumnPosition(in_x1);
        iVar5 = SharkMinion::getRow((SharkMinion *)in_x1);
        Sexy::Point::Point((Point *)local_20,iVar4,iVar5);
        local_50 = local_20[0];
      }
      cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_50);
      if ((cVar1 == '\0') &&
         (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_50), cVar1 == '\0')) {
        cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_50);
        if (cVar1 == '\0') {
          lVar7 = Projectile::getProps((Projectile *)param_1);
          pfVar9 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)param_1);
          Sexy::FastCurve::SetOutRange(aFStack_48,*pfVar9,pfVar9[1]);
          iVar4 = FUN_04241f64(*(undefined4 *)(param_1 + 0xa8));
          BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,iVar4,1,1,in_w4);
          local_44 = (float)(local_2c + local_24 / 2);
          iVar4 = (int)*(float *)(lVar7 + 0x60) / 2;
          iVar5 = FUN_04241f64(*(undefined4 *)(param_1 + 0xa8));
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
                                   ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
                bVar2) {
            puVar10 = (undefined8 *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
            if (((((this_00 != (Zombie *)0x0) &&
                  (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 == '\0')) &&
                 (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar2)) &&
                (((bVar2 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)this_00), !bVar2 &&
                  (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar2)) &&
                 ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0' &&
                  ((cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0' &&
                   (bVar2 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)this_00), !bVar2)))))
                 ))) && ((bVar2 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)this_00),
                         !bVar2 && (((((bVar2 = Sexy::RtObject::IsA<ZombieMagicBronze>
                                                          ((RtObject *)this_00), !bVar2 &&
                                       (bVar2 = Sexy::RtObject::IsA<ZombieLionDance>
                                                          ((RtObject *)this_00), !bVar2)) &&
                                      (bVar2 = Sexy::RtObject::IsA<ZombieWealthGod>
                                                         ((RtObject *)this_00), !bVar2)) &&
                                     ((bVar2 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>
                                                         ((RtObject *)this_00), !bVar2 &&
                                      (bVar2 = Sexy::RtObject::IsA<ZombieInvisiblePlane>
                                                         ((RtObject *)this_00), !bVar2)))) &&
                                    (bVar2 = Sexy::RtObject::IsA<ZombiePirateCannon>
                                                       ((RtObject *)this_00), !bVar2)))))) {
              this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
              lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
              bVar2 = std::operator==((string *)(lVar7 + 8),"radiated_small");
              if (!bVar2) {
                lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
                bVar2 = std::operator==((string *)(lVar7 + 8),"radiated_mid");
                if (!bVar2) {
                  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
                  bVar2 = std::operator==((string *)(lVar7 + 8),"radiated_large");
                  if (((!bVar2) &&
                      (cVar1 = FUN_042439ac(*(undefined4 *)(this_00 + 0x28)), cVar1 == '\0')) &&
                     ((cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0' &&
                      (((cVar1 = Zombie::HasFogImmune(this_00), cVar1 == '\0' &&
                        (cVar1 = Zombie::IsBerserk(this_00), cVar1 == '\0')) &&
                       (cVar1 = Zombie::HasCondition(this_00,0x58), cVar1 == '\0')))))) {
                    this_02 = Board::GetGameSubSystem<NukeLauncherSubSystem>
                                        (*(Board **)(gLawnApp + 0x9f0));
                    iVar4 = FUN_04241f68(*(undefined4 *)(param_1 + 0x70));
                    bVar2 = (bool)(**(code **)(*(long *)param_1 + 0x1e0))(param_1);
                    NukeLauncherSubSystem::tryTransform(this_02,this_00,iVar4,iVar3,bVar2);
                  }
                }
              }
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
          }
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


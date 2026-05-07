// Class: PomegranateJewelerAbsorbProjectile


/* PomegranateJewelerAbsorbProjectile::~PomegranateJewelerAbsorbProjectile() */

void __thiscall
PomegranateJewelerAbsorbProjectile::~PomegranateJewelerAbsorbProjectile
          (PomegranateJewelerAbsorbProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699dd40;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerAbsorbProjectile_0699df30;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PomegranateJewelerAbsorbProjectile::~PomegranateJewelerAbsorbProjectile() */

void __thiscall
PomegranateJewelerAbsorbProjectile::~PomegranateJewelerAbsorbProjectile
          (PomegranateJewelerAbsorbProjectile *this)

{
  ~PomegranateJewelerAbsorbProjectile(this + -0x10);
  return;
}


/* PomegranateJewelerAbsorbProjectile::~PomegranateJewelerAbsorbProjectile() */

void __thiscall
PomegranateJewelerAbsorbProjectile::~PomegranateJewelerAbsorbProjectile
          (PomegranateJewelerAbsorbProjectile *this)

{
  ~PomegranateJewelerAbsorbProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PomegranateJewelerAbsorbProjectile::~PomegranateJewelerAbsorbProjectile() */

void __thiscall
PomegranateJewelerAbsorbProjectile::~PomegranateJewelerAbsorbProjectile
          (PomegranateJewelerAbsorbProjectile *this)

{
  ~PomegranateJewelerAbsorbProjectile(this + -0x10);
  return;
}


/* PomegranateJewelerAbsorbProjectile::PomegranateJewelerAbsorbProjectile() */

void __thiscall
PomegranateJewelerAbsorbProjectile::PomegranateJewelerAbsorbProjectile
          (PomegranateJewelerAbsorbProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 6;
  *(undefined ***)this = &PTR_GetClass_0699dd40;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerAbsorbProjectile_0699df30;
  return;
}


/* PomegranateJewelerAbsorbProjectile::StaticNew() */

PomegranateJewelerAbsorbProjectile * PomegranateJewelerAbsorbProjectile::StaticNew(void)

{
  PomegranateJewelerAbsorbProjectile *this;
  
  this = ::operator_new(0x1b0);
  PomegranateJewelerAbsorbProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerAbsorbProjectile::StaticClassInit() */

void PomegranateJewelerAbsorbProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PomegranateJewelerAbsorbProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cce7e8,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PomegranateJewelerAbsorbProjectile::StaticGetClass() */

long * PomegranateJewelerAbsorbProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PomegranateJewelerAbsorbProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PomegranateJewelerAbsorbProjectile::GetClass() const */

long * PomegranateJewelerAbsorbProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PomegranateJewelerAbsorbProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerAbsorbProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void PomegranateJewelerAbsorbProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  char cVar1;
  long lVar2;
  Plant *this;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::fillDamageInfo(param_1,param_2);
  lVar2 = Projectile::GetInstigator((Projectile *)param_1);
  if (lVar2 != 0) {
    Projectile::GetInstigator((Projectile *)param_1);
    nop();
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (*(code **)(*(long *)this + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(this);
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0x1f8))();
    }
    if (cVar1 != '\0') {
      *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * *(float *)(extraout_x0 + 0x2d0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerAbsorbProjectile::AbsorbZombies(Sexy::Point) */

void __thiscall
PomegranateJewelerAbsorbProjectile::AbsorbZombies
          (PomegranateJewelerAbsorbProjectile *this,BoardTransforms *param_2)

{
  bool bVar1;
  char cVar2;
  ZombieTosserSubSystem *pZVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  float *pfVar5;
  Point *extraout_x1;
  undefined8 local_f0;
  undefined8 local_e8;
  Insets aIStack_e0 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d0 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  TitleStatus aTStack_70 [4];
  int local_6c;
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d0);
  Sexy::Insets::Insets(aIStack_e0,*(int *)param_2,*(int *)(param_2 + 4) + -1,2,3);
  EntityFinder::GetEntitiesInGridSquares(avStack_d0,2,aIStack_e0);
  BoardTransforms::GridToBoardSpaceUnbounded(param_2,extraout_x1);
  local_f0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_d0);
  local_e8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_d0);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_f0,(__normal_iterator *)&local_e8), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f0);
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)*puVar4,(RealObject *)this);
    if (cVar2 != '\0') {
      nop();
      cVar2 = Zombie::IsOnGround(this_00);
      if ((((cVar2 != '\0') && (bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar1))
          && (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar1)) &&
         ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))) {
        Zombie::GetCurrentTitleStatus();
        if (((local_58 == '\0') &&
            ((cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0' &&
             (cVar2 = Zombie::IsBerserk(this_00), cVar2 == '\0')))) &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) {
          cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00);
          TitleStatus::~TitleStatus(aTStack_70);
          if (cVar2 == '\0') {
            pfVar5 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this_00);
            EATextSquish::Vec3::Vec3((Vec3 *)aTStack_70,*pfVar5,(float)local_6c,pfVar5[2]);
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x41200000,0x3f800000,pZVar3,this_00,aTStack_70,
                       aRStack_b8,1);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_b8);
          }
        }
        else {
          TitleStatus::~TitleStatus(aTStack_70);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerAbsorbProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PomegranateJewelerAbsorbProjectile::OnCollideEntity
          (PomegranateJewelerAbsorbProjectile *this,BoardEntity *param_1)

{
  undefined1 auVar1 [16];
  TPoint aTStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar1 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  BoardTransforms::BoardSpaceToGridUnbounded(auVar1._0_8_,auVar1._8_8_);
  Sexy::Point::Point(aPStack_10,aTStack_18);
  AbsorbZombies(this,aPStack_10);
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


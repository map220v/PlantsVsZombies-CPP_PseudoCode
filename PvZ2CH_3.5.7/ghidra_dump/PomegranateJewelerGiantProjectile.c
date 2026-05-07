// Class: PomegranateJewelerGiantProjectile


/* PomegranateJewelerGiantProjectile::~PomegranateJewelerGiantProjectile() */

void __thiscall
PomegranateJewelerGiantProjectile::~PomegranateJewelerGiantProjectile
          (PomegranateJewelerGiantProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699db20;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerGiantProjectile_0699dd10;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PomegranateJewelerGiantProjectile::~PomegranateJewelerGiantProjectile() */

void __thiscall
PomegranateJewelerGiantProjectile::~PomegranateJewelerGiantProjectile
          (PomegranateJewelerGiantProjectile *this)

{
  ~PomegranateJewelerGiantProjectile(this + -0x10);
  return;
}


/* PomegranateJewelerGiantProjectile::~PomegranateJewelerGiantProjectile() */

void __thiscall
PomegranateJewelerGiantProjectile::~PomegranateJewelerGiantProjectile
          (PomegranateJewelerGiantProjectile *this)

{
  ~PomegranateJewelerGiantProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PomegranateJewelerGiantProjectile::~PomegranateJewelerGiantProjectile() */

void __thiscall
PomegranateJewelerGiantProjectile::~PomegranateJewelerGiantProjectile
          (PomegranateJewelerGiantProjectile *this)

{
  ~PomegranateJewelerGiantProjectile(this + -0x10);
  return;
}


/* PomegranateJewelerGiantProjectile::PomegranateJewelerGiantProjectile() */

void __thiscall
PomegranateJewelerGiantProjectile::PomegranateJewelerGiantProjectile
          (PomegranateJewelerGiantProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 5;
  *(undefined ***)this = &PTR_GetClass_0699db20;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerGiantProjectile_0699dd10;
  return;
}


/* PomegranateJewelerGiantProjectile::StaticNew() */

PomegranateJewelerGiantProjectile * PomegranateJewelerGiantProjectile::StaticNew(void)

{
  PomegranateJewelerGiantProjectile *this;
  
  this = ::operator_new(0x1b0);
  PomegranateJewelerGiantProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerGiantProjectile::StaticClassInit() */

void PomegranateJewelerGiantProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PomegranateJewelerGiantProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cce444,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PomegranateJewelerGiantProjectile::StaticGetClass() */

long * PomegranateJewelerGiantProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PomegranateJewelerGiantProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PomegranateJewelerGiantProjectile::GetClass() const */

long * PomegranateJewelerGiantProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PomegranateJewelerGiantProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PomegranateJewelerGiantProjectile::CheckFatalDamage(Zombie*) */

bool __thiscall
PomegranateJewelerGiantProjectile::CheckFatalDamage
          (PomegranateJewelerGiantProjectile *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  
  if ((((param_1 != (Zombie *)0x0) &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) &&
     ((cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 != '\0' &&
      (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_1), cVar1 != '\0'
      )))) {
    iVar2 = Zombie::GetSizeType(param_1);
    if (iVar2 == 1) {
      return (bool)cVar1;
    }
    iVar2 = Zombie::GetSizeType(param_1);
    return iVar2 == 0;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerGiantProjectile::InitialSetPosition(float, float, float) */

void __thiscall
PomegranateJewelerGiantProjectile::InitialSetPosition
          (PomegranateJewelerGiantProjectile *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::InitialSetPosition((Projectile *)this,param_1,param_2,param_3);
  Projectile::GetInstigator((Projectile *)this);
  nop();
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(int *)(this + 0x1ac) = (int)*(float *)(extraout_x0 + 0x2c8);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerGiantProjectile::FatalKill(Sexy::Point) */

void __thiscall
PomegranateJewelerGiantProjectile::FatalKill
          (PomegranateJewelerGiantProjectile *this,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  Zombie *this_00;
  BoardEntity *pBVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,*param_2,param_2[1]);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while ((bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1
         && (std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30), iVar4 != 2)))
  {
    nop();
    cVar2 = CheckFatalDamage(this,this_00);
    if (cVar2 != '\0') {
      iVar4 = iVar4 + 1;
      pBVar3 = (BoardEntity *)Projectile::GetInstigator((Projectile *)this);
      Zombie::TakeFatalDamage(this_00,pBVar3);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerGiantProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PomegranateJewelerGiantProjectile::OnCollideEntity
          (PomegranateJewelerGiantProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  BoardTransforms *this_01;
  long lVar4;
  RealObject *extraout_x0;
  string asStack_b8 [8];
  string asStack_b0 [8];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  Insets aIStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  Point aPStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_b8,"POPANIM_EFFECTS_POMEGRANATEJEWELER_HIT_GIANT");
  nop();
  std::string::string(asStack_b0,"idle");
  nop();
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    nop();
    this_01 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
    BoardTransforms::BoardSpaceToGrid(this_01,*(float *)this_01,*(float *)(this_01 + 4));
    Sexy::Point::Point(aPStack_68,(TPoint *)&local_a8);
    FatalKill(this,aPStack_68);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    Sexy::Insets::Insets(aIStack_90,local_a8 + -1,local_a4 + -1,3,3);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,2,
               aIStack_90);
    lVar4 = FUN_04ccda60(local_80,local_78);
    if (lVar4 != 0) {
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_80);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98),
            bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        nop();
        cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,extraout_x0);
        if (cVar2 != '\0') {
          DamageInfo::DamageInfo((DamageInfo *)aPStack_68);
          local_60 = Projectile::GetDamageAmount((Projectile *)this);
          (**(code **)(*(long *)extraout_x0 + 0x110))(extraout_x0,aPStack_68);
          Zombie::ApplyCondition((Zombie *)(float)*(int *)(this + 0x1ac),0,extraout_x0,2,1);
          DamageInfo::~DamageInfo((DamageInfo *)aPStack_68);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// Class: BoomFlowerAvatarProjectile


/* BoomFlowerAvatarProjectile::~BoomFlowerAvatarProjectile() */

void __thiscall
BoomFlowerAvatarProjectile::~BoomFlowerAvatarProjectile(BoomFlowerAvatarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067e7a70;
  *(undefined ***)(this + 0x10) = &PTR__BoomFlowerAvatarProjectile_067e7c60;
  BoomFlowerPlantfoodProjectile::~BoomFlowerPlantfoodProjectile
            ((BoomFlowerPlantfoodProjectile *)this);
  return;
}


/* non-virtual thunk to BoomFlowerAvatarProjectile::~BoomFlowerAvatarProjectile() */

void __thiscall
BoomFlowerAvatarProjectile::~BoomFlowerAvatarProjectile(BoomFlowerAvatarProjectile *this)

{
  ~BoomFlowerAvatarProjectile(this + -0x10);
  return;
}


/* BoomFlowerAvatarProjectile::~BoomFlowerAvatarProjectile() */

void __thiscall
BoomFlowerAvatarProjectile::~BoomFlowerAvatarProjectile(BoomFlowerAvatarProjectile *this)

{
  ~BoomFlowerAvatarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoomFlowerAvatarProjectile::~BoomFlowerAvatarProjectile() */

void __thiscall
BoomFlowerAvatarProjectile::~BoomFlowerAvatarProjectile(BoomFlowerAvatarProjectile *this)

{
  ~BoomFlowerAvatarProjectile(this + -0x10);
  return;
}


/* BoomFlowerAvatarProjectile::BoomFlowerAvatarProjectile() */

void __thiscall
BoomFlowerAvatarProjectile::BoomFlowerAvatarProjectile(BoomFlowerAvatarProjectile *this)

{
  BoomFlowerPlantfoodProjectile::BoomFlowerPlantfoodProjectile
            ((BoomFlowerPlantfoodProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_067e7a70;
  *(undefined ***)(this + 0x10) = &PTR__BoomFlowerAvatarProjectile_067e7c60;
  return;
}


/* BoomFlowerAvatarProjectile::StaticNew() */

BoomFlowerAvatarProjectile * BoomFlowerAvatarProjectile::StaticNew(void)

{
  BoomFlowerAvatarProjectile *this;
  
  this = ::operator_new(0x1a8);
  BoomFlowerAvatarProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerAvatarProjectile::StaticClassInit() */

void BoomFlowerAvatarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoomFlowerAvatarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_041180cc,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomFlowerAvatarProjectile::StaticGetClass() */

long * BoomFlowerAvatarProjectile::StaticGetClass(void)

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
  uVar2 = BoomFlowerPlantfoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"BoomFlowerAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoomFlowerAvatarProjectile::GetClass() const */

long * BoomFlowerAvatarProjectile::GetClass(void)

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
  uVar2 = BoomFlowerPlantfoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"BoomFlowerAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerAvatarProjectile::tossZombie() */

void __thiscall BoomFlowerAvatarProjectile::tossZombie(BoomFlowerAvatarProjectile *this)

{
  bool bVar1;
  char cVar2;
  long extraout_x0;
  undefined8 *puVar3;
  Zombie *this_00;
  ZombieTosserSubSystem *pZVar4;
  undefined8 uVar5;
  ZombieTosserSubSystem *pZVar7;
  undefined4 uVar6;
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  EntityFinder::GetEntities(avStack_68,2);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    if (((RtObject *)*puVar3 != (RtObject *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar3), bVar1)) {
      nop();
      cVar2 = Zombie::CanBeLaunchedByPlants(this_00);
      if (cVar2 != '\0') {
        pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        uVar5 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_00);
                    /* WARNING: Load size is inaccurate */
        pZVar7._0_4_ = *(ZombieTosserSubSystem **)(extraout_x0 + 0x1ec);
        uVar6 = *(undefined4 *)(extraout_x0 + 0x1e8);
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
        ZombieTosserSubSystem::LaunchZombie(pZVar7._0_4_,uVar6,pZVar4,this_00,uVar5,aRStack_50,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoomFlowerAvatarProjectile::stunZombie() */

void __thiscall BoomFlowerAvatarProjectile::stunZombie(BoomFlowerAvatarProjectile *this)

{
  bool bVar1;
  char cVar2;
  long extraout_x0;
  undefined8 *puVar3;
  Zombie *pZVar4;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  if (extraout_x0 != 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    EntityFinder::GetEntities(avStack_80,2);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      if (pZVar4 != (Zombie *)0x0) {
        cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))();
        if ((cVar2 == '\0') &&
           (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0')) {
          DamageInfo::DamageInfo(aDStack_68);
          local_60 = *(undefined4 *)(extraout_x0 + 0x1e0);
          local_58 = 1;
          (**(code **)(*(long *)pZVar4 + 0x110))(pZVar4,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
        cVar2 = GeraniiFencerSubsystem::shouldStun((GeraniiFencerSubsystem *)this,pZVar4);
        if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(extraout_x0 + 0x1e4),0,pZVar4,0x18,1);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoomFlowerAvatarProjectile::handleImpact(BoardEntity*) */

void __thiscall
BoomFlowerAvatarProjectile::handleImpact(BoomFlowerAvatarProjectile *this,BoardEntity *param_1)

{
  tossZombie(this);
  stunZombie(this);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}


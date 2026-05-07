// Class: SandbagProjectile


/* SandbagProjectile::GetRenderOrder() const */

void SandbagProjectile::GetRenderOrder(void)

{
  Board::MakeRenderOrder(0x635ce,4,100);
  return;
}


/* SandbagProjectile::~SandbagProjectile() */

void __thiscall SandbagProjectile::~SandbagProjectile(SandbagProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0690fa00;
  *(undefined ***)(this + 0x10) = &PTR__SandbagProjectile_0690fbf0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SandbagProjectile::~SandbagProjectile() */

void __thiscall SandbagProjectile::~SandbagProjectile(SandbagProjectile *this)

{
  ~SandbagProjectile(this + -0x10);
  return;
}


/* SandbagProjectile::~SandbagProjectile() */

void __thiscall SandbagProjectile::~SandbagProjectile(SandbagProjectile *this)

{
  ~SandbagProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SandbagProjectile::~SandbagProjectile() */

void __thiscall SandbagProjectile::~SandbagProjectile(SandbagProjectile *this)

{
  ~SandbagProjectile(this + -0x10);
  return;
}


/* SandbagProjectile::SandbagProjectile() */

void __thiscall SandbagProjectile::SandbagProjectile(SandbagProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0690fa00;
  *(undefined ***)(this + 0x10) = &PTR__SandbagProjectile_0690fbf0;
  return;
}


/* SandbagProjectile::StaticNew() */

SandbagProjectile * SandbagProjectile::StaticNew(void)

{
  SandbagProjectile *this;
  
  this = ::operator_new(0x1a8);
  SandbagProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SandbagProjectile::StaticClassInit() */

void SandbagProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SandbagProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04919610,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SandbagProjectile::StaticGetClass() */

long * SandbagProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SandbagProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SandbagProjectile::GetClass() const */

long * SandbagProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SandbagProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SandbagProjectile::OnCollideGround() */

void __thiscall SandbagProjectile::OnCollideGround(SandbagProjectile *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  RtObject *this_00;
  SandbagProjectileProps *pSVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  GridItemTriggerTile *pGVar7;
  GridItem *pGVar8;
  Zombie *this_01;
  code *pcVar9;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68 [2];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pSVar4 = Sexy::RtObject::Cast<SandbagProjectileProps>(this_00);
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_a0 = *puVar5;
  local_98 = *(uint *)(puVar5 + 1);
  BoardTransforms::BoardSpaceToGridUnbounded
            ((BoardTransforms *)&local_a0,(SexyVector3 *)(ulong)local_98);
  DamageInfo::DamageInfo((DamageInfo *)local_68);
  local_58 = 0x400000;
  local_68[0] = Projectile::GetInstigator((Projectile *)this);
  Sexy::Insets::Insets
            (aIStack_90,local_b8 - *(int *)(pSVar4 + 0x1e0),local_b4 - *(int *)(pSVar4 + 0x1e4),
             *(int *)(pSVar4 + 0x1e0) * 2 + 1,*(int *)(pSVar4 + 0x1e4) * 2 + 1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar6 = operator|(1,4);
  uVar3 = operator|(uVar6,2);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,aIStack_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!bVar1) {
      uVar3 = Projectile::OnCollideGround((Projectile *)this);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    bVar1 = Sexy::RtObject::IsA<GridItemTriggerTile>((RtObject *)*puVar5);
    if (bVar1) {
      pGVar7 = Sexy::RtObject::Cast<GridItemTriggerTile>((RtObject *)*puVar5);
      cVar2 = (**(code **)(*(long *)pGVar7 + 0x2a8))();
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pGVar7 + 0x2b0))(pGVar7);
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar5);
      if (bVar1) {
        pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
        pcVar9 = *(code **)(*(long *)pGVar8 + 0x218);
        uVar6 = Projectile::GetInstigator((Projectile *)this);
        cVar2 = (*pcVar9)(pGVar8,uVar6);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pGVar8 + 0x120))(pGVar8,(DamageInfo *)local_68);
        }
      }
      else {
        bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)*puVar5);
        if (!bVar1) {
          bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar5);
          if (bVar1) {
            this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
            cVar2 = Zombie::CanTakeFatalDamage(this_01);
            if (cVar2 == '\0') goto LAB_04919928;
          }
          (**(code **)(*(long *)*puVar5 + 0x120))((long *)*puVar5,(DamageInfo *)local_68);
        }
      }
    }
LAB_04919928:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  } while( true );
}


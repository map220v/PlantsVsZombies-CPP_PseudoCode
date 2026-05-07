// Class: HeliconiaGunnerBombProjectile


/* HeliconiaGunnerBombProjectile::HeliconiaGunnerBombProjectile() */

void __thiscall
HeliconiaGunnerBombProjectile::HeliconiaGunnerBombProjectile(HeliconiaGunnerBombProjectile *this)

{
  NekotailStab::NekotailStab((NekotailStab *)this);
  *(undefined ***)this = &PTR_GetClass_069acdd0;
  *(undefined ***)(this + 0x10) = &PTR__HeliconiaGunnerBombProjectile_069acfc0;
  return;
}


/* HeliconiaGunnerBombProjectile::StaticNew() */

HeliconiaGunnerBombProjectile * HeliconiaGunnerBombProjectile::StaticNew(void)

{
  HeliconiaGunnerBombProjectile *this;
  
  this = ::operator_new(0x1e0);
  HeliconiaGunnerBombProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeliconiaGunnerBombProjectile::StaticClassInit() */

void HeliconiaGunnerBombProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeliconiaGunnerBombProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d32014,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeliconiaGunnerBombProjectile::StaticGetClass() */

long * HeliconiaGunnerBombProjectile::StaticGetClass(void)

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
  uVar2 = NekotailStab::StaticGetClass();
  (*pcVar3)(plVar1,"HeliconiaGunnerBombProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeliconiaGunnerBombProjectile::GetClass() const */

long * HeliconiaGunnerBombProjectile::GetClass(void)

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
  uVar2 = NekotailStab::StaticGetClass();
  (*pcVar3)(plVar1,"HeliconiaGunnerBombProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeliconiaGunnerBombProjectile::~HeliconiaGunnerBombProjectile() */

void __thiscall
HeliconiaGunnerBombProjectile::~HeliconiaGunnerBombProjectile(HeliconiaGunnerBombProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069acdd0;
  *(undefined ***)(this + 0x10) = &PTR__HeliconiaGunnerBombProjectile_069acfc0;
  NekotailStab::~NekotailStab((NekotailStab *)this);
  return;
}


/* non-virtual thunk to HeliconiaGunnerBombProjectile::~HeliconiaGunnerBombProjectile() */

void __thiscall
HeliconiaGunnerBombProjectile::~HeliconiaGunnerBombProjectile(HeliconiaGunnerBombProjectile *this)

{
  ~HeliconiaGunnerBombProjectile(this + -0x10);
  return;
}


/* HeliconiaGunnerBombProjectile::~HeliconiaGunnerBombProjectile() */

void __thiscall
HeliconiaGunnerBombProjectile::~HeliconiaGunnerBombProjectile(HeliconiaGunnerBombProjectile *this)

{
  ~HeliconiaGunnerBombProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HeliconiaGunnerBombProjectile::~HeliconiaGunnerBombProjectile() */

void __thiscall
HeliconiaGunnerBombProjectile::~HeliconiaGunnerBombProjectile(HeliconiaGunnerBombProjectile *this)

{
  ~HeliconiaGunnerBombProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeliconiaGunnerBombProjectile::OnCollideEntity(BoardEntity*) */

void HeliconiaGunnerBombProjectile::OnCollideEntity(BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  BoardEntity *this;
  RtObject *this_00;
  HeliconiaGunnerBombProjectileProps *pHVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  GridItem *pGVar8;
  RtObject *in_x1;
  int in_w4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((in_x1 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Zombie>(in_x1), bVar1)) {
    nop();
    iVar3 = BoardEntity::CalcColumnPosition(this);
    iVar4 = SharkMinion::getRow((SharkMinion *)this);
    BoardTransforms::GridToBoardSpaceRect
              ((BoardTransforms *)(ulong)(iVar3 - 1),iVar4 + -1,3,3,in_w4);
    this_00 = (RtObject *)Projectile::getProps((Projectile *)param_1);
    pHVar5 = Sexy::RtObject::Cast<HeliconiaGunnerBombProjectileProps>(this_00);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    EntityFinder::GetEntitiesInRectangle(avStack_80,2,auStack_90);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
      DamageInfo::DamageInfo(aDStack_68);
      local_60 = (float)FUN_04d31038(*(undefined4 *)(param_1 + 0x170),
                                     *(undefined4 *)(param_1 + 0x17c),
                                     *(undefined4 *)(param_1 + 0x180),
                                     *(undefined4 *)(param_1 + 0x184));
      local_60 = local_60 * *(float *)(pHVar5 + 0x1e4);
      if ((pZVar7 == (Zombie *)0x0) || (cVar2 = RealObject::IsOnTeam(pZVar7,2), cVar2 == '\0')) {
        if (pGVar8 != (GridItem *)0x0) {
          (**(code **)(*(long *)pGVar8 + 0x110))(pGVar8,aDStack_68);
        }
      }
      else {
        (**(code **)(*(long *)pZVar7 + 0x110))(pZVar7,aDStack_68);
      }
      DamageInfo::~DamageInfo(aDStack_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  Projectile::OnCollideEntity((Projectile *)param_1,(BoardEntity *)in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


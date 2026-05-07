// Class: ParsnipAvatarProjectile


/* ParsnipAvatarProjectile::~ParsnipAvatarProjectile() */

void __thiscall ParsnipAvatarProjectile::~ParsnipAvatarProjectile(ParsnipAvatarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06740980;
  *(undefined ***)(this + 0x10) = &PTR__ParsnipAvatarProjectile_06740b80;
  ParsnipProjectile::~ParsnipProjectile((ParsnipProjectile *)this);
  return;
}


/* non-virtual thunk to ParsnipAvatarProjectile::~ParsnipAvatarProjectile() */

void __thiscall ParsnipAvatarProjectile::~ParsnipAvatarProjectile(ParsnipAvatarProjectile *this)

{
  ~ParsnipAvatarProjectile(this + -0x10);
  return;
}


/* ParsnipAvatarProjectile::~ParsnipAvatarProjectile() */

void __thiscall ParsnipAvatarProjectile::~ParsnipAvatarProjectile(ParsnipAvatarProjectile *this)

{
  ~ParsnipAvatarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ParsnipAvatarProjectile::~ParsnipAvatarProjectile() */

void __thiscall ParsnipAvatarProjectile::~ParsnipAvatarProjectile(ParsnipAvatarProjectile *this)

{
  ~ParsnipAvatarProjectile(this + -0x10);
  return;
}


/* ParsnipAvatarProjectile::ParsnipAvatarProjectile() */

void __thiscall ParsnipAvatarProjectile::ParsnipAvatarProjectile(ParsnipAvatarProjectile *this)

{
  ParsnipProjectile::ParsnipProjectile((ParsnipProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06740980;
  *(undefined ***)(this + 0x10) = &PTR__ParsnipAvatarProjectile_06740b80;
  return;
}


/* ParsnipAvatarProjectile::StaticNew() */

ParsnipAvatarProjectile * ParsnipAvatarProjectile::StaticNew(void)

{
  ParsnipAvatarProjectile *this;
  
  this = ::operator_new(0x1b8);
  ParsnipAvatarProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipAvatarProjectile::StaticClassInit() */

void ParsnipAvatarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ParsnipAvatarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03bede78,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParsnipAvatarProjectile::StaticGetClass() */

long * ParsnipAvatarProjectile::StaticGetClass(void)

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
  uVar2 = ParsnipProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ParsnipAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParsnipAvatarProjectile::GetClass() const */

long * ParsnipAvatarProjectile::GetClass(void)

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
  uVar2 = ParsnipProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ParsnipAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipAvatarProjectile::playAnimation() */

void __thiscall ParsnipAvatarProjectile::playAnimation(ParsnipAvatarProjectile *this)

{
  undefined4 uVar1;
  PopAnimRig *pPVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  if (this[0x1ac] == (ParsnipAvatarProjectile)0x0) {
    std::string::string(asStack_40,"attack_run");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
    *(undefined4 *)(this + 0x1b0) = uVar1;
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"plantfood_run2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    uVar1 = PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
    *(undefined4 *)(this + 0x1b0) = uVar1;
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParsnipAvatarProjectile::chomp() */

void __thiscall ParsnipAvatarProjectile::chomp(ParsnipAvatarProjectile *this)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  long extraout_x0;
  undefined8 *puVar4;
  Zombie *this_00;
  code *pcVar5;
  RtObject *this_01;
  float fVar6;
  float fVar7;
  undefined8 local_98;
  undefined8 local_90 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar7 = *(float *)(extraout_x0 + 0x1e4);
  fVar6 = (float)Projectile::GetDamageAmount((Projectile *)this);
  if (fVar6 != 0.0) {
    fVar7 = (float)Projectile::GetDamageAmount((Projectile *)this);
  }
  DamageInfo::DamageInfo(aDStack_68);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  local_60 = fVar7 * *(float *)(this + 0x1b4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  pcVar5 = *(code **)(*(long *)this + 0x188);
  Projectile::CalcSweptCollisionRectBoardSpace();
  (*pcVar5)(this,avStack_80,(__normal_iterator *)local_90);
  uVar1 = *(undefined4 *)(this + 0x30);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_90[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_90)
        , bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    this_01 = (RtObject *)*puVar4;
    cVar3 = (**(code **)(*(long *)this_01 + 0xb8))(this_01,uVar1);
    if ((cVar3 != '\0') &&
       (cVar3 = (**(code **)(*(long *)this_01 + 0x168))(this_01,this), cVar3 == '\0')) {
      bVar2 = Sexy::RtObject::IsA<Zombie>(this_01);
      if (((bVar2) &&
          ((((nop(), this_00 != (Zombie *)0x0 &&
             (cVar3 = Zombie::IsOnGround(this_00), cVar3 != '\0')) &&
            (bVar2 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)this_00), !bVar2)) &&
           ((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar2 &&
            (cVar3 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar3 == '\0')))))) &&
         ((cVar3 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar3 == '\0' &&
          (((bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), !bVar2 &&
            (bVar2 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)this_00), !bVar2)) &&
           ((cVar3 = Zombie::IsFlying(this_00), cVar3 == '\0' &&
            ((cVar3 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar3 == '\0' &&
             (cVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar3 == '\0')))))))))) {
        Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_00,2,1);
      }
      (**(code **)(*(long *)this_01 + 0x110))(this_01,aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


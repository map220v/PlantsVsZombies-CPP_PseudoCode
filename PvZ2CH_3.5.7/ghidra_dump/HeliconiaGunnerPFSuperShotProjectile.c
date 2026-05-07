// Class: HeliconiaGunnerPFSuperShotProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeliconiaGunnerPFSuperShotProjectile::StaticClassInit() */

void HeliconiaGunnerPFSuperShotProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeliconiaGunnerPFSuperShotProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d32228,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeliconiaGunnerPFSuperShotProjectile::StaticGetClass() */

long * HeliconiaGunnerPFSuperShotProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeliconiaGunnerPFSuperShotProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeliconiaGunnerPFSuperShotProjectile::GetClass() const */

long * HeliconiaGunnerPFSuperShotProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"HeliconiaGunnerPFSuperShotProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeliconiaGunnerPFSuperShotProjectile::HeliconiaGunnerPFSuperShotProjectile() */

void __thiscall
HeliconiaGunnerPFSuperShotProjectile::HeliconiaGunnerPFSuperShotProjectile
          (HeliconiaGunnerPFSuperShotProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069acff0;
  *(undefined ***)(this + 0x10) = &PTR__HeliconiaGunnerPFSuperShotProjectile_069ad1e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* HeliconiaGunnerPFSuperShotProjectile::StaticNew() */

HeliconiaGunnerPFSuperShotProjectile * HeliconiaGunnerPFSuperShotProjectile::StaticNew(void)

{
  HeliconiaGunnerPFSuperShotProjectile *this;
  
  this = ::operator_new(0x1c0);
  HeliconiaGunnerPFSuperShotProjectile(this);
  return this;
}


/* HeliconiaGunnerPFSuperShotProjectile::~HeliconiaGunnerPFSuperShotProjectile() */

void __thiscall
HeliconiaGunnerPFSuperShotProjectile::~HeliconiaGunnerPFSuperShotProjectile
          (HeliconiaGunnerPFSuperShotProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069acff0;
  *(undefined ***)(this + 0x10) = &PTR__HeliconiaGunnerPFSuperShotProjectile_069ad1e0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to
   HeliconiaGunnerPFSuperShotProjectile::~HeliconiaGunnerPFSuperShotProjectile() */

void __thiscall
HeliconiaGunnerPFSuperShotProjectile::~HeliconiaGunnerPFSuperShotProjectile
          (HeliconiaGunnerPFSuperShotProjectile *this)

{
  ~HeliconiaGunnerPFSuperShotProjectile(this + -0x10);
  return;
}


/* HeliconiaGunnerPFSuperShotProjectile::~HeliconiaGunnerPFSuperShotProjectile() */

void __thiscall
HeliconiaGunnerPFSuperShotProjectile::~HeliconiaGunnerPFSuperShotProjectile
          (HeliconiaGunnerPFSuperShotProjectile *this)

{
  ~HeliconiaGunnerPFSuperShotProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   HeliconiaGunnerPFSuperShotProjectile::~HeliconiaGunnerPFSuperShotProjectile() */

void __thiscall
HeliconiaGunnerPFSuperShotProjectile::~HeliconiaGunnerPFSuperShotProjectile
          (HeliconiaGunnerPFSuperShotProjectile *this)

{
  ~HeliconiaGunnerPFSuperShotProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeliconiaGunnerPFSuperShotProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
HeliconiaGunnerPFSuperShotProjectile::OnCollideEntity
          (HeliconiaGunnerPFSuperShotProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  BoardEntity *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                       (uVar3,uVar4,local_28);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  uVar2 = 0;
  if (bVar1) {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this_00,local_28);
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,local_28[0]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


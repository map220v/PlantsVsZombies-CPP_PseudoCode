// Class: BearberryBasicProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BearberryBasicProjectile::StaticClassInit() */

void BearberryBasicProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BearberryBasicProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_042563c0,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BearberryBasicProjectile::StaticGetClass() */

long * BearberryBasicProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BearberryBasicProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BearberryBasicProjectile::GetClass() const */

long * BearberryBasicProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BearberryBasicProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BearberryBasicProjectile::BearberryBasicProjectile() */

void __thiscall BearberryBasicProjectile::BearberryBasicProjectile(BearberryBasicProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06819b40;
  *(undefined ***)(this + 0x10) = &PTR__BearberryBasicProjectile_06819d30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* BearberryBasicProjectile::StaticNew() */

BearberryBasicProjectile * BearberryBasicProjectile::StaticNew(void)

{
  BearberryBasicProjectile *this;
  
  this = ::operator_new(0x1c0);
  BearberryBasicProjectile(this);
  return this;
}


/* BearberryBasicProjectile::~BearberryBasicProjectile() */

void __thiscall BearberryBasicProjectile::~BearberryBasicProjectile(BearberryBasicProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06819b40;
  *(undefined ***)(this + 0x10) = &PTR__BearberryBasicProjectile_06819d30;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BearberryBasicProjectile::~BearberryBasicProjectile() */

void __thiscall BearberryBasicProjectile::~BearberryBasicProjectile(BearberryBasicProjectile *this)

{
  ~BearberryBasicProjectile(this + -0x10);
  return;
}


/* BearberryBasicProjectile::~BearberryBasicProjectile() */

void __thiscall BearberryBasicProjectile::~BearberryBasicProjectile(BearberryBasicProjectile *this)

{
  ~BearberryBasicProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BearberryBasicProjectile::~BearberryBasicProjectile() */

void __thiscall BearberryBasicProjectile::~BearberryBasicProjectile(BearberryBasicProjectile *this)

{
  ~BearberryBasicProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BearberryBasicProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
BearberryBasicProjectile::OnCollideEntity(BearberryBasicProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined1 uVar1;
  bool bVar2;
  GridItemRenaiStatue *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (pGVar3 = Sexy::RtObject::Cast<GridItemRenaiStatue>((RtObject *)param_1),
     pGVar3 == (GridItemRenaiStatue *)0x0)) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1a8);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar4,uVar5,aRStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    uVar1 = 0;
    if (!bVar2) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    }
  }
  else {
    uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


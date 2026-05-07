// Class: BearberryPlantfoodProjectile


/* BearberryPlantfoodProjectile::onDestroy() */

void __thiscall BearberryPlantfoodProjectile::onDestroy(BearberryPlantfoodProjectile *this)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BearberryPlantfoodProjectile::StaticClassInit() */

void BearberryPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BearberryPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04256704,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BearberryPlantfoodProjectile::StaticGetClass() */

long * BearberryPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BearberryPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BearberryPlantfoodProjectile::GetClass() const */

long * BearberryPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BearberryPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BearberryPlantfoodProjectile::BearberryPlantfoodProjectile() */

void __thiscall
BearberryPlantfoodProjectile::BearberryPlantfoodProjectile(BearberryPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0681a1a0;
  *(undefined ***)(this + 0x10) = &PTR__BearberryPlantfoodProjectile_0681a390;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* BearberryPlantfoodProjectile::StaticNew() */

BearberryPlantfoodProjectile * BearberryPlantfoodProjectile::StaticNew(void)

{
  BearberryPlantfoodProjectile *this;
  
  this = ::operator_new(0x1c0);
  BearberryPlantfoodProjectile(this);
  return this;
}


/* BearberryPlantfoodProjectile::~BearberryPlantfoodProjectile() */

void __thiscall
BearberryPlantfoodProjectile::~BearberryPlantfoodProjectile(BearberryPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0681a1a0;
  *(undefined ***)(this + 0x10) = &PTR__BearberryPlantfoodProjectile_0681a390;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BearberryPlantfoodProjectile::~BearberryPlantfoodProjectile() */

void __thiscall
BearberryPlantfoodProjectile::~BearberryPlantfoodProjectile(BearberryPlantfoodProjectile *this)

{
  ~BearberryPlantfoodProjectile(this + -0x10);
  return;
}


/* BearberryPlantfoodProjectile::~BearberryPlantfoodProjectile() */

void __thiscall
BearberryPlantfoodProjectile::~BearberryPlantfoodProjectile(BearberryPlantfoodProjectile *this)

{
  ~BearberryPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BearberryPlantfoodProjectile::~BearberryPlantfoodProjectile() */

void __thiscall
BearberryPlantfoodProjectile::~BearberryPlantfoodProjectile(BearberryPlantfoodProjectile *this)

{
  ~BearberryPlantfoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BearberryPlantfoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
BearberryPlantfoodProjectile::OnCollideEntity
          (BearberryPlantfoodProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  Zombie *this_01;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_01 != (Zombie *)0x0)) {
    iVar4 = Zombie::GetSizeType(this_01);
    if ((iVar4 == 0) && (cVar3 = (**(code **)(*(long *)this_01 + 0x3f0))(this_01), cVar3 != '\0')) {
      iVar4 = Zombie::GetFacing(this_01);
      if (iVar4 == 1) {
        iVar4 = Sexy::Rand(600);
        fVar7 = -500.0;
      }
      else {
        iVar4 = Sexy::Rand(600);
        fVar7 = 1000.0;
      }
      EATextSquish::Vec3::Vec3((Vec3 *)local_18,fVar7,(float)iVar4,0.0);
      Zombie::FlickOff(this_01,(SexyVector3 *)local_18);
      MessageRouter::Broadcast<std::string_const&,char_const*>
                ((MessageRouter *)gMessageRouter,Message::PlantKillZombie,"bearberry");
      uVar2 = 0;
      goto LAB_04256d98;
    }
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_20 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar5,uVar6,aRStack_28);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  uVar2 = 0;
  if (!bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)&local_20);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
LAB_04256d98:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


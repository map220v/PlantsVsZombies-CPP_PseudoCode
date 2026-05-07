// Class: ParkourPlantfoodAvatarProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourPlantfoodAvatarProjectile::StaticClassInit() */

void ParkourPlantfoodAvatarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ParkourPlantfoodAvatarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d56764,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParkourPlantfoodAvatarProjectile::StaticGetClass() */

long * ParkourPlantfoodAvatarProjectile::StaticGetClass(void)

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
  uVar2 = ParkourPlantfoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ParkourPlantfoodAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParkourPlantfoodAvatarProjectile::GetClass() const */

long * ParkourPlantfoodAvatarProjectile::GetClass(void)

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
  uVar2 = ParkourPlantfoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ParkourPlantfoodAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParkourPlantfoodAvatarProjectile::ParkourPlantfoodAvatarProjectile() */

void __thiscall
ParkourPlantfoodAvatarProjectile::ParkourPlantfoodAvatarProjectile
          (ParkourPlantfoodAvatarProjectile *this)

{
  ParkourPlantfoodProjectile::ParkourPlantfoodProjectile((ParkourPlantfoodProjectile *)this);
  *(undefined4 *)(this + 0x1c4) = 1;
  *(undefined ***)this = &PTR_GetClass_069b3030;
  *(undefined ***)(this + 0x10) = &PTR__ParkourPlantfoodAvatarProjectile_069b3220;
  return;
}


/* ParkourPlantfoodAvatarProjectile::StaticNew() */

ParkourPlantfoodAvatarProjectile * ParkourPlantfoodAvatarProjectile::StaticNew(void)

{
  ParkourPlantfoodAvatarProjectile *this;
  
  this = ::operator_new(0x1c8);
  ParkourPlantfoodAvatarProjectile(this);
  return this;
}


/* ParkourPlantfoodAvatarProjectile::~ParkourPlantfoodAvatarProjectile() */

void __thiscall
ParkourPlantfoodAvatarProjectile::~ParkourPlantfoodAvatarProjectile
          (ParkourPlantfoodAvatarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b3030;
  *(undefined ***)(this + 0x10) = &PTR__ParkourPlantfoodAvatarProjectile_069b3220;
  ParkourPlantfoodProjectile::~ParkourPlantfoodProjectile((ParkourPlantfoodProjectile *)this);
  return;
}


/* non-virtual thunk to ParkourPlantfoodAvatarProjectile::~ParkourPlantfoodAvatarProjectile() */

void __thiscall
ParkourPlantfoodAvatarProjectile::~ParkourPlantfoodAvatarProjectile
          (ParkourPlantfoodAvatarProjectile *this)

{
  ~ParkourPlantfoodAvatarProjectile(this + -0x10);
  return;
}


/* ParkourPlantfoodAvatarProjectile::~ParkourPlantfoodAvatarProjectile() */

void __thiscall
ParkourPlantfoodAvatarProjectile::~ParkourPlantfoodAvatarProjectile
          (ParkourPlantfoodAvatarProjectile *this)

{
  ~ParkourPlantfoodAvatarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ParkourPlantfoodAvatarProjectile::~ParkourPlantfoodAvatarProjectile() */

void __thiscall
ParkourPlantfoodAvatarProjectile::~ParkourPlantfoodAvatarProjectile
          (ParkourPlantfoodAvatarProjectile *this)

{
  ~ParkourPlantfoodAvatarProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourPlantfoodAvatarProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ParkourPlantfoodAvatarProjectile::OnCollideEntity
          (ParkourPlantfoodAvatarProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Zombie *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 uStack_20;
  undefined8 auStack_18 [2];
  long lStack_8;
  
  iVar5 = 2;
  lStack_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1c0) - 2U < 4) {
    iVar5 = *(int *)(&DAT_05755980 + (ulong)(*(int *)(this + 0x1c0) - 2U) * 4);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  uVar3 = 0;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)auStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_18);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  uStack_20 = std::
              find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                        (uVar6,uVar7,aRStack_28);
  auStack_18[0] =
       std::
       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
       ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_20,(__normal_iterator *)auStack_18);
  if (!bVar1) {
    if ((param_1 != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      iVar4 = Zombie::GetSizeType(this_01);
      if (((iVar4 == 0) || (iVar4 = Zombie::GetSizeType(this_01), iVar4 == 1)) &&
         ((cVar2 = (**(code **)(*(long *)this_01 + 0x3f0))(this_01), cVar2 != '\0' &&
          (iVar4 = FUN_04d4ee70(*(undefined4 *)(this_01 + 0x50)), iVar4 <= iVar5)))) {
        iVar5 = Sexy::Rand(600);
        EATextSquish::Vec3::Vec3((Vec3 *)auStack_18,1000.0,(float)iVar5,0.0);
        Zombie::FlickOff(this_01,(SexyVector3 *)auStack_18);
      }
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)aRStack_28);
    uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


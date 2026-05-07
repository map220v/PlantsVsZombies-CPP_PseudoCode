// Class: ParkourPlantfoodProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourPlantfoodProjectile::StaticClassInit() */

void ParkourPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ParkourPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d56590,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ParkourPlantfoodProjectile::StaticGetClass() */

long * ParkourPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ParkourPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParkourPlantfoodProjectile::GetClass() const */

long * ParkourPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ParkourPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ParkourPlantfoodProjectile::ParkourPlantfoodProjectile() */

void __thiscall
ParkourPlantfoodProjectile::ParkourPlantfoodProjectile(ParkourPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069b2e10;
  *(undefined ***)(this + 0x10) = &PTR__ParkourPlantfoodProjectile_069b3000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1c0) = 1;
  return;
}


/* ParkourPlantfoodProjectile::StaticNew() */

ParkourPlantfoodProjectile * ParkourPlantfoodProjectile::StaticNew(void)

{
  ParkourPlantfoodProjectile *this;
  
  this = ::operator_new(0x1c8);
  ParkourPlantfoodProjectile(this);
  return this;
}


/* ParkourPlantfoodProjectile::~ParkourPlantfoodProjectile() */

void __thiscall
ParkourPlantfoodProjectile::~ParkourPlantfoodProjectile(ParkourPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b2e10;
  *(undefined ***)(this + 0x10) = &PTR__ParkourPlantfoodProjectile_069b3000;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ParkourPlantfoodProjectile::~ParkourPlantfoodProjectile() */

void __thiscall
ParkourPlantfoodProjectile::~ParkourPlantfoodProjectile(ParkourPlantfoodProjectile *this)

{
  ~ParkourPlantfoodProjectile(this + -0x10);
  return;
}


/* ParkourPlantfoodProjectile::~ParkourPlantfoodProjectile() */

void __thiscall
ParkourPlantfoodProjectile::~ParkourPlantfoodProjectile(ParkourPlantfoodProjectile *this)

{
  ~ParkourPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ParkourPlantfoodProjectile::~ParkourPlantfoodProjectile() */

void __thiscall
ParkourPlantfoodProjectile::~ParkourPlantfoodProjectile(ParkourPlantfoodProjectile *this)

{
  ~ParkourPlantfoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourPlantfoodProjectile::SetAvatarIndex(int) */

void __thiscall
ParkourPlantfoodProjectile::SetAvatarIndex(ParkourPlantfoodProjectile *this,int param_1)

{
  long lVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  string *psVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = ___stack_chk_guard;
  uVar7 = DAT_06b97588 & 1;
  if (((DAT_06b97588 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b97588), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b975f8,"custom_01");
    nop();
    std::string::string((string *)&DAT_06b97600,"custom_02");
    nop();
    __cxa_guard_release(&DAT_06b97588);
    __cxa_atexit(FUN_04d4ecf0,uVar7,&DAT_06a88000);
  }
  if (((DAT_06b97698 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b97698), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b97680,(string *)&DAT_06b975f8,
               (allocator *)&MandrakeProjectileProps::sClass);
    __cxa_guard_release(&DAT_06b97698);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b97680,
                 &DAT_06a88000);
  }
  uVar7 = 0;
  pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  PopAnimRig::SetLayerVisibility(pPVar3,(vector *)&DAT_06b975c8,false);
  lVar4 = FUN_04d4eed8(DAT_06b97680,DAT_06b97688);
  if (lVar4 != 0) {
    do {
      pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
      psVar5 = (string *)FUN_04d4eee4(DAT_06b97680,uVar7);
      PopAnimRig::SetLayerVisibility(pPVar3,psVar5,false);
      if ((long)param_1 == uVar7) {
        pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        psVar5 = (string *)FUN_04d4eee4(DAT_06b97680,(long)param_1);
        PopAnimRig::SetLayerVisibility(pPVar3,psVar5,true);
      }
      uVar7 = uVar7 + 1;
      uVar6 = FUN_04d4eed8(DAT_06b97680,DAT_06b97688);
    } while (uVar7 < uVar6);
  }
  if (param_1 == 2) {
    pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
    PopAnimRig::SetLayerVisibility(pPVar3,(vector *)&DAT_06b975c8,true);
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ParkourPlantfoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
ParkourPlantfoodProjectile::OnCollideEntity(ParkourPlantfoodProjectile *this,BoardEntity *param_1)

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
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  iVar5 = 2;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1c0) - 2U < 4) {
    iVar5 = *(int *)(&DAT_05755980 + (ulong)(*(int *)(this + 0x1c0) - 2U) * 4);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  uVar3 = 0;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_20 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar6,uVar7,aRStack_28);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
  if (!bVar1) {
    if ((param_1 != (BoardEntity *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
      this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
      iVar4 = Zombie::GetSizeType(this_01);
      if (((iVar4 == 0) || (iVar4 = Zombie::GetSizeType(this_01), iVar4 == 1)) &&
         ((cVar2 = (**(code **)(*(long *)this_01 + 0x3f0))(this_01), cVar2 != '\0' &&
          (iVar4 = FUN_04d4ee70(*(undefined4 *)(this_01 + 0x50)), iVar4 <= iVar5)))) {
        iVar5 = Sexy::Rand(600);
        EATextSquish::Vec3::Vec3((Vec3 *)local_18,1000.0,(float)iVar5,0.0);
        Zombie::FlickOff(this_01,(SexyVector3 *)local_18);
      }
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)aRStack_28);
    uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


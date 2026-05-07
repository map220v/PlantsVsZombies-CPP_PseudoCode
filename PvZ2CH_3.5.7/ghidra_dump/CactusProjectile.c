// Class: CactusProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CactusProjectile::StaticClassInit() */

void CactusProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CactusProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0417e858,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CactusProjectile::StaticGetClass() */

long * CactusProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CactusProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CactusProjectile::GetClass() const */

long * CactusProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"CactusProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CactusProjectile::IncreaseInitialPierceChance() */

void __thiscall CactusProjectile::IncreaseInitialPierceChance(CactusProjectile *this)

{
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  *(float *)(this + 0x1a8) =
       *(float *)(this + 0x1a8) + (float)(*(int *)(extraout_x0 + 0x1e4) + 0x1e);
  return;
}


/* CactusProjectile::CactusProjectile() */

void __thiscall CactusProjectile::CactusProjectile(CactusProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067f7180;
  *(undefined ***)(this + 0x10) = &PTR__CactusProjectile_067f7370;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  return;
}


/* CactusProjectile::StaticNew() */

CactusProjectile * CactusProjectile::StaticNew(void)

{
  CactusProjectile *this;
  
  this = ::operator_new(0x1c8);
  CactusProjectile(this);
  return this;
}


/* CactusProjectile::onProjectileInitialized() */

void __thiscall CactusProjectile::onProjectileInitialized(CactusProjectile *this)

{
  int iVar1;
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  iVar1 = *(int *)(extraout_x0 + 0x1e0);
  *(undefined4 *)(this + 0x1ac) = 0;
  *(float *)(this + 0x1a8) = (float)iVar1;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b0));
  return;
}


/* CactusProjectile::~CactusProjectile() */

void __thiscall CactusProjectile::~CactusProjectile(CactusProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067f7180;
  *(undefined ***)(this + 0x10) = &PTR__CactusProjectile_067f7370;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CactusProjectile::~CactusProjectile() */

void __thiscall CactusProjectile::~CactusProjectile(CactusProjectile *this)

{
  ~CactusProjectile(this + -0x10);
  return;
}


/* CactusProjectile::~CactusProjectile() */

void __thiscall CactusProjectile::~CactusProjectile(CactusProjectile *this)

{
  ~CactusProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CactusProjectile::~CactusProjectile() */

void __thiscall CactusProjectile::~CactusProjectile(CactusProjectile *this)

{
  ~CactusProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CactusProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall CactusProjectile::OnCollideEntity(CactusProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Zombie *this_01;
  long extraout_x0;
  undefined1 uVar5;
  float fVar6;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b0);
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_20[0] = std::
                find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                          (uVar3,uVar4,aRStack_28);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    if (((param_1 != (BoardEntity *)0x0) && (*(int *)(this + 0x1ac) == 1)) &&
       (this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_01 != (Zombie *)0x0)) {
      PVPSeedBankModule::GetPVPSkillEnergyUI();
      ZombieConditionsStruct::ZombieConditionsStruct
                ((ZombieConditionsStruct *)0x3f000000,(PVPZoneData *)local_20,0x18,aRStack_28);
      Zombie::ApplyCondition(this_01,(ZombieConditionsStruct *)local_20);
      PVPZoneData::~PVPZoneData((PVPZoneData *)local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_20,(RtWeakPtrBase *)aRStack_28);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    iVar2 = Sexy::Rand(100);
    fVar6 = *(float *)(this + 0x1a8);
    Projectile::OnCollideEntity((Projectile *)this,param_1);
    if (fVar6 <= (float)iVar2) {
      uVar5 = 1;
      (**(code **)(*(long *)this + 0x48))(this);
    }
    else {
      Projectile::GetProps((Projectile *)this);
      nop();
      *(float *)(this + 0x1a8) = *(float *)(this + 0x1a8) - (float)*(int *)(extraout_x0 + 0x1e4);
      uVar5 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


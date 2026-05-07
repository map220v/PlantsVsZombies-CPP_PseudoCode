// Class: ElectricPeaAvatarProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaAvatarProjectile::StaticClassInit() */

void ElectricPeaAvatarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricPeaAvatarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c10d40,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeaAvatarProjectile::StaticGetClass() */

long * ElectricPeaAvatarProjectile::StaticGetClass(void)

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
  uVar2 = ElectricPeaPlantfoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricPeaAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaAvatarProjectile::GetClass() const */

long * ElectricPeaAvatarProjectile::GetClass(void)

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
  uVar2 = ElectricPeaPlantfoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricPeaAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaAvatarProjectile::ElectricPeaAvatarProjectile() */

void __thiscall
ElectricPeaAvatarProjectile::ElectricPeaAvatarProjectile(ElectricPeaAvatarProjectile *this)

{
  ElectricPeaPlantfoodProjectile::ElectricPeaPlantfoodProjectile
            ((ElectricPeaPlantfoodProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06747b10;
  *(undefined ***)(this + 0x10) = &PTR__ElectricPeaAvatarProjectile_06747d08;
  return;
}


/* ElectricPeaAvatarProjectile::StaticNew() */

ElectricPeaAvatarProjectile * ElectricPeaAvatarProjectile::StaticNew(void)

{
  ElectricPeaAvatarProjectile *this;
  
  this = ::operator_new(0x1c0);
  ElectricPeaAvatarProjectile(this);
  return this;
}


/* ElectricPeaAvatarProjectile::~ElectricPeaAvatarProjectile() */

void __thiscall
ElectricPeaAvatarProjectile::~ElectricPeaAvatarProjectile(ElectricPeaAvatarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06747b10;
  *(undefined ***)(this + 0x10) = &PTR__ElectricPeaAvatarProjectile_06747d08;
  ElectricPeaPlantfoodProjectile::~ElectricPeaPlantfoodProjectile
            ((ElectricPeaPlantfoodProjectile *)this);
  return;
}


/* non-virtual thunk to ElectricPeaAvatarProjectile::~ElectricPeaAvatarProjectile() */

void __thiscall
ElectricPeaAvatarProjectile::~ElectricPeaAvatarProjectile(ElectricPeaAvatarProjectile *this)

{
  ~ElectricPeaAvatarProjectile(this + -0x10);
  return;
}


/* ElectricPeaAvatarProjectile::~ElectricPeaAvatarProjectile() */

void __thiscall
ElectricPeaAvatarProjectile::~ElectricPeaAvatarProjectile(ElectricPeaAvatarProjectile *this)

{
  ~ElectricPeaAvatarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElectricPeaAvatarProjectile::~ElectricPeaAvatarProjectile() */

void __thiscall
ElectricPeaAvatarProjectile::~ElectricPeaAvatarProjectile(ElectricPeaAvatarProjectile *this)

{
  ~ElectricPeaAvatarProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaAvatarProjectile::stunZombie(BoardEntity*) */

void __thiscall
ElectricPeaAvatarProjectile::stunZombie(ElectricPeaAvatarProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long extraout_x0;
  undefined8 *puVar5;
  Zombie *this_00;
  ZombieConditionsStruct *pZVar6;
  undefined8 local_98;
  undefined8 local_90;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    uVar3 = BoardEntity::CalcColumnPosition(param_1);
    uVar4 = SharkMinion::getRow((SharkMinion *)param_1);
    Projectile::GetProps((Projectile *)this);
    nop();
    if (extraout_x0 != 0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      EntityFinder::GetEntitiesAtGridSquare(avStack_80,2,uVar3,uVar4);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_80);
      local_90 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90),
            bVar1) {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        if (this_00 != (Zombie *)0x0) {
          cVar2 = (**(code **)(*(long *)this_00 + 0x328))();
          if ((cVar2 == '\0') &&
             (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) {
            DamageInfo::DamageInfo((DamageInfo *)&local_68);
            local_60 = *(undefined4 *)(extraout_x0 + 0x1e4);
            local_68 = Projectile::GetInstigator((Projectile *)this);
            (**(code **)(*(long *)this_00 + 0x110))(this_00,(PVPZoneData *)&local_68);
            DamageInfo::~DamageInfo((DamageInfo *)&local_68);
          }
          cVar2 = GeraniiFencerSubsystem::shouldStun((GeraniiFencerSubsystem *)this,this_00);
          if (cVar2 != '\0') {
                    /* WARNING: Load size is inaccurate */
            pZVar6._0_4_ = *(ZombieConditionsStruct **)(extraout_x0 + 0x1e0);
            PVPSeedBankModule::GetPVPSkillEnergyUI();
            ZombieConditionsStruct::ZombieConditionsStruct
                      (pZVar6._0_4_,(PVPZoneData *)&local_68,0x18,aRStack_88);
            Zombie::ApplyCondition(this_00,(ZombieConditionsStruct *)&local_68);
            PVPZoneData::~PVPZoneData((PVPZoneData *)&local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeaAvatarProjectile::handleImpact(BoardEntity*) */

void __thiscall
ElectricPeaAvatarProjectile::handleImpact(ElectricPeaAvatarProjectile *this,BoardEntity *param_1)

{
  stunZombie(this,param_1);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}


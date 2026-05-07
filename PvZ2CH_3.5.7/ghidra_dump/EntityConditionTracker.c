// Class: EntityConditionTracker<Creature,CreatureConditions>


/* EntityConditionTracker<Creature, CreatureConditions>::computeCachedValues() */

void __thiscall
EntityConditionTracker<Creature,CreatureConditions>::computeCachedValues
          (EntityConditionTracker<Creature,CreatureConditions> *this)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = EntityModifierToFlag(1);
  bVar1 = TestFlag<unsigned_int>(*(uint *)(this + 0x48),uVar2);
  if (!bVar1) {
    return;
  }
  (**(code **)(*(long *)this + 0x18))(this);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar2,false);
  return;
}


/* EntityConditionTracker<Zombie, ZombieConditions>::GetDPSModifier() */

undefined4 __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::GetDPSModifier
          (EntityConditionTracker<Zombie,ZombieConditions> *this)

{
  EntityConditionTracker<Creature,CreatureConditions>::computeCachedValues
            ((EntityConditionTracker<Creature,CreatureConditions> *)this);
  return *(undefined4 *)(this + 0x3c);
}


/* EntityConditionTracker<Zombie, ZombieConditions>::HasCondition(ZombieConditions) const */

bool __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::HasCondition
          (EntityConditionTracker<Zombie,ZombieConditions> *this,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_036f75ac(*(undefined8 *)(this + 8),(long)param_2);
  return *pcVar1 != '\0';
}


/* EntityConditionTracker<Zombie, ZombieConditions>::GetCondition(ZombieConditions) */

void __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::GetCondition
          (EntityConditionTracker<Zombie,ZombieConditions> *this,int param_2)

{
  FUN_037ec748(*(undefined8 *)(this + 0x20),(long)param_2);
  return;
}


/* EntityConditionTracker<GridItem, GridItemConditions>::GetCondition(GridItemConditions) */

void __thiscall
EntityConditionTracker<GridItem,GridItemConditions>::GetCondition
          (EntityConditionTracker<GridItem,GridItemConditions> *this,int param_2)

{
  FUN_03afadf8(*(undefined8 *)(this + 0x20),(long)param_2);
  return;
}


/* EntityConditionTracker<Creature, CreatureConditions>::GetSpeedModifier() */

undefined4 __thiscall
EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier
          (EntityConditionTracker<Creature,CreatureConditions> *this)

{
  computeCachedValues(this);
  return *(undefined4 *)(this + 0x38);
}


/* EntityConditionTracker<GridItem, GridItemConditions>::HasCondition(GridItemConditions) const */

bool __thiscall
EntityConditionTracker<GridItem,GridItemConditions>::HasCondition
          (EntityConditionTracker<GridItem,GridItemConditions> *this,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_03df64d8(*(undefined8 *)(this + 8),(long)param_2);
  return *pcVar1 != '\0';
}


/* EntityConditionTracker<GridItem, GridItemConditions>::EndCondition(GridItem*, GridItemConditions)
    */

void __thiscall
EntityConditionTracker<GridItem,GridItemConditions>::EndCondition
          (EntityConditionTracker<GridItem,GridItemConditions> *this,GridItem *param_1,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)FUN_03df6524(*(undefined8 *)(this + 0x20),(long)param_3);
  uVar4 = PVZ_EOT();
  *puVar2 = uVar4;
  puVar2[1] = uVar4;
  uVar1 = EntityModifierToFlag(1);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,true);
  puVar3 = (undefined1 *)FUN_03df6530(*(undefined8 *)(this + 8),(long)param_3);
  *puVar3 = 0;
  GridItem::NotifyEndCondition(param_1,param_3);
  return;
}


/* EntityConditionTracker<GridItem, GridItemConditions>::ClearConditions(GridItem*) */

void __thiscall
EntityConditionTracker<GridItem,GridItemConditions>::ClearConditions
          (EntityConditionTracker<GridItem,GridItemConditions> *this,GridItem *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = FUN_03df6510(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  if (0 < iVar2) {
    do {
      cVar1 = HasCondition(this,iVar3);
      if (cVar1 != '\0') {
        EndCondition(this,param_1,iVar3);
        iVar2 = FUN_03df6510(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<GridItem, GridItemConditions>::Update(GridItem*) */

void __thiscall
EntityConditionTracker<GridItem,GridItemConditions>::Update
          (EntityConditionTracker<GridItem,GridItemConditions> *this,GridItem *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  fVar7 = (float)PVZ_T();
  uVar6 = 0;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar5 = *(undefined8 *)(this + 0x20);
  iVar2 = FUN_03df6510(uVar5,*(undefined8 *)(this + 0x28));
  if (0 < iVar2) {
    do {
      lVar3 = FUN_03df6524(uVar5,uVar4);
      cVar1 = HasCondition(this,uVar4 & 0xffffffff);
      if (cVar1 != '\0') {
        if (*(float *)(lVar3 + 8) < fVar7) {
          uVar8 = PVZ_EOT();
          *(undefined4 *)(lVar3 + 8) = uVar8;
        }
        if (*(float *)(lVar3 + 4) < fVar7) {
          EndCondition(this,param_1,uVar6);
          uVar5 = *(undefined8 *)(this + 0x20);
          iVar2 = FUN_03df6510(uVar5,*(undefined8 *)(this + 0x28));
        }
      }
      uVar4 = uVar4 + 1;
      uVar6 = uVar4 & 0xffffffff;
    } while ((int)uVar4 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntityConditionTracker<GridItem, GridItemConditions>::ApplyCondition(GridItem*,
   GridItemConditions, float, float) */

undefined4 * __thiscall
EntityConditionTracker<GridItem,GridItemConditions>::ApplyCondition
          (float param_1_00,float param_2,EntityConditionTracker<GridItem,GridItemConditions> *this,
          GridItem *param_1,int param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined4 uVar6;
  
  puVar3 = (undefined4 *)FUN_03df6524(*(undefined8 *)(this + 0x20),(long)param_5);
  if (0.0 < param_1_00) {
    fVar5 = (float)PVZ_EOT();
    if (fVar5 != param_1_00) {
      fVar5 = (float)PVZ_T();
      fVar5 = fVar5 + param_1_00;
    }
    cVar1 = HasCondition(this,param_5);
    if ((cVar1 == '\0') || ((float)puVar3[1] < fVar5)) {
      uVar6 = PVZ_T();
      *puVar3 = uVar6;
      puVar3[1] = fVar5;
      uVar2 = EntityModifierToFlag(1);
      SetFlag<unsigned_int>((uint *)(this + 0x48),uVar2,true);
      puVar4 = (undefined1 *)FUN_03df6530(*(undefined8 *)(this + 8),(long)param_5);
      *puVar4 = 1;
      if (param_2 != 0.0) {
        fVar5 = (float)PVZ_T();
        puVar3[2] = fVar5 + param_2;
      }
      GridItem::NotifyApplyCondition(param_1,param_5);
    }
  }
  return puVar3;
}


/* EntityConditionTracker<GridItem, GridItemConditions>::~EntityConditionTracker() */

void __thiscall
EntityConditionTracker<GridItem,GridItemConditions>::~EntityConditionTracker
          (EntityConditionTracker<GridItem,GridItemConditions> *this)

{
  *(undefined **)this = &DAT_0677ffe0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  std::vector<EntityCondition,std::allocator<EntityCondition>>::~vector
            ((vector<EntityCondition,std::allocator<EntityCondition>> *)(this + 0x20));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8));
  return;
}


/* EntityConditionTracker<GridItem, GridItemConditions>::~EntityConditionTracker() */

void __thiscall
EntityConditionTracker<GridItem,GridItemConditions>::~EntityConditionTracker
          (EntityConditionTracker<GridItem,GridItemConditions> *this)

{
  ~EntityConditionTracker(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<GridItem, GridItemConditions>::EntityConditionTracker(int) */

void __thiscall
EntityConditionTracker<GridItem,GridItemConditions>::EntityConditionTracker
          (EntityConditionTracker<GridItem,GridItemConditions> *this,int param_1)

{
  uint uVar1;
  uchar local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined **)this = &DAT_0677ffe0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  Sexy::Color::Color((Color *)(this + 0x4c));
  Sexy::Color::Color((Color *)(this + 0x5c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::vector<EntityCondition,std::allocator<EntityCondition>>::resize
            ((vector<EntityCondition,std::allocator<EntityCondition>> *)(this + 0x20),(long)param_1)
  ;
  local_9 = '\0';
  std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),(long)param_1,
             &local_9);
  *(undefined4 *)(this + 0x48) = 0;
  uVar1 = EntityModifierToFlag(1);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntityConditionTracker<Creature, CreatureConditions>::GetDrawOverlayColor() */

void EntityConditionTracker<Creature,CreatureConditions>::GetDrawOverlayColor(void)

{
  EntityConditionTracker<Creature,CreatureConditions> *in_x0;
  Insets *in_x8;
  
  computeCachedValues(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x5c));
  return;
}


/* EntityConditionTracker<Creature, CreatureConditions>::GetDrawShaderColor() */

void EntityConditionTracker<Creature,CreatureConditions>::GetDrawShaderColor(void)

{
  EntityConditionTracker<Creature,CreatureConditions> *in_x0;
  Insets *in_x8;
  
  computeCachedValues(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x4c));
  return;
}


/* EntityConditionTracker<Creature,
   CreatureConditions>::TestModifierFlag(EntityConditionModifierFlags) */

bool __thiscall
EntityConditionTracker<Creature,CreatureConditions>::TestModifierFlag
          (EntityConditionTracker<Creature,CreatureConditions> *this,int param_2)

{
  bool bVar1;
  uint uVar2;
  
  computeCachedValues(this);
  uVar2 = EntityModifierToFlag(param_2);
  bVar1 = TestFlag<unsigned_int>(*(uint *)(this + 0x48),uVar2);
  return bVar1;
}


/* EntityConditionTracker<Plant, PlantConditions>::HasCondition(PlantConditions) const */

bool __thiscall
EntityConditionTracker<Plant,PlantConditions>::HasCondition
          (EntityConditionTracker<Plant,PlantConditions> *this,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_03f243c0(*(undefined8 *)(this + 8),(long)param_2);
  return *pcVar1 != '\0';
}


/* EntityConditionTracker<Creature, CreatureConditions>::SetDirty() */

void __thiscall
EntityConditionTracker<Creature,CreatureConditions>::SetDirty
          (EntityConditionTracker<Creature,CreatureConditions> *this)

{
  uint uVar1;
  
  uVar1 = EntityModifierToFlag(1);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,true);
  return;
}


/* EntityConditionTracker<Zombie, ZombieConditions>::GetDamageOverTime() */

undefined4 __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::GetDamageOverTime
          (EntityConditionTracker<Zombie,ZombieConditions> *this)

{
  EntityConditionTracker<Creature,CreatureConditions>::computeCachedValues
            ((EntityConditionTracker<Creature,CreatureConditions> *)this);
  return *(undefined4 *)(this + 0x40);
}


/* EntityConditionTracker<Plant, PlantConditions>::~EntityConditionTracker() */

void __thiscall
EntityConditionTracker<Plant,PlantConditions>::~EntityConditionTracker
          (EntityConditionTracker<Plant,PlantConditions> *this)

{
  *(undefined **)this = &DAT_06797470;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  std::vector<EntityCondition,std::allocator<EntityCondition>>::~vector
            ((vector<EntityCondition,std::allocator<EntityCondition>> *)(this + 0x20));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8));
  return;
}


/* EntityConditionTracker<Plant, PlantConditions>::~EntityConditionTracker() */

void __thiscall
EntityConditionTracker<Plant,PlantConditions>::~EntityConditionTracker
          (EntityConditionTracker<Plant,PlantConditions> *this)

{
  ~EntityConditionTracker(this);
  AK::FreeHook(this);
  return;
}


/* EntityConditionTracker<Plant, PlantConditions>::EndCondition(Plant*, PlantConditions) */

void __thiscall
EntityConditionTracker<Plant,PlantConditions>::EndCondition
          (EntityConditionTracker<Plant,PlantConditions> *this,Plant *param_1,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)FUN_03f24874(*(undefined8 *)(this + 0x20),(long)param_3);
  uVar4 = PVZ_EOT();
  *puVar2 = uVar4;
  puVar2[1] = uVar4;
  uVar1 = EntityModifierToFlag(1);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,true);
  puVar3 = (undefined1 *)FUN_03f24880(*(undefined8 *)(this + 8),(long)param_3);
  *puVar3 = 0;
  Plant::NotifyEndCondition(param_1,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<Plant, PlantConditions>::Update(Plant*) */

void __thiscall
EntityConditionTracker<Plant,PlantConditions>::Update
          (EntityConditionTracker<Plant,PlantConditions> *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  fVar7 = (float)PVZ_T();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar5 = *(undefined8 *)(this + 0x20);
  iVar2 = FUN_03f24844(uVar5,*(undefined8 *)(this + 0x28));
  if (0 < iVar2) {
    do {
      lVar3 = FUN_03f24874(uVar5,uVar4);
      cVar1 = HasCondition(this,uVar4 & 0xffffffff);
      if (cVar1 != '\0') {
        if (*(float *)(lVar3 + 8) < fVar7) {
          uVar8 = PVZ_EOT();
          *(undefined4 *)(lVar3 + 8) = uVar8;
          Plant::NotifyConditionEvent(param_1,uVar4 & 0xffffffff);
        }
        if (*(float *)(lVar3 + 4) < fVar7) {
          EndCondition(this,param_1,uVar6);
        }
        uVar5 = *(undefined8 *)(this + 0x20);
        iVar2 = FUN_03f24844(uVar5,*(undefined8 *)(this + 0x28));
      }
      uVar4 = uVar4 + 1;
      uVar6 = uVar4 & 0xffffffff;
    } while ((int)uVar4 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntityConditionTracker<Plant, PlantConditions>::ClearConditions(Plant*) */

void __thiscall
EntityConditionTracker<Plant,PlantConditions>::ClearConditions
          (EntityConditionTracker<Plant,PlantConditions> *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = FUN_03f24844(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  if (0 < iVar2) {
    do {
      cVar1 = HasCondition(this,iVar3);
      if (cVar1 != '\0') {
        EndCondition(this,param_1,iVar3);
        iVar2 = FUN_03f24844(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}


/* EntityConditionTracker<Plant, PlantConditions>::ApplyCondition(Plant*, PlantConditions, float,
   float) */

undefined4 * __thiscall
EntityConditionTracker<Plant,PlantConditions>::ApplyCondition
          (float param_1_00,float param_2,EntityConditionTracker<Plant,PlantConditions> *this,
          undefined8 param_1,int param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined4 uVar6;
  
  puVar3 = (undefined4 *)FUN_03f24874(*(undefined8 *)(this + 0x20),(long)param_5);
  if (0.0 < param_1_00) {
    fVar5 = (float)PVZ_EOT();
    if (fVar5 != param_1_00) {
      fVar5 = (float)PVZ_T();
      fVar5 = fVar5 + param_1_00;
    }
    cVar1 = HasCondition(this,param_5);
    if ((cVar1 == '\0') || ((float)puVar3[1] < fVar5)) {
      uVar6 = PVZ_T();
      *puVar3 = uVar6;
      puVar3[1] = fVar5;
      uVar2 = EntityModifierToFlag(1);
      SetFlag<unsigned_int>((uint *)(this + 0x48),uVar2,true);
      puVar4 = (undefined1 *)FUN_03f24880(*(undefined8 *)(this + 8),(long)param_5);
      *puVar4 = 1;
      if (param_2 != 0.0) {
        fVar5 = (float)PVZ_T();
        puVar3[2] = fVar5 + param_2;
      }
      Plant::NotifyApplyCondition(param_1,param_5);
    }
  }
  return puVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<Plant, PlantConditions>::EntityConditionTracker(int) */

void __thiscall
EntityConditionTracker<Plant,PlantConditions>::EntityConditionTracker
          (EntityConditionTracker<Plant,PlantConditions> *this,int param_1)

{
  uint uVar1;
  uchar local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined **)this = &DAT_06797470;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  Sexy::Color::Color((Color *)(this + 0x4c));
  Sexy::Color::Color((Color *)(this + 0x5c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::vector<EntityCondition,std::allocator<EntityCondition>>::resize
            ((vector<EntityCondition,std::allocator<EntityCondition>> *)(this + 0x20),(long)param_1)
  ;
  local_9 = '\0';
  std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),(long)param_1,
             &local_9);
  *(undefined4 *)(this + 0x48) = 0;
  uVar1 = EntityModifierToFlag(1);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<Zombie, ZombieConditions>::GetConditionDuration(ZombieConditions) const */

void __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::GetConditionDuration
          (EntityConditionTracker<Zombie,ZombieConditions> *this,int param_2)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float local_10;
  float local_c;
  long local_8;
  
  fVar4 = 0.0;
  local_8 = ___stack_chk_guard;
  cVar1 = HasCondition();
  if (cVar1 != '\0') {
    lVar2 = FUN_03fbef6c(*(undefined8 *)(this + 0x20),(long)param_2);
    fVar4 = *(float *)(lVar2 + 4);
    local_10 = (float)PVZ_T();
    local_10 = fVar4 - local_10;
    local_c = 0.0;
    pfVar3 = eastl::max_alt<float>(&local_10,&local_c);
    fVar4 = *pfVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4);
}


/* EntityConditionTracker<Zombie, ZombieConditions>::EndCondition(Zombie*, ZombieConditions) */

void __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::EndCondition
          (EntityConditionTracker<Zombie,ZombieConditions> *this,Zombie *param_1,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)FUN_03ff15a4(*(undefined8 *)(this + 0x20),(long)param_3);
  uVar4 = PVZ_EOT();
  *puVar2 = uVar4;
  puVar2[1] = uVar4;
  uVar1 = EntityModifierToFlag(1);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,true);
  puVar3 = (undefined1 *)FUN_03ff15b0(*(undefined8 *)(this + 8),(long)param_3);
  *puVar3 = 0;
  Zombie::NotifyEndCondition(param_1,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<Plant, PlantConditions>::GetConditionDuration(PlantConditions) const */

void __thiscall
EntityConditionTracker<Plant,PlantConditions>::GetConditionDuration
          (EntityConditionTracker<Plant,PlantConditions> *this,int param_2)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float local_10;
  float local_c;
  long local_8;
  
  fVar4 = 0.0;
  local_8 = ___stack_chk_guard;
  cVar1 = HasCondition();
  if (cVar1 != '\0') {
    lVar2 = FUN_041a0750(*(undefined8 *)(this + 0x20),(long)param_2);
    fVar4 = *(float *)(lVar2 + 4);
    local_10 = (float)PVZ_T();
    local_10 = fVar4 - local_10;
    local_c = 0.0;
    pfVar3 = eastl::max_alt<float>(&local_10,&local_c);
    fVar4 = *pfVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4);
}


/* EntityConditionTracker<Plant, PlantConditions>::GetCondition(PlantConditions) */

void __thiscall
EntityConditionTracker<Plant,PlantConditions>::GetCondition
          (EntityConditionTracker<Plant,PlantConditions> *this,int param_2)

{
  FUN_042c01b8(*(undefined8 *)(this + 0x20),(long)param_2);
  return;
}


/* EntityConditionTracker<Zombie, ZombieConditions>::GetScaledDamage() */

undefined4 __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::GetScaledDamage
          (EntityConditionTracker<Zombie,ZombieConditions> *this)

{
  EntityConditionTracker<Creature,CreatureConditions>::computeCachedValues
            ((EntityConditionTracker<Creature,CreatureConditions> *)this);
  return *(undefined4 *)(this + 0x44);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<Zombie, ZombieConditions>::Update(Zombie*) */

void __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::Update
          (EntityConditionTracker<Zombie,ZombieConditions> *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  fVar7 = (float)PVZ_T();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar5 = *(undefined8 *)(this + 0x20);
  iVar2 = FUN_045b3fa8(uVar5,*(undefined8 *)(this + 0x28));
  if (0 < iVar2) {
    do {
      lVar3 = FUN_045b3ea8(uVar5,uVar4);
      cVar1 = HasCondition(this,uVar4 & 0xffffffff);
      if (cVar1 != '\0') {
        if (*(float *)(lVar3 + 8) < fVar7) {
          uVar8 = PVZ_EOT();
          *(undefined4 *)(lVar3 + 8) = uVar8;
          Zombie::NotifyConditionEvent(param_1,uVar4 & 0xffffffff);
        }
        if (*(float *)(lVar3 + 4) < fVar7) {
          EndCondition(this,param_1,uVar6);
        }
        uVar5 = *(undefined8 *)(this + 0x20);
        iVar2 = FUN_045b3fa8(uVar5,*(undefined8 *)(this + 0x28));
      }
      uVar4 = uVar4 + 1;
      uVar6 = uVar4 & 0xffffffff;
    } while ((int)uVar4 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntityConditionTracker<Zombie, ZombieConditions>::ApplyCondition(Zombie*, ZombieConditions,
   float, float) */

undefined4 * __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::ApplyCondition
          (float param_1_00,float param_2,EntityConditionTracker<Zombie,ZombieConditions> *this,
          undefined8 param_1,int param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined4 uVar6;
  
  puVar3 = (undefined4 *)FUN_045b3ea8(*(undefined8 *)(this + 0x20),(long)param_5);
  if (0.0 < param_1_00) {
    fVar5 = (float)PVZ_EOT();
    if (fVar5 != param_1_00) {
      fVar5 = (float)PVZ_T();
      fVar5 = fVar5 + param_1_00;
    }
    cVar1 = HasCondition(this,param_5);
    if ((cVar1 == '\0') || ((float)puVar3[1] < fVar5)) {
      uVar6 = PVZ_T();
      *puVar3 = uVar6;
      puVar3[1] = fVar5;
      uVar2 = EntityModifierToFlag(1);
      SetFlag<unsigned_int>((uint *)(this + 0x48),uVar2,true);
      puVar4 = (undefined1 *)FUN_045b3fbc(*(undefined8 *)(this + 8),(long)param_5);
      *puVar4 = 1;
      if (param_2 != 0.0) {
        fVar5 = (float)PVZ_T();
        puVar3[2] = fVar5 + param_2;
      }
      Zombie::NotifyApplyCondition(param_1,param_5);
    }
  }
  return puVar3;
}


/* EntityConditionTracker<Zombie, ZombieConditions>::ClearConditions(Zombie*) */

void __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::ClearConditions
          (EntityConditionTracker<Zombie,ZombieConditions> *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = FUN_045b3fa8(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  if (0 < iVar2) {
    do {
      cVar1 = HasCondition(this,iVar3);
      if (cVar1 != '\0') {
        EndCondition(this,param_1,iVar3);
        iVar2 = FUN_045b3fa8(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<Zombie, ZombieConditions>::ClearConditionsNotMatching(Zombie*,
   std::vector<ZombieConditions, std::allocator<ZombieConditions> >) */

void __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::ClearConditionsNotMatching
          (EntityConditionTracker<Zombie,ZombieConditions> *this,undefined8 param_1,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar6 = 0;
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_045b3fa8(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  if (0 < iVar3) {
    do {
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_3);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_3);
      local_1c = iVar6;
      local_10 = std::
                 find<__gnu_cxx::__normal_iterator<ZombieConditions*,std::vector<ZombieConditions,std::allocator<ZombieConditions>>>,ZombieConditions>
                           (uVar4,uVar5,&local_1c);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_3);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
      if ((!bVar1) && (cVar2 = HasCondition(this,iVar6), cVar2 != '\0')) {
        EndCondition(this,param_1,iVar6);
      }
      iVar6 = iVar6 + 1;
      iVar3 = FUN_045b3fa8(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
    } while (iVar6 < iVar3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EntityConditionTracker<Zombie, ZombieConditions>::~EntityConditionTracker() */

void __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::~EntityConditionTracker
          (EntityConditionTracker<Zombie,ZombieConditions> *this)

{
  *(undefined **)this = &DAT_0686a8c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  std::vector<EntityCondition,std::allocator<EntityCondition>>::~vector
            ((vector<EntityCondition,std::allocator<EntityCondition>> *)(this + 0x20));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8));
  return;
}


/* EntityConditionTracker<Zombie, ZombieConditions>::~EntityConditionTracker() */

void __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::~EntityConditionTracker
          (EntityConditionTracker<Zombie,ZombieConditions> *this)

{
  ~EntityConditionTracker(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<Zombie, ZombieConditions>::EntityConditionTracker(int) */

void __thiscall
EntityConditionTracker<Zombie,ZombieConditions>::EntityConditionTracker
          (EntityConditionTracker<Zombie,ZombieConditions> *this,int param_1)

{
  uint uVar1;
  uchar local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined **)this = &DAT_0686a8c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  Sexy::Color::Color((Color *)(this + 0x4c));
  Sexy::Color::Color((Color *)(this + 0x5c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::vector<EntityCondition,std::allocator<EntityCondition>>::resize
            ((vector<EntityCondition,std::allocator<EntityCondition>> *)(this + 0x20),(long)param_1)
  ;
  local_9 = '\0';
  std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),(long)param_1,
             &local_9);
  *(undefined4 *)(this + 0x48) = 0;
  uVar1 = EntityModifierToFlag(1);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntityConditionTracker<Creature, CreatureConditions>::HasCondition(CreatureConditions) const */

bool __thiscall
EntityConditionTracker<Creature,CreatureConditions>::HasCondition
          (EntityConditionTracker<Creature,CreatureConditions> *this,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0480fbec(*(undefined8 *)(this + 8),(long)param_2);
  return *pcVar1 != '\0';
}


/* EntityConditionTracker<Creature, CreatureConditions>::ApplyCondition(Creature*,
   CreatureConditions, float, float) */

undefined4 * __thiscall
EntityConditionTracker<Creature,CreatureConditions>::ApplyCondition
          (float param_1_00,float param_2,EntityConditionTracker<Creature,CreatureConditions> *this,
          Creature *param_1,int param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined4 uVar6;
  
  puVar3 = (undefined4 *)FUN_0480fc34(*(undefined8 *)(this + 0x20),(long)param_5);
  if (0.0 < param_1_00) {
    fVar5 = (float)PVZ_EOT();
    if (fVar5 != param_1_00) {
      fVar5 = (float)PVZ_T();
      fVar5 = fVar5 + param_1_00;
    }
    cVar1 = HasCondition(this,param_5);
    if ((cVar1 == '\0') || ((float)puVar3[1] < fVar5)) {
      uVar6 = PVZ_T();
      *puVar3 = uVar6;
      puVar3[1] = fVar5;
      uVar2 = EntityModifierToFlag(1);
      SetFlag<unsigned_int>((uint *)(this + 0x48),uVar2,true);
      puVar4 = (undefined1 *)FUN_0480fc40(*(undefined8 *)(this + 8),(long)param_5);
      *puVar4 = 1;
      if (param_2 != 0.0) {
        fVar5 = (float)PVZ_T();
        puVar3[2] = fVar5 + param_2;
      }
      Creature::NotifyApplyCondition(param_1,param_5);
    }
  }
  return puVar3;
}


/* EntityConditionTracker<Creature, CreatureConditions>::EndCondition(Creature*, CreatureConditions)
    */

void __thiscall
EntityConditionTracker<Creature,CreatureConditions>::EndCondition
          (EntityConditionTracker<Creature,CreatureConditions> *this,undefined8 param_1,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)FUN_0480fc34(*(undefined8 *)(this + 0x20),(long)param_3);
  uVar4 = PVZ_EOT();
  *puVar2 = uVar4;
  puVar2[1] = uVar4;
  uVar1 = EntityModifierToFlag(1);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,true);
  puVar3 = (undefined1 *)FUN_0480fc40(*(undefined8 *)(this + 8),(long)param_3);
  *puVar3 = 0;
  Creature::NotifyEndCondition(param_1,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<Creature, CreatureConditions>::Update(Creature*) */

void __thiscall
EntityConditionTracker<Creature,CreatureConditions>::Update
          (EntityConditionTracker<Creature,CreatureConditions> *this,Creature *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  fVar7 = (float)PVZ_T();
  uVar6 = 0;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x70),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar5 = *(undefined8 *)(this + 0x20);
  iVar2 = FUN_0480fc20(uVar5,*(undefined8 *)(this + 0x28));
  if (0 < iVar2) {
    do {
      lVar3 = FUN_0480fc34(uVar5,uVar4);
      cVar1 = HasCondition(this,uVar4 & 0xffffffff);
      if (cVar1 != '\0') {
        if (*(float *)(lVar3 + 8) < fVar7) {
          uVar8 = PVZ_EOT();
          *(undefined4 *)(lVar3 + 8) = uVar8;
        }
        if (*(float *)(lVar3 + 4) < fVar7) {
          EndCondition(this,param_1,uVar6);
          uVar5 = *(undefined8 *)(this + 0x20);
          iVar2 = FUN_0480fc20(uVar5,*(undefined8 *)(this + 0x28));
        }
      }
      uVar4 = uVar4 + 1;
      uVar6 = uVar4 & 0xffffffff;
    } while ((int)uVar4 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntityConditionTracker<Creature, CreatureConditions>::ClearConditions(Creature*) */

void __thiscall
EntityConditionTracker<Creature,CreatureConditions>::ClearConditions
          (EntityConditionTracker<Creature,CreatureConditions> *this,Creature *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = FUN_0480fc20(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
  if (0 < iVar2) {
    do {
      cVar1 = HasCondition(this,iVar3);
      if (cVar1 != '\0') {
        EndCondition(this,param_1,iVar3);
        iVar2 = FUN_0480fc20(*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}


/* EntityConditionTracker<Creature, CreatureConditions>::~EntityConditionTracker() */

void __thiscall
EntityConditionTracker<Creature,CreatureConditions>::~EntityConditionTracker
          (EntityConditionTracker<Creature,CreatureConditions> *this)

{
  *(undefined **)this = &DAT_06902d70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x70));
  std::vector<EntityCondition,std::allocator<EntityCondition>>::~vector
            ((vector<EntityCondition,std::allocator<EntityCondition>> *)(this + 0x20));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8));
  return;
}


/* EntityConditionTracker<Creature, CreatureConditions>::~EntityConditionTracker() */

void __thiscall
EntityConditionTracker<Creature,CreatureConditions>::~EntityConditionTracker
          (EntityConditionTracker<Creature,CreatureConditions> *this)

{
  ~EntityConditionTracker(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntityConditionTracker<Creature, CreatureConditions>::EntityConditionTracker(int) */

void __thiscall
EntityConditionTracker<Creature,CreatureConditions>::EntityConditionTracker
          (EntityConditionTracker<Creature,CreatureConditions> *this,int param_1)

{
  uint uVar1;
  uchar local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined **)this = &DAT_06902d70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  Sexy::Color::Color((Color *)(this + 0x4c));
  Sexy::Color::Color((Color *)(this + 0x5c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x70));
  std::vector<EntityCondition,std::allocator<EntityCondition>>::resize
            ((vector<EntityCondition,std::allocator<EntityCondition>> *)(this + 0x20),(long)param_1)
  ;
  local_9 = '\0';
  std::vector<unsigned_char,std::allocator<unsigned_char>>::resize
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),(long)param_1,
             &local_9);
  *(undefined4 *)(this + 0x48) = 0;
  uVar1 = EntityModifierToFlag(1);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntityConditionTracker<Plant,
   PlantConditions>::EntityConditionTracker(EntityConditionTracker<Plant, PlantConditions> const&)
    */

void __thiscall
EntityConditionTracker<Plant,PlantConditions>::EntityConditionTracker
          (EntityConditionTracker<Plant,PlantConditions> *this,EntityConditionTracker *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined **)this = &DAT_06797470;
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<EntityCondition,std::allocator<EntityCondition>>::vector
            ((vector<EntityCondition,std::allocator<EntityCondition>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x3c) = uVar2;
  *(undefined4 *)(this + 0x40) = uVar3;
  *(undefined4 *)(this + 0x44) = uVar4;
  Sexy::Insets::Insets((Insets *)(this + 0x4c),(Insets *)(param_1 + 0x4c));
  Sexy::Insets::Insets((Insets *)(this + 0x5c),(Insets *)(param_1 + 0x5c));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x70),(RtWeakPtrBase *)(param_1 + 0x70));
  return;
}


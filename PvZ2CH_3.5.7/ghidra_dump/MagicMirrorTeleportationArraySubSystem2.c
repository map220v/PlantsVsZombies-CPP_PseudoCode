// Class: MagicMirrorTeleportationArraySubSystem2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicMirrorTeleportationArraySubSystem2::warpOutGameObject(MagicMirrorTeleportationObject&) */

void __thiscall
MagicMirrorTeleportationArraySubSystem2::warpOutGameObject
          (MagicMirrorTeleportationArraySubSystem2 *this,MagicMirrorTeleportationObject *param_1)

{
  RtObject *this_00;
  Zombie *this_01;
  Projectile *this_02;
  
  *(undefined4 *)(param_1 + 0x24) = 1;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  if (this_00 != (RtObject *)0x0) {
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    this_02 = Sexy::RtObject::Cast<Projectile>(this_00);
    if (this_01 != (Zombie *)0x0) {
      Zombie::StartWarpOut(this_01,_FUN_04c8b86c);
      Zombie::SetIsControlled(this_01,true);
      Zombie::SetIgnoresAllDamage(this_01,true);
      return;
    }
    if (this_02 != (Projectile *)0x0) {
      (**(code **)(*(long *)this_02 + 0x80))(this_02,1);
      Projectile::SetPaused(this_02,true);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 4;
  return;
}


/* MagicMirrorTeleportationArraySubSystem2::disappearGameObject(MagicMirrorTeleportationObject&) */

void __thiscall
MagicMirrorTeleportationArraySubSystem2::disappearGameObject
          (MagicMirrorTeleportationArraySubSystem2 *this,MagicMirrorTeleportationObject *param_1)

{
  RtObject *this_00;
  Zombie *this_01;
  Projectile *pPVar1;
  
  *(undefined4 *)(param_1 + 0x24) = 2;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  if (this_00 != (RtObject *)0x0) {
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    pPVar1 = Sexy::RtObject::Cast<Projectile>(this_00);
    if (this_01 != (Zombie *)0x0) {
      (**(code **)(*(long *)this_01 + 0x80))(this_01,1);
      Zombie::SetIgnoresAllDamage(this_01,true);
      (**(code **)(*(long *)this_01 + 0x78))(this_01,param_1 + 0x14);
      return;
    }
    if (pPVar1 != (Projectile *)0x0) {
      (**(code **)(*(long *)pPVar1 + 0x78))(pPVar1,param_1 + 0x14);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicMirrorTeleportationArraySubSystem2::warpInGameObject(MagicMirrorTeleportationObject&) */

void __thiscall
MagicMirrorTeleportationArraySubSystem2::warpInGameObject
          (MagicMirrorTeleportationArraySubSystem2 *this,MagicMirrorTeleportationObject *param_1)

{
  RtObject *this_00;
  Zombie *this_01;
  Projectile *this_02;
  
  *(undefined4 *)(param_1 + 0x24) = 3;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  if (this_00 != (RtObject *)0x0) {
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    this_02 = Sexy::RtObject::Cast<Projectile>(this_00);
    if (this_01 != (Zombie *)0x0) {
      Zombie::StartWarpIn(this_01,_FUN_04c8b9f4);
      Zombie::SetIgnoresAllDamage(this_01,true);
      (**(code **)(*(long *)this_01 + 0x80))(this_01,0);
      return;
    }
    if (this_02 != (Projectile *)0x0) {
      (**(code **)(*(long *)this_02 + 0x80))(this_02,0);
      Projectile::SetPaused(this_02,false);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 4;
  return;
}


/* MagicMirrorTeleportationArraySubSystem2::recoverGameObject(MagicMirrorTeleportationObject&) */

void __thiscall
MagicMirrorTeleportationArraySubSystem2::recoverGameObject
          (MagicMirrorTeleportationArraySubSystem2 *this,MagicMirrorTeleportationObject *param_1)

{
  RtObject *this_00;
  Zombie *this_01;
  
  *(undefined4 *)(param_1 + 0x24) = 4;
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  if (this_00 != (RtObject *)0x0) {
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    Sexy::RtObject::Cast<Projectile>(this_00);
    if (this_01 != (Zombie *)0x0) {
      (**(code **)(*(long *)this_01 + 0x80))(this_01,0);
      Zombie::SetIsControlled(this_01,false);
      Zombie::SetIgnoresAllDamage(this_01,false);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicMirrorTeleportationArraySubSystem2::addGameObject(Sexy::RtWeakPtr<GameObject>,
   Sexy::SexyVector3, Sexy::SexyVector3) */

void MagicMirrorTeleportationArraySubSystem2::addGameObject
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,
               MagicMirrorTeleportationArraySubSystem2 *param_7,RtWeakPtr *param_8)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  MagicMirrorTeleportationObject aMStack_30 [8];
  SexyVector3 aSStack_28 [12];
  SexyVector3 aSStack_1c [12];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_50 = param_4;
  local_4c = param_5;
  local_48 = param_6;
  local_40 = param_1;
  local_3c = param_2;
  local_38 = param_3;
  MagicMirrorTeleportationObject::MagicMirrorTeleportationObject(aMStack_30);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aMStack_30,param_8);
  Sexy::SexyVector3::operator=(aSStack_28,(SexyVector3 *)&local_40);
  Sexy::SexyVector3::operator=(aSStack_1c,(SexyVector3 *)&local_50);
  local_10 = PVZ_T();
  warpOutGameObject(param_7,aMStack_30);
  std::vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>>::
  push_back((vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>> *
            )(param_7 + 0x28),aMStack_30);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aMStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicMirrorTeleportationArraySubSystem2::StaticClassInit() */

void MagicMirrorTeleportationArraySubSystem2::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MagicMirrorTeleportationObject");
    (*pcVar3)(plVar2,asStack_10,FUN_04c9035c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MagicMirrorTeleportationArraySubSystem2");
    (*pcVar3)(plVar2,asStack_10,FUN_04c8f190,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagicMirrorTeleportationArraySubSystem2::StaticGetClass() */

long * MagicMirrorTeleportationArraySubSystem2::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"MagicMirrorTeleportationArraySubSystem2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicMirrorTeleportationArraySubSystem2::GetClass() const */

long * MagicMirrorTeleportationArraySubSystem2::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"MagicMirrorTeleportationArraySubSystem2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicMirrorTeleportationArraySubSystem2::findTeleportingGameObject(GameObject*) */

undefined8 __thiscall
MagicMirrorTeleportationArraySubSystem2::findTeleportingGameObject
          (MagicMirrorTeleportationArraySubSystem2 *this,GameObject *param_1)

{
  RtWeakPtr *this_00;
  ResourceInfo *pRVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = 0;
  do {
    uVar3 = uVar2;
    uVar4 = *(undefined8 *)(this + 0x10);
    uVar2 = FUN_04c8e6c0(uVar4,*(undefined8 *)(this + 0x18));
    if (uVar2 <= uVar3) {
      return 0;
    }
    this_00 = (RtWeakPtr *)FUN_04c8e6d4(uVar4,uVar3);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    uVar2 = uVar3 + 1;
  } while (param_1 != (GameObject *)pRVar1);
  uVar4 = FUN_04c8e6d4(*(undefined8 *)(this + 0x10),uVar3);
  return uVar4;
}


/* MagicMirrorTeleportationArraySubSystem2::MagicMirrorTeleportationArraySubSystem2() */

void __thiscall
MagicMirrorTeleportationArraySubSystem2::MagicMirrorTeleportationArraySubSystem2
          (MagicMirrorTeleportationArraySubSystem2 *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069953d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* MagicMirrorTeleportationArraySubSystem2::StaticNew() */

MagicMirrorTeleportationArraySubSystem2 * MagicMirrorTeleportationArraySubSystem2::StaticNew(void)

{
  MagicMirrorTeleportationArraySubSystem2 *this;
  
  this = ::operator_new(0x58);
  MagicMirrorTeleportationArraySubSystem2(this);
  return this;
}


/* MagicMirrorTeleportationArraySubSystem2::~MagicMirrorTeleportationArraySubSystem2() */

void __thiscall
MagicMirrorTeleportationArraySubSystem2::~MagicMirrorTeleportationArraySubSystem2
          (MagicMirrorTeleportationArraySubSystem2 *this)

{
  *(undefined ***)this = &PTR_GetClass_069953d0;
  std::vector<GameObject*,std::allocator<GameObject*>>::~vector
            ((vector<GameObject*,std::allocator<GameObject*>> *)(this + 0x40));
  std::vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>>::
  ~vector((vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>> *)
          (this + 0x28));
  std::vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>>::
  ~vector((vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>> *)
          (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* MagicMirrorTeleportationArraySubSystem2::~MagicMirrorTeleportationArraySubSystem2() */

void __thiscall
MagicMirrorTeleportationArraySubSystem2::~MagicMirrorTeleportationArraySubSystem2
          (MagicMirrorTeleportationArraySubSystem2 *this)

{
  ~MagicMirrorTeleportationArraySubSystem2(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicMirrorTeleportationArraySubSystem2::Update() */

void __thiscall
MagicMirrorTeleportationArraySubSystem2::Update(MagicMirrorTeleportationArraySubSystem2 *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  RtMixedPtrBase *this_03;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  undefined8 local_20;
  undefined8 local_18;
  ResourceInfo *local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  uVar11 = *(undefined8 *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  uVar12 = 0;
  lVar4 = FUN_04c8e6b4(uVar11,*(undefined8 *)(this + 0x48));
  if (lVar4 != 0) {
    do {
      uVar8 = 0;
      do {
        uVar10 = *(undefined8 *)(this + 0x10);
        iVar3 = (int)uVar8;
        uVar7 = FUN_04c8e6c0(uVar10,*(undefined8 *)(this + 0x18));
        if (uVar7 <= uVar8) goto LAB_04c9092c;
        this_02 = (RtWeakPtr *)FUN_04c8e6d4(uVar10,uVar8);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02);
        uVar11 = *(undefined8 *)(this + 0x40);
        puVar6 = (undefined8 *)FUN_04c8e6e0(uVar11,uVar12);
        uVar8 = uVar8 + 1;
      } while (pRVar5 != (ResourceInfo *)*puVar6);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_18 = __gnu_cxx::
                 __normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                 ::operator+((__normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                              *)&local_20,(long)iVar3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>>::
      erase((vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>> *
            )this_00,local_10);
      uVar11 = *(undefined8 *)(this + 0x40);
LAB_04c9092c:
      uVar12 = uVar12 + 1;
      uVar8 = FUN_04c8e6b4(uVar11,*(undefined8 *)(this + 0x48));
    } while (uVar12 < uVar8);
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  std::vector<GameObject*,std::allocator<GameObject*>>::clear
            ((vector<GameObject*,std::allocator<GameObject*>> *)(this + 0x40));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_01);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_01);
  std::vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>>::
  insert<__gnu_cxx::__normal_iterator<MagicMirrorTeleportationObject*,std::vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>>>,void>
            ((vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>>
              *)this_00,local_10,uVar11,uVar10);
  std::vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>>::clear
            ((vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>>
              *)this_01);
  uVar11 = *(undefined8 *)(this + 0x10);
  iVar3 = FUN_04c8e6c0(uVar11,*(undefined8 *)(this + 0x18));
  uVar1 = iVar3 - 1;
  if ((int)uVar1 < 0) {
LAB_04c90ad0:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar4 = (long)(int)uVar1;
  lVar9 = lVar4 + -1;
  lVar13 = lVar9 - (ulong)uVar1;
  this_03 = (RtMixedPtrBase *)FUN_04c8e6d4(uVar11,lVar4);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_03);
  if (cVar2 == '\0') goto LAB_04c90a90;
  do {
    lVar4 = lVar9;
    switch(*(undefined4 *)(this_03 + 0x24)) {
    case 1:
      fVar14 = (float)PVZ_T();
      if (*(float *)(this_03 + 0x20) + 0.1 < fVar14) {
        disappearGameObject(this,(MagicMirrorTeleportationObject *)this_03);
      }
      break;
    case 2:
      fVar14 = (float)PVZ_T();
      if (*(float *)(this_03 + 0x20) + 0.6 < fVar14) {
        warpInGameObject(this,(MagicMirrorTeleportationObject *)this_03);
      }
      break;
    case 3:
      fVar14 = (float)PVZ_T();
      if (*(float *)(this_03 + 0x20) + 0.70000005 < fVar14) {
        recoverGameObject(this,(MagicMirrorTeleportationObject *)this_03);
      }
      break;
    case 4:
      local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_03);
      std::vector<GameObject*,std::allocator<GameObject*>>::push_back
                ((vector<GameObject*,std::allocator<GameObject*>> *)(this + 0x40),
                 (GameObject **)&local_10);
    }
    while( true ) {
      if (lVar4 == lVar13) goto LAB_04c90ad0;
      lVar9 = lVar4 + -1;
      this_03 = (RtMixedPtrBase *)FUN_04c8e6d4(*(undefined8 *)(this + 0x10),lVar4);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_03);
      if (cVar2 != '\0') break;
LAB_04c90a90:
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_18 = __gnu_cxx::
                 __normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                 ::operator+((__normal_iterator<MeteorLauncherEntry*,std::vector<MeteorLauncherEntry,std::allocator<MeteorLauncherEntry>>>
                              *)&local_20,lVar4);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>>::
      erase((vector<MagicMirrorTeleportationObject,std::allocator<MagicMirrorTeleportationObject>> *
            )this_00,local_10);
      lVar4 = lVar9;
    }
  } while( true );
}


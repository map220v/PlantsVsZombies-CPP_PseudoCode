// Class: MagicMirrorTeleportationArraySubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicMirrorTeleportationArraySubSystem::StaticClassInit() */

void MagicMirrorTeleportationArraySubSystem::StaticClassInit(void)

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
    (*pcVar3)(plVar2,asStack_10,FUN_04c8c574,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MagicMirrorTeleportationArraySubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04c8b0e4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagicMirrorTeleportationArraySubSystem::StaticGetClass() */

long * MagicMirrorTeleportationArraySubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MagicMirrorTeleportationArraySubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicMirrorTeleportationArraySubSystem::GetClass() const */

long * MagicMirrorTeleportationArraySubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"MagicMirrorTeleportationArraySubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagicMirrorTeleportationArraySubSystem::findTeleportingGameObject(GameObject*) */

undefined8 __thiscall
MagicMirrorTeleportationArraySubSystem::findTeleportingGameObject
          (MagicMirrorTeleportationArraySubSystem *this,GameObject *param_1)

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
    uVar2 = FUN_04c8a6bc(uVar4,*(undefined8 *)(this + 0x18));
    if (uVar2 <= uVar3) {
      return 0;
    }
    this_00 = (RtWeakPtr *)FUN_04c8a6d0(uVar4,uVar3);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    uVar2 = uVar3 + 1;
  } while (param_1 != (GameObject *)pRVar1);
  uVar4 = FUN_04c8a6d0(*(undefined8 *)(this + 0x10),uVar3);
  return uVar4;
}


/* MagicMirrorTeleportationArraySubSystem::MagicMirrorTeleportationArraySubSystem() */

void __thiscall
MagicMirrorTeleportationArraySubSystem::MagicMirrorTeleportationArraySubSystem
          (MagicMirrorTeleportationArraySubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06994e50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* MagicMirrorTeleportationArraySubSystem::StaticNew() */

MagicMirrorTeleportationArraySubSystem * MagicMirrorTeleportationArraySubSystem::StaticNew(void)

{
  MagicMirrorTeleportationArraySubSystem *this;
  
  this = ::operator_new(0x58);
  MagicMirrorTeleportationArraySubSystem(this);
  return this;
}


/* MagicMirrorTeleportationArraySubSystem::~MagicMirrorTeleportationArraySubSystem() */

void __thiscall
MagicMirrorTeleportationArraySubSystem::~MagicMirrorTeleportationArraySubSystem
          (MagicMirrorTeleportationArraySubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06994e50;
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


/* MagicMirrorTeleportationArraySubSystem::~MagicMirrorTeleportationArraySubSystem() */

void __thiscall
MagicMirrorTeleportationArraySubSystem::~MagicMirrorTeleportationArraySubSystem
          (MagicMirrorTeleportationArraySubSystem *this)

{
  ~MagicMirrorTeleportationArraySubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagicMirrorTeleportationArraySubSystem::Update() */

void __thiscall
MagicMirrorTeleportationArraySubSystem::Update(MagicMirrorTeleportationArraySubSystem *this)

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
  lVar4 = FUN_04c8a6b0(uVar11,*(undefined8 *)(this + 0x48));
  if (lVar4 != 0) {
    do {
      uVar8 = 0;
      do {
        uVar10 = *(undefined8 *)(this + 0x10);
        iVar3 = (int)uVar8;
        uVar7 = FUN_04c8a6bc(uVar10,*(undefined8 *)(this + 0x18));
        if (uVar7 <= uVar8) goto LAB_04c8dbe4;
        this_02 = (RtWeakPtr *)FUN_04c8a6d0(uVar10,uVar8);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02);
        uVar11 = *(undefined8 *)(this + 0x40);
        puVar6 = (undefined8 *)FUN_04c8a6dc(uVar11,uVar12);
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
LAB_04c8dbe4:
      uVar12 = uVar12 + 1;
      uVar8 = FUN_04c8a6b0(uVar11,*(undefined8 *)(this + 0x48));
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
  iVar3 = FUN_04c8a6bc(uVar11,*(undefined8 *)(this + 0x18));
  uVar1 = iVar3 - 1;
  if ((int)uVar1 < 0) {
LAB_04c8dd88:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar4 = (long)(int)uVar1;
  lVar9 = lVar4 + -1;
  lVar13 = lVar9 - (ulong)uVar1;
  this_03 = (RtMixedPtrBase *)FUN_04c8a6d0(uVar11,lVar4);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_03);
  if (cVar2 == '\0') goto LAB_04c8dd48;
  do {
    lVar4 = lVar9;
    switch(*(undefined4 *)(this_03 + 0x24)) {
    case 1:
      fVar14 = (float)PVZ_T();
      if (*(float *)(this_03 + 0x20) + 0.1 < fVar14) {
        MagicMirrorTeleportationArraySubSystem2::disappearGameObject
                  ((MagicMirrorTeleportationArraySubSystem2 *)this,
                   (MagicMirrorTeleportationObject *)this_03);
      }
      break;
    case 2:
      fVar14 = (float)PVZ_T();
      if (*(float *)(this_03 + 0x20) + 0.6 < fVar14) {
        MagicMirrorTeleportationArraySubSystem2::warpInGameObject
                  ((MagicMirrorTeleportationArraySubSystem2 *)this,
                   (MagicMirrorTeleportationObject *)this_03);
      }
      break;
    case 3:
      fVar14 = (float)PVZ_T();
      if (*(float *)(this_03 + 0x20) + 0.70000005 < fVar14) {
        MagicMirrorTeleportationArraySubSystem2::recoverGameObject
                  ((MagicMirrorTeleportationArraySubSystem2 *)this,
                   (MagicMirrorTeleportationObject *)this_03);
      }
      break;
    case 4:
      local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_03);
      std::vector<GameObject*,std::allocator<GameObject*>>::push_back
                ((vector<GameObject*,std::allocator<GameObject*>> *)(this + 0x40),
                 (GameObject **)&local_10);
    }
    while( true ) {
      if (lVar4 == lVar13) goto LAB_04c8dd88;
      lVar9 = lVar4 + -1;
      this_03 = (RtMixedPtrBase *)FUN_04c8a6d0(*(undefined8 *)(this + 0x10),lVar4);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_03);
      if (cVar2 != '\0') break;
LAB_04c8dd48:
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


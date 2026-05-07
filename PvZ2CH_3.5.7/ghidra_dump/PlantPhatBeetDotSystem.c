// Class: PlantPhatBeetDotSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeetDotSystem::StaticClassInit() */

void PlantPhatBeetDotSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"DotStruct");
    (*pcVar3)(plVar2,asStack_10,FUN_0416c518,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantPhatBeetDotSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_0416c9a8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPhatBeetDotSystem::StaticGetClass() */

long * PlantPhatBeetDotSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPhatBeetDotSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPhatBeetDotSystem::GetClass() const */

long * PlantPhatBeetDotSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPhatBeetDotSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPhatBeetDotSystem::SetData(float, float) */

void __thiscall
PlantPhatBeetDotSystem::SetData(PlantPhatBeetDotSystem *this,float param_1,float param_2)

{
  *(float *)(this + 0x2c) = param_1;
  *(float *)(this + 0x30) = param_2;
  return;
}


/* PlantPhatBeetDotSystem::PlantPhatBeetDotSystem() */

void __thiscall PlantPhatBeetDotSystem::PlantPhatBeetDotSystem(PlantPhatBeetDotSystem *this)

{
  undefined4 uVar1;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067f4450;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = 0x41200000;
  *(undefined4 *)(this + 0x30) = 0x40400000;
  std::vector<DotStruct,std::allocator<DotStruct>>::clear
            ((vector<DotStruct,std::allocator<DotStruct>> *)(this + 0x10));
  return;
}


/* PlantPhatBeetDotSystem::StaticNew() */

PlantPhatBeetDotSystem * PlantPhatBeetDotSystem::StaticNew(void)

{
  PlantPhatBeetDotSystem *this;
  
  this = ::operator_new(0x38);
  PlantPhatBeetDotSystem(this);
  return this;
}


/* PlantPhatBeetDotSystem::~PlantPhatBeetDotSystem() */

void __thiscall PlantPhatBeetDotSystem::~PlantPhatBeetDotSystem(PlantPhatBeetDotSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067f4450;
  std::vector<DotStruct,std::allocator<DotStruct>>::~vector
            ((vector<DotStruct,std::allocator<DotStruct>> *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantPhatBeetDotSystem::~PlantPhatBeetDotSystem() */

void __thiscall PlantPhatBeetDotSystem::~PlantPhatBeetDotSystem(PlantPhatBeetDotSystem *this)

{
  ~PlantPhatBeetDotSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeetDotSystem::Update() */

void __thiscall PlantPhatBeetDotSystem::Update(PlantPhatBeetDotSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *pRVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  DamageInfo *pDVar9;
  undefined8 local_80;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_T();
  if (*(float *)(this + 0x28) < fVar7) {
    fVar7 = (float)PVZ_T();
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x10);
    *(float *)(this + 0x28) = fVar7 + 1.0;
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
      if (!bVar1) break;
      pRVar3 = (RtMixedPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar3);
      if (cVar2 != '\0') goto LAB_0416d0e0;
      do {
        do {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_68,(__normal_iterator *)&local_80);
          local_80 = std::vector<DotStruct,std::allocator<DotStruct>>::erase
                               ((vector<DotStruct,std::allocator<DotStruct>> *)this_00,local_68[0]);
          local_68[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(this_00);
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
          if (!bVar1) goto LAB_0416cff8;
          pRVar3 = (RtMixedPtrBase *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
          cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar3);
        } while (cVar2 == '\0');
LAB_0416d0e0:
        lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
        fVar8 = *(float *)(lVar4 + 8);
        fVar7 = (float)PVZ_T();
      } while (fVar8 <= fVar7);
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
                    /* WARNING: Load size is inaccurate */
      pDVar9._0_4_ = *(DamageInfo **)(this + 0x2c);
      pcVar6 = *(code **)(*plVar5 + 0x110);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar9._0_4_,local_70,local_6c,
                 (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_68,1,0,aPStack_78,0);
      (*pcVar6)(plVar5,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
      FUN_0416b70c((__normal_iterator *)&local_80);
    }
  }
LAB_0416cff8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPhatBeetDotSystem::AddZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantPhatBeetDotSystem::AddZombie(PlantPhatBeetDotSystem *this,RtWeakPtr *param_2)

{
  FishingZombieInitData aFStack_18 [8];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FishingZombieInitData::FishingZombieInitData(aFStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)aFStack_18,param_2);
  local_10 = (float)PVZ_T();
  local_10 = local_10 + *(float *)(this + 0x30);
  std::vector<DotStruct,std::allocator<DotStruct>>::push_back
            ((vector<DotStruct,std::allocator<DotStruct>> *)(this + 0x10),(DotStruct *)aFStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


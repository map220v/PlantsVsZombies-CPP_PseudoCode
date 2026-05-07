// Class: ContinuousDamageSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContinuousDamageSystem::StaticClassInit() */

void ContinuousDamageSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"EndurianGasSubsystemItem");
    (*pcVar3)(plVar2,asStack_10,FUN_04087ddc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ContinuousDamageSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_04088ddc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ContinuousDamageSystem::StaticGetClass() */

long * ContinuousDamageSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ContinuousDamageSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ContinuousDamageSystem::GetClass() const */

long * ContinuousDamageSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ContinuousDamageSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ContinuousDamageSystem::ContinuousDamageSystem() */

void __thiscall ContinuousDamageSystem::ContinuousDamageSystem(ContinuousDamageSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067cc440;
  *(undefined4 *)(this + 0x10) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* ContinuousDamageSystem::StaticNew() */

ContinuousDamageSystem * ContinuousDamageSystem::StaticNew(void)

{
  ContinuousDamageSystem *this;
  
  this = ::operator_new(0x30);
  ContinuousDamageSystem(this);
  return this;
}


/* ContinuousDamageSystem::~ContinuousDamageSystem() */

void __thiscall ContinuousDamageSystem::~ContinuousDamageSystem(ContinuousDamageSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067cc440;
  std::vector<ContinuousDamageSystem::Item,std::allocator<ContinuousDamageSystem::Item>>::~vector
            ((vector<ContinuousDamageSystem::Item,std::allocator<ContinuousDamageSystem::Item>> *)
             (this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ContinuousDamageSystem::~ContinuousDamageSystem() */

void __thiscall ContinuousDamageSystem::~ContinuousDamageSystem(ContinuousDamageSystem *this)

{
  ~ContinuousDamageSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContinuousDamageSystem::Update() */

void __thiscall ContinuousDamageSystem::Update(ContinuousDamageSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  Item *this_01;
  long lVar2;
  float fVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  if (fVar3 <= *(float *)(this + 0x10)) {
LAB_0408a3f0:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  fVar3 = (float)PVZ_T();
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  *(float *)(this + 0x10) = fVar3 + 1.0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) goto LAB_0408a3f0;
      this_01 = (Item *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Item::ApplyDamage(this_01);
      fVar3 = (float)PVZ_T();
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (fVar3 <= *(float *)(lVar2 + 0x10)) break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<ContinuousDamageSystem::Item,std::allocator<ContinuousDamageSystem::Item>>::
                 erase((vector<ContinuousDamageSystem::Item,std::allocator<ContinuousDamageSystem::Item>>
                        *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    FUN_04088194((__normal_iterator *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContinuousDamageSystem::AddItem(float, float, Sexy::SexyVector2 const&, float) */

void __thiscall
ContinuousDamageSystem::AddItem
          (ContinuousDamageSystem *this,float param_1,float param_2,SexyVector2 *param_3,
          float param_4)

{
  float fVar1;
  Item aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  Item::Item(aIStack_28,param_1,fVar1 + param_2,param_3,param_4);
  std::vector<ContinuousDamageSystem::Item,std::allocator<ContinuousDamageSystem::Item>>::push_back
            ((vector<ContinuousDamageSystem::Item,std::allocator<ContinuousDamageSystem::Item>> *)
             (this + 0x18),aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: NightPoisonSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightPoisonSubSystem::StaticClassInit() */

void NightPoisonSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"NightPoisonSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04e41998,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NightPoisonSubSystem::StaticGetClass() */

long * NightPoisonSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NightPoisonSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NightPoisonSubSystem::GetClass() const */

long * NightPoisonSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"NightPoisonSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NightPoisonSubSystem::NightPoisonSubSystem() */

void __thiscall NightPoisonSubSystem::NightPoisonSubSystem(NightPoisonSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_069de9c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* NightPoisonSubSystem::StaticNew() */

NightPoisonSubSystem * NightPoisonSubSystem::StaticNew(void)

{
  NightPoisonSubSystem *this;
  
  this = ::operator_new(0x28);
  NightPoisonSubSystem(this);
  return this;
}


/* NightPoisonSubSystem::~NightPoisonSubSystem() */

void __thiscall NightPoisonSubSystem::~NightPoisonSubSystem(NightPoisonSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_069de9c0;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x10))
  ;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* NightPoisonSubSystem::~NightPoisonSubSystem() */

void __thiscall NightPoisonSubSystem::~NightPoisonSubSystem(NightPoisonSubSystem *this)

{
  ~NightPoisonSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* NightPoisonSubSystem::AddPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall NightPoisonSubSystem::AddPlant(NightPoisonSubSystem *this,RtWeakPtr *param_2)

{
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x10),
             param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NightPoisonSubSystem::Update() */

void __thiscall NightPoisonSubSystem::Update(NightPoisonSubSystem *this)

{
  vector *pvVar1;
  bool bVar2;
  RtWeakPtr *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  PlantNightcap *this_02;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pvVar1 = (vector *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
  do {
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar2) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (!bVar2) break;
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      nop();
      if (this_02 != (PlantNightcap *)0x0) {
        PlantNightcap::poisonDamage(this_02);
      }
      FUN_04e40a58((__normal_iterator *)&local_18);
      local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(pvVar1);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
                         ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                          pvVar1,local_10);
  } while( true );
}


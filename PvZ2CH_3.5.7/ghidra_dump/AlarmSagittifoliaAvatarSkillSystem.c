// Class: AlarmSagittifoliaAvatarSkillSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaAvatarSkillSystem::StaticClassInit() */

void AlarmSagittifoliaAvatarSkillSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"AlarmSagittifoliaAvatarSkillSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03e89520,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AlarmSagittifoliaAvatarSkillSystem::StaticGetClass() */

long * AlarmSagittifoliaAvatarSkillSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AlarmSagittifoliaAvatarSkillSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AlarmSagittifoliaAvatarSkillSystem::GetClass() const */

long * AlarmSagittifoliaAvatarSkillSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"AlarmSagittifoliaAvatarSkillSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AlarmSagittifoliaAvatarSkillSystem::AlarmSagittifoliaAvatarSkillSystem() */

void __thiscall
AlarmSagittifoliaAvatarSkillSystem::AlarmSagittifoliaAvatarSkillSystem
          (AlarmSagittifoliaAvatarSkillSystem *this)

{
  undefined4 uVar1;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0678fd20;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x10) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<AlarmSagittifoliaAvatarSkill,std::allocator<AlarmSagittifoliaAvatarSkill>>::clear
            ((vector<AlarmSagittifoliaAvatarSkill,std::allocator<AlarmSagittifoliaAvatarSkill>> *)
             (this + 0x18));
  return;
}


/* AlarmSagittifoliaAvatarSkillSystem::StaticNew() */

AlarmSagittifoliaAvatarSkillSystem * AlarmSagittifoliaAvatarSkillSystem::StaticNew(void)

{
  AlarmSagittifoliaAvatarSkillSystem *this;
  
  this = ::operator_new(0x30);
  AlarmSagittifoliaAvatarSkillSystem(this);
  return this;
}


/* AlarmSagittifoliaAvatarSkillSystem::~AlarmSagittifoliaAvatarSkillSystem() */

void __thiscall
AlarmSagittifoliaAvatarSkillSystem::~AlarmSagittifoliaAvatarSkillSystem
          (AlarmSagittifoliaAvatarSkillSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0678fd20;
  std::vector<AlarmSagittifoliaAvatarSkill,std::allocator<AlarmSagittifoliaAvatarSkill>>::clear
            ((vector<AlarmSagittifoliaAvatarSkill,std::allocator<AlarmSagittifoliaAvatarSkill>> *)
             (this + 0x18));
  std::vector<AlarmSagittifoliaAvatarSkill,std::allocator<AlarmSagittifoliaAvatarSkill>>::~vector
            ((vector<AlarmSagittifoliaAvatarSkill,std::allocator<AlarmSagittifoliaAvatarSkill>> *)
             (this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* AlarmSagittifoliaAvatarSkillSystem::~AlarmSagittifoliaAvatarSkillSystem() */

void __thiscall
AlarmSagittifoliaAvatarSkillSystem::~AlarmSagittifoliaAvatarSkillSystem
          (AlarmSagittifoliaAvatarSkillSystem *this)

{
  ~AlarmSagittifoliaAvatarSkillSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaAvatarSkillSystem::CreateEffect(float, Sexy::Point const&, DamageInfo const&) */

void __thiscall
AlarmSagittifoliaAvatarSkillSystem::CreateEffect
          (AlarmSagittifoliaAvatarSkillSystem *this,float param_1,Point *param_2,DamageInfo *param_3
          )

{
  AlarmSagittifoliaAvatarSkill aAStack_120 [280];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AlarmSagittifoliaAvatarSkill::AlarmSagittifoliaAvatarSkill(aAStack_120);
  AlarmSagittifoliaAvatarSkill::setInfo(aAStack_120,param_1,param_2,param_3);
  std::vector<AlarmSagittifoliaAvatarSkill,std::allocator<AlarmSagittifoliaAvatarSkill>>::push_back
            ((vector<AlarmSagittifoliaAvatarSkill,std::allocator<AlarmSagittifoliaAvatarSkill>> *)
             (this + 0x18),aAStack_120);
  AlarmSagittifoliaAvatarSkill::~AlarmSagittifoliaAvatarSkill(aAStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AlarmSagittifoliaAvatarSkillSystem::Update() */

void __thiscall AlarmSagittifoliaAvatarSkillSystem::Update(AlarmSagittifoliaAvatarSkillSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  AlarmSagittifoliaAvatarSkill *this_01;
  long *plVar2;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  if (fVar3 <= *(float *)(this + 0x10)) {
LAB_03e8a840:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        fVar3 = (float)PVZ_T();
        *(float *)(this + 0x10) = fVar3 + 1.0;
        goto LAB_03e8a840;
      }
      this_01 = (AlarmSagittifoliaAvatarSkill *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      AlarmSagittifoliaAvatarSkill::takeEffect(this_01);
      fVar3 = (float)PVZ_T();
      plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      fVar4 = (float)FUN_03e882d8(*(undefined4 *)((long)plVar2 + 0xa4));
      if (fVar3 <= fVar4) break;
      (**(code **)(*plVar2 + 0x48))();
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      local_18 = std::
                 vector<AlarmSagittifoliaAvatarSkill,std::allocator<AlarmSagittifoliaAvatarSkill>>::
                 erase((vector<AlarmSagittifoliaAvatarSkill,std::allocator<AlarmSagittifoliaAvatarSkill>>
                        *)this_00,local_10);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    FUN_03e88e68((__normal_iterator *)&local_18);
  } while( true );
}


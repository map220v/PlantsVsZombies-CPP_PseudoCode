// Class: ZombiePianoSubsystem


/* ZombiePianoSubsystem::onInitialized() */

void __thiscall ZombiePianoSubsystem::onInitialized(ZombiePianoSubsystem *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  this[0x48] = (ZombiePianoSubsystem)0x0;
  this[0x49] = (ZombiePianoSubsystem)0x0;
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePianoSubsystem::StaticClassInit() */

void ZombiePianoSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDance");
    (*pcVar3)(plVar2,asStack_10,FUN_046f41b0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombiePianoSubsystem");
    (*pcVar3)(plVar2,asStack_10,FUN_046f4420,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePianoSubsystem::StaticGetClass() */

long * ZombiePianoSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePianoSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePianoSubsystem::GetClass() const */

long * ZombiePianoSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePianoSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePianoSubsystem::canDance() */

void __thiscall ZombiePianoSubsystem::canDance(ZombiePianoSubsystem *this)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  RtWeakPtrBase *pRVar4;
  Zombie *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar8 = *(undefined8 *)(this + 0x10);
    uVar3 = FUN_046f3858(uVar8,*(undefined8 *)(this + 0x18));
    if (uVar3 <= uVar7) {
      cVar1 = '\0';
LAB_046f3c0c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    pRVar4 = (RtWeakPtrBase *)FUN_046f3864(uVar8,uVar7);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if (cVar1 != '\0') {
      this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      cVar2 = Zombie::IsSuspended(this_00);
      if (cVar2 == '\0') {
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_01);
        if (*pfVar5 <= 750.0) {
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          cVar2 = (**(code **)(*plVar6 + 0x328))();
          if (cVar2 == '\0') {
            plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
            cVar2 = (**(code **)(*plVar6 + 0x330))();
            if (cVar2 == '\0') {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
              goto LAB_046f3c0c;
            }
          }
        }
      }
    }
    uVar7 = uVar7 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePianoSubsystem::inIntro() */

void __thiscall ZombiePianoSubsystem::inIntro(ZombiePianoSubsystem *this)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  RtWeakPtrBase *pRVar4;
  Zombie *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  float *pfVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  do {
    uVar9 = *(undefined8 *)(this + 0x10);
    uVar3 = FUN_046f3858(uVar9,*(undefined8 *)(this + 0x18));
    if (uVar3 <= uVar8) {
      cVar1 = '\0';
LAB_046f3d5c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    pRVar4 = (RtWeakPtrBase *)FUN_046f3864(uVar9,uVar8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if (cVar1 != '\0') {
      this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      cVar2 = Zombie::IsSuspended(this_00);
      if (cVar2 == '\0') {
        p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(p_Var5);
        if (750.0 <= *pfVar6) {
          p_Var5 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(p_Var5);
          if (*pfVar6 <= 800.0) {
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
            cVar2 = (**(code **)(*plVar7 + 0x328))();
            if (cVar2 == '\0') {
              plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
              cVar2 = (**(code **)(*plVar7 + 0x330))();
              if (cVar2 == '\0') {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
                goto LAB_046f3d5c;
              }
            }
          }
        }
      }
    }
    uVar8 = uVar8 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  } while( true );
}


/* ZombiePianoSubsystem::calculateDanceTime() const */

float ZombiePianoSubsystem::calculateDanceTime(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_T();
  fVar2 = (float)Sexy::Rand(3.0);
  return fVar1 + fVar2 + 5.0;
}


/* ZombiePianoSubsystem::ForceActivate() */

void __thiscall ZombiePianoSubsystem::ForceActivate(ZombiePianoSubsystem *this)

{
  undefined4 uVar1;
  
  if (this[0x48] == (ZombiePianoSubsystem)0x0) {
    this[0x48] = (ZombiePianoSubsystem)0x1;
    uVar1 = calculateDanceTime();
    *(undefined4 *)(this + 0x28) = uVar1;
  }
  return;
}


/* ZombiePianoSubsystem::ZombiePianoSubsystem() */

void __thiscall ZombiePianoSubsystem::ZombiePianoSubsystem(ZombiePianoSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_068b7f40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* ZombiePianoSubsystem::StaticNew() */

ZombiePianoSubsystem * ZombiePianoSubsystem::StaticNew(void)

{
  ZombiePianoSubsystem *this;
  
  this = ::operator_new(0x50);
  ZombiePianoSubsystem(this);
  return this;
}


/* ZombiePianoSubsystem::registerForEvents() */

void __thiscall ZombiePianoSubsystem::registerForEvents(ZombiePianoSubsystem *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<ZombiePianoSubsystem,void(ZombiePianoSubsystem::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieDestroyed,&local_40);
  return;
}


/* ZombiePianoSubsystem::~ZombiePianoSubsystem() */

void __thiscall ZombiePianoSubsystem::~ZombiePianoSubsystem(ZombiePianoSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b7f40;
  std::vector<ZombieDance,std::allocator<ZombieDance>>::~vector
            ((vector<ZombieDance,std::allocator<ZombieDance>> *)(this + 0x30));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ZombiePianoSubsystem::~ZombiePianoSubsystem() */

void __thiscall ZombiePianoSubsystem::~ZombiePianoSubsystem(ZombiePianoSubsystem *this)

{
  ~ZombiePianoSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* ZombiePianoSubsystem::onDestroy() */

void __thiscall ZombiePianoSubsystem::onDestroy(ZombiePianoSubsystem *this)

{
  char *pcVar1;
  
  if (this[0x49] != (ZombiePianoSubsystem)0x0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Stop_MainTheme");
    this[0x49] = (ZombiePianoSubsystem)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePianoSubsystem::updateDancers() */

void __thiscall ZombiePianoSubsystem::updateDancers(ZombiePianoSubsystem *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  long *plVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  long lVar7;
  Zombie *pZVar8;
  EntityConditionTracker<Creature,CreatureConditions> *this_00;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  uVar10 = *(undefined8 *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_046f3828(uVar10,*(undefined8 *)(this + 0x38));
  uVar1 = iVar3 - 1;
  if ((int)uVar1 < 0) {
LAB_046f4da8:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar11 = (long)(int)uVar1 + -1;
  lVar7 = lVar11;
  lVar13 = (long)(int)uVar1;
  do {
    lVar12 = lVar7;
    pfVar4 = (float *)FUN_046f3850(uVar10,lVar13);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)(pfVar4 + 2));
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
    if (cVar2 == '\0') {
LAB_046f4c40:
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x30));
      local_20 = __gnu_cxx::
                 __normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                 ::operator+((__normal_iterator<Sexy::RtInvokeVariant*,std::vector<Sexy::RtInvokeVariant,std::allocator<Sexy::RtInvokeVariant>>>
                              *)&local_28,lVar13);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_20);
      std::vector<ZombieDance,std::allocator<ZombieDance>>::erase
                ((vector<ZombieDance,std::allocator<ZombieDance>> *)(this + 0x30),local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    else {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      cVar2 = (**(code **)(*plVar5 + 0x328))();
      if (cVar2 != '\0') goto LAB_046f4c40;
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      lVar7 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var6);
      if (*(float *)(lVar7 + 4) == *pfVar4) goto LAB_046f4c40;
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      cVar2 = Zombie::IsControlled(pZVar8);
      if (cVar2 != '\0') goto LAB_046f4c40;
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      this_00 = (EntityConditionTracker<Creature,CreatureConditions> *)
                Zombie::GetConditionTracker(pZVar8);
      fVar14 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_00)
      ;
      if (fVar14 == 0.0) {
        fVar14 = 1.0;
      }
      fVar16 = pfVar4[1];
      fVar15 = (float)PVZ_Dt();
      fVar16 = fVar14 * fVar15 * fVar16;
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      puVar9 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var6);
      uVar10 = *puVar9;
      local_10 = *(undefined4 *)(puVar9 + 1);
      local_18._4_4_ = (float)((ulong)uVar10 >> 0x20);
      local_18 = uVar10;
      if (*pfVar4 <= local_18._4_4_) {
        local_20 = CONCAT44(local_20._4_4_,local_18._4_4_ - fVar16);
        pfVar4 = eastl::max_alt<float>((float *)&local_20,pfVar4);
        local_18 = CONCAT44(*pfVar4,(undefined4)local_18);
      }
      else {
        local_20 = CONCAT44(local_20._4_4_,fVar16 + local_18._4_4_);
        pfVar4 = eastl::min_alt<float>((float *)&local_20,pfVar4);
        local_18 = CONCAT44(*pfVar4,(undefined4)local_18);
      }
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
      (**(code **)(*plVar5 + 0x78))
                (plVar5,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    }
    if (lVar12 == lVar11 - (ulong)uVar1) goto LAB_046f4da8;
    uVar10 = *(undefined8 *)(this + 0x30);
    lVar7 = lVar12 + -1;
    lVar13 = lVar12;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePianoSubsystem::updateDanceAnimations(bool) */

void __thiscall ZombiePianoSubsystem::updateDanceAnimations(ZombiePianoSubsystem *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  undefined8 uVar4;
  Zombie *pZVar5;
  RtWeakPtrBase *pRVar6;
  long *plVar7;
  ZombieHydraHeadAnimRig *pZVar8;
  char *pcVar9;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_28,"cowboy");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_28);
  nop();
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_28,"cowboy_armor1");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_28);
  nop();
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_28,"cowboy_armor2");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_28);
  nop();
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(asStack_28,uVar4,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId((RtId *)aRStack_30);
    pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    pRVar6 = (RtWeakPtrBase *)Zombie::GetType(pZVar5);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar6);
    cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_30,(RtWeakPtrBase *)aRStack_50)
    ;
    if (((cVar2 != '\0') ||
        (cVar2 = Sexy::RtWeakPtrBase::operator==
                           ((RtWeakPtrBase *)aRStack_30,(RtWeakPtrBase *)aRStack_48), cVar2 != '\0')
        ) || (cVar2 = Sexy::RtWeakPtrBase::operator==
                                ((RtWeakPtrBase *)aRStack_30,(RtWeakPtrBase *)aRStack_40),
             cVar2 != '\0')) {
      pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::IsSuspended(pZVar5);
      if (cVar2 == '\0') {
        plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        cVar2 = (**(code **)(*plVar7 + 0x328))();
        if (cVar2 == '\0') {
          pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          pZVar8 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar5);
          ZombieAnimRig_CowboyBasic::SetDancing((ZombieAnimRig_CowboyBasic *)pZVar8,param_1);
        }
        else {
          pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          pZVar8 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar5);
          ZombieAnimRig_CowboyBasic::SetDancing((ZombieAnimRig_CowboyBasic *)pZVar8,false);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
  if (param_1) {
    if (this[0x49] == (ZombiePianoSubsystem)0x0) {
      pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar9,"Play_MainTheme");
      this[0x49] = (ZombiePianoSubsystem)0x1;
    }
  }
  else if (this[0x49] != (ZombiePianoSubsystem)0x0) {
    pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar9,"Stop_MainTheme");
    this[0x49] = (ZombiePianoSubsystem)param_1;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePianoSubsystem::populateDancers() */

void __thiscall ZombiePianoSubsystem::populateDancers(ZombiePianoSubsystem *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  string *psVar6;
  undefined8 uVar7;
  Zombie *pZVar8;
  RtWeakPtrBase *pRVar9;
  long *plVar10;
  SharkMinion *pSVar11;
  int *piVar12;
  int extraout_w1;
  int local_68;
  int local_64;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  float local_38;
  float local_34;
  RtWeakPtr<PowerPropertySheet> aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_28,"cowboy");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
  std::string::~string(asStack_28);
  nop();
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_28,"cowboy_armor1");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
  std::string::~string(asStack_28);
  nop();
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_28,"cowboy_armor2");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
  std::string::~string(asStack_28);
  nop();
  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(asStack_28,uVar7,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)&local_38);
    Sexy::RtId::~RtId((RtId *)&local_38);
    pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    pRVar9 = (RtWeakPtrBase *)Zombie::GetType(pZVar8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,pRVar9);
    cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)aRStack_40,(RtWeakPtrBase *)aRStack_60)
    ;
    if (((cVar2 != '\0') ||
        (cVar2 = Sexy::RtWeakPtrBase::operator==
                           ((RtWeakPtrBase *)aRStack_40,(RtWeakPtrBase *)aRStack_58), cVar2 != '\0')
        ) || (cVar2 = Sexy::RtWeakPtrBase::operator==
                                ((RtWeakPtrBase *)aRStack_40,(RtWeakPtrBase *)aRStack_50),
             cVar2 != '\0')) {
      pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      cVar2 = Zombie::IsSuspended(pZVar8);
      if (cVar2 == '\0') {
        plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        cVar2 = (**(code **)(*plVar10 + 0x328))();
        if (cVar2 == '\0') {
          pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          cVar2 = Zombie::IsControlled(pZVar8);
          if (cVar2 == '\0') {
            iVar3 = Sexy::Rand(2);
            iVar5 = 1;
            if (iVar3 != 0) {
              iVar5 = -1;
            }
            pSVar11 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            iVar3 = SharkMinion::getRow(pSVar11);
            local_68 = iVar3;
            if (iVar3 == *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1) {
LAB_046f55e8:
              iVar5 = -1;
              iVar3 = Sexy::Rand(1);
              local_38 = (float)(iVar3 + 1);
              piVar12 = eastl::min_alt<int>((int *)&local_38,&local_68);
              iVar3 = *piVar12;
            }
            else {
              if (iVar3 == 0) {
                iVar5 = 1;
              }
              else if (iVar5 == -1) goto LAB_046f55e8;
              local_64 = Sexy::Rand(1);
              local_64 = local_64 + 1;
              local_38 = (float)((*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1) - iVar3);
              piVar12 = eastl::min_alt<int>(&local_64,(int *)&local_38);
              iVar3 = *piVar12;
            }
            ZombieDance::ZombieDance((ZombieDance *)&local_38);
            pSVar11 = (SharkMinion *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            iVar4 = SharkMinion::getRow(pSVar11);
            iVar5 = BoardTransforms::GridToBoardSpaceY(iVar4 + iVar3 * iVar5);
            local_38 = (float)iVar5;
            local_34 = (float)iVar3 * 100.0;
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_30,(RtWeakPtr *)aRStack_48);
            std::vector<ZombieDance,std::allocator<ZombieDance>>::push_back
                      ((vector<ZombieDance,std::allocator<ZombieDance>> *)(this + 0x30),
                       (ZombieDance *)&local_38);
            WidgetImg::~WidgetImg((WidgetImg *)&local_38);
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
  } while( true );
}


/* ZombiePianoSubsystem::Update() */

void __thiscall ZombiePianoSubsystem::Update(ZombiePianoSubsystem *this)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (this[0x48] == (ZombiePianoSubsystem)0x0) {
    return;
  }
  cVar1 = std::vector<ZombieDance,std::allocator<ZombieDance>>::empty
                    ((vector<ZombieDance,std::allocator<ZombieDance>> *)(this + 0x30));
  if (cVar1 == '\0') {
    updateDancers(this);
    uVar2 = canDance(this);
  }
  else {
    cVar1 = canDance(this);
    if ((cVar1 != '\0') && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x28) < fVar4)) {
      populateDancers(this);
      uVar5 = calculateDanceTime();
      *(undefined4 *)(this + 0x28) = uVar5;
    }
    uVar2 = canDance(this);
  }
  if ((bool)uVar2 != false) {
    updateDanceAnimations(this,(bool)uVar2);
    return;
  }
  bVar3 = (bool)inIntro(this);
  updateDanceAnimations(this,bVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePianoSubsystem::onZombieDestroyed(Zombie*) */

void ZombiePianoSubsystem::onZombieDestroyed(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  RemoveItem<std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>,Sexy::RtWeakPtr<GameObject>>
            ((vector *)(param_1 + 0x10),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePianoSubsystem::AssociateWithSubSystem(Sexy::RtWeakPtr<Sexy::RtObject>) */

void __thiscall
ZombiePianoSubsystem::AssociateWithSubSystem(ZombiePianoSubsystem *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x10),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ForceActivate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


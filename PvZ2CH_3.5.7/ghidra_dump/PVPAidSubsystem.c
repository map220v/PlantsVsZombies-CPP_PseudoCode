// Class: PVPAidSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPAidSubsystem::StaticClassInit() */

void PVPAidSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVPAidSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04a93cb4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPAidSubsystem::StaticGetClass() */

long * PVPAidSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVPAidSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPAidSubsystem::GetClass() const */

long * PVPAidSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PVPAidSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPAidSubsystem::~PVPAidSubsystem() */

void __thiscall PVPAidSubsystem::~PVPAidSubsystem(PVPAidSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06943710;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PVPAidSubsystem::~PVPAidSubsystem() */

void __thiscall PVPAidSubsystem::~PVPAidSubsystem(PVPAidSubsystem *this)

{
  ~PVPAidSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPAidSubsystem::Unregister(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall PVPAidSubsystem::Unregister(PVPAidSubsystem *this,RtWeakPtr *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)param_1);
  local_28 = FUN_04a936c8(uVar2,uVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
               local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPAidSubsystem::GetAddHp() */

void PVPAidSubsystem::GetAddHp(void)

{
  int iVar1;
  string *psVar2;
  long lVar3;
  RtObject *this;
  ZombiePVPSkillAidProps *pZVar4;
  PVPManager *this_00;
  ulong uVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"pvpskill_aid");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  nop();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0xa0));
  pZVar4 = Sexy::RtObject::Cast<ZombiePVPSkillAidProps_const>(this);
  this_00 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar3 = PVPManager::GetSkillData(this_00,(string *)(lVar3 + 8));
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 8) + -1, -1 < iVar1)) {
    uVar7 = *(undefined8 *)(pZVar4 + 0x288);
    uVar5 = FUN_04a927e4(uVar7,*(undefined8 *)(pZVar4 + 0x290));
    if ((ulong)(long)iVar1 < uVar5) {
      pfVar6 = (float *)FUN_04a927fc(uVar7,(long)iVar1);
      fVar8 = (float)(int)*pfVar6;
      goto LAB_04a942d8;
    }
  }
  fVar8 = 0.0;
LAB_04a942d8:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar8);
}


/* PVPAidSubsystem::PVPAidSubsystem() */

void __thiscall PVPAidSubsystem::PVPAidSubsystem(PVPAidSubsystem *this)

{
  undefined4 uVar1;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06943710;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x10) = 0;
  uVar1 = GetAddHp();
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* PVPAidSubsystem::StaticNew() */

PVPAidSubsystem * PVPAidSubsystem::StaticNew(void)

{
  PVPAidSubsystem *this;
  
  this = ::operator_new(0x30);
  PVPAidSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPAidSubsystem::Update() */

void __thiscall PVPAidSubsystem::Update(PVPAidSubsystem *this)

{
  char cVar1;
  bool bVar2;
  vector *pvVar3;
  Zombie **ppZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  Zombie *this_00;
  float fVar8;
  undefined4 uVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Zombie*,std::allocator<Zombie*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = (float)PVZ_T();
  if (*(float *)(this + 0x10) < fVar8) {
    fVar8 = (float)PVZ_T();
    *(float *)(this + 0x10) = fVar8 + 1.0;
    cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       (this + 0x18));
    if (cVar1 == '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
      pvVar3 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
      std::vector<Zombie*,std::allocator<Zombie*>>::vector(avStack_20,pvVar3);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar2) {
        ppZVar4 = (Zombie **)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
        ;
        cVar1 = GameObject::IsDestroyed((GameObject *)*ppZVar4);
        if ((((cVar1 == '\0') && (cVar1 = Zombie::CanInvokeInvisible(*ppZVar4), cVar1 != '\0')) &&
            (cVar1 = RealObject::IsOnOpposingTeam(*ppZVar4,1), cVar1 != '\0')) &&
           (((cVar1 = (**(code **)(*(long *)*ppZVar4 + 0x328))(*ppZVar4), cVar1 == '\0' &&
             (cVar1 = (**(code **)(*(long *)*ppZVar4 + 0x330))(*ppZVar4), cVar1 == '\0')) &&
            ((cVar1 = Zombie::IsControlled(*ppZVar4), cVar1 == '\0' &&
             (cVar1 = PVPInvisibleSubsystem::Intersect((PVPInvisibleSubsystem *)this,*ppZVar4),
             cVar1 != '\0')))))) {
          uVar5 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_38);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_38);
          local_48 = std::
                     find<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,Zombie*>
                               (uVar5,uVar6,ppZVar4);
          local_40 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_38);
          bVar2 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
          if (bVar2) {
            std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                      ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_38,ppZVar4);
            this_00 = *ppZVar4;
            fVar8 = (float)FUN_04a927dc(*(undefined4 *)(this_00 + 0x280));
            local_48 = CONCAT44(local_48._4_4_,fVar8 + *(float *)(this + 0x14));
            uVar9 = FUN_04a927e0(*(undefined4 *)(this_00 + 0x284));
            local_40 = CONCAT44(local_40._4_4_,uVar9);
            pfVar7 = eastl::min_alt<float>((float *)&local_48,(float *)&local_40);
            Zombie::SetHitpoints(this_00,*pfVar7);
            Zombie::PlayAidEffect(*ppZVar4);
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
      }
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_20);
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


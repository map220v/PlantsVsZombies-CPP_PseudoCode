// Class: PVPInvisibleSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPInvisibleSubsystem::Intersect(Zombie*) */

void __thiscall PVPInvisibleSubsystem::Intersect(PVPInvisibleSubsystem *this,Zombie *param_1)

{
  bool bVar1;
  int iVar2;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  ZombiePVPSkillProps *pZVar3;
  Insets *pIVar4;
  float *pfVar5;
  float fVar6;
  undefined8 local_30;
  undefined8 local_28;
  FastCurve aFStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Zombie *)0x0) {
    bVar1 = false;
  }
  else {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x18));
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (!bVar1) break;
      this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
      if ((this_01 != (ResourceInfo *)0x0) &&
         (pZVar3 = Zombie::GetProps<ZombiePVPSkillProps>((Zombie *)this_01),
         pZVar3 != (ZombiePVPSkillProps *)0x0)) {
        pIVar4 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
        Sexy::Insets::Insets(aIStack_18,pIVar4);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_01);
        Sexy::FastCurve::SetOutRange(aFStack_20,*pfVar5,pfVar5[1] - 24.0);
        fVar6 = *(float *)(pZVar3 + 0x214);
        iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
        bVar1 = RectCircleIntersection<int>
                          ((TRect *)aIStack_18,(SexyVector2 *)aFStack_20,(float)iVar2 * fVar6);
        if (bVar1) {
          bVar1 = true;
          break;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PVPInvisibleSubsystem::Register(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall PVPInvisibleSubsystem::Register(PVPInvisibleSubsystem *this,RtWeakPtr *param_1)

{
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x18),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPInvisibleSubsystem::StaticClassInit() */

void PVPInvisibleSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVPInvisibleSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04a977e8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVPInvisibleSubsystem::StaticGetClass() */

long * PVPInvisibleSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVPInvisibleSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPInvisibleSubsystem::GetClass() const */

long * PVPInvisibleSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PVPInvisibleSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVPInvisibleSubsystem::PVPInvisibleSubsystem() */

void __thiscall PVPInvisibleSubsystem::PVPInvisibleSubsystem(PVPInvisibleSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06945a30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  this[0x10] = (PVPInvisibleSubsystem)0x1;
  return;
}


/* PVPInvisibleSubsystem::StaticNew() */

PVPInvisibleSubsystem * PVPInvisibleSubsystem::StaticNew(void)

{
  PVPInvisibleSubsystem *this;
  
  this = ::operator_new(0x30);
  PVPInvisibleSubsystem(this);
  return this;
}


/* PVPInvisibleSubsystem::~PVPInvisibleSubsystem() */

void __thiscall PVPInvisibleSubsystem::~PVPInvisibleSubsystem(PVPInvisibleSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06945a30;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PVPInvisibleSubsystem::~PVPInvisibleSubsystem() */

void __thiscall PVPInvisibleSubsystem::~PVPInvisibleSubsystem(PVPInvisibleSubsystem *this)

{
  ~PVPInvisibleSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPInvisibleSubsystem::Unregister(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall PVPInvisibleSubsystem::Unregister(PVPInvisibleSubsystem *this,RtWeakPtr *param_1)

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
  local_28 = FUN_04a97578(uVar2,uVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_10);
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
/* PVPInvisibleSubsystem::Update() */

void __thiscall PVPInvisibleSubsystem::Update(PVPInvisibleSubsystem *this)

{
  char cVar1;
  bool bVar2;
  vector *pvVar3;
  undefined8 *puVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Zombie*,std::allocator<Zombie*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     (this + 0x18));
  if ((cVar1 == '\0') || (this[0x10] == (PVPInvisibleSubsystem)0x0)) {
    this[0x10] = (PVPInvisibleSubsystem)0x1;
    pvVar3 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
    std::vector<Zombie*,std::allocator<Zombie*>>::vector(avStack_20,pvVar3);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      cVar1 = GameObject::IsDestroyed((GameObject *)*puVar4);
      if ((((cVar1 == '\0') &&
           (cVar1 = Zombie::CanInvokeInvisible((Zombie *)*puVar4), cVar1 != '\0')) &&
          (cVar1 = RealObject::IsOnOpposingTeam(*puVar4,1), cVar1 != '\0')) &&
         ((cVar1 = (**(code **)(*(long *)*puVar4 + 0x328))((long *)*puVar4), cVar1 == '\0' &&
          (cVar1 = (**(code **)(*(long *)*puVar4 + 0x330))((long *)*puVar4), cVar1 == '\0')))) {
        cVar1 = Zombie::IsControlled((Zombie *)*puVar4);
        if (cVar1 == '\0') {
          bVar2 = (bool)Intersect(this,(Zombie *)*puVar4);
          Zombie::InvokeInvisible((Zombie *)*puVar4,bVar2,false,false);
          this[0x10] = (PVPInvisibleSubsystem)0x0;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector(avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


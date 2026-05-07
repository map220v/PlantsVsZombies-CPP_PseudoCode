// Class: TristerixAphyllusMist


/* TristerixAphyllusMist::CalcRenderOrder() const */

void __thiscall TristerixAphyllusMist::CalcRenderOrder(TristerixAphyllusMist *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61cd8,0,uVar1);
  return;
}


/* non-virtual thunk to TristerixAphyllusMist::CalcRenderOrder() const */

void __thiscall TristerixAphyllusMist::CalcRenderOrder(TristerixAphyllusMist *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusMist::StaticClassInit() */

void TristerixAphyllusMist::StaticClassInit(void)

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
    std::string::string(asStack_10,"TristerixAphyllusMist");
    (*pcVar2)(plVar1,asStack_10,FUN_042a7c3c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TristerixAphyllusMist::StaticGetClass() */

long * TristerixAphyllusMist::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"TristerixAphyllusMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TristerixAphyllusMist::GetClass() const */

long * TristerixAphyllusMist::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"TristerixAphyllusMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusMist::onAnimationDone(std::string const&) */

void __thiscall TristerixAphyllusMist::onAnimationDone(TristerixAphyllusMist *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  RtWeakPtrBase *pRVar4;
  Zombie *pZVar5;
  undefined8 uVar6;
  long *plVar7;
  PopAnimRig *pPVar8;
  float fVar9;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::operator==(param_1,(string *)(this + 0x1d0));
  if (cVar1 == '\0') {
    cVar1 = std::operator==(param_1,(string *)(this + 0x1e0));
    if (cVar1 != '\0') {
      if (this[0x1ac] != (TristerixAphyllusMist)0x0) {
        cVar1 = FUN_042a616c(*(undefined4 *)(this + 0x28));
        if (cVar1 == '\0') {
          (**(code **)(*(long *)this + 0x80))(this,1);
          fVar9 = (float)PVZ_T();
          *(float *)(this + 0x1a8) = fVar9 + 6.0;
          goto LAB_042a80b8;
        }
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x1b0));
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x1b0));
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
              bVar2) {
          pRVar4 = (RtWeakPtrBase *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,pRVar4);
          cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
          if ((cVar1 != '\0') &&
             (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40), bVar2)) {
            pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
            uVar3 = operator|(1,8);
            cVar1 = Zombie::MatchesAny(pZVar5,uVar3);
            if (cVar1 == '\0') {
              uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
              cVar1 = RealObject::IsOnTeam(uVar6,1);
              if (cVar1 == '\0') {
                pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
                Zombie::SetFacing(pZVar5,0);
                plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
                (**(code **)(*plVar7 + 0x260))();
              }
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
          std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                    ((move_iterator<Sexy::CharDataHashEntry*> *)&local_50);
        }
      }
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  else {
    GridItemAnimation::GetAnimRig();
    pPVar8 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar8,this + 0x1d8,0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
LAB_042a80b8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TristerixAphyllusMist::TristerixAphyllusMist() */

void __thiscall TristerixAphyllusMist::TristerixAphyllusMist(TristerixAphyllusMist *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0682aa30;
  *(undefined ***)(this + 0x10) = &PTR__TristerixAphyllusMist_0682ace8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1c8) = uVar1;
  Set8BytesTo0(this + 0x1d0);
  Set8BytesTo0(this + 0x1d8);
  Set8BytesTo0(this + 0x1e0);
  return;
}


/* TristerixAphyllusMist::StaticNew() */

TristerixAphyllusMist * TristerixAphyllusMist::StaticNew(void)

{
  TristerixAphyllusMist *this;
  
  this = ::operator_new(0x1e8);
  TristerixAphyllusMist(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusMist::Init(float, bool) */

void __thiscall TristerixAphyllusMist::Init(TristerixAphyllusMist *this,float param_1,bool param_2)

{
  PopAnimRig *pPVar1;
  char *__s;
  float fVar2;
  undefined4 uVar3;
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x1ac] = (TristerixAphyllusMist)param_2;
  if (param_2) {
    __s = "tx02";
  }
  else {
    __s = "tx";
  }
  std::string::string(asStack_78,__s);
  nop();
  std::operator+(asStack_78,"_on");
  FUN_05474278(this + 0x1d0,asStack_58);
  std::string::~string(asStack_58);
  std::operator+(asStack_78,"_loop");
  FUN_05474278(this + 0x1d8,asStack_58);
  std::string::~string(asStack_58);
  std::operator+(asStack_78,"_off");
  FUN_05474278(this + 0x1e0,asStack_58);
  std::string::~string(asStack_58);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar2 + param_1;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1c8) = uVar3;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,this + 0x1d0,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TristerixAphyllusMist::~TristerixAphyllusMist() */

void __thiscall TristerixAphyllusMist::~TristerixAphyllusMist(TristerixAphyllusMist *this)

{
  *(undefined ***)this = &PTR_GetClass_0682aa30;
  *(undefined ***)(this + 0x10) = &PTR__TristerixAphyllusMist_0682ace8;
  std::string::~string((string *)(this + 0x1e0));
  std::string::~string((string *)(this + 0x1d8));
  std::string::~string((string *)(this + 0x1d0));
  std::
  vector<std::pair<Sexy::RtWeakPtr<Zombie>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,float>>>
  ::~vector((vector<std::pair<Sexy::RtWeakPtr<Zombie>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,float>>>
             *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to TristerixAphyllusMist::~TristerixAphyllusMist() */

void __thiscall TristerixAphyllusMist::~TristerixAphyllusMist(TristerixAphyllusMist *this)

{
  ~TristerixAphyllusMist(this + -0x10);
  return;
}


/* TristerixAphyllusMist::~TristerixAphyllusMist() */

void __thiscall TristerixAphyllusMist::~TristerixAphyllusMist(TristerixAphyllusMist *this)

{
  ~TristerixAphyllusMist(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TristerixAphyllusMist::~TristerixAphyllusMist() */

void __thiscall TristerixAphyllusMist::~TristerixAphyllusMist(TristerixAphyllusMist *this)

{
  ~TristerixAphyllusMist(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusMist::doAction() */

void __thiscall TristerixAphyllusMist::doAction(TristerixAphyllusMist *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  RtMixedPtr<Sexy::Image> *this_01;
  RtMixedPtrBase *this_02;
  RtWeakPtrBase *pRVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  float fVar9;
  float local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [16];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1ac] == (TristerixAphyllusMist)0x0) {
    GridItem::GetGridLocation();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    Sexy::Insets::Insets((Insets *)aRStack_30,(int)local_50,local_50._4_4_,1,1);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,2,
               (Insets *)aRStack_30);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
    local_40[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)local_40), bVar1)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48)
      ;
      pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      if ((((pZVar8 != (Zombie *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pZVar8 + 0x328))(), cVar2 == '\0')) &&
          (cVar2 = (**(code **)(*(long *)pZVar8 + 0x330))(pZVar8), cVar2 == '\0')) &&
         ((cVar2 = Zombie::HasCondition(pZVar8,0x27), cVar2 == '\0' &&
          (cVar2 = RealObject::IsOnOpposingTeam(pZVar8,1), cVar2 != '\0')))) {
        Zombie::ApplyCondition((Zombie *)0x40400000,0,pZVar8,2,1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
LAB_042aab30:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
LAB_042aa970:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1b0);
  local_40[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
  do {
    while( true ) {
      local_20[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_40,(__normal_iterator *)local_20);
      while( true ) {
        if (!bVar1) {
          cVar2 = FUN_042a616c(*(undefined4 *)(this + 0x28));
          if (cVar2 == '\0') {
            GridItem::GetGridLocation();
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
            Sexy::Insets::Insets((Insets *)local_40,local_60,local_5c,1,1);
            EntityFinder::GetEntitiesInGridSquares
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)local_20,2,(__normal_iterator *)local_40);
            local_58 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)local_20);
            local_50 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)local_20);
            while (bVar1 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50)
                  , bVar1) {
              puVar7 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
              pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
              cVar2 = FUN_042a62e4();
              if (cVar2 == '\0') {
                if (((pZVar8 != (Zombie *)0x0) &&
                    (cVar2 = (**(code **)(*(long *)pZVar8 + 0x328))(pZVar8), cVar2 == '\0')) &&
                   ((cVar2 = (**(code **)(*(long *)pZVar8 + 0x330))(pZVar8), cVar2 == '\0' &&
                    ((cVar2 = Zombie::HasCondition(pZVar8,0x27), cVar2 == '\0' &&
                     (cVar2 = RealObject::IsOnOpposingTeam(pZVar8,1), cVar2 != '\0')))))) {
                  Zombie::ApplyCondition((Zombie *)0x40400000,0,pZVar8,2,1);
                }
              }
              else {
                iVar4 = Zombie::GetFacing(pZVar8);
                if (iVar4 != 1) {
                  Zombie::SetFacing(pZVar8,1);
                  ToolPacketData::GetProps();
                  local_64 = (float)PVZ_T();
                  local_64 = local_64 + 6.0;
                  std::pair<Sexy::RtWeakPtr<Zombie>,float>::
                  pair<Sexy::RtWeakPtr<GameObject>,float,void>
                            ((pair<Sexy::RtWeakPtr<Zombie>,float> *)aRStack_30,
                             (RtWeakPtr *)&local_48,&local_64);
                  std::
                  vector<std::pair<Sexy::RtWeakPtr<Zombie>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,float>>>
                  ::push_back((vector<std::pair<Sexy::RtWeakPtr<Zombie>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,float>>>
                               *)this_00,(pair *)aRStack_30);
                  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_30);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
                }
              }
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
            }
            goto LAB_042aab30;
          }
          goto LAB_042aa970;
        }
        this_01 = (RtMixedPtr<Sexy::Image> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_40);
        cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_01);
        if (cVar2 == '\0') break;
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_20,(__normal_iterator *)local_40);
        local_40[0] = std::
                      vector<std::pair<Sexy::RtWeakPtr<Zombie>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,float>>>
                      ::erase((vector<std::pair<Sexy::RtWeakPtr<Zombie>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,float>>>
                               *)this_00,local_20[0]);
        local_20[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_40,(__normal_iterator *)local_20);
      }
      this_02 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_40);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_02);
      if (cVar2 != '\0') break;
LAB_042aa9b8:
      FUN_042a7ed4((__normal_iterator *)local_40);
    }
    fVar9 = (float)PVZ_T();
    pRVar5 = (RtWeakPtrBase *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_40)
    ;
    if (fVar9 <= *(float *)(pRVar5 + 8)) goto LAB_042aa9b8;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,pRVar5);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
    if (bVar1) {
      pZVar8 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
      ;
      uVar3 = operator|(1,8);
      cVar2 = Zombie::MatchesAny(pZVar8,uVar3);
      if (cVar2 == '\0') {
        uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        cVar2 = RealObject::IsOnTeam(uVar6,1);
        if (cVar2 == '\0') {
          pZVar8 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Zombie::SetFacing(pZVar8,0);
        }
      }
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_20,(__normal_iterator *)local_40);
    local_40[0] = std::
                  vector<std::pair<Sexy::RtWeakPtr<Zombie>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,float>>>
                  ::erase((vector<std::pair<Sexy::RtWeakPtr<Zombie>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Zombie>,float>>>
                           *)this_00,local_20[0]);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusMist::onUpdate() */

void __thiscall TristerixAphyllusMist::onUpdate(TristerixAphyllusMist *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x1c8) < fVar2) {
    *(float *)(this + 0x1c8) = *(float *)(this + 0x1c8) + 0.5;
    doAction(this);
  }
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x1a8) < fVar2) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x1a8) = uVar3;
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PopAnimRig::PlayAndStop(pPVar1,this + 0x1e0,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


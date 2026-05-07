// Class: TridentTossSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TridentTossSubSystem::StaticClassInit() */

void TridentTossSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"TridentTossSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03760d5c,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TridentTossSubSystem::StaticGetClass() */

long * TridentTossSubSystem::StaticGetClass(void)

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
  uVar2 = ZombieTosserSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"TridentTossSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TridentTossSubSystem::GetClass() const */

long * TridentTossSubSystem::GetClass(void)

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
  uVar2 = ZombieTosserSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"TridentTossSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TridentTossSubSystem::TridentTossSubSystem() */

void __thiscall TridentTossSubSystem::TridentTossSubSystem(TridentTossSubSystem *this)

{
  ZombieTosserSubSystem::ZombieTosserSubSystem((ZombieTosserSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06695260;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* TridentTossSubSystem::StaticNew() */

TridentTossSubSystem * TridentTossSubSystem::StaticNew(void)

{
  TridentTossSubSystem *this;
  
  this = ::operator_new(0x88);
  TridentTossSubSystem(this);
  return this;
}


/* TridentTossSubSystem::~TridentTossSubSystem() */

void __thiscall TridentTossSubSystem::~TridentTossSubSystem(TridentTossSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06695260;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x70));
  ZombieTosserSubSystem::~ZombieTosserSubSystem((ZombieTosserSubSystem *)this);
  return;
}


/* TridentTossSubSystem::~TridentTossSubSystem() */

void __thiscall TridentTossSubSystem::~TridentTossSubSystem(TridentTossSubSystem *this)

{
  ~TridentTossSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TridentTossSubSystem::Update() */

void __thiscall TridentTossSubSystem::Update(TridentTossSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  BoardEntity *this_01;
  long *plVar5;
  code *pcVar6;
  undefined8 local_88;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieTosserSubSystem::Update();
  lVar3 = FUN_03724760(*(undefined8 *)(this + 0x70),*(undefined8 *)(this + 0x78));
  if (lVar3 != 0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x70);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)local_68);
      if (!bVar1) break;
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,pRVar4);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_80);
      if (bVar1) {
        this_01 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        cVar2 = BoardEntity::IsOnScreen(this_01);
        if (cVar2 != '\0') goto LAB_037756b0;
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        (**(code **)(*plVar5 + 0x2f0))();
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        pcVar6 = *(code **)(*plVar5 + 0x120);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)0x0,local_70,local_6c,(DamageInfo *)local_68,4,aPStack_78,0);
        (*pcVar6)(plVar5,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_68,(__normal_iterator *)&local_88);
        local_88 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
                   erase((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                         this_00,local_68[0]);
      }
      else {
LAB_037756b0:
        FUN_037473b0((__normal_iterator *)&local_88);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TridentTossSubSystem::tossZombieOff(Zombie*) */

void __thiscall TridentTossSubSystem::tossZombieOff(TridentTossSubSystem *this,Zombie *param_1)

{
  float *pfVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar1 + 400.0,-600.0,0.0);
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombie
            ((ZombieTosserSubSystem *)0x447a0000,0x3f800000,this,param_1,aVStack_60,aRStack_50,1);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_70);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x70),(RtWeakPtr *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: Ultra


/* Ultra::SuperSonicHasAdvertisements() const */

undefined1 __thiscall Ultra::SuperSonicHasAdvertisements(Ultra *this)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long **)(this + 8) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 8) + 0x18))();
  }
  return uVar1;
}


/* Ultra::showAdProvider(AdProvider*) */

char __thiscall Ultra::showAdProvider(Ultra *this,AdProvider *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar1 != '\0') {
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    AdProvider::ShowAdvertisements(param_1,(Delegate2 *)(this + 0x30),(Delegate0 *)(this + 0x60));
  }
  return cVar1;
}


/* Ultra::showSuperSonic() */

void __thiscall Ultra::showSuperSonic(Ultra *this)

{
  showAdProvider(this,*(AdProvider **)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Ultra::GetNumAdvertisementsAvailable() */

void __thiscall Ultra::GetNumAdvertisementsAvailable(Ultra *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
  iVar5 = 0;
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x18));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) break;
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar3 = AdProvider::GetNumAdvertisementsAvailable((AdProvider *)*puVar4);
    iVar1 = iVar5 + iVar3;
    if (iVar3 < 1) {
      iVar1 = iVar5;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    iVar5 = iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


/* Ultra::Ultra() */

void __thiscall Ultra::Ultra(Ultra *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)this = &DAT_0697fe00;
  this[0x10] = (Ultra)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Sexy::Delegate2<int,int>::Delegate2((DummyInit *)(this + 0x30));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x60),(DummyInit *)0x0);
  return;
}


/* Ultra::HasAdvertisements() */

void __thiscall Ultra::HasAdvertisements(Ultra *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x18));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x18));
  FUN_04c007bc(uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Ultra::Initialize(std::string const&, Sexy::Delegate2<int, int>&, Sexy::Delegate0&) */

void __thiscall Ultra::Initialize(Ultra *this,string *param_1,Delegate2 *param_2,Delegate0 *param_3)

{
  vector<AdProvider*,std::allocator<AdProvider*>> *this_00;
  Ultra UVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  AdProviderFactory *pAVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<AdProvider*,std::allocator<AdProvider*>> *)(this + 0x18);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x30),param_2);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x60),(Delegate2 *)param_3);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)local_18,L"EASquaredConfig");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>
            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,uVar3,0x66,(RtName *)local_18);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtName::~RtName((RtName *)local_18);
  pAVar5 = (AdProviderFactory *)Sexy::LazySingleton<SuperSonicAdProvider>::GetInstance();
  uVar3 = AdProviderFactory::InitializeAndGet(pAVar5,*(bool *)(lVar4 + 0x20));
  *(undefined8 *)(this + 8) = uVar3;
  std::vector<AdProvider*,std::allocator<AdProvider*>>::push_back(this_00,(AdProvider **)(this + 8))
  ;
  pAVar5 = (AdProviderFactory *)Sexy::LazySingleton<SuperSonicAdProvider>::GetInstance();
  UVar1 = (Ultra)AdProviderFactory::IsEnabled(pAVar5);
  this[0x10] = UVar1;
  (**(code **)(*(long *)this + 0x18))(this,param_1);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
  while( true ) {
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
    if (!bVar2) break;
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    pcVar7 = *(code **)(*(long *)*puVar6 + 0x10);
    if (pcVar7 != AdProviderNullImpl::Initialize) {
      (*pcVar7)((long *)*puVar6,param_1);
    }
    FUN_04c003ec((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Ultra::PlatformSpecificInstance() */

void Ultra::PlatformSpecificInstance(void)

{
  Sexy::LazySingleton<UltraAndroid>::GetInstance();
  return;
}


/* Ultra::~Ultra() */

void __thiscall Ultra::~Ultra(Ultra *this)

{
  *(undefined **)this = &DAT_0697fe00;
  std::vector<AdProvider*,std::allocator<AdProvider*>>::~vector
            ((vector<AdProvider*,std::allocator<AdProvider*>> *)(this + 0x18));
  return;
}


/* Ultra::~Ultra() */

void __thiscall Ultra::~Ultra(Ultra *this)

{
  ~Ultra(this);
  AK::FreeHook(this);
  return;
}


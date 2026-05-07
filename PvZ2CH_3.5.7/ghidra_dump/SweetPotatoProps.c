// Class: SweetPotatoProps


/* SweetPotatoProps::SweetPotatoProps() */

void __thiscall SweetPotatoProps::SweetPotatoProps(SweetPotatoProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067cf5a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  Sexy::Insets::Insets((Insets *)(this + 0x2d0));
  Sexy::Insets::Insets((Insets *)(this + 0x2e0));
  this[0x2f4] = (SweetPotatoProps)0x0;
  return;
}


/* SweetPotatoProps::~SweetPotatoProps() */

void __thiscall SweetPotatoProps::~SweetPotatoProps(SweetPotatoProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067cf5a0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SweetPotatoProps::~SweetPotatoProps() */

void __thiscall SweetPotatoProps::~SweetPotatoProps(SweetPotatoProps *this)

{
  ~SweetPotatoProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SweetPotatoProps::StaticClassInit() */

void SweetPotatoProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SweetPotatoProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040973f0,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SweetPotatoProps::StaticGetClass() */

long * SweetPotatoProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SweetPotatoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SweetPotatoProps::GetClass() const */

long * SweetPotatoProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"SweetPotatoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SweetPotatoProps::StaticNew() */

SweetPotatoProps * SweetPotatoProps::StaticNew(void)

{
  SweetPotatoProps *this;
  
  this = ::operator_new(0x2f8);
  SweetPotatoProps(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SweetPotatoProps::ensureBlacklistCacheIsBuilt() const */

void __thiscall SweetPotatoProps::ensureBlacklistCacheIsBuilt(SweetPotatoProps *this)

{
  bool bVar1;
  string *psVar2;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  ResourceInfo *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (DAT_06aeb610 == '\0') {
    std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::
    clear((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>> *)
          &DAT_06aeb688);
    local_30 = FUN_04097724(*(undefined8 *)(this + 0x2b8));
    local_28 = FUN_04097774(*(undefined8 *)(this + 0x2c0));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_18);
      if (bVar1) {
        local_10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
        std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::
        insert((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                *)&DAT_06aeb688,(ZombieType **)&local_10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    DAT_06aeb610 = '\x01';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SweetPotatoProps::IsZombieTypeBlackListed(ZombieType const*) const */

void __thiscall
SweetPotatoProps::IsZombieTypeBlackListed(SweetPotatoProps *this,ZombieType *param_1)

{
  bool bVar1;
  ZombieType *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  ensureBlacklistCacheIsBuilt(this);
  local_18 = std::
             set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::
             find((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                   *)&DAT_06aeb688,local_28);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)&DAT_06aeb688);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


// Class: AttachedEffectManager


/* AttachedEffectManager::AttachedEffectManager() */

void __thiscall AttachedEffectManager::AttachedEffectManager(AttachedEffectManager *this)

{
  GameObjectDictionary::GameObjectDictionary((GameObjectDictionary *)this);
  *(undefined ***)this = &PTR_GetClass_0675cba0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* AttachedEffectManager::~AttachedEffectManager() */

void __thiscall AttachedEffectManager::~AttachedEffectManager(AttachedEffectManager *this)

{
  *(undefined ***)this = &PTR_GetClass_0675cba0;
  std::vector<AttachedEffect,std::allocator<AttachedEffect>>::~vector
            ((vector<AttachedEffect,std::allocator<AttachedEffect>> *)(this + 8));
  GameObjectDictionary::~GameObjectDictionary((GameObjectDictionary *)this);
  return;
}


/* AttachedEffectManager::~AttachedEffectManager() */

void __thiscall AttachedEffectManager::~AttachedEffectManager(AttachedEffectManager *this)

{
  ~AttachedEffectManager(this);
  AK::FreeHook(this);
  return;
}


/* AttachedEffectManager::Count() */

void __thiscall AttachedEffectManager::Count(AttachedEffectManager *this)

{
  FUN_03cb2390(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* AttachedEffectManager::at(int) */

void __thiscall AttachedEffectManager::at(AttachedEffectManager *this,int param_1)

{
  FUN_03cb23d8(*(undefined8 *)(this + 8),(long)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffectManager::StaticClassInit() */

void AttachedEffectManager::StaticClassInit(void)

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
    std::string::string(asStack_10,"AttachedEffectManager");
    (*pcVar2)(plVar1,asStack_10,FUN_03cb4544,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AttachedEffectManager::StaticGetClass() */

long * AttachedEffectManager::StaticGetClass(void)

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
  uVar2 = GameObjectDictionary::StaticGetClass();
  (*pcVar3)(plVar1,"AttachedEffectManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AttachedEffectManager::GetClass() const */

long * AttachedEffectManager::GetClass(void)

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
  uVar2 = GameObjectDictionary::StaticGetClass();
  (*pcVar3)(plVar1,"AttachedEffectManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AttachedEffectManager::indexOf(std::string const&) const */

ulong __thiscall AttachedEffectManager::indexOf(AttachedEffectManager *this,string *param_1)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 8);
    uVar6 = uVar4 & 0xffffffff;
    uVar3 = FUN_03cb2390(uVar5,*(undefined8 *)(this + 0x10));
    if (uVar3 <= uVar4) {
      return 0xffffffff;
    }
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)FUN_03cb2474(uVar5,uVar4);
    uVar4 = uVar4 + 1;
    psVar2 = (string *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_end(this_00);
    cVar1 = std::operator==(psVar2,param_1);
  } while (cVar1 == '\0');
  return uVar6;
}


/* AttachedEffectManager::StaticNew() */

AttachedEffectManager * AttachedEffectManager::StaticNew(void)

{
  AttachedEffectManager *this;
  
  this = ::operator_new(0x20);
  AttachedEffectManager(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffectManager::UpdateDynamicScaleForAllEffects(float, std::vector<std::string,
   std::allocator<std::string > > const&) */

void __thiscall
AttachedEffectManager::UpdateDynamicScaleForAllEffects
          (AttachedEffectManager *this,float param_1,vector *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 8);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_03cb2390(uVar6,*(undefined8 *)(this + 0x10));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar7 = (long)(int)uVar1 + -1;
    lVar2 = lVar7;
    lVar9 = (long)(int)uVar1;
    while( true ) {
      lVar8 = lVar2;
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)FUN_03cb23d8(uVar6,lVar9);
      uVar6 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_end(this_00);
      FUN_05475d88(asStack_20,uVar6);
      uVar6 = FUN_03cb4018(*(undefined8 *)param_2);
      uVar5 = FUN_03cb4068(*(undefined8 *)(param_2 + 8));
      local_18 = FUN_03cb4a90(uVar6,uVar5,asStack_20);
      local_10 = FUN_03cb4068(*(undefined8 *)(param_2 + 8));
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (bVar3) {
        FUN_03cb23d8(*(undefined8 *)(this + 8),lVar9);
        AttachedEffect::UpdateDynamicScale(param_1);
        std::string::~string(asStack_20);
      }
      else {
        std::string::~string(asStack_20);
      }
      if (lVar8 == lVar7 - (ulong)uVar1) break;
      uVar6 = *(undefined8 *)(this + 8);
      lVar2 = lVar8 + -1;
      lVar9 = lVar8;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffectManager::Clear() */

void __thiscall AttachedEffectManager::Clear(AttachedEffectManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  AttachedEffect *pAVar2;
  undefined8 local_58;
  undefined8 local_50;
  AttachedEffect aAStack_48 [64];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    pAVar2 = (AttachedEffect *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    AttachedEffect::AttachedEffect(aAStack_48,pAVar2);
    AttachedGameObjectNode::Destroy((AttachedGameObjectNode *)aAStack_48);
    AttachedEffect::~AttachedEffect(aAStack_48);
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_58);
  }
  std::vector<AttachedEffect,std::allocator<AttachedEffect>>::clear
            ((vector<AttachedEffect,std::allocator<AttachedEffect>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffectManager::remove(int) */

void __thiscall AttachedEffectManager::remove(AttachedEffectManager *this,int param_1)

{
  AttachedGameObjectNode *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  this_00 = (AttachedGameObjectNode *)FUN_03cb23d8(*(undefined8 *)this_01,(long)param_1);
  AttachedGameObjectNode::Destroy(this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_18 = __gnu_cxx::
             __normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
             ::operator+((__normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                          *)&local_20,(long)param_1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<AttachedEffect,std::allocator<AttachedEffect>>::erase
            ((vector<AttachedEffect,std::allocator<AttachedEffect>> *)this_01,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffectManager::update(float) */

void __thiscall AttachedEffectManager::update(AttachedEffectManager *this,float param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  CthulhuSubSystem *this_00;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar6 = *(undefined8 *)(this + 8);
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_03cb2390(uVar6,*(undefined8 *)(this + 0x10));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar7 = (long)(int)uVar1 + -1;
    lVar2 = lVar7;
    lVar9 = (long)(int)uVar1;
    while( true ) {
      lVar8 = lVar2;
      plVar5 = (long *)FUN_03cb23d8(uVar6,lVar9);
      (**(code **)(*plVar5 + 0x10))(param_1);
      this_00 = (CthulhuSubSystem *)FUN_03cb23d8(*(undefined8 *)(this + 8),lVar9);
      cVar3 = CthulhuSubSystem::Update(this_00);
      if (cVar3 == '\0') {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 8));
        local_18 = __gnu_cxx::
                   __normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                   ::operator+((__normal_iterator<DangerRoomSpecialOfferExtraItemData*,std::vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>>
                                *)&local_20,lVar9);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<AttachedEffect,std::allocator<AttachedEffect>>::erase
                  ((vector<AttachedEffect,std::allocator<AttachedEffect>> *)(this + 8),local_10);
      }
      if (lVar8 == lVar7 - (ulong)uVar1) break;
      uVar6 = *(undefined8 *)(this + 8);
      lVar2 = lVar8 + -1;
      lVar9 = lVar8;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffectManager::add(std::string const&) */

void __thiscall AttachedEffectManager::add(AttachedEffectManager *this,string *param_1)

{
  long lVar1;
  undefined8 uVar2;
  AttachedEffect aAStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AttachedEffect::AttachedEffect(aAStack_48,param_1);
  std::vector<AttachedEffect,std::allocator<AttachedEffect>>::push_back
            ((vector<AttachedEffect,std::allocator<AttachedEffect>> *)(this + 8),aAStack_48);
  uVar2 = *(undefined8 *)(this + 8);
  lVar1 = FUN_03cb2390(uVar2,*(undefined8 *)(this + 0x10));
  uVar2 = FUN_03cb23d8(uVar2,lVar1 + -1);
  AttachedEffect::~AttachedEffect(aAStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


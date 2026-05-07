// Class: SweetPotatoSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SweetPotatoSubsystem::StaticClassInit() */

void SweetPotatoSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"SweetPotatoSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_040985f0,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SweetPotatoSubsystem::StaticGetClass() */

long * SweetPotatoSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SweetPotatoSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SweetPotatoSubsystem::GetClass() const */

long * SweetPotatoSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"SweetPotatoSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SweetPotatoSubsystem::canPotatoPull(PlantSweetPotato*) const */

byte __thiscall
SweetPotatoSubsystem::canPotatoPull(SweetPotatoSubsystem *this,PlantSweetPotato *param_1)

{
  byte bVar1;
  
  bVar1 = Plant::IsSuspended(*(Plant **)(param_1 + 0x10));
  return bVar1 ^ 1;
}


/* SweetPotatoSubsystem::SweetPotatoSubsystem() */

void __thiscall SweetPotatoSubsystem::SweetPotatoSubsystem(SweetPotatoSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067cf640;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x40));
  return;
}


/* SweetPotatoSubsystem::StaticNew() */

SweetPotatoSubsystem * SweetPotatoSubsystem::StaticNew(void)

{
  SweetPotatoSubsystem *this;
  
  this = ::operator_new(0x70);
  SweetPotatoSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SweetPotatoSubsystem::isPotatoRegistered(PlantSweetPotato*) const */

void SweetPotatoSubsystem::isPotatoRegistered(PlantSweetPotato *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_04097864(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_040978b4(*(undefined8 *)(param_1 + 0x18));
  ToolPacketData::GetProps();
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>const*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar2,uVar3,aRStack_20);
  local_10 = FUN_040978b4(*(undefined8 *)(param_1 + 0x18));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* SweetPotatoSubsystem::~SweetPotatoSubsystem() */

void __thiscall SweetPotatoSubsystem::~SweetPotatoSubsystem(SweetPotatoSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067cf640;
  DAT_06aeb610 = 0;
  std::
  map<Zombie*,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>>>>
  ::~map((map<Zombie*,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>>>>
          *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x10))
  ;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* SweetPotatoSubsystem::~SweetPotatoSubsystem() */

void __thiscall SweetPotatoSubsystem::~SweetPotatoSubsystem(SweetPotatoSubsystem *this)

{
  ~SweetPotatoSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SweetPotatoSubsystem::clearDeadPotatoes() */

void __thiscall SweetPotatoSubsystem::clearDeadPotatoes(SweetPotatoSubsystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_04097ea0(uVar1,uVar2);
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
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this_00,
             local_18,local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SweetPotatoSubsystem::RegisterSweetPotato(PlantSweetPotato*) */

void SweetPotatoSubsystem::RegisterSweetPotato(PlantSweetPotato *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isPotatoRegistered(param_1);
  if (cVar1 == '\0') {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
               (param_1 + 0x10),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SweetPotatoSubsystem::RegisterAttractions(PlantSweetPotato*, std::vector<Zombie*,
   std::allocator<Zombie*> > const&) */

void __thiscall
SweetPotatoSubsystem::RegisterAttractions
          (SweetPotatoSubsystem *this,PlantSweetPotato *param_1,vector *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>> *this_00;
  PlantSweetPotato *local_28;
  Zombie *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_18 = FUN_040977c4(*(undefined8 *)param_2);
  local_10 = FUN_04097814(*(undefined8 *)(param_2 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    local_20 = (Zombie *)*puVar2;
    this_00 = (vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>> *)
              std::
              map<Zombie*,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>>>>
              ::operator[]((map<Zombie*,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>>>>
                            *)(this + 0x40),&local_20);
    std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>::push_back(this_00,&local_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SweetPotatoSubsystem::pickAttractor(Zombie*, std::vector<PlantSweetPotato*,
   std::allocator<PlantSweetPotato*> > const&) const */

void __thiscall
SweetPotatoSubsystem::pickAttractor(SweetPotatoSubsystem *this,Zombie *param_1,vector *param_2)

{
  vector *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *local_60;
  PlantSweetPotato *local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  local_38 = FUN_04097904(*(undefined8 *)param_2);
  local_20 = FUN_04097954(*(undefined8 *)(param_2 + 8));
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_20), bVar4) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    local_58 = (PlantSweetPotato *)*puVar8;
    cVar5 = PlantSweetPotato::CanAttractZombie(local_58,param_1);
    if (cVar5 != '\0') {
      std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>::push_back
                ((vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>> *)avStack_50,&local_58
                );
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  local_58 = (PlantSweetPotato *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_50);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_20), bVar4) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    local_60 = (long *)*puVar8;
    cVar5 = (**(code **)(*local_60 + 0x180))(local_60);
    if (cVar5 != '\0') {
      std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>::push_back
                ((vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>> *)&local_38,
                 (PlantSweetPotato **)&local_60);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  lVar9 = FUN_0409688c(local_38,local_30);
  pvVar1 = (vector *)&local_38;
  if (lVar9 == 0) {
    pvVar1 = (vector *)avStack_50;
  }
  std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>::vector
            ((vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>> *)&local_20,pvVar1);
  iVar6 = SharkMinion::getRow((SharkMinion *)param_1);
  local_60 = (long *)FUN_04097904(local_20);
  local_58 = (PlantSweetPotato *)FUN_04097954(local_18);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar4) {
    plVar11 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    lVar9 = *plVar11;
    iVar7 = SharkMinion::getRow(*(SharkMinion **)(lVar9 + 0x10));
    if (iVar6 == iVar7) goto LAB_04099d04;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  lVar9 = FUN_0409688c(local_20,local_18);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    iVar6 = Sexy::Rand();
    uVar3 = local_20;
    uVar10 = FUN_0409688c(local_20,local_18);
    uVar2 = 0;
    if (uVar10 != 0) {
      uVar2 = (ulong)(long)iVar6 / uVar10;
    }
    plVar11 = (long *)FUN_04096898(uVar3,(long)iVar6 - uVar2 * uVar10);
    lVar9 = *plVar11;
  }
LAB_04099d04:
  std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>::~vector
            ((vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>> *)&local_20);
  std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>::~vector
            ((vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>> *)&local_38);
  std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>::~vector
            ((vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SweetPotatoSubsystem::Update() */

void __thiscall SweetPotatoSubsystem::Update(SweetPotatoSubsystem *this)

{
  map<Zombie*,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>>>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long extraout_x0;
  ZombieLaneChangingSubsystem *pZVar6;
  undefined8 *puVar7;
  long *plVar8;
  float *pfVar9;
  float *pfVar10;
  RtWeakPtrBase *pRVar11;
  ResourceInfo *this_02;
  undefined8 uVar12;
  undefined8 uVar13;
  Zombie *this_03;
  BoardEntity *this_04;
  ZombieLaneChangingSubsystem *pZVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<Zombie*,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>>>>
             *)(this + 0x40);
  clearDeadPotatoes(this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38 = std::
             map<Zombie*,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>>>>
             ::begin(this_00);
  while( true ) {
    local_28 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_38,(rbtree_iterator *)&local_28);
    if (!bVar1) break;
    puVar7 = (undefined8 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_38);
    this_03 = (Zombie *)*puVar7;
    plVar8 = (long *)pickAttractor(this,this_03,(vector *)(puVar7 + 1));
    if (plVar8 != (long *)0x0) {
      cVar2 = (**(code **)(*plVar8 + 0x180))();
      if (cVar2 != '\0') {
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_03);
        this_04 = (BoardEntity *)plVar8[2];
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)this_04);
        if (*pfVar9 < *pfVar10) {
          Zombie::SetFacing(this_03,1);
          this_04 = (BoardEntity *)plVar8[2];
        }
        Zombie::SetForcedTarget(this_03,this_04);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   avStack_20,(RtWeakPtr *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        if (*(code **)(*plVar8 + 0x528) != PlantSweetPotato::AddAttractionEffect) {
          (**(code **)(*plVar8 + 0x528))(plVar8,this_03);
        }
      }
      iVar3 = SharkMinion::getRow((SharkMinion *)plVar8[2]);
      iVar4 = SharkMinion::getRow((SharkMinion *)this_03);
      if (iVar3 != iVar4) {
        Plant::GetProps();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        nop();
                    /* WARNING: Load size is inaccurate */
        pZVar14._0_4_ = *(ZombieLaneChangingSubsystem **)(extraout_x0 + 0x2f0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        pZVar6 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0))
        ;
        uVar5 = SharkMinion::getRow((SharkMinion *)plVar8[2]);
        ZombieLaneChangingSubsystem::ForceLaneChange
                  (pZVar14._0_4_,0x40a00000,pZVar6,this_03,uVar5,4);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_38);
  }
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_01);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_01);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    pRVar11 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,pRVar11);
    this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48);
    if (this_02 != (ResourceInfo *)0x0) {
      uVar12 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      uVar13 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                           (uVar12,uVar13,aRStack_48);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (bVar1) {
        Zombie::SetFacing((Zombie *)this_02,0);
        Zombie::SetForcedTarget((Zombie *)this_02,(BoardEntity *)0x0);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::operator=
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_01,
             (vector *)avStack_20);
  std::
  map<Zombie*,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>,std::less<Zombie*>,std::allocator<std::pair<Zombie*const,std::vector<PlantSweetPotato*,std::allocator<PlantSweetPotato*>>>>>
  ::clear(this_00);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


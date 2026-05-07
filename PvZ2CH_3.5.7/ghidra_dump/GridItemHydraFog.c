// Class: GridItemHydraFog


/* GridItemHydraFog::CalcRenderOrder() const */

void __thiscall GridItemHydraFog::CalcRenderOrder(GridItemHydraFog *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(600000,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemHydraFog::CalcRenderOrder() const */

void __thiscall GridItemHydraFog::CalcRenderOrder(GridItemHydraFog *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFog::StaticClassInit() */

void GridItemHydraFog::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHydraFog");
    (*pcVar2)(plVar1,asStack_10,FUN_04f55a7c,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHydraFog::StaticGetClass() */

long * GridItemHydraFog::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHydraFog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHydraFog::GetClass() const */

long * GridItemHydraFog::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHydraFog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHydraFog::onAnimStopCommand(std::string const&) */

void __thiscall GridItemHydraFog::onAnimStopCommand(GridItemHydraFog *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"fog_purple_idle1_2");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* GridItemHydraFog::canTransform(Plant*) */

undefined8 __thiscall GridItemHydraFog::canTransform(GridItemHydraFog *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  
  bVar1 = Sexy::RtObject::IsA<PlantWitchFrog>(*(RtObject **)(param_1 + 0xa8));
  if (((bVar1) || (cVar2 = FUN_04f53de8(*(undefined4 *)(param_1 + 0x28)), cVar2 != '\0')) ||
     (cVar2 = Plant::HasCondition(param_1,0x1d), cVar2 != '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFog::updateColor(bool) */

void __thiscall GridItemHydraFog::updateColor(GridItemHydraFog *this,bool param_1)

{
  int iVar1;
  PopAnimRig *this_00;
  undefined4 uVar2;
  float fVar3;
  undefined4 local_28;
  undefined4 local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  local_24 = 0xff;
  local_28 = 0;
  if (param_1) {
    local_24 = 0;
    local_28 = 0xff;
  }
  fVar3 = *(float *)(this + 0x21c);
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_T();
  iVar1 = CurveLerp<int>(fVar3,fVar3 + 0.5,uVar2,&local_28,&local_24,1);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  PopAnimRig::GetPAMColor();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  local_c = (int)(float)iVar1;
  GridItemAnimation::GetAnimRig();
  this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  PopAnimRig::SetPAMColor(this_00,aCStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemHydraFog::GridItemHydraFog() */

void __thiscall GridItemHydraFog::GridItemHydraFog(GridItemHydraFog *this)

{
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_06a1e8e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHydraFog_06a1ebe8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x200));
  return;
}


/* GridItemHydraFog::StaticNew() */

GridItemHydraFog * GridItemHydraFog::StaticNew(void)

{
  GridItemHydraFog *this;
  
  this = ::operator_new(0x228);
  GridItemHydraFog(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFog::registerForEvents() */

void __thiscall GridItemHydraFog::registerForEvents(GridItemHydraFog *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDestroyed);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemHydraFog,void(GridItemHydraFog::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestroyed,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantBlow);
  Sexy::Delegate0::Delegate0<GridItemHydraFog,void(GridItemHydraFog::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantBloverWind,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHydraFog::isValidSpellTarget(Plant*) */

byte __thiscall GridItemHydraFog::isValidSpellTarget(GridItemHydraFog *this,Plant *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  GridItemHydraFogProps *pGVar4;
  
  if (param_1 != (Plant *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(param_1);
    }
    else {
      cVar1 = (**(code **)(*(long *)param_1 + 0x1f8))();
    }
    if ((((cVar1 == '\0') && (cVar1 = Plant::IsInvincible(param_1,false), cVar1 == '\0')) &&
        (cVar1 = Plant::CanBeTargeted(param_1), cVar1 != '\0')) &&
       ((cVar1 = RealObject::IsOnTeam(this,1), cVar1 == '\0' &&
        (iVar3 = FUN_04f50f40(param_1[0x299]), iVar3 == 0)))) {
      pGVar4 = GridItem::GetProps<GridItemHydraFogProps>();
      bVar2 = PlantRestrictionSet::IsExcluded((Plant *)(pGVar4 + 0x138));
      return bVar2 ^ 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFog::PlayDeath() */

void __thiscall GridItemHydraFog::PlayDeath(GridItemHydraFog *this)

{
  long lVar1;
  PopAnimRig *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  std::string::string(asStack_68,"fog_purple_idle1_2");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onAnimStopCommand");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar2,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  lVar1 = ___stack_chk_guard;
  this[0x224] = (GridItemHydraFog)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHydraFog::onPlantBlow() */

void __thiscall GridItemHydraFog::onPlantBlow(GridItemHydraFog *this)

{
  if (this[0x224] != (GridItemHydraFog)0x0) {
    return;
  }
  PlayDeath(this);
  return;
}


/* GridItemHydraFog::~GridItemHydraFog() */

void __thiscall GridItemHydraFog::~GridItemHydraFog(GridItemHydraFog *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1e8e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHydraFog_06a1ebe8;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x200)
            );
  std::vector<GridItemHydraFog::PlantData,std::allocator<GridItemHydraFog::PlantData>>::~vector
            ((vector<GridItemHydraFog::PlantData,std::allocator<GridItemHydraFog::PlantData>> *)
             (this + 0x1e8));
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemHydraFog::~GridItemHydraFog() */

void __thiscall GridItemHydraFog::~GridItemHydraFog(GridItemHydraFog *this)

{
  ~GridItemHydraFog(this + -0x10);
  return;
}


/* GridItemHydraFog::~GridItemHydraFog() */

void __thiscall GridItemHydraFog::~GridItemHydraFog(GridItemHydraFog *this)

{
  ~GridItemHydraFog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHydraFog::~GridItemHydraFog() */

void __thiscall GridItemHydraFog::~GridItemHydraFog(GridItemHydraFog *this)

{
  ~GridItemHydraFog(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFog::onPlantDestroyed(Plant*) */

void __thiscall GridItemHydraFog::onPlantDestroyed(GridItemHydraFog *this,Plant *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1e8);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_04f5b960(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<GridItemHydraFog::PlantData,std::allocator<GridItemHydraFog::PlantData>>::erase
              ((vector<GridItemHydraFog::PlantData,std::allocator<GridItemHydraFog::PlantData>> *)
               this_00,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFog::transform(Plant*) */

void __thiscall GridItemHydraFog::transform(GridItemHydraFog *this,Plant *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  string *psVar3;
  PlantWitchFrog *extraout_x0;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(**(long **)(param_1 + 0xa8) + 0x440) != PlantFramework::stopSpecialEffect) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x440))();
  }
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"frog");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  std::string::~string(asStack_10);
  nop();
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
  uVar2 = SharkMinion::getRow((SharkMinion *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
  Board::AddPlant((Board *)0x0,uVar4,uVar1,uVar2,asStack_10,1,1,0xffffffff,0,1,1,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantWitchFrog::Appear(extraout_x0,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFog::transformPlantToFrog() */

void __thiscall GridItemHydraFog::transformPlantToFrog(GridItemHydraFog *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  RtObject *pRVar6;
  Plant *pPVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  RtMixedPtrBase *this_01;
  long lVar10;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  float fVar11;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  char local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1e8);
  iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar5 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Insets::Insets((Insets *)&local_30,iVar4,iVar5,1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,(Insets *)&local_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_40);
    if (cVar2 == '\0') {
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar6);
      cVar3 = isValidSpellTarget(this,pPVar7);
      if (cVar3 != '\0') {
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar6);
        cVar3 = canTransform(this,pPVar7);
        if (cVar3 != '\0') {
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar9 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_40);
          local_38 = FUN_04f5b714(uVar8,uVar9,(Insets *)&local_30);
          std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
          local_30 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar1 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
          if (bVar1) {
            PlantData::PlantData((PlantData *)&local_30);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)&local_30,(RtWeakPtr *)aRStack_40);
            local_28 = 0x40000000;
            local_24 = cVar2;
            std::vector<GridItemHydraFog::PlantData,std::allocator<GridItemHydraFog::PlantData>>::
            push_back((vector<GridItemHydraFog::PlantData,std::allocator<GridItemHydraFog::PlantData>>
                       *)this_00,(PlantData *)&local_30);
            std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_30);
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    while( true ) {
      if (!bVar1) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      this_01 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_01);
      if (cVar2 == '\0') break;
      fVar11 = (float)PVZ_Dt();
      lVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      *(float *)(lVar10 + 8) = *(float *)(lVar10 + 8) - fVar11;
      lVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      if ((0.0 <= *(float *)(lVar10 + 8)) || (*(char *)(lVar10 + 0xc) != '\0')) break;
      *(undefined1 *)(lVar10 + 0xc) = 1;
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      pPVar7 = Sexy::RtObject::Cast<Plant>(pRVar6);
      transform(this,pPVar7);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFog::onUpdate() */

void __thiscall GridItemHydraFog::onUpdate(GridItemHydraFog *this)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [20];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x224] == (GridItemHydraFog)0x0) {
    transformPlantToFrog(this);
    updateColor(this,false);
    fVar1 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0x220);
    *(float *)(this + 0x220) = fVar3 - fVar1;
    if (fVar3 - fVar1 < 0.0) {
      this[0x225] = (GridItemHydraFog)0x1;
      this[0x224] = (GridItemHydraFog)0x1;
      uVar2 = PVZ_T();
      *(undefined4 *)(this + 0x21c) = uVar2;
    }
  }
  if (this[0x225] != (GridItemHydraFog)0x0) {
    updateColor(this,true);
    GridItemAnimation::GetAnimRig();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    PopAnimRig::GetPAMColor();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (local_c < 1) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydraFog::onGridItemInitialize() */

void __thiscall GridItemHydraFog::onGridItemInitialize(GridItemHydraFog *this)

{
  PopAnimRig *pPVar1;
  undefined4 uVar2;
  string asStack_a0 [8];
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  string asStack_78 [12];
  undefined4 local_6c;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  std::string::string(asStack_a0,"fog_purple_idle1");
  nop();
  std::string::string(asStack_98,"fog_purple_idle2");
  nop();
  std::string::string(asStack_90,"fog_purple_idle3");
  nop();
  FUN_05475d88(asStack_78,asStack_a0);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_78,0x32);
  std::string::~string(asStack_78);
  FUN_05475d88(asStack_78,asStack_98);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_78,0x1e);
  std::string::~string(asStack_78);
  FUN_05475d88(asStack_78,asStack_90);
  ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_68,asStack_78,0x14);
  std::string::~string(asStack_78);
  ProbabilitySet<std::string>::PickItem();
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_88,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  PopAnimRig::GetPAMColor();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  local_6c = 0;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  PopAnimRig::SetPAMColor(pPVar1,(Color *)asStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  uVar2 = PVZ_T();
  this[0x224] = (GridItemHydraFog)0x0;
  this[0x225] = (GridItemHydraFog)0x0;
  *(undefined4 *)(this + 0x21c) = uVar2;
  std::string::~string(asStack_88);
  std::string::~string(asStack_90);
  std::string::~string(asStack_98);
  std::string::~string(asStack_a0);
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


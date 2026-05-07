// Class: PlantGroupSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::StaticClassInit() */

void PlantGroupSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGroupSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03f4532c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGroupSubsystem::StaticGetClass() */

long * PlantGroupSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGroupSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGroupSubsystem::GetClass() const */

long * PlantGroupSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGroupSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::FindPlantGroup(Sexy::Point const&) */

void PlantGroupSubsystem::FindPlantGroup(Point *param_1)

{
  bool bVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  long lVar3;
  int *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x10));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
LAB_03f444f0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (RtWeakPtr<Sexy::ResourceInfo> *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    iVar2 = FUN_03f43e78(*(undefined4 *)(lVar3 + 0xa4));
    if (iVar2 == *in_x1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      iVar2 = FUN_03f43e7c(*(undefined4 *)(lVar3 + 0xa8));
      if (iVar2 == in_x1[1]) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
        goto LAB_03f444f0;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::onGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
PlantGroupSubsystem::onGatherPlantingRestrictions
          (PlantGroupSubsystem *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  bool bVar1;
  PlantGroup *this_00;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindPlantGroup((Point *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    this_00 = (PlantGroup *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    PlantGroup::GatherPlantingRestrictions(this_00,param_1,param_2,param_3);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::onPlantRevertedByCondition(Plant*, int, int) */

void __thiscall
PlantGroupSubsystem::onPlantRevertedByCondition
          (PlantGroupSubsystem *this,Plant *param_1,int param_2,int param_3)

{
  bool bVar1;
  PlantGroup *pPVar2;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  FindPlantGroup((Point *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pPVar2 = (PlantGroup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    PlantGroup::RevertConversionCondition(pPVar2,param_3);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::updatePlantfoodRendering(Plant*) */

void PlantGroupSubsystem::updatePlantfoodRendering(Plant *param_1)

{
  bool bVar1;
  PlantGroup *this;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  FindPlantGroup((Point *)param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this = (PlantGroup *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    PlantGroup::UpdatePlantfoodRendering(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::onPlantPlantfooded(Plant*) */

void PlantGroupSubsystem::onPlantPlantfooded(Plant *param_1)

{
  bool bVar1;
  PlantGroup *this;
  RtWeakPtr aRStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  FindPlantGroup((Point *)param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this = (PlantGroup *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    PlantGroup::UpdatePlantfoodRendering(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::onPlantPlantfoodEnd(Plant*) */

void PlantGroupSubsystem::onPlantPlantfoodEnd(Plant *param_1)

{
  bool bVar1;
  PlantGroup *this;
  RtWeakPtr aRStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  FindPlantGroup((Point *)param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    this = (PlantGroup *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    PlantGroup::UpdatePlantfoodRendering(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::FindPlantGroup(Sexy::RtWeakPtr<Plant>) */

void PlantGroupSubsystem::FindPlantGroup
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,long param_2
               ,RtWeakPtrBase *param_3)

{
  char cVar1;
  bool bVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  PlantGroup *pPVar3;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_2 + 0x10));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_2 + 0x10));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar2) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (param_1);
LAB_03f447c0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    this = (RtWeakPtr<Sexy::ResourceInfo> *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    pPVar3 = (PlantGroup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
    cVar1 = PlantGroup::HasPlant(pPVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)this);
      goto LAB_03f447c0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::PlantGroupSubsystem() */

void __thiscall PlantGroupSubsystem::PlantGroupSubsystem(PlantGroupSubsystem *this)

{
  undefined *puVar1;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  CBMemberTranslatorX aCStack_f8 [24];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067979b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlaced);
  local_120 = local_e0;
  uStack_118 = uStack_d8;
  local_110 = local_d0;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDied);
  local_120 = local_c8;
  uStack_118 = uStack_c0;
  local_110 = local_b8;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestory,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantMoving);
  local_140 = local_b0;
  uStack_138 = uStack_a8;
  local_130 = local_a0;
  MessageRouter::
  Subscribe<Plant*,Sexy::Point&,Sexy::CBMemberTranslatorX<PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Plant*,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PlantMoving,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGatherPlantingRestrictions);
  local_150 = local_88;
  local_160 = local_98;
  uStack_158 = uStack_90;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantRevertedByCondition);
  local_180 = local_80;
  uStack_178 = uStack_78;
  local_170 = local_70;
  MessageRouter::
  Subscribe<Plant*,int,int,Sexy::CBMemberTranslatorX<PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Plant*,int,int)>>
            ((MessageRouter *)puVar1,Message::PlantRevertedByCondition,&local_180);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlantfooded);
  local_110 = local_58;
  local_120 = local_68;
  uStack_118 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlantfooded,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlantfoodEnd);
  local_120 = local_50;
  uStack_118 = uStack_48;
  local_110 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantGroupSubsystem,void(PlantGroupSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantFoodEnd,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onClearBoard);
  Sexy::Delegate0::Delegate0<PlantGroupSubsystem,void(PlantGroupSubsystem::*)()>
            (aDStack_38,aCStack_f8);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ClearBoard,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGroupSubsystem::StaticNew() */

PlantGroupSubsystem * PlantGroupSubsystem::StaticNew(void)

{
  PlantGroupSubsystem *this;
  
  this = ::operator_new(0x40);
  PlantGroupSubsystem(this);
  return this;
}


/* PlantGroupSubsystem::ClearData() */

void __thiscall PlantGroupSubsystem::ClearData(PlantGroupSubsystem *this)

{
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::clear
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             (this + 0x10));
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::clear
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             (this + 0x28));
  return;
}


/* PlantGroupSubsystem::onClearBoard() */

void __thiscall PlantGroupSubsystem::onClearBoard(PlantGroupSubsystem *this)

{
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::clear
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             (this + 0x28));
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::clear
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             (this + 0x10));
  return;
}


/* PlantGroupSubsystem::~PlantGroupSubsystem() */

void __thiscall PlantGroupSubsystem::~PlantGroupSubsystem(PlantGroupSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067979b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             (this + 0x28));
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             (this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantGroupSubsystem::~PlantGroupSubsystem() */

void __thiscall PlantGroupSubsystem::~PlantGroupSubsystem(PlantGroupSubsystem *this)

{
  ~PlantGroupSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::deleteDeferred() */

void __thiscall PlantGroupSubsystem::deleteDeferred(PlantGroupSubsystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_02;
  PlantGroup *this_03;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    this_02 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_02);
    if (cVar2 != '\0') {
      this_03 = (PlantGroup *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      cVar2 = PlantGroup::Empty(this_03);
      if (cVar2 != '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
        (**(code **)(*plVar3 + 0x48))();
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_01);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_01);
        local_28 = std::
                   remove<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlantGroup>*,std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>>,Sexy::RtWeakPtr<PlantGroup>>
                             (uVar4,uVar5,this_02);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_01);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_20);
        std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::erase
                  ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>
                    *)this_01,local_18,local_10);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::clear
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::Update() */

void __thiscall PlantGroupSubsystem::Update(PlantGroupSubsystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar1;
  char cVar2;
  RtMixedPtrBase *this_02;
  PlantGroup *this_03;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  lStack_8 = ___stack_chk_guard;
  uStack_38 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
  this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x10);
  uStack_30 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_38,(__normal_iterator *)&uStack_30), bVar1)
  {
    this_02 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_38);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_02);
    if (cVar2 != '\0') {
      this_03 = (PlantGroup *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
      cVar2 = PlantGroup::Empty(this_03);
      if (cVar2 != '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
        (**(code **)(*plVar3 + 0x48))();
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_01);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_01);
        uStack_28 = std::
                    remove<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlantGroup>*,std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>>,Sexy::RtWeakPtr<PlantGroup>>
                              (uVar4,uVar5,this_02);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&uStack_18,(__normal_iterator *)&uStack_28);
        uStack_20 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_01);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&uStack_10,(__normal_iterator *)&uStack_20);
        std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::erase
                  ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>
                    *)this_01,uStack_18,uStack_10);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_38);
  }
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::clear
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             this_00);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGroupSubsystem::GetAllActiveGroups() */

PlantGroupSubsystem * __thiscall PlantGroupSubsystem::GetAllActiveGroups(PlantGroupSubsystem *this)

{
  deleteDeferred(this);
  return this + 0x10;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::createPlantGroup(Sexy::Point const&) */

void PlantGroupSubsystem::createPlantGroup(Point *param_1)

{
  PlantGroup *this;
  Point *in_x1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = GameObject::Create<PlantGroup>();
  PlantGroup::SetGridLocation(this,in_x1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::push_back
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             (param_1 + 0x10),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::GetOrCreatePlantGroup(Sexy::Point const&) */

void __thiscall PlantGroupSubsystem::GetOrCreatePlantGroup(PlantGroupSubsystem *this,Point *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindPlantGroup((Point *)this);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 == '\0') {
    createPlantGroup((Point *)this);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::onPlantPlaced(Plant*) */

void PlantGroupSubsystem::onPlantPlaced(Plant *param_1)

{
  PlantGroup *pPVar1;
  Point aPStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  GetOrCreatePlantGroup((PlantGroupSubsystem *)param_1,aPStack_28);
  pPVar1 = (PlantGroup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantGroup::AddPlant(pPVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGroupSubsystem::removePlantGroup(Sexy::RtWeakPtr<PlantGroup>) */

void __thiscall PlantGroupSubsystem::removePlantGroup(PlantGroupSubsystem *this,RtWeakPtr *param_2)

{
  std::vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>>::push_back
            ((vector<Sexy::RtWeakPtr<PlantGroup>,std::allocator<Sexy::RtWeakPtr<PlantGroup>>> *)
             (this + 0x28),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::onPlantDied(Plant*) */

void __thiscall PlantGroupSubsystem::onPlantDied(PlantGroupSubsystem *this,Plant *param_1)

{
  char cVar1;
  PlantGroup *pPVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_28);
  cVar1 = Plant::IsTravellingOutsideGroup(param_1);
  if (cVar1 == '\0') {
    BoardEntity::CalcGridPosition();
    FindPlantGroup((Point *)this);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_28,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_28);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
    FindPlantGroup(aRStack_10,this,aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_28,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_28);
  }
  if (cVar1 != '\0') {
    pPVar2 = (PlantGroup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
    PlantGroup::UpdatePlantfoodRendering(pPVar2);
    pPVar2 = (PlantGroup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = PlantGroup::HasPlant(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (cVar1 != '\0') {
      pPVar2 = (PlantGroup *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28)
      ;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      PlantGroup::RemovePlant(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    pPVar2 = (PlantGroup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
    cVar1 = PlantGroup::Empty(pPVar2);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)a_Stack_28);
      removePlantGroup(this,(RtWeakPtr<Sexy::SoundResource> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGroupSubsystem::onPlantMoving(Plant*, Sexy::Point&) */

void PlantGroupSubsystem::onPlantMoving(Plant *param_1,Point *param_2)

{
  char cVar1;
  PlantGroup *pPVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_28);
  cVar1 = Plant::IsTravellingOutsideGroup((Plant *)param_2);
  if (cVar1 == '\0') {
    BoardEntity::CalcGridPosition();
    FindPlantGroup((Point *)param_1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_28,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_28);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
    FindPlantGroup(aRStack_10,param_1,aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_28,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_28);
  }
  if (cVar1 != '\0') {
    pPVar2 = (PlantGroup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
    PlantGroup::UpdatePlantfoodRendering(pPVar2);
    pPVar2 = (PlantGroup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = PlantGroup::HasPlant(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (cVar1 != '\0') {
      pPVar2 = (PlantGroup *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28)
      ;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
      PlantGroup::RemovePlant(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    pPVar2 = (PlantGroup *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
    cVar1 = PlantGroup::Empty(pPVar2);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)a_Stack_28);
      removePlantGroup((PlantGroupSubsystem *)param_1,(RtWeakPtr<Sexy::SoundResource> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_28);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


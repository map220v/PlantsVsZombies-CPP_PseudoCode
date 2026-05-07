// Class: RiftThemePlantSeedAnimation


/* RiftThemePlantSeedAnimation::CalcRenderOrder() const */

void __thiscall RiftThemePlantSeedAnimation::CalcRenderOrder(RiftThemePlantSeedAnimation *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61cd8,0,uVar1);
  return;
}


/* non-virtual thunk to RiftThemePlantSeedAnimation::CalcRenderOrder() const */

void __thiscall RiftThemePlantSeedAnimation::CalcRenderOrder(RiftThemePlantSeedAnimation *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* RiftThemePlantSeedAnimation::~RiftThemePlantSeedAnimation() */

void __thiscall
RiftThemePlantSeedAnimation::~RiftThemePlantSeedAnimation(RiftThemePlantSeedAnimation *this)

{
  *(undefined ***)this = &PTR_GetClass_06689ad0;
  *(undefined ***)(this + 0x10) = &PTR__RiftThemePlantSeedAnimation_06689d88;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to RiftThemePlantSeedAnimation::~RiftThemePlantSeedAnimation() */

void __thiscall
RiftThemePlantSeedAnimation::~RiftThemePlantSeedAnimation(RiftThemePlantSeedAnimation *this)

{
  ~RiftThemePlantSeedAnimation(this + -0x10);
  return;
}


/* RiftThemePlantSeedAnimation::~RiftThemePlantSeedAnimation() */

void __thiscall
RiftThemePlantSeedAnimation::~RiftThemePlantSeedAnimation(RiftThemePlantSeedAnimation *this)

{
  ~RiftThemePlantSeedAnimation(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RiftThemePlantSeedAnimation::~RiftThemePlantSeedAnimation() */

void __thiscall
RiftThemePlantSeedAnimation::~RiftThemePlantSeedAnimation(RiftThemePlantSeedAnimation *this)

{
  ~RiftThemePlantSeedAnimation(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePlantSeedAnimation::StaticClassInit() */

void RiftThemePlantSeedAnimation::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemePlantSeedAnimation");
    (*pcVar2)(plVar1,asStack_10,FUN_03717254,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemePlantSeedAnimation::StaticGetClass() */

long * RiftThemePlantSeedAnimation::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemePlantSeedAnimation",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePlantSeedAnimation::GetClass() const */

long * RiftThemePlantSeedAnimation::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemePlantSeedAnimation",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePlantSeedAnimation::RiftThemePlantSeedAnimation() */

void __thiscall
RiftThemePlantSeedAnimation::RiftThemePlantSeedAnimation(RiftThemePlantSeedAnimation *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06689ad0;
  *(undefined ***)(this + 0x10) = &PTR__RiftThemePlantSeedAnimation_06689d88;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* RiftThemePlantSeedAnimation::StaticNew() */

RiftThemePlantSeedAnimation * RiftThemePlantSeedAnimation::StaticNew(void)

{
  RiftThemePlantSeedAnimation *this;
  
  this = ::operator_new(0x1b0);
  RiftThemePlantSeedAnimation(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePlantSeedAnimation::onGridItemInitialize() */

void __thiscall RiftThemePlantSeedAnimation::onGridItemInitialize(RiftThemePlantSeedAnimation *this)

{
  PopAnimRig *pPVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  std::string::string(asStack_58,"birth");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePlantSeedAnimation::SpawnPlant() */

void __thiscall RiftThemePlantSeedAnimation::SpawnPlant(RiftThemePlantSeedAnimation *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  RtObject *this_01;
  RiftThemePlantSeedAnimationProps *pRVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  RtWeakPtrBase *pRVar11;
  Board *this_02;
  LevelEditorCardPlantInterface aLStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  lVar7 = Board::GetPlantGroupAt(this_02,iVar3,iVar4);
  if (lVar7 != 0) {
    PlantGroup::GetPlantAtLayer((RtMixedPtrBase *)&local_20,lVar7,1);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    if (cVar1 != '\0') goto LAB_037182d0;
  }
  GridItem::GetProps();
  this_01 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  pRVar8 = Sexy::RtObject::Cast<RiftThemePlantSeedAnimationProps>(this_01);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(pRVar8 + 0xd0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_40);
  while( true ) {
    bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                      ((ObjectTypeDirectoryIterator *)aLStack_40);
    if (!bVar2) break;
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_40);
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_38);
    if ((cVar1 == '\0') &&
       (lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38),
       *(char *)(lVar7 + 0x30) != '\0')) {
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar9,uVar10,lVar7 + 8);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (bVar2) goto LAB_03718368;
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      bVar2 = std::operator==((string *)(lVar7 + 8),"armorflame");
      if (bVar2) goto LAB_03718368;
      std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
      ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                   *)&local_20,(RtWeakPtr *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    else {
LAB_03718368:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_40);
  }
  iVar3 = FUN_03716578(local_20,local_18);
  iVar3 = Sexy::Rand(iVar3);
  uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
  uVar5 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  uVar6 = SharkMinion::getRow((SharkMinion *)this);
  pRVar11 = (RtWeakPtrBase *)FUN_03716584(local_20,(long)iVar3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_28,pRVar11);
  Board::AddPlant((Board *)0x0,uVar9,uVar5,uVar6,(RtWeakPtr<Sexy::SoundResource> *)&local_28,1,1,
                  0xffffffff,bVar2,1,1,bVar2,bVar2,bVar2,bVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)&local_20);
LAB_037182d0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePlantSeedAnimation::onAnimationDone(std::string const&) */

void __thiscall
RiftThemePlantSeedAnimation::onAnimationDone(RiftThemePlantSeedAnimation *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"birth");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x1a8) = fVar3 + 30.0;
  }
  else {
    bVar1 = std::operator==(param_1,"grow");
    if (bVar1) {
      SpawnPlant(this);
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
/* RiftThemePlantSeedAnimation::onUpdate() */

void __thiscall RiftThemePlantSeedAnimation::onUpdate(RiftThemePlantSeedAnimation *this)

{
  PopAnimRig *pPVar1;
  float fVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x1a8) < fVar2) {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x1a8) = uVar3;
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
    std::string::string(asStack_58,"grow");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePlantSeedAnimation::GatherPlantingRestrictions(PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) const */

void __thiscall
RiftThemePlantSeedAnimation::GatherPlantingRestrictions
          (RiftThemePlantSeedAnimation *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x2e;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


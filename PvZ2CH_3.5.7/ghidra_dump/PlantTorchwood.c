// Class: PlantTorchwood


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTorchwood::StaticClassInit() */

void PlantTorchwood::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTorchwood");
    (*pcVar2)(plVar1,asStack_10,FUN_04074600,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTorchwood::StaticGetClass() */

long * PlantTorchwood::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTorchwood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTorchwood::GetClass() const */

long * PlantTorchwood::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTorchwood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTorchwood::PlantTorchwood() */

void __thiscall PlantTorchwood::PlantTorchwood(PlantTorchwood *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c8120;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* PlantTorchwood::StaticNew() */

PlantTorchwood * PlantTorchwood::StaticNew(void)

{
  PlantTorchwood *this;
  
  this = ::operator_new(0x40);
  PlantTorchwood(this);
  return this;
}


/* PlantTorchwood::~PlantTorchwood() */

void __thiscall PlantTorchwood::~PlantTorchwood(PlantTorchwood *this)

{
  *(undefined ***)this = &PTR_GetClass_067c8120;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantTorchwood::~PlantTorchwood() */

void __thiscall PlantTorchwood::~PlantTorchwood(PlantTorchwood *this)

{
  ~PlantTorchwood(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04074c48 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantTorchwood::Initialize() */

void __thiscall PlantTorchwood::Initialize(PlantTorchwood *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *pRVar1;
  undefined4 uVar2;
  BoardEntity *pBVar3;
  ComponentWarmingRadius *this_00;
  long lVar4;
  ComponentProjectileConverter *pCVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  pBVar3 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(pBVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)pBVar3,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_00 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  lVar4 = FUN_040744e4(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar4 + 0x2b8));
  pBVar3 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(pBVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"ProjectileConverter");
  ComponentRunner::Add<ComponentProjectileConverter>
            ((ComponentRunner *)pBVar3,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  pCVar5 = (ComponentProjectileConverter *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  lVar4 = FUN_040744e4(*(undefined8 *)(this + 0x10));
  ComponentProjectileConverter::SetConverterProps
            (pCVar5,(ComponentProjectileConverterProps *)(lVar4 + 0x4e8));
  pCVar5 = (ComponentProjectileConverter *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  ComponentProjectileConverter::SetPlantAttackRect(pCVar5,*(undefined8 *)(this + 0x10),0);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  uVar2 = FUN_04073d14(*(undefined1 *)(*(long *)(this + 0x10) + 0x55));
  FUN_04073d2c(lVar4 + 0xa8,uVar2);
  fVar6 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  if (0.0 < fVar6) {
    pBVar3 = *(BoardEntity **)(this + 0x10);
    pRVar1 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
    BoardEntity::GetComponentRunner(pBVar3);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
    std::string::string(asStack_18,"ProjectileConverterGene");
    ComponentRunner::Add<ComponentProjectileConverter>
              ((ComponentRunner *)pBVar3,aRStack_20,asStack_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(pRVar1,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    pCVar5 = (ComponentProjectileConverter *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    lVar4 = FUN_040744e4(*(undefined8 *)(this + 0x10));
    ComponentProjectileConverter::SetConverterProps
              (pCVar5,(ComponentProjectileConverterProps *)(lVar4 + 0x510));
    pCVar5 = (ComponentProjectileConverter *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    ComponentProjectileConverter::SetPlantAttackRect(pCVar5,*(undefined8 *)(this + 0x10),0);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    FUN_04073db0(lVar4 + 0xa0);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    FUN_04073d24(lVar4 + 0xa4);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    uVar2 = FUN_04073d14(*(undefined1 *)(*(long *)(this + 0x10) + 0x55));
    FUN_04073d2c(lVar4 + 0xa8,uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTorchwood::ApplyPlantfood() */

void __thiscall PlantTorchwood::ApplyPlantfood(PlantTorchwood *this)

{
  RtWeakPtr *pRVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  ComponentProjectileConverter *pCVar5;
  ComponentWarmingRadius *this_00;
  undefined4 uVar6;
  RealObject *this_01;
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar2) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    lVar4 = FUN_040744e4(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar4 + 0x3d0));
  }
  pRVar1 = (RtWeakPtr *)(this + 0x30);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (bVar2) {
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar6 = 2;
    if (cVar3 == '\0') {
      uVar6 = 1;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    FUN_04073d1c(lVar4 + 0x9c,uVar6);
    pCVar5 = (ComponentProjectileConverter *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    ComponentProjectileConverter::ClearProjectileConversionList(pCVar5);
  }
  pRVar1 = (RtWeakPtr *)(this + 0x38);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (bVar2) {
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar6 = 2;
    if (cVar3 == '\0') {
      uVar6 = 1;
    }
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    FUN_04073d1c(lVar4 + 0x9c,uVar6);
    pCVar5 = (ComponentProjectileConverter *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    ComponentProjectileConverter::ClearProjectileConversionList(pCVar5);
  }
  this_01 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Torchwood_PF");
  RealObject::PlayPositionalSound(this_01,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


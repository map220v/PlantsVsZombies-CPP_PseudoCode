// Class: PlantCaulipower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::GetTargetParamsForWeapon(PlantWeapon) */

void PlantCaulipower::GetTargetParamsForWeapon(void)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData((UnchartedModePlantNumData *)&local_10,0,5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* PlantCaulipower::ClearLv5SkillTriggle() */

void __thiscall PlantCaulipower::ClearLv5SkillTriggle(PlantCaulipower *this)

{
  this[0x58] = (PlantCaulipower)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::ZombieIsBlacklisted(Zombie*) */

void __thiscall PlantCaulipower::ZombieIsBlacklisted(PlantCaulipower *this,Zombie *param_1)

{
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  ZombieRestrictionSet::IsExcluded((ZombieRestrictionSet *)(extraout_x0 + 0x2e0),param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCaulipower::PostInitialize() */

void __thiscall PlantCaulipower::PostInitialize(PlantCaulipower *this)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_03bccfd0(*(undefined8 *)(this + 0x10));
  if ((3 < iVar1) && (fVar2 = (float)RandRangeFloat(0.0,1.0), fVar2 < 0.25)) {
    (**(code **)(*(long *)this + 0x220))(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::StaticClassInit() */

void PlantCaulipower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCaulipower");
    (*pcVar2)(plVar1,asStack_10,FUN_03bcf3a0,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCaulipower::StaticGetClass() */

long * PlantCaulipower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCaulipower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCaulipower::GetClass() const */

long * PlantCaulipower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCaulipower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::CheckLv5SkillTriggle() */

void __thiscall PlantCaulipower::CheckLv5SkillTriggle(PlantCaulipower *this)

{
  char cVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03bcd038(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar2 = (float)RandRangeFloat(0.0,1.0);
    if (fVar2 < *(float *)(extraout_x0 + 0x308)) {
      this[0x58] = (PlantCaulipower)0x1;
      goto LAB_03bcdd60;
    }
  }
  this[0x58] = (PlantCaulipower)0x0;
  cVar1 = '\0';
LAB_03bcdd60:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantCaulipower::Fire
          (PlantCaulipower *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  CaulipowerProjectile *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    if (this[0x58] == (PlantCaulipower)0x0) {
      *(int *)(*(long *)(this + 0x10) + 0x150) = (int)param_4;
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    this_00 = (RtObject *)PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
    this_01 = Sexy::RtObject::Cast<CaulipowerProjectile>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    iVar2 = FUN_03bccfd0(*(undefined8 *)(this + 0x10));
    CaulipowerProjectile::SetPlantLevel(this_01,iVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    SpearProjectile::SetPlant((SpearProjectile *)this_01,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    CaulipowerProjectile::MakePositionAdjustment(this_01);
  }
  else {
    this_01 = (CaulipowerProjectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* PlantCaulipower::PlantCaulipower() */

void __thiscall PlantCaulipower::PlantCaulipower(PlantCaulipower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0673b230;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PlantCaulipower::StaticNew() */

PlantCaulipower * PlantCaulipower::StaticNew(void)

{
  PlantCaulipower *this;
  
  this = ::operator_new(0x60);
  PlantCaulipower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::ApplyPlantfood() */

void __thiscall PlantCaulipower::ApplyPlantfood(PlantCaulipower *this)

{
  PopAnimRig *this_00;
  PlantTypeCaulipower *this_01;
  undefined8 uVar1;
  string *psVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = (PopAnimRig *)FUN_03bceabc(*(undefined8 *)(this + 0x10));
  Plant::GetType();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  PlantTypeCaulipower::getAvatarPlantFoodLayer(this_01);
  uVar1 = FUN_0547429c();
  Sexy::OutputDebugStrF((wchar_t *)"PlantCaulipower type getAvatarPlantFoodLayer() is %s",uVar1);
  psVar2 = (string *)PlantTypeCaulipower::getAvatarPlantFoodLayer(this_01);
  PopAnimRig::SetLayerVisibility(this_00,psVar2,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::CancelPlantfood() */

void __thiscall PlantCaulipower::CancelPlantfood(PlantCaulipower *this)

{
  PopAnimRig *this_00;
  PlantTypeCaulipower *this_01;
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  (**(code **)(*(long *)this + 0x260))(this);
  this_00 = (PopAnimRig *)FUN_03bceabc(*(undefined8 *)(this + 0x10));
  Plant::GetType();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  psVar1 = (string *)PlantTypeCaulipower::getAvatarPlantFoodLayer(this_01);
  PopAnimRig::SetLayerVisibility(this_00,psVar1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCaulipower::~PlantCaulipower() */

void __thiscall PlantCaulipower::~PlantCaulipower(PlantCaulipower *this)

{
  *(undefined ***)this = &PTR_GetClass_0673b230;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x40));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCaulipower::~PlantCaulipower() */

void __thiscall PlantCaulipower::~PlantCaulipower(PlantCaulipower *this)

{
  ~PlantCaulipower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::Initialize() */

void __thiscall PlantCaulipower::Initialize(PlantCaulipower *this)

{
  vector<int,std::allocator<int>> *this_00;
  char cVar1;
  int iVar2;
  long extraout_x0;
  UINFSLinkage *this_01;
  Plant *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x58] = (PlantCaulipower)0x0;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::vector<int,std::allocator<int>>::clear(this_00);
  std::vector<int,std::allocator<int>>::push_back(this_00,(int *)(extraout_x0 + 0x2d4));
  std::vector<int,std::allocator<int>>::push_back(this_00,(int *)(extraout_x0 + 0x2d8));
  std::vector<int,std::allocator<int>>::push_back(this_00,(int *)(extraout_x0 + 0x2dc));
  this_01 = (UINFSLinkage *)FUN_03bceabc(*(undefined8 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantAnimRig_DevilsFlower::SetPlantPtr((PlantAnimRig_DevilsFlower *)this_01,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') &&
     (iVar2 = PlantFramework::Rand((PlantFramework *)this),
     (float)iVar2 * _FUN_03bcf7b0 <= *(float *)(extraout_x0 + 0x30c))) {
    iVar2 = UINFSLinkage::GetCurrentIntegral(this_01);
    PlantAnimRig_Caulipower::setPlantFoodPlayCount((PlantAnimRig_Caulipower *)this_01,iVar2 + 1);
  }
  (**(code **)(*(long *)this + 0x260))(this);
  this_02 = *(Plant **)(this + 0x10);
  iVar2 = FUN_03bcce90(*(undefined4 *)(this_02 + 0x50));
  if (iVar2 < 3) {
    if (iVar2 == 2) {
      Plant::UpdateLaunchInterval(this_02,0.75);
    }
  }
  else {
    Plant::UpdateLaunchInterval(this_02,0.625);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::FindTargetZombie() */

void PlantCaulipower::FindTargetZombie(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  PlantCaulipower *in_x0;
  RtWeakPtrBase *pRVar4;
  Zombie *pZVar5;
  long lVar6;
  ulong uVar7;
  RtObject *this_00;
  undefined8 uVar8;
  undefined8 uVar9;
  ZombieZombossMech *pZVar10;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_02;
  undefined8 *puVar11;
  ZombieGargantuar *pZVar12;
  int *piVar13;
  RtWeakPtr *pRVar14;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_90 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50 [3];
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)in_x0 + 200))
            ((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)&local_68,in_x0,2,0x800);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_68);
  while( true ) {
    local_38[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_68);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_38);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_50,pRVar4);
    pZVar5 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    cVar2 = Zombie::IsIgnoringAllDamage(pZVar5);
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)pZVar5 + 0x328))(pZVar5), cVar2 == '\0'))
    {
      FUN_03bce554((__normal_iterator *)&local_70);
    }
    else {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_38,(__normal_iterator *)&local_70);
      local_70 = std::
                 vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
                 erase((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                        *)&local_68,local_38[0]);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_90);
  lVar6 = FUN_03bcd078(local_68,local_60);
  if ((lVar6 == 0) ||
     (uVar7 = FUN_03bcd060(*(undefined8 *)(in_x0 + 0x28),*(undefined8 *)(in_x0 + 0x30)), uVar7 < 3))
  goto LAB_03bcfd18;
  iVar3 = 3;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
  do {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
    std::
    vector<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::allocator<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>
    ::push_back((vector<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::allocator<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>
                 *)local_50,(vector *)local_38);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               local_38);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_68);
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x40);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar1) {
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_88,pRVar4);
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
    pZVar5 = Sexy::RtObject::Cast<Zombie>(this_00);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this);
    local_70 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                         (uVar8,uVar9,aRStack_88);
    local_38[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_38);
    pZVar10 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)pZVar5);
    if (((pZVar10 == (ZombieZombossMech *)0x0) && (!bVar1)) &&
       (cVar2 = ZombieIsBlacklisted(in_x0,pZVar5), cVar2 == '\0')) {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar5);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      uVar8 = 0;
      if (*(char *)(lVar6 + 0xa9) == '\0') {
        pZVar12 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)pZVar5);
        uVar8 = 2;
        if (pZVar12 != (ZombieGargantuar *)0x0) {
          uVar8 = 1;
        }
      }
      this_02 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )FUN_03bcd084(local_50[0],uVar8);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back(this_02,(RtWeakPtr *)aRStack_88);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
  uVar8 = local_50[0];
  puVar11 = (undefined8 *)FUN_03bcd084(local_50[0],0);
  lVar6 = FUN_03bcd078(*puVar11,puVar11[1]);
  if (lVar6 == 0) {
    puVar11 = (undefined8 *)FUN_03bcd084(uVar8,1);
    lVar6 = FUN_03bcd078(*puVar11,puVar11[1]);
    bVar1 = false;
    if (lVar6 != 0) goto LAB_03bcfdd0;
LAB_03bcfce4:
    puVar11 = (undefined8 *)FUN_03bcd084(uVar8,2);
    lVar6 = FUN_03bcd078(*puVar11,puVar11[1]);
    if (lVar6 != 0) goto LAB_03bcfe14;
LAB_03bcfd04:
    if (bVar1) goto LAB_03bcfe30;
  }
  else {
    piVar13 = (int *)FUN_03bcd090(*(undefined8 *)(in_x0 + 0x28),0);
    bVar1 = true;
    ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_38,0,*piVar13);
    uVar8 = local_50[0];
    puVar11 = (undefined8 *)FUN_03bcd084(local_50[0],1);
    lVar6 = FUN_03bcd078(*puVar11,puVar11[1]);
    if (lVar6 == 0) goto LAB_03bcfce4;
LAB_03bcfdd0:
    bVar1 = true;
    piVar13 = (int *)FUN_03bcd090(*(undefined8 *)(in_x0 + 0x28),1);
    ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_38,1,*piVar13);
    puVar11 = (undefined8 *)FUN_03bcd084(local_50[0],2);
    lVar6 = FUN_03bcd078(*puVar11,puVar11[1]);
    if (lVar6 == 0) goto LAB_03bcfd04;
LAB_03bcfe14:
    piVar13 = (int *)FUN_03bcd090(*(undefined8 *)(in_x0 + 0x28),2);
    ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_38,2,*piVar13);
LAB_03bcfe30:
    iVar3 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)local_38);
    puVar11 = (undefined8 *)FUN_03bcd084(local_50[0],(long)iVar3);
    iVar3 = FUN_03bcd078(*puVar11,puVar11[1]);
    iVar3 = PlantFramework::Rand((PlantFramework *)in_x0,iVar3);
    pRVar14 = (RtWeakPtr *)FUN_03bcd098(*puVar11,(long)iVar3);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_90,pRVar14);
  }
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)local_38);
  std::
  vector<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::allocator<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>
  ::~vector((vector<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>,std::allocator<std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>>
             *)local_50);
LAB_03bcfd18:
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)a_Stack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_90);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::CanApplyPlantfood() */

void PlantCaulipower::CanApplyPlantfood(void)

{
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargetZombie();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar1 != (ResourceInfo *)0x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCaulipower::DoPlantfoodAttack() */

void __thiscall PlantCaulipower::DoPlantfoodAttack(PlantCaulipower *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long extraout_x0;
  ResourceInfo *pRVar4;
  long *plVar5;
  long lVar6;
  Zombie *pZVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  float *pfVar9;
  SexyVector3 *pSVar10;
  RealObject *this_00;
  int iVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined4 local_20 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (0 < *(int *)(extraout_x0 + 0x2b8)) {
    iVar11 = 0;
LAB_03bcff9c:
    do {
      FindTargetZombie();
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
      if (pRVar4 == (ResourceInfo *)0x0) {
        (**(code **)(*(long *)this + 0x228))(this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        break;
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(this + 0x40),(RtWeakPtr *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      iVar2 = FUN_03bccfd0(*(undefined8 *)(this + 0x10));
      iVar3 = 5;
      if (iVar2 * 2 < 5) {
        iVar3 = 2;
      }
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      cVar1 = (**(code **)(*plVar5 + 0x3f0))();
      if (cVar1 != '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        iVar2 = FUN_03bcce90(*(undefined4 *)(lVar6 + 0x50));
        if (iVar2 <= iVar3) {
          pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          cVar1 = Zombie::IsBerserk(pZVar7);
          if (cVar1 == '\0') {
            pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            cVar1 = Zombie::HasFogImmune(pZVar7);
            if (cVar1 == '\0') {
              pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
              cVar1 = Zombie::IsBoss(pZVar7);
              if (cVar1 == '\0') {
                plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
                cVar1 = (**(code **)(*plVar5 + 0x4d8))();
                if (cVar1 == '\0') {
                  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
                  cVar1 = (**(code **)(*plVar5 + 0x508))();
                  if (cVar1 == '\0') {
                    pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
                    iVar3 = Zombie::GetSizeType(pZVar7);
                    if (iVar3 != 2) {
                      iVar11 = iVar11 + 1;
                      p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
                      pfVar9 = (float *)std::
                                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        ::_M_leftmost(p_Var8);
                      fVar12 = *pfVar9;
                      p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
                      lVar6 = std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(p_Var8);
                      fVar13 = *(float *)(lVar6 + 4);
                      local_20[0] = 0x43160000;
                      p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
                      lVar6 = std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(p_Var8);
                      pfVar9 = eastl::max_alt<float>((float *)local_20,(float *)(lVar6 + 8));
                      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar12 + 850.0,fVar13,*pfVar9);
                      pSVar10 = (SexyVector3 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
                      Zombie::FlickOff(pSVar10,400.0,-1120.0);
                      this_00 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
                      std::string::string((string *)local_20,"Play_UI_PowerUp_Flick_Secondary");
                      RealObject::PlayPositionalSound(this_00,(string *)local_20,0.0);
                      std::string::~string((string *)local_20);
                      nop();
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
                      if (*(int *)(extraout_x0 + 0x2b8) <= iVar11) break;
                      goto LAB_03bcff9c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    } while (iVar11 < *(int *)(extraout_x0 + 0x2b8));
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x40));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCaulipower::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

undefined8 PlantCaulipower::FindTargetZombie(undefined8 param_1)

{
  FindTargetZombie();
  return param_1;
}


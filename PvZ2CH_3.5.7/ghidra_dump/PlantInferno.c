// Class: PlantInferno


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantInferno::StaticClassInit() */

void PlantInferno::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantInferno");
    (*pcVar2)(plVar1,asStack_10,FUN_03b103dc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantInferno::StaticGetClass() */

long * PlantInferno::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantInferno",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantInferno::GetClass() const */

long * PlantInferno::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantInferno",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantInferno::ApplyPlantfood() */

void __thiscall PlantInferno::ApplyPlantfood(PlantInferno *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  PlantHydrocotyledrummer::setState((PlantHydrocotyledrummer *)this,0xb);
  return;
}


/* PlantInferno::CancelPlantfood() */

void __thiscall PlantInferno::CancelPlantfood(PlantInferno *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  PlantHydrocotyledrummer::setState((PlantHydrocotyledrummer *)this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantInferno::DoSpecial(int) */

void PlantInferno::DoSpecial(int param_1)

{
  long *plVar1;
  code *pcVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  plVar1 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0xb0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  (*pcVar2)(plVar1,a_Stack_10,*(undefined4 *)(plVar1[2] + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantInferno::PlantInferno() */

void __thiscall PlantInferno::PlantInferno(PlantInferno *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0672b400;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* PlantInferno::StaticNew() */

PlantInferno * PlantInferno::StaticNew(void)

{
  PlantInferno *this;
  
  this = ::operator_new(0x30);
  PlantInferno(this);
  return this;
}


/* PlantInferno::~PlantInferno() */

void __thiscall PlantInferno::~PlantInferno(PlantInferno *this)

{
  *(undefined ***)this = &PTR_GetClass_0672b400;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantInferno::~PlantInferno() */

void __thiscall PlantInferno::~PlantInferno(PlantInferno *this)

{
  ~PlantInferno(this);
  AK::FreeHook(this);
  return;
}


/* PlantInferno::UpdateActions() */

void __thiscall PlantInferno::UpdateActions(PlantInferno *this)

{
  char cVar1;
  PopAnimRig *this_00;
  long *plVar2;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if ((cVar1 == '\0') && (*(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) == 4)) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar1 == '\0') {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar2 + 0x118))();
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantInferno::fireTornado() */

void __thiscall PlantInferno::fireTornado(PlantInferno *this)

{
  undefined8 uVar1;
  long *extraout_x0;
  long lVar2;
  code *pcVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  uVar1 = PlantFramework::Fire
                    ((PlantFramework *)this,a_Stack_10,
                     *(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  nop();
  pcVar3 = *(code **)(*extraout_x0 + 0x1e0);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 0x2c0),extraout_x0,0);
  pcVar3 = *(code **)(*extraout_x0 + 0x1e8);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 0x2b8),extraout_x0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantInferno::firePFTornado() */

void __thiscall PlantInferno::firePFTornado(PlantInferno *this)

{
  undefined8 uVar1;
  InfernoPFProjectile *this_00;
  InfernoPFProjectile *this_01;
  long lVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  uVar1 = PlantFramework::Fire
                    ((PlantFramework *)this,a_Stack_10,
                     *(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  PlantFramework::Fire
            ((PlantFramework *)this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  nop();
  nop();
  pcVar3 = *(code **)(*(long *)this_00 + 0x1e0);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 0x2c4),this_00,1);
  pcVar3 = *(code **)(*(long *)this_00 + 0x1e8);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 700),this_00);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  InfernoPFProjectile::SetMaxCarriedZombies(this_00,*(int *)(lVar2 + 0x2c8));
  InfernoPFProjectile::setRotateCenterPosition(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)aRStack_18);
  InfernoPFProjectile::setTornadoValues((InfernoPFProjectile *)0x3fc90fdb,this_00,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  FUN_03b0bffc(this_00 + 0x248,1);
  pcVar3 = *(code **)(*(long *)this_01 + 0x1e0);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 0x2c4),this_01,1);
  pcVar3 = *(code **)(*(long *)this_01 + 0x1e8);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 700),this_01);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  InfernoPFProjectile::SetMaxCarriedZombies(this_01,*(int *)(lVar2 + 0x2c8));
  InfernoPFProjectile::setRotateCenterPosition(this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)aRStack_18);
  InfernoPFProjectile::setTornadoValues((InfernoPFProjectile *)0xbfc90fdb,this_01,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  FUN_03b0bffc(this_01 + 0x248,2);
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantInferno::fireAPFTornado() */

void __thiscall PlantInferno::fireAPFTornado(PlantInferno *this)

{
  undefined8 uVar1;
  InfernoPFProjectile *this_00;
  InfernoPFProjectile *this_01;
  long lVar2;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  uVar1 = PlantFramework::Fire
                    ((PlantFramework *)this,a_Stack_10,
                     *(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  PlantFramework::Fire
            ((PlantFramework *)this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  nop();
  nop();
  pcVar3 = *(code **)(*(long *)this_00 + 0x1e0);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 0x2c4),this_00,1);
  pcVar3 = *(code **)(*(long *)this_00 + 0x1e8);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 700),this_00);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  InfernoPFProjectile::SetMaxCarriedZombies(this_00,*(int *)(lVar2 + 0x2c8));
  InfernoPFProjectile::setRotateCenterPosition(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)aRStack_18);
  InfernoPFProjectile::setTornadoValues((InfernoPFProjectile *)0x3fc90fdb,this_00,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  FUN_03b0bffc(this_00 + 0x248,1);
  pcVar3 = *(code **)(*(long *)this_01 + 0x1e0);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 0x2c4),this_01,1);
  pcVar3 = *(code **)(*(long *)this_01 + 0x1e8);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  (*pcVar3)(*(undefined4 *)(lVar2 + 700),this_01);
  lVar2 = FUN_03b0faac(*(undefined8 *)(this + 0x10));
  InfernoPFProjectile::SetMaxCarriedZombies(this_01,*(int *)(lVar2 + 0x2c8));
  InfernoPFProjectile::setRotateCenterPosition(this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)aRStack_18);
  InfernoPFProjectile::setTornadoValues((InfernoPFProjectile *)0xbfc90fdb,this_01,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  FUN_03b0bffc(this_01 + 0x248,2);
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantInferno::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantInferno::Fire(PlantInferno *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 == '\0') {
    fireTornado(param_1);
    return;
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if (cVar1 != '\0') {
    fireAPFTornado(param_1);
    return;
  }
  firePFTornado(param_1);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x03b12140 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantInferno::Initialize() */

void __thiscall PlantInferno::Initialize(PlantInferno *this)

{
  long lVar1;
  BoardEntity *this_00;
  ComponentWarmingRadius *this_01;
  RtObject *this_02;
  PowerPropsWarmingRadius *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  PowerSet aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  FUN_03b0bfc0(aRStack_28,*(undefined8 *)(this + 0x10));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  PowerSet::PowerSet(aPStack_20,(PowerSet *)(lVar1 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_00 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
  std::string::string(asStack_30,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this_00,aRStack_38,asStack_30);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  this_01 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  PowerSet::Find(aRStack_28,aPStack_20,2,0);
  this_02 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pPVar2 = Sexy::RtObject::Cast<PowerPropsWarmingRadius>(this_02);
  ComponentWarmingRadius::SetRadiusProps(this_01,(ComponentWarmingRadiusProps *)(pPVar2 + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  PowerSet::~PowerSet(aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: PlantElectricBlueberry


/* PlantElectricBlueberry::GetDamageFlags(PlantWeapon) */

undefined8 PlantElectricBlueberry::GetDamageFlags(void)

{
  return 0x80;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricBlueberry::GetFireSoundEvent() const */

void PlantElectricBlueberry::GetFireSoundEvent(void)

{
  long lVar1;
  char cVar2;
  long *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = (**(code **)(*in_x0 + 0x180))();
  if (cVar2 == '\0') {
    std::string::string(in_x8,"Play_LightningReed_Fire");
    nop();
  }
  else {
    std::string::string(in_x8,"Play_LightningReed_Fire_PF");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricBlueberry::Initialize() */

void __thiscall PlantElectricBlueberry::Initialize(PlantElectricBlueberry *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  (**(code **)(*(long *)this + 0x260))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricBlueberry::GetTargetParamsForWeapon(PlantWeapon) */

void PlantElectricBlueberry::GetTargetParamsForWeapon(void)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData((UnchartedModePlantNumData *)&local_10,1,5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* PlantElectricBlueberry::StaticGetClass() */

long * PlantElectricBlueberry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantElectricBlueberry",uVar2,StaticNew);
  return sClass;
}


/* PlantElectricBlueberry::GetClass() const */

long * PlantElectricBlueberry::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantElectricBlueberry",uVar2,StaticNew);
  return sClass;
}


/* PlantElectricBlueberry::PlantElectricBlueberry() */

void __thiscall PlantElectricBlueberry::PlantElectricBlueberry(PlantElectricBlueberry *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067dbd70;
  return;
}


/* PlantElectricBlueberry::StaticNew() */

PlantElectricBlueberry * PlantElectricBlueberry::StaticNew(void)

{
  PlantElectricBlueberry *this;
  
  this = ::operator_new(0x28);
  PlantElectricBlueberry(this);
  return this;
}


/* PlantElectricBlueberry::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantElectricBlueberry::onAnimStoppedCallback(PlantElectricBlueberry *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"attack");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"plantfood"), !bVar1)) {
    return;
  }
  (**(code **)(*(long *)this + 0x260))(this);
  return;
}


/* PlantElectricBlueberry::~PlantElectricBlueberry() */

void __thiscall PlantElectricBlueberry::~PlantElectricBlueberry(PlantElectricBlueberry *this)

{
  *(undefined ***)this = &PTR_GetClass_067dbd70;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantElectricBlueberry::~PlantElectricBlueberry() */

void __thiscall PlantElectricBlueberry::~PlantElectricBlueberry(PlantElectricBlueberry *this)

{
  ~PlantElectricBlueberry(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricBlueberry::FindTargetAndFire(PlantWeapon) */

void PlantElectricBlueberry::FindTargetAndFire(long *param_1)

{
  char cVar1;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::FindTargetZombie(aRStack_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1a0))(param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricBlueberry::TriggerSuperAttack() */

void __thiscall PlantElectricBlueberry::TriggerSuperAttack(PlantElectricBlueberry *this)

{
  bool bVar1;
  char cVar2;
  long extraout_x0;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_040d82e0(*(undefined8 *)(this + 0x10));
  if (cVar2 != '\0') {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (extraout_x0 != 0) {
      fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      bVar1 = fVar3 < *(float *)(extraout_x0 + 0x2e8);
      goto LAB_040d9324;
    }
  }
  bVar1 = false;
LAB_040d9324:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricBlueberry::GetPlantAttackRect(PlantWeapon) */

void PlantElectricBlueberry::GetPlantAttackRect(Insets *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  int *piVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float fVar7;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(param_1,0,0,0,0);
  if (param_3 == 0) {
    this = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(param_2 + 0x10);
    uVar1 = FUN_040d82d8(this);
    switch(uVar1) {
    case 1:
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      local_10 = 0;
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_2 + 0x10));
      local_c = (int)*pfVar5 + iVar3 * -4;
      piVar6 = eastl::max_alt<int>(&local_10,&local_c);
      fVar7 = pfVar5[1];
      *(int *)param_1 = *piVar6;
      iVar2 = BoardTransforms::BoardSpaceToGridY(fVar7);
      local_10 = 800 - *(int *)param_1;
      *(int *)(param_1 + 4) = iVar2;
      local_c = iVar3 << 3;
      piVar6 = eastl::min_alt<int>(&local_10,&local_c);
      iVar3 = *piVar6;
      break;
    case 2:
      *(undefined4 *)param_1 = 0;
      lVar4 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this);
      iVar2 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar4 + 4));
      *(int *)(param_1 + 4) = iVar2;
      iVar3 = 800;
      break;
    case 3:
    case 4:
    case 5:
      goto switchD_040d9460_caseD_3;
    default:
      goto switchD_040d9460_default;
    }
    *(int *)(param_1 + 8) = iVar3;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    *(int *)(param_1 + 4) = iVar2 * iVar3 + 0xa0;
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    *(int *)(param_1 + 0xc) = iVar3 + -1;
  }
  else {
switchD_040d9460_caseD_3:
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 8) = 800;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 600;
  }
switchD_040d9460_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* PlantElectricBlueberry::CancelPlantfood() */

void __thiscall PlantElectricBlueberry::CancelPlantfood(PlantElectricBlueberry *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x88))();
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 7;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricBlueberry::createCloud(PlantWeapon) */

void __thiscall PlantElectricBlueberry::createCloud(PlantElectricBlueberry *this,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long extraout_x0;
  BlueberryZapCloud *this_00;
  RealObject *this_01;
  Plant *this_02;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  this_00 = GameObject::Create<BlueberryZapCloud>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
  CloudBase::SetOwner((CloudBase *)this_00,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10));
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
  uVar2 = FUN_040d82ac(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
  RealObject::JoinTeam((RealObject *)this_00,uVar2);
  this_02 = *(Plant **)(this + 0x10);
  fVar4 = (float)FUN_040d82b8(*(undefined4 *)(this_02 + 0xf4),*(undefined4 *)(this_02 + 0x100),
                              *(undefined4 *)(this_02 + 0x104),*(undefined4 *)(this_02 + 0x3b8));
  fVar5 = (float)FUN_040d82c8(*(undefined4 *)(this_02 + 0x3bc));
  fVar6 = (float)Plant::GetExtraDPSmodifier(this_02);
  lVar3 = *(long *)(this + 0x10);
  fVar7 = (float)FUN_040d82cc(*(undefined4 *)(lVar3 + 0x424));
  fVar8 = (float)FUN_040d82d0(*(undefined4 *)(lVar3 + 0x564));
  fVar8 = fVar5 * fVar4 * fVar6 * fVar7 * fVar8;
  if (param_2 == 1) {
    uVar2 = *(undefined4 *)(extraout_x0 + 700);
  }
  else {
    if (param_2 == 0) {
      uVar1 = TriggerSuperAttack(this);
      FUN_040d8308(*(undefined4 *)(extraout_x0 + 0x2cc),this_00 + 0xd0);
      FUN_040d8300(*(undefined4 *)(extraout_x0 + 0x2d4),this_00 + 0xcc);
      FUN_040d8310(fVar8 * *(float *)(extraout_x0 + 0x2d0),this_00 + 0xd4);
      FUN_040d8318(this_00 + 0xe0,*(undefined4 *)(extraout_x0 + 0x2c8));
      FUN_040d8320(this_00 + 0xe4,*(undefined4 *)(extraout_x0 + 0x2c8));
      Plant::GetPlantAttackRect((Plant *)aRStack_18,*(undefined8 *)(this + 0x10),0);
      CloudBase::SetAttackRect((CloudBase *)this_00,(TRect *)aRStack_18);
      goto LAB_040db058;
    }
    if (param_2 != 2) {
      uVar1 = false;
      goto LAB_040db058;
    }
    BlueberryZapCloud::SetAvatar(this_00,true);
    BlueberryZapCloud::SetMinifyDuration(this_00,*(float *)(extraout_x0 + 0x2e4));
    uVar2 = *(undefined4 *)(extraout_x0 + 700);
  }
  uVar1 = false;
  FUN_040d8308(uVar2,this_00 + 0xd0);
  FUN_040d8300(*(undefined4 *)(extraout_x0 + 0x2c4),this_00 + 0xcc);
  FUN_040d8310(fVar8 * *(float *)(extraout_x0 + 0x2c0),this_00 + 0xd4);
  FUN_040d8318(this_00 + 0xe0,*(undefined4 *)(extraout_x0 + 0x2b8));
  FUN_040d8320(this_00 + 0xe4,*(undefined4 *)(extraout_x0 + 0x2b8));
  FUN_040d841c(this_00 + 0xd8);
LAB_040db058:
  BlueberryZapCloud::SetSuper(this_00,(bool)uVar1);
  BlueberryZapCloud::Spawn(this_00);
  BlueberryZapCloud::SetZombieWeights
            (this_00,(float)*(int *)(extraout_x0 + 0x2d8),(float)*(int *)(extraout_x0 + 0x2dc),
             (float)*(int *)(extraout_x0 + 0x2e0));
  this_01 = *(RealObject **)(this + 0x10);
  (**(code **)(*(long *)this + 0x300))(aRStack_18,this);
  RealObject::PlayPositionalSound(this_01,(string *)aRStack_18,0.0);
  std::string::~string((string *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricBlueberry::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantElectricBlueberry::Fire(PlantElectricBlueberry *param_1)

{
  char cVar1;
  undefined4 uVar2;
  RealObject *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  uVar2 = 0;
  if (cVar1 != '\0') {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    uVar2 = 2;
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
  }
  createCloud(param_1,uVar2);
  this = *(RealObject **)(param_1 + 0x10);
  (**(code **)(*(long *)param_1 + 0x300))(asStack_10,param_1);
  RealObject::PlayPositionalSound(this,asStack_10,0.0);
  std::string::~string(asStack_10);
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
  if (cVar1 == '\0') {
    MessageRouter::Post<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantCombos,*(Plant **)(param_1 + 0x10));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricBlueberry::DoProjectileCombo() */

void __thiscall PlantElectricBlueberry::DoProjectileCombo(PlantElectricBlueberry *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar1;
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)createCloud(this,0);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  fStack_14 = (float)((ulong)*puVar1 >> 0x20);
  local_10 = *(undefined4 *)(puVar1 + 1);
  _local_18 = CONCAT44(fStack_14 - 20.0,(int)*puVar1);
  (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


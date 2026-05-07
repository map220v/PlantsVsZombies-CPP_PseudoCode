// Class: PlantDragonFruit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonFruit::StaticClassInit() */

void PlantDragonFruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDragonFruit");
    (*pcVar2)(plVar1,asStack_10,FUN_040fefb4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDragonFruit::StaticGetClass() */

long * PlantDragonFruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDragonFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDragonFruit::GetClass() const */

long * PlantDragonFruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDragonFruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDragonFruit::InBlueFireState() */

bool __thiscall PlantDragonFruit::InBlueFireState(PlantDragonFruit *this)

{
  int iVar1;
  
  iVar1 = FUN_040fc9f8(*(undefined8 *)(this + 0x10));
  return 1 < iVar1;
}


/* PlantDragonFruit::GetActionIndex(bool) */

undefined4 __thiscall PlantDragonFruit::GetActionIndex(PlantDragonFruit *this,bool param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1) {
    cVar1 = InBlueFireState(this);
    uVar2 = 1;
    if (cVar1 != '\0') {
      cVar1 = FUN_040fca00(*(undefined8 *)(this + 0x10));
      uVar2 = 5;
      if (cVar1 == '\0') {
        uVar2 = 2;
      }
    }
  }
  else {
    cVar1 = InBlueFireState(this);
    uVar2 = 0;
    if (cVar1 != '\0') {
      cVar1 = FUN_040fca00(*(undefined8 *)(this + 0x10));
      uVar2 = 4;
      if (cVar1 == '\0') {
        uVar2 = 3;
      }
      return uVar2;
    }
  }
  return uVar2;
}


/* PlantDragonFruit::PlantDragonFruit() */

void __thiscall PlantDragonFruit::PlantDragonFruit(PlantDragonFruit *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067e1d00;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* PlantDragonFruit::StaticNew() */

PlantDragonFruit * PlantDragonFruit::StaticNew(void)

{
  PlantDragonFruit *this;
  
  this = ::operator_new(0x30);
  PlantDragonFruit(this);
  return this;
}


/* PlantDragonFruit::~PlantDragonFruit() */

void __thiscall PlantDragonFruit::~PlantDragonFruit(PlantDragonFruit *this)

{
  *(undefined ***)this = &PTR_GetClass_067e1d00;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDragonFruit::~PlantDragonFruit() */

void __thiscall PlantDragonFruit::~PlantDragonFruit(PlantDragonFruit *this)

{
  ~PlantDragonFruit(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonFruit::GetTheLeastAttactDuration() */

void __thiscall PlantDragonFruit::GetTheLeastAttactDuration(PlantDragonFruit *this)

{
  PopAnimRig *this_00;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"attack");
  uVar1 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonFruit::launchSpecialProjectile() */

void __thiscall PlantDragonFruit::launchSpecialProjectile(PlantDragonFruit *this)

{
  char cVar1;
  undefined4 uVar2;
  RtObject *this_00;
  DragonFruitProjectile *this_01;
  undefined8 uVar3;
  long lVar4;
  RealObject *this_02;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  lVar4 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar2 = GetActionIndex(this,true);
  *(undefined4 *)(lVar4 + 0x150) = uVar2;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  this_00 = (RtObject *)
            Plant::Fire(*(Plant **)(this + 0x10),a_Stack_10,
                        *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),1);
  this_01 = Sexy::RtObject::Cast<DragonFruitProjectile>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  uVar3 = FUN_040fc9d4(*(undefined8 *)(this_01 + 0xe0));
  uVar3 = operator|(uVar3,0x2000);
  FUN_040fc9d8(this_01 + 0xe0,uVar3);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    StrawburstProjectile::SetJamFlag((StrawburstProjectile *)this_01,true);
  }
  this_02 = *(RealObject **)(this + 0x10);
  *(undefined4 *)(this_02 + 0x150) = 0xffffffff;
  std::string::string((string *)a_Stack_10,"Play_Plant_Pitayal_PlantFood");
  RealObject::PlayPositionalSound(this_02,(string *)a_Stack_10,0.0);
  std::string::~string((string *)a_Stack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x040fe4cc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantDragonFruit::Initialize() */

void __thiscall PlantDragonFruit::Initialize(PlantDragonFruit *this)

{
  char cVar1;
  BoardEntity *this_00;
  ComponentWarmingRadius *this_01;
  long lVar2;
  PlantAction *pPVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  string asStack_88 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [32];
  float local_60;
  float local_5c;
  float local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_98);
  std::string::string(asStack_88,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this_00,aRStack_90,asStack_88);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  std::string::~string(asStack_88);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
  this_01 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  lVar2 = FUN_040fe3d0(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_01,(ComponentWarmingRadiusProps *)(lVar2 + 0x2c0));
  uVar4 = *(undefined8 *)(this + 0x10);
  FUN_040fc9f8(uVar4);
  if (2 < (int)lVar2) {
    cVar1 = FUN_040fca00(uVar4);
    uVar4 = 3;
    if (cVar1 != '\0') {
      uVar4 = 4;
    }
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    pPVar3 = (PlantAction *)FUN_040fca24(*(undefined8 *)(lVar2 + 0x70),uVar4);
    PlantAction::PlantAction((PlantAction *)aRStack_80,pPVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88);
    lVar2 = *(long *)(this + 0x10);
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 == '\0') {
      local_5c = local_60;
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)(lVar2 + 0xbc),local_5c,local_58);
    PlantAction::~PlantAction((PlantAction *)aRStack_80);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantDragonFruit::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantDragonFruit::launchProjectileAt
          (PlantDragonFruit *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_040fe3d0(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 700);
  lVar1 = FUN_040fe3d0(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 700));
  lVar1 = FUN_040fe3d0(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2b8);
  lVar1 = FUN_040fe3d0(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2b8));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDragonFruit::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantDragonFruit::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantDragonFruit *param_4,RtWeakPtrBase *param_5,undefined8 param_6,
               undefined4 param_7)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  Projectile *pPVar4;
  ResourceInfo *pRVar5;
  long *plVar6;
  float *pfVar7;
  Point *extraout_x1;
  RealObject *this;
  code *pcVar8;
  Plant *pPVar9;
  long lVar10;
  RtMixedPtrBase aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar2 == '\0') {
    lVar10 = *(long *)(param_4 + 0x10);
    uVar3 = GetActionIndex(param_4,false);
    pPVar9 = *(Plant **)(param_4 + 0x10);
    *(undefined4 *)(lVar10 + 0x150) = uVar3;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
    pPVar4 = (Projectile *)
             Plant::Fire(pPVar9,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    PlantFramework::FindTargetZombie(aRStack_38,param_4,0);
    (**(code **)(*(long *)param_4 + 0xf8))
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_4,param_7);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar2 == '\0') {
      if (pRVar5 == (ResourceInfo *)0x0) {
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        local_24 = pfVar7[1];
        local_20 = 0;
        local_28 = *pfVar7 + 600.0;
      }
      else {
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_18,extraout_x1);
        local_20 = 0x41c80000;
        local_24 = (float)local_2c;
        local_28 = (float)local_30;
      }
    }
    else {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pcVar8 = *(code **)(*plVar6 + 0x3b0);
      lVar10 = FUN_040fe3d0(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar8)(*(undefined4 *)(lVar10 + 0x2b8),plVar6);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
      fVar1 = local_28;
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      if (fVar1 < *pfVar7) {
        local_28 = *pfVar7;
      }
    }
    launchProjectileAt(param_4,pPVar4,(SexyVector3 *)&local_28,0.1,0.1);
    this = *(RealObject **)(param_4 + 0x10);
    std::string::string((string *)&local_18,"Play_DragonFruit_Throw");
    RealObject::PlayPositionalSound(this,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    pPVar4 = (Projectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}


/* PlantDragonFruit::DoSpecial(int) */

void PlantDragonFruit::DoSpecial(int param_1)

{
  bool bVar1;
  PlantDragonFruit *this;
  ComponentWarmingRadius *this_00;
  long lVar2;
  
  this = (PlantDragonFruit *)(ulong)(uint)param_1;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar1) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    lVar2 = FUN_040fe3d0(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x3d8));
  }
  launchSpecialProjectile(this);
  return;
}


/* PlantDragonFruit::CancelPlantfood() */

void __thiscall PlantDragonFruit::CancelPlantfood(PlantDragonFruit *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (!bVar1) {
    return;
  }
  this_00 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28))
  ;
  lVar2 = FUN_040fe3d0(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x2c0));
  return;
}


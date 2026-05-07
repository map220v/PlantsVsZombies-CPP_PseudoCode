// Class: GridItemBackpack


/* GridItemBackpack::GetCantPlantReason() const */

undefined8 GridItemBackpack::GetCantPlantReason(void)

{
  return 0x1a;
}


/* GridItemBackpack::onDestroyAnimCompleted() */

void __thiscall GridItemBackpack::onDestroyAnimCompleted(GridItemBackpack *this)

{
  (**(code **)(*(long *)this + 0x48))();
  return;
}


/* GridItemBackpack::GridItemBackpack() */

void __thiscall GridItemBackpack::GridItemBackpack(GridItemBackpack *this)

{
  undefined4 uVar1;
  
  GridItemGravestone::GridItemGravestone((GridItemGravestone *)this);
  this[0x1e0] = (GridItemBackpack)0x0;
  *(undefined ***)this = &PTR_GetClass_068e78a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBackpack_068e7b60;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1e4) = uVar1;
  DVec3::DVec3((DVec3 *)(this + 0x1e8));
  DVec3::DVec3((DVec3 *)(this + 500));
  DVec3::DVec3((DVec3 *)(this + 0x200));
  return;
}


/* GridItemBackpack::StaticNew() */

GridItemBackpack * GridItemBackpack::StaticNew(void)

{
  GridItemBackpack *this;
  
  this = ::operator_new(0x210);
  GridItemBackpack(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBackpack::StaticClassInit() */

void GridItemBackpack::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemBackpack");
    (*pcVar2)(plVar1,asStack_10,FUN_047d1ec0,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBackpack::StaticGetClass() */

long * GridItemBackpack::StaticGetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBackpack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemBackpack::GetClass() const */

long * GridItemBackpack::GetClass(void)

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
  uVar2 = GridItemGravestone::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemBackpack",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBackpack::SetInitialBounce(Sexy::SexyVector3) */

void GridItemBackpack::SetInitialBounce
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *param_4)

{
  SexyVector3 *this;
  undefined4 uVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  DVec3 aDStack_38 [16];
  DVec3 aDStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_50 = param_1;
  local_4c = param_2;
  local_48 = param_3;
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x1e8),(SexyVector3 *)&local_50);
  uVar1 = PVZ_T();
  *(undefined4 *)(param_4 + 0x1e4) = uVar1;
  DVec3::DVec3(aDStack_38);
  DVec3::DVec3(aDStack_28);
  this = (SexyVector3 *)
         std::
         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         ::_M_leftmost(param_4);
  local_18 = Sexy::SexyVector3::operator+(this,(SexyVector3 *)(param_4 + 0x1e8));
  local_14 = param_2;
  local_10 = param_3;
  CalculateTossVelocity
            ((SexyVector3 *)&local_18,this,60.0,0.5,(SexyVector3 *)aDStack_38,
             (SexyVector3 *)aDStack_28);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 500),(SexyVector3 *)aDStack_38);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x200),(SexyVector3 *)aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBackpack::updateOffsetForBounce() */

void GridItemBackpack::updateOffsetForBounce(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  SexyVector3 *pSVar1;
  float fVar2;
  undefined4 local_a8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_a8[0] = Sexy::SexyVector3::operator+((SexyVector3 *)(in_x0 + 0x1e8),pSVar1);
  local_98 = *(undefined8 *)(in_x0 + 500);
  local_90 = *(undefined4 *)(in_x0 + 0x1fc);
  local_88 = *(undefined8 *)(in_x0 + 0x200);
  local_80 = *(undefined4 *)(in_x0 + 0x208);
  fVar2 = (float)PVZ_Dt();
  local_78[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_98,fVar2);
  local_68[0] = Sexy::SexyVector3::operator+((SexyVector3 *)local_a8,(SexyVector3 *)local_78);
  fVar2 = (float)PVZ_Dt();
  local_58[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,fVar2);
  fVar2 = (float)PVZ_Dt();
  local_48[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_58,fVar2);
  local_38[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_48,0.5);
  local_28[0] = Sexy::SexyVector3::operator+((SexyVector3 *)local_68,(SexyVector3 *)local_38);
  local_18[0] = Sexy::SexyVector3::operator-((SexyVector3 *)local_28,pSVar1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x1e8),(SexyVector3 *)local_18);
  fVar2 = (float)PVZ_Dt();
  local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_88,fVar2);
  local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&local_98,(SexyVector3 *)local_28);
  Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 500),(SexyVector3 *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBackpack::onUpdate() */

void __thiscall GridItemBackpack::onUpdate(GridItemBackpack *this)

{
  float fVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x1e4) + 0.5) {
    updateOffsetForBounce();
  }
  else {
    EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1e8),(SexyVector3 *)aVStack_18);
    EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 500),(SexyVector3 *)aVStack_18);
    EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x200),(SexyVector3 *)aVStack_18);
  }
  GridItemGravestone::onUpdate((GridItemGravestone *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBackpack::onGridItemInitialize() */

void __thiscall GridItemBackpack::onGridItemInitialize(GridItemBackpack *this)

{
  RtObject *this_00;
  BackpackAnimRig *this_01;
  undefined4 uVar1;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemGravestone::onGridItemInitialize((GridItemGravestone *)this);
  GridItemGravestone::setState((GridItemGravestone *)this,3);
  this[0x1e0] = (GridItemBackpack)0x0;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1e8),(SexyVector3 *)aVStack_18);
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 500),(SexyVector3 *)aVStack_18);
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x200),(SexyVector3 *)aVStack_18);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1e4) = uVar1;
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
  this_01 = Sexy::RtObject::Cast<BackpackAnimRig>(this_00);
  ZombieTentAnimRig::PlayStationary((ZombieTentAnimRig *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
  GridItemHeavyShield::CalcDamageState((GridItemHeavyShield *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBackpack::getRenderOffset() */

void GridItemBackpack::getRenderOffset(void)

{
  long in_x0;
  undefined4 uVar1;
  float fVar2;
  undefined4 local_18 [2];
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = GridItemGravestone::getRenderOffset();
  fVar2 = *(float *)(in_x0 + 0x1ec) - *(float *)(in_x0 + 0x1f0);
  Sexy::FastCurve::SetOutRange(aFStack_10,*(float *)(in_x0 + 0x1e8),fVar2);
  uVar1 = Sexy::SexyVector2::operator-((SexyVector2 *)local_18,(SexyVector2 *)aFStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBackpack::KillGridItem() */

void __thiscall GridItemBackpack::KillGridItem(GridItemBackpack *this)

{
  RtObject *this_00;
  BackpackAnimRig *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1e0] == (GridItemBackpack)0x0) {
    GridItemAnimation::GetAnimRig();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
    pBVar1 = Sexy::RtObject::Cast<BackpackAnimRig>(this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onDestroyAnimCompleted");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    BackpackAnimRig::PlayDestroy(pBVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  }
  this[0x1e0] = (GridItemBackpack)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemBackpack::onTakeDamage(DamageInfo const&) */

void __thiscall GridItemBackpack::onTakeDamage(GridItemBackpack *this,DamageInfo *param_1)

{
  DamageInfo aDStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68,param_1);
  if (this[0x1e0] != (GridItemBackpack)0x0) {
    operator|=(auStack_58,0x100);
  }
  GridItemGravestone::onTakeDamage((DamageInfo *)this);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemBackpack::~GridItemBackpack() */

void __thiscall GridItemBackpack::~GridItemBackpack(GridItemBackpack *this)

{
  *(undefined ***)this = &PTR_GetClass_068e78a0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemBackpack_068e7b60;
  GridItemGravestone::~GridItemGravestone((GridItemGravestone *)this);
  return;
}


/* non-virtual thunk to GridItemBackpack::~GridItemBackpack() */

void __thiscall GridItemBackpack::~GridItemBackpack(GridItemBackpack *this)

{
  ~GridItemBackpack(this + -0x10);
  return;
}


/* GridItemBackpack::~GridItemBackpack() */

void __thiscall GridItemBackpack::~GridItemBackpack(GridItemBackpack *this)

{
  ~GridItemBackpack(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemBackpack::~GridItemBackpack() */

void __thiscall GridItemBackpack::~GridItemBackpack(GridItemBackpack *this)

{
  ~GridItemBackpack(this + -0x10);
  return;
}


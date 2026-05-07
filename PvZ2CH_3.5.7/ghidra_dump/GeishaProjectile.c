// Class: GeishaProjectile


/* GeishaProjectile::onPlantDie(Plant*) */

void __thiscall GeishaProjectile::onPlantDie(GeishaProjectile *this,Plant *param_1)

{
  Plant *pPVar1;
  
  pPVar1 = (Plant *)Projectile::GetInstigator((Projectile *)this);
  if (param_1 != pPVar1) {
    return;
  }
  Projectile::SetInstigator((Projectile *)this,(BoardEntity *)0x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaProjectile::SetTrajectoryNormal() */

void __thiscall GeishaProjectile::SetTrajectoryNormal(GeishaProjectile *this)

{
  undefined8 *puVar1;
  ActionSubSystem *pAVar2;
  ActionSubSystem *pAVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_58 = *(undefined4 *)(puVar1 + 1);
  _local_60 = CONCAT44((int)((ulong)*puVar1 >> 0x20),0x44480000);
  pAVar2 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_88);
                    /* WARNING: Load size is inaccurate */
  pAVar3._0_4_ = *(ActionSubSystem **)(this + 0x1ac);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string(asStack_70,"onFlyToTargetDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_78,asStack_70)
  ;
  ActionSubSystem::AddActionMoveTo(pAVar3._0_4_,pAVar2,aRStack_68,&local_60,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaProjectile::~GeishaProjectile() */

void __thiscall GeishaProjectile::~GeishaProjectile(GeishaProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0674b8f0;
  *(undefined ***)(this + 0x10) = &PTR__GeishaProjectile_0674baf8;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GeishaProjectile::~GeishaProjectile() */

void __thiscall GeishaProjectile::~GeishaProjectile(GeishaProjectile *this)

{
  ~GeishaProjectile(this + -0x10);
  return;
}


/* GeishaProjectile::~GeishaProjectile() */

void __thiscall GeishaProjectile::~GeishaProjectile(GeishaProjectile *this)

{
  ~GeishaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GeishaProjectile::~GeishaProjectile() */

void __thiscall GeishaProjectile::~GeishaProjectile(GeishaProjectile *this)

{
  ~GeishaProjectile(this + -0x10);
  return;
}


/* GeishaProjectile::GeishaProjectile() */

void __thiscall GeishaProjectile::GeishaProjectile(GeishaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_0674b8f0;
  *(undefined ***)(this + 0x10) = &PTR__GeishaProjectile_0674baf8;
  *(undefined4 *)(this + 0x1ac) = 0;
  DVec3::DVec3((DVec3 *)(this + 0x1b0));
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)(this + 0x1bc));
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)(this + 0x1d4));
  *(undefined4 *)(this + 0x1ec) = 0;
  this[0x1f0] = (GeishaProjectile)0x0;
  this[0x1f1] = (GeishaProjectile)0x1;
  return;
}


/* GeishaProjectile::StaticNew() */

GeishaProjectile * GeishaProjectile::StaticNew(void)

{
  GeishaProjectile *this;
  
  this = ::operator_new(0x1f8);
  GeishaProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaProjectile::StaticClassInit() */

void GeishaProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeishaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c30bac,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaProjectile::StaticGetClass() */

long * GeishaProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"GeishaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaProjectile::GetClass() const */

long * GeishaProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"GeishaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaProjectile::CheckEdge() */

bool __thiscall GeishaProjectile::CheckEdge(GeishaProjectile *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  return (float)(iVar1 + iVar2 / 2) <= *pfVar3;
}


/* GeishaProjectile::InitTrajectory(GeishaProjectile::GeishaProjectileTrajectory, Sexy::SexyVector3
   const&) */

void __thiscall
GeishaProjectile::InitTrajectory(GeishaProjectile *this,undefined4 param_2,SexyVector3 *param_3)

{
  *(undefined4 *)(this + 0x1ec) = param_2;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1b0),param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaProjectile::GetBackControllPoint(_ccBezierConfig&) */

void __thiscall
GeishaProjectile::GetBackControllPoint(GeishaProjectile *this,_ccBezierConfig *param_1)

{
  int iVar1;
  float *pfVar2;
  float local_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_18,*(float *)(this + 0x1b0),*(float *)(this + 0x1b4));
  *(ulong *)param_1 = CONCAT44(fStack_14,local_18);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  if (*(int *)(this + 0x1ec) == 0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    local_10 = (local_18 + *pfVar2) * 0.5;
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_c = fStack_14 - (float)iVar1;
    *(ulong *)(param_1 + 0x10) = CONCAT44(fStack_c,local_10);
    *(ulong *)(param_1 + 8) = CONCAT44(fStack_c,local_10);
  }
  else if (*(int *)(this + 0x1ec) == 2) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    local_10 = (local_18 + *pfVar2) * 0.5;
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    fStack_c = (float)iVar1 + fStack_14;
    *(ulong *)(param_1 + 0x10) = CONCAT44(fStack_c,local_10);
    *(ulong *)(param_1 + 8) = CONCAT44(fStack_c,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaProjectile::onFlyBackDone(BoardEntity*) */

void GeishaProjectile::onFlyBackDone(BoardEntity *param_1)

{
  long lVar1;
  long extraout_x0;
  PlantBoophoneGeisha *this;
  long extraout_x0_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Projectile::GetInstigator((Projectile *)param_1);
  if (lVar1 != 0) {
    Projectile::GetInstigator((Projectile *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (extraout_x0 != 0) {
      nop();
      nop();
      nop();
      PlantBoophoneGeisha::PlayProjectileBack(this);
      nop();
      FUN_03c2d1d4(extraout_x0_00 + 0x2c,0);
    }
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaProjectile::ReturnBack() */

void __thiscall GeishaProjectile::ReturnBack(GeishaProjectile *this)

{
  ActionSubSystem *pAVar1;
  ActionSubSystem *pAVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtMixedPtr aRStack_88 [8];
  RtId aRStack_80 [8];
  string asStack_78 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  Vec3 aVStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_68,0.0,0.0,0.0);
  Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)aVStack_68);
  _ccBezierConfig::_ccBezierConfig((_ccBezierConfig *)aVStack_68);
  GetBackControllPoint(this,(_ccBezierConfig *)aVStack_68);
  pAVar1 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,(RtWeakPtrBase *)aRStack_90);
                    /* WARNING: Load size is inaccurate */
  pAVar2._0_4_ = *(ActionSubSystem **)(this + 0x1ac);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
  std::string::string(asStack_78,"onFlyBackDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_80,asStack_78)
  ;
  ActionSubSystem::AddActionBezierTo(pAVar2._0_4_,pAVar1,aRStack_70,aVStack_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_78);
  nop();
  Sexy::RtId::~RtId(aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaProjectile::onUpdate(float) */

void GeishaProjectile::onUpdate(float param_1)

{
  char cVar1;
  Projectile *in_x0;
  float *pfVar2;
  
  pfVar2 = (float *)Projectile::GetVelocity(in_x0);
  if ((*pfVar2 != 0.0) && (cVar1 = CheckEdge((GeishaProjectile *)in_x0), cVar1 != '\0')) {
    ReturnBack((GeishaProjectile *)in_x0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaProjectile::onFlyToTargetDone(BoardEntity*) */

void GeishaProjectile::onFlyToTargetDone(BoardEntity *param_1)

{
  ActionSubSystem *pAVar1;
  ActionSubSystem *pAVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_78);
                    /* WARNING: Load size is inaccurate */
  pAVar2._0_4_ = *(ActionSubSystem **)(param_1 + 0x1ac);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onFlyBackDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_68,asStack_60)
  ;
  ActionSubSystem::AddActionMoveTo(pAVar2._0_4_,pAVar1,aRStack_58,param_1 + 0x1b0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaProjectile::SetTrajectoryHigh() */

void __thiscall GeishaProjectile::SetTrajectoryHigh(GeishaProjectile *this)

{
  int iVar1;
  float *pfVar2;
  ActionSubSystem *pAVar3;
  ActionSubSystem *pAVar4;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,*pfVar2,pfVar2[1]);
  local_88 = 800.0;
  *(ulong *)(this + 0x1bc) = CONCAT44(fStack_84,0x44480000);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_80)
  ;
  local_80 = (*pfVar2 + local_88) * 0.5;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  fStack_7c = fStack_84 - (float)(iVar1 << 1);
  *(ulong *)(this + 0x1cc) = CONCAT44(fStack_7c,local_80);
  *(ulong *)(this + 0x1c4) = CONCAT44(fStack_7c,local_80);
  pAVar3 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_78);
                    /* WARNING: Load size is inaccurate */
  pAVar4._0_4_ = *(ActionSubSystem **)(this + 0x1ac);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onFlyToTargetDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_68,asStack_60)
  ;
  ActionSubSystem::AddActionBezierTo(pAVar4._0_4_,pAVar3,aRStack_58,this + 0x1bc,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaProjectile::SetTrajectoryLow() */

void __thiscall GeishaProjectile::SetTrajectoryLow(GeishaProjectile *this)

{
  int iVar1;
  float *pfVar2;
  ActionSubSystem *pAVar3;
  ActionSubSystem *pAVar4;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,*pfVar2,pfVar2[1]);
  local_88 = 800.0;
  *(ulong *)(this + 0x1bc) = CONCAT44(fStack_84,0x44480000);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_80)
  ;
  local_80 = (*pfVar2 + local_88) * 0.5;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  fStack_7c = (float)(iVar1 << 1) + fStack_84;
  *(ulong *)(this + 0x1cc) = CONCAT44(fStack_7c,local_80);
  *(ulong *)(this + 0x1c4) = CONCAT44(fStack_7c,local_80);
  pAVar3 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_78);
                    /* WARNING: Load size is inaccurate */
  pAVar4._0_4_ = *(ActionSubSystem **)(this + 0x1ac);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onFlyToTargetDone");
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)aRStack_50,aRStack_68,asStack_60)
  ;
  ActionSubSystem::AddActionBezierTo(pAVar4._0_4_,pAVar3,aRStack_58,this + 0x1bc,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaProjectile::ReachLastEnemy() */

void __thiscall GeishaProjectile::ReachLastEnemy(GeishaProjectile *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  long lVar8;
  RtObject *pRVar9;
  long *extraout_x0;
  ulong uVar10;
  long extraout_x0_00;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar12 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_40);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar3 = BoardTransforms::BoardSpaceToGridX(*pfVar7);
  iVar4 = BoardTransforms::BoardSpaceToGridY(pfVar7[1]);
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets((Insets *)&local_30,iVar3,iVar4,iVar5 - iVar3,1);
  local_40 = local_30;
  uStack_38 = uStack_28;
  uVar6 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar6,
             (Insets *)&local_40);
  uVar11 = local_20;
  lVar8 = FUN_03c2d23c(local_20,local_18);
  if (lVar8 != 0) {
    do {
      FUN_03c2d248(uVar11,uVar12);
      ToolPacketData::GetProps();
      pRVar9 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      bVar1 = Sexy::RtObject::IsA<Zombie>(pRVar9);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      if (bVar1) {
        FUN_03c2d248(local_20,uVar12);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        cVar2 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0);
        if ((cVar2 == '\0') &&
           (cVar2 = (**(code **)(*extraout_x0 + 0x328))(extraout_x0), cVar2 == '\0')) {
LAB_03c30948:
          uVar11 = 0;
          goto LAB_03c308fc;
        }
      }
      else {
        FUN_03c2d248(local_20,uVar12);
        ToolPacketData::GetProps();
        pRVar9 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        bVar1 = Sexy::RtObject::IsA<GridItem>(pRVar9);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        if (bVar1) {
          FUN_03c2d248(local_20,uVar12);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
          nop();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
          if (extraout_x0_00 != 0) goto LAB_03c30948;
        }
      }
      uVar11 = local_20;
      uVar12 = uVar12 + 1;
      uVar10 = FUN_03c2d23c(local_20,local_18);
    } while (uVar12 < uVar10);
  }
  uVar11 = 1;
LAB_03c308fc:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


/* GeishaProjectile::ShouldReturnBack() */

ulong __thiscall GeishaProjectile::ShouldReturnBack(GeishaProjectile *this)

{
  ulong uVar1;
  
  if (this[0x1f0] == (GeishaProjectile)0x0) {
    return (ulong)(byte)this[0x1f1];
  }
  uVar1 = ReachLastEnemy(this);
  return uVar1;
}


/* GeishaProjectile::handleImpact(BoardEntity*) */

void __thiscall GeishaProjectile::handleImpact(GeishaProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x1f0))();
  if (cVar1 != '\0') {
    ReturnBack(this);
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}


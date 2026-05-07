// Class: FuluProjectile


/* FuluProjectile::onProjectileInitialized() */

void __thiscall FuluProjectile::onProjectileInitialized(FuluProjectile *this)

{
  this[0x1b0] = (FuluProjectile)0x0;
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1b4) = 0x40a00000;
  return;
}


/* FuluProjectile::onUpdate(float) */

void FuluProjectile::onUpdate(float param_1)

{
  Projectile *in_x0;
  float *pfVar1;
  
  pfVar1 = (float *)Projectile::GetVelocity(in_x0);
  atan2f(pfVar1[2],*pfVar1);
  FUN_037a9728(in_x0 + 0xc4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuluProjectile::StaticClassInit() */

void FuluProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"FuluProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_037a9d4c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FuluProjectile::StaticGetClass() */

long * FuluProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FuluProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FuluProjectile::GetClass() const */

long * FuluProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"FuluProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FuluProjectile::SetStunDuration(float) */

void __thiscall FuluProjectile::SetStunDuration(FuluProjectile *this,float param_1)

{
  *(float *)(this + 0x1b4) = param_1;
  return;
}


/* FuluProjectile::FuluProjectile() */

void __thiscall FuluProjectile::FuluProjectile(FuluProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066963d0;
  *(undefined ***)(this + 0x10) = &PTR__FuluProjectile_066965c0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* FuluProjectile::StaticNew() */

FuluProjectile * FuluProjectile::StaticNew(void)

{
  FuluProjectile *this;
  
  this = ::operator_new(0x1b8);
  FuluProjectile(this);
  return this;
}


/* FuluProjectile::~FuluProjectile() */

void __thiscall FuluProjectile::~FuluProjectile(FuluProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066963d0;
  *(undefined ***)(this + 0x10) = &PTR__FuluProjectile_066965c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to FuluProjectile::~FuluProjectile() */

void __thiscall FuluProjectile::~FuluProjectile(FuluProjectile *this)

{
  ~FuluProjectile(this + -0x10);
  return;
}


/* FuluProjectile::~FuluProjectile() */

void __thiscall FuluProjectile::~FuluProjectile(FuluProjectile *this)

{
  ~FuluProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FuluProjectile::~FuluProjectile() */

void __thiscall FuluProjectile::~FuluProjectile(FuluProjectile *this)

{
  ~FuluProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuluProjectile::SetSpacial(bool) */

void __thiscall FuluProjectile::SetSpacial(FuluProjectile *this,bool param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_40,"animation01");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  this[0x1b0] = (FuluProjectile)param_1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuluProjectile::SetBigFulu() */

void __thiscall FuluProjectile::SetBigFulu(FuluProjectile *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_40,"animation03");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FuluProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall FuluProjectile::OnCollideEntity(FuluProjectile *this,BoardEntity *param_1)

{
  long lVar1;
  BoardEntity *pBVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*(long *)this + 0x1a0))();
  if ((lVar1 != 0) &&
     (pBVar2 = (BoardEntity *)(**(code **)(*(long *)this + 0x1a0))(this), param_1 != pBVar2)) {
    return 0;
  }
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuluProjectile::handleImpact(BoardEntity*) */

void __thiscall FuluProjectile::handleImpact(FuluProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  int iVar2;
  Zombie *this_00;
  PopAnimRig *this_01;
  float fVar3;
  Zombie *pZVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    uVar1 = 0;
  }
  else {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (this_00 != (Zombie *)0x0) {
      iVar2 = Zombie::GetSizeType(this_00);
      if (iVar2 == 2) {
                    /* WARNING: Load size is inaccurate */
        pZVar4._0_4_ = *(Zombie **)(this + 0x1b4);
        this_01 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
        std::string::string(asStack_10,"animation03_4");
        fVar3 = (float)PopAnimRig::CalcAnimLengthSeconds(this_01,asStack_10);
        Zombie::ApplyCondition(pZVar4._0_4_,(float)pZVar4._0_4_ - fVar3,this_00,0x93,1);
        std::string::~string(asStack_10);
        nop();
      }
      else {
        pZVar4._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar4._0_4_,0,this_00,0x93,1);
      }
    }
    uVar1 = Projectile::handleImpact((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FuluProjectile::moveThroughTime(float) */

void __thiscall FuluProjectile::moveThroughTime(FuluProjectile *this,float param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long lVar2;
  ResourceInfo *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar4;
  DVec3 *this_02;
  float *pfVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  ulong uVar11;
  double dVar12;
  undefined8 uVar13;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  fVar6 = (float)FUN_037a96f4(*(undefined4 *)(lVar2 + 0x30));
  fVar9 = param_1;
  if (fVar6 != 1.0) {
    fVar9 = (float)PVZ_RealDt();
  }
  this_00 = (RtMixedPtrBase *)(this + 0x1a8);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if ((cVar1 == '\0') ||
     (pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00),
     pRVar3 == (ResourceInfo *)0x0)) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    fVar6 = (float)FUN_037a97a8();
    uVar11 = (ulong)(uint)fVar6;
    uVar13 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,fVar6,0.0);
    local_38 = Sexy::SexyVector3::operator+(pSVar4,(SexyVector3 *)&local_18);
    local_34 = (undefined4)uVar11;
    local_30 = (undefined4)uVar13;
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    this_02 = (DVec3 *)Projectile::GetVelocity((Projectile *)this);
    local_18 = (float)Sexy::SexyVector3::operator-((SexyVector3 *)&local_38,pSVar4);
    local_14 = (undefined4)uVar11;
    local_10 = (undefined4)uVar13;
    uVar7 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_18);
    local_24 = (undefined4)uVar11;
    local_20 = (undefined4)uVar13;
    local_28 = uVar7;
    fVar6 = (float)FUN_037a9724(*(undefined4 *)(this + 0xc4));
    fVar8 = (float)ArmorflameMissile::calcDesiredRot(uVar7,uVar11,uVar13,fVar6,this);
    local_18 = fVar9 * 37.699112;
    local_3c = ABS(fVar8 - fVar6);
    pfVar5 = eastl::min_alt<float>(&local_3c,&local_18);
    dVar12 = ABS((double)*pfVar5);
    if ((long)(double)(fVar8 - fVar6) < 0) {
      dVar12 = -dVar12;
    }
    dVar12 = (double)fVar6 + dVar12;
    if (3.1415927410125732 < ABS(dVar12)) {
      dVar10 = 6.2831854820251465;
      if ((long)dVar12 < 0) {
        dVar10 = -6.2831854820251465;
      }
      dVar12 = dVar12 - dVar10;
    }
    FUN_037a9728((float)dVar12,this + 0xc4);
    fVar9 = (float)DVec3::getLength(this_02);
    Projectile::SetRotatedVelocity((Projectile *)this,fVar9);
    Projectile::moveThroughTime((Projectile *)this,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


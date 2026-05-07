// Class: MorningGloryProjectile


/* MorningGloryProjectile::setDiePosition(Sexy::SexyVector3 const&) */

void __thiscall
MorningGloryProjectile::setDiePosition(MorningGloryProjectile *this,SexyVector3 *param_1)

{
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x1b0),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryProjectile::StaticClassInit() */

void MorningGloryProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MorningGloryProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04178db0,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MorningGloryProjectile::StaticGetClass() */

long * MorningGloryProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MorningGloryProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryProjectile::GetClass() const */

long * MorningGloryProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"MorningGloryProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MorningGloryProjectile::MorningGloryProjectile() */

void __thiscall MorningGloryProjectile::MorningGloryProjectile(MorningGloryProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067f5d00;
  *(undefined ***)(this + 0x10) = &PTR__MorningGloryProjectile_067f5ef0;
  DVec3::DVec3((DVec3 *)(this + 0x1b0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  return;
}


/* MorningGloryProjectile::StaticNew() */

MorningGloryProjectile * MorningGloryProjectile::StaticNew(void)

{
  MorningGloryProjectile *this;
  
  this = ::operator_new(0x1c8);
  MorningGloryProjectile(this);
  return this;
}


/* MorningGloryProjectile::~MorningGloryProjectile() */

void __thiscall MorningGloryProjectile::~MorningGloryProjectile(MorningGloryProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067f5d00;
  *(undefined ***)(this + 0x10) = &PTR__MorningGloryProjectile_067f5ef0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MorningGloryProjectile::~MorningGloryProjectile() */

void __thiscall MorningGloryProjectile::~MorningGloryProjectile(MorningGloryProjectile *this)

{
  ~MorningGloryProjectile(this + -0x10);
  return;
}


/* MorningGloryProjectile::~MorningGloryProjectile() */

void __thiscall MorningGloryProjectile::~MorningGloryProjectile(MorningGloryProjectile *this)

{
  ~MorningGloryProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MorningGloryProjectile::~MorningGloryProjectile() */

void __thiscall MorningGloryProjectile::~MorningGloryProjectile(MorningGloryProjectile *this)

{
  ~MorningGloryProjectile(this + -0x10);
  return;
}


/* MorningGloryProjectile::isTargetZombieDamageable() */

char __thiscall MorningGloryProjectile::isTargetZombieDamageable(MorningGloryProjectile *this)

{
  char cVar1;
  bool bVar2;
  RtObject *this_00;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  long lVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1c0));
  if (cVar1 != '\0') {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    if (this_01 == (Zombie *)0x0) {
      return cVar1;
    }
    this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
    bVar2 = std::operator==((string *)(lVar3 + 8),"lostcity_excavator");
    if (!bVar2) {
      return cVar1;
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryProjectile::onProjectileInitialized() */

void __thiscall MorningGloryProjectile::onProjectileInitialized(MorningGloryProjectile *this)

{
  _func_void *extraout_x1;
  undefined4 uVar1;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  this[0x1ac] = (MorningGloryProjectile)0x0;
  local_8 = ___stack_chk_guard;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,extraout_x1);
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x1c0),(RtId *)aeStack_10);
  Sexy::RtId::~RtId((RtId *)aeStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MorningGloryProjectile::createImpactAndDestroy() */

void __thiscall MorningGloryProjectile::createImpactAndDestroy(MorningGloryProjectile *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  char *__s;
  code *pcVar5;
  float fVar6;
  float fVar7;
  RtMixedPtrBase aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x1c0);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if ((cVar1 != '\0') && (cVar1 = isTargetZombieDamageable(this), cVar1 != '\0')) {
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    Projectile::playSound((Projectile *)this,(BoardEntity *)pRVar4);
    pcVar5 = *(code **)(*(long *)this + 0x1b0);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    (*pcVar5)(this,pRVar4);
  }
  lVar3 = Projectile::getProps((Projectile *)this);
  GetPAMByName((string *)(lVar3 + 0x140));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  if (cVar1 != '\0') {
    fVar6 = *(float *)(this + 0x1c);
    fVar7 = *(float *)(this + 0x20);
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(this_01,true);
    EATextSquish::Vec3::Vec3(aVStack_18,*(float *)(this + 0x1b0),fVar6 - fVar7,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aVStack_18,-1);
    if (*(code **)(*(long *)this + 400) == Projectile::CalcRenderOrder) {
      iVar2 = Projectile::CalcRenderOrder((Projectile *)this);
    }
    else {
      iVar2 = (**(code **)(*(long *)this + 400))();
    }
    FUN_04175c4c(this_01 + 0x1c,iVar2 + 1);
    lVar3 = Projectile::getProps((Projectile *)this);
    __s = (char *)FUN_0547429c(lVar3 + 0x148);
    std::string::string((string *)aVStack_18,__s);
    Effect_PopAnim::PlaySingleAnimation(this_01,aVStack_18,0);
    std::string::~string((string *)aVStack_18);
    nop();
  }
  (**(code **)(*(long *)this + 0x48))(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04177e8c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* MorningGloryProjectile::onUpdate(float) */

void MorningGloryProjectile::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  fVar3 = *(float *)(in_x0 + 0x1a8);
  local_8 = ___stack_chk_guard;
  auVar2 = PVZ_T();
  local_10 = 0x3f000000;
  local_c = 0x3f800000;
  CurveLerp<float>(auVar2,fVar3 + 0.5,auVar2._0_4_,&local_10,&local_c,1);
  FUN_04175c58(in_x0 + 0xc0);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  if (*(float *)(in_x0 + 0x1b0) <= *pfVar1) {
    createImpactAndDestroy((MorningGloryProjectile *)in_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: ZombieZoybeanPodGatlingPea


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodGatlingPea::onUpdate() */

void __thiscall ZombieZoybeanPodGatlingPea::onUpdate(ZombieZoybeanPodGatlingPea *this)

{
  float *pfVar1;
  code *pcVar2;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (810.0 < *pfVar1) {
    pcVar2 = *(code **)(*(long *)this + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,2,0,aPStack_78,0);
    (*pcVar2)(this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZoybeanPodGatlingPea::calcEatDamage() */

void ZombieZoybeanPodGatlingPea::calcEatDamage(void)

{
  long in_x0;
  long in_x8;
  
  Zombie::calcEatDamage();
  *(float *)(in_x8 + 8) = *(float *)(in_x8 + 8) + *(float *)(in_x0 + 0x800);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodGatlingPea::StaticClassInit() */

void ZombieZoybeanPodGatlingPea::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZoybeanPodGatlingPea");
    (*pcVar2)(plVar1,asStack_10,FUN_0346dec4,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZoybeanPodGatlingPea::StaticGetClass() */

long * ZombieZoybeanPodGatlingPea::StaticGetClass(void)

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
  uVar2 = ZombieShooter::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZoybeanPodGatlingPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZoybeanPodGatlingPea::GetClass() const */

long * ZombieZoybeanPodGatlingPea::GetClass(void)

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
  uVar2 = ZombieShooter::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZoybeanPodGatlingPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZoybeanPodGatlingPea::~ZombieZoybeanPodGatlingPea() */

void __thiscall
ZombieZoybeanPodGatlingPea::~ZombieZoybeanPodGatlingPea(ZombieZoybeanPodGatlingPea *this)

{
  *(undefined ***)this = &PTR_GetClass_06639b50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZoybeanPodGatlingPea_0663a570;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  ZombieShooter::~ZombieShooter((ZombieShooter *)this);
  return;
}


/* non-virtual thunk to ZombieZoybeanPodGatlingPea::~ZombieZoybeanPodGatlingPea() */

void __thiscall
ZombieZoybeanPodGatlingPea::~ZombieZoybeanPodGatlingPea(ZombieZoybeanPodGatlingPea *this)

{
  ~ZombieZoybeanPodGatlingPea(this + -0x10);
  return;
}


/* ZombieZoybeanPodGatlingPea::~ZombieZoybeanPodGatlingPea() */

void __thiscall
ZombieZoybeanPodGatlingPea::~ZombieZoybeanPodGatlingPea(ZombieZoybeanPodGatlingPea *this)

{
  ~ZombieZoybeanPodGatlingPea(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZoybeanPodGatlingPea::~ZombieZoybeanPodGatlingPea() */

void __thiscall
ZombieZoybeanPodGatlingPea::~ZombieZoybeanPodGatlingPea(ZombieZoybeanPodGatlingPea *this)

{
  ~ZombieZoybeanPodGatlingPea(this + -0x10);
  return;
}


/* ZombieZoybeanPodGatlingPea::ZombieZoybeanPodGatlingPea() */

void __thiscall
ZombieZoybeanPodGatlingPea::ZombieZoybeanPodGatlingPea(ZombieZoybeanPodGatlingPea *this)

{
  undefined **__n;
  
  ZombieShooter::ZombieShooter((ZombieShooter *)this);
  __n = &PTR__ZombieZoybeanPodGatlingPea_0663a570;
  *(undefined ***)this = &PTR_GetClass_06639b50;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZoybeanPodGatlingPea_0663a570;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  std::string::append((string *)(this + 0xb8),"born",(size_t)__n);
  *(undefined4 *)(this + 0x800) = 0;
  return;
}


/* ZombieZoybeanPodGatlingPea::StaticNew() */

ZombieZoybeanPodGatlingPea * ZombieZoybeanPodGatlingPea::StaticNew(void)

{
  ZombieZoybeanPodGatlingPea *this;
  
  this = ::operator_new(0x810);
  ZombieZoybeanPodGatlingPea(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodGatlingPea::SetInstigator(Plant*) */

void ZombieZoybeanPodGatlingPea::SetInstigator(Plant *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x808),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZoybeanPodGatlingPea::GetInstigatorBoost() const */

undefined1  [16] __thiscall
ZombieZoybeanPodGatlingPea::GetInstigatorBoost(ZombieZoybeanPodGatlingPea *this)

{
  char cVar1;
  long lVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x808));
  if (cVar1 == '\0') {
    return ZEXT816(0x3f800000);
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  FUN_0346db38(*(undefined4 *)(lVar2 + 0xf4),*(undefined4 *)(lVar2 + 0x100),
               *(undefined4 *)(lVar2 + 0x104),*(undefined4 *)(lVar2 + 0x3b8));
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_00;
  return auVar3;
}


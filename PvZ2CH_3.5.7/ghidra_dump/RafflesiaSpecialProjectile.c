// Class: RafflesiaSpecialProjectile


/* RafflesiaSpecialProjectile::onInitialized() */

void __thiscall RafflesiaSpecialProjectile::onInitialized(RafflesiaSpecialProjectile *this)

{
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  return;
}


/* RafflesiaSpecialProjectile::onFallDown(std::string const&) */

void RafflesiaSpecialProjectile::onFallDown(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaSpecialProjectile::StaticClassInit() */

void RafflesiaSpecialProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"RafflesiaSpecialProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040be3e8,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RafflesiaSpecialProjectile::StaticGetClass() */

long * RafflesiaSpecialProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RafflesiaSpecialProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RafflesiaSpecialProjectile::GetClass() const */

long * RafflesiaSpecialProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"RafflesiaSpecialProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RafflesiaSpecialProjectile::RafflesiaSpecialProjectile() */

void __thiscall
RafflesiaSpecialProjectile::RafflesiaSpecialProjectile(RafflesiaSpecialProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067d6db0;
  *(undefined ***)(this + 0x10) = &PTR__RafflesiaSpecialProjectile_067d6fa0;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  return;
}


/* RafflesiaSpecialProjectile::StaticNew() */

RafflesiaSpecialProjectile * RafflesiaSpecialProjectile::StaticNew(void)

{
  RafflesiaSpecialProjectile *this;
  
  this = ::operator_new(0x1c8);
  RafflesiaSpecialProjectile(this);
  return this;
}


/* RafflesiaSpecialProjectile::~RafflesiaSpecialProjectile() */

void __thiscall
RafflesiaSpecialProjectile::~RafflesiaSpecialProjectile(RafflesiaSpecialProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d6db0;
  *(undefined ***)(this + 0x10) = &PTR__RafflesiaSpecialProjectile_067d6fa0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to RafflesiaSpecialProjectile::~RafflesiaSpecialProjectile() */

void __thiscall
RafflesiaSpecialProjectile::~RafflesiaSpecialProjectile(RafflesiaSpecialProjectile *this)

{
  ~RafflesiaSpecialProjectile(this + -0x10);
  return;
}


/* RafflesiaSpecialProjectile::~RafflesiaSpecialProjectile() */

void __thiscall
RafflesiaSpecialProjectile::~RafflesiaSpecialProjectile(RafflesiaSpecialProjectile *this)

{
  ~RafflesiaSpecialProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RafflesiaSpecialProjectile::~RafflesiaSpecialProjectile() */

void __thiscall
RafflesiaSpecialProjectile::~RafflesiaSpecialProjectile(RafflesiaSpecialProjectile *this)

{
  ~RafflesiaSpecialProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaSpecialProjectile::onProjectileInitialized() */

void __thiscall
RafflesiaSpecialProjectile::onProjectileInitialized(RafflesiaSpecialProjectile *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::SetPaused((Projectile *)this,true);
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_40,"plantfood");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaSpecialProjectile::LaunchToTarget() */

void __thiscall RafflesiaSpecialProjectile::LaunchToTarget(RafflesiaSpecialProjectile *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::SetPaused((Projectile *)this,false);
  Projectile::LaunchAt
            ((Projectile *)this,(SexyVector3 *)(this + 0x1a8),*(float *)(this + 0x1c4),
             *(float *)(this + 0x1c0));
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_40,"attack");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RafflesiaSpecialProjectile::onUpdate(float) */

void RafflesiaSpecialProjectile::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar1;
  SexyVector3 *pSVar2;
  PopAnimRig *pPVar3;
  float fVar4;
  float fVar5;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0 [4];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0 [4];
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined4 local_50 [6];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_e0 = *puVar1;
  local_d8 = *(undefined4 *)(puVar1 + 1);
  local_d0[0] = Sexy::SexyVector3::operator-
                          ((SexyVector3 *)(in_x0 + 0x1a8),(SexyVector3 *)&local_e0);
  fVar4 = (float)DVec3::getLength((DVec3 *)local_d0);
  puVar1 = (undefined8 *)Projectile::GetVelocity((Projectile *)in_x0);
  local_c0 = *puVar1;
  local_b8 = *(undefined4 *)(puVar1 + 1);
  puVar1 = (undefined8 *)AssetsManagerManifest::getAssets((AssetsManagerManifest *)in_x0);
  local_a8 = *(undefined4 *)(puVar1 + 1);
  local_b0 = *puVar1;
  pSVar2 = (SexyVector3 *)Projectile::GetVelocityScale((Projectile *)in_x0);
  local_a0[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_c0,pSVar2);
  local_90[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_a0,param_1);
  local_80[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_b0,param_1);
  local_70[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_80,param_1);
  local_60[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_70,0.5);
  local_50[0] = Sexy::SexyVector3::operator+((SexyVector3 *)local_90,(SexyVector3 *)local_60);
  fVar5 = (float)DVec3::getLength((DVec3 *)local_50);
  if (fVar4 <= fVar5) {
    Projectile::SetPaused((Projectile *)in_x0,true);
    pPVar3 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)in_x0);
    std::string::string((string *)local_60,"down");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)in_x0,onFallDown);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<RafflesiaSpecialProjectile,void(RafflesiaSpecialProjectile::*)(std::string_const&)>
              (aDStack_38,(DVec3 *)local_50);
    PopAnimRig::PlayAndStop(pPVar3,(string *)local_60,0,aDStack_38);
    std::string::~string((string *)local_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


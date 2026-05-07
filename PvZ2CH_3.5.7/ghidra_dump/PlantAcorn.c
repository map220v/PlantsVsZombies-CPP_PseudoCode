// Class: PlantAcorn


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAcorn::StaticClassInit() */

void PlantAcorn::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAcorn");
    (*pcVar2)(plVar1,asStack_10,FUN_040c1fa8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAcorn::StaticGetClass() */

long * PlantAcorn::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAcorn",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAcorn::GetClass() const */

long * PlantAcorn::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAcorn",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAcorn::GetProjectileCooldown() */

undefined4 __thiscall PlantAcorn::GetProjectileCooldown(PlantAcorn *this)

{
  int iVar1;
  
  iVar1 = FUN_040c043c(*(undefined8 *)(this + 0x10));
  if (iVar1 == 2) {
    return 0x40c00000;
  }
  if (iVar1 < 3) {
    return 0x41000000;
  }
  return 0x4099999a;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAcorn::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantAcorn::FindTargetAndFire(PlantAcorn *this,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantStrawBurst::isReadyToFire((PlantStrawBurst *)this);
  if (((cVar1 == '\0') &&
      ((cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x50)), cVar1 != '\0' ||
       (this[0x58] != (PlantAcorn)0x0)))) ||
     (cVar1 = PlantFramework::FindTargetAndFire(this,param_2), cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_Acorn_Attack");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    uVar2 = 1;
    this[0x28] = (PlantAcorn)0x1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAcorn::setState(int) */

void __thiscall PlantAcorn::setState(PlantAcorn *this,int param_1)

{
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar1;
  long *plVar2;
  char *__s;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) != param_1) {
    *(int *)(this_00 + 200) = param_1;
    if (param_1 == 0xb) {
      pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
      __s = "attack2";
    }
    else {
      if (param_1 != 0xc) {
        if (param_1 == 1) {
          plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
          (**(code **)(*plVar2 + 0x118))();
        }
        goto LAB_040c0c48;
      }
      pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
      __s = "ready";
    }
    std::string::string(asStack_40,__s);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
LAB_040c0c48:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAcorn::Initialize() */

void __thiscall PlantAcorn::Initialize(PlantAcorn *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantAcorn)0x0;
  this[0x48] = (PlantAcorn)0x0;
  this[0x49] = (PlantAcorn)0x0;
  uVar1 = PVZ_EOT();
  this[0x58] = (PlantAcorn)0x0;
  *(undefined4 *)(this + 0x2c) = uVar1;
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAcorn::OnProjectileDestroyed(AcornProjectile*) */

void PlantAcorn::OnProjectileDestroyed(AcornProjectile *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 0xb) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)(param_1 + 0x50),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar1 != '\0') {
      setState((PlantAcorn *)param_1,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAcorn::OnReturnedAnimDone(std::string const&) */

void PlantAcorn::OnReturnedAnimDone(string *param_1)

{
  setState((PlantAcorn *)param_1,0xc);
  return;
}


/* PlantAcorn::UpdateActions() */

void __thiscall PlantAcorn::UpdateActions(PlantAcorn *this)

{
  float fVar1;
  
  if (*(int *)(*(long *)(this + 0x10) + 200) == 0xc) {
    fVar1 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar1) {
      setState(this,0xd);
      return;
    }
  }
  else if (*(int *)(*(long *)(this + 0x10) + 200) == 0xd) {
    setState(this,1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAcorn::PlayAttackAnimation() */

void __thiscall PlantAcorn::PlayAttackAnimation(PlantAcorn *this)

{
  long *plVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pcVar2 = *(code **)(*plVar1 + 0x130);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar2)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  setState(this,10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAcorn::OnProjectileReturned(AcornProjectile*) */

void __thiscall PlantAcorn::OnProjectileReturned(PlantAcorn *this,AcornProjectile *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  PopAnimRig *pPVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x28] == (PlantAcorn)0x0) {
    uVar2 = FUN_040c0430(*(undefined8 *)(param_1 + 0xe0));
    bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x2000);
    if (!bVar1) {
      this[0x58] = (PlantAcorn)0x1;
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"attack3");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnReturnedAnimDone);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantAcorn,void(PlantAcorn::*)(std::string_const&)>(aDStack_38,aCStack_50);
      PopAnimRig::PlayAndStop(pPVar3,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAcorn::PlantAcorn() */

void __thiscall PlantAcorn::PlantAcorn(PlantAcorn *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067d7800;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  return;
}


/* PlantAcorn::StaticNew() */

PlantAcorn * PlantAcorn::StaticNew(void)

{
  PlantAcorn *this;
  
  this = ::operator_new(0x60);
  PlantAcorn(this);
  return this;
}


/* PlantAcorn::registerForEvents() */

void __thiscall PlantAcorn::registerForEvents(PlantAcorn *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnProjectileDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<AcornProjectile*,Sexy::CBMemberTranslatorX<PlantAcorn,void(PlantAcorn::*)(AcornProjectile*)>>
            ((MessageRouter *)puVar1,Message::AcornProjectileDestoryed,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAcorn::fireBoomerang(Sexy::SexyVector2 const&, Sexy::SexyVector3 const&) */

void PlantAcorn::fireBoomerang(SexyVector2 *param_1,SexyVector3 *param_2)

{
  float *pfVar1;
  Projectile *this;
  DVec3 *this_00;
  _func_void *extraout_x1;
  SexyVector3 *in_x2;
  long lVar2;
  Plant *pPVar3;
  float fVar4;
  float fVar5;
  FastCurve aFStack_28 [8];
  exception_ptr aeStack_20 [8];
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(param_1 + 0x10));
  fVar5 = pfVar1[1];
  Sexy::FastCurve::SetOutRange(aFStack_28,*pfVar1,fVar5);
  pPVar3 = *(Plant **)(param_1 + 0x10);
  *(undefined4 *)(pPVar3 + 0x150) = 0;
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_20,extraout_x1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aeStack_20);
  Plant::Fire(pPVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_18,0xffffffff,0);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtId::~RtId((RtId *)aeStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x50),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  param_1[0x58] = (SexyVector2)0x0;
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar2 + 0x150) = 0xffffffff;
  lVar2 = FUN_040c13b0(lVar2);
  this_00 = (DVec3 *)Projectile::GetVelocity(this);
  fVar4 = (float)DVec3::getLength(this_00);
  local_18 = Sexy::SexyVector3::operator*(in_x2,fVar4);
  local_14 = fVar5;
  AcornProjectile::SetBoundaryPosition
            ((AcornProjectile *)this,(SexyVector2 *)aFStack_28,(SexyVector2 *)param_2);
  AcornProjectile::SetBaseVelocity((AcornProjectile *)this,(SexyVector3 *)&local_18);
  AcornProjectile::SetSlowdown
            ((AcornProjectile *)this,*(float *)(lVar2 + 0x2b8),*(float *)(lVar2 + 700));
  setState((PlantAcorn *)param_1,0xb);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAcorn::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantAcorn::Fire(PlantAcorn *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 local_28;
  undefined4 local_24;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x28] = (PlantAcorn)0x0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,0.0,0.0);
  PlantFramework::FindTargetZombie(aRStack_20,this,0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20), cVar2 != '\0')) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar7 = *(undefined4 *)(lVar4 + 0x1c);
    local_28 = FUN_040c048c(*(undefined4 *)(lVar4 + 0x18),uVar7,*(undefined4 *)(lVar4 + 0x20));
    local_24 = uVar7;
  }
  else {
    (**(code **)(*(long *)this + 0xf8))(aRStack_18,this,param_4);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if ((bVar1) &&
       (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar2 != '\0')) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      uVar7 = *(undefined4 *)(lVar4 + 0x1c);
      local_28 = FUN_040c048c(*(undefined4 *)(lVar4 + 0x18),uVar7,*(undefined4 *)(lVar4 + 0x20));
      local_24 = uVar7;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  lVar4 = *(long *)(this + 0x10);
  fVar5 = (float)PVZ_T();
  fVar6 = (float)GetProjectileCooldown(this);
  *(float *)(lVar4 + 0x128) = fVar6 + fVar5;
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,1.0,0.0,0.0);
  uVar3 = fireBoomerang((SexyVector2 *)this,(SexyVector3 *)&local_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAcorn::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void __thiscall
PlantAcorn::FindTargetZombie
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,PlantAcorn *this,
          undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  Zombie *this_00;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  float fVar9;
  float local_4c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtMixedPtrBase aRStack_38 [8];
  Plant aPStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  cVar1 = Board::RowCanHaveZombies
                    (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x110));
  if (cVar1 != '\0') {
    if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
      uVar2 = PlantFramework::GetCollisionFlags();
    }
    else {
      uVar2 = (**(code **)(*(long *)this + 400))(this,param_4);
    }
    uVar6 = 0;
    Plant::GetPlantAttackRect(aPStack_30,*(undefined8 *)(this + 0x10),param_4);
    local_4c = 0.0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aPStack_30,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
    uVar7 = local_20;
    uVar3 = FUN_040c0460(local_20,local_18);
    if (uVar3 != 0) {
      do {
        FUN_040c046c(uVar7,uVar6);
        nop();
        if (this_00 != (Zombie *)0x0) {
          ToolPacketData::GetProps();
          cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          if ((((cVar1 != '\0') && (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) &&
              (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
             ((cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0' &&
              (cVar1 = RealObject::IsOnOpposingTeam
                                 ((RealObject *)this_00,*(RealObject **)(this + 0x10)),
              cVar1 != '\0')))) {
            pcVar8 = *(code **)(*(long *)this + 0x3e0);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_40);
            cVar1 = (*pcVar8)(this,aRStack_38,param_4);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            if (cVar1 != '\0') {
              pfVar4 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this_00);
              fVar9 = *pfVar4;
              lVar5 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
              if (fVar9 <= *(float *)(lVar5 + 0x10)) {
                pcVar8 = *(code **)(*(long *)this_00 + 0x3d0);
                Plant::GetType();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_40)
                ;
                cVar1 = (*pcVar8)(this_00,aRStack_38,0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
                if (((cVar1 != '\0') &&
                    (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar2), cVar1 != '\0'))
                   && (fVar9 = *pfVar4, local_4c < fVar9)) {
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,
                             (RtWeakPtrBase *)aRStack_38);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                  local_4c = fVar9;
                }
              }
            }
          }
          uVar7 = local_20;
          uVar3 = FUN_040c0460(local_20,local_18);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantAcorn::ApplyPlantfood() */

void __thiscall PlantAcorn::ApplyPlantfood(PlantAcorn *this)

{
  char cVar1;
  undefined4 uVar2;
  
  this[0x28] = (PlantAcorn)0x1;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    this[0x48] = (PlantAcorn)0x0;
    this[0x49] = (PlantAcorn)0x0;
  }
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar2;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  setState(this,5);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantAcorn::CancelPlantfood() */

void __thiscall PlantAcorn::CancelPlantfood(PlantAcorn *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x28] = (PlantAcorn)0x0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  setState(this,1);
  return;
}


/* PlantAcorn::~PlantAcorn() */

void __thiscall PlantAcorn::~PlantAcorn(PlantAcorn *this)

{
  *(undefined ***)this = &PTR_GetClass_067d7800;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantAcorn::~PlantAcorn() */

void __thiscall PlantAcorn::~PlantAcorn(PlantAcorn *this)

{
  ~PlantAcorn(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAcorn::UpdatePlantfood() */

void __thiscall PlantAcorn::UpdatePlantfood(PlantAcorn *this)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PopAnimRig *this_00;
  float *pfVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  RtWeakPtrBase *this_01;
  float *pfVar12;
  Zombie *this_02;
  Effect_PopAnim *this_03;
  ResourceInfo *pRVar13;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  undefined8 uVar14;
  SharkMinion *this_05;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float local_c8;
  float local_c4;
  RtWeakPtr<Sexy::SoundResource> aRStack_c0 [8];
  string asStack_b8 [8];
  undefined4 local_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_c8 = 0.0;
  local_8 = ___stack_chk_guard;
  local_c4 = 0.0;
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_68,"box");
  cVar2 = PopAnimRig::CalcLayerTranslation(this_00,asStack_68,&local_c8,&local_c4);
  std::string::~string(asStack_68);
  nop();
  if ((cVar2 != '\0') && (fVar18 = (float)PVZ_T(), *(float *)(this + 0x2c) <= fVar18)) {
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    iVar4 = BoardTransforms::BoardSpaceToGridX(*pfVar8);
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    iVar5 = BoardTransforms::BoardSpaceToGridX(local_c8 + *pfVar8);
    bVar1 = iVar5 == -1;
    if (bVar1) {
      iVar5 = 0x11;
    }
    if (iVar5 <= iVar4) {
      iVar5 = iVar4 + 1;
    }
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 == '\0') {
      uVar17 = 1;
      uVar14 = 1;
    }
    else {
      uVar17 = 2;
      uVar14 = 2;
    }
    lVar15 = *(long *)this;
    if (*(code **)(lVar15 + 400) == PlantFramework::GetCollisionFlags) {
      uVar6 = PlantFramework::GetCollisionFlags();
    }
    else {
      uVar6 = (**(code **)(lVar15 + 400))(this,uVar14);
      lVar15 = *(long *)this;
    }
    if (*(code **)(lVar15 + 0x198) == PlantFramework::GetDamageFlags) {
      uVar14 = PlantFramework::GetDamageFlags();
    }
    else {
      uVar14 = (**(code **)(lVar15 + 0x198))(this,uVar14);
    }
    iVar5 = (iVar5 - iVar4) + 1;
    uVar14 = operator|(uVar14,0x2000);
    Plant::GetProps();
    lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    FUN_040c0450(*(undefined8 *)(lVar15 + 0x70),uVar17);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
    operator|=(auStack_58,uVar14);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    Sexy::Insets::Insets
              ((Insets *)&local_a0,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110),iVar5,1);
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if ((cVar2 != '\0') && ((this[0x48] == (PlantAcorn)0x0 || (this[0x49] == (PlantAcorn)0x0)))) {
      Sexy::Insets::Insets
                ((Insets *)&local_90,*(int *)(*(long *)(this + 0x10) + 0x114),
                 *(int *)(*(long *)(this + 0x10) + 0x110) + -1,iVar5,3);
      local_a0 = local_90;
      uStack_98 = uStack_88;
    }
    uVar16 = 0;
    uVar7 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar7,
               (Insets *)&local_a0);
    while (uVar14 = local_80, uVar9 = FUN_040c0460(local_80,local_78), uVar16 < uVar9) {
      puVar10 = (undefined8 *)FUN_040c046c(uVar14,uVar16);
      this_05 = (SharkMinion *)*puVar10;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_c0,(RtWeakPtrBase *)&local_90);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
      iVar5 = SharkMinion::getRow(this_05);
      if (iVar5 == *(int *)(*(long *)(this + 0x10) + 0x110) + -1) {
        if (this[0x48] == (PlantAcorn)0x0) {
          iVar5 = SharkMinion::getRow(this_05);
          this_04 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(this + 0x10);
          if (iVar5 == *(int *)(this_04 + 0x110) + 1) goto LAB_040c3158;
          goto LAB_040c3074;
        }
LAB_040c3114:
        uVar16 = uVar16 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0)
        ;
      }
      else {
        iVar5 = SharkMinion::getRow(this_05);
        this_04 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)(this + 0x10);
        if (iVar5 == *(int *)(this_04 + 0x110) + 1) {
LAB_040c3158:
          if (this[0x49] != (PlantAcorn)0x0) goto LAB_040c3114;
        }
LAB_040c3074:
        uVar14 = *(undefined8 *)(this + 0x30);
        lVar11 = FUN_040c0474(uVar14,*(undefined8 *)(this + 0x38));
        for (lVar15 = 0; lVar15 != lVar11; lVar15 = lVar15 + 1) {
          this_01 = (RtWeakPtrBase *)FUN_040c0480(uVar14,lVar15);
          cVar2 = Sexy::RtWeakPtrBase::operator==(this_01,(RtWeakPtrBase *)aRStack_c0);
          if (cVar2 != '\0') goto LAB_040c3114;
        }
        if (!bVar1) {
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_05);
          pfVar12 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost(this_04);
          if (local_c8 + *pfVar12 < *pfVar8) goto LAB_040c3114;
        }
        this_02 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_05);
        if (((this_02 != (Zombie *)0x0) &&
            ((cVar2 = (**(code **)(*(long *)this_02 + 0xb8))(this_02,uVar6), cVar2 == '\0' ||
             (cVar2 = (**(code **)(*(long *)this_02 + 0x328))(this_02), cVar2 != '\0')))) ||
           (cVar2 = RealObject::IsOnOpposingTeam
                              ((RealObject *)this_05,*(RealObject **)(this + 0x10)), cVar2 == '\0'))
        goto LAB_040c3114;
        if ((this_05 == (SharkMinion *)0x0) ||
           (bVar3 = Sexy::RtObject::IsA<GridItem>((RtObject *)this_05), !bVar3)) {
          if (this_02 != (Zombie *)0x0) {
            iVar5 = SharkMinion::getRow((SharkMinion *)this_02);
            if (iVar5 == *(int *)(*(long *)(this + 0x10) + 0x110) + -1) {
              this[0x48] = (PlantAcorn)0x1;
            }
            else {
              iVar5 = SharkMinion::getRow((SharkMinion *)this_02);
              if (iVar5 != *(int *)(*(long *)(this + 0x10) + 0x110) + 1) goto LAB_040c33e8;
              this[0x49] = (PlantAcorn)0x1;
            }
            puVar10 = (undefined8 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_02);
            fStack_ac = (float)((ulong)*puVar10 >> 0x20);
            local_a8 = *(undefined4 *)(puVar10 + 1);
            _local_b0 = CONCAT44(fStack_ac - 24.0,(int)*puVar10);
            this_03 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
            iVar5 = (**(code **)(*(long *)this_02 + 0x170))(this_02);
            StandaloneEffect::SetBoardSpaceOrigin
                      ((StandaloneEffect *)this_03,(SexyVector3 *)&local_b0,iVar5 + 1);
            std::string::string(asStack_b8,"POPANIM_EFFECTS_ACORN_TYPHOON");
            GetPAMByName(asStack_b8);
            pRVar13 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_90);
            Effect_PopAnim::CreatePopAnimRig(this_03,(PopAnim *)pRVar13,(RtClass *)0x0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
            std::string::~string(asStack_b8);
            nop();
            Effect_PopAnim::SetCentered(this_03,true);
            std::string::string((string *)&local_90,"typhoon");
            Effect_PopAnim::PlaySingleAnimation
                      (this_03,(RtWeakPtr<Sexy::ResourceInfo> *)&local_90,0);
            std::string::~string((string *)&local_90);
            nop();
            fVar18 = (float)Zombie::GetHitpointsUntilBleedout(this_02);
            fVar19 = (float)FUN_040c0444(*(undefined4 *)(this_02 + 0x2a8));
            if ((local_60 < fVar19 + fVar18) ||
               (cVar2 = (**(code **)(*(long *)this_02 + 0x3f0))(this_02), cVar2 == '\0')) {
              Zombie::ApplyCondition((Zombie *)0x3fc00000,0,this_02,0x18,1);
            }
            else {
              iVar5 = PlantFramework::Rand((PlantFramework *)this,600);
              EATextSquish::Vec3::Vec3((Vec3 *)&local_90,1000.0,(float)iVar5,0.0);
              Zombie::FlickOff(this_02,(SexyVector3 *)&local_90);
            }
          }
LAB_040c33e8:
          (**(code **)(*(long *)this_05 + 0x110))(this_05,asStack_68);
        }
        else {
          iVar5 = SharkMinion::getRow(this_05);
          if (((iVar5 == *(int *)(*(long *)(this + 0x10) + 0x110) + -1) ||
              (iVar5 = SharkMinion::getRow(this_05),
              iVar5 == *(int *)(*(long *)(this + 0x10) + 0x110) + 1)) &&
             (bVar3 = Sexy::RtObject::IsA<GridItemWalrusStatue>((RtObject *)this_05), !bVar3))
          goto LAB_040c3114;
          (**(code **)(*(long *)this_05 + 0x120))(this_05,asStack_68);
        }
        uVar16 = uVar16 + 1;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_90,(RtWeakPtrBase *)&local_b0);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)(this + 0x30),(RtWeakPtr *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0)
        ;
      }
    }
    fVar18 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar18 + 0.1;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAcorn::OverrideProjectileCollision(Projectile*) */

undefined8 __thiscall PlantAcorn::OverrideProjectileCollision(PlantAcorn *this,Projectile *param_1)

{
  AcornProjectile *pAVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != (Projectile *)0x0) {
    pAVar1 = Sexy::RtObject::Cast<AcornProjectile>((RtObject *)param_1);
    if (pAVar1 != (AcornProjectile *)0x0) {
      lVar2 = Projectile::GetInstigator(param_1);
      if (*(long *)(this + 0x10) == lVar2) {
        return 0;
      }
    }
  }
  uVar3 = PlantFramework::OverrideProjectileCollision((PlantFramework *)this,param_1);
  return uVar3;
}


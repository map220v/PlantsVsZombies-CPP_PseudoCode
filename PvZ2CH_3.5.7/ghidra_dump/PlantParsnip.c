// Class: PlantParsnip


/* PlantParsnip::CanApplyPlantfood() */

bool __thiscall PlantParsnip::CanApplyPlantfood(PlantParsnip *this)

{
  char cVar1;
  
  if ((*(int *)(*(long *)(this + 0x10) + 200) != 0xc) &&
     (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 == '\0')) {
    return 1 < *(int *)(*(long *)(this + 0x10) + 200) - 0xeU;
  }
  return false;
}


/* PlantParsnip::IsInvincible() const */

bool __thiscall PlantParsnip::IsInvincible(PlantParsnip *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 0xc;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::StaticClassInit() */

void PlantParsnip::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantParsnip");
    (*pcVar2)(plVar1,asStack_10,FUN_03bf02fc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantParsnip::StaticGetClass() */

long * PlantParsnip::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantParsnip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantParsnip::GetClass() const */

long * PlantParsnip::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantParsnip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantParsnip::canAutoTrigger() const */

byte __thiscall PlantParsnip::canAutoTrigger(PlantParsnip *this)

{
  char cVar1;
  byte bVar2;
  
  if (((*(int *)(*(Plant **)(this + 0x10) + 200) != 0xc) &&
      (cVar1 = Plant::IsIceblocked(*(Plant **)(this + 0x10)), cVar1 == '\0')) &&
     (cVar1 = FUN_03bee264(*(undefined4 *)(*(long *)(this + 0x10) + 0x28)), cVar1 == '\0')) {
    bVar2 = (**(code **)(*(long *)this + 0x180))(this);
    return bVar2 ^ 1;
  }
  return 0;
}


/* PlantParsnip::GetPlantFoodPlayCount() */

undefined8 __thiscall PlantParsnip::GetPlantFoodPlayCount(PlantParsnip *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    return 3;
  }
  uVar2 = PlantFramework::GetPlantFoodPlayCount();
  return uVar2;
}


/* PlantParsnip::PlantParsnip() */

void __thiscall PlantParsnip::PlantParsnip(PlantParsnip *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0673fd40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* PlantParsnip::StaticNew() */

PlantParsnip * PlantParsnip::StaticNew(void)

{
  PlantParsnip *this;
  
  this = ::operator_new(0x48);
  PlantParsnip(this);
  return this;
}


/* PlantParsnip::~PlantParsnip() */

void __thiscall PlantParsnip::~PlantParsnip(PlantParsnip *this)

{
  *(undefined ***)this = &PTR_GetClass_0673fd40;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantParsnip::~PlantParsnip() */

void __thiscall PlantParsnip::~PlantParsnip(PlantParsnip *this)

{
  ~PlantParsnip(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::shootParsnip() */

void __thiscall PlantParsnip::shootParsnip(PlantParsnip *this)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ParsnipProjectile *this_01;
  undefined8 *puVar3;
  Plant *this_02;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)PlantFramework::Fire
                         ((PlantFramework *)this,
                          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                          &local_18,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  nop();
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = *puVar3;
  local_10 = *(undefined4 *)(puVar3 + 1);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  fVar4 = 25.0;
  if (cVar1 == '\0') {
    fVar4 = 30.0;
  }
  local_18 = CONCAT44(local_18._4_4_,fVar4 + (float)local_18);
  (**(code **)(*(long *)this_00 + 0x78))
            (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  bVar2 = (bool)(**(code **)(*(long *)this + 0x180))(this);
  ParsnipProjectile::StartAnimation(this_01,bVar2);
  this_02 = *(Plant **)(this + 0x10);
  fVar4 = (float)FUN_03beca40(*(undefined4 *)(this_02 + 0xf4),*(undefined4 *)(this_02 + 0x100),
                              *(undefined4 *)(this_02 + 0x104),*(undefined4 *)(this_02 + 0x3b8));
  fVar5 = (float)FUN_03beca50(*(undefined4 *)(this_02 + 0x3bc));
  fVar6 = (float)Plant::GetExtraDPSmodifier(this_02);
  FUN_03beca84(fVar5 * fVar4 * fVar6,this_01 + 0x1b4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::shootMegaParsnip() */

void __thiscall PlantParsnip::shootMegaParsnip(PlantParsnip *this)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ParsnipProjectile *this_01;
  undefined8 *puVar3;
  Plant *this_02;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)PlantFramework::Fire
                         ((PlantFramework *)this,
                          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                          &local_18,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  nop();
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = *puVar3;
  local_10 = *(undefined4 *)(puVar3 + 1);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  fVar4 = 25.0;
  if (cVar1 == '\0') {
    fVar4 = 30.0;
  }
  local_18 = CONCAT44(local_18._4_4_,fVar4 + (float)local_18);
  (**(code **)(*(long *)this_00 + 0x78))
            (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  bVar2 = (bool)(**(code **)(*(long *)this + 0x180))(this);
  ParsnipProjectile::StartAnimation(this_01,bVar2);
  this_02 = *(Plant **)(this + 0x10);
  fVar4 = (float)FUN_03beca40(*(undefined4 *)(this_02 + 0xf4),*(undefined4 *)(this_02 + 0x100),
                              *(undefined4 *)(this_02 + 0x104),*(undefined4 *)(this_02 + 0x3b8));
  fVar5 = (float)FUN_03beca50(*(undefined4 *)(this_02 + 0x3bc));
  fVar6 = (float)Plant::GetExtraDPSmodifier(this_02);
  FUN_03beca84(fVar5 * fVar4 * fVar6,this_01 + 0x1b4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::fireProjectileCallback(float) */

void __thiscall PlantParsnip::fireProjectileCallback(PlantParsnip *this,float param_1)

{
  char cVar1;
  undefined4 uVar2;
  Projectile *this_00;
  SharkMinion *this_01;
  long lVar3;
  code *pcVar4;
  float fVar5;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    if (*(int *)(*(long *)(this + 0x10) + 200) == 0xe) {
      uVar2 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
      PlantFramework::FindTargetZombie(aRStack_18,this,4);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
      if (cVar1 != '\0') {
        this_01 = (SharkMinion *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        uVar2 = SharkMinion::getRow(this_01);
      }
      lVar3 = *(long *)this;
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 4;
      pcVar4 = *(code **)(lVar3 + 0xb0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      this_00 = (Projectile *)(*pcVar4)(this,aRStack_10,uVar2,4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (this_00 != (Projectile *)0x0) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        fVar5 = (float)PVZ_T();
        Projectile::SetUpdateTimeOverride(this_00,fVar5 - param_1);
      }
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  else {
    shootParsnip(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantParsnip::setToIdle() */

void __thiscall PlantParsnip::setToIdle(PlantParsnip *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::setState(int) */

void __thiscall PlantParsnip::setState(PlantParsnip *this,int param_1)

{
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar1;
  long *plVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) != param_1) {
    *(int *)(this_00 + 200) = param_1;
    if (param_1 == 10) {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar2 + 0x118))();
    }
    else if (param_1 == 0xf) {
      pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
      std::string::string(asStack_40,"attack5_2");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantParsnip::onSleeped(bool) */

void __thiscall PlantParsnip::onSleeped(PlantParsnip *this,bool param_1)

{
  if (!param_1) {
    return;
  }
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::OnProjectileDestroyed(ParsnipUltraProjectile*) */

void PlantParsnip::OnProjectileDestroyed(ParsnipUltraProjectile *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 0xf) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtWeakPtrBase::operator==
                      ((RtWeakPtrBase *)(param_1 + 0x38),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar1 != '\0') {
      setState((PlantParsnip *)param_1,10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantParsnip::OnReturnedAnimDone(std::string const&) */

void PlantParsnip::OnReturnedAnimDone(string *param_1)

{
  setState((PlantParsnip *)param_1,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::Initialize() */

void __thiscall PlantParsnip::Initialize(PlantParsnip *this)

{
  PlantAnimRig *pPVar1;
  UIEasyButtonWidget *this_00;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x2c) = 0;
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  this[0x30] = (PlantParsnip)0x0;
  *(undefined4 *)(this_00 + 200) = 10;
  this[0x40] = (PlantParsnip)0x0;
  this[0x41] = (PlantParsnip)0x0;
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantParsnip,void(PlantParsnip::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantParsnip,void(PlantParsnip::*)(float)>
            (aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::OnProjectileReturned(ParsnipUltraProjectile*) */

void __thiscall
PlantParsnip::OnProjectileReturned(PlantParsnip *this,ParsnipUltraProjectile *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  PopAnimRig *pPVar3;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x41] == (PlantParsnip)0x0) {
    uVar2 = FUN_03beca38(*(undefined8 *)(param_1 + 0xe0));
    bVar1 = TestFlag<DamageTypeFlags>(uVar2,0x2000);
    if (!bVar1) {
      this[0x40] = (PlantParsnip)0x1;
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"attack5_3");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnReturnedAnimDone);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantParsnip,void(PlantParsnip::*)(std::string_const&)>(aDStack_38,aCStack_50);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::getDamage(PlantWeapon) */

void PlantParsnip::getDamage(undefined8 param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  Plant *this;
  float fVar4;
  float fVar5;
  float fVar6;
  Point aPStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  this = (Plant *)param_2[2];
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_03beca40(*(undefined4 *)(this + 0xf4),*(undefined4 *)(this + 0x100),
                              *(undefined4 *)(this + 0x104),*(undefined4 *)(this + 0x3b8));
  fVar5 = (float)FUN_03beca50(*(undefined4 *)(this + 0x3bc));
  fVar6 = (float)Plant::GetExtraDPSmodifier(this);
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  lVar2 = FUN_03beca98(*(undefined8 *)(lVar2 + 0x70),param_3);
  iVar1 = *(int *)(lVar2 + 0x2c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar3 = (**(code **)(*param_2 + 0x198))(param_2,param_3);
  lVar2 = param_2[2];
  Sexy::Point::Point(aPStack_18,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(float)(int)(fVar4 * fVar5 * (float)iVar1 * fVar6),local_10,local_c,
             param_1,uVar3,lVar2,aPStack_18,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantParsnip::registerForEvents() */

void __thiscall PlantParsnip::registerForEvents(PlantParsnip *this)

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
  Subscribe<ParsnipUltraProjectile*,Sexy::CBMemberTranslatorX<PlantParsnip,void(PlantParsnip::*)(ParsnipUltraProjectile*)>>
            ((MessageRouter *)puVar1,Message::ParsnipProjectileDestoryed,&local_40);
  return;
}


/* PlantParsnip::PlayAttackAnimation() */

void __thiscall PlantParsnip::PlayAttackAnimation(PlantParsnip *this)

{
  PlantAnimRig_Parsnip *this_00;
  
  this_00 = (PlantAnimRig_Parsnip *)FUN_03bef484(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Parsnip::PlayUltraAttack(this_00);
  setState(this,0xe);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::fireBoomerang(Sexy::SexyVector2 const&, Sexy::SexyVector3 const&) */

void PlantParsnip::fireBoomerang(SexyVector2 *param_1,SexyVector3 *param_2)

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
  *(undefined4 *)(pPVar3 + 0x150) = 4;
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_20,extraout_x1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aeStack_20);
  Plant::Fire(pPVar3,(RtWeakPtr<Sexy::SoundResource> *)&local_18,0xffffffff,4);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtId::~RtId((RtId *)aeStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x38),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  param_1[0x40] = (SexyVector2)0x0;
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar2 + 0x150) = 0xffffffff;
  lVar2 = FUN_03bef53c(lVar2);
  this_00 = (DVec3 *)Projectile::GetVelocity(this);
  fVar4 = (float)DVec3::getLength(this_00);
  local_18 = Sexy::SexyVector3::operator*(in_x2,fVar4);
  local_14 = fVar5;
  AcornProjectile::SetBoundaryPosition
            ((AcornProjectile *)this,(SexyVector2 *)aFStack_28,(SexyVector2 *)param_2);
  AcornProjectile::SetBaseVelocity((AcornProjectile *)this,(SexyVector3 *)&local_18);
  AcornProjectile::SetSlowdown
            ((AcornProjectile *)this,*(float *)(lVar2 + 0x2c4),*(float *)(lVar2 + 0x2c8));
  setState((PlantParsnip *)param_1,0xf);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantParsnip::Fire(PlantParsnip *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x41] = (PlantParsnip)0x0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,0.0,0.0);
  PlantFramework::FindTargetZombie(aRStack_20,this,4);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20), cVar2 != '\0')) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar5 = *(undefined4 *)(lVar4 + 0x1c);
    local_28 = FUN_03becac0(*(undefined4 *)(lVar4 + 0x18),uVar5,*(undefined4 *)(lVar4 + 0x20));
    local_24 = uVar5;
  }
  else {
    (**(code **)(*(long *)this + 0xf8))(aRStack_18,this,param_4);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if ((bVar1) &&
       (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar2 != '\0')) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      uVar5 = *(undefined4 *)(lVar4 + 0x1c);
      local_28 = FUN_03becac0(*(undefined4 *)(lVar4 + 0x18),uVar5,*(undefined4 *)(lVar4 + 0x20));
      local_24 = uVar5;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
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
/* PlantParsnip::Trigger() */

void __thiscall PlantParsnip::Trigger(PlantParsnip *this)

{
  PlantAnimRig_Parsnip *pPVar1;
  long lVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 0xc;
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_Parsnip *)FUN_03bef484(lVar2);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_Parsnip::PlayAnimation(pPVar1,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantParsnip::onAnimStoppedCallback(PlantParsnip *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig_Parsnip *pPVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"drop");
  if (bVar1) {
    pPVar2 = (PlantAnimRig_Parsnip *)FUN_03bef484(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Parsnip::PlayAnimation(pPVar2,aRStack_50,1);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  else {
    bVar1 = std::operator==(param_1,"attack");
    if ((bVar1) || (bVar1 = std::operator==(param_1,"attack2"), bVar1)) {
      setToIdle(this);
    }
    else {
      bVar1 = std::operator==(param_1,"attack_pop");
      if (bVar1) {
        (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10));
      }
      else {
        shootParsnip(this);
        MessageRouter::Broadcast<Plant*,Plant*>
                  ((MessageRouter *)gMessageRouter,Message::PlantConvertedToProjectile,
                   *(Plant **)(this + 0x10));
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::attack() */

void __thiscall PlantParsnip::attack(PlantParsnip *this)

{
  undefined4 uVar1;
  PlantParsnip PVar2;
  int iVar3;
  PlantAnimRig_Parsnip *pPVar4;
  long extraout_x0;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (PlantAnimRig_Parsnip *)FUN_03bef484(*(undefined8 *)(this + 0x10));
  iVar3 = FUN_03beca5c(*(undefined8 *)(this + 0x10));
  if (iVar3 < 2) {
    PVar2 = this[0x30];
joined_r0x03befcd0:
    if (PVar2 == (PlantParsnip)0x0) {
      uVar1 = *(undefined4 *)(this + 0x2c);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_60,(string *)aRStack_58);
      uVar5 = 0;
      goto LAB_03befc54;
    }
  }
  else {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    if (extraout_x0 == 0) {
LAB_03befbe8:
      PVar2 = this[0x30];
      goto joined_r0x03befcd0;
    }
    fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar7 = *(float *)(extraout_x0 + 0x2b8);
    iVar3 = FUN_03beca5c(*(undefined8 *)(this + 0x10));
    if (2 < iVar3) {
      fVar7 = *(float *)(extraout_x0 + 700) * fVar7 + fVar7;
    }
    if (fVar7 <= fVar6) goto LAB_03befbe8;
    this[0x30] = (PlantParsnip)0x1;
  }
  uVar1 = *(undefined4 *)(this + 0x2c);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,aRStack_60,(string *)aRStack_58);
  uVar5 = 1;
LAB_03befc54:
  PlantAnimRig_Parsnip::PlayPunchAttack
            (pPVar4,uVar5,uVar1,
             (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  PlantAnimRig::SetState((PlantAnimRig *)pPVar4,0xe);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::findTargetsAndPlayAttackAnim() */

void __thiscall PlantParsnip::findTargetsAndPlayAttackAnim(PlantParsnip *this)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  undefined8 uVar3;
  RealObject *this_00;
  float fVar4;
  MeleePlantTargeter aMStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)(this + 0x10);
    cVar1 = FUN_03beca64(uVar3);
    if (cVar1 != '\0') {
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aMStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aMStack_10);
      if ((extraout_x0 != 0) &&
         (fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0),
         fVar4 < *(float *)(extraout_x0 + 0x2c0))) {
        cVar1 = PlantPuffshroom::IsVanishing((PlantPuffshroom *)this);
        if (((cVar1 != '\0') ||
            ((cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x38)), cVar1 == '\0'
             && (this[0x40] == (PlantParsnip)0x0)))) &&
           (cVar1 = PlantFramework::FindTargetAndFire(this,4), cVar1 != '\0')) {
          this_00 = *(RealObject **)(this + 0x10);
          std::string::string((string *)aMStack_10,"Play_Acorn_Attack");
          RealObject::PlayPositionalSound(this_00,(string *)aMStack_10,0.0);
          std::string::~string((string *)aMStack_10);
          nop();
          this[0x41] = (PlantParsnip)0x1;
        }
        goto LAB_03befde0;
      }
      uVar3 = *(undefined8 *)(this + 0x10);
    }
    iVar2 = MeleePlantTargeter::GetBestTargetDirection(aMStack_10,uVar3,0,1);
    *(int *)(this + 0x2c) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
      attack(this);
    }
  }
LAB_03befde0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantParsnip::UpdateActions() */

void __thiscall PlantParsnip::UpdateActions(PlantParsnip *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *this_00;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if (iVar1 == 10) {
    findTargetsAndPlayAttackAnim(this);
    return;
  }
  if (iVar1 == 0xb) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      setToIdle(this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void __thiscall
PlantParsnip::FindTargetZombie
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
          PlantParsnip *this,undefined8 param_3,undefined4 param_4)

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
    uVar3 = FUN_03becaa8(local_20,local_18);
    if (uVar3 != 0) {
      do {
        FUN_03becab4(uVar7,uVar6);
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
          uVar3 = FUN_03becaa8(local_20,local_18);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::GetDamageFlags(PlantWeapon) */

void __thiscall PlantParsnip::GetDamageFlags(PlantParsnip *this,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_03beca98(*(undefined8 *)(lVar3 + 0x70),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  local_70 = operator|(local_58,0x4000000000);
  if ((param_2 == 1) && (cVar2 = (**(code **)(*(long *)this + 0x180))(this), cVar2 != '\0')) {
    operator|=(&local_70,0x2000);
  }
  uVar1 = local_70;
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::Punch() */

void __thiscall PlantParsnip::Punch(PlantParsnip *this)

{
  long *plVar1;
  undefined1 uVar2;
  RealObject *this_00;
  code *pcVar3;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)MeleePlantTargeter::GetBestTarget
                             ((MeleePlantTargeter *)aDStack_68,*(undefined8 *)(this + 0x10),0,
                              *(undefined4 *)(this + 0x2c));
  if (plVar1 != (long *)0x0) {
    uVar2 = 0;
    if (this[0x30] != (PlantParsnip)0x0) {
      uVar2 = 2;
    }
    pcVar3 = *(code **)(*plVar1 + 0x110);
    getDamage(aDStack_68,this,uVar2);
    (*pcVar3)(plVar1,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string((string *)aDStack_68,"Play_Bonk");
    RealObject::PlayPositionalSound(this_00,(string *)aDStack_68,0.0);
    std::string::~string((string *)aDStack_68);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantParsnip::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantParsnip::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) - 0xcU < 2) {
      shootParsnip((PlantParsnip *)param_1);
    }
    else if (1 < *(int *)(*(long *)(param_1 + 0x10) + 200) - 0xeU) {
      Punch((PlantParsnip *)param_1);
    }
  }
  else {
    bVar1 = std::operator==(param_2,"use_action1");
    if (bVar1) {
      shootMegaParsnip((PlantParsnip *)param_1);
      return 0;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::ApplyPlantfood() */

void __thiscall PlantParsnip::ApplyPlantfood(PlantParsnip *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RealObject *this_00;
  SexyVector3 *this_01;
  ZombieTosserSubSystem *pZVar4;
  long lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 auStack_d8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar5 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar5 + 200) = 0xd;
  lVar5 = FUN_03bef53c(lVar5);
  (**(code **)(*(long *)this + 0x2b8))(auStack_d8,this,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_c8,2,auStack_d8,0xffffffff,0xffffffff);
  local_f8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_f0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_f8,(__normal_iterator *)&local_f0), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_f8);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
    if (cVar2 != '\0') {
      pcVar6 = *(code **)(*(long *)this_00 + 0x3d0);
      Plant::GetType();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)&local_e8);
      cVar2 = (*pcVar6)(this_00,aRStack_68,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_e8);
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*(long *)this_00 + 0x380))(this_00,0);
        if (cVar2 != '\0') {
          cVar2 = Zombie::IsControlled((Zombie *)this_00);
          if (cVar2 == '\0') {
            this_01 = (SexyVector3 *)
                      std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
            iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
            uVar7 = 0;
            uVar8 = 0;
            EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,(float)(iVar3 << 1),0.0,0.0);
            local_e8 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aRStack_68);
            local_e4 = uVar7;
            local_e0 = uVar8;
            pZVar4 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x43160000,0x3f800000,pZVar4,this_00,
                       (RtWeakPtr<Sexy::ResourceInfo> *)&local_e8,aRStack_b0,1);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_b0);
            MessageRouter::Broadcast<KnockbackReason,KnockbackReason>
                      ((MessageRouter *)gMessageRouter,Message::ZombieKnockedBackByPlayer,0);
          }
        }
        pcVar6 = *(code **)(*(long *)this_00 + 0x110);
        FUN_03beca98(*(undefined8 *)(lVar5 + 0x70),1);
        Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
        (*pcVar6)(this_00,aRStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_f8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantParsnip::TakeDamage(DamageInfo const&) */

void PlantParsnip::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  long lVar2;
  long in_x1;
  float fVar3;
  Point aPStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)FUN_03beca54(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0xd8));
  if (((0.0 < fVar3 - *(float *)(in_x1 + 8)) ||
      (cVar1 = canAutoTrigger((PlantParsnip *)param_1), cVar1 == '\0')) ||
     (lVar2 = operator&(*(undefined8 *)(in_x1 + 0x10),2), lVar2 != 0)) {
    PlantMagicbeans::TakeDamage(param_1);
  }
  else {
    Trigger((PlantParsnip *)param_1);
    Sexy::Point::Point(aPStack_18,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_10,local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantParsnip::OverrideProjectileCollision(Projectile*) */

undefined8 __thiscall
PlantParsnip::OverrideProjectileCollision(PlantParsnip *this,Projectile *param_1)

{
  ParsnipUltraProjectile *pPVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != (Projectile *)0x0) {
    pPVar1 = Sexy::RtObject::Cast<ParsnipUltraProjectile>((RtObject *)param_1);
    if (pPVar1 != (ParsnipUltraProjectile *)0x0) {
      lVar2 = Projectile::GetInstigator(param_1);
      if (*(long *)(this + 0x10) == lVar2) {
        return 0;
      }
    }
  }
  uVar3 = PlantFramework::OverrideProjectileCollision((PlantFramework *)this,param_1);
  return uVar3;
}


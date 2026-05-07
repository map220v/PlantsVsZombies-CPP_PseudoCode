// Class: PlantWasabiWhip


/* PlantWasabiWhip::OnCoinEffectFinished(std::string const&) */

void PlantWasabiWhip::OnCoinEffectFinished(string *param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 200) = 10;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::StaticClassInit() */

void PlantWasabiWhip::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWasabiWhip");
    (*pcVar2)(plVar1,asStack_10,FUN_039811e8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWasabiWhip::StaticGetClass() */

long * PlantWasabiWhip::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWasabiWhip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWasabiWhip::GetClass() const */

long * PlantWasabiWhip::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWasabiWhip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::Fireball() */

void __thiscall PlantWasabiWhip::Fireball(PlantWasabiWhip *this)

{
  long lVar1;
  float *pfVar2;
  undefined8 uVar3;
  RealObject *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Repeater_Cannon_Fire");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  lVar1 = FUN_0397eee4(*(undefined8 *)(lVar1 + 0x70),3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_01);
  fVar5 = *(float *)(lVar1 + 0x6c);
  fVar9 = *pfVar2;
  fVar8 = pfVar2[2];
  fVar7 = *(float *)(this_01 + 0xc4);
  fVar4 = *(float *)(lVar1 + 0x68);
  fVar6 = pfVar2[1];
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(lVar1 + 8));
  uVar3 = Board::AddProjectile
                    ((Board *)(fVar9 + fVar4 * fVar7),fVar6,fVar8 - fVar7 * fVar5,uVar3,asStack_10,
                     *(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantWasabiWhip::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantWasabiWhip::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_level5_skill");
  if (bVar1) {
    Fireball((PlantWasabiWhip *)param_1);
  }
  return 1;
}


/* PlantWasabiWhip::PlantWasabiWhip() */

void __thiscall PlantWasabiWhip::PlantWasabiWhip(PlantWasabiWhip *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_066da860;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* PlantWasabiWhip::StaticNew() */

PlantWasabiWhip * PlantWasabiWhip::StaticNew(void)

{
  PlantWasabiWhip *this;
  
  this = ::operator_new(0x40);
  PlantWasabiWhip(this);
  return this;
}


/* PlantWasabiWhip::~PlantWasabiWhip() */

void __thiscall PlantWasabiWhip::~PlantWasabiWhip(PlantWasabiWhip *this)

{
  *(undefined ***)this = &PTR_GetClass_066da860;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantWasabiWhip::~PlantWasabiWhip() */

void __thiscall PlantWasabiWhip::~PlantWasabiWhip(PlantWasabiWhip *this)

{
  ~PlantWasabiWhip(this);
  AK::FreeHook(this);
  return;
}


/* PlantWasabiWhip::activateWarmingRadius(ComponentWarmingRadiusProps) */

void __thiscall
PlantWasabiWhip::activateWarmingRadius(PlantWasabiWhip *this,ComponentWarmingRadiusProps *param_2)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (!bVar1) {
    return;
  }
  this_00 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  ComponentWarmingRadius::SetRadiusProps(this_00,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::updatePfEndTime() */

void __thiscall PlantWasabiWhip::updatePfEndTime(PlantWasabiWhip *this)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_0397eee4(*(undefined8 *)(lVar2 + 0x70),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x28) = fVar3 + *(float *)(lVar2 + 0x28);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::getDamage(PlantWeapon) */

void PlantWasabiWhip::getDamage(undefined8 param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  Point aPStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  lVar2 = FUN_0397eee4(*(undefined8 *)(lVar2 + 0x70),param_3);
  iVar1 = *(int *)(lVar2 + 0x2c);
  fVar4 = (float)Plant::GetTotalDamageRate((Plant *)param_2[2]);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar3 = (**(code **)(*param_2 + 0x198))(param_2,param_3);
  lVar2 = param_2[2];
  Sexy::Point::Point(aPStack_18,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(float)(int)(fVar4 * (float)iVar1),local_10,local_c,param_1,uVar3,lVar2,
             aPStack_18,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::attack() */

void __thiscall PlantWasabiWhip::attack(PlantWasabiWhip *this)

{
  undefined4 uVar1;
  PlantAnimRig_WasabiWhip *pPVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlantAnimRig_WasabiWhip *)FUN_03980a10(*(undefined8 *)(this + 0x10));
  uVar1 = *(undefined4 *)(this + 0x38);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  PlantAnimRig_WasabiWhip::PlayPunchAttack(pPVar2,uVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PlantAnimRig::SetState((PlantAnimRig *)pPVar2,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::findTargetsAndPlayAttackAnim() */

void __thiscall PlantWasabiWhip::findTargetsAndPlayAttackAnim(PlantWasabiWhip *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  MeleePlantTargeter aMStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    iVar2 = MeleePlantTargeter::GetBestTargetDirection(aMStack_10,*(undefined8 *)(this + 0x10),0,0);
    *(int *)(this + 0x38) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
      attack(this);
      uVar3 = 1;
      goto LAB_03980af0;
    }
  }
  uVar3 = 0;
LAB_03980af0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::isCanFireBall() */

void __thiscall PlantWasabiWhip::isCanFireBall(PlantWasabiWhip *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0397eebc(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar4 = FUN_0397eee4(*(undefined8 *)(lVar4 + 0x70),3);
    fVar7 = *(float *)(lVar4 + 0x20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((*(float *)(this + 0x2c) <= 0.0) ||
       (fVar5 = (float)PVZ_T(), fVar7 <= fVar5 - *(float *)(this + 0x2c))) {
      lVar4 = FUN_03980bbc(*(undefined8 *)(this + 0x10));
      iVar3 = PlantFramework::Rand((PlantFramework *)this);
      bVar2 = (float)iVar3 * _FUN_03980d24 <= *(float *)(lVar4 + 0x4f4);
      uVar6 = PVZ_T();
      *(undefined4 *)(this + 0x2c) = uVar6;
      goto LAB_03980c68;
    }
  }
  bVar2 = false;
LAB_03980c68:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::UpdateActions() */

void __thiscall PlantWasabiWhip::UpdateActions(PlantWasabiWhip *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *pPVar3;
  long *plVar4;
  UnchartedModePlantNumData aUStack_50 [8];
  RtMixedPtrBase aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 10) {
    cVar2 = findTargetsAndPlayAttackAnim(this);
    if (cVar2 == '\0') {
      cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
      if ((cVar2 == '\0') && (cVar2 = isCanFireBall(this), cVar2 != '\0')) {
        UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_50,0,0);
        (**(code **)(*(long *)this + 0xe0))
                  (aRStack_48,this,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),3,0,aUStack_50);
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_48);
        if (cVar2 != '\0') {
          pPVar3 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          std::string::string(asStack_40,"attack6");
          Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
          PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
          std::string::~string(asStack_40);
          nop();
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
      }
    }
  }
  else if (iVar1 == 0xb) {
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar2 == '\0') {
      plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar4 + 0x118))();
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      *(undefined4 *)(this + 0x38) = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWasabiWhip::burnZombie(Zombie*) */

void __thiscall PlantWasabiWhip::burnZombie(PlantWasabiWhip *this,Zombie *param_1)

{
  char cVar1;
  long lVar2;
  ZombieFutureImp *pZVar3;
  
  lVar2 = FUN_03980bbc(*(undefined8 *)(this + 0x10));
  pZVar3 = Sexy::RtObject::Cast<ZombieFutureImp>((RtObject *)param_1);
  if ((pZVar3 == (ZombieFutureImp *)0x0) &&
     (cVar1 = Zombie::HasCondition(param_1,0x32), cVar1 == '\0')) {
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(lVar2 + 0x4ec),0,param_1,0x32,1);
    Zombie::SetConditionTracker(*(undefined4 *)(lVar2 + 0x4f0),param_1,0x32);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::GetDamageFlags(PlantWeapon) */

void __thiscall PlantWasabiWhip::GetDamageFlags(PlantWasabiWhip *this,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_0397eee4(*(undefined8 *)(lVar1 + 0x70),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  uVar2 = operator|(local_58,0x4000000000);
  uVar2 = operator|(uVar2,0x400);
  local_70 = operator|(uVar2,0x1000);
  if (param_2 == 1) {
    operator|=(&local_70,0x2000);
  }
  uVar2 = local_70;
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::DoSpecial(int) */

void PlantWasabiWhip::DoSpecial(int param_1)

{
  int iVar1;
  PlantWasabiWhip *this;
  RtObject *this_00;
  Zombie *pZVar2;
  RealObject *this_01;
  string asStack_70 [8];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined4 local_14;
  long local_8;
  
  this = (PlantWasabiWhip *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)
            MeleePlantTargeter::GetBestTarget
                      ((MeleePlantTargeter *)aDStack_68,*(undefined8 *)(this + 0x10),0,
                       *(undefined4 *)(this + 0x38));
  if (this_00 != (RtObject *)0x0) {
    getDamage(aDStack_68,this,0);
    iVar1 = FUN_0397eeb4(*(undefined8 *)(this + 0x10));
    if (1 < iVar1) {
      pZVar2 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (pZVar2 != (Zombie *)0x0) {
        burnZombie(this,pZVar2);
        local_14 = 0x41200000;
      }
      if (iVar1 != 2) {
        local_60 = local_60 + local_60;
      }
    }
    (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
    this_01 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_70,"Play_Bonk");
    RealObject::PlayPositionalSound(this_01,asStack_70,0.0);
    std::string::~string(asStack_70);
    nop();
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::tryToDamageAdjacentTargets() */

void __thiscall PlantWasabiWhip::tryToDamageAdjacentTargets(PlantWasabiWhip *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  getDamage(aDStack_68,this,1);
  MeleePlantTargeter::GetAdjacentTargets
            (avStack_80,(__normal_iterator *)&local_88,*(undefined8 *)(this + 0x10),1);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    uVar3 = 1;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    (**(code **)(*(long *)*puVar2 + 0x110))((long *)*puVar2,aDStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::UpdatePlantfood() */

void __thiscall PlantWasabiWhip::UpdatePlantfood(PlantWasabiWhip *this)

{
  char cVar1;
  RealObject *this_00;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x28) < fVar2) {
    updatePfEndTime(this);
    cVar1 = tryToDamageAdjacentTargets(this);
    if (cVar1 != '\0') {
      this_00 = *(RealObject **)(this + 0x10);
      std::string::string(asStack_10,"Play_Plant_WasabiWhip_Impact");
      RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
      std::string::~string(asStack_10);
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
/* PlantWasabiWhip::tryDoAvatarDamageAdjacentTargets() */

void __thiscall PlantWasabiWhip::tryDoAvatarDamageAdjacentTargets(PlantWasabiWhip *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  getDamage(aDStack_68,this,2);
  MeleePlantTargeter::GetAdjacentTargets
            (avStack_80,(__normal_iterator *)&local_88,*(undefined8 *)(this + 0x10),1);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    uVar3 = 1;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    (**(code **)(*(long *)*puVar2 + 0x110))((long *)*puVar2,aDStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::activatePfWarmingRadius() */

void __thiscall PlantWasabiWhip::activatePfWarmingRadius(PlantWasabiWhip *this)

{
  long lVar1;
  ComponentWarmingRadiusProps aCStack_120 [280];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03980bbc(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            (aCStack_120,(ComponentWarmingRadiusProps *)(lVar1 + 0x3d0));
  activateWarmingRadius(this,aCStack_120);
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps(aCStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::ApplyPlantfood() */

void __thiscall PlantWasabiWhip::ApplyPlantfood(PlantWasabiWhip *this)

{
  long *plVar1;
  RealObject *this_00;
  float fVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xc;
  fVar2 = (float)PVZ_T();
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  fVar3 = (float)(**(code **)(*plVar1 + 0x1b8))(plVar1,0);
  *(float *)(this + 0x28) = fVar3 + fVar2;
  activatePfWarmingRadius(this);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Plant_Power_Plant_Spawn");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::activateNormalWarmingRadius() */

void __thiscall PlantWasabiWhip::activateNormalWarmingRadius(PlantWasabiWhip *this)

{
  long lVar1;
  ComponentWarmingRadiusProps aCStack_120 [280];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03980bbc(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
            (aCStack_120,(ComponentWarmingRadiusProps *)(lVar1 + 0x2b8));
  activateWarmingRadius(this,aCStack_120);
  ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps(aCStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x039823c8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantWasabiWhip::Initialize() */

void __thiscall PlantWasabiWhip::Initialize(PlantWasabiWhip *this)

{
  BoardEntity *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x38) = 0;
  this_00 = *(BoardEntity **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 10;
  *(undefined4 *)(this + 0x2c) = 0;
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  activateNormalWarmingRadius(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWasabiWhip::CancelPlantfood() */

void __thiscall PlantWasabiWhip::CancelPlantfood(PlantWasabiWhip *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  activateNormalWarmingRadius(this);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  }
  else {
    pPVar2 = (PopAnimRig *)FUN_03980a10(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_58,"plantfood_off2");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCoinEffectFinished);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantWasabiWhip,void(PlantWasabiWhip::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    tryDoAvatarDamageAdjacentTargets(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: ZombiePvpWizard


/* ZombiePvpWizard::updateState_Eat() */

void __thiscall ZombiePvpWizard::updateState_Eat(ZombiePvpWizard *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)this + 0x228))();
  if (lVar2 == 0) {
    cVar1 = Zombie::IsSuspended((Zombie *)this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,1);
      return;
    }
  }
  else {
    (**(code **)(*(long *)this + 0x958))(this,lVar2);
  }
  return;
}


/* ZombiePvpWizard::onAnimationDone(std::string const&) */

void ZombiePvpWizard::onAnimationDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = Zombie::isInState((Zombie *)param_1,0x1f);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
    }
    cVar1 = Zombie::isInState((Zombie *)param_1,0x20);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)param_1 + 0x4b8))(param_1);
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
      return;
    }
  }
  return;
}


/* ZombiePvpWizard::~ZombiePvpWizard() */

void __thiscall ZombiePvpWizard::~ZombiePvpWizard(ZombiePvpWizard *this)

{
  *(undefined ***)this = &PTR_GetClass_0691ed70;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePvpWizard_0691f7b8;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePvpWizard::~ZombiePvpWizard() */

void __thiscall ZombiePvpWizard::~ZombiePvpWizard(ZombiePvpWizard *this)

{
  ~ZombiePvpWizard(this + -0x10);
  return;
}


/* ZombiePvpWizard::~ZombiePvpWizard() */

void __thiscall ZombiePvpWizard::~ZombiePvpWizard(ZombiePvpWizard *this)

{
  ~ZombiePvpWizard(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePvpWizard::~ZombiePvpWizard() */

void __thiscall ZombiePvpWizard::~ZombiePvpWizard(ZombiePvpWizard *this)

{
  ~ZombiePvpWizard(this + -0x10);
  return;
}


/* ZombiePvpWizard::ZombiePvpWizard() */

void __thiscall ZombiePvpWizard::ZombiePvpWizard(ZombiePvpWizard *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0691ed70;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePvpWizard_0691f7b8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  *(undefined4 *)(this + 0x804) = 0;
  return;
}


/* ZombiePvpWizard::StaticNew() */

ZombiePvpWizard * ZombiePvpWizard::StaticNew(void)

{
  ZombiePvpWizard *this;
  
  this = ::operator_new(0x808);
  ZombiePvpWizard(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpWizard::isValidSpellTarget(Plant*) */

void __thiscall ZombiePvpWizard::isValidSpellTarget(ZombiePvpWizard *this,Plant *param_1)

{
  char cVar1;
  char cVar2;
  ZombiePvpWizardProps *pZVar3;
  float *pfVar4;
  float *pfVar5;
  TRect<int> *this_00;
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(param_1);
    }
    else {
      cVar1 = (**(code **)(*(long *)param_1 + 0x1f8))();
    }
    if (((cVar1 == '\0') && (cVar1 = Plant::IsInvincible(param_1,false), cVar1 == '\0')) &&
       (cVar1 = Plant::CanBeTargeted(param_1), cVar1 != '\0')) {
      pZVar3 = Zombie::GetProps<ZombiePvpWizardProps>((Zombie *)this);
      cVar2 = PlantRestrictionSet::IsExcluded((Plant *)(pZVar3 + 0x240));
      if (cVar2 == '\0') {
        (**(code **)(*(long *)this + 0x3a0))(aTStack_18,this);
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)param_1);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        if (*pfVar4 <= *pfVar5) goto LAB_0499d608;
        this_00 = (TRect<int> *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
        cVar2 = Sexy::TRect<int>::Intersects(this_00,aTStack_18);
        if (cVar2 != '\0') goto LAB_0499d608;
      }
    }
  }
  cVar1 = '\0';
LAB_0499d608:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpWizard::getValidSpellTarget() */

void __thiscall ZombiePvpWizard::getValidSpellTarget(ZombiePvpWizard *this)

{
  int iVar1;
  char cVar2;
  RtObject *this_00;
  Plant *pPVar3;
  float *pfVar4;
  int iVar5;
  Board *this_01;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if ((this_00 == (RtObject *)0x0) ||
     (pPVar3 = Sexy::RtObject::Cast<Plant>(this_00), pPVar3 == (Plant *)0x0)) {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    BoardTransforms::BoardSpaceToGrid(*pfVar4,pfVar4[1],&local_18,&local_14);
    if (-1 < local_18) {
      iVar5 = local_18;
      do {
        iVar1 = local_14;
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"");
        this_00 = (RtObject *)Board::GetPlantAt(this_01,iVar5,iVar1,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if ((this_00 != (RtObject *)0x0) &&
           (cVar2 = isValidSpellTarget(this,(Plant *)this_00), cVar2 != '\0')) goto LAB_0499d72c;
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
    this_00 = (RtObject *)0x0;
  }
LAB_0499d72c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* ZombiePvpWizard::updateState_Walk() */

void __thiscall ZombiePvpWizard::updateState_Walk(ZombiePvpWizard *this)

{
  char cVar1;
  long lVar2;
  ZombiePvpWizardProps *pZVar3;
  float fVar4;
  float fVar5;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 == '\0') {
    fVar4 = (float)PVZ_EOT();
    if (*(float *)(this + 0x800) == fVar4) {
      fVar4 = (float)PVZ_T();
      pZVar3 = Zombie::GetProps<ZombiePvpWizardProps>((Zombie *)this);
      fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar3 + 0x228));
      *(float *)(this + 0x800) = fVar5 + fVar4;
    }
    fVar4 = (float)PVZ_T();
    if (*(float *)(this + 0x800) < fVar4) {
      fVar4 = (float)PVZ_T();
      pZVar3 = Zombie::GetProps<ZombiePvpWizardProps>((Zombie *)this);
      fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar3 + 0x230));
      *(float *)(this + 0x800) = fVar5 + fVar4;
      lVar2 = getValidSpellTarget(this);
      if (lVar2 != 0) {
        Zombie::setZombieState((Zombie *)this,0x1f,0);
        return;
      }
    }
  }
  else {
    lVar2 = getValidSpellTarget(this);
    if (lVar2 != 0) {
      Zombie::setZombieState((Zombie *)this,0x20,0);
      return;
    }
  }
  lVar2 = (**(code **)(*(long *)this + 0x228))(this);
  if (lVar2 != 0) {
    Zombie::setZombieState((Zombie *)this,2,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpWizard::onEnterState_BigCasting(ZombieState) */

void ZombiePvpWizard::onEnterState_BigCasting(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_DarkWizard::StartBigCasting((ZombieAnimRig_DarkWizard *)pZVar1,aRStack_50);
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
/* ZombiePvpWizard::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombiePvpWizard::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 uVar2;
  float *pfVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar4;
  SexyVector3 *pSVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if ((bVar1) &&
     (this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)getValidSpellTarget((ZombiePvpWizard *)param_1),
     this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)0x0)) {
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_28,"PvpWizardDefault");
    Sexy::ToWString(asStack_28);
    Sexy::RtName::RtName(aRStack_18,awStack_20);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,0xc,aRStack_18);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_20);
    std::string::~string(asStack_28);
    nop();
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Board::AddProjectile
                           ((Board *)(fVar6 + 10.0),fVar7,0x43020000,uVar2,aRStack_18,param_1,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this);
    pfVar3 = eastl::max_alt<float>((float *)(lVar4 + 8),(float *)(pSVar5 + 8));
    Projectile::LaunchAt((Projectile *)this_00,pSVar5,*pfVar3,0.8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpWizard::onSpellImpact(BoardEntity*) */

void __thiscall ZombiePvpWizard::onSpellImpact(ZombiePvpWizard *this,BoardEntity *param_1)

{
  char cVar1;
  Plant *pPVar2;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (BoardEntity *)0x0) &&
      (pPVar2 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1), pPVar2 != (Plant *)0x0)) &&
     (cVar1 = isValidSpellTarget(this,pPVar2), cVar1 != '\0')) {
    DamageInfo::DamageInfo(aDStack_68);
    local_60 = 0x43fa0000;
    (**(code **)(*(long *)pPVar2 + 0x110))(pPVar2,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpWizard::StaticClassInit() */

void ZombiePvpWizard::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombiePvpWizard");
      (*pcVar4)(plVar1,asStack_150,FUN_0499e0a8,0x808,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePvpWizard,void(ZombiePvpWizard::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePvpWizard,void(ZombiePvpWizard::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePvpWizard,void(ZombiePvpWizard::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_DARKWIZARD_Casting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0499dda4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePvpWizard,void(ZombiePvpWizard::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombiePvpWizard,void(ZombiePvpWizard::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombiePvpWizard,void(ZombiePvpWizard::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_DARKWIZARD_BigCasting");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0499dda4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePvpWizard::StaticGetClass() */

long * ZombiePvpWizard::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePvpWizard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpWizard::GetClass() const */

long * ZombiePvpWizard::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePvpWizard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpWizard::onZombieInitialize() */

void __thiscall ZombiePvpWizard::onZombieInitialize(ZombiePvpWizard *this)

{
  ZombiePvpWizardProps *pZVar1;
  undefined4 uVar2;
  
  Zombie::onZombieInitialize((Zombie *)this);
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar2;
  pZVar1 = Zombie::GetProps<ZombiePvpWizardProps>((Zombie *)this);
  *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar1 + 0x268);
  return;
}


/* ZombiePvpWizard::onUpdate() */

void __thiscall ZombiePvpWizard::onUpdate(ZombiePvpWizard *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  Zombie::onUpdate((Zombie *)this);
  cVar1 = (**(code **)(*(long *)this + 0x4c0))(this);
  if (cVar1 != '\0') {
    fVar2 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0x804);
    *(float *)(this + 0x804) = fVar3 - fVar2;
    if (fVar3 - fVar2 <= 0.0) {
      (**(code **)(*(long *)this + 0x4b8))(this);
    }
  }
  return;
}


/* ZombiePvpWizard::ApplyZombieFood() */

void __thiscall ZombiePvpWizard::ApplyZombieFood(ZombiePvpWizard *this)

{
  char cVar1;
  ZombiePvpWizardProps *pZVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x4c0))();
  if (cVar1 != '\0') {
    return;
  }
  pZVar2 = Zombie::GetProps<ZombiePvpWizardProps>((Zombie *)this);
  *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar2 + 0x268);
  Zombie::ApplyZombieFood((Zombie *)this);
  return;
}


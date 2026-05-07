// Class: ZombieMonkBlade


/* ZombieMonkBlade::~ZombieMonkBlade() */

void __thiscall ZombieMonkBlade::~ZombieMonkBlade(ZombieMonkBlade *this)

{
  *(undefined ***)this = &PTR_GetClass_068c9e10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMonkBlade_068ca828;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieMonkBlade::~ZombieMonkBlade() */

void __thiscall ZombieMonkBlade::~ZombieMonkBlade(ZombieMonkBlade *this)

{
  ~ZombieMonkBlade(this + -0x10);
  return;
}


/* ZombieMonkBlade::~ZombieMonkBlade() */

void __thiscall ZombieMonkBlade::~ZombieMonkBlade(ZombieMonkBlade *this)

{
  ~ZombieMonkBlade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieMonkBlade::~ZombieMonkBlade() */

void __thiscall ZombieMonkBlade::~ZombieMonkBlade(ZombieMonkBlade *this)

{
  ~ZombieMonkBlade(this + -0x10);
  return;
}


/* ZombieMonkBlade::ZombieMonkBlade() */

void __thiscall ZombieMonkBlade::ZombieMonkBlade(ZombieMonkBlade *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068c9e10;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMonkBlade_068ca828;
  return;
}


/* ZombieMonkBlade::StaticNew() */

ZombieMonkBlade * ZombieMonkBlade::StaticNew(void)

{
  ZombieMonkBlade *this;
  
  this = ::operator_new(0x808);
  ZombieMonkBlade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkBlade::StaticClassInit() */

void ZombieMonkBlade::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMonkBlade");
    (*pcVar2)(plVar1,asStack_10,FUN_0474bed8,0x808,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMonkBlade::StaticGetClass() */

long * ZombieMonkBlade::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMonkBlade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMonkBlade::GetClass() const */

long * ZombieMonkBlade::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieMonkBlade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkBlade::onEnterState_Eat(ZombieState) */

void ZombieMonkBlade::onEnterState_Eat(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_1[0x800] = (Zombie)0x0;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x170);
  std::string::string(asStack_58,"attack");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(pZVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkBlade::onAnimStoppedCallback(std::string const&) */

void __thiscall ZombieMonkBlade::onAnimStoppedCallback(ZombieMonkBlade *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  code *pcVar4;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    if (this[0x800] == (ZombieMonkBlade)0x0) {
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      pcVar4 = *(code **)(*(long *)pZVar3 + 0x170);
      std::string::string(asStack_58,"attack");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      (*pcVar4)(pZVar3,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
    else {
      cVar2 = Zombie::IsSuspended((Zombie *)this);
      if (cVar2 == '\0') {
        Zombie::setZombieState((Zombie *)this,1);
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
/* ZombieMonkBlade::EatPlant(Plant*) */

void __thiscall ZombieMonkBlade::EatPlant(ZombieMonkBlade *this,Plant *param_1)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  ZombieHydraHeadAnimRig *this_01;
  float *pfVar3;
  undefined1 uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  DamageInfo *pDVar9;
  float fVar8;
  float local_78 [2];
  float local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsInvincible(param_1,false);
  if (cVar1 == '\0') {
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 == '\0') {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      fVar8 = *(float *)(lVar2 + 0x24);
      fVar6 = (float)Zombie::GetExtraDPSmodifier((Zombie *)this);
      this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      std::string::string(asStack_68,"attack");
      fVar7 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_01,asStack_68);
      local_78[0] = fVar6 * fVar7 * fVar8;
      local_70 = 0.0;
      pfVar3 = eastl::max_alt<float>(local_78,&local_70);
                    /* WARNING: Load size is inaccurate */
      pDVar9._0_4_ = *(DamageInfo **)pfVar3;
      std::string::~string(asStack_68);
      nop();
    }
    else {
      local_78[0] = (float)(**(code **)(*(long *)this + 0x498))(this);
      local_70 = 0.0;
      pfVar3 = eastl::max_alt<float>(local_78,&local_70);
                    /* WARNING: Load size is inaccurate */
      pDVar9._0_4_ = *(DamageInfo **)pfVar3;
    }
    pcVar5 = *(code **)(*(long *)param_1 + 0x110);
    Sexy::Point::Point((Point *)local_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              (pDVar9._0_4_,local_70,local_6c,(DamageInfo *)asStack_68,this,(Point *)local_78,0);
    (*pcVar5)(param_1,(DamageInfo *)asStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    if (*(float *)(param_1 + 0xd8) <= 0.0) {
      std::string::string(asStack_68,"Play_Gulp");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_68,0.0);
      std::string::~string(asStack_68);
      nop();
      Plant::KillPlant(param_1,0,0,1);
      uVar4 = 0;
      goto LAB_0474c4cc;
    }
  }
  uVar4 = 1;
LAB_0474c4cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkBlade::onAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

void ZombieMonkBlade::onAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtObject *this;
  Zombie *pZVar4;
  Plant *pPVar5;
  PlantGroup *this_00;
  GridItem *pGVar6;
  code *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"use_action");
  if (((!bVar1) || (param_1[0x800] != (string)0x0)) ||
     (iVar3 = Zombie::getZombieStateSerialization((Zombie *)param_1), iVar3 != 2))
  goto LAB_0474c6d8;
  this = (RtObject *)(**(code **)(*(long *)param_1 + 0x228))(param_1);
  if ((this != (RtObject *)0x0) && (cVar2 = Zombie::isInState((Zombie *)param_1,4), cVar2 == '\0'))
  {
    pZVar4 = Sexy::RtObject::Cast<Zombie>(this);
    pPVar5 = Sexy::RtObject::Cast<Plant>(this);
    this_00 = Sexy::RtObject::Cast<PlantGroup>(this);
    pGVar6 = Sexy::RtObject::Cast<GridItem>(this);
    if (pGVar6 != (GridItem *)0x0) {
      pcVar7 = *(code **)(*(long *)param_1 + 0x970);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      (*pcVar7)(param_1,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_0474c6d8;
    }
    if (pPVar5 == (Plant *)0x0) {
      if (pZVar4 == (Zombie *)0x0) {
        if (this_00 != (PlantGroup *)0x0) {
          PlantGroup::GetTopPlant(this_00);
          pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          cVar2 = EatPlant((ZombieMonkBlade *)param_1,pPVar5);
          if ((cVar2 == '\0') && (cVar2 = Zombie::IsSuspended((Zombie *)param_1), cVar2 == '\0')) {
            param_1[0x800] = (string)0x1;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        }
      }
      else {
        (**(code **)(*(long *)param_1 + 0x960))(param_1,pZVar4);
      }
      goto LAB_0474c6d8;
    }
    cVar2 = EatPlant((ZombieMonkBlade *)param_1,pPVar5);
    if (cVar2 != '\0') goto LAB_0474c6d8;
  }
  cVar2 = Zombie::IsSuspended((Zombie *)param_1);
  if (cVar2 == '\0') {
    param_1[0x800] = (string)0x1;
  }
LAB_0474c6d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkBlade::eatGridItem(Sexy::RtWeakPtr<GridItem>) */

void __thiscall ZombieMonkBlade::eatGridItem(ZombieMonkBlade *this,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  ZombieHydraHeadAnimRig *this_00;
  float *pfVar4;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  DamageInfo *pDVar10;
  float fVar9;
  float local_78 [2];
  float local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = (**(code **)(*plVar2 + 0x1f8))();
    if (cVar1 != '\0') {
      cVar1 = NewPVPUtils::IsPlayingNewPVP();
      if (cVar1 == '\0') {
        lVar3 = FUN_0474bc00(*(undefined8 *)(this + 0x550));
        fVar9 = *(float *)(lVar3 + 0x24);
        fVar7 = (float)Zombie::GetExtraDPSmodifier((Zombie *)this);
        this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
        std::string::string(asStack_68,"attack");
        fVar8 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_00,asStack_68);
        local_78[0] = fVar7 * fVar8 * fVar9;
        local_70 = 0.0;
        pfVar4 = eastl::max_alt<float>(local_78,&local_70);
                    /* WARNING: Load size is inaccurate */
        pDVar10._0_4_ = *(DamageInfo **)pfVar4;
        std::string::~string(asStack_68);
        nop();
      }
      else {
        local_78[0] = (float)(**(code **)(*(long *)this + 0x498))(this);
        local_70 = 0.0;
        pfVar4 = eastl::max_alt<float>(local_78,&local_70);
                    /* WARNING: Load size is inaccurate */
        pDVar10._0_4_ = *(DamageInfo **)pfVar4;
      }
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pcVar6 = *(code **)(*plVar2 + 0x110);
      if (*(code **)(*(long *)this + 0x910) == Zombie::getEatingDamageType) {
        uVar5 = Zombie::getEatingDamageType();
      }
      else {
        uVar5 = (**(code **)(*(long *)this + 0x910))(this);
      }
      Sexy::Point::Point((Point *)local_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar10._0_4_,local_70,local_6c,(DamageInfo *)asStack_68,uVar5,this,
                 (Point *)local_78,0);
      (*pcVar6)(plVar2,(DamageInfo *)asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMonkBlade::onZombieInitialize() */

void __thiscall ZombieMonkBlade::onZombieInitialize(ZombieMonkBlade *this)

{
  ZombieHydraHeadAnimRig *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ZombieMonkBlade,void(ZombieMonkBlade::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)this_00,aDStack_38);
  this[0x800] = (ZombieMonkBlade)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


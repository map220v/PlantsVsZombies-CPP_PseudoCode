// Class: ZombieArchmage


/* ZombieArchmage::~ZombieArchmage() */

void __thiscall ZombieArchmage::~ZombieArchmage(ZombieArchmage *this)

{
  *(undefined ***)this = &PTR_GetClass_068948a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieArchmage_068952d0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieArchmage::~ZombieArchmage() */

void __thiscall ZombieArchmage::~ZombieArchmage(ZombieArchmage *this)

{
  ~ZombieArchmage(this + -0x10);
  return;
}


/* ZombieArchmage::~ZombieArchmage() */

void __thiscall ZombieArchmage::~ZombieArchmage(ZombieArchmage *this)

{
  ~ZombieArchmage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieArchmage::~ZombieArchmage() */

void __thiscall ZombieArchmage::~ZombieArchmage(ZombieArchmage *this)

{
  ~ZombieArchmage(this + -0x10);
  return;
}


/* ZombieArchmage::ZombieArchmage() */

void __thiscall ZombieArchmage::ZombieArchmage(ZombieArchmage *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068948a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieArchmage_068952d0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x800) = uVar1;
  return;
}


/* ZombieArchmage::StaticNew() */

ZombieArchmage * ZombieArchmage::StaticNew(void)

{
  ZombieArchmage *this;
  
  this = ::operator_new(0x808);
  ZombieArchmage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieArchmage::isValidHypnotizeTarget(Plant*) */

void __thiscall ZombieArchmage::isValidHypnotizeTarget(ZombieArchmage *this,Plant *param_1)

{
  char cVar1;
  char cVar2;
  ZombieArchmageProps *pZVar3;
  float *pfVar4;
  float *pfVar5;
  TRect<int> *this_00;
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Plant *)0x0) && (cVar1 = FUN_046718c8(param_1[0x278]), cVar1 == '\0')) {
    if (*(code **)(*(long *)param_1 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(param_1);
    }
    else {
      cVar1 = (**(code **)(*(long *)param_1 + 0x1f8))();
    }
    if ((((cVar1 == '\0') && (cVar1 = Plant::IsInvincible(param_1,false), cVar1 == '\0')) &&
        (cVar1 = Plant::CanBeTargeted(param_1), cVar1 != '\0')) &&
       (cVar1 = Plant::CanBeTargetedBy((BoardEntity *)param_1), cVar1 != '\0')) {
      pZVar3 = Zombie::GetProps<ZombieArchmageProps>((Zombie *)this);
      cVar2 = PlantRestrictionSet::IsExcluded((Plant *)(pZVar3 + 0x220));
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
        if (*pfVar4 <= *pfVar5) goto LAB_04671f64;
        this_00 = (TRect<int> *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
        cVar2 = Sexy::TRect<int>::Intersects(this_00,aTStack_18);
        if (cVar2 != '\0') goto LAB_04671f64;
      }
    }
  }
  cVar1 = '\0';
LAB_04671f64:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* ZombieArchmage::onHypnotizeAnimationDone(std::string const&) */

void ZombieArchmage::onHypnotizeAnimationDone(string *param_1)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)param_1,0x1f), cVar1 != '\0')) {
    pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
    if ((pRVar2 == (RiftThemeFastSpell *)0x0) || (cVar1 = Creature::IsOnBoard(), cVar1 == '\0')) {
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
    }
    else {
      (**(code **)(*(long *)param_1 + 600))(param_1);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieArchmage::onEnterState_Hypnotize(ZombieState) */

void ZombieArchmage::onEnterState_Hypnotize(Zombie *param_1)

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
  std::string::string(asStack_58,"onHypnotizeAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Archmage::StartHypnotize((ZombieAnimRig_Archmage *)pZVar1,aRStack_50);
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
/* ZombieArchmage::getValidHypnotizeTarget() */

void __thiscall ZombieArchmage::getValidHypnotizeTarget(ZombieArchmage *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  undefined8 local_48;
  Plant *local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntities(avStack_38,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    local_40 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
    if ((local_40 != (Plant *)0x0) && (cVar1 = isValidHypnotizeTarget(this,local_40), cVar1 != '\0')
       ) {
      std::vector<Plant*,std::allocator<Plant*>>::push_back
                ((vector<Plant*,std::allocator<Plant*>> *)&local_20,&local_40);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  lVar3 = FUN_046718d4(local_20,local_18);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar4,uVar5);
    puVar6 = (undefined8 *)FUN_046718e0(local_20);
    uVar4 = *puVar6;
  }
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieArchmage::StaticClassInit() */

void ZombieArchmage::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieArchmage");
      (*pcVar4)(plVar1,asStack_150,FUN_04672cfc,0x808,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieArchmage,void(ZombieArchmage::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieArchmage,void(ZombieArchmage::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieArchmage,void(ZombieArchmage::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_ARCHMAGE_Hypnotize");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04672aa0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieArchmage::StaticGetClass() */

long * ZombieArchmage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieArchmage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieArchmage::GetClass() const */

long * ZombieArchmage::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieArchmage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieArchmage::updateState_Idle() */

void __thiscall ZombieArchmage::updateState_Idle(ZombieArchmage *this)

{
  RiftThemeFastSpell *pRVar1;
  ZombieArchmageProps *pZVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pRVar1 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if (pRVar1 != (RiftThemeFastSpell *)0x0) {
    pZVar2 = Zombie::GetProps<ZombieArchmageProps>((Zombie *)this);
    fVar4 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x210));
    pZVar2 = Zombie::GetProps<ZombieArchmageProps>((Zombie *)this);
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x218));
    fVar6 = (float)RiftThemeFastSpell::GetReducedCDRate();
    fVar7 = (float)PVZ_EOT();
    if (*(float *)(this + 0x800) == fVar7) {
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0x800) = fVar7 + fVar4 * (1.0 - fVar6);
    }
    fVar4 = (float)PVZ_T();
    if (*(float *)(this + 0x800) < fVar4) {
      fVar4 = (float)PVZ_T();
      *(float *)(this + 0x800) = fVar4 + fVar5 * (1.0 - fVar6);
      lVar3 = getValidHypnotizeTarget(this);
      if (lVar3 != 0) {
        Zombie::setZombieState((Zombie *)this,0x1f,0);
        return;
      }
    }
  }
  Zombie::updateState_Idle((Zombie *)this);
  return;
}


/* ZombieArchmage::updateState_Walk() */

void __thiscall ZombieArchmage::updateState_Walk(ZombieArchmage *this)

{
  char cVar1;
  RiftThemeFastSpell *pRVar2;
  ZombieArchmageProps *pZVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  Zombie *pZVar7;
  
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeFastSpell>();
  if ((pRVar2 != (RiftThemeFastSpell *)0x0) && (cVar1 = Creature::IsOnBoard(), cVar1 != '\0')) {
    pZVar7._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar7._0_4_,0,this,0x6f,1);
    return;
  }
  fVar5 = (float)PVZ_EOT();
  if (*(float *)(this + 0x800) == fVar5) {
    fVar5 = (float)PVZ_T();
    pZVar3 = Zombie::GetProps<ZombieArchmageProps>((Zombie *)this);
    fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar3 + 0x210));
    *(float *)(this + 0x800) = fVar6 + fVar5;
  }
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x800) < fVar5) {
    fVar5 = (float)PVZ_T();
    pZVar3 = Zombie::GetProps<ZombieArchmageProps>((Zombie *)this);
    fVar6 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar3 + 0x218));
    *(float *)(this + 0x800) = fVar6 + fVar5;
    lVar4 = getValidHypnotizeTarget(this);
    if (lVar4 != 0) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* ZombieArchmage::updateState_Eat() */

void __thiscall ZombieArchmage::updateState_Eat(ZombieArchmage *this)

{
  ZombieArchmageProps *pZVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x800) < fVar3) {
    fVar3 = (float)PVZ_T();
    pZVar1 = Zombie::GetProps<ZombieArchmageProps>((Zombie *)this);
    fVar4 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x218));
    *(float *)(this + 0x800) = fVar4 + fVar3;
    lVar2 = getValidHypnotizeTarget(this);
    if (lVar2 != 0) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  Zombie::updateState_Eat((Zombie *)this);
  return;
}


/* ZombieArchmage::updateState_Attack() */

void __thiscall ZombieArchmage::updateState_Attack(ZombieArchmage *this)

{
  ZombieArchmageProps *pZVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x800) < fVar3) {
    fVar3 = (float)PVZ_T();
    pZVar1 = Zombie::GetProps<ZombieArchmageProps>((Zombie *)this);
    fVar4 = (float)ValueRange::GetRandomValue((ValueRange *)(pZVar1 + 0x218));
    *(float *)(this + 0x800) = fVar4 + fVar3;
    lVar2 = getValidHypnotizeTarget(this);
    if (lVar2 != 0) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
  }
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieArchmage::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieArchmage::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Plant *pPVar5;
  undefined8 *puVar6;
  ZombieArchmageProps *pZVar7;
  Projectile *this;
  long lVar8;
  float *pfVar9;
  undefined8 uVar10;
  float fVar11;
  Board *pBVar14;
  undefined4 uVar12;
  float fVar13;
  undefined8 local_40;
  undefined8 local_38;
  Vec3 aVStack_30 [8];
  float afStack_28 [2];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
      bVar2 = std::operator==(param_4,"sheep_action");
      if ((bVar2) &&
         (pPVar5 = (Plant *)getValidHypnotizeTarget((ZombieArchmage *)param_1),
         pPVar5 != (Plant *)0x0)) {
        puVar6 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
                    /* WARNING: Load size is inaccurate */
        pBVar14._0_4_ = *puVar6;
        uVar12 = *(undefined4 *)((long)puVar6 + 4);
        uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
        pZVar7 = Zombie::GetProps<ZombieArchmageProps>((Zombie *)param_1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  (aRStack_20,(RtWeakPtrBase *)(pZVar7 + 0x248));
        this = (Projectile *)
               Board::AddProjectile(pBVar14._0_4_,uVar12,0x42c80000,uVar10,aRStack_20,param_1,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        Projectile::SetShadow(this,false);
        iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(pPVar5 + 0x114));
        iVar4 = BoardTransforms::GridToBoardSpaceY(*(int *)(pPVar5 + 0x110));
        EATextSquish::Vec3::Vec3(aVStack_30,(float)(iVar3 + -0x14),(float)(iVar4 + 0x28),0.0);
        lVar8 = std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this);
        pfVar9 = eastl::max_alt<float>((float *)(lVar8 + 8),afStack_28);
        Projectile::LaunchAt(this,(SexyVector3 *)aVStack_30,*pfVar9,0.5);
        Plant::SetIsSleepping(pPVar5,true,-1.0);
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)pPVar5);
        fVar11 = pfVar9[1];
        fVar13 = *pfVar9;
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)&local_38,(float)(int)fVar13,(float)(int)(fVar11 - 30.0));
        EntityFinder::GetEntitiesTouchingCircle2D
                  ((float)iVar3 * 1.44,aRStack_20,1,(FastCurve *)&local_38,
                   *(int *)(pPVar5 + 0x110) + -1,*(int *)(pPVar5 + 0x110) + 1);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aRStack_20);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aRStack_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
              bVar2) {
          puVar6 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
          pPVar5 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
          if ((pPVar5 != (Plant *)0x0) &&
             (cVar1 = isValidHypnotizeTarget((ZombieArchmage *)param_1,pPVar5), cVar1 != '\0')) {
            Plant::SetIsSleepping(pPVar5,true,-1.0);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


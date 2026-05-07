// Class: ZombieModernAllStar


/* ZombieModernAllStar::onPuntingAnimationStopped(std::string const&) */

void ZombieModernAllStar::onPuntingAnimationStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
  }
  return;
}


/* ZombieModernAllStar::onTackleAnimationStopped(std::string const&) */

void ZombieModernAllStar::onTackleAnimationStopped(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x800) < 1) {
      (**(code **)(*(long *)param_1 + 0x260))(param_1);
      return;
    }
    Zombie::setZombieState((Zombie *)param_1,0x1f);
    *(int *)(param_1 + 0x800) = *(int *)(param_1 + 0x800) + -1;
  }
  return;
}


/* ZombieModernAllStar::~ZombieModernAllStar() */

void __thiscall ZombieModernAllStar::~ZombieModernAllStar(ZombieModernAllStar *this)

{
  *(undefined ***)this = &PTR_GetClass_0674cc20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernAllStar_0674d680;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieModernAllStar::~ZombieModernAllStar() */

void __thiscall ZombieModernAllStar::~ZombieModernAllStar(ZombieModernAllStar *this)

{
  ~ZombieModernAllStar(this + -0x10);
  return;
}


/* ZombieModernAllStar::~ZombieModernAllStar() */

void __thiscall ZombieModernAllStar::~ZombieModernAllStar(ZombieModernAllStar *this)

{
  ~ZombieModernAllStar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieModernAllStar::~ZombieModernAllStar() */

void __thiscall ZombieModernAllStar::~ZombieModernAllStar(ZombieModernAllStar *this)

{
  ~ZombieModernAllStar(this + -0x10);
  return;
}


/* ZombieModernAllStar::ZombieModernAllStar() */

void __thiscall ZombieModernAllStar::ZombieModernAllStar(ZombieModernAllStar *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_0674cc20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieModernAllStar_0674d680;
  return;
}


/* ZombieModernAllStar::StaticNew() */

ZombieModernAllStar * ZombieModernAllStar::StaticNew(void)

{
  ZombieModernAllStar *this;
  
  this = ::operator_new(0x808);
  ZombieModernAllStar(this);
  return this;
}


/* ZombieModernAllStar::CalcPositionInTime(float) */

float __thiscall ZombieModernAllStar::CalcPositionInTime(ZombieModernAllStar *this,float param_1)

{
  char cVar1;
  int iVar2;
  EntityConditionTracker<Creature,CreatureConditions> *this_00;
  float *pfVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_10;
  
  cVar1 = Zombie::isInState((Zombie *)this,1);
  if (((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x1f), cVar1 == '\0')) &&
     (cVar1 = Zombie::isInState((Zombie *)this,4), cVar1 == '\0')) {
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_10 = (float)*puVar4;
    return local_10;
  }
  if (*(code **)(*(long *)this + 0x1d8) == Zombie::GetWalkSpeed) {
    fVar5 = (float)Zombie::GetWalkSpeed((Zombie *)this);
  }
  else {
    fVar5 = (float)(**(code **)(*(long *)this + 0x1d8))(this);
  }
  this_00 = (EntityConditionTracker<Creature,CreatureConditions> *)
            Zombie::GetConditionTracker((Zombie *)this);
  fVar6 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_00);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar8 = *pfVar3;
  fVar7 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  return fVar8 - (float)iVar2 * fVar5 * fVar6 * param_1 * fVar7;
}


/* ZombieModernAllStar::onEnterState_Running(ZombieState) */

void ZombieModernAllStar::onEnterState_Running(Zombie *param_1)

{
  ZombieModernAllStarProps *pZVar1;
  ZombieHydraHeadAnimRig *this;
  RiftThemeCharging *pRVar2;
  Zombie *pZVar3;
  
  pZVar1 = Zombie::GetProps<ZombieModernAllStarProps>(param_1);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_Parkour::PlayRunning((ZombieAnimRig_Parkour *)this);
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  (**(code **)(*(long *)param_1 + 0x358))(*(undefined4 *)(pZVar1 + 0x214),param_1);
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeCharging>();
  if (pRVar2 != (RiftThemeCharging *)0x0) {
    pZVar3._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar3._0_4_,0,param_1,0x6e,1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernAllStar::onEnterState_PuntTheImp(ZombieState) */

void ZombieModernAllStar::onEnterState_PuntTheImp(Zombie *param_1)

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
  std::string::string(asStack_58,"onPuntingAnimationStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ModernAllStar::PuntTheImp((ZombieAnimRig_ModernAllStar *)pZVar1,aRStack_50);
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
/* ZombieModernAllStar::onEnterState_Tackling(ZombieState) */

void ZombieModernAllStar::onEnterState_Tackling(Zombie *param_1)

{
  RiftThemeCharging *pRVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = RiftUtils::GetThemeByClass<RiftThemeCharging>();
  if (pRVar1 != (RiftThemeCharging *)0x0) {
    Zombie::EndCondition(param_1,0x6e);
  }
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTackleAnimationStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ModernAllStar::TacklePlant((ZombieAnimRig_ModernAllStar *)pZVar2,aRStack_50);
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


/* ZombieModernAllStar::onPlaceOnBoard() */

void __thiscall ZombieModernAllStar::onPlaceOnBoard(ZombieModernAllStar *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_03c32634(*(undefined4 *)(this + 0x70));
  if (cVar1 == '\0') {
    Zombie::onZombieInitialize((Zombie *)this);
  }
  fVar2 = (float)BoardHelpers::ApplyLevelBasedModifierValue(0.0,0xe,0xe,1);
  *(int *)(this + 0x800) = (int)fVar2;
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  FUN_03c31b30(*(long *)(gLawnApp + 0x9f0) + 0xa06);
  MessageRouter::Post<Zombie*,ZombieModernAllStar*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernAllStar::searchAndTackle() */

void __thiscall ZombieModernAllStar::searchAndTackle(ZombieModernAllStar *this)

{
  RtObject *this_00;
  PlantGroup *this_01;
  ZombieModernAllStarProps *pZVar1;
  ZombieModernAllStar *local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x428))();
  if (this_00 != (RtObject *)0x0) {
    this_01 = Sexy::RtObject::Cast<PlantGroup>(this_00);
    if (this_01 == (PlantGroup *)0x0) {
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      local_68 = this;
      pZVar1 = Zombie::GetProps<ZombieModernAllStarProps>((Zombie *)this);
      local_58 = 0x200000;
      local_60 = (float)*(int *)(pZVar1 + 0x210);
      (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&local_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
    else {
      PlantGroup::TakeSmashAttack(this_01,(BoardEntity *)this);
      FUN_03c31b3c(*(long *)(gLawnApp + 0x9f0) + 0xa05);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernAllStar::StaticClassInit() */

void ZombieModernAllStar::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieModernAllStar");
      (*pcVar4)(plVar1,asStack_150,FUN_03c33aac,0x808,0);
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
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernAllStar,void(ZombieModernAllStar::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieModernAllStar,void(ZombieModernAllStar::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernAllStar,void(ZombieModernAllStar::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZMASZS_Running");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c336f8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernAllStar,void(ZombieModernAllStar::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieModernAllStar,void(ZombieModernAllStar::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernAllStar,void(ZombieModernAllStar::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZMASZS_Tackling");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c336f8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernAllStar,void(ZombieModernAllStar::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieModernAllStar,void(ZombieModernAllStar::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieModernAllStar,void(ZombieModernAllStar::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZMASZS_PuntTheImp");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_03c336f8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieModernAllStar::StaticGetClass() */

long * ZombieModernAllStar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernAllStar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernAllStar::GetClass() const */

long * ZombieModernAllStar::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieModernAllStar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernAllStar::findImpToPunt(Sexy::TRect<int>) */

void __thiscall ZombieModernAllStar::findImpToPunt(ZombieModernAllStar *this,TRect *param_2)

{
  char cVar1;
  int iVar2;
  rbtree_node *prVar3;
  undefined8 *puVar4;
  ZombieImp *pZVar5;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_d0 [8];
  EntitySearch_InGridRows aEStack_c8 [16];
  EntitySearch_InGridSquares aEStack_b8 [16];
  undefined8 local_a8 [3];
  CBMemberTranslatorX aCStack_90 [24];
  Event1wRet<3,bool,BoardEntity*> aEStack_78 [32];
  ReceivedDataCallback aRStack_58 [32];
  function<bool(Sexy::Touch_const&)> afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnTeam(this,1);
  if (cVar1 == '\0') {
    iVar2 = SharkMinion::getRow((SharkMinion *)this);
    Sexy::Event1wRet<3,bool,BoardEntity*>::Event1wRet(aEStack_78);
    prVar3 = (rbtree_node *)ZombieModernSuperfanImp::StaticGetClass();
    pZVar5 = (ZombieImp *)0x0;
    eastl::
    rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
    ::rbtree_iterator(arStack_d0,prVar3);
    FUN_03c31e3c(afStack_38);
    EntitySearch_Lambda::EntitySearch_Lambda((EntitySearch_Lambda *)aRStack_58,afStack_38);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_38);
    EntitySearch_InGridRows::EntitySearch_InGridRows(aEStack_c8,iVar2,iVar2);
    EntitySearch_InGridSquares::EntitySearch_InGridSquares(aEStack_b8,param_2);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_a8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)arStack_d0,EntitySearch_MatchesClass::Accept);
    Sexy::Delegate1wRet<bool,BoardEntity*>::
    Delegate1wRet<EntitySearch_MatchesClass,bool(EntitySearch_MatchesClass::*)(BoardEntity*)>
              ((Delegate1wRet<bool,BoardEntity*> *)afStack_38,aCStack_90);
    Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_78,(Delegate1wRet *)afStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (aRStack_58,EntitySearch_Lambda::Accept);
    Sexy::Delegate1wRet<bool,BoardEntity*>::
    Delegate1wRet<EntitySearch_Lambda,bool(EntitySearch_Lambda::*)(BoardEntity*)>
              ((Delegate1wRet<bool,BoardEntity*> *)afStack_38,aCStack_90);
    Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_78,(Delegate1wRet *)afStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)aEStack_c8,EntitySearch_InGridRows::Accept);
    Sexy::Delegate1wRet<bool,BoardEntity*>::
    Delegate1wRet<EntitySearch_InGridRows,bool(EntitySearch_InGridRows::*)(BoardEntity*)>
              ((Delegate1wRet<bool,BoardEntity*> *)afStack_38,aCStack_90);
    Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_78,(Delegate1wRet *)afStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)aEStack_b8,EntitySearch_TouchingRectangle::Accept);
    Sexy::Delegate1wRet<bool,BoardEntity*>::
    Delegate1wRet<EntitySearch_TouchingRectangle,bool(EntitySearch_TouchingRectangle::*)(BoardEntity*)>
              ((Delegate1wRet<bool,BoardEntity*> *)afStack_38,aCStack_90);
    Sexy::Event1wRet<3,bool,BoardEntity*>::operator+=(aEStack_78,(Delegate1wRet *)afStack_38);
    EntityFinder::GetEntities
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_a8,2,
               aEStack_78);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_a8);
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)FUN_03c31b54(local_a8[0]);
      pZVar5 = Sexy::RtObject::Cast<ZombieImp>((RtObject *)*puVar4);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_a8);
    EntitySearch_Lambda::~EntitySearch_Lambda((EntitySearch_Lambda *)aRStack_58);
    Sexy::Event1wRet<3,bool,BoardEntity*>::~Event1wRet(aEStack_78);
  }
  else {
    pZVar5 = (ZombieImp *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pZVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernAllStar::searchAndPuntTheImp() */

void __thiscall ZombieModernAllStar::searchAndPuntTheImp(ZombieModernAllStar *this)

{
  long *plVar1;
  float *pfVar2;
  int local_28 [2];
  int local_20;
  float local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x3a0))((Insets *)local_28);
  local_28[0] = local_28[0] - local_20;
  local_20 = (int)((float)local_20 + (float)local_20);
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)local_28);
  plVar1 = (long *)findImpToPunt(this,(Insets *)&local_18);
  if (plVar1 != (long *)0x0) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    local_10 = pfVar2[2];
    uStack_14 = (undefined4)((ulong)*(undefined8 *)pfVar2 >> 0x20);
    _local_18 = CONCAT44(uStack_14,*pfVar2 - 100.0);
    (**(code **)(*plVar1 + 0xa08))
              (*pfVar2 - 100.0,uStack_14,local_10,0x3fc00000,0x43000000,plVar1,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernAllStar::updateState_Running() */

void __thiscall ZombieModernAllStar::updateState_Running(ZombieModernAllStar *this)

{
  long lVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x3a0))(aIStack_28);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  lVar1 = findImpToPunt(this,aIStack_18);
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*(long *)this + 0x428))(this);
    if (lVar1 != 0) {
      Zombie::setZombieState((Zombie *)this,0x20,0);
    }
  }
  else {
    searchAndPuntTheImp(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernAllStar::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieModernAllStar::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = Zombie::getZombieStateSerialization((Zombie *)param_1);
  if (iVar2 == 0x20) {
    bVar1 = std::operator==(param_4,"use_action");
    if (bVar1) {
      searchAndTackle((ZombieModernAllStar *)param_1);
      return;
    }
  }
  else {
    if (iVar2 != 0x21) {
      Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
      return;
    }
    bVar1 = std::operator==(param_4,"use_action");
    if (bVar1) {
      searchAndPuntTheImp((ZombieModernAllStar *)param_1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernAllStar::updateState_Walk() */

void __thiscall ZombieModernAllStar::updateState_Walk(ZombieModernAllStar *this)

{
  long lVar1;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x3a0))(aIStack_28);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  lVar1 = findImpToPunt(this,aIStack_18);
  if (lVar1 == 0) {
    Zombie::updateState_Walk((Zombie *)this);
  }
  else {
    Zombie::setZombieState((Zombie *)this,0x21,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


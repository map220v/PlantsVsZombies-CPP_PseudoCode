// Class: ZombieDarkKing


/* ZombieDarkKing::onExitState_KingIntro(ZombieState) */

void ZombieDarkKing::onExitState_KingIntro(Zombie *param_1)

{
  Zombie::SetIgnoresCollisions(param_1,false);
  Zombie::SetIsTargetable(param_1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKing::onEnterState_KingIntro(ZombieState) */

void ZombieDarkKing::onEnterState_KingIntro(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"intro");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onIntroCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  Zombie::SetIgnoresCollisions(param_1,true);
  Zombie::SetIsTargetable(param_1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkKing::onKnightingCompleted(std::string const&) */

void ZombieDarkKing::onKnightingCompleted(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x20);
  return;
}


/* ZombieDarkKing::chooseDeathState(DamageInfo const&) */

void __thiscall ZombieDarkKing::chooseDeathState(ZombieDarkKing *this,DamageInfo *param_1)

{
  char cVar1;
  
  Zombie::broadcastZombieDied((Zombie *)this,param_1);
  cVar1 = Zombie::HasArm((Zombie *)this);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x238))(this);
  }
  Zombie::setZombieState((Zombie *)this,5,0);
  return;
}


/* ZombieDarkKing::~ZombieDarkKing() */

void __thiscall ZombieDarkKing::~ZombieDarkKing(ZombieDarkKing *this)

{
  *(undefined ***)this = &PTR_GetClass_06892ca0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDarkKing_06893720;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x800));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieDarkKing::~ZombieDarkKing() */

void __thiscall ZombieDarkKing::~ZombieDarkKing(ZombieDarkKing *this)

{
  ~ZombieDarkKing(this + -0x10);
  return;
}


/* ZombieDarkKing::~ZombieDarkKing() */

void __thiscall ZombieDarkKing::~ZombieDarkKing(ZombieDarkKing *this)

{
  ~ZombieDarkKing(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieDarkKing::~ZombieDarkKing() */

void __thiscall ZombieDarkKing::~ZombieDarkKing(ZombieDarkKing *this)

{
  ~ZombieDarkKing(this + -0x10);
  return;
}


/* ZombieDarkKing::ZombieDarkKing() */

void __thiscall ZombieDarkKing::ZombieDarkKing(ZombieDarkKing *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06892ca0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieDarkKing_06893720;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x800));
  return;
}


/* ZombieDarkKing::StaticNew() */

ZombieDarkKing * ZombieDarkKing::StaticNew(void)

{
  ZombieDarkKing *this;
  
  this = ::operator_new(0x808);
  ZombieDarkKing(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKing::blockGravestoneSpawning(Sexy::Point const&, bool*) */

void __thiscall
ZombieDarkKing::blockGravestoneSpawning(ZombieDarkKing *this,Point *param_1,bool *param_2)

{
  char cVar1;
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,aTStack_10);
  if (cVar1 != '\0') {
    *param_2 = true;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkKing::registerForEvents() */

void __thiscall ZombieDarkKing::registerForEvents(ZombieDarkKing *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<ZombieDarkKing,void(ZombieDarkKing::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,blockGravestoneSpawning);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,bool*,Sexy::CBMemberTranslatorX<ZombieDarkKing,void(ZombieDarkKing::*)(Sexy::Point_const&,bool*)>>
            ((MessageRouter *)puVar1,Message::BlockGravestoneSpawning,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKing::isValidKnightingTarget(Zombie*) const */

void __thiscall ZombieDarkKing::isValidKnightingTarget(ZombieDarkKing *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  ZombieDarkKingProps *pZVar3;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  undefined8 uVar6;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    iVar2 = FUN_0466d9cc(*(undefined4 *)(param_1 + 0xb0));
    pZVar3 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
    if (((iVar2 != *(int *)(pZVar3 + 0x21c)) &&
        (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) {
      pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(param_1);
      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar4,0x1b);
      if ((cVar1 == '\0') &&
         (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)this),
         cVar1 == '\0')) {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        pZVar3 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
        local_18 = FUN_0466eab4(*(undefined8 *)(pZVar3 + 0x228));
        local_10 = FUN_0466eb04(*(undefined8 *)(pZVar3 + 0x230));
        while( true ) {
          cVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
          if (!(bool)cVar1) break;
          uVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          FUN_05475d88(asStack_20,uVar6);
          cVar1 = std::operator==((string *)(lVar5 + 8),asStack_20);
          if (cVar1 != '\0') {
            std::string::~string(asStack_20);
            break;
          }
          std::string::~string(asStack_20);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
        goto LAB_0466ef84;
      }
    }
  }
  cVar1 = '\0';
LAB_0466ef84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKing::onEnterState_KingCast(ZombieState) */

void ZombieDarkKing::onEnterState_KingCast(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"special");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onKnightingCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
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
/* ZombieDarkKing::findKnightingTarget() const */

void __thiscall ZombieDarkKing::findKnightingTarget(ZombieDarkKing *this)

{
  char cVar1;
  bool bVar2;
  ZombieDarkKingProps *pZVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar4;
  float *pfVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Insets::Insets((Insets *)&local_30);
  pZVar3 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
  local_30 = (local_48 - *(int *)(pZVar3 + 0x214)) + 1;
  pZVar3 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
  local_28 = *(undefined4 *)(pZVar3 + 0x214);
  pZVar3 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
  local_2c = local_44 - *(int *)(pZVar3 + 0x218) / 2;
  pZVar3 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
  local_24 = *(undefined4 *)(pZVar3 + 0x218);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)&local_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    cVar1 = (**(code **)(*(long *)this + 0xa50))(this,this_00);
    p_Var6 = this_01;
    if ((cVar1 != '\0') &&
       (p_Var6 = this_00,
       this_01 !=
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0)) {
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_01);
      p_Var6 = this_01;
      if (*pfVar4 < *pfVar5) {
        p_Var6 = this_00;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    this_01 = p_Var6;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


/* ZombieDarkKing::KnightAction() */

void __thiscall ZombieDarkKing::KnightAction(ZombieDarkKing *this)

{
  undefined4 uVar1;
  char cVar2;
  ResourceInfo *this_00;
  ZombieDarkKingProps *pZVar3;
  RtObject *this_01;
  ZombieAnimRig_Basic *this_02;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x800));
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x800));
  cVar2 = (**(code **)(*(long *)this + 0xa50))(this,this_00);
  if (cVar2 == '\0') {
    this_00 = (ResourceInfo *)findKnightingTarget(this);
  }
  cVar2 = (**(code **)(*(long *)this + 0xa50))(this,this_00);
  if (cVar2 != '\0') {
    Zombie::ApplyCondition((Zombie *)0x40a00000,0,this_00,0x1d,1);
    pZVar3 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
    uVar1 = *(undefined4 *)(pZVar3 + 0x21c);
    pZVar3 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
                    /* WARNING: Load size is inaccurate */
    Zombie::setHelm(*(Zombie **)(pZVar3 + 0x220),this_00,uVar1);
    this_01 = (RtObject *)Zombie::GetAnimRig((Zombie *)this_00);
    this_02 = Sexy::RtObject::Cast<ZombieAnimRig_Basic>(this_01);
    if (this_02 != (ZombieAnimRig_Basic *)0x0) {
      ZombieAnimRig_Basic::FlashHelm(this_02);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKing::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
ZombieDarkKing::gatherPlantingRestrictions
          (ZombieDarkKing *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  bool bVar2;
  ZombieDarkKingProps *pZVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)&local_10,(TPoint *)param_1);
  if (cVar1 != '\0') {
    pZVar3 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
    uVar4 = FUN_0466eab4(*(undefined8 *)(pZVar3 + 0x240));
    uVar5 = FUN_0466eb04(*(undefined8 *)(pZVar3 + 0x248));
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,param_2 + 8);
    local_10 = FUN_0466eb04(*(undefined8 *)(pZVar3 + 0x248));
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar2) {
      local_10 = CONCAT44(local_10._4_4_,0x28);
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)&local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKing::StaticClassInit() */

void ZombieDarkKing::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieDarkKing");
      (*pcVar4)(plVar1,asStack_150,FUN_046709c8,0x808,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkKing,void(ZombieDarkKing::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieDarkKing,void(ZombieDarkKing::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkKing,void(ZombieDarkKing::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_KING_KingIntro");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04670528(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkKing,void(ZombieDarkKing::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieDarkKing,void(ZombieDarkKing::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkKing,void(ZombieDarkKing::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_KING_KingIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04670528(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkKing,void(ZombieDarkKing::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieDarkKing,void(ZombieDarkKing::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieDarkKing,void(ZombieDarkKing::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_KING_KingCast");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04670528(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieDarkKing::StaticGetClass() */

long * ZombieDarkKing::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDarkKing",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkKing::GetClass() const */

long * ZombieDarkKing::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDarkKing",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKing::updateState_KingIdle() */

void __thiscall ZombieDarkKing::updateState_KingIdle(ZombieDarkKing *this)

{
  char cVar1;
  bool bVar2;
  ZombieDarkKingProps *pZVar3;
  long lVar4;
  WaveManager *this_00;
  undefined8 uVar5;
  RtObject *this_01;
  int extraout_w1;
  int extraout_w1_00;
  float fVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar6 = (float)Zombie::getTimeInState((Zombie *)this);
  pZVar3 = Zombie::GetProps<ZombieDarkKingProps>((Zombie *)this);
  if ((fVar6 <= *(float *)(pZVar3 + 0x210)) || (lVar4 = findKnightingTarget(this), lVar4 == 0)) {
    cVar1 = RealObject::IsOnTeam(this,2);
    if ((cVar1 != '\0') &&
       (lVar4 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0)), lVar4 != 0)) {
      this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      cVar1 = WaveManager::IsDone(this_00);
      if (cVar1 != '\0') {
        uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
        PVZDB::GetObjectIteratorForTable((Iterator *)aRStack_28,uVar5,0x29);
        while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28),
              bVar2) {
          Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtId::~RtId(aRStack_30);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
          if (bVar2) {
            this_01 = (RtObject *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            bVar2 = Sexy::RtObject::IsA<ZombieDarkKing>(this_01);
            if (!bVar2) {
              uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
              cVar1 = RealObject::IsOnTeam(uVar5,2);
              if (cVar1 != '\0') {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,extraout_w1_00);
                Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
                goto LAB_04670e80;
              }
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,extraout_w1);
        }
        Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
        Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
      }
    }
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x800),(RtWeakPtrBase *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    Zombie::setZombieState((Zombie *)this,0x21,0);
  }
LAB_04670e80:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKing::onPlaceOnBoard() */

void __thiscall ZombieDarkKing::onPlaceOnBoard(ZombieDarkKing *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  code *pcVar9;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [3];
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80);
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  std::vector<int,std::allocator<int>>::reserve
            ((vector<int,std::allocator<int>> *)local_80,(long)iVar3);
  local_68 = (ulong)local_68._4_4_ << 0x20;
  while( true ) {
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar3 <= (int)local_68) break;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)local_80,(int *)&local_68);
    local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 1);
  }
  puVar4 = (undefined8 *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
  local_a8 = FUN_0466eb54(*puVar4);
  local_a0 = FUN_0466eba4(puVar4[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    if (((RtObject *)*puVar4 != (RtObject *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<ZombieDarkKing>((RtObject *)*puVar4), bVar1)) {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_80);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_80);
      lVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)*puVar4);
      local_ac = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar5 + 4));
      local_98 = std::
                 remove<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                           (uVar6,uVar7,&local_ac);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_88,(__normal_iterator *)&local_98);
      local_90 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_80);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_68,(__normal_iterator *)&local_90);
      std::vector<int,std::allocator<int>>::erase
                ((vector<int,std::allocator<int>> *)local_80,local_88,local_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  iVar3 = BoardTransforms::BoardSpaceToGridY(*(float *)((long)puVar4 + 4));
  local_98._0_4_ = iVar3;
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_80);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_80);
  local_88 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar6,uVar7,(__normal_iterator *)&local_98);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_80);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_88,(__normal_iterator *)&local_68);
  if (bVar1) {
    cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)local_80)
    ;
    if (cVar2 != '\0') {
      pcVar9 = *(code **)(*(long *)this + 0x120);
      Sexy::Point::Point((Point *)&local_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x0,(undefined4)local_88,local_88._4_4_,
                 (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_68,4,(Point *)&local_90,0);
      (*pcVar9)(this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      local_98._0_4_ = -1;
      goto LAB_0467136c;
    }
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_80);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_80);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar6,uVar7);
    piVar8 = (int *)FUN_0466da20(local_80[0]);
    local_98._0_4_ = *piVar8;
  }
  if (-1 < (int)local_98) {
    local_68 = *puVar4;
    local_60 = *(undefined4 *)(puVar4 + 1);
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3 + -1);
    local_68 = CONCAT44(local_68._4_4_,(float)iVar3);
    iVar3 = BoardTransforms::GridToBoardSpaceY((int)local_98);
    local_68 = CONCAT44((float)iVar3,(int)local_68);
    (**(code **)(*(long *)this + 0x78))
              (this,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     *)&local_68);
  }
LAB_0467136c:
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkKing::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieDarkKing::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  Plant *pPVar3;
  undefined8 *puVar4;
  long *plVar5;
  Board *this;
  code *pcVar6;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"hit_ground");
  if (!bVar1) {
    bVar1 = std::operator==(param_4,"knight");
    if (bVar1) {
      (**(code **)(*(long *)param_1 + 0xa58))(param_1);
      Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
    }
    else {
      Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
    }
    goto LAB_046716b8;
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  BoardEntity::CalcGridPosition();
  this = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)local_68,"");
  pPVar3 = (Plant *)Board::GetPlantAt(this,local_a0,local_9c,(string *)local_68);
  std::string::~string((string *)local_68);
  nop();
  if (pPVar3 == (Plant *)0x0) {
LAB_04671644:
    plVar5 = (long *)FUN_0466f638(local_a0,local_9c);
  }
  else {
    if (*(code **)(*(long *)pPVar3 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar2 = Plant::IsInPlantFoodState(pPVar3);
    }
    else {
      cVar2 = (**(code **)(*(long *)pPVar3 + 0x1f8))();
    }
    if (cVar2 == '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      EntityFinder::GetEntitiesAtGridSquare
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,1,
                 local_a0,local_9c);
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_80);
      while( true ) {
        local_68[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_80);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_68);
        if (!bVar1) break;
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
        pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
        if (pPVar3 != (Plant *)0x0) {
          pcVar6 = *(code **)(*(long *)pPVar3 + 0x120);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_88,local_84,(string *)local_68,param_1,aPStack_90,0);
          (*pcVar6)(pPVar3,(string *)local_68);
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
        FUN_0466ebf4((exception_ptr *)&local_98);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      goto LAB_04671644;
    }
    DamageInfo::DamageInfo((DamageInfo *)local_68);
    (**(code **)(*(long *)param_1 + 0x120))(param_1,(string *)local_68);
    DamageInfo::~DamageInfo((DamageInfo *)local_68);
    plVar5 = (long *)FUN_0466f638(local_a0,local_9c);
  }
  if (plVar5 != (long *)0x0) {
    Sexy::Point::Point((Point *)&local_88,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)0x0,local_80,local_7c,(string *)local_68,param_1,(Point *)&local_88,0);
    (**(code **)(*plVar5 + 0x120))(plVar5,(string *)local_68);
    DamageInfo::~DamageInfo((DamageInfo *)local_68);
  }
LAB_046716b8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


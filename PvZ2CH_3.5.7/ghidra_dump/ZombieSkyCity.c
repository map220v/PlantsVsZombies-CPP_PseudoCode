// Class: ZombieSkyCity


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCity::StaticClassInit() */

void ZombieSkyCity::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCity");
    (*pcVar2)(plVar1,asStack_10,FUN_047a5798,0x858,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCity::StaticGetClass() */

long * ZombieSkyCity::StaticGetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCity::GetClass() const */

long * ZombieSkyCity::GetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCity::onExitState_Eat(ZombieState) */

void __thiscall ZombieSkyCity::onExitState_Eat(ZombieSkyCity *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  this[0x840] = (ZombieSkyCity)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x848),(RtWeakPtrBase *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCity::onAttackEndAnimDone(std::string const&) */

void ZombieSkyCity::onAttackEndAnimDone(string *param_1)

{
  char cVar1;
  undefined4 uVar2;
  ZombieAnimRig_SkyCity *this;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,5);
  if (cVar1 != '\0') {
    this = Sexy::RtObject::Cast<ZombieAnimRig_SkyCity>(*(RtObject **)(param_1 + 0xc0));
    uVar2 = ZombieAnimRig_SkyCity::PlayOnAirShipDie(this);
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    return;
  }
  cVar1 = Zombie::isInState((Zombie *)param_1,2);
  if (cVar1 == '\0') {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x128))(*(long **)(param_1 + 0xc0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCity::ShowZombieHitShipEffect() */

void __thiscall ZombieSkyCity::ShowZombieHitShipEffect(ZombieSkyCity *this)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x848));
  if (bVar2) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x848));
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    fVar7 = *pfVar4;
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    fVar8 = *(float *)(lVar5 + 4);
    fVar9 = *(float *)(lVar5 + 8);
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    iVar1 = *(int *)(lVar5 + 0x88);
    this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_20,"POPANIM_EFFECTS_SKYCITY_ZOMBIE_HIT_SHIP");
    GetPAMByName(asStack_20);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar6,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_20);
    nop();
    Effect_PopAnim::SetCentered(this_02,true);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,fVar7,(((fVar8 - fVar9) - (float)(iVar1 / 2)) - 40.0) - 20.0,0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)aRStack_18,-1);
    uVar3 = SharkMinion::getRow((SharkMinion *)this);
    uVar3 = Board::MakeRenderOrder(0x64960,uVar3,0);
    FUN_047a3d18(this_02 + 0x1c,uVar3);
    std::string::string((string *)aRStack_18,"idle");
    Effect_PopAnim::PlaySingleAnimation(this_02,aRStack_18,0);
    std::string::~string((string *)aRStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCity::PlayPrepareEatShipAnim() */

void __thiscall ZombieSkyCity::PlayPrepareEatShipAnim(ZombieSkyCity *this)

{
  ZombieAnimRig_SkyCity *pZVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_SkyCity>(*(RtObject **)(this + 0xc0));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAttackPrePareAnimDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombieSkyCity,void(ZombieSkyCity::*)(std::string_const&)>(aDStack_38,aCStack_50);
  ZombieAnimRig_SkyCity::PlayPrepareEatShip(pZVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCity::PlayEndEatShipAnim() */

void __thiscall ZombieSkyCity::PlayEndEatShipAnim(ZombieSkyCity *this)

{
  ZombieAnimRig_SkyCity *pZVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_SkyCity>(*(RtObject **)(this + 0xc0));
  if (pZVar1 != (ZombieAnimRig_SkyCity *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAttackEndAnimDone);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<ZombieSkyCity,void(ZombieSkyCity::*)(std::string_const&)>(aDStack_38,aCStack_50);
    ZombieAnimRig_SkyCity::PlayEndEatShip(pZVar1,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCity::ZombieSkyCity() */

void __thiscall ZombieSkyCity::ZombieSkyCity(ZombieSkyCity *this)

{
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  this[0x840] = (ZombieSkyCity)0x0;
  *(undefined ***)this = &PTR_GetClass_068de8f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCity_068df360;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x848));
  this[0x850] = (ZombieSkyCity)0x0;
  return;
}


/* ZombieSkyCity::StaticNew() */

ZombieSkyCity * ZombieSkyCity::StaticNew(void)

{
  ZombieSkyCity *this;
  
  this = ::operator_new(0x858);
  ZombieSkyCity(this);
  return this;
}


/* ZombieSkyCity::IsContinueDamageForAirShip() */

ZombieSkyCityProps __thiscall ZombieSkyCity::IsContinueDamageForAirShip(ZombieSkyCity *this)

{
  ZombieSkyCityProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieSkyCityProps>((Zombie *)this);
  if (pZVar1 != (ZombieSkyCityProps *)0x0) {
    return pZVar1[0x230];
  }
  return (ZombieSkyCityProps)0x1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCity::PlayEatAirShipAnim() */

void __thiscall ZombieSkyCity::PlayEatAirShipAnim(ZombieSkyCity *this)

{
  char cVar1;
  ZombieAnimRig_SkyCity *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Sexy::RtObject::Cast<ZombieAnimRig_SkyCity>(*(RtObject **)(this + 0xc0));
  cVar1 = IsContinueDamageForAirShip(this);
  if (cVar1 == '\0') {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAttackAnimDone);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<ZombieSkyCity,void(ZombieSkyCity::*)(std::string_const&)>(aDStack_38,aCStack_50);
    ZombieAnimRig_SkyCity::PlaySingleEatAirShip(this_00,aDStack_38);
  }
  else {
    ZombieAnimRig_SkyCity::PlayEatAirShip(this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCity::onAttackPrePareAnimDone(std::string const&) */

void ZombieSkyCity::onAttackPrePareAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)param_1,2);
  if (cVar1 == '\0') {
    return;
  }
  PlayEatAirShipAnim((ZombieSkyCity *)param_1);
  return;
}


/* ZombieSkyCity::IsAttactShipPrepareAnim() */

ZombieSkyCityProps __thiscall ZombieSkyCity::IsAttactShipPrepareAnim(ZombieSkyCity *this)

{
  ZombieSkyCityProps ZVar1;
  ZombieSkyCityProps *pZVar2;
  
  pZVar2 = Zombie::GetProps<ZombieSkyCityProps>((Zombie *)this);
  ZVar1 = (ZombieSkyCityProps)0x0;
  if (pZVar2 != (ZombieSkyCityProps *)0x0) {
    ZVar1 = pZVar2[0x231];
  }
  return ZVar1;
}


/* ZombieSkyCity::DoAttackShip() */

void __thiscall ZombieSkyCity::DoAttackShip(ZombieSkyCity *this)

{
  char cVar1;
  
  cVar1 = IsAttactShipPrepareAnim(this);
  if (cVar1 == '\0') {
    PlayEatAirShipAnim(this);
    return;
  }
  PlayPrepareEatShipAnim(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCity::onEnterState_Eat(ZombieState) */

void ZombieSkyCity::onEnterState_Eat(ZombieSkyCity *param_1)

{
  ZombieAnimRig_SkyCity *pZVar1;
  RtObject *this;
  GridItemAirship *pGVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Sexy::RtObject::Cast<ZombieAnimRig_SkyCity>(*(RtObject **)(param_1 + 0xc0));
  this = (RtObject *)(**(code **)(*(long *)param_1 + 0x228))(param_1);
  if (((this == (RtObject *)0x0) ||
      (pGVar2 = Sexy::RtObject::Cast<GridItemAirship>(this), pGVar2 == (GridItemAirship *)0x0)) ||
     (pZVar1 == (ZombieAnimRig_SkyCity *)0x0)) {
    param_1[0x840] = (ZombieSkyCity)0x0;
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x128))(*(long **)(param_1 + 0xc0));
    uVar3 = PVZ_T();
    *(undefined4 *)(param_1 + 200) = uVar3;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
  }
  else {
    param_1[0x840] = (ZombieSkyCity)0x1;
    DoAttackShip(param_1);
    ToolPacketData::GetProps();
  }
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x848),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCity::updateState_Eat() */

void __thiscall ZombieSkyCity::updateState_Eat(ZombieSkyCity *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))();
  if ((this_00 == (RtObject *)0x0) || (bVar1 = Sexy::RtObject::IsA<GridItemArmrack>(this_00), bVar1)
     ) {
    cVar2 = Zombie::IsSuspended((Zombie *)this);
    if (cVar2 == '\0') {
      Zombie::setZombieState((Zombie *)this,1);
    }
    goto LAB_047a5204;
  }
  bVar1 = Sexy::RtObject::IsA<GridItemFlame>(this_00);
  if (bVar1) goto LAB_047a5204;
  bVar1 = Sexy::RtObject::IsA<GridItemAirship>(this_00);
  if (bVar1) {
    if (this[0x840] == (ZombieSkyCity)0x0) {
      this[0x840] = (ZombieSkyCity)0x1;
      DoAttackShip(this);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x848),(RtWeakPtrBase *)a_Stack_10)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      goto LAB_047a5204;
    }
LAB_047a5250:
    bVar1 = Sexy::RtObject::IsA<GridItemAirship>(this_00);
    if (!bVar1) {
      this[0x840] = (ZombieSkyCity)0x0;
      cVar2 = IsAttactShipPrepareAnim(this);
      if (cVar2 == '\0') {
        (**(code **)(**(long **)(this + 0xc0) + 0x128))(*(long **)(this + 0xc0));
      }
      else {
        PlayEndEatShipAnim(this);
      }
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x848),(RtWeakPtrBase *)a_Stack_10)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
  }
  else if (this[0x840] != (ZombieSkyCity)0x0) goto LAB_047a5250;
  (**(code **)(*(long *)this + 0x958))(this,this_00);
LAB_047a5204:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCity::playDeathAnimation() */

void __thiscall ZombieSkyCity::playDeathAnimation(ZombieSkyCity *this)

{
  char cVar1;
  int iVar2;
  ZombieAnimRig_SkyCity *this_00;
  
  (**(code **)(*(long *)this + 0x2f0))();
  Zombie::ClearConditions((Zombie *)this);
  if (this[0x850] == (ZombieSkyCity)0x0) {
    iVar2 = (**(code **)(**(long **)(this + 0xc0) + 0x148))(*(long **)(this + 0xc0));
    *(int *)(this + 0xd0) = iVar2;
  }
  else {
    cVar1 = IsAttactShipPrepareAnim(this);
    if (cVar1 != '\0') {
      PlayEndEatShipAnim(this);
      *(undefined4 *)(this + 0xd0) = 3;
      goto LAB_047a5374;
    }
    this_00 = Sexy::RtObject::Cast<ZombieAnimRig_SkyCity>(*(RtObject **)(this + 0xc0));
    iVar2 = ZombieAnimRig_SkyCity::PlayOnAirShipDie(this_00);
    *(int *)(this + 0xd0) = iVar2;
  }
  if (iVar2 == -1) {
    (**(code **)(*(long *)this + 0x48))(this);
    return;
  }
LAB_047a5374:
  SetFlag<DebugLogFlags>(this + 0xcc,1,0);
  SetFlag<DebugLogFlags>(this + 0xcc,0x400,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCity::findTarget() */

void __thiscall ZombieSkyCity::findTarget(ZombieSkyCity *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *pRVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ZombieSkyCityProps *pZVar8;
  Plant *this_00;
  GridItemAirship *pGVar9;
  undefined8 local_40;
  undefined8 local_38;
  TRect<int> aTStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended((Zombie *)this);
  if ((cVar1 == '\0') && (cVar1 = Zombie::IsIgnoreFindTarget((Zombie *)this), cVar1 == '\0')) {
    pGVar9 = (GridItemAirship *)0x0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pRVar5 = (RtObject *)Zombie::GetForcedTarget((Zombie *)this);
    (**(code **)(*(long *)this + 0x3a0))(aTStack_30,this);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    uVar6 = operator|(2,4);
    uVar4 = operator|(uVar6,1);
    (**(code **)(*(long *)this + 0xd0))((Point *)&local_38,this);
    EntityFinder::GetEntitiesTouchingRectangle
              (avStack_20,uVar4,aTStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      if ((pRVar5 == (RtObject *)0x0) || ((RtObject *)*puVar7 == pRVar5)) {
        this_00 = (Plant *)Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
        if ((((this_00 != (Plant *)0x0) &&
             ((cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00),
              cVar1 != '\0' &&
              (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')))) &&
            (cVar1 = Zombie::HasCondition(this_00,0x27), cVar1 == '\0')) &&
           ((cVar1 = Zombie::HasCondition(this_00,0x25), cVar1 == '\0' &&
            (cVar1 = Zombie::HasCondition(this_00,0x65), cVar1 == '\0')))) goto LAB_047a55e0;
        this_00 = (Plant *)Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar7);
        if ((this_00 == (Plant *)0x0) ||
           ((cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00),
            cVar1 == '\0' ||
            (cVar1 = (**(code **)(*(long *)this_00 + 0x218))(this_00,this), cVar1 == '\0')))) {
          this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
          if ((this_00 != (Plant *)0x0) &&
             (cVar1 = Zombie::WillTargetPlant((Zombie *)this,this_00), cVar1 != '\0'))
          goto LAB_047a55e0;
        }
        else {
          bVar2 = Sexy::RtObject::IsA<GridItemAirship>((RtObject *)this_00);
          if (!bVar2) goto LAB_047a55e0;
          if (pGVar9 == (GridItemAirship *)0x0) {
            pGVar9 = Sexy::RtObject::Cast<GridItemAirship>((RtObject *)this_00);
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    this_00 = (Plant *)pGVar9;
    if (pGVar9 == (GridItemAirship *)0x0) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      pZVar8 = Zombie::GetProps<ZombieSkyCityProps>((Zombie *)this);
      if (pZVar8 != (ZombieSkyCityProps *)0x0) {
        Sexy::Point::Point((Point *)&local_38,0,0);
        cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)(pZVar8 + 0x228),(TPoint *)&local_38);
        if (cVar1 != '\0') {
          Sexy::TRect<int>::Offset(aTStack_30,(TPoint *)(pZVar8 + 0x228));
          (**(code **)(*(long *)this + 0xd0))((Point *)&local_38,this);
          EntityFinder::GetEntitiesTouchingRectangle
                    (avStack_20,4,aTStack_30,(iVar3 - local_38._4_4_) + 1,iVar3);
          local_40 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_20);
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
                bVar2) {
            puVar7 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            this_00 = (Plant *)Sexy::RtObject::Cast<GridItemAirship>((RtObject *)*puVar7);
            if (((this_00 != (Plant *)0x0) &&
                (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)this_00),
                cVar1 != '\0')) &&
               (cVar1 = (**(code **)(*(long *)this_00 + 0x218))(this_00,this), cVar1 != '\0'))
            goto LAB_047a55e0;
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
          }
        }
      }
      this_00 = (Plant *)0x0;
    }
LAB_047a55e0:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  else {
    this_00 = (Plant *)0x0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCity::onAttackAnimDone(std::string const&) */

void ZombieSkyCity::onAttackAnimDone(string *param_1)

{
  bool bVar1;
  ZombieSkyCityProps *pZVar2;
  long *plVar3;
  code *pcVar4;
  DamageInfo *pDVar5;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieSkyCityProps>((Zombie *)param_1);
  if (pZVar2 != (ZombieSkyCityProps *)0x0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(param_1 + 0x848));
    if (bVar1) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x848));
                    /* WARNING: Load size is inaccurate */
      pDVar5._0_4_ = *(DamageInfo **)(pZVar2 + 0x234);
      pcVar4 = *(code **)(*plVar3 + 0x110);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo(pDVar5._0_4_,local_70,local_6c,(DamageInfo *)asStack_68,aPStack_78,0);
      (*pcVar4)(plVar3,(DamageInfo *)asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
    }
  }
  ShowZombieHitShipEffect((ZombieSkyCity *)param_1);
  std::string::string(asStack_68,"Play_SkyCity_Missile_Explode");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_68,0.0);
  std::string::~string(asStack_68);
  nop();
  param_1[0x850] = (string)0x1;
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieSkyCity::~ZombieSkyCity() */

void __thiscall ZombieSkyCity::~ZombieSkyCity(ZombieSkyCity *this)

{
  *(undefined ***)this = &PTR_GetClass_068de8f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCity_068df360;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x848));
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieSkyCity::~ZombieSkyCity() */

void __thiscall ZombieSkyCity::~ZombieSkyCity(ZombieSkyCity *this)

{
  ~ZombieSkyCity(this + -0x10);
  return;
}


/* ZombieSkyCity::~ZombieSkyCity() */

void __thiscall ZombieSkyCity::~ZombieSkyCity(ZombieSkyCity *this)

{
  ~ZombieSkyCity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSkyCity::~ZombieSkyCity() */

void __thiscall ZombieSkyCity::~ZombieSkyCity(ZombieSkyCity *this)

{
  ~ZombieSkyCity(this + -0x10);
  return;
}


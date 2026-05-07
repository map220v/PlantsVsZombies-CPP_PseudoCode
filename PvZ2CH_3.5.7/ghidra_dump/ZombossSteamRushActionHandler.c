// Class: ZombossSteamRushActionHandler


/* ZombossSteamRushActionHandler::onChargeFailAnimDone(std::string const&) */

void ZombossSteamRushActionHandler::onChargeFailAnimDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* ZombossSteamRushActionHandler::onRushEndAnimDone(std::string const&) */

void ZombossSteamRushActionHandler::onRushEndAnimDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler::onRushStartAnimDone(std::string const&) */

void ZombossSteamRushActionHandler::onRushStartAnimDone(string *param_1)

{
  string *psVar1;
  int iVar2;
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombossHydraSprayActionDefinition *pZVar3;
  CurveSequence<float> *pCVar4;
  float *pfVar5;
  undefined8 uVar6;
  ZombieHydraHeadAnimRig *this_01;
  float fVar7;
  float fStack_1c;
  float afStack_18 [2];
  string asStack_10 [8];
  long lStack_8;
  
  pCVar4 = (CurveSequence<float> *)(param_1 + 0x28);
  lStack_8 = ___stack_chk_guard;
  psVar1 = param_1 + 0x40;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar7 = (float)ZombieZombossMech::GetZomboss_T(this_00);
  CurveSequence<float>::StartSequence(pCVar4,fVar7,(float *)(pZVar3 + 0x44));
                    /* WARNING: Load size is inaccurate */
  CurveSequence<float>::AddCurve(*(CurveSequence<float> **)(pZVar3 + 0x40),pCVar4,pZVar3 + 0x48,4);
  FUN_0473e66c(*(undefined4 *)(pZVar3 + 0x3c),*(undefined4 *)(pZVar3 + 0x50),pCVar4,pZVar3 + 0x54,2)
  ;
  iVar2 = BoardTransforms::GridToBoardSpaceX(0);
  fStack_1c = (float)iVar2 - *(float *)(pZVar3 + 0x58);
  std::string::string(asStack_10,"x");
  pCVar4 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  fVar7 = (float)ZombieZombossMech::GetZomboss_T(this_00);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_00);
  CurveSequence<float>::StartSequence(pCVar4,fVar7,pfVar5);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"x");
  uVar6 = CurveSequenceCollection<float>::operator[](psVar1);
                    /* WARNING: Load size is inaccurate */
  afStack_18[0] = *(float *)(pZVar3 + 0x4c) + *pfVar5;
  CurveSequence<float>::AddCurve(*(CurveSequence<float> **)(pZVar3 + 0x40),uVar6,afStack_18,4);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"x");
  uVar6 = CurveSequenceCollection<float>::operator[](psVar1);
                    /* WARNING: Load size is inaccurate */
  CurveSequence<float>::AddCurve(*(CurveSequence<float> **)(pZVar3 + 0x3c),uVar6,&fStack_1c,2);
  std::string::~string(asStack_10);
  nop();
  ZombieZombossMech::SetAnimRateModifier(this_00,*(float *)(pZVar3 + 0x50));
  this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ZombieAnimRig_ZombossMech::PlayRushForward((ZombieAnimRig_ZombossMech *)this_01);
  param_1[0x21] = (string)0x1;
  RealObject::PlayPositionalSound((RealObject *)this_00,(string *)(pZVar3 + 0x60),0.0);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler::onUpdateAction() */

void __thiscall ZombossSteamRushActionHandler::onUpdateAction(ZombossSteamRushActionHandler *this)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar4;
  undefined8 *puVar5;
  CurveSequence<float> *this_02;
  Zombie *extraout_x0;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar2 = (**(code **)(*(long *)this_01 + 0xa90))();
  if (cVar2 != '\0') goto LAB_0473fc84;
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar9 = (float)ZombieZombossMech::GetPlantfoodDamageCounterValue(this_01);
  fVar12 = *(float *)(pZVar4 + 0x38);
  fVar10 = (float)ZombieZombossMech::GetStunHpFactor(this_01);
  if (fVar9 <= fVar10 * fVar12) {
    if ((this[0x21] == (ZombossSteamRushActionHandler)0x0) ||
       (cVar2 = (**(code **)(*(long *)this + 0xa8))(this), cVar2 != '\0')) goto LAB_0473fc84;
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_01);
    uStack_30 = *puVar5;
    uStack_28 = *(undefined4 *)(puVar5 + 1);
    std::string::string((string *)&uStack_20,"x");
    this_02 = (CurveSequence<float> *)
              CurveSequenceCollection<float>::operator[]((string *)(this + 0x40));
    fVar9 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    uVar11 = CurveSequence<float>::operator[](this_02,fVar9);
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar11);
    std::string::~string((string *)&uStack_20);
    nop();
    (**(code **)(*(long *)this_01 + 0x78))(this_01,&uStack_30);
    cVar2 = ZombieZombossMech::IsPlantfoodedPlantUnderfoot(this_01);
    if (cVar2 == '\0') {
      bVar8 = 0;
      fVar9 = (float)ZombieZombossMech::GetZomboss_T(this_01);
      fVar9 = (float)CurveSequence<float>::GetValueAt((CurveSequence<float> *)(this + 0x28),fVar9);
      ZombieZombossMech::SetAnimRateModifier(this_01,fVar9);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_20);
      BoardEntity::CalcGridPosition();
      ZombieZombossMech::GatherEntitiesAtPosition(this_01,(string *)&uStack_20,1,auStack_38);
      uVar7 = 0;
      while( true ) {
        uVar1 = uStack_20;
        uVar6 = FUN_04735c1c(uStack_20,uStack_18);
        if (uVar6 <= uVar7) break;
        FUN_04735c28(uVar1,uVar7);
        nop();
        bVar3 = Plant::TryBlockZombossRush(extraout_x0);
        bVar8 = bVar3 | bVar8;
        uVar7 = uVar7 + 1;
      }
      if (bVar8 == 0) {
        ZombieZombossMech::StompEntitiesUnderfoot(this_01);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&uStack_20);
      }
      else {
        ZombieZombossMech::DoStun(this_01);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&uStack_20);
      }
      goto LAB_0473fc84;
    }
  }
  ZombieZombossMech::DoStun(this_01);
LAB_0473fc84:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamRushActionHandler::onEndAction() */

void __thiscall ZombossSteamRushActionHandler::onEndAction(ZombossSteamRushActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler::StaticClassInit() */

void ZombossSteamRushActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSteamRushActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_03c45150,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamRushActionHandler::StaticGetClass() */

long * ZombossSteamRushActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossRushActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRushActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSteamRushActionHandler::GetClass() const */

long * ZombossSteamRushActionHandler::GetClass(void)

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
  uVar2 = ZombossRushActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSteamRushActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler::HasFinishedCharge() */

void __thiscall
ZombossSteamRushActionHandler::HasFinishedCharge(ZombossSteamRushActionHandler *this)

{
  int iVar1;
  int iVar2;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x70);
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  iVar2 = *(int *)(extraout_x0 + 0x70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 <= iVar1);
}


/* ZombossSteamRushActionHandler::ZombossSteamRushActionHandler() */

void __thiscall
ZombossSteamRushActionHandler::ZombossSteamRushActionHandler(ZombossSteamRushActionHandler *this)

{
  ZombossRushActionHandler::ZombossRushActionHandler((ZombossRushActionHandler *)this);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined ***)this = &PTR_GetClass_067523e0;
  return;
}


/* ZombossSteamRushActionHandler::StaticNew() */

ZombossSteamRushActionHandler * ZombossSteamRushActionHandler::StaticNew(void)

{
  ZombossSteamRushActionHandler *this;
  
  this = ::operator_new(0x78);
  ZombossSteamRushActionHandler(this);
  return this;
}


/* ZombossSteamRushActionHandler::registerForEvents() */

void __thiscall
ZombossSteamRushActionHandler::registerForEvents(ZombossSteamRushActionHandler *this)

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
            ((ReceivedDataCallback *)this,onFreezeZombossRobot);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<GameObject*,float,Sexy::CBMemberTranslatorX<ZombossSteamRushActionHandler,void(ZombossSteamRushActionHandler::*)(GameObject*,float)>>
            ((MessageRouter *)puVar1,Message::FreezeZombossRobot,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler::onFreezeZombossRobot(GameObject*, float) */

void ZombossSteamRushActionHandler::onFreezeZombossRobot(GameObject *param_1,float param_2)

{
  char cVar1;
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = HasFinishedCharge((ZombossSteamRushActionHandler *)param_1);
  if (cVar1 == '\0') {
    this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
    this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onChargeFailAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_ZombossMech_Steam::PlayChargeFail
              ((ZombieAnimRig_ZombossMech_Steam *)pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler::onStartAction() */

void __thiscall ZombossSteamRushActionHandler::onStartAction(ZombossSteamRushActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  this[0x21] = (ZombossSteamRushActionHandler)0x0;
  ZombieZombossMech::ResetPlantfoodDamageCounter(this_01);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRushPrepareAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Steam::PlayPrepareRushStart
            ((ZombieAnimRig_ZombossMech_Steam *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler::startCharge() */

void __thiscall ZombossSteamRushActionHandler::startCharge(ZombossSteamRushActionHandler *this)

{
  undefined4 uVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  uVar1 = *(undefined4 *)(this + 0x70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onChargeAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Steam::PlayCharge
            ((ZombieAnimRig_ZombossMech_Steam *)pZVar2,uVar1,aRStack_50);
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
/* ZombossSteamRushActionHandler::onRushPrepareAnimDone(std::string const&) */

void ZombossSteamRushActionHandler::onRushPrepareAnimDone(string *param_1)

{
  undefined4 uVar1;
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onChargeAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Steam::PlayCharge
            ((ZombieAnimRig_ZombossMech_Steam *)pZVar2,uVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler::finishCharge() */

void __thiscall ZombossSteamRushActionHandler::finishCharge(ZombossSteamRushActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onChargeEndAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Steam::PlayChargeEnd
            ((ZombieAnimRig_ZombossMech_Steam *)pZVar1,aRStack_50);
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
/* ZombossSteamRushActionHandler::onChargeAnimDone(std::string const&) */

void ZombossSteamRushActionHandler::onChargeAnimDone(string *param_1)

{
  int iVar1;
  int iVar2;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  iVar2 = *(int *)(extraout_x0 + 0x70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (iVar1 + 1 == iVar2) {
    finishCharge((ZombossSteamRushActionHandler *)param_1);
  }
  else {
    startCharge((ZombossSteamRushActionHandler *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler::startRush() */

void __thiscall ZombossSteamRushActionHandler::startRush(ZombossSteamRushActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRushStartAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Steam::PlayRushStart
            ((ZombieAnimRig_ZombossMech_Steam *)pZVar1,aRStack_50);
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
/* ZombossSteamRushActionHandler::onChargeEndAnimDone(std::string const&) */

void ZombossSteamRushActionHandler::onChargeEndAnimDone(string *param_1)

{
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRushStartAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Steam::PlayRushStart
            ((ZombieAnimRig_ZombossMech_Steam *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSteamRushActionHandler::~ZombossSteamRushActionHandler() */

void __thiscall
ZombossSteamRushActionHandler::~ZombossSteamRushActionHandler(ZombossSteamRushActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_067523e0;
  ZombossRushActionHandler::~ZombossRushActionHandler((ZombossRushActionHandler *)this);
  return;
}


/* ZombossSteamRushActionHandler::~ZombossSteamRushActionHandler() */

void __thiscall
ZombossSteamRushActionHandler::~ZombossSteamRushActionHandler(ZombossSteamRushActionHandler *this)

{
  ~ZombossSteamRushActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSteamRushActionHandler::CheckRushingDone() */

void __thiscall ZombossSteamRushActionHandler::CheckRushingDone(ZombossSteamRushActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  CurveSequence<float> *this_02;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  std::string::string(asStack_58,"x");
  this_02 = (CurveSequence<float> *)
            CurveSequenceCollection<float>::operator[]((string *)(this + 0x40));
  fVar3 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  cVar1 = CurveSequence<float>::IsTimeInSequence(this_02,fVar3);
  std::string::~string(asStack_58);
  nop();
  if (cVar1 == '\0') {
    this[0x21] = (ZombossSteamRushActionHandler)0x0;
    pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onRushEndAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_ZombossMech_Steam::PlayRushEnd
              ((ZombieAnimRig_ZombossMech_Steam *)pZVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 == '\0');
}


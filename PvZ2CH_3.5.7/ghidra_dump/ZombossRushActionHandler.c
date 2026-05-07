// Class: ZombossRushActionHandler


/* ZombossRushActionHandler::ZombossRushActionHandler() */

void __thiscall ZombossRushActionHandler::ZombossRushActionHandler(ZombossRushActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  this[0x21] = (ZombossRushActionHandler)0x0;
  *(undefined ***)this = &PTR_GetClass_068c6420;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x28));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x40));
  return;
}


/* ZombossRushActionHandler::~ZombossRushActionHandler() */

void __thiscall ZombossRushActionHandler::~ZombossRushActionHandler(ZombossRushActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c6420;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x40));
  CurveSequence<float>::~CurveSequence((CurveSequence<float> *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossRushActionHandler::~ZombossRushActionHandler() */

void __thiscall ZombossRushActionHandler::~ZombossRushActionHandler(ZombossRushActionHandler *this)

{
  ~ZombossRushActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRushActionHandler::StaticClassInit() */

void ZombossRushActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossRushActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0473973c,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossRushActionHandler::StaticGetClass() */

long * ZombossRushActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRushActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRushActionHandler::GetClass() const */

long * ZombossRushActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossRushActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossRushActionHandler::StaticNew() */

ZombossRushActionHandler * ZombossRushActionHandler::StaticNew(void)

{
  ZombossRushActionHandler *this;
  
  this = ::operator_new(0x70);
  ZombossRushActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRushActionHandler::onStartAction() */

void __thiscall ZombossRushActionHandler::onStartAction(ZombossRushActionHandler *this)

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
  this[0x21] = (ZombossRushActionHandler)0x0;
  ZombieZombossMech::ResetPlantfoodDamageCounter(this_01);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRushStompAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech::PlayStomp((ZombieAnimRig_ZombossMech *)pZVar1,aRStack_50);
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
/* ZombossRushActionHandler::startRushForward() */

void __thiscall ZombossRushActionHandler::startRushForward(ZombossRushActionHandler *this)

{
  string *psVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar3;
  CurveSequence<float> *pCVar4;
  float *pfVar5;
  undefined8 uVar6;
  ZombieHydraHeadAnimRig *this_02;
  float fVar7;
  float local_1c;
  float local_18 [2];
  string asStack_10 [8];
  long local_8;
  
  pCVar4 = (CurveSequence<float> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)(this + 0x40);
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar7 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  CurveSequence<float>::StartSequence(pCVar4,fVar7,(float *)(pZVar3 + 0x44));
                    /* WARNING: Load size is inaccurate */
  CurveSequence<float>::AddCurve(*(CurveSequence<float> **)(pZVar3 + 0x40),pCVar4,pZVar3 + 0x48,4);
  FUN_0473e66c(*(undefined4 *)(pZVar3 + 0x3c),*(undefined4 *)(pZVar3 + 0x50),pCVar4,pZVar3 + 0x54,2)
  ;
  iVar2 = BoardTransforms::GridToBoardSpaceX(0);
  local_1c = (float)iVar2 - *(float *)(pZVar3 + 0x58);
  std::string::string(asStack_10,"x");
  pCVar4 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  fVar7 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_01);
  CurveSequence<float>::StartSequence(pCVar4,fVar7,pfVar5);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"x");
  uVar6 = CurveSequenceCollection<float>::operator[](psVar1);
                    /* WARNING: Load size is inaccurate */
  local_18[0] = *(float *)(pZVar3 + 0x4c) + *pfVar5;
  CurveSequence<float>::AddCurve(*(CurveSequence<float> **)(pZVar3 + 0x40),uVar6,local_18,4);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"x");
  uVar6 = CurveSequenceCollection<float>::operator[](psVar1);
                    /* WARNING: Load size is inaccurate */
  CurveSequence<float>::AddCurve(*(CurveSequence<float> **)(pZVar3 + 0x3c),uVar6,&local_1c,2);
  std::string::~string(asStack_10);
  nop();
  ZombieZombossMech::SetAnimRateModifier(this_01,*(float *)(pZVar3 + 0x50));
  this_02 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ZombieAnimRig_ZombossMech::PlayRushForward((ZombieAnimRig_ZombossMech *)this_02);
  this[0x21] = (ZombossRushActionHandler)0x1;
  RealObject::PlayPositionalSound((RealObject *)this_01,(string *)(pZVar3 + 0x60),0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRushActionHandler::onRushStompAnimDone(std::string const&) */

void ZombossRushActionHandler::onRushStompAnimDone(string *param_1)

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
/* ZombossRushActionHandler::CheckRushingDone() */

void __thiscall ZombossRushActionHandler::CheckRushingDone(ZombossRushActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  CurveSequence<float> *this_02;
  float fVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  std::string::string(asStack_10,"x");
  this_02 = (CurveSequence<float> *)
            CurveSequenceCollection<float>::operator[]((string *)(this + 0x40));
  fVar2 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  cVar1 = CurveSequence<float>::IsTimeInSequence(this_02,fVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this_01 + 0xa80))(this_01,0x24);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 == '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossRushActionHandler::onUpdateAction() */

void __thiscall ZombossRushActionHandler::onUpdateAction(ZombossRushActionHandler *this)

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
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar2 = (**(code **)(*(long *)this_01 + 0xa90))();
  if (cVar2 != '\0') goto LAB_0473fc84;
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar9 = (float)ZombieZombossMech::GetPlantfoodDamageCounterValue(this_01);
  fVar12 = *(float *)(pZVar4 + 0x38);
  fVar10 = (float)ZombieZombossMech::GetStunHpFactor(this_01);
  if (fVar9 <= fVar10 * fVar12) {
    if ((this[0x21] == (ZombossRushActionHandler)0x0) ||
       (cVar2 = (**(code **)(*(long *)this + 0xa8))(this), cVar2 != '\0')) goto LAB_0473fc84;
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_01);
    local_30 = *puVar5;
    local_28 = *(undefined4 *)(puVar5 + 1);
    std::string::string((string *)&local_20,"x");
    this_02 = (CurveSequence<float> *)
              CurveSequenceCollection<float>::operator[]((string *)(this + 0x40));
    fVar9 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    uVar11 = CurveSequence<float>::operator[](this_02,fVar9);
    local_30 = CONCAT44(local_30._4_4_,uVar11);
    std::string::~string((string *)&local_20);
    nop();
    (**(code **)(*(long *)this_01 + 0x78))(this_01,&local_30);
    cVar2 = ZombieZombossMech::IsPlantfoodedPlantUnderfoot(this_01);
    if (cVar2 == '\0') {
      bVar8 = 0;
      fVar9 = (float)ZombieZombossMech::GetZomboss_T(this_01);
      fVar9 = (float)CurveSequence<float>::GetValueAt((CurveSequence<float> *)(this + 0x28),fVar9);
      ZombieZombossMech::SetAnimRateModifier(this_01,fVar9);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      BoardEntity::CalcGridPosition();
      ZombieZombossMech::GatherEntitiesAtPosition(this_01,(string *)&local_20,1,auStack_38);
      uVar7 = 0;
      while( true ) {
        uVar1 = local_20;
        uVar6 = FUN_04735c1c(local_20,local_18);
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
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      }
      else {
        ZombieZombossMech::DoStun(this_01);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      }
      goto LAB_0473fc84;
    }
  }
  ZombieZombossMech::DoStun(this_01);
LAB_0473fc84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


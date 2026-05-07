// Class: ZombossJumpActionHandler


/* ZombossJumpActionHandler::SetJumpTarget(Sexy::Point const&) */

void __thiscall
ZombossJumpActionHandler::SetJumpTarget(ZombossJumpActionHandler *this,Point *param_1)

{
  *(undefined8 *)(this + 0x58) = *(undefined8 *)param_1;
  return;
}


/* ZombossJumpActionHandler::onLanding() */

void ZombossJumpActionHandler::onLanding(void)

{
  return;
}


/* ZombossJumpActionHandler::ZombossJumpActionHandler() */

void __thiscall ZombossJumpActionHandler::ZombossJumpActionHandler(ZombossJumpActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c5ff0;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x28));
  Sexy::Point::Point((Point *)(this + 0x58),-1,-1);
  this[0x60] = (ZombossJumpActionHandler)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 100) = uVar1;
  return;
}


/* ZombossJumpActionHandler::~ZombossJumpActionHandler() */

void __thiscall ZombossJumpActionHandler::~ZombossJumpActionHandler(ZombossJumpActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c5ff0;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossJumpActionHandler::~ZombossJumpActionHandler() */

void __thiscall ZombossJumpActionHandler::~ZombossJumpActionHandler(ZombossJumpActionHandler *this)

{
  ~ZombossJumpActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossJumpActionHandler::StaticClassInit() */

void ZombossJumpActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossJumpActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04738640,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossJumpActionHandler::StaticGetClass() */

long * ZombossJumpActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossJumpActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossJumpActionHandler::GetClass() const */

long * ZombossJumpActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossJumpActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossJumpActionHandler::onEndAction() */

void __thiscall ZombossJumpActionHandler::onEndAction(ZombossJumpActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *this_01;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossJumpActionHandler::onJumpStartAnimDone(std::string const&) */

void ZombossJumpActionHandler::onJumpStartAnimDone(string *param_1)

{
  long lVar1;
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombieHydraHeadAnimRig *pZVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  ZombieAnimRig_ZombossMech::PlayJumpMid((ZombieAnimRig_ZombossMech *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_00);
  lVar1 = ___stack_chk_guard;
  param_1[0x60] = (string)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossJumpActionHandler::StaticNew() */

ZombossJumpActionHandler * ZombossJumpActionHandler::StaticNew(void)

{
  ZombossJumpActionHandler *this;
  
  this = ::operator_new(0x68);
  ZombossJumpActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossJumpActionHandler::onUpdateAction() */

void __thiscall ZombossJumpActionHandler::onUpdateAction(ZombossJumpActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  CurveSequence<float> *this_02;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  ZombieZombossMech::UpdatePositionFromCurve(this_01,(CurveSequenceCollection *)(this + 0x28));
  if (this[0x60] == (ZombossJumpActionHandler)0x0) {
LAB_0473f118:
    fVar3 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    if ((*(float *)(this + 100) < fVar3) &&
       (cVar1 = ZombieZombossMech::IsPlantfoodedPlantUnderfoot(this_01), cVar1 != '\0')) {
      ZombieZombossMech::DoStun(this_01);
      goto LAB_0473f188;
    }
  }
  else {
    fVar3 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    if (*(float *)(this + 100) < fVar3) {
      pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      ZombieAnimRig_ZombossMech::PlayJumpLand((ZombieAnimRig_ZombossMech *)pZVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
      ZombieZombossMech::StompEntitiesUnderfoot(this_01);
      this[0x60] = (ZombossJumpActionHandler)0x0;
      if (*(code **)(*(long *)this + 0xa8) == onLanding) goto LAB_0473f118;
      (**(code **)(*(long *)this + 0xa8))(this);
    }
    if (this[0x60] == (ZombossJumpActionHandler)0x0) goto LAB_0473f118;
  }
  std::string::string(asStack_58,"x");
  this_02 = (CurveSequence<float> *)
            CurveSequenceCollection<float>::operator[]((string *)(this + 0x28));
  fVar3 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  cVar1 = CurveSequence<float>::IsTimeInSequence(this_02,fVar3);
  std::string::~string(asStack_58);
  nop();
  if (cVar1 == '\0') {
    ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  }
LAB_0473f188:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossJumpActionHandler::appendJumpCurve(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&,
   float, float, float, float, CurveSequenceCollection<float>&) const */

void __thiscall
ZombossJumpActionHandler::appendJumpCurve
          (ZombossJumpActionHandler *this,SexyVector3 *param_1,SexyVector3 *param_2,float param_3,
          float param_4,float param_5,float param_6,CurveSequenceCollection *param_7)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float local_54 [3];
  DVec3 aDStack_48 [8];
  float local_40;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = param_4;
  fVar3 = param_5;
  local_54[0] = param_3;
  DVec3::DVec3(aDStack_48);
  local_38 = Sexy::SexyVector3::operator-(param_2,param_1);
  local_34 = fVar2;
  local_30 = fVar3;
  local_28 = Sexy::SexyVector3::operator/((SexyVector3 *)&local_38,2.0);
  local_24 = fVar2;
  local_20 = fVar3;
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_28,param_1);
  local_14 = fVar2;
  local_10 = fVar3;
  Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_48,(SexyVector3 *)&local_18);
  local_40 = local_54[0];
  std::string::string((string *)&local_18,"x");
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_4,uVar1,param_1,0);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"x");
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_5,uVar1,param_2,1);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"x");
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_6,uVar1,param_2,0);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"y");
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_4,uVar1,param_1 + 4,0);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"y");
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_5,uVar1,param_2 + 4,1);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"y");
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_6,uVar1,param_2 + 4,0);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"z");
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_4,uVar1,param_1 + 8,0);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"z");
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)(param_5 * 0.5),uVar1,local_54,3);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"z");
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)(param_5 * 0.5),uVar1,param_2 + 8,2);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string((string *)&local_18,"z");
  uVar1 = CurveSequenceCollection<float>::operator[]((string *)param_7);
  CurveSequence<float>::AddCurve((CurveSequence<float> *)param_6,uVar1,param_2 + 8,0);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossJumpActionHandler::buildJumpCurve(Sexy::SexyVector3 const&, Sexy::SexyVector3 const&,
   float, float, float, float, float, CurveSequenceCollection<float>&) const */

void __thiscall
ZombossJumpActionHandler::buildJumpCurve
          (ZombossJumpActionHandler *this,SexyVector3 *param_1,SexyVector3 *param_2,float param_3,
          float param_4,float param_5,float param_6,float param_7,CurveSequenceCollection *param_8)

{
  CurveSequence<float> *pCVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CurveSequenceCollection<float>::Clear((CurveSequenceCollection<float> *)param_8);
  std::string::string(asStack_10,"x");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)param_8);
  CurveSequence<float>::StartSequence(pCVar1,param_4,(float *)param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"y");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)param_8);
  CurveSequence<float>::StartSequence(pCVar1,param_4,(float *)(param_1 + 4));
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"z");
  pCVar1 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[]((string *)param_8);
  CurveSequence<float>::StartSequence(pCVar1,param_4,(float *)(param_1 + 8));
  std::string::~string(asStack_10);
  nop();
  appendJumpCurve(this,param_1,param_2,param_3,param_5,param_6,param_7,param_8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossJumpActionHandler::onStartAction() */

void __thiscall ZombossJumpActionHandler::onStartAction(ZombossJumpActionHandler *this)

{
  long lVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar3;
  ZombieHydraHeadAnimRig *this_02;
  char *pcVar4;
  SexyVector3 *pSVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  float local_60;
  float local_5c;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_02 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)&local_60,"onJumpStartAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             (string *)&local_60);
  ZombieAnimRig_ZombossMech::PlayJumpStart((ZombieAnimRig_ZombossMech *)this_02,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  ZombieZombossMech::SetAnimRateModifier(this_01,*(float *)(pZVar3 + 0x40));
  DVec3::DVec3((DVec3 *)&local_60);
  iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x58));
  local_60 = (float)iVar2;
  iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x5c));
  local_5c = (float)iVar2;
  pcVar4 = (char *)(**(code **)(*(long *)this_02 + 0x2d8))(this_02);
  std::string::string((string *)aRStack_68,pcVar4);
  fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_02,(string *)aRStack_68);
  std::string::~string((string *)aRStack_68);
  nop();
  pcVar4 = (char *)(**(code **)(*(long *)this_02 + 0x2e8))(this_02);
  std::string::string((string *)aRStack_68,pcVar4);
  fVar7 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_02,(string *)aRStack_68);
  std::string::~string((string *)aRStack_68);
  nop();
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_01);
  fVar9 = *(float *)(pZVar3 + 0x38);
  fVar8 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  buildJumpCurve(this,pSVar5,(SexyVector3 *)&local_60,fVar9,fVar8,fVar6,*(float *)(pZVar3 + 0x3c),
                 fVar7,(CurveSequenceCollection *)(this + 0x28));
  fVar7 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  lVar1 = ___stack_chk_guard;
  fVar8 = *(float *)(pZVar3 + 0x3c);
  this[0x60] = (ZombossJumpActionHandler)0x0;
  *(float *)(this + 100) = fVar6 + fVar7 + fVar8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


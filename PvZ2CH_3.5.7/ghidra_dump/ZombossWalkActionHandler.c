// Class: ZombossWalkActionHandler


/* ZombossWalkActionHandler::ZombossWalkActionHandler() */

void __thiscall ZombossWalkActionHandler::ZombossWalkActionHandler(ZombossWalkActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c5e90;
  Sexy::Point::Point((Point *)(this + 0x24));
  *(undefined4 *)(this + 0x2c) = 0;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x30));
  return;
}


/* ZombossWalkActionHandler::~ZombossWalkActionHandler() */

void __thiscall ZombossWalkActionHandler::~ZombossWalkActionHandler(ZombossWalkActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c5e90;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x30));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossWalkActionHandler::~ZombossWalkActionHandler() */

void __thiscall ZombossWalkActionHandler::~ZombossWalkActionHandler(ZombossWalkActionHandler *this)

{
  ~ZombossWalkActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossWalkActionHandler::StaticClassInit() */

void ZombossWalkActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossWalkActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04738328,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossWalkActionHandler::StaticGetClass() */

long * ZombossWalkActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossWalkActionHandler::GetClass() const */

long * ZombossWalkActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossWalkActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossWalkActionHandler::SetWalkTarget(Sexy::Point const&, ZombossWalkDirection) */

void __thiscall
ZombossWalkActionHandler::SetWalkTarget
          (ZombossWalkActionHandler *this,undefined8 *param_1,undefined4 param_3)

{
  *(undefined8 *)(this + 0x24) = *param_1;
  *(undefined4 *)(this + 0x2c) = param_3;
  return;
}


/* ZombossWalkActionHandler::StaticNew() */

ZombossWalkActionHandler * ZombossWalkActionHandler::StaticNew(void)

{
  ZombossWalkActionHandler *this;
  
  this = ::operator_new(0x60);
  ZombossWalkActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossWalkActionHandler::onStartAction() */

void __thiscall ZombossWalkActionHandler::onStartAction(ZombossWalkActionHandler *this)

{
  undefined4 uVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar3;
  PopAnimRig *this_02;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  ZombossHydraSprayActionHandler *pZVar8;
  string asStack_68 [8];
  float local_60;
  float local_5c;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_60);
  iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x24));
  local_60 = (float)iVar2;
  iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x28));
  local_5c = (float)iVar2;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  uVar1 = *(undefined4 *)(this + 0x2c);
  pcVar5 = *(code **)(*(long *)pZVar3 + 0x270);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar5)(pZVar3,uVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  this_02 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this_01);
  Zombie::GetAnimRig((Zombie *)this_01);
  PopAnimRig::CalcPlayingAnimLabelName();
  fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds(this_02,asStack_68);
  std::string::~string(asStack_68);
  fVar7 = (float)ZombieZombossMech::GetZomboss_T_Modifier(this_01);
  uVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this_01);
  pZVar8._0_4_ = (ZombossHydraSprayActionHandler *)ZombieZombossMech::GetZomboss_T(this_01);
  ZombossHydraSprayActionHandler::buildWalkCurve
            (pZVar8._0_4_,fVar7 * fVar6,this,uVar4,(DVec3 *)&local_60,4,this + 0x30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossWalkActionHandler::onUpdateAction() */

void __thiscall ZombossWalkActionHandler::onUpdateAction(ZombossWalkActionHandler *this)

{
  string *psVar1;
  char cVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  CurveSequence<float> *pCVar3;
  float fVar4;
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar2 = (**(code **)(*(long *)this_01 + 0xa90))();
  if (cVar2 == '\0') {
    DVec3::DVec3((DVec3 *)&local_18);
    psVar1 = (string *)(this + 0x30);
    std::string::string(asStack_20,"x");
    pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    fVar4 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    local_18 = CurveSequence<float>::operator[](pCVar3,fVar4);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_20,"y");
    pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    fVar4 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    local_14 = CurveSequence<float>::operator[](pCVar3,fVar4);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_20,"z");
    pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    fVar4 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    local_10 = CurveSequence<float>::operator[](pCVar3,fVar4);
    std::string::~string(asStack_20);
    nop();
    (**(code **)(*(long *)this_01 + 0x78))(this_01,(DVec3 *)&local_18);
    cVar2 = ZombieZombossMech::IsPlantfoodedPlantUnderfoot(this_01);
    if (cVar2 == '\0') {
      ZombieZombossMech::KillEntitiesUnderfoot(this_01);
      std::string::string(asStack_20,"x");
      pCVar3 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
      fVar4 = (float)ZombieZombossMech::GetZomboss_T(this_01);
      cVar2 = CurveSequence<float>::IsTimeInSequence(pCVar3,fVar4);
      std::string::~string(asStack_20);
      nop();
      if (cVar2 == '\0') {
        ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
      }
    }
    else {
      ZombieZombossMech::DoStun(this_01);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


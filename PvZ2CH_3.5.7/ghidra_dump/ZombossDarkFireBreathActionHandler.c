// Class: ZombossDarkFireBreathActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkFireBreathActionHandler::StaticClassInit() */

void ZombossDarkFireBreathActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossDarkFireBreathActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04720fb8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDarkFireBreathActionHandler::StaticGetClass() */

long * ZombossDarkFireBreathActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDarkFireBreathActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDarkFireBreathActionHandler::GetClass() const */

long * ZombossDarkFireBreathActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDarkFireBreathActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDarkFireBreathActionHandler::onFireBreathEndEnded(std::string const&) */

void ZombossDarkFireBreathActionHandler::onFireBreathEndEnded(string *param_1)

{
  RtObject *this;
  ZombieZombossMech *pZVar1;
  
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  pZVar1 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  (**(code **)(*(long *)pZVar1 + 0xa80))(pZVar1,0x24);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkFireBreathActionHandler::spawnFireAt(Sexy::Point) */

void __thiscall
ZombossDarkFireBreathActionHandler::spawnFireAt
          (ZombossDarkFireBreathActionHandler *this,TPoint *param_2)

{
  RtObject *this_00;
  ZombieZombossMech *pZVar1;
  GridSquareCoveringFlame *pGVar2;
  ZombossHydraSprayActionDefinition *pZVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar1 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pGVar2 = GameObject::Create<GridSquareCoveringFlame>();
  Sexy::Point::Point(aPStack_10,param_2);
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
                    /* WARNING: Load size is inaccurate */
  GridSquareCoveringFlame::StartFlameImpactEffect
            (*(GridSquareCoveringFlame **)(pZVar3 + 0x38),pGVar2,aPStack_10,pZVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDarkFireBreathActionHandler::ZombossDarkFireBreathActionHandler() */

void __thiscall
ZombossDarkFireBreathActionHandler::ZombossDarkFireBreathActionHandler
          (ZombossDarkFireBreathActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c1710;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x28));
  this[0x5c] = (ZombossDarkFireBreathActionHandler)0x0;
  this[0x5d] = (ZombossDarkFireBreathActionHandler)0x0;
  *(undefined4 *)(this + 0x58) = 10;
  return;
}


/* ZombossDarkFireBreathActionHandler::StaticNew() */

ZombossDarkFireBreathActionHandler * ZombossDarkFireBreathActionHandler::StaticNew(void)

{
  ZombossDarkFireBreathActionHandler *this;
  
  this = ::operator_new(0x60);
  ZombossDarkFireBreathActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkFireBreathActionHandler::onStartAction() */

void __thiscall
ZombossDarkFireBreathActionHandler::onStartAction(ZombossDarkFireBreathActionHandler *this)

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
  ZombieZombossMech::ResetPlantfoodDamageCounter(this_01);
  this[0x5c] = (ZombossDarkFireBreathActionHandler)0x0;
  this[0x5d] = (ZombossDarkFireBreathActionHandler)0x0;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFireBreathStartEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathStart
            ((ZombieAnimRig_ZombossMech_Hydra *)pZVar1,aRStack_50);
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


/* ZombossDarkFireBreathActionHandler::~ZombossDarkFireBreathActionHandler() */

void __thiscall
ZombossDarkFireBreathActionHandler::~ZombossDarkFireBreathActionHandler
          (ZombossDarkFireBreathActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c1710;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossDarkFireBreathActionHandler::~ZombossDarkFireBreathActionHandler() */

void __thiscall
ZombossDarkFireBreathActionHandler::~ZombossDarkFireBreathActionHandler
          (ZombossDarkFireBreathActionHandler *this)

{
  ~ZombossDarkFireBreathActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkFireBreathActionHandler::onFireBreathStartEnded(std::string const&) */

void ZombossDarkFireBreathActionHandler::onFireBreathStartEnded(string *param_1)

{
  RtObject *this;
  ZombieZombossMech *this_00;
  CurveSequence<float> *this_01;
  ZombossHydraSprayActionDefinition *pZVar1;
  ZombieHydraHeadAnimRig *this_02;
  float fVar2;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  *(undefined4 *)(param_1 + 0x58) = 9;
  std::string::string((string *)local_10,"firedistance");
  this_01 = (CurveSequence<float> *)
            CurveSequenceCollection<float>::Get
                      ((CurveSequenceCollection<float> *)(param_1 + 0x28),(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  fVar2 = (float)ZombieZombossMech::GetZomboss_T(this_00);
  local_10[0] = 0;
  CurveSequence<float>::StartSequence(this_01,fVar2,(float *)local_10);
  local_10[0] = 0x43fa0000;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  FUN_047250d4(*(undefined4 *)(pZVar1 + 0x3c),this_01,(string *)local_10);
  param_1[0x5c] = (string)0x1;
  this_02 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
  ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathLoop((ZombieAnimRig_ZombossMech_Hydra *)this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkFireBreathActionHandler::onUpdateAction() */

void __thiscall
ZombossDarkFireBreathActionHandler::onUpdateAction(ZombossDarkFireBreathActionHandler *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar3;
  CurveSequence<float> *this_02;
  ZombieHydraHeadAnimRig *pZVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Point aPStack_70 [4];
  int local_6c;
  Point aPStack_68 [8];
  int local_60;
  int local_5c;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar1 = (**(code **)(*(long *)this_01 + 0xa90))();
  if (cVar1 == '\0') {
    fVar5 = (float)ZombieZombossMech::GetPlantfoodDamageCounterValue(this_01);
    pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    fVar7 = *(float *)(pZVar3 + 0x40);
    fVar6 = (float)ZombieZombossMech::GetStunHpFactor(this_01);
    if (fVar6 * fVar7 < fVar5) {
      ZombieZombossMech::DoStun(this_01);
    }
    else if ((this[0x5c] != (ZombossDarkFireBreathActionHandler)0x0) &&
            (this[0x5d] == (ZombossDarkFireBreathActionHandler)0x0)) {
      std::string::string((string *)&local_60,"firedistance");
      this_02 = (CurveSequence<float> *)
                CurveSequenceCollection<float>::operator[]((string *)(this + 0x28));
      std::string::~string((string *)&local_60);
      nop();
      fVar5 = (float)ZombieZombossMech::GetZomboss_T(this_01);
      cVar1 = CurveSequence<float>::IsTimeInSequence(this_02,fVar5);
      if (cVar1 == '\0') {
        this[0x5d] = (ZombossDarkFireBreathActionHandler)0x1;
        pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aPStack_70);
        std::string::string((string *)&local_60,"onFireBreathEndEnded");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aPStack_68,(string *)&local_60);
        ZombieAnimRig_ZombossMech_Hydra::PlayFireBreathEnd
                  ((ZombieAnimRig_ZombossMech_Hydra *)pZVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)&local_60);
        nop();
        Sexy::RtId::~RtId((RtId *)aPStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_70)
        ;
      }
      else {
        fVar5 = (float)ZombieZombossMech::GetZomboss_T(this_01);
        fVar5 = (float)CurveSequence<float>::operator[](this_02,fVar5);
        if (0.0 < fVar5) {
          (**(code **)(*(long *)this_01 + 400))((string *)&local_60,this_01);
          iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar2 = (int)((float)local_60 - fVar5 / (float)iVar2);
          if ((iVar2 < *(int *)(this + 0x58)) && (*(int *)(this + 0x58) = iVar2, -1 < iVar2)) {
            Sexy::Point::Point(aPStack_70,iVar2,local_5c);
            Sexy::Point::Point(aPStack_68,(TPoint *)aPStack_70);
            spawnFireAt(this,aPStack_68);
            local_6c = local_6c + 1;
            Sexy::Point::Point(aPStack_68,(TPoint *)aPStack_70);
            spawnFireAt(this,aPStack_68);
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


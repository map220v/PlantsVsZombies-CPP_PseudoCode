// Class: ZombieZombossMech_Dark


/* ZombieZombossMech_Dark::onMagnetStunEndAnimDone(std::string const&) */

void ZombieZombossMech_Dark::onMagnetStunEndAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0xa80))(param_1,0x24);
  return;
}


/* ZombieZombossMech_Dark::~ZombieZombossMech_Dark() */

void __thiscall ZombieZombossMech_Dark::~ZombieZombossMech_Dark(ZombieZombossMech_Dark *this)

{
  *(undefined ***)this = &PTR_GetClass_068c1b20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Dark_068c26f8;
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Dark::~ZombieZombossMech_Dark() */

void __thiscall ZombieZombossMech_Dark::~ZombieZombossMech_Dark(ZombieZombossMech_Dark *this)

{
  ~ZombieZombossMech_Dark(this + -0x10);
  return;
}


/* ZombieZombossMech_Dark::~ZombieZombossMech_Dark() */

void __thiscall ZombieZombossMech_Dark::~ZombieZombossMech_Dark(ZombieZombossMech_Dark *this)

{
  ~ZombieZombossMech_Dark(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_Dark::~ZombieZombossMech_Dark() */

void __thiscall ZombieZombossMech_Dark::~ZombieZombossMech_Dark(ZombieZombossMech_Dark *this)

{
  ~ZombieZombossMech_Dark(this + -0x10);
  return;
}


/* ZombieZombossMech_Dark::ZombieZombossMech_Dark() */

void __thiscall ZombieZombossMech_Dark::ZombieZombossMech_Dark(ZombieZombossMech_Dark *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  this[0x960] = (ZombieZombossMech_Dark)0x0;
  this[0x961] = (ZombieZombossMech_Dark)0x0;
  *(undefined ***)this = &PTR_GetClass_068c1b20;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_Dark_068c26f8;
  return;
}


/* ZombieZombossMech_Dark::StaticNew() */

ZombieZombossMech_Dark * ZombieZombossMech_Dark::StaticNew(void)

{
  ZombieZombossMech_Dark *this;
  
  this = ::operator_new(0x968);
  ZombieZombossMech_Dark(this);
  return this;
}


/* ZombieZombossMech_Dark::onMagnetStunAnimDone(std::string const&) */

void ZombieZombossMech_Dark::onMagnetStunAnimDone(string *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  param_1[0x960] = (string)0x0;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedLoop((ZombieAnimRig_ZombossMech_Hydra *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Dark::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieZombossMech_Dark::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  GridSquareCoveringFlame *pGVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  GridSquareCoveringFlame *pGVar10;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar3 = std::operator==(param_4,"intro_roar");
  if (bVar3) {
    iVar6 = 6;
    iVar7 = 3;
    fVar9 = 0.5;
  }
  else {
    bVar3 = std::operator==(param_4,"intro_flyover");
    if (bVar3) {
      iVar6 = 10;
      iVar7 = -5;
      fVar9 = 2.0;
    }
    else {
      bVar3 = std::operator==(param_4,"hit_ground");
      if (!bVar3) {
        bVar3 = std::operator==(param_4,"back_columns_flamed");
        if (bVar3) {
          lVar4 = *(long *)(gLawnApp + 0x9f0);
          iVar7 = *(int *)(lVar4 + 0xf8);
          iVar2 = iVar7 + -2;
          iVar6 = iVar2;
          while( true ) {
            if (0 < *(int *)(lVar4 + 0xfc)) {
              pGVar10._0_4_ = (GridSquareCoveringFlame *)PVZ_EOT();
              iVar8 = 0;
              if (iVar6 == iVar2) {
                do {
                  pGVar5 = GameObject::Create<GridSquareCoveringFlame>();
                  iVar1 = iVar8 + 1;
                  Sexy::Point::Point(aPStack_10,iVar2,iVar8);
                  GridSquareCoveringFlame::StartScorchEffect(pGVar10._0_4_,pGVar5,aPStack_10,0,2);
                  iVar8 = iVar1;
                } while (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
              }
              else {
                do {
                  pGVar5 = GameObject::Create<GridSquareCoveringFlame>();
                  iVar1 = iVar8 + 1;
                  Sexy::Point::Point(aPStack_10,iVar6,iVar8);
                  GridSquareCoveringFlame::StartScorchEffect(pGVar10._0_4_,pGVar5,aPStack_10,0,1);
                  iVar8 = iVar1;
                } while (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
              }
            }
            iVar6 = iVar6 + 1;
            if (iVar6 == iVar7) break;
            lVar4 = *(long *)(gLawnApp + 0x9f0);
          }
        }
        goto LAB_047216fc;
      }
      iVar6 = 5;
      iVar7 = -5;
      fVar9 = 0.2;
    }
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),iVar6,iVar7,fVar9);
LAB_047216fc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Dark::onEnterState_MagnetStun(ZombieState) */

void ZombieZombossMech_Dark::onEnterState_MagnetStun(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  long lVar2;
  Zombie *pZVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  param_1[0x960] = (Zombie)0x1;
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onMagnetStunAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedStart
            ((ZombieAnimRig_ZombossMech_Hydra *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pZVar3._0_4_ = (Zombie *)PVZ_EOT();
  Zombie::ApplyCondition(pZVar3._0_4_,0,param_1,0x20,1);
  lVar2 = ZombieZombossMech::getActiveStage((ZombieZombossMech *)param_1);
  Zombie::SetDamageScale(param_1,*(float *)(lVar2 + 0x2c));
  (**(code **)(*(long *)param_1 + 0xae8))(param_1);
  ZombieZombossMech::buildStunColorCurve((ZombieZombossMech *)param_1);
  param_1[0x961] = (Zombie)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Dark::canBeMagnetStunned() */

void __thiscall ZombieZombossMech_Dark::canBeMagnetStunned(ZombieZombossMech_Dark *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtObject *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((DAT_06b21b60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b21b60), iVar3 != 0)) {
    std::vector<ZombossMechState,std::allocator<ZombossMechState>>::vector<ZombossMechState*,void>
              ((ZombossMechState *)&DAT_06b21b00,(ZombossMechState *)&DAT_06a88ab0,
               (allocator *)gDefTrackEaseSymbols);
    __cxa_guard_release(&DAT_06b21b60);
    __cxa_atexit(std::vector<ZombossMechState,std::allocator<ZombossMechState>>::~vector,
                 &DAT_06b21b00,&DAT_06a88000);
  }
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&DAT_06b21b00);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&DAT_06b21b00);
  Zombie::getZombieStateSerialization((Zombie *)this);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<ZombossMechState*,std::vector<ZombossMechState,std::allocator<ZombossMechState>>>,ZombieState>
                       (uVar4,uVar5);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06b21b00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  bVar2 = false;
  if (!bVar1) {
    this_00 = (RtObject *)ZombieWithActions::getCurrentAction((ZombieWithActions *)this);
    if (this_00 == (RtObject *)0x0) {
      bVar2 = true;
    }
    else {
      bVar2 = Sexy::RtObject::IsA<ZombossJumpActionHandler>(this_00);
      bVar2 = !bVar2;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Dark::updateState_MagnetStun() */

void __thiscall ZombieZombossMech_Dark::updateState_MagnetStun(ZombieZombossMech_Dark *this)

{
  char cVar1;
  CurveSequenceCollection *pCVar2;
  CurveSequence<Sexy::Color> *pCVar3;
  PopAnimRig *pPVar4;
  ZombieZombossMechDarkProps *pZVar5;
  ZombieHydraHeadAnimRig *pZVar6;
  float fVar7;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  Color aCStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar2 = (CurveSequenceCollection *)ZombieZombossMech::getMovementCurve((ZombieZombossMech *)this)
  ;
  ZombieZombossMech::UpdatePositionFromCurve((ZombieZombossMech *)this,pCVar2);
  pCVar3 = (CurveSequence<Sexy::Color> *)ZombieZombossMech::getColorCurve((ZombieZombossMech *)this)
  ;
  fVar7 = (float)ZombieZombossMech::GetZomboss_T((ZombieZombossMech *)this);
  cVar1 = CurveSequence<Sexy::Color>::IsTimeInSequence(pCVar3,fVar7);
  if (cVar1 == '\0') {
    pPVar4 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    PopAnimRig::ClearShaderOverrideColor(pPVar4);
  }
  else {
    pPVar4 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    pCVar3 = (CurveSequence<Sexy::Color> *)
             ZombieZombossMech::getColorCurve((ZombieZombossMech *)this);
    fVar7 = (float)ZombieZombossMech::GetZomboss_T((ZombieZombossMech *)this);
    CurveSequence<Sexy::Color>::operator[](pCVar3,fVar7);
    PopAnimRig::SetShaderOverrideColor(pPVar4,aCStack_60);
  }
  if ((this[0x960] == (ZombieZombossMech_Dark)0x0) && (this[0x961] == (ZombieZombossMech_Dark)0x0))
  {
    fVar7 = (float)Zombie::getTimeInState((Zombie *)this);
    pZVar5 = Zombie::GetProps<ZombieZombossMechDarkProps>((Zombie *)this);
    if (*(float *)(pZVar5 + 0x2a0) < fVar7) {
      this[0x961] = (ZombieZombossMech_Dark)0x1;
      Zombie::EndCondition((Zombie *)this,0x20);
      pPVar4 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
      PopAnimRig::ClearShaderOverrideColor(pPVar4);
      pZVar6 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aCStack_60,"onMagnetStunEndAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 (string *)aCStack_60);
      ZombieAnimRig_ZombossMech_Hydra::PlayMagnettedEnd
                ((ZombieAnimRig_ZombossMech_Hydra *)pZVar6,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aCStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0472501c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombieZombossMech_Dark::Retreat(ZombieState) */

void __thiscall ZombieZombossMech_Dark::Retreat(ZombieZombossMech_Dark *this,int param_2)

{
  ZombieWithActions *pZVar1;
  ZombossDarkWalkActionHandler *pZVar2;
  Point local_18 [8];
  RtWeakPtr<Sexy::SoundResource> local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = (ZombieWithActions *)ZombieZombossMech::getActiveStage((ZombieZombossMech *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_10,(RtWeakPtrBase *)(pZVar1 + 0x20));
  pZVar2 = ZombieWithActions::QueueAction<ZombossDarkWalkActionHandler>(pZVar1,local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  Sexy::Point::Point(local_18);
  if (param_2 == 0x27) {
    FUN_04721eb0(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    ZombossBattleModule::GetDeathLocation();
  }
  else {
    ZombieZombossMech::PickRetreatTarget((ZombieZombossMech *)this,local_18);
  }
  ZombossWalkActionHandler::SetWalkTarget((ZombossWalkActionHandler *)pZVar2,local_18,0);
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,param_2);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Dark::StaticClassInit() */

void ZombieZombossMech_Dark::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieZombossMech_Dark");
      (*pcVar4)(plVar1,asStack_150,FUN_047253d0,0x968,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossMech_Dark,void(ZombieZombossMech_Dark::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb8);
  Sexy::Delegate0::Delegate0<ZombieZombossMech_Dark,void(ZombieZombossMech_Dark::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbc0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossMech_Dark,void(ZombieZombossMech_Dark::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossDarkMagnetStun");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047250cc(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossMech_Dark::StaticGetClass() */

long * ZombieZombossMech_Dark::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Dark",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_Dark::GetClass() const */

long * ZombieZombossMech_Dark::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_Dark",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_Dark::onUpdate() */

void __thiscall ZombieZombossMech_Dark::onUpdate(ZombieZombossMech_Dark *this)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Plant *this_00;
  long lVar4;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canBeMagnetStunned(this);
  if (cVar1 != '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntities(avStack_20,1);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (bVar2) {
      do {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
        if (this_00 != (Plant *)0x0) {
          Plant::GetType();
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          bVar2 = std::operator==((string *)(lVar4 + 8),"magnetshroom");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          if (bVar2) {
            if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
              cVar1 = Plant::IsInPlantFoodState(this_00);
            }
            else {
              cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))();
            }
            if (cVar1 != '\0') {
              Zombie::setZombieState((Zombie *)this,0x29,0);
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
              goto LAB_04725bc4;
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30)
        ;
      } while (bVar2);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
LAB_04725bc4:
  ZombieZombossMech::onUpdate((ZombieZombossMech *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


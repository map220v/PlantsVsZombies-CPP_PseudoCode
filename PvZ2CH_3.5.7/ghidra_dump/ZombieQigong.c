// Class: ZombieQigong


/* ZombieQigong::~ZombieQigong() */

void __thiscall ZombieQigong::~ZombieQigong(ZombieQigong *this)

{
  *(undefined ***)this = &PTR_GetClass_068cd8f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieQigong_068ce320;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieQigong::~ZombieQigong() */

void __thiscall ZombieQigong::~ZombieQigong(ZombieQigong *this)

{
  ~ZombieQigong(this + -0x10);
  return;
}


/* ZombieQigong::~ZombieQigong() */

void __thiscall ZombieQigong::~ZombieQigong(ZombieQigong *this)

{
  ~ZombieQigong(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieQigong::~ZombieQigong() */

void __thiscall ZombieQigong::~ZombieQigong(ZombieQigong *this)

{
  ~ZombieQigong(this + -0x10);
  return;
}


/* ZombieQigong::ZombieQigong() */

void __thiscall ZombieQigong::ZombieQigong(ZombieQigong *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068cd8f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieQigong_068ce320;
  return;
}


/* ZombieQigong::StaticNew() */

ZombieQigong * ZombieQigong::StaticNew(void)

{
  ZombieQigong *this;
  
  this = ::operator_new(0x810);
  ZombieQigong(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieQigong::pullPlant(Plant*, bool) */

void __thiscall ZombieQigong::pullPlant(ZombieQigong *this,Plant *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  Board *this_00;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_54;
  float local_50;
  undefined1 local_4c;
  undefined4 local_48;
  float local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  float local_24;
  float local_20;
  undefined1 local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar5 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  RelocationEvent::RelocationEvent((RelocationEvent *)&local_68);
  local_68 = uVar1;
  local_64 = uVar2;
  local_54 = PVZ_T();
  iVar3 = *(int *)(param_1 + 0x114);
  iVar4 = *(int *)(param_1 + 0x110);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)&local_38,"");
  lVar6 = Board::GetPlantAt(this_00,iVar3 + 1,iVar4,(string *)&local_38);
  local_5c = uVar2;
  if ((lVar6 == 0) || (!param_2)) {
    std::string::~string((string *)&local_38);
    nop();
    local_50 = (float)PVZ_T();
    local_50 = local_50 + 0.5;
    iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 0x114) + 1);
    local_60 = (float)iVar3;
    local_4c = 1;
    local_48 = 1;
    Plant::addRelocationEvent(param_1,(RelocationEvent *)&local_68);
  }
  else {
    std::string::~string((string *)&local_38);
    nop();
    local_4c = 1;
    local_50 = (float)PVZ_T();
    local_50 = local_50 + 0.5;
    iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 0x114) + 1);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    local_48 = 1;
    local_60 = (float)(iVar3 - iVar4 / 2);
    Plant::addRelocationEvent(param_1,(RelocationEvent *)&local_68);
    RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
    local_1c = 1;
    iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(param_1 + 0x114) + 1);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    local_38 = (float)(iVar3 - iVar4 / 2);
    local_34 = uVar2;
    local_24 = (float)PVZ_T();
    local_24 = local_24 + 0.5;
    local_20 = (float)PVZ_T();
    local_20 = local_20 + 1.5;
    iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
    iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
    local_30 = (float)iVar3;
    local_18 = 2;
    local_2c = uVar2;
    Plant::addRelocationEvent(param_1,(RelocationEvent *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieQigong::onApplyCondition(ZombieConditions) */

void __thiscall ZombieQigong::onApplyCondition(ZombieQigong *this,int param_2)

{
  int iVar1;
  ZombieQigongProps *pZVar2;
  undefined4 uVar3;
  
  if (param_2 != 1) {
    if (param_2 < 2) {
      if (param_2 == 0) {
        pZVar2 = Zombie::GetProps<ZombieQigongProps>((Zombie *)this);
        *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar2 + 0x210);
        return;
      }
    }
    else if (param_2 == 2) {
      iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
      if (iVar1 == 0x1f) {
        Zombie::setZombieState((Zombie *)this,1,0);
        return;
      }
    }
    else if (param_2 == 0x29) goto LAB_0475f620;
    return;
  }
LAB_0475f620:
  pZVar2 = Zombie::GetProps<ZombieQigongProps>((Zombie *)this);
  *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar2 + 0x210);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x808) = uVar3;
  return;
}


/* ZombieQigong::onPullAnimationEnd(Zombie*) */

void ZombieQigong::onPullAnimationEnd(Zombie *param_1)

{
  char cVar1;
  ZombieQigongProps *pZVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState(param_1,1);
      pZVar2 = Zombie::GetProps<ZombieQigongProps>(param_1);
      *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(pZVar2 + 0x210);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieQigong::onEnterState_Pull(ZombieState) */

void ZombieQigong::onEnterState_Pull(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  undefined4 uVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_T();
  *(undefined4 *)(param_1 + 0x808) = uVar2;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onPullAnimationEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Qigong::PlayPull((ZombieAnimRig_Qigong *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_58,"Play_Zomb_Kongfu_Qigong_Absorb");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieQigong::startPulling(Zombie*) */

void ZombieQigong::startPulling(Zombie *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  RtObject *this;
  PlantGroup *this_00;
  Plant *this_01;
  undefined8 *puVar9;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  RtWeakPtr *this_03;
  long lVar10;
  ResourceInfo *pRVar11;
  code *pcVar12;
  int iVar13;
  Board *pBVar14;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = (**(code **)(*(long *)param_1 + 0x330))();
  if ((cVar3 == '\0') && (cVar3 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar3 == '\0'))
  {
    pfVar8 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    BoardTransforms::BoardSpaceToGrid(*pfVar8,pfVar8[1],&local_48,&local_44);
    iVar6 = local_48;
    do {
      iVar13 = local_44;
      pBVar14 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_30,"");
      this = (RtObject *)Board::GetPlantAt(pBVar14,iVar6,iVar13,asStack_30);
      std::string::~string(asStack_30);
      nop();
      if ((this != (RtObject *)0x0) &&
         ((bVar4 = Sexy::RtObject::IsA<PlantTurnip>(this), bVar4 ||
          (bVar4 = Sexy::RtObject::IsA<PlantMagicbeans>(this), bVar4)))) goto LAB_0475f85c;
      iVar6 = iVar6 + -1;
      iVar13 = local_48 + -1;
    } while (iVar13 <= iVar6);
    if (-1 < iVar13) {
      do {
        this_00 = (PlantGroup *)
                  Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),iVar13,local_44);
        iVar6 = local_44;
        pBVar14 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_30,"");
        this_01 = (Plant *)Board::GetPlantAt(pBVar14,iVar13,iVar6,asStack_30);
        std::string::~string(asStack_30);
        nop();
        if (this_00 != (PlantGroup *)0x0) {
          std::string::string((string *)&local_38,"Play_Zomb_Future_Football_Mvmt_Fling");
          BoardEntityPusher::BoardEntityPusher
                    ((BoardEntityPusher *)asStack_30,(BoardEntity *)param_1,(string *)&local_38);
          std::string::~string((string *)&local_38);
          nop();
          cVar3 = PlantGroup::CanAttackRelocateGroup(this_00,(BoardEntity *)param_1);
          if (cVar3 != '\0') {
            bVar4 = false;
            bVar1 = false;
            bVar2 = false;
            puVar9 = (undefined8 *)PlantGroup::Plants();
            local_40 = FUN_0475f4b0(*puVar9);
            local_38 = FUN_0475f500(puVar9[1]);
            while (bVar5 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38)
                  , bVar5) {
              this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
              pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_02);
              cVar3 = PlantTurnip::WhetherCanBePulled((Plant *)pRVar11,local_48);
              if (cVar3 == '\0') {
                bVar2 = true;
              }
              pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_02);
              cVar3 = PlantMagicbeans::WhetherCanBePulled((Plant *)pRVar11,local_48);
              if (cVar3 == '\0') {
                bVar1 = true;
              }
              pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_02);
              cVar3 = PlantNightcap::WhetherCanBePulled
                                ((Plant *)pRVar11,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1)
              ;
              if (cVar3 == '\0') {
                bVar4 = true;
              }
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
            }
            if ((bVar4 || bVar1) || (bVar2)) {
LAB_0475fc6c:
              BoardEntityPusher::~BoardEntityPusher((BoardEntityPusher *)asStack_30);
              break;
            }
            if (this_01 != (Plant *)0x0) {
              if (*(code **)(*(long *)this_01 + 0x1f8) == Plant::IsInPlantFoodState) {
                cVar3 = Plant::IsInPlantFoodState(this_01);
              }
              else {
                cVar3 = (**(code **)(*(long *)this_01 + 0x1f8))(this_01);
              }
              if (cVar3 != '\0') goto LAB_0475fc6c;
            }
            iVar6 = FUN_0475efb0(*(undefined4 *)(this_00 + 0xa4));
            iVar7 = FUN_0475efb4(*(undefined4 *)(this_00 + 0xa8));
            BoardEntityPusher::PullRowRight((BoardEntityPusher *)asStack_30,iVar6,iVar7);
            local_40 = FUN_0475f4b0(*puVar9);
            local_38 = FUN_0475f500(puVar9[1]);
            while (bVar4 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38)
                  , bVar4) {
              this_03 = (RtWeakPtr *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
              bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_03);
              if (bVar4) {
                lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
                cVar3 = FUN_0475efa4(*(undefined4 *)(lVar10 + 0x1d0));
                if (cVar3 != '\0') goto LAB_0475fb8c;
                pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_03);
                pullPlant((ZombieQigong *)param_1,(Plant *)pRVar11,local_48 + -1 == iVar13);
                bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_03);
                if (bVar4) goto LAB_0475fc1c;
              }
              else {
LAB_0475fb8c:
                bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_03);
                if (bVar4) {
LAB_0475fc1c:
                  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_03);
                  pcVar12 = *(code **)(**(long **)(lVar10 + 0xa8) + 0x440);
                  if (pcVar12 != PlantFramework::stopSpecialEffect) {
                    (*pcVar12)();
                  }
                }
              }
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
            }
          }
          BoardEntityPusher::~BoardEntityPusher((BoardEntityPusher *)asStack_30);
        }
        iVar13 = iVar13 + -1;
      } while (iVar13 != -1);
    }
  }
LAB_0475f85c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieQigong::onPopAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

void ZombieQigong::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  ZombieHydraHeadAnimRig *this;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  MessageRouter *pMVar8;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar2 == '\0')
       ) && (bVar3 = std::operator==(param_4,"use_action"), bVar3)) &&
     (fVar6 = *(float *)(param_1 + 0x808), fVar4 = (float)PVZ_T(), fVar6 <= fVar4)) {
    this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
    fVar4 = (float)ZombieAnimRig_Qigong::GetPullDuration((ZombieAnimRig_Qigong *)this);
    fVar7 = *(float *)(param_1 + 0x808);
    fVar6 = (float)PVZ_T();
    pMVar8._0_4_ = (MessageRouter *)((fVar4 + fVar7) - fVar6);
    if ((float)pMVar8._0_4_ <= 0.0) {
      pMVar8._0_4_ = (MessageRouter *)0x40000000;
    }
    fVar6 = *(float *)(param_1 + 0x1c);
    fVar4 = (float)FUN_0475efc4(*(undefined4 *)(param_1 + 0x18),fVar6,
                                *(undefined4 *)(param_1 + 0x20));
    puVar1 = gMessageRouter;
    BoardTransforms::BoardSpaceToGrid((BoardTransforms *)gMessageRouter,fVar4,fVar6);
    MessageRouter::Post<Sexy::Point_const&,float,Sexy::Point,float>
              (pMVar8._0_4_,puVar1,Message::PlantAbsorbed,asStack_10);
    uVar5 = PVZ_EOT();
    *(undefined4 *)(param_1 + 0x808) = uVar5;
    startPulling((Zombie *)param_1);
    std::string::string(asStack_10,"Play_Plant_Absorbed");
    RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieQigong::StaticClassInit() */

void ZombieQigong::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieQigong");
      (*pcVar4)(plVar1,asStack_150,FUN_04760064,0x810,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieQigong,void(ZombieQigong::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieQigong,void(ZombieQigong::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieQigong,void(ZombieQigong::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Qigong_Pull");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0475fe08(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieQigong::StaticGetClass() */

long * ZombieQigong::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieQigong",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieQigong::GetClass() const */

long * ZombieQigong::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieQigong",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieQigong::onZombieInitialize() */

void __thiscall ZombieQigong::onZombieInitialize(ZombieQigong *this)

{
  undefined4 uVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x802] = (ZombieQigong)0x0;
  this[0x801] = (ZombieQigong)0x1;
  uVar1 = PVZ_EOT();
  this[0x800] = (ZombieQigong)0x0;
  *(undefined4 *)(this + 0x804) = uVar1;
  *(undefined4 *)(this + 0x808) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieQigong::onUpdate() */

void __thiscall ZombieQigong::onUpdate(ZombieQigong *this)

{
  ZombieQigong ZVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ZombieQigongProps *pZVar5;
  float *pfVar6;
  long lVar7;
  Board *pBVar8;
  float fVar9;
  float fVar10;
  int local_1c;
  int local_18 [2];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  if (this[0x802] == (ZombieQigong)0x0) {
    cVar3 = BoardEntity::IntersectsGrid((BoardEntity *)this);
    if (cVar3 == '\0') {
      ZVar1 = this[0x802];
    }
    else {
      this[0x802] = (ZombieQigong)0x1;
      pZVar5 = Zombie::GetProps<ZombieQigongProps>((Zombie *)this);
      *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar5 + 0x210);
      std::string::string(asStack_10,"Play_Prospector_Sizzle");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
      ZVar1 = this[0x802];
    }
    if (ZVar1 == (ZombieQigong)0x0) goto LAB_04760538;
  }
  if ((((this[0x801] != (ZombieQigong)0x0) &&
       (cVar3 = (**(code **)(*(long *)this + 0x330))(this), cVar3 == '\0')) &&
      (cVar3 = (**(code **)(*(long *)this + 0x328))(this), cVar3 == '\0')) &&
     ((cVar3 = Zombie::IsSuspended((Zombie *)this), cVar3 == '\0' &&
      (cVar3 = Zombie::IsOnGround((Zombie *)this), cVar3 != '\0')))) {
    if (0.0 < *(float *)(this + 0x804)) {
      fVar9 = (float)PVZ_Dt();
      fVar10 = *(float *)(this + 0x804);
      *(float *)(this + 0x804) = fVar10 - fVar9;
      if (0.0 < fVar10 - fVar9) goto LAB_04760538;
    }
    iVar4 = Zombie::getZombieStateSerialization((Zombie *)this);
    if (iVar4 != 0x1f) {
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this);
      BoardTransforms::BoardSpaceToGrid(*pfVar6,pfVar6[1],&local_1c,local_18);
      cVar3 = RealObject::IsOnOpposingTeam(this,1);
      iVar4 = local_1c;
      do {
        iVar2 = local_18[0];
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"");
        lVar7 = Board::GetPlantAt(pBVar8,iVar4,iVar2,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (lVar7 != 0) goto LAB_04760538;
        iVar4 = iVar4 + -1;
      } while (local_1c + -1 <= iVar4);
      if ((cVar3 != '\0') && (iVar4 = local_1c + -2, -1 < iVar4)) {
        do {
          iVar2 = local_18[0];
          pBVar8 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_10,"");
          lVar7 = Board::GetPlantAt(pBVar8,iVar4,iVar2,asStack_10);
          std::string::~string(asStack_10);
          nop();
          if (lVar7 != 0) {
            ZombiePumpkinKnightGhost::onPlaceOnBoard((ZombiePumpkinKnightGhost *)this);
            break;
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != -1);
      }
    }
  }
LAB_04760538:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


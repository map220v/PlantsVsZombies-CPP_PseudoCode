// Class: SingleHandedModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::StaticClassInit() */

void SingleHandedModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SingleHandedModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04363d58,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SingleHandedModule::StaticGetClass() */

long * SingleHandedModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SingleHandedModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::UpdatePlantUpgradePercent() */

void __thiscall SingleHandedModule::UpdatePlantUpgradePercent(SingleHandedModule *this)

{
  RtMixedPtrBase *this_00;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  long lVar6;
  Plant *this_01;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  Board *this_02;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar2 != '\0') {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = FUN_04361ae0(*(undefined4 *)(lVar6 + 0x130));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar4 = FUN_04361ae4(*(undefined4 *)(lVar6 + 0x134));
    std::string::string(asStack_10,"");
    this_01 = (Plant *)Board::GetPlantAt(this_02,iVar3,iVar4,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (this_01 != (Plant *)0x0) {
      iVar3 = *(int *)(this + 0x20);
      uVar9 = *(undefined8 *)(pRVar5 + 0x58);
      uVar7 = FUN_04361d80(uVar9,*(undefined8 *)(pRVar5 + 0x60));
      if ((ulong)(long)iVar3 < uVar7) {
        piVar8 = (int *)FUN_04361db0(uVar9,(long)iVar3);
        iVar4 = *(int *)(this + 0x24);
        iVar1 = *piVar8;
        if (iVar4 <= iVar1) {
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          else {
            piVar8 = (int *)FUN_04361db0(uVar9,(long)(iVar3 + -1));
            iVar3 = *piVar8;
          }
          Plant::SetUpgradePercent(this_01,(float)(iVar4 - iVar3) / (float)(iVar1 - iVar3));
          goto LAB_0436278c;
        }
      }
      Plant::SetUpgradePercent(this_01,1.0);
    }
  }
LAB_0436278c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::onZombieDied(Zombie*, DamageInfo const*) */

void SingleHandedModule::onZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  ulong uVar3;
  int *piVar4;
  Insets *pIVar5;
  string *psVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  Board *this;
  Vec3 aVStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  if (param_2 != (DamageInfo *)0x0) {
    uVar8 = 0;
    uVar9 = *(undefined8 *)(pRVar2 + 0x58);
    uVar7 = *(undefined8 *)(pRVar2 + 0x60);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    uVar3 = FUN_04361d80(uVar9,uVar7);
    if (uVar3 != 0) {
      do {
        piVar4 = (int *)FUN_04361db0(uVar9,uVar8);
        if (*(int *)(param_1 + 0x24) == *piVar4) {
          pIVar5 = (Insets *)(**(code **)(*(long *)param_2 + 0x178))(param_2);
          Sexy::Insets::Insets((Insets *)&local_18,pIVar5);
          iVar1 = local_c + 3;
          if (-1 < local_c) {
            iVar1 = local_c;
          }
          this = *(Board **)(gLawnApp + 0x9f0);
          EATextSquish::Vec3::Vec3
                    (aVStack_28,(float)(local_18 + local_10 / 2),(float)(local_14 + (iVar1 >> 2)),
                     0.0);
          psVar6 = (string *)Board::AddPlantUpgrade(this,(SexyVector3 *)aVStack_28);
          if (psVar6 != (string *)0x0) {
            FUN_04361db0(*(undefined8 *)(pRVar2 + 0x58),uVar8);
            GridItemJammable::SetJamStyle(psVar6);
          }
          uVar9 = *(undefined8 *)(pRVar2 + 0x58);
          uVar3 = FUN_04361d80(uVar9,*(undefined8 *)(pRVar2 + 0x60));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
    UpdatePlantUpgradePercent((SingleHandedModule *)param_1);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::GetLaunchTimePercent(std::string const&) */

void __thiscall SingleHandedModule::GetLaunchTimePercent(SingleHandedModule *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_18 = FUN_04362ac0(*(undefined8 *)(pRVar3 + 0x58));
  local_10 = FUN_04362b10(*(undefined8 *)(pRVar3 + 0x60));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      uVar5 = 0x3f800000;
LAB_04362bf4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==((string *)(lVar4 + 8),param_1);
    if (cVar1 != '\0') {
      uVar5 = *(undefined4 *)(lVar4 + 0x10);
      goto LAB_04362bf4;
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::onZombieAddedToBoard(Zombie*) */

void __thiscall SingleHandedModule::onZombieAddedToBoard(SingleHandedModule *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  int *piVar6;
  RtWeakPtrBase *pRVar7;
  long lVar8;
  ZombieAnimRig *pZVar9;
  float fVar10;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (param_1 == (Zombie *)0x0) {
    iVar4 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
    local_20 = FUN_04362c28(*(undefined8 *)(pRVar5 + 0x40));
    local_18 = FUN_04362c78(*(undefined8 *)(pRVar5 + 0x48));
    while ((bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2
           && (piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                         ((exception_ptr *)&local_20), *piVar6 != iVar4 + 1))) {
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
    }
  }
  else {
    cVar1 = Sexy::IsNearZero(*(float *)(pRVar5 + 0x90),0.001);
    if (cVar1 == '\0') {
      pZVar9 = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
      if (*(code **)(*(long *)param_1 + 0x1d8) == Zombie::GetWalkSpeed) {
        fVar10 = (float)Zombie::GetWalkSpeed(param_1);
      }
      else {
        fVar10 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
      }
      ZombieAnimRig::SetDesiredWalkVelocity(pZVar9,fVar10 * *(float *)(pRVar5 + 0x90));
    }
    fVar10 = (float)FUN_04361b00(*(undefined4 *)(param_1 + 0x284));
    Zombie::SetHitpoints(param_1,fVar10 * *(float *)(pRVar5 + 0x94));
    fVar10 = (float)FUN_04361b00(*(undefined4 *)(param_1 + 0x284));
    FUN_04361af8(fVar10 * *(float *)(pRVar5 + 0x94),param_1 + 0x284);
    uVar3 = FUN_04361b04(*(undefined4 *)(param_1 + 0xb0));
    fVar10 = (float)FUN_04361b08(*(undefined4 *)(param_1 + 0x2ac));
    Zombie::setHelm((Zombie *)(fVar10 * *(float *)(pRVar5 + 0x94)),param_1,uVar3);
    iVar4 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
    local_20 = FUN_04362c28(*(undefined8 *)(pRVar5 + 0x40));
    local_18 = FUN_04362c78(*(undefined8 *)(pRVar5 + 0x48));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      if (*piVar6 == iVar4 + 1) {
        pRVar7 = (RtWeakPtrBase *)Zombie::GetType(param_1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar7);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
        if (bVar2) {
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          bVar2 = std::operator==((string *)(lVar8 + 8),"future_flag");
          if (bVar2) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
            goto LAB_04362ef0;
          }
        }
        cVar1 = Sexy::IsNearZero((float)piVar6[1],0.001);
        if (cVar1 == '\0') {
          pZVar9 = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
          if (*(code **)(*(long *)param_1 + 0x1d8) == Zombie::GetWalkSpeed) {
            fVar10 = (float)Zombie::GetWalkSpeed(param_1);
          }
          else {
            fVar10 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
          }
          ZombieAnimRig::SetDesiredWalkVelocity(pZVar9,fVar10 * (float)piVar6[1]);
        }
        fVar10 = (float)FUN_04361b00(*(undefined4 *)(param_1 + 0x284));
        Zombie::SetHitpoints(param_1,fVar10 * (float)piVar6[2]);
        fVar10 = (float)FUN_04361b00(*(undefined4 *)(param_1 + 0x284));
        FUN_04361af8(fVar10 * (float)piVar6[2],param_1 + 0x284);
        uVar3 = FUN_04361b04(*(undefined4 *)(param_1 + 0xb0));
        fVar10 = (float)FUN_04361b08(*(undefined4 *)(param_1 + 0x2ac));
        Zombie::setHelm((Zombie *)(fVar10 * (float)piVar6[2]),param_1,uVar3);
        FUN_04361ad8(param_1 + 0x54,(char)piVar6[3]);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        break;
      }
LAB_04362ef0:
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::gameplayStarted() */

void __thiscall SingleHandedModule::gameplayStarted(SingleHandedModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  UIWidget *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::string::string(asStack_10,"UIChangeSpeedButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIPowerupHolder");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIShovel");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,*(float *)(pRVar1 + 0x8c));
  FUN_04361aec(*(long *)(gLawnApp + 0x9f0) + 0x887,1);
  *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x971) = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SingleHandedModule::onPlantFoodStart() */

void SingleHandedModule::onPlantFoodStart(void)

{
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,1.0);
  return;
}


/* SingleHandedModule::onPlantFoodEnd(Plant*) */

void SingleHandedModule::onPlantFoodEnd(Plant *param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)param_1);
  MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,*(float *)(pRVar1 + 0x8c));
  return;
}


/* SingleHandedModule::onReviveCancel() */

void SingleHandedModule::onReviveCancel(void)

{
  char cVar1;
  RichManUIMgr *this;
  
  cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1);
  if (cVar1 == '\0') {
    return;
  }
  this = (RichManUIMgr *)FUN_04363520(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  RichManUIMgr::SetPrevNode(this,0);
  return;
}


/* SingleHandedModule::~SingleHandedModule() */

void __thiscall SingleHandedModule::~SingleHandedModule(SingleHandedModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06835330;
  *(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x971) = 0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x50));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SingleHandedModule::~SingleHandedModule() */

void __thiscall SingleHandedModule::~SingleHandedModule(SingleHandedModule *this)

{
  ~SingleHandedModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::SingleHandedModule() */

void __thiscall SingleHandedModule::SingleHandedModule(SingleHandedModule *this)

{
  int iVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  int iVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06835330;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  Set8BytesTo0(this + 0x50);
  this[0x48] = (SingleHandedModule)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00);
  iVar2 = 0;
  if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
    do {
      iVar1 = iVar2 + 1;
      Sexy::Point::Point((Point *)a_Stack_10,0,iVar2);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,(Point *)a_Stack_10);
      iVar2 = iVar1;
    } while (iVar1 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SingleHandedModule::StaticNew() */

SingleHandedModule * SingleHandedModule::StaticNew(void)

{
  SingleHandedModule *this;
  
  this = ::operator_new(0x58);
  SingleHandedModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::fireRockets() */

void __thiscall SingleHandedModule::fireRockets(SingleHandedModule *this)

{
  long lVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Point *pPVar6;
  ZombossRocket *this_00;
  long lVar7;
  int iVar8;
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x30));
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x30));
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar4,uVar5);
  iVar8 = *(int *)(pRVar3 + 0x7c);
  if (iVar8 < 1) {
    iVar8 = 3;
  }
  else if (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) < iVar8) {
    iVar8 = 3;
  }
  lVar7 = 0;
  do {
    lVar1 = lVar7 + 1;
    pPVar6 = (Point *)FUN_04361d70(*(undefined8 *)(this + 0x30),lVar7);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,pPVar6);
    lVar7 = lVar1;
  } while ((int)lVar1 < iVar8);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    pPVar6 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = GameObject::Create<ZombossRocket>();
    ZombossRocket::InitializeRocketController(this_00,(ZombieZombossMech *)0x0,pPVar6);
    std::string::string(asStack_30,"POPANIM_EFFECTS_SINGLEHANDED_MISSILE_EXPLOSION");
    std::string::string(asStack_28,"missile_lock_reticle");
    ZombossRocket::StartCrosshairEffect(this_00,asStack_30,asStack_28);
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"POPANIM_EFFECTS_SINGLEHANDED_MISSILE_EXPLOSION");
    std::string::string(asStack_28,"missile");
    ZombossRocket::StartRocketEffect
              (this_00,asStack_30,asStack_28,*(float *)(pRVar3 + 0x84),*(float *)(pRVar3 + 0x88));
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_30);
    nop();
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::update() */

void __thiscall SingleHandedModule::update(SingleHandedModule *this)

{
  RtMixedPtrBase *this_00;
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  LevelModuleManager *this_01;
  IntroSingleHanded *this_02;
  ProfileMgr *this_03;
  PlayerInfo *pPVar6;
  ResilienceTutorialIntroProperties *pRVar7;
  Board *this_04;
  float fVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = (float)PVZ_T();
  if (fVar8 <= *(float *)(this + 0x28)) goto LAB_04364624;
  this_01 = (LevelModuleManager *)FUN_04361af4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_02 = LevelModuleManager::GetModuleByClass<IntroSingleHanded>(this_01);
  if (this_02 == (IntroSingleHanded *)0x0) {
LAB_0436475c:
    fireRockets(this);
  }
  else {
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
    cVar2 = ProfileUtils::HasCompletedCurrentNormalLevel(pPVar6);
    if (cVar2 != '\0') goto LAB_0436475c;
    iVar3 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
    iVar4 = IntroSingleHanded::GetWaveForStartRocket(this_02);
    if (iVar4 <= iVar3) goto LAB_0436475c;
  }
  pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar8 = (float)PVZ_T();
  *(float *)(this + 0x28) = fVar8 + *(float *)(pRVar7 + 0x80);
LAB_04364624:
  if (this[0x48] != (SingleHandedModule)0x0) {
    this_00 = (RtMixedPtrBase *)(this + 0x18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar2 != '\0') {
      this_04 = *(Board **)(gLawnApp + 0x9f0);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = FUN_04361ae0(*(undefined4 *)(lVar5 + 0x130));
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar4 = FUN_04361ae4(*(undefined4 *)(lVar5 + 0x134));
      std::string::string(asStack_10,"");
      lVar5 = Board::GetPlantAt(this_04,iVar3,iVar4,asStack_10);
      std::string::~string(asStack_10);
      nop();
      if ((lVar5 == 0) &&
         (cVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0)), pLVar1 = gLawnApp,
         cVar2 == '\0')) {
        this[0x48] = (SingleHandedModule)0x0;
        LawnApp::ShowReviveUI(pLVar1,0);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::onTakeImmediatePlantFood() */

void __thiscall SingleHandedModule::onTakeImmediatePlantFood(SingleHandedModule *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  PlantGroup *this_01;
  char *pcVar6;
  wchar16 *pwVar7;
  ulong uVar8;
  int *piVar9;
  LineBreakCategory *pLVar10;
  undefined **ppuVar11;
  LineBreakCategory *in_x4;
  undefined8 uVar12;
  Board *pBVar13;
  LineBreakCategory aLStack_28 [8];
  LineBreakCategory aLStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pBVar13 = *(Board **)(gLawnApp + 0x9f0);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar2 = FUN_04361ae0(*(undefined4 *)(lVar5 + 0x130));
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = FUN_04361ae4(*(undefined4 *)(lVar5 + 0x134));
    this_01 = (PlantGroup *)Board::GetPlantGroupAt(pBVar13,iVar2,iVar3);
    if ((this_01 == (PlantGroup *)0x0) ||
       (cVar1 = PlantGroup::HasNonRelocatingPlant(), cVar1 == '\0')) {
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Play_UI_Game_PlantFood_Disarm");
    }
    else {
      cVar1 = (**(code **)(*(long *)this_01 + 0x158))(this_01);
      if ((cVar1 == '\0') ||
         (((cVar1 = PlantGroup::HasPlantfoodedPlant(), cVar1 != '\0' ||
           (cVar1 = PlantGroup::CanApplyPlantfood(this_01), cVar1 == '\0')) ||
          (cVar1 = FUN_04361ae8(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x887)), cVar1 == '\0'
          )))) {
        pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar6,"Play_UI_Game_Nitro_Fail");
      }
      else {
        pLVar10 = aLStack_28;
        PlantGroup::ApplyPlantfood(this_01,true);
        ppuVar11 = &gMessageRouter;
        MessageRouter::Post<PlantGroup*,PlantGroup*>
                  ((MessageRouter *)gMessageRouter,Message::ToolAppliedPlantfood,this_01);
        pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        std::string::string(asStack_18,"FreePlanting");
        cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar7,(wchar16 *)asStack_18,pLVar10,(LineBreakCategory *)ppuVar11,in_x4)
        ;
        if (cVar1 == '\0') {
          pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          pLVar10 = aLStack_20;
          std::string::string(asStack_10,"UnlimitedPlantfood");
          cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                            (pwVar7,(wchar16 *)asStack_10,pLVar10,(LineBreakCategory *)ppuVar11,
                             in_x4);
          std::string::~string(asStack_10);
          nop();
          std::string::~string(asStack_18);
          nop();
          if (cVar1 == '\0') {
            pBVar13 = *(Board **)(gLawnApp + 0x9f0);
            uVar4 = Board::GetPlantfoodCount(pBVar13);
            Board::SetPlantfoodCount(pBVar13,(uVar4 & 0xff) - 1);
            iVar2 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
            if (-1 < iVar2) {
              uVar12 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xd20);
              uVar8 = FUN_04361b10(uVar12,*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xd28));
              if ((ulong)(long)iVar2 < uVar8) {
                piVar9 = (int *)FUN_04361d78(uVar12,(long)iVar2);
                *piVar9 = *piVar9 + 1;
              }
            }
          }
        }
        else {
          std::string::~string(asStack_18);
          nop();
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::onReviveOK() */

void __thiscall SingleHandedModule::onReviveOK(SingleHandedModule *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *extraout_x0;
  string *psVar4;
  long lVar5;
  Plant *this_00;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2);
  uVar7 = local_20;
  uVar3 = FUN_04361d5c(local_20,local_18);
  if (uVar3 != 0) {
    do {
      FUN_04361d68(uVar7,uVar6);
      nop();
      if (extraout_x0 != (long *)0x0) {
        (**(code **)(*extraout_x0 + 0x48))();
        uVar7 = local_20;
        uVar3 = FUN_04361d5c(local_20,local_18);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  uVar1 = FUN_04361ae0(*(undefined4 *)(lVar5 + 0x130));
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  uVar2 = FUN_04361ae4(*(undefined4 *)(lVar5 + 0x134));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
  this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar7,uVar1,uVar2,aRStack_28,0,0,0xffffffff,0,1,1,
                                     0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (this_00 != (Plant *)0x0) {
    fVar8 = (float)GetLaunchTimePercent(this,(string *)(this + 0x50));
    Plant::UpdateLaunchInterval(this_00,fVar8);
    Plant::SetShowUpgrade(this_00,true);
    UpdatePlantUpgradePercent(this);
  }
  this[0x48] = (SingleHandedModule)0x1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::placeRailsAndCarts() */

void __thiscall SingleHandedModule::placeRailsAndCarts(SingleHandedModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  string *psVar2;
  long lVar3;
  Plant *this_00;
  undefined8 uVar4;
  Board *pBVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Board::LoadResourceGroupForGameplay(pBVar5,(string *)(lVar3 + 0x10));
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Board::LoadResourceGroupsForGameplay(pBVar5,(vector *)(lVar3 + 0x80));
  uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar4,0,0,aRStack_10,0,0,0xffffffff,0,1,1,0,0,0,0)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (this_00 != (Plant *)0x0) {
    Plant::UpdateLaunchInterval(this_00,*(float *)(pRVar1 + 0x78));
    Plant::SetShowUpgrade(this_00,true);
  }
  thunk_FUN_05475e00(this + 0x50,pRVar1 + 0x70);
  this[0x48] = (SingleHandedModule)0x1;
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x28) = fVar6 + *(float *)(pRVar1 + 0x80);
  FUN_04361aec(*(long *)(gLawnApp + 0x9f0) + 0x887,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::onTakePlantWeapon(std::string const&) */

void __thiscall SingleHandedModule::onTakePlantWeapon(SingleHandedModule *this,string *param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ResilienceTutorialIntroProperties *pRVar6;
  long lVar7;
  Plant *pPVar8;
  ulong uVar9;
  string *psVar10;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar11;
  Board *pBVar12;
  undefined8 uVar13;
  float fVar14;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pRVar6 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,*(float *)(pRVar6 + 0x8c));
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar2 = FUN_04361ae0(*(undefined4 *)(lVar7 + 0x130));
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar3 = FUN_04361ae4(*(undefined4 *)(lVar7 + 0x134));
    std::string::string(asStack_18,"");
    pPVar8 = (Plant *)Board::GetPlantAt(pBVar12,iVar2,iVar3,asStack_18);
    std::string::~string(asStack_18);
    nop();
    if (pPVar8 != (Plant *)0x0) {
      Plant::KillPlant(pPVar8,0,0,1);
    }
    std::string::string(asStack_30,"");
    nop();
    uVar13 = *(undefined8 *)(pRVar6 + 0x58);
    iVar2 = *(int *)(this + 0x20);
    uVar9 = FUN_04361d80(uVar13,*(undefined8 *)(pRVar6 + 0x60));
    if ((ulong)(long)iVar2 < uVar9) {
      lVar7 = FUN_04361db0(uVar13,(long)iVar2);
      thunk_FUN_05475e00(asStack_30,lVar7 + 8);
    }
    else {
      thunk_FUN_05475e00(asStack_30,param_1);
    }
    psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    Board::LoadResourceGroupForGameplay(pBVar12,(string *)(lVar7 + 0x10));
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    Board::LoadResourceGroupsForGameplay(pBVar12,(vector *)(lVar7 + 0x80));
    uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar4 = FUN_04361ae0(*(undefined4 *)(lVar7 + 0x130));
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    uVar5 = FUN_04361ae4(*(undefined4 *)(lVar7 + 0x134));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_28);
    pPVar8 = (Plant *)Board::AddPlant((Board *)0x0,uVar13,uVar4,uVar5,asStack_18,0,0,0xffffffff,0,1,
                                      1,0,0,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    if (pPVar8 != (Plant *)0x0) {
      fVar14 = (float)GetLaunchTimePercent(this,asStack_30);
      Plant::UpdateLaunchInterval(pPVar8,fVar14);
      Plant::SetShowUpgrade(pPVar8,true);
      this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_20,"POPANIM_EFFECTS_SINGLEHANDED_UP");
      GetPAMByName(asStack_20);
      pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
      Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar11,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      std::string::~string(asStack_20);
      nop();
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-50.0,0.0);
      StandaloneEffect::SetAttached
                ((StandaloneEffect *)this_01,(RealObject *)pPVar8,(SexyVector3 *)asStack_18,2);
      Effect_PopAnim::SetCentered(this_01,true);
      std::string::string(asStack_18,"animation");
      Effect_PopAnim::PlaySingleAnimation(this_01,asStack_18,0);
      std::string::~string(asStack_18);
      nop();
    }
    thunk_FUN_05475e00(this + 0x50,asStack_30);
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    UpdatePlantUpgradePercent(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    std::string::~string(asStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SingleHandedModule::AddResourceRequirements(SingleHandedModule *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"SingleHandedGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SingleHandedModule::registerForEvents() */

void __thiscall SingleHandedModule::registerForEvents(SingleHandedModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,placeRailsAndCarts);
  Sexy::Delegate0::Delegate0<SingleHandedModule,void(SingleHandedModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,update);
  Sexy::Delegate0::Delegate0<SingleHandedModule,void(SingleHandedModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<SingleHandedModule,void(SingleHandedModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTakePlantWeapon);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<SingleHandedModule,void(SingleHandedModule::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::TakePlantWeapon,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDied);
  local_e0 = local_80;
  uStack_d8 = uStack_78;
  local_d0 = local_70;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<SingleHandedModule,void(SingleHandedModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_e0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieAddedToBoard);
  local_100 = local_68;
  uStack_f8 = uStack_60;
  local_f0 = local_58;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<SingleHandedModule,void(SingleHandedModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveOK);
  Sexy::Delegate0::Delegate0<SingleHandedModule,void(SingleHandedModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveSucceed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onReviveCancel);
  Sexy::Delegate0::Delegate0<SingleHandedModule,void(SingleHandedModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ReviveClose,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTakeImmediatePlantFood);
  Sexy::Delegate0::Delegate0<SingleHandedModule,void(SingleHandedModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::TakeImmediatePlantFood,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantFoodStart);
  Sexy::Delegate0::Delegate0<SingleHandedModule,void(SingleHandedModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantFoodStart,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantFoodEnd);
  local_120 = local_50;
  uStack_118 = uStack_48;
  local_110 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<SingleHandedModule,void(SingleHandedModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantFoodEnd,&local_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


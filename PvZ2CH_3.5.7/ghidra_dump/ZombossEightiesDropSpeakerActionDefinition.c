// Class: ZombossEightiesDropSpeakerActionDefinition


/* ZombossEightiesDropSpeakerActionDefinition::~ZombossEightiesDropSpeakerActionDefinition() */

void __thiscall
ZombossEightiesDropSpeakerActionDefinition::~ZombossEightiesDropSpeakerActionDefinition
          (ZombossEightiesDropSpeakerActionDefinition *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6710;
  ZombieActionDefinition::~ZombieActionDefinition((ZombieActionDefinition *)this);
  return;
}


/* ZombossEightiesDropSpeakerActionDefinition::~ZombossEightiesDropSpeakerActionDefinition() */

void __thiscall
ZombossEightiesDropSpeakerActionDefinition::~ZombossEightiesDropSpeakerActionDefinition
          (ZombossEightiesDropSpeakerActionDefinition *this)

{
  ~ZombossEightiesDropSpeakerActionDefinition(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesDropSpeakerActionDefinition::StaticClassInit() */

void ZombossEightiesDropSpeakerActionDefinition::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossEightiesDropSpeakerActionDefinition");
    (*pcVar2)(plVar1,asStack_10,FUN_047eef50,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossEightiesDropSpeakerActionDefinition::StaticGetClass() */

long * ZombossEightiesDropSpeakerActionDefinition::StaticGetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossEightiesDropSpeakerActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossEightiesDropSpeakerActionDefinition::GetClass() const */

long * ZombossEightiesDropSpeakerActionDefinition::GetClass(void)

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
  uVar2 = ZombieActionDefinition::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossEightiesDropSpeakerActionDefinition",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossEightiesDropSpeakerActionDefinition::ZombossEightiesDropSpeakerActionDefinition() */

void __thiscall
ZombossEightiesDropSpeakerActionDefinition::ZombossEightiesDropSpeakerActionDefinition
          (ZombossEightiesDropSpeakerActionDefinition *this)

{
  ZombieActionDefinition::ZombieActionDefinition((ZombieActionDefinition *)this);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 5;
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined ***)this = &PTR_GetClass_068f6710;
  *(undefined4 *)(this + 0x44) = 1;
  *(undefined4 *)(this + 0x48) = 1;
  *(undefined4 *)(this + 0x4c) = 0x40400000;
  return;
}


/* ZombossEightiesDropSpeakerActionDefinition::StaticNew() */

ZombossEightiesDropSpeakerActionDefinition *
ZombossEightiesDropSpeakerActionDefinition::StaticNew(void)

{
  ZombossEightiesDropSpeakerActionDefinition *this;
  
  this = ::operator_new(0x50);
  ZombossEightiesDropSpeakerActionDefinition(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesDropSpeakerActionDefinition::getSpeakerTargetSquaresInRect(ZombieZombossMech_Eighties*,
   Sexy::TRect<int> const&, std::vector<Sexy::Point, std::allocator<Sexy::Point> >&,
   Sexy::Delegate1wRet<bool, Sexy::Point const&>) const */

void __thiscall
ZombossEightiesDropSpeakerActionDefinition::getSpeakerTargetSquaresInRect
          (ZombossEightiesDropSpeakerActionDefinition *this,undefined8 param_2_00,int *param_2,
          vector<Sexy::Point,std::allocator<Sexy::Point>> *param_3,
          Delegate1wRet<bool,SexyURL_const&> *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(param_3);
  local_10[0] = 0;
  piVar2 = eastl::max_alt<int>(local_10,param_2);
  iVar4 = *piVar2;
  while( true ) {
    local_10[0] = *param_2 + param_2[2];
    piVar2 = eastl::min_alt<int>((int *)(this + 0x3c),local_10);
    if (*piVar2 < iVar4) break;
    local_10[0] = 0;
    piVar2 = eastl::max_alt<int>(local_10,param_2 + 1);
    iVar3 = *piVar2;
    while( true ) {
      local_14 = BoardConstants::NUMBER_OF_ROWS();
      local_10[0] = param_2[1] + param_2[3];
      piVar2 = eastl::min_alt<int>(&local_14,local_10);
      if (*piVar2 <= iVar3) break;
      Sexy::Point::Point((Point *)local_10,iVar4,iVar3);
      cVar1 = Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(param_5,(SexyURL *)local_10);
      if (cVar1 == '\0') {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + 1;
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(param_3,(Point *)local_10);
      }
    }
    iVar4 = iVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossEightiesDropSpeakerActionDefinition::pickSpeakerTarget(ZombieZombossMech_Eighties*,
   Sexy::Point&) const */

void __thiscall
ZombossEightiesDropSpeakerActionDefinition::pickSpeakerTarget
          (ZombossEightiesDropSpeakerActionDefinition *this,ZombieZombossMech_Eighties *param_1,
          Point *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  Insets aIStack_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  Delegate1wRet<bool,Sexy::Point_const&> aDStack_b8 [48];
  undefined8 local_88 [6];
  Delegate1wRet<bool,Sexy::Point_const&> aDStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_e0,*(int *)(this + 0x38),0,(*(int *)(this + 0x3c) - *(int *)(this + 0x38)) + 1,
             5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0);
  iVar1 = *(int *)(this + 0x40);
  if (0 < iVar1) {
    local_88[0] = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)FUN_047f13b0);
    Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet<bool(*)(Sexy::Point_const&)>
              (aDStack_b8,(CBFunctionTranslatorX *)local_88);
    FUN_03c46bc4(aDStack_58,0,iVar1,aDStack_b8);
    FUN_047f2838((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0,
                 aDStack_58);
    FUN_03c4937c(aDStack_58);
  }
  iVar1 = *(int *)(this + 0x44);
  if (0 < iVar1) {
    local_88[0] = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)FUN_047f124c);
    Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet<bool(*)(Sexy::Point_const&)>
              (aDStack_b8,(CBFunctionTranslatorX *)local_88);
    FUN_03c46bc4(aDStack_58,1,iVar1,aDStack_b8);
    FUN_047f2838((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0,
                 aDStack_58);
    FUN_03c4937c(aDStack_58);
  }
  iVar1 = *(int *)(this + 0x48);
  if (0 < iVar1) {
    local_88[0] = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)FUN_047f118c);
    Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet<bool(*)(Sexy::Point_const&)>
              (aDStack_b8,(CBFunctionTranslatorX *)local_88);
    FUN_03c46bc4(aDStack_58,2,iVar1,aDStack_b8);
    FUN_047f2838((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0,
                 aDStack_58);
    FUN_03c4937c(aDStack_58);
  }
  uVar6 = 0;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_88);
  uVar7 = local_d0;
  lVar2 = FUN_047ee52c(local_d0,local_c8);
  if (lVar2 != 0) {
    do {
      lVar2 = FUN_047ee540(uVar7,uVar6);
      Sexy::Delegate1wRet<bool,Sexy::Point_const&>::Delegate1wRet
                (aDStack_58,(Delegate1wRet *)(lVar2 + 8));
      getSpeakerTargetSquaresInRect(this,param_1,aIStack_e0,lVar2 + 0x38,aDStack_58);
      uVar7 = local_d0;
      lVar2 = FUN_047ee540(local_d0,uVar6);
      lVar3 = FUN_047ee698(*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
      if (lVar3 != 0) {
        ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_88,(int)uVar6,*(int *)(lVar2 + 4))
        ;
        uVar7 = local_d0;
      }
      uVar6 = uVar6 + 1;
      uVar4 = FUN_047ee52c(uVar7,local_c8);
    } while (uVar6 < uVar4);
  }
  lVar2 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)local_88);
  if (lVar2 != 0) {
    iVar1 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)local_88);
    lVar3 = FUN_047ee540(local_d0,(long)iVar1);
    iVar1 = FUN_047ee698(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x40));
    iVar1 = Sexy::Rand(iVar1);
    puVar5 = (undefined8 *)FUN_047ee6a4(*(undefined8 *)(lVar3 + 0x38),(long)iVar1);
    *(undefined8 *)param_2 = *puVar5;
  }
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)local_88);
  FUN_047f1790((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2 != 0);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047f2bcc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossEightiesDropSpeakerActionDefinition::TryStartAction(Sexy::RtWeakPtr<ZombieActionDefinition
   const>, ZombieWithActions*) const */

void __thiscall
ZombossEightiesDropSpeakerActionDefinition::TryStartAction
          (ZombossEightiesDropSpeakerActionDefinition *this,RtWeakPtrBase *param_2,RtObject *param_3
          )

{
  bool bVar1;
  ZombieZombossMech_Eighties *pZVar2;
  ZombieWithActions *pZVar3;
  ZombossEightiesDropSpeakerActionHandler *this_00;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18);
  if (param_3 == (RtObject *)0x0) {
    pZVar2 = (ZombieZombossMech_Eighties *)0x0;
  }
  else {
    pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech_Eighties>(param_3);
  }
  pZVar3 = (ZombieWithActions *)pickSpeakerTarget(this,pZVar2,aPStack_18);
  bVar1 = ((ulong)pZVar3 & 0xff) != 0;
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    this_00 = ZombieWithActions::QueueAction<ZombossEightiesDropSpeakerActionHandler>
                        (pZVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    ZombossEightiesDropSpeakerActionHandler::SetFiringData(this_00,aPStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


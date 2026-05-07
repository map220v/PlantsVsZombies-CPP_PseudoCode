// Class: ThunderWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderWaveAction::StaticClassInit() */

void ThunderWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThunderWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04940124,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderWaveAction::StaticGetClass() */

long * ThunderWaveAction::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"ThunderWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderWaveAction::FlashScreen() */

void ThunderWaveAction::FlashScreen(void)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Effect_ScreenFade::Create();
  uVar3 = (uint)DAT_06b70490 & 1;
  if (((DAT_06b70490 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b70490), iVar1 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06b704a0,uVar3,uVar3,uVar3,100);
    __cxa_guard_release(&DAT_06b70490);
  }
  if (((DAT_06b70478 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b70478), iVar1 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06b704d0,0xff,0xff,0xff,200);
    __cxa_guard_release(&DAT_06b70478);
  }
  Sexy::Insets::Insets(aIStack_18,(Insets *)&DAT_06b704a0);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f333333,0,0x3f800000,uVar2,1,aIStack_18,2);
  Sexy::Insets::Insets(aIStack_18,(Insets *)&DAT_06b704d0);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,uVar2,0,aIStack_18,2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ThunderWaveAction::ThunderWaveAction() */

void __thiscall ThunderWaveAction::ThunderWaveAction(ThunderWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06912620;
  return;
}


/* ThunderWaveAction::StaticNew() */

ThunderWaveAction * ThunderWaveAction::StaticNew(void)

{
  ThunderWaveAction *this;
  
  this = ::operator_new(0x28);
  ThunderWaveAction(this);
  return this;
}


/* ThunderWaveAction::~ThunderWaveAction() */

void __thiscall ThunderWaveAction::~ThunderWaveAction(ThunderWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06912620;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* ThunderWaveAction::~ThunderWaveAction() */

void __thiscall ThunderWaveAction::~ThunderWaveAction(ThunderWaveAction *this)

{
  ~ThunderWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void ThunderWaveAction::WaveStart(WaveAction *param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  long lVar4;
  SunDropperModule *this;
  Board *pBVar5;
  float fVar6;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  lVar4 = FUN_0493ff34(*(undefined8 *)(pFVar3 + 0x40),*(undefined8 *)(pFVar3 + 0x48));
  if (lVar4 != 0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    this = (SunDropperModule *)FUN_049407a8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if (this != (SunDropperModule *)0x0) {
      SunDropperModule::SetPaused(this,true);
    }
    fVar6 = (float)PVZ_T();
    *(undefined4 *)(param_1 + 0x18) = 0;
    param_1[0x24] = (WaveAction)0x0;
    param_1[0x25] = (WaveAction)0x0;
    *(float *)(param_1 + 0x20) = fVar6 + 3.0;
    pLVar1 = gLawnApp;
    cVar2 = LawnApp::IsInModule(gLawnApp,1);
    if (cVar2 == '\0') {
      pBVar5 = *(Board **)(pLVar1 + 0x9f0);
      FUN_05478178(auStack_10,L"[WARNING_THUNDER_TIP]",auStack_18);
      Board::DisplayAdviceAgain(pBVar5,auStack_10,0x11,0);
      FUN_05476c50(auStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderWaveAction::WaveEnd(int, Sexy::MTRand&) */

void ThunderWaveAction::WaveEnd(int param_1,MTRand *param_2)

{
  SunDropperModule *this;
  
  if (*(char *)((ulong)(uint)param_1 + 0x25) != '\0') {
    return;
  }
  *(undefined1 *)((ulong)(uint)param_1 + 0x25) = 1;
  this = (SunDropperModule *)FUN_049407a8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (SunDropperModule *)0x0) {
    SunDropperModule::SetPaused(this,false);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderWaveAction::takeThunder() */

void __thiscall ThunderWaveAction::takeThunder(ThunderWaveAction *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FairyTaleWindWaveActionProps *pFVar5;
  undefined8 *puVar6;
  Plant *this_00;
  long lVar7;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar8;
  ulong uVar9;
  int *piVar10;
  ThunderSubSystem *pTVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 local_68;
  undefined8 local_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar5 = WaveAction::GetProps<FairyTaleWindWaveActionProps>((WaveAction *)this);
  fVar13 = (float)PVZ_T();
  *(float *)(this + 0x1c) = fVar13 + 6.0;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_48,0,0,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,1,aIStack_48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
    if ((this_00 != (Plant *)0x0) && (cVar1 = Plant::CanBeRangeTargeted(this_00), cVar1 != '\0')) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_20,
                 (RtWeakPtr *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  lVar7 = FUN_0493ff5c(local_20,local_18);
  if (lVar7 != 0) {
    iVar3 = Sexy::Rand((int)lVar7);
    this_01 = (RtWeakPtr *)FUN_0493ff68(local_20,(long)iVar3);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    iVar3 = *(int *)(this + 0x18);
    if (pRVar8 == (ResourceInfo *)0x0) goto LAB_04940ba4;
    uVar12 = *(undefined8 *)(pFVar5 + 0x40);
    uVar9 = FUN_0493ff34(uVar12,*(undefined8 *)(pFVar5 + 0x48));
    if (uVar9 <= (ulong)(long)iVar3) goto LAB_04940ba4;
    piVar10 = (int *)FUN_0493ff70(uVar12,(long)iVar3);
    if (*piVar10 == 0) {
      pTVar11 = Board::GetGameSubSystem<ThunderSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
      ThunderSubSystem::AddPlantToThunder(*(ThunderSubSystem **)(pFVar5 + 0x58),pTVar11,pRVar8,0);
      iVar3 = *(int *)(this + 0x18);
      goto LAB_04940ba4;
    }
    pTVar11 = Board::GetGameSubSystem<ThunderSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
    ThunderSubSystem::AddPlantToThunder(*(ThunderSubSystem **)(pFVar5 + 0x58),pTVar11,pRVar8,1);
  }
  iVar3 = *(int *)(this + 0x18);
LAB_04940ba4:
  *(int *)(this + 0x18) = iVar3 + 1;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderWaveAction::WaveUpdate(int, Sexy::MTRand&) */

void ThunderWaveAction::WaveUpdate(int param_1,MTRand *param_2)

{
  LawnApp *pLVar1;
  char cVar2;
  WaveAction *this;
  FairyTaleWindWaveActionProps *pFVar3;
  ulong uVar4;
  SunDropperModule *this_00;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  this = (WaveAction *)(ulong)(uint)param_1;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(this);
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x20) <= fVar5) {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    uVar6 = PVZ_EOT();
    pLVar1 = gLawnApp;
    this[0x24] = (WaveAction)0x1;
    *(undefined4 *)(this + 0x20) = uVar6;
    cVar2 = LawnApp::IsInModule(pLVar1,1);
    if (cVar2 != '\0') goto LAB_04940d1c;
    takeThunder((ThunderWaveAction *)this);
  }
  if (this[0x24] == (WaveAction)0x0) {
    return;
  }
LAB_04940d1c:
  fVar7 = *(float *)(this + 0x1c);
  fVar5 = (float)PVZ_T();
  if (fVar7 <= fVar5) {
    uVar4 = FUN_0493ff34(*(undefined8 *)(pFVar3 + 0x40),*(undefined8 *)(pFVar3 + 0x48));
    if ((ulong)(long)*(int *)(this + 0x18) < uVar4) {
      cVar2 = LawnApp::IsInModule(gLawnApp,1);
      if (cVar2 == '\0') {
        takeThunder((ThunderWaveAction *)this);
        return;
      }
    }
    else {
      uVar6 = PVZ_EOT();
      *(undefined4 *)(this + 0x1c) = uVar6;
      if (this[0x25] == (WaveAction)0x0) {
        this[0x25] = (WaveAction)0x1;
        this_00 = (SunDropperModule *)
                  FUN_049407a8(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        if (this_00 != (SunDropperModule *)0x0) {
          SunDropperModule::SetPaused(this_00,false);
        }
        MessageRouter::Post((_func_void *)gMessageRouter);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderWaveAction::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall ThunderWaveAction::AddResourceRequirements(ThunderWaveAction *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"thunder");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


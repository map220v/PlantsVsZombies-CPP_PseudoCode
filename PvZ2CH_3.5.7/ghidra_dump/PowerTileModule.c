// Class: PowerTileModule


/* PowerTileModule::StaticGetClass() */

long * PowerTileModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerTileModule",uVar2,StaticNew);
  return sClass;
}


/* PowerTileModule::PowerTileModule() */

void __thiscall PowerTileModule::PowerTileModule(PowerTileModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06761420;
  return;
}


/* PowerTileModule::StaticNew() */

PowerTileModule * PowerTileModule::StaticNew(void)

{
  PowerTileModule *this;
  
  this = ::operator_new(0x18);
  PowerTileModule(this);
  return this;
}


/* PowerTileModule::~PowerTileModule() */

void __thiscall PowerTileModule::~PowerTileModule(PowerTileModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06761420;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* PowerTileModule::~PowerTileModule() */

void __thiscall PowerTileModule::~PowerTileModule(PowerTileModule *this)

{
  ~PowerTileModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileModule::tileLayoutFits(std::vector<Sexy::Point, std::allocator<Sexy::Point> > const&,
   Sexy::Point const&) */

void __thiscall
PowerTileModule::tileLayoutFits(PowerTileModule *this,vector *param_1,Point *param_2)

{
  TPoint<int> *this_00;
  PowerTileSubsystem *this_01;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  Point aPStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  do {
    uVar4 = *(undefined8 *)param_1;
    uVar2 = FUN_03ce92d4(uVar4,*(undefined8 *)(param_1 + 8));
    if (uVar2 <= uVar3) {
      uVar4 = 1;
      goto LAB_03ce9904;
    }
    this_00 = (TPoint<int> *)FUN_03ce92e0(uVar4,uVar3);
    Sexy::TPoint<int>::operator+(this_00,(TPoint *)param_2);
    Sexy::Point::Point(aPStack_18,aTStack_10);
    this_01 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    lVar1 = PowerTileSubsystem::FindPowerTileAt(this_01,aPStack_18);
    uVar3 = uVar3 + 1;
  } while (lVar1 == 0);
  uVar4 = 0;
LAB_03ce9904:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileModule::setupLinkedTiles() */

void __thiscall PowerTileModule::setupLinkedTiles(PowerTileModule *this)

{
  bool bVar1;
  PowerTileSubsystem *pPVar2;
  long lVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  lVar3 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x112) == '\0')) {
    pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    local_18 = FUN_03ce993c(*(undefined8 *)(pRVar4 + 0x40));
    local_10 = FUN_03ce998c(*(undefined8 *)(pRVar4 + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      PowerTileSubsystem::TryAddPowerTileAt(pPVar2,*(undefined4 *)(lVar3 + 8),lVar3,0);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerTileModule::ReRollTiles() */

void __thiscall PowerTileModule::ReRollTiles(PowerTileModule *this)

{
  PowerTileSubsystem *this_00;
  
  this_00 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  PowerTileSubsystem::ClearPowerTiles(this_00);
  setupLinkedTiles(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTileModule::registerForEvents() */

void __thiscall PowerTileModule::registerForEvents(PowerTileModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,setupLinkedTiles);
  Sexy::Delegate0::Delegate0<PowerTileModule,void(PowerTileModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


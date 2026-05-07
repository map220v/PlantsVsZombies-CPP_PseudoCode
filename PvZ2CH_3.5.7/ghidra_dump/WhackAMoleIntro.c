// Class: WhackAMoleIntro


/* WhackAMoleIntro::OnUpdate() */

void WhackAMoleIntro::OnUpdate(void)

{
  return;
}


/* WhackAMoleIntro::OnLevelEnded() */

void __thiscall WhackAMoleIntro::OnLevelEnded(WhackAMoleIntro *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleIntro::StaticClassInit() */

void WhackAMoleIntro::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackAMoleIntro");
    (*pcVar2)(plVar1,asStack_10,FUN_03b515f0,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleIntro::StaticGetClass() */

long * WhackAMoleIntro::StaticGetClass(void)

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
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"WhackAMoleIntro",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackAMoleIntro::OnGameplayStarted() */

void __thiscall WhackAMoleIntro::OnGameplayStarted(WhackAMoleIntro *this)

{
  BasePowerup::GetType((BasePowerup *)this);
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleIntro::randomMole() */

void __thiscall WhackAMoleIntro::randomMole(WhackAMoleIntro *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_03b508c4(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x50));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x50));
  lVar6 = 0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    iVar3 = Sexy::Rand(iVar2);
    uVar7 = *(undefined8 *)(this + 0x50);
    puVar4 = (undefined8 *)FUN_03b508d0(uVar7,lVar6);
    plVar5 = (long *)FUN_03b508d0(uVar7,(long)iVar3);
    fVar8 = (float)FUN_03b50664(*(undefined4 *)(*plVar5 + 0x1a8));
    EgretflowerPlantFoodBomb::SetDamageRate((EgretflowerPlantFoodBomb *)*puVar4,fVar8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    lVar6 = lVar6 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleIntro::onNotifyRandomMole() */

void __thiscall WhackAMoleIntro::onNotifyRandomMole(WhackAMoleIntro *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar2 = FUN_03b508c4(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
  uStack_18 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x50));
  uStack_10 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x50));
  lVar6 = 0;
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10), bVar1)
  {
    iVar3 = Sexy::Rand(iVar2);
    uVar7 = *(undefined8 *)(this + 0x50);
    puVar4 = (undefined8 *)FUN_03b508d0(uVar7,lVar6);
    plVar5 = (long *)FUN_03b508d0(uVar7,(long)iVar3);
    fVar8 = (float)FUN_03b50664(*(undefined4 *)(*plVar5 + 0x1a8));
    EgretflowerPlantFoodBomb::SetDamageRate((EgretflowerPlantFoodBomb *)*puVar4,fVar8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_18);
    lVar6 = lVar6 + 1;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackAMoleIntro::WhackAMoleIntro() */

void __thiscall WhackAMoleIntro::WhackAMoleIntro(WhackAMoleIntro *this)

{
  StandardLevelIntro::StandardLevelIntro((StandardLevelIntro *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06733020;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* WhackAMoleIntro::StaticNew() */

WhackAMoleIntro * WhackAMoleIntro::StaticNew(void)

{
  WhackAMoleIntro *this;
  
  this = ::operator_new(0x68);
  WhackAMoleIntro(this);
  return this;
}


/* WhackAMoleIntro::~WhackAMoleIntro() */

void __thiscall WhackAMoleIntro::~WhackAMoleIntro(WhackAMoleIntro *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06733020;
  std::vector<GridItemMole*,std::allocator<GridItemMole*>>::~vector
            ((vector<GridItemMole*,std::allocator<GridItemMole*>> *)(this + 0x50));
  StandardLevelIntro::~StandardLevelIntro((StandardLevelIntro *)this);
  return;
}


/* WhackAMoleIntro::~WhackAMoleIntro() */

void __thiscall WhackAMoleIntro::~WhackAMoleIntro(WhackAMoleIntro *this)

{
  ~WhackAMoleIntro(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleIntro::IsPlantDisabled(int, int) */

void __thiscall WhackAMoleIntro::IsPlantDisabled(WhackAMoleIntro *this,int param_1,int param_2)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>>::vector
            ((vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>> *)&local_20,
             (vector *)(pRVar2 + 0x78));
  cVar1 = std::vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>>::empty
                    ((vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>> *)&local_20);
  if (cVar1 == '\0') {
    lVar5 = 0;
    lVar3 = FUN_03b508d8(local_20,local_18);
    if (lVar3 != 0) {
      do {
        piVar4 = (int *)FUN_03b50900(local_20,lVar5);
        if ((*piVar4 == param_1) && (piVar4[1] == param_2)) goto LAB_03b53628;
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar3);
    }
    cVar1 = '\x01';
  }
LAB_03b53628:
  std::vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>>::~vector
            ((vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleIntro::GetSpwanZombieRate(int, int) */

void __thiscall WhackAMoleIntro::GetSpwanZombieRate(WhackAMoleIntro *this,int param_1,int param_2)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar6 = 0x3f000000;
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>>::vector
            ((vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>> *)&local_20,
             (vector *)(pRVar2 + 0x78));
  cVar1 = std::vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>>::empty
                    ((vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>> *)&local_20);
  if (cVar1 == '\0') {
    lVar5 = 0;
    lVar3 = FUN_03b508d8(local_20,local_18);
    if (lVar3 != 0) {
      do {
        piVar4 = (int *)FUN_03b50900(local_20,lVar5);
        if ((*piVar4 == param_1) && (piVar4[1] == param_2)) {
          iVar6 = piVar4[2];
          goto LAB_03b5371c;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar3);
    }
    iVar6 = 0x3f000000;
  }
LAB_03b5371c:
  std::vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>>::~vector
            ((vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleIntro::GetSpwanHamsterTime(int, int) */

void __thiscall WhackAMoleIntro::GetSpwanHamsterTime(WhackAMoleIntro *this,int param_1,int param_2)

{
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar6 = 0x40000000;
  local_8 = ___stack_chk_guard;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  std::vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>>::vector
            ((vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>> *)&local_20,
             (vector *)(pRVar2 + 0x78));
  cVar1 = std::vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>>::empty
                    ((vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>> *)&local_20);
  if (cVar1 == '\0') {
    lVar5 = 0;
    lVar3 = FUN_03b508d8(local_20,local_18);
    if (lVar3 != 0) {
      do {
        piVar4 = (int *)FUN_03b50900(local_20,lVar5);
        if ((*piVar4 == param_1) && (piVar4[1] == param_2)) {
          iVar6 = piVar4[3];
          goto LAB_03b53814;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar3);
    }
    iVar6 = 0x40000000;
  }
LAB_03b53814:
  std::vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>>::~vector
            ((vector<MoleNonSpawnData,std::allocator<MoleNonSpawnData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleIntro::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall WhackAMoleIntro::AddResourceRequirements(WhackAMoleIntro *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"SteamMole");
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
/* WhackAMoleIntro::registerForEvents() */

void __thiscall WhackAMoleIntro::registerForEvents(WhackAMoleIntro *this)

{
  undefined *this_00;
  long lVar1;
  LevelModuleManager *pLVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = LevelModule::getManager();
  FUN_03b50668(lVar1 + 0x80);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnIntroStarted);
  Sexy::Delegate0::Delegate0<WhackAMoleIntro,void(WhackAMoleIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdate);
  Sexy::Delegate0::Delegate0<WhackAMoleIntro,void(WhackAMoleIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLevelEnded);
  Sexy::Delegate0::Delegate0<WhackAMoleIntro,void(WhackAMoleIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGameplayStarted);
  Sexy::Delegate0::Delegate0<WhackAMoleIntro,void(WhackAMoleIntro::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRandomMole);
  Sexy::Delegate0::Delegate0<WhackAMoleIntro,void(WhackAMoleIntro::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyRandMole,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackAMoleIntro::spawnMoles() */

void __thiscall WhackAMoleIntro::spawnMoles(WhackAMoleIntro *this)

{
  GridItemMole *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  LevelModuleManager *this_01;
  HardLevelModule *pHVar4;
  RtObject *this_02;
  int iVar5;
  Board *this_03;
  float fVar6;
  GridItemMole *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (LevelModuleManager *)LevelModule::getManager();
  iVar5 = 0;
  pHVar4 = LevelModuleManager::GetModuleByClass<HardLevelModule>(this_01);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar2) {
    do {
      iVar2 = 0;
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      if (0 < iVar3) {
        do {
          cVar1 = IsPlantDisabled(this,iVar5,iVar2);
          if (cVar1 == '\0') {
            this_03 = *(Board **)(gLawnApp + 0x9f0);
            std::string::string((string *)&local_10,"mole");
            this_02 = (RtObject *)Board::AddGridItem(this_03,(string *)&local_10,iVar5,iVar2,1);
            std::string::~string((string *)&local_10);
            nop();
            local_10 = Sexy::RtObject::Cast<GridItemMole>(this_02);
            std::vector<GridItemMole*,std::allocator<GridItemMole*>>::push_back
                      ((vector<GridItemMole*,std::allocator<GridItemMole*>> *)(this + 0x50),
                       &local_10);
            fVar6 = (float)GetSpwanZombieRate(this,iVar5,iVar2);
            if (local_10 != (GridItemMole *)0x0) {
              GridItemMole::setSpawnZombieRate(local_10,fVar6);
              this_00 = local_10;
              fVar6 = (float)GetSpwanHamsterTime(this,iVar5,iVar2);
              GridItemMole::setSpawnHamsterTime(this_00,fVar6);
              GridItemMole::setHardLevel(local_10,pHVar4 != (HardLevelModule *)0x0);
            }
          }
          else {
            Board::SetGridSquareType(*(Board **)(gLawnApp + 0x9f0),iVar5,iVar2,0);
          }
          iVar2 = iVar2 + 1;
          iVar3 = BoardConstants::NUMBER_OF_ROWS();
        } while (iVar2 < iVar3);
      }
      iVar5 = iVar5 + 1;
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    } while (iVar5 < iVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WhackAMoleIntro::OnIntroStarted() */

void __thiscall WhackAMoleIntro::OnIntroStarted(WhackAMoleIntro *this)

{
  LevelModuleManager *this_00;
  WhackAMoleModule *this_01;
  
  LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_00 = (LevelModuleManager *)FUN_03b50674(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<WhackAMoleModule>(this_00);
  if (this_01 != (WhackAMoleModule *)0x0) {
    WhackAMoleModule::SetCanTouch(this_01,true);
  }
  StandardLevelIntro::startStandardIntro((StandardLevelIntro *)this,1);
  spawnMoles(this);
  return;
}


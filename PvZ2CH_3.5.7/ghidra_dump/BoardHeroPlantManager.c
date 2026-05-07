// Class: BoardHeroPlantManager


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHeroPlantManager::StaticClassInit() */

void BoardHeroPlantManager::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardHeroPlantManager");
    (*pcVar2)(plVar1,asStack_10,FUN_042bf55c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardHeroPlantManager::StaticGetClass() */

long * BoardHeroPlantManager::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"BoardHeroPlantManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardHeroPlantManager::GetClass() const */

long * BoardHeroPlantManager::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"BoardHeroPlantManager",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardHeroPlantManager::GetHeroPlant() */

void BoardHeroPlantManager::GetHeroPlant(void)

{
  bool bVar1;
  long in_x0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x50));
  if (!bVar1) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8)
    ;
    return;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x50));
  BoardHeroPlantButton::GetHeroPlant();
  return;
}


/* BoardHeroPlantManager::GetHeroPlantSunCost() */

void __thiscall BoardHeroPlantManager::GetHeroPlantSunCost(BoardHeroPlantManager *this)

{
  bool bVar1;
  BoardHeroPlantButton *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x50));
  if (!bVar1) {
    std::numeric_limits<int>::max();
    return;
  }
  this_00 = (BoardHeroPlantButton *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50))
  ;
  BoardHeroPlantButton::GetSunCost(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHeroPlantManager::ActivateHeroPlant(Sexy::RtWeakPtr<Plant>) */

void __thiscall
BoardHeroPlantManager::ActivateHeroPlant
          (BoardHeroPlantManager *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  bool bVar1;
  BoardHeroPlantButton *pBVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x50));
  if (bVar1) {
    pBVar2 = (BoardHeroPlantButton *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    BoardHeroPlantButton::SetHeroPlant(pBVar2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::LazySingleton<HeroPlantMgr>::GetInstance();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    Plant::GetType();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardHeroPlantManager::GetCurrentSunmoneyCondtion() */

int __thiscall BoardHeroPlantManager::GetCurrentSunmoneyCondtion(BoardHeroPlantManager *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(this + 0x18);
  uVar3 = *(undefined4 *)(this + 0x1c);
  uVar2 = PVZ_T();
  iVar1 = CurveLerp<int>(uVar4,uVar3,uVar2,this + 0x10,this + 0x14,1);
  return iVar1;
}


/* BoardHeroPlantManager::IncreaseSunmoneyCondtion(int) */

void __thiscall
BoardHeroPlantManager::IncreaseSunmoneyCondtion(BoardHeroPlantManager *this,int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = GetCurrentSunmoneyCondtion(this);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + param_1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x18) = uVar1;
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x1c) = fVar2 + 1.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardHeroPlantManager::InitialHeroPlantButton() */

void __thiscall BoardHeroPlantManager::InitialHeroPlantButton(BoardHeroPlantManager *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  long *plVar2;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  UIWidget *this_03;
  code *pcVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  *(undefined4 *)(this + 0x10) = 0;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x14) = 0;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x18) = uVar4;
  uVar4 = PVZ_T();
  this[0x20] = (BoardHeroPlantManager)0x1;
  *(undefined4 *)(this + 0x1c) = uVar4;
  Sexy::LazySingleton<HeroPlantMgr>::GetInstancePtr();
  cVar1 = HeroPlantMgr::IsHeroPlantActivated();
  if (cVar1 != '\0') {
    this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50);
    Sexy::RtName::RtName(aRStack_18,L"UIHeroPlantIcon");
    UIWidget::CreateWidget(aRStack_18,1);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pcVar3 = *(code **)(*plVar2 + 0x198);
    std::string::string((string *)aRStack_18,"armorflame");
    cVar1 = (*pcVar3)(plVar2,aRStack_18);
    std::string::~string((string *)aRStack_18);
    nop();
    if (cVar1 == '\0') {
      this_03 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      UIWidget::SetVisible(this_03,false);
    }
    Sexy::RtName::RtName(aRStack_18,L"UIPVZ2UnchartedHowToPlayBtn");
    UIWidget::CreateWidget(aRStack_18,1);
    Sexy::RtName::~RtName(aRStack_18);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    std::string::string((string *)aRStack_18,"HeroPlantHowToPlay");
    cVar1 = PlayerInfo::GetPlayerFlagInfo(this_02,(string *)aRStack_18);
    std::string::~string((string *)aRStack_18);
    nop();
    if (cVar1 == '\0') {
      PVZ2UnchartedModeUtils::ShowHowToPlay();
      plVar2 = *(long **)(gLawnApp + 0x9f0);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 800))(plVar2,1);
      }
      std::string::string((string *)aRStack_18,"HeroPlantHowToPlay");
      PlayerInfo::SetPlayerFlagInfo(this_02,(string *)aRStack_18,true);
      std::string::~string((string *)aRStack_18);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardHeroPlantManager::BoardHeroPlantManager() */

void __thiscall BoardHeroPlantManager::BoardHeroPlantManager(BoardHeroPlantManager *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0682c770;
  HeroPlantSaveInfo::HeroPlantSaveInfo((HeroPlantSaveInfo *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  return;
}


/* BoardHeroPlantManager::StaticNew() */

BoardHeroPlantManager * BoardHeroPlantManager::StaticNew(void)

{
  BoardHeroPlantManager *this;
  
  this = ::operator_new(0x58);
  BoardHeroPlantManager(this);
  return this;
}


/* BoardHeroPlantManager::~BoardHeroPlantManager() */

void __thiscall BoardHeroPlantManager::~BoardHeroPlantManager(BoardHeroPlantManager *this)

{
  *(undefined ***)this = &PTR_GetClass_0682c770;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)(this + 0x28));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* BoardHeroPlantManager::~BoardHeroPlantManager() */

void __thiscall BoardHeroPlantManager::~BoardHeroPlantManager(BoardHeroPlantManager *this)

{
  ~BoardHeroPlantManager(this);
  AK::FreeHook(this);
  return;
}


/* BoardHeroPlantManager::SaveHeroPlantInfo(HeroPlantSaveInfo const&) */

void __thiscall
BoardHeroPlantManager::SaveHeroPlantInfo(BoardHeroPlantManager *this,HeroPlantSaveInfo *param_1)

{
  this[0x20] = (BoardHeroPlantManager)0x0;
  HeroPlantSaveInfo::operator=((HeroPlantSaveInfo *)(this + 0x28),param_1);
  return;
}


/* BoardHeroPlantManager::LoadHeroPlantInfo(HeroPlantSaveInfo&) */

void __thiscall
BoardHeroPlantManager::LoadHeroPlantInfo(BoardHeroPlantManager *this,HeroPlantSaveInfo *param_1)

{
  HeroPlantSaveInfo::operator=(param_1,(HeroPlantSaveInfo *)(this + 0x28));
  return;
}


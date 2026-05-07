// Class: AdaptorNewPVPLevelUpScreen


/* AdaptorNewPVPLevelUpScreen::~AdaptorNewPVPLevelUpScreen() */

void __thiscall
AdaptorNewPVPLevelUpScreen::~AdaptorNewPVPLevelUpScreen(AdaptorNewPVPLevelUpScreen *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664a770;
  *(undefined ***)this = &PTR_GetClass_0664a410;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664a7b8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x140));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPLevelUpScreen::~AdaptorNewPVPLevelUpScreen() */

void __thiscall
AdaptorNewPVPLevelUpScreen::~AdaptorNewPVPLevelUpScreen(AdaptorNewPVPLevelUpScreen *this)

{
  ~AdaptorNewPVPLevelUpScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPLevelUpScreen::StaticClassInit() */

void AdaptorNewPVPLevelUpScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPLevelUpScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_034bdd64,0x160,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPLevelUpScreen::StaticGetClass() */

long * AdaptorNewPVPLevelUpScreen::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPLevelUpScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPLevelUpScreen::GetClass() const */

long * AdaptorNewPVPLevelUpScreen::GetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorNewPVPLevelUpScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPLevelUpScreen::Close() */

void __thiscall AdaptorNewPVPLevelUpScreen::Close(AdaptorNewPVPLevelUpScreen *this)

{
  bool bVar1;
  
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x140));
  if (bVar1) {
    std::function<void()>::operator()((function<void()> *)(this + 0x140));
  }
  (**(code **)(*(long *)this + 0x158))(this,0);
  HotUIAdaptor::RemoveAndDeleteWidget((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPLevelUpScreen::onLevelUpResult(bool) */

void AdaptorNewPVPLevelUpScreen::onLevelUpResult(bool param_1)

{
  bool bVar1;
  HotUIAdaptor *this;
  
  this = (HotUIAdaptor *)(ulong)param_1;
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x140));
  if (bVar1) {
    std::function<void()>::operator()((function<void()> *)(this + 0x140));
  }
  (**(code **)(*(long *)this + 0x158))(this,0);
  HotUIAdaptor::RemoveAndDeleteWidget(this);
  return;
}


/* AdaptorNewPVPLevelUpScreen::onNewPVPNetworkResponseReceived(int, int) */

void __thiscall
AdaptorNewPVPLevelUpScreen::onNewPVPNetworkResponseReceived
          (AdaptorNewPVPLevelUpScreen *this,int param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 == 9) {
    bVar1 = SUB81(this,0);
    switch(param_2) {
    case 0:
    case 1:
      break;
    case 2:
      onLevelUpResult(bVar1);
      return;
    case 3:
    case 4:
    case 5:
      onLevelUpResult(bVar1);
      return;
    default:
      onLevelUpResult(bVar1);
      return;
    }
  }
  return;
}


/* AdaptorNewPVPLevelUpScreen::AdaptorNewPVPLevelUpScreen() */

void __thiscall
AdaptorNewPVPLevelUpScreen::AdaptorNewPVPLevelUpScreen(AdaptorNewPVPLevelUpScreen *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_0664a410;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664a770;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664a7b8;
  AdaptorNewPVPTrainingEntryConfig::AdaptorNewPVPTrainingEntryConfig
            ((AdaptorNewPVPTrainingEntryConfig *)(this + 0x120));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x140));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPVPNetworkResponseReceived);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<AdaptorNewPVPLevelUpScreen,void(AdaptorNewPVPLevelUpScreen::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NewPVPNetworkResponseReceived,&local_40);
  return;
}


/* AdaptorNewPVPLevelUpScreen::StaticNew() */

AdaptorNewPVPLevelUpScreen * AdaptorNewPVPLevelUpScreen::StaticNew(void)

{
  AdaptorNewPVPLevelUpScreen *this;
  
  this = ::operator_new(0x160);
  AdaptorNewPVPLevelUpScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPLevelUpScreen::initStats(std::map<std::string, std::string, std::less<std::string >,
   std::allocator<std::pair<std::string const, std::string > > >&) */

void __thiscall AdaptorNewPVPLevelUpScreen::initStats(AdaptorNewPVPLevelUpScreen *this,map *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  string *psVar7;
  int extraout_w1;
  Sexy *pSVar8;
  bool *pbVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  bool abStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  Sexy aSStack_38 [8];
  Sexy aSStack_30 [8];
  Sexy aSStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_18[0] = 1;
  local_8 = ___stack_chk_guard;
  piVar5 = eastl::max_alt<int>((int *)(this + 0x128),(int *)local_18);
  iVar2 = *piVar5;
  iVar1 = iVar2 + 1;
  iVar3 = NewPVPUtils::GetZombieCost(*(int *)(this + 0x120),iVar1);
  uVar4 = NewPVPUtils::GetZombieCost(*(int *)(this + 0x120),iVar2);
  std::string::string(asStack_20,"$COSTVALUE");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_20);
  Sexy::StrFormat("%d",(string *)local_18,(ulong)uVar4);
  FUN_05474278(uVar6,(string *)local_18);
  std::string::~string((string *)local_18);
  std::string::~string(asStack_20);
  nop();
  if (this[0x138] != (AdaptorNewPVPLevelUpScreen)0x0) {
    iVar3 = iVar3 - uVar4;
    lVar10 = (long)iVar3;
    uVar13 = (ulong)(lVar10 >= 0) * lVar10 + (ulong)(lVar10 < 0) * -lVar10;
    std::string::string(asStack_20,"$COST_CHANGED_VALUE");
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)param_1,asStack_20);
    if (iVar3 < 1) {
      if (iVar3 != 0) {
        Sexy::StrFormat("-%d",(string *)local_18,uVar13 & 0xffffffff);
        goto LAB_0350ccb8;
      }
      std::string::string((string *)local_18,"0");
      FUN_05474278(uVar6,(string *)local_18);
      std::string::~string((string *)local_18);
      nop();
    }
    else {
      Sexy::StrFormat("+%d",(string *)local_18,uVar13 & 0xffffffff);
LAB_0350ccb8:
      FUN_05474278(uVar6,(string *)local_18);
      std::string::~string((string *)local_18);
    }
    std::string::~string(asStack_20);
    nop();
  }
  fVar11 = (float)NewPVPUtils::GetZombieDPS(*(int *)(this + 0x120),iVar1);
  fVar12 = (float)NewPVPUtils::GetZombieDPS(*(int *)(this + 0x120),iVar2);
  std::string::string(asStack_20,"$ATTACKVALUE");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_20);
  Sexy::StrFormat("%d",(string *)local_18,(ulong)(uint)(int)fVar12);
  FUN_05474278(uVar6,(string *)local_18);
  std::string::~string((string *)local_18);
  std::string::~string(asStack_20);
  nop();
  if (this[0x138] != (AdaptorNewPVPLevelUpScreen)0x0) {
    iVar3 = (int)fVar11 - (int)fVar12;
    lVar10 = (long)iVar3;
    uVar13 = (ulong)(lVar10 >= 0) * lVar10 + (ulong)(lVar10 < 0) * -lVar10;
    std::string::string(asStack_20,"$ATTACK_CHANGED_VALUE");
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)param_1,asStack_20);
    if (iVar3 < 1) {
      if (iVar3 != 0) {
        Sexy::StrFormat("-%d",(string *)local_18,uVar13 & 0xffffffff);
        goto LAB_0350cc2c;
      }
      std::string::string((string *)local_18,"0");
      FUN_05474278(uVar6,(string *)local_18);
      std::string::~string((string *)local_18);
      nop();
    }
    else {
      Sexy::StrFormat("+%d",(string *)local_18,uVar13 & 0xffffffff);
LAB_0350cc2c:
      FUN_05474278(uVar6,(string *)local_18);
      std::string::~string((string *)local_18);
    }
    std::string::~string(asStack_20);
    nop();
  }
  fVar11 = (float)NewPVPUtils::GetZombieHitpoints(*(int *)(this + 0x120),iVar1);
  fVar12 = (float)NewPVPUtils::GetZombieHitpoints(*(int *)(this + 0x120),iVar2);
  std::string::string(asStack_20,"$HPVALUE");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_20);
  Sexy::StrFormat("%d",(string *)local_18,(ulong)(uint)(int)fVar12);
  FUN_05474278(uVar6,(string *)local_18);
  std::string::~string((string *)local_18);
  std::string::~string(asStack_20);
  nop();
  if (this[0x138] != (AdaptorNewPVPLevelUpScreen)0x0) {
    iVar3 = (int)fVar11 - (int)fVar12;
    lVar10 = (long)iVar3;
    uVar13 = (ulong)(lVar10 >= 0) * lVar10 + (ulong)(lVar10 < 0) * -lVar10;
    std::string::string(asStack_20,"$HP_CHANGED_VALUE");
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)param_1,asStack_20);
    if (iVar3 < 1) {
      if (iVar3 != 0) {
        Sexy::StrFormat("-%d",(string *)local_18,uVar13 & 0xffffffff);
        goto LAB_0350cba0;
      }
      std::string::string((string *)local_18,"0");
      FUN_05474278(uVar6,(string *)local_18);
      std::string::~string((string *)local_18);
      nop();
    }
    else {
      Sexy::StrFormat("+%d",(string *)local_18,uVar13 & 0xffffffff);
LAB_0350cba0:
      FUN_05474278(uVar6,(string *)local_18);
      std::string::~string((string *)local_18);
    }
    std::string::~string(asStack_20);
    nop();
  }
  fVar11 = (float)NewPVPUtils::GetZombieSpeed(*(int *)(this + 0x120),iVar1);
  fVar12 = (float)NewPVPUtils::GetZombieSpeed(*(int *)(this + 0x120),iVar2);
  std::string::string(asStack_20,"$SPEEDVALUE");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_20);
  Sexy::StrFormat("%.2f/s",(string *)local_18,(double)fVar12);
  FUN_05474278(uVar6,(string *)local_18);
  std::string::~string((string *)local_18);
  std::string::~string(asStack_20);
  nop();
  if (this[0x138] == (AdaptorNewPVPLevelUpScreen)0x0) goto LAB_0350c8d0;
  fVar11 = fVar11 - fVar12;
  fVar12 = (float)Sexy::SexyMath::Fabs(fVar11);
  std::string::string(asStack_20,"$SPEED_CHANGED_VALUE");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_20);
  if (fVar11 <= 0.0) {
    if (fVar11 < 0.0) {
      Sexy::StrFormat("-%.2f",(string *)local_18,(double)fVar12);
      goto LAB_0350cb1c;
    }
    std::string::string((string *)local_18,"0");
    FUN_05474278(uVar6,(string *)local_18);
    std::string::~string((string *)local_18);
    nop();
  }
  else {
    Sexy::StrFormat("+%.2f",(string *)local_18,(double)fVar12);
LAB_0350cb1c:
    FUN_05474278(uVar6,(string *)local_18);
    std::string::~string((string *)local_18);
  }
  std::string::~string(asStack_20);
  nop();
LAB_0350c8d0:
  psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  pbVar9 = abStack_48;
  ServerZombieID::ServerZombieID((ServerZombieID *)local_18,*(int *)(this + 0x120));
  ServerZombieID::ToString();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
  std::string::~string(asStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_40);
  Zombie::GetFormattedNameString((Zombie *)aSStack_38,(string *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  pSVar8 = aSStack_28;
  std::string::string(asStack_20,"$NAMEVALUE");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_20);
  Sexy::WStringToString(aSStack_38,(wstring *)0x0,(bool *)pSVar8);
  FUN_05474278(uVar6,(string *)local_18);
  std::string::~string((string *)local_18);
  std::string::~string(asStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_40);
  Zombie::GetFormattedDescriptionHeader((Zombie *)aSStack_30,(string *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  pSVar8 = aSStack_28;
  std::string::string(asStack_20,"$DES");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_20);
  Sexy::WStringToString(aSStack_30,(wstring *)0x0,(bool *)pSVar8);
  FUN_05474278(uVar6,(string *)local_18);
  std::string::~string((string *)local_18);
  std::string::~string(asStack_20);
  nop();
  NewPVPUtils::GetZombieBattleTypeDes((NewPVPUtils *)(ulong)*(uint *)(this + 0x120),extraout_w1);
  std::string::string(asStack_20,"$BATTLETYPEVALUE");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)param_1,asStack_20);
  Sexy::WStringToString(aSStack_28,(wstring *)0x0,pbVar9);
  FUN_05474278(uVar6,(string *)local_18);
  std::string::~string((string *)local_18);
  std::string::~string(asStack_20);
  nop();
  FUN_05476c50(aSStack_28);
  FUN_05476c50(aSStack_30);
  FUN_05476c50(aSStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPLevelUpScreen::onLoadUIView() */

void __thiscall AdaptorNewPVPLevelUpScreen::onLoadUIView(AdaptorNewPVPLevelUpScreen *this)

{
  bool bVar1;
  SecretGachaMgr *this_00;
  undefined8 uVar2;
  HotUIManager *this_01;
  HotUIFile *this_02;
  HotUISeedPacketList *pHVar3;
  string *psVar4;
  int *piVar5;
  long *plVar6;
  int extraout_w1;
  int extraout_w1_00;
  float fVar7;
  string asStack_88 [8];
  string asStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  Zombie aZStack_70 [8];
  Zombie aZStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [8];
  undefined4 local_48 [4];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (SecretGachaMgr *)initStats(this,(map *)amStack_38);
  SecretGachaMgr::GetScreenType(this_00);
  uVar2 = FUN_0547429c(asStack_88);
  Sexy::StrFormat("NewPVPLevelUpScreen_%s",asStack_80,uVar2);
  this_01 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  this_02 = (HotUIFile *)HotUIManager::LoadUIFile(this_01,asStack_80,(map *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,this_02);
  std::string::string((string *)local_48,"ZombieNameLabel");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ServerZombieID::ServerZombieID((ServerZombieID *)local_48,*(int *)(this + 0x120));
  ServerZombieID::ToString();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  std::string::~string(asStack_50);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_48,(RtWeakPtrBase *)aRStack_78);
  Zombie::GetFormattedNameString(aZStack_70,(string *)local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
  (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,aZStack_70);
  std::string::string((string *)local_48,"DescriptionLabel");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_48,(RtWeakPtrBase *)aRStack_78);
  Zombie::GetFormattedDescriptionHeader(aZStack_68,(string *)local_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
  (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,aZStack_68);
  std::string::string((string *)local_48,"ZombieBattleTypeLabel");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  NewPVPUtils::GetZombieBattleTypeDes((NewPVPUtils *)(ulong)*(uint *)(this + 0x120),extraout_w1);
  NewPVPUtils::GetZombieRareDes((NewPVPUtils *)(ulong)*(uint *)(this + 0x120),extraout_w1_00);
  TodStringTranslate(L"[NEW_PVP_TRAINING_LEVELUP_BATTLE_LABEL]");
  TodReplaceString((wstring *)local_48,L"{RARE}",awStack_58);
  FUN_05476c50((string *)local_48);
  TodReplaceString((wstring *)asStack_50,L"{BATTLE_TYPE}",awStack_60);
  FUN_054766c8(asStack_50,(string *)local_48);
  FUN_05476c50((string *)local_48);
  (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,asStack_50);
  local_48[0] = 1;
  piVar5 = eastl::max_alt<int>((int *)(this + 0x128),(int *)local_48);
  fVar7 = (float)NewPVPUtils::GetZombieDPS(*(int *)(this + 0x120),*piVar5);
  if (0x270e < (int)fVar7) {
    std::string::string((string *)local_48,"StatsAttackValue");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,(string *)local_48);
    std::string::~string((string *)local_48);
    nop();
    TodStringTranslate(L"[NEW_PVP_TRAINING_LEVELUP_STATS_ATTACK_INSTANT_KILL]");
    (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,(string *)local_48);
    FUN_05476c50((string *)local_48);
  }
  if ((this[0x138] == (AdaptorNewPVPLevelUpScreen)0x0) || (*(int *)(this + 0x134) == -1)) {
    std::string::string((string *)local_48,"StatsCostChangedValue");
    plVar6 = (long *)HotUIFile::GetWidgetByName(this_02,(string *)local_48);
    (**(code **)(*plVar6 + 0x158))(plVar6,0);
    std::string::~string((string *)local_48);
    nop();
    std::string::string((string *)local_48,"StatsAttackChangedValue");
    plVar6 = (long *)HotUIFile::GetWidgetByName(this_02,(string *)local_48);
    (**(code **)(*plVar6 + 0x158))(plVar6,0);
    std::string::~string((string *)local_48);
    nop();
    std::string::string((string *)local_48,"StatsHPChangedValue");
    plVar6 = (long *)HotUIFile::GetWidgetByName(this_02,(string *)local_48);
    (**(code **)(*plVar6 + 0x158))(plVar6,0);
    std::string::~string((string *)local_48);
    nop();
    std::string::string((string *)local_48,"StatsSpeedChangedValue");
    plVar6 = (long *)HotUIFile::GetWidgetByName(this_02,(string *)local_48);
    (**(code **)(*plVar6 + 0x158))(plVar6,0);
    std::string::~string((string *)local_48);
    nop();
  }
  std::string::string((string *)local_48,"StatsCostChangedValue");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  HotUILabel::GetText();
  bVar1 = std::operator==((wstring *)local_48,L"0");
  FUN_05476c50((string *)local_48);
  if (bVar1) {
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
  }
  std::string::string((string *)local_48,"StatsAttackChangedValue");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  HotUILabel::GetText();
  bVar1 = std::operator==((wstring *)local_48,L"0");
  FUN_05476c50((string *)local_48);
  if (bVar1) {
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
  }
  std::string::string((string *)local_48,"StatsHPChangedValue");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  HotUILabel::GetText();
  bVar1 = std::operator==((wstring *)local_48,L"0");
  FUN_05476c50((string *)local_48);
  if (bVar1) {
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
  }
  std::string::string((string *)local_48,"StatsSpeedChangedValue");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,(string *)local_48);
  std::string::~string((string *)local_48);
  nop();
  HotUILabel::GetText();
  bVar1 = std::operator==((wstring *)local_48,L"0");
  FUN_05476c50((string *)local_48);
  if (bVar1) {
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
  }
  FUN_05476c50(asStack_50);
  FUN_05476c50(awStack_58);
  FUN_05476c50(awStack_60);
  FUN_05476c50(aZStack_68);
  FUN_05476c50(aZStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  std::string::~string(asStack_80);
  std::string::~string(asStack_88);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPLevelUpScreen::setup() */

void __thiscall AdaptorNewPVPLevelUpScreen::setup(AdaptorNewPVPLevelUpScreen *this)

{
  int iVar1;
  int iVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  NewPVPMgr *pNVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    iVar2 = *(int *)(this + 0x128);
    std::string::string(asStack_10,"CloseButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,2,(ButtonListener *)(this + 0xd8));
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar1 = NewPVPMgr::GetCurrentLevelUpPiece(pNVar4,*(int *)(this + 0x120));
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar2 = NewPVPMgr::GetZombieLevelUpPieceRequired(pNVar4,*(int *)(this + 0x120),iVar2 + 1);
    std::string::string(asStack_10,"LevelUpButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,1,(ButtonListener *)(this + 0xd8));
    if (this[0x138] == (AdaptorNewPVPLevelUpScreen)0x0) {
      TodStringTranslate(L"[NEW_PVP_TRAINING_LEVELUP_UNLOCK_BTN]");
      HotUIButton::SetLabel((HotUIButton *)pHVar3,asStack_10);
      FUN_05476c50(asStack_10);
    }
    if (iVar1 < iVar2) {
      (**(code **)(*(long *)pHVar3 + 0x188))(pHVar3,1);
    }
    if (iVar2 == -1) {
      TodStringTranslate(L"[NEW_PVP_TRAINING_LEVELUP_BTN_MAX]");
      HotUIButton::SetLabel((HotUIButton *)pHVar3,asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)pHVar3 + 0x188))(pHVar3,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPLevelUpScreen::onLinkToUIViewCreated() */

void __thiscall AdaptorNewPVPLevelUpScreen::onLinkToUIViewCreated(AdaptorNewPVPLevelUpScreen *this)

{
  int iVar1;
  int iVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  NewPVPMgr *pNVar4;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    iVar2 = *(int *)(this + 0x128);
    std::string::string(asStack_10,"CloseButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,2,(ButtonListener *)(this + 0xd8));
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar1 = NewPVPMgr::GetCurrentLevelUpPiece(pNVar4,*(int *)(this + 0x120));
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar2 = NewPVPMgr::GetZombieLevelUpPieceRequired(pNVar4,*(int *)(this + 0x120),iVar2 + 1);
    std::string::string(asStack_10,"LevelUpButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,1,(ButtonListener *)(this + 0xd8));
    if (this[0x138] == (AdaptorNewPVPLevelUpScreen)0x0) {
      TodStringTranslate(L"[NEW_PVP_TRAINING_LEVELUP_UNLOCK_BTN]");
      HotUIButton::SetLabel((HotUIButton *)pHVar3,asStack_10);
      FUN_05476c50(asStack_10);
    }
    if (iVar1 < iVar2) {
      (**(code **)(*(long *)pHVar3 + 0x188))(pHVar3,1);
    }
    if (iVar2 == -1) {
      TodStringTranslate(L"[NEW_PVP_TRAINING_LEVELUP_BTN_MAX]");
      HotUIButton::SetLabel((HotUIButton *)pHVar3,asStack_10);
      FUN_05476c50(asStack_10);
      (**(code **)(*(long *)pHVar3 + 0x188))(pHVar3,1);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPLevelUpScreen::onLevelUp() */

void __thiscall AdaptorNewPVPLevelUpScreen::onLevelUp(AdaptorNewPVPLevelUpScreen *this)

{
  NewPVPMgr *this_00;
  
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::RequestZombieLevelUp(this_00,*(int *)(this + 0x120));
  return;
}


/* AdaptorNewPVPLevelUpScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPLevelUpScreen::ButtonDepress(AdaptorNewPVPLevelUpScreen *this,int param_1)

{
  if (param_1 == 1) {
    onLevelUp(this);
    return;
  }
  if (param_1 == 2) {
    Close(this);
    return;
  }
  return;
}


/* non-virtual thunk to AdaptorNewPVPLevelUpScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPLevelUpScreen::ButtonDepress(AdaptorNewPVPLevelUpScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


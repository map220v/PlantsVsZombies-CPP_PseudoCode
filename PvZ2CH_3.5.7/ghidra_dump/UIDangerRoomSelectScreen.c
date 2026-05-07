// Class: UIDangerRoomSelectScreen


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::Initialize() */

void __thiscall UIDangerRoomSelectScreen::Initialize(UIDangerRoomSelectScreen *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIDangerRoomSelect");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomSelectScreen::onDangerRoomSelectListSaved() */

void __thiscall
UIDangerRoomSelectScreen::onDangerRoomSelectListSaved(UIDangerRoomSelectScreen *this)

{
  (**(code **)(*(long *)this + 0x348))();
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* UIDangerRoomSelectScreen::canSelect() */

bool __thiscall UIDangerRoomSelectScreen::canSelect(UIDangerRoomSelectScreen *this)

{
  ulong uVar1;
  
  uVar1 = FUN_03d946b4(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
  return uVar1 < (ulong)(long)*(int *)(this + 0x180);
}


/* UIDangerRoomSelectScreen::initMaxSelect() */

void __thiscall UIDangerRoomSelectScreen::initMaxSelect(UIDangerRoomSelectScreen *this)

{
  DangerRoomManager *this_00;
  undefined4 uVar1;
  
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstance();
  uVar1 = DangerRoomManager::GetMaxSelectedPlant(this_00);
  *(undefined4 *)(this + 0x180) = uVar1;
  return;
}


/* UIDangerRoomSelectScreen::initSelectList() */

void __thiscall UIDangerRoomSelectScreen::initSelectList(UIDangerRoomSelectScreen *this)

{
  DangerRoomManager *this_00;
  
  this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstance();
  DangerRoomManager::GetSelectedPlantList(this_00,(vector *)(this + 0x168));
  return;
}


/* UIDangerRoomSelectScreen::onDangerRoomSelectResultClosed() */

void __thiscall
UIDangerRoomSelectScreen::onDangerRoomSelectResultClosed(UIDangerRoomSelectScreen *this)

{
  DangerRoomManager *pDVar1;
  
  pDVar1 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstance();
  DangerRoomManager::SaveSelectedPlantList(pDVar1,(vector *)(this + 0x168));
  pDVar1 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstance();
  DangerRoomManager::SendSelectPlantList(pDVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::updateSaveBtn() */

void __thiscall UIDangerRoomSelectScreen::updateSaveBtn(UIDangerRoomSelectScreen *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  ulong uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"root/dialog/menu/btnSave");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    uVar3 = FUN_03d946b4(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
    if (uVar3 < (ulong)(long)*(int *)(this + 0x180)) {
      (**(code **)(*(long *)pDVar2 + 0x338))(pDVar2,0);
    }
    else {
      (**(code **)(*(long *)pDVar2 + 0x338))(pDVar2,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::updateSelectInfo() */

void __thiscall UIDangerRoomSelectScreen::updateSelectInfo(UIDangerRoomSelectScreen *this)

{
  int iVar1;
  string *psVar2;
  DTouchLayer *pDVar3;
  undefined8 uVar4;
  wstring *extraout_x1;
  wstring awStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(awStack_20);
  TodStringTranslate(L"[DANGERROOM_SELECT_INFO]");
  FUN_054766c8(awStack_20,asStack_10);
  FUN_05476c50(asStack_10);
  iVar1 = FUN_03d946b4(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
  TodReplaceNumberString(awStack_20,L"{NUMBER_1}",iVar1);
  FUN_054766c8(awStack_20,asStack_10);
  FUN_05476c50(asStack_10);
  TodReplaceNumberString(awStack_20,L"{NUMBER_2}",*(int *)(this + 0x180));
  FUN_054766c8(awStack_20,asStack_10);
  FUN_05476c50(asStack_10);
  Sexy::SexyStringToUTF8String((Sexy *)awStack_20,extraout_x1);
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"select_info_number");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_10);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    uVar4 = FUN_0547429c(asStack_18);
    (**(code **)(*(long *)pDVar3 + 0x338))(pDVar3,uVar4);
  }
  std::string::~string(asStack_18);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomSelectScreen::onNarrationFinished() */

void UIDangerRoomSelectScreen::onNarrationFinished(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (pPVar1 != (PlayerInfo *)0x0) {
    PlayerInfo::CompleteTutorial(pPVar1,0x37);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::checkTutorial() */

void __thiscall UIDangerRoomSelectScreen::checkTutorial(UIDangerRoomSelectScreen *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  CrazyNPCManager *pCVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (((pPVar2 != (PlayerInfo *)0x0) &&
      (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x37), cVar1 == '\0')) &&
     (pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp),
     pCVar3 != (CrazyNPCManager *)0x0)) {
    std::string::string(asStack_60,"DANGERROOM_SELECT_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<UIDangerRoomSelectScreen,void(UIDangerRoomSelectScreen::*)()>
              (aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::UIDangerRoomSelectScreen() */

void __thiscall UIDangerRoomSelectScreen::UIDangerRoomSelectScreen(UIDangerRoomSelectScreen *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06772d70;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x150));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  *(undefined4 *)(this + 0x180) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDangerRoomSelectResultClosed);
  Sexy::Delegate0::Delegate0<UIDangerRoomSelectScreen,void(UIDangerRoomSelectScreen::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::DangerRoomSelectResultClosed,aDStack_38)
  ;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDangerRoomSelectListSaved);
  Sexy::Delegate0::Delegate0<UIDangerRoomSelectScreen,void(UIDangerRoomSelectScreen::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::DangerRoomSelectListSaved,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomSelectScreen::create(bool) */

UIDangerRoomSelectScreen * UIDangerRoomSelectScreen::create(bool param_1)

{
  UIDangerRoomSelectScreen *this;
  
  if (s_pWidgetHandler != (UIDangerRoomSelectScreen *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x188);
  UIDangerRoomSelectScreen(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  checkTutorial(this);
  s_pWidgetHandler = this;
  return this;
}


/* UIDangerRoomSelectScreen::~UIDangerRoomSelectScreen() */

void __thiscall UIDangerRoomSelectScreen::~UIDangerRoomSelectScreen(UIDangerRoomSelectScreen *this)

{
  *(undefined ***)this = &PTR_GetClass_06772d70;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  s_pWidgetHandler = 0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x168));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x150));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIDangerRoomSelectScreen::~UIDangerRoomSelectScreen() */

void __thiscall UIDangerRoomSelectScreen::~UIDangerRoomSelectScreen(UIDangerRoomSelectScreen *this)

{
  ~UIDangerRoomSelectScreen(this);
  AK::FreeHook(this);
  return;
}


/* UIDangerRoomSelectScreen::save() */

void __thiscall UIDangerRoomSelectScreen::save(UIDangerRoomSelectScreen *this)

{
  UIDangerRoomSelectScreenResult::create((vector *)(this + 0x168),true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::updatePlantList(int) */

void __thiscall
UIDangerRoomSelectScreen::updatePlantList(UIDangerRoomSelectScreen *this,int param_1)

{
  vector<int,std::allocator<int>> *this_00;
  bool bVar1;
  int iVar2;
  int *piVar3;
  string *psVar4;
  long lVar5;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x138);
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear(this_00);
  if (param_1 == -1) {
    std::vector<int,std::allocator<int>>::operator=(this_00,(vector *)(this + 0x150));
  }
  else {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x150));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x150));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      local_2c = *piVar3;
      iVar2 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar2);
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      if (param_1 == *(int *)(lVar5 + 0xd0)) {
        std::vector<int,std::allocator<int>>::push_back(this_00,&local_2c);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      std::string::~string(asStack_18);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomSelectScreen::initPlantList() */

void __thiscall UIDangerRoomSelectScreen::initPlantList(UIDangerRoomSelectScreen *this)

{
  vector *this_00;
  DangerRoomManager *this_01;
  undefined8 uVar1;
  undefined8 uVar2;
  
  this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstance();
  this_00 = (vector *)(this + 0x150);
  DangerRoomManager::GetInitPlantList(this_01,this_00);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)this_00);
  std::
  sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,bool(*)(int,int)>
            (uVar1,uVar2,sortByRare);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::UserInit() */

void __thiscall UIDangerRoomSelectScreen::UserInit(UIDangerRoomSelectScreen *this)

{
  uint uVar1;
  exception_ptr *this_00;
  string *psVar2;
  DTouchLayer *pDVar3;
  ulong uVar4;
  code *pcVar5;
  string asStack_40 [8];
  string asStack_38 [16];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (exception_ptr *)(this + 0xd8);
  initMaxSelect(this);
  initPlantList(this);
  initSelectList(this);
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_38,"root/dialog/menu/btnClose");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_38);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar3 + 0x350);
    FUN_03d957c8(afStack_28,this);
    (*pcVar5)(pDVar3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_38,"root/dialog/bg_select_info/menu3/btnSelect");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_38);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar3 + 0x350);
    FUN_03d95824(afStack_28,this);
    (*pcVar5)(pDVar3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_38,"root/dialog/menu/btnSave");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_38);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar3 + 0x350);
    FUN_03d95880(afStack_28,this);
    (*pcVar5)(pDVar3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_38,"root/dialog/menu2/btnAll");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_38);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar5 = *(code **)(*(long *)pDVar3 + 0x350);
    FUN_03d958dc(afStack_28,this);
    (*pcVar5)(pDVar3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    (**(code **)(*(long *)pDVar3 + 1000))(pDVar3);
  }
  uVar4 = 0;
  do {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    DString::Format("root/dialog/menu2/btnRare%d",asStack_38,uVar4);
    DString::operator_cast_to_string((DString *)asStack_38);
    pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
    std::string::~string(asStack_40);
    DString::~DString((DString *)asStack_38);
    if (pDVar3 != (DTouchLayer *)0x0) {
      pcVar5 = *(code **)(*(long *)pDVar3 + 0x350);
      FUN_03d95938(afStack_28,this);
      (*pcVar5)(pDVar3,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    }
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulong)uVar1;
  } while (uVar1 != 5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::updateSelectBox(std::vector<int, std::allocator<int> > const&) */

void __thiscall
UIDangerRoomSelectScreen::updateSelectBox(UIDangerRoomSelectScreen *this,vector *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  int *piVar3;
  long *plVar4;
  char *__s;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x168);
  local_30 = FUN_03d9631c(*(undefined8 *)param_1);
  local_28 = FUN_03d9636c(*(undefined8 *)(param_1 + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    iVar1 = *piVar3;
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
    pcVar7 = *(code **)(*plVar4 + 0x58);
    DString::DString((DString *)local_18,iVar1);
    __s = (char *)DString::c_str((DString *)local_18);
    std::string::string((string *)&local_20,__s);
    plVar4 = (long *)(*pcVar7)(plVar4,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    DString::~DString((DString *)local_18);
    if (plVar4 != (long *)0x0) {
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_20 = FUN_03d96be0(uVar5,uVar6,iVar1);
      local_18[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
      if (bVar2) {
        (**(code **)(*plVar4 + 0xd8))(plVar4,1);
      }
      else {
        (**(code **)(*plVar4 + 0xd8))(plVar4);
      }
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDangerRoomSelectScreen::onSelectListUpdated(SelectMode) */

void __thiscall
UIDangerRoomSelectScreen::onSelectListUpdated(UIDangerRoomSelectScreen *this,int param_2)

{
  if (param_2 == 2) {
    updateSelectBox(this,(vector *)(this + 0x150));
  }
  else if (param_2 == 1) {
    updateSelectBox(this,(vector *)(this + 0x138));
    updateSelectInfo(this);
    updateSaveBtn(this);
    return;
  }
  updateSelectInfo(this);
  updateSaveBtn(this);
  return;
}


/* UIDangerRoomSelectScreen::updateSelectList(std::vector<int, std::allocator<int> > const&) */

void __thiscall
UIDangerRoomSelectScreen::updateSelectList(UIDangerRoomSelectScreen *this,vector *param_1)

{
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x168),param_1);
  onSelectListUpdated(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::fastSelect() */

void __thiscall UIDangerRoomSelectScreen::fastSelect(UIDangerRoomSelectScreen *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  ulong uVar1;
  char cVar2;
  bool bVar3;
  DangerRoomManager *this_01;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x138);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<int,std::allocator<int>>::vector(avStack_20,(vector *)this_00);
  this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstance();
  DangerRoomManager::GetFavoritePlantList(this_01,(vector *)avStack_38);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  std::sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>(uVar4,uVar5);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::sort<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>(uVar4,uVar5);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  uVar8 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)&local_50);
  std::
  set_intersection<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::back_insert_iterator<std::vector<int,std::allocator<int>>>>
            (uVar4,uVar5,uVar6,uVar7,uVar8);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_50);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_70,(__normal_iterator *)&local_78);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  std::vector<int,std::allocator<int>>::
  insert<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,void>
            ((vector<int,std::allocator<int>> *)&local_50,local_70,uVar4,uVar5);
  cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)&local_50);
  if (cVar2 != '\0') {
LAB_03d984a8:
    std::vector<int,std::allocator<int>>::~vector(avStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_38);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_68);
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_50);
  puVar9 = (undefined8 *)
           eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                     ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_70);
  local_80 = *puVar9;
  do {
    local_70 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_50);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_70);
    while( true ) {
      if (!bVar3) {
        uVar10 = FUN_03d946b4(local_50,local_48);
        uVar1 = (long)(int)uVar10;
        if ((ulong)(long)*(int *)(this + 0x180) <= uVar10) {
          uVar1 = (long)*(int *)(this + 0x180);
        }
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_50);
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_50);
        uVar5 = __gnu_cxx::__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                ::operator+((__normal_iterator<wchar_t*,std::vector<wchar_t,std::allocator<wchar_t>>>
                             *)&local_70,uVar1);
        std::vector<int,std::allocator<int>>::
        assign<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,void>
                  ((vector<int,std::allocator<int>> *)avStack_68,uVar4,uVar5);
        updateSelectList(this,(vector *)avStack_68);
        goto LAB_03d984a8;
      }
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_50);
      uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      local_78 = std::
                 find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                           (uVar4,local_80,uVar5);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_80);
      if (!bVar3) break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_70,(__normal_iterator *)&local_80);
      local_80 = std::vector<int,std::allocator<int>>::erase
                           ((vector<int,std::allocator<int>> *)&local_50,local_70);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_70);
    }
    FUN_03d960f0((__normal_iterator *)&local_80);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::updateSelectList(int, bool) */

void __thiscall
UIDangerRoomSelectScreen::updateSelectList(UIDangerRoomSelectScreen *this,int param_1,bool param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_34 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34[0] = param_1;
  if (param_2) {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(this + 0x168),local_34);
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x168);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_28 = FUN_03d96d1c(uVar2,uVar3,local_34[0]);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
    if (bVar1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_20);
      std::vector<int,std::allocator<int>>::erase
                ((vector<int,std::allocator<int>> *)this_00,local_18,local_10);
    }
  }
  onSelectListUpdated(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDangerRoomSelectScreen::updateItems(std::vector<int, std::allocator<int> > const&) */

void __thiscall
UIDangerRoomSelectScreen::updateItems(UIDangerRoomSelectScreen *this,vector *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  DNodeLoaderConfig *pDVar4;
  string *psVar5;
  DTouchLayer *pDVar6;
  DTouchLayer *pDVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  char *__s;
  DMenu *this_00;
  code *pcVar12;
  wstring *unaff_d12;
  CompiledMap aCStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  CompiledMap aCStack_90 [8];
  DRefPtr<UIAccumulatedLoginButton> aDStack_88 [8];
  RtWeakPtr aRStack_80 [8];
  DRefPtr<DAtlasSpriteNode> aDStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [16];
  function<bool(Sexy::Touch_const&)> afStack_58 [32];
  string asStack_38 [4];
  int local_34;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pDVar4 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
  std::string::string(asStack_38,"scrollViewContainer");
  DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar4,asStack_38,(DTransformNode *)0x0);
  std::string::~string(asStack_38);
  nop();
  cVar2 = Sexy::CompiledMap::Initialized(aCStack_a8);
  if (cVar2 != '\0') {
    local_a0 = FUN_03d9631c(*(undefined8 *)param_1);
    local_98 = FUN_03d9636c(*(undefined8 *)(param_1 + 8));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar3)
    {
      puVar8 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      uVar1 = *puVar8;
      GetGameItemInfo(uVar1,0x7fffffff,0);
      pDVar4 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string(asStack_68,"rewardBtn");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar4,asStack_68,(DTransformNode *)0x0);
      std::string::~string(asStack_68);
      nop();
      pDVar4 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string(asStack_68,"rewardImg");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar4,asStack_68,(DTransformNode *)0x0);
      std::string::~string(asStack_68);
      nop();
      cVar2 = Sexy::CompiledMap::Initialized((CompiledMap *)aDStack_88);
      if (cVar2 == '\0') {
LAB_03d987dc:
        cVar2 = Sexy::CompiledMap::Initialized(aCStack_90);
      }
      else {
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
        std::string::string(asStack_68,"img");
        pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
        std::string::~string(asStack_68);
        nop();
        if (local_34 == 1) {
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_80);
          if (bVar3) {
            plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get
                                       ((exception_ptr *)aDStack_88);
            pcVar12 = *(code **)(*plVar9 + 0x2e8);
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
            DString::Format("UI/Dialog_Asset/frame_tool%d",asStack_68,
                            (ulong)(*(int *)(lVar11 + 0xd0) + 1));
            DString::operator_cast_to_string((DString *)asStack_68);
            (*pcVar12)(plVar9,asStack_70);
            std::string::~string(asStack_70);
            DString::~DString((DString *)asStack_68);
          }
          DRefPtr<DAtlasSpriteNode>::DRefPtr(aDStack_78);
          plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
          pcVar12 = *(code **)(*plVar9 + 0x338);
          FUN_031f5e7c(asStack_70,"UI/headshot/plant/",auStack_28);
          plVar9 = (long *)(*pcVar12)(plVar9,asStack_70,1);
          pcVar12 = *(code **)(*plVar9 + 0x108);
          DVec2::DVec2((DVec2 *)asStack_68,0.0,0.0);
          plVar9 = (long *)(*pcVar12)(plVar9,asStack_68);
          (**(code **)(*plVar9 + 0x130))(0,0);
          std::string::~string(asStack_70);
          plVar9 = (long *)(**(code **)(*(long *)pDVar6 + 0x110))(0xc0a00000,0xc0a00000,pDVar6);
          (**(code **)(*plVar9 + 0x130))(0,0);
          uVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_78);
          (**(code **)(*(long *)pDVar6 + 0x30))(pDVar6,uVar10);
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_78);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
          goto LAB_03d987dc;
        }
        (**(code **)(*(long *)pDVar6 + 0x2e8))(pDVar6,auStack_18);
        (**(code **)(*(long *)pDVar6 + 0x170))(0x42be0000,pDVar6);
        cVar2 = Sexy::CompiledMap::Initialized(aCStack_90);
      }
      if (cVar2 != '\0') {
        plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90);
        uVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_88);
        (**(code **)(*plVar9 + 0x388))(plVar9,uVar10);
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90);
        std::string::string(asStack_68,"rewardBtnName");
        pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
        std::string::~string(asStack_68);
        nop();
        if (pDVar6 != (DTouchLayer *)0x0) {
          pcVar12 = *(code **)(*(long *)pDVar6 + 0x338);
          DString::DString((DString *)asStack_68,uVar1);
          uVar10 = DString::c_str((DString *)asStack_68);
          (*pcVar12)(pDVar6,uVar10);
          DString::~DString((DString *)asStack_68);
        }
        psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90);
        std::string::string(asStack_68,"box");
        pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
        std::string::~string(asStack_68);
        nop();
        if (pDVar6 != (DTouchLayer *)0x0) {
          plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90);
          lVar11 = (**(code **)(*plVar9 + 0x1f8))();
          (**(code **)(*(long *)pDVar6 + 0x130))(0,0,pDVar6);
          (**(code **)(*(long *)pDVar6 + 0x160))
                    (*(undefined4 *)(lVar11 + 8),*(undefined4 *)(lVar11 + 0xc),pDVar6);
          DString::DString((DString *)asStack_68,uVar1);
          __s = (char *)DString::c_str((DString *)asStack_68);
          std::string::string(asStack_70,__s);
          DTransformNode::setName((DTransformNode *)pDVar6,asStack_70);
          std::string::~string(asStack_70);
          nop();
          DString::~DString((DString *)asStack_68);
        }
        unaff_d12 = (wstring *)((ulong)unaff_d12 & 0xffffffff00000000 | (ulong)uVar1);
        Sexy::SexyStringToUTF8String(aSStack_10,unaff_d12);
        DString::DString((DString *)asStack_68,asStack_70);
        std::string::~string(asStack_70);
        plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90);
        pcVar12 = *(code **)(*plVar9 + 0x350);
        FUN_03d95994(afStack_58,this,unaff_d12);
        (*pcVar12)(plVar9,afStack_58);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_58);
        plVar9 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a8);
        uVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_90);
        (**(code **)(*plVar9 + 0x30))(plVar9,uVar10);
        DString::~DString((DString *)asStack_68);
      }
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr(aDStack_88);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_90);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_a0);
    }
    this_00 = (DMenu *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a8);
    DMenu::align(this_00,6,100.0,100.0,10.0,10.0);
  }
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_38,"scrollView");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_38);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    pDVar7 = (DTouchLayer *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aCStack_a8)
    ;
    DScrollView::setContainer((DScrollView *)pDVar6,pDVar7);
    (**(code **)(*(long *)pDVar6 + 0xd8))(pDVar6,1);
  }
  onSelectListUpdated(this,1);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aCStack_a8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UIDangerRoomSelectScreen::updatePlantsShow(int) */

void __thiscall
UIDangerRoomSelectScreen::updatePlantsShow(UIDangerRoomSelectScreen *this,int param_1)

{
  updatePlantList(this,param_1);
  updateItems(this,(vector *)(this + 0x138));
  return;
}


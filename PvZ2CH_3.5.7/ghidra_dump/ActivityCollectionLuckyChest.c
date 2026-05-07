// Class: ActivityCollectionLuckyChest


/* ActivityCollectionLuckyChest::IsToday(long) */

bool __thiscall
ActivityCollectionLuckyChest::IsToday(ActivityCollectionLuckyChest *this,long param_1)

{
  int iVar1;
  
  iVar1 = LawnApp::GetRealServerTime(gLawnApp);
  return (iVar1 + -0xe100) / 0x15180 == ((int)param_1 + -0xe100) / 0x15180;
}


/* ActivityCollectionLuckyChest::Draw(Sexy::Graphics*) */

void __thiscall
ActivityCollectionLuckyChest::Draw(ActivityCollectionLuckyChest *this,Graphics *param_1)

{
  UI::Dialog::Draw((Dialog *)this,param_1);
  Sexy::Widget::DeferOverlay((Widget *)this,1);
  return;
}


/* ActivityCollectionLuckyChest::RefreshContainer(ActivityCollectionTabBase*) */

void ActivityCollectionLuckyChest::RefreshContainer(ActivityCollectionTabBase *param_1)

{
  return;
}


/* non-virtual thunk to ActivityCollectionLuckyChest::RefreshContainer(ActivityCollectionTabBase*)
    */

void __thiscall
ActivityCollectionLuckyChest::RefreshContainer
          (ActivityCollectionLuckyChest *this,ActivityCollectionTabBase *param_1)

{
  RefreshContainer((ActivityCollectionTabBase *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLuckyChest::GetLayoutName() */

void __thiscall ActivityCollectionLuckyChest::GetLayoutName(ActivityCollectionLuckyChest *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UILuckyChestNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ActivityCollectionLuckyChest::closeSuperAccessoryDescription() */

void __thiscall
ActivityCollectionLuckyChest::closeSuperAccessoryDescription(ActivityCollectionLuckyChest *this)

{
  if (*(long *)(this + 0x140) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x140))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x140));
    *(undefined8 *)(this + 0x140) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLuckyChest::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionLuckyChest::InitContainer
          (ActivityCollectionLuckyChest *this,ActivityCollectionTabBase *param_1)

{
  long *plVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)FUN_04eaf8f8(*(undefined8 *)(param_1 + 0x18));
  *(int *)((long)plVar1 + 0x54) = *(int *)((long)plVar1 + 0x54) + 0x14;
  std::string::string(asStack_10,"Background_0");
  plVar2 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1a8))
              (plVar2,((int)plVar1[10] - (int)plVar2[10]) / 2,*(undefined4 *)((long)plVar2 + 0x4c));
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ActivityCollectionLuckyChest::InitContainer(ActivityCollectionTabBase*) */

void __thiscall
ActivityCollectionLuckyChest::InitContainer
          (ActivityCollectionLuckyChest *this,ActivityCollectionTabBase *param_1)

{
  InitContainer(this + -0x138,param_1);
  return;
}


/* ActivityCollectionLuckyChest::~ActivityCollectionLuckyChest() */

void __thiscall
ActivityCollectionLuckyChest::~ActivityCollectionLuckyChest(ActivityCollectionLuckyChest *this)

{
  *(undefined ***)this = &PTR_GetClass_069f3b80;
  *(undefined **)(this + 0xd8) = &DAT_069f3ee0;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_069f3f28;
  UISingletonDialog<ActivityCollectionLuckyChest>::~UISingletonDialog
            ((UISingletonDialog<ActivityCollectionLuckyChest> *)this);
  return;
}


/* ActivityCollectionLuckyChest::~ActivityCollectionLuckyChest() */

void __thiscall
ActivityCollectionLuckyChest::~ActivityCollectionLuckyChest(ActivityCollectionLuckyChest *this)

{
  ~ActivityCollectionLuckyChest(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLuckyChest::initProgressbar() */

void __thiscall ActivityCollectionLuckyChest::initProgressbar(ActivityCollectionLuckyChest *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UIWidgetImage *pUVar5;
  UIWidgetImage *this_00;
  int iVar6;
  int iVar7;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_10,"UIImage_0");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (0 < *(int *)(this + 0x14c)) {
    iVar6 = 0;
    iVar7 = 3;
    do {
      iVar6 = iVar6 + 1;
      std::string::string((string *)local_10,"IMAGE_UI_LUCKYCHEST_LUCKYCHEST_2");
      this_00 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(this_00,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
      uVar1 = FUN_04eb093c(iVar7);
      uVar2 = FUN_04eb093c(5);
      uVar3 = FUN_04eb093c(0x3b);
      uVar4 = FUN_04eb093c(0x1a);
      (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar4);
      local_10[0] = 2;
      UIWidgetImage::SetImageType(this_00,(string *)local_10,0.0);
      (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_00);
      iVar7 = iVar7 + 0x3a;
    } while (iVar6 < *(int *)(this + 0x14c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLuckyChest::updateButtonStates(int) */

void ActivityCollectionLuckyChest::updateButtonStates(int param_1)

{
  PVZ2UIButton *this;
  string asStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("UITaskButton_%d",asStack_80);
  this = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)(ulong)(uint)param_1,asStack_80);
  if (this != (PVZ2UIButton *)0x0) {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ba1c00,2);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ba1c00,2);
    PVZ2UIButton::SetDialogStates(this,aPStack_78,aPStack_40);
    (**(code **)(*(long *)this + 0x188))(this,1);
  }
  std::string::~string(asStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionLuckyChest::ActivityCollectionLuckyChest() */

void __thiscall
ActivityCollectionLuckyChest::ActivityCollectionLuckyChest(ActivityCollectionLuckyChest *this)

{
  UISingletonDialog<ActivityCollectionLuckyChest>::UISingletonDialog
            ((UISingletonDialog<ActivityCollectionLuckyChest> *)this);
  ActivityCollectionContainer::ActivityCollectionContainer
            ((ActivityCollectionContainer *)(this + 0x138));
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_069f3b80;
  *(undefined ***)(this + 0x138) = &PTR_InitContainer_069f3f28;
  *(undefined **)(this + 0xd8) = &DAT_069f3ee0;
  *(undefined4 *)(this + 0x148) = 0x2a89;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLuckyChest::ShowTips() */

void __thiscall ActivityCollectionLuckyChest::ShowTips(ActivityCollectionLuckyChest *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x140) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x140) = this_00;
    TodStringTranslate(L"[LUCKYCHEST_DES_DESCRIPTION]");
    TodStringTranslate(L"[LUCKYCHEST_DES_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x140);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeSuperAccessoryDescription);
    Sexy::Delegate0::Delegate0<ActivityCollectionLuckyChest,void(ActivityCollectionLuckyChest::*)()>
              (aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x140));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x140));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLuckyChest::initTaskStatus() */

void __thiscall ActivityCollectionLuckyChest::initTaskStatus(ActivityCollectionLuckyChest *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  vector *pvVar4;
  long *plVar5;
  PVZ2UIButton *this_00;
  undefined8 local_a8;
  undefined8 local_a0;
  string asStack_98 [8];
  vector<GeneralTask*,std::allocator<GeneralTask*>> avStack_90 [24];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<LuckyChestGradeTaskManager>::GetInstancePtr();
  pvVar4 = (vector *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)(lVar3 + 8));
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::vector(avStack_90,pvVar4);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_90);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_90);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar2) {
    plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    lVar3 = *plVar5;
    Sexy::StrFormat("UITaskButton_%d",asStack_98,(ulong)*(uint *)(lVar3 + 8));
    this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_98);
    (**(code **)(*(long *)this_00 + 0x188))(this_00,1);
    if (*(int *)(lVar3 + 0x14) == 2) {
      PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ba1dd0,2);
      PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ba1dd0,2);
      PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
      (**(code **)(*(long *)this_00 + 0x188))(this_00,0);
      iVar1 = *(int *)(lVar3 + 8);
    }
    else {
      if (*(int *)(lVar3 + 0x14) == 3) {
        PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06ba1c00,2);
        PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06ba1c00,2);
        PVZ2UIButton::SetDialogStates(this_00,aPStack_78,aPStack_40);
      }
      iVar1 = *(int *)(lVar3 + 8);
    }
    if (iVar1 == 0x3eb) {
      *(undefined4 *)(this + 0x14c) = *(undefined4 *)(lVar3 + 0x10);
    }
    std::string::~string(asStack_98);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector(avStack_90);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLuckyChest::RequestReward(int) */

void __thiscall
ActivityCollectionLuckyChest::RequestReward(ActivityCollectionLuckyChest *this,int param_1)

{
  TGALogMgr *this_00;
  undefined8 uVar1;
  DNetwork *this_01;
  size_t in_x2;
  int local_b4 [5];
  string asStack_a0 [8];
  string asStack_98 [8];
  function<bool(Sexy::Touch_const&)> afStack_90 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_70 [48];
  TGALuckyChestData aTStack_40 [16];
  string asStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_b4[0] = param_1;
  TGALuckyChestData::TGALuckyChestData(aTStack_40);
  std::string::append((string *)aTStack_40,"2",in_x2);
  std::string::append(asStack_30,"1",in_x2);
  std::string::append(asStack_28,"0",in_x2);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogLuckyChest(this_00,aTStack_40);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_70);
  std::string::string(asStack_a0,"t");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_70,asStack_a0);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_b4);
  FUN_05474278(uVar1,asStack_98);
  std::string::~string(asStack_98);
  std::string::~string(asStack_a0);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  std::string::string(asStack_a0,"V507");
  FUN_04eb0838(afStack_90,this,local_b4[0]);
  std::string::string(asStack_98,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_a0,(map *)amStack_70,30.0,(function *)afStack_90,true,true,asStack_98,0
            );
  std::string::~string(asStack_98);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_90);
  std::string::~string(asStack_a0);
  nop();
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_70);
  TGALuckyChestData::~TGALuckyChestData(aTStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionLuckyChest::ButtonDepress(int) */

void __thiscall
ActivityCollectionLuckyChest::ButtonDepress(ActivityCollectionLuckyChest *this,int param_1)

{
  if (param_1 == 0x69) {
    ShowTips(this);
    return;
  }
  if ((0x68 < param_1) && (param_1 - 0x3e9U < 3)) {
    RequestReward(this,param_1);
    return;
  }
  return;
}


/* non-virtual thunk to ActivityCollectionLuckyChest::ButtonDepress(int) */

void __thiscall
ActivityCollectionLuckyChest::ButtonDepress(ActivityCollectionLuckyChest *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActivityCollectionLuckyChest::InitView() */

void __thiscall ActivityCollectionLuckyChest::InitView(ActivityCollectionLuckyChest *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *__s;
  TGALogMgr *this_00;
  size_t in_x2;
  DString aDStack_d8 [16];
  LuckyChestData aLStack_c8 [8];
  string asStack_c0 [56];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<LuckyChestGradeTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar3 + 8));
  uVar4 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(this + 0x150) = uVar4;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04eaf9ec(local_80);
  if (cVar1 != '\0') {
    LuckyChestData::LuckyChestData(aLStack_c8);
    ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aLStack_c8);
    initTaskStatus(this);
    initProgressbar(this);
    LuckyChestData::~LuckyChestData(aLStack_c8);
  }
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)aLStack_c8);
  std::string::append((string *)aLStack_c8,"1",in_x2);
  DString::DString(aDStack_d8,*(int *)(this + 0x14c));
  __s = (char *)DString::c_str(aDStack_d8);
  std::string::append(asStack_c0,__s,in_x2);
  DString::~DString(aDStack_d8);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogLuckyChest(this_00,(TGALuckyChestData *)aLStack_c8);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aLStack_c8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActivityCollectionLuckyChest::OnCreate() */

char __thiscall ActivityCollectionLuckyChest::OnCreate(ActivityCollectionLuckyChest *this)

{
  char cVar1;
  
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    InitView(this);
  }
  return cVar1;
}


/* ActivityCollectionLuckyChest::Update() */

void __thiscall ActivityCollectionLuckyChest::Update(ActivityCollectionLuckyChest *this)

{
  char cVar1;
  
  cVar1 = IsToday(this,*(long *)(this + 0x150));
  if (cVar1 != '\0') {
    return;
  }
  InitView(this);
  return;
}


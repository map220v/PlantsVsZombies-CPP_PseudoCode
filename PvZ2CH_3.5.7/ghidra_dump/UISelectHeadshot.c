// Class: UISelectHeadshot


/* UISelectHeadshot::~UISelectHeadshot() */

void __thiscall UISelectHeadshot::~UISelectHeadshot(UISelectHeadshot *this)

{
  *(undefined ***)this = &PTR_GetClass_067704c0;
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UISelectHeadshot::~UISelectHeadshot() */

void __thiscall UISelectHeadshot::~UISelectHeadshot(UISelectHeadshot *this)

{
  ~UISelectHeadshot(this);
  AK::FreeHook(this);
  return;
}


/* UISelectHeadshot::isActive() */

bool UISelectHeadshot::isActive(void)

{
  return s_pSingleton != 0;
}


/* UISelectHeadshot::remove() */

void UISelectHeadshot::remove(void)

{
  if (s_pSingleton != (long *)0x0) {
    (**(code **)(*s_pSingleton + 0x348))();
    s_pSingleton = (long *)0x0;
  }
  return;
}


void UISelectHeadshot::remove(void)

{
  if (s_pSingleton != (long *)0x0) {
    (**(code **)(*s_pSingleton + 0x348))();
    s_pSingleton = (long *)0x0;
  }
  return;
}


void UISelectHeadshot::remove(void)

{
  if (s_pSingleton != (long *)0x0) {
    (**(code **)(*s_pSingleton + 0x348))();
    s_pSingleton = (long *)0x0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHeadshot::showSubUI(bool) */

void __thiscall UISelectHeadshot::showSubUI(UISelectHeadshot *this,bool param_1)

{
  exception_ptr *this_00;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  pcVar2 = *(code **)(*plVar1 + 0x58);
  std::string::string(asStack_10,"btnChangeHeadshot");
  plVar1 = (long *)(*pcVar2)(plVar1,asStack_10);
  (**(code **)(*plVar1 + 0xd8))(plVar1,param_1);
  std::string::~string(asStack_10);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  pcVar2 = *(code **)(*plVar1 + 0x58);
  std::string::string(asStack_10,"btnSubHeadshot");
  plVar1 = (long *)(*pcVar2)(plVar1,asStack_10);
  (**(code **)(*plVar1 + 0xd8))(plVar1,param_1);
  std::string::~string(asStack_10);
  nop();
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  pcVar2 = *(code **)(*plVar1 + 0x58);
  std::string::string(asStack_10,"imgHeadshotInfoFrame");
  plVar1 = (long *)(*pcVar2)(plVar1,asStack_10);
  (**(code **)(*plVar1 + 0xd8))(plVar1,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHeadshot::Initialize() */

void __thiscall UISelectHeadshot::Initialize(UISelectHeadshot *this)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  DRefPtr<DLayer> aDStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DRefPtr<DLayer>::DRefPtr(aDStack_18);
  plVar1 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  pcVar3 = *(code **)(*plVar1 + 0x210);
  (**(code **)(*(long *)this + 800))(asStack_10,this);
  plVar1 = (long *)(*pcVar3)(plVar1,asStack_10);
  (**(code **)(*plVar1 + 0x270))(plVar1,0,0,0,0x80);
  uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
  (**(code **)(*(long *)this + 0x370))(this,uVar2);
  std::string::string(asStack_10,"UISelectHeadshot");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHeadshot::changeHeadShot(int) */

void __thiscall UISelectHeadshot::changeHeadShot(UISelectHeadshot *this,int param_1)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  UIHeadshotIcon *this_00;
  DTouchLayer *pDVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"btnHeadshot");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    this_00 = (UIHeadshotIcon *)UIHeadshotIcon::create(param_1);
    pDVar3 = (DTouchLayer *)UIHeadshotIcon::getHeadshotIcon(this_00);
    DRefPtr<DTouchLayer>::DRefPtr((DRefPtr<DTouchLayer> *)asStack_10,pDVar3);
    (**(code **)(*(long *)pDVar3 + 0x60))(pDVar3,1);
    (**(code **)(*(long *)pDVar2 + 0x388))(pDVar2,pDVar3);
    if (this_00 != (UIHeadshotIcon *)0x0) {
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHeadshot::changeSubHeadShot(int) */

void __thiscall UISelectHeadshot::changeSubHeadShot(UISelectHeadshot *this,int param_1)

{
  exception_ptr *this_00;
  int iVar1;
  string *psVar2;
  DTouchLayer *pDVar3;
  UIHeadshotIcon *this_01;
  DTouchLayer *pDVar4;
  undefined8 uVar5;
  code *pcVar6;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_10,"btnSubHeadshot");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_10);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    this_01 = (UIHeadshotIcon *)UIHeadshotIcon::create(param_1);
    pDVar4 = (DTouchLayer *)UIHeadshotIcon::getHeadshotIcon(this_01);
    DRefPtr<DTouchLayer>::DRefPtr((DRefPtr<DTouchLayer> *)asStack_10,pDVar4);
    (**(code **)(*(long *)pDVar4 + 0x60))(pDVar4,1);
    (**(code **)(*(long *)pDVar3 + 0x388))(pDVar3,pDVar4);
    if (this_01 != (UIHeadshotIcon *)0x0) {
      (**(code **)(*(long *)this_01 + 0x18))(this_01);
    }
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_10);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_10,"textHeadshotName");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_10);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x330);
    iVar1 = DSingleton<HeadshotConfig>::getInstance();
    HeadshotConfig::getHeadshotName(iVar1);
    uVar5 = FUN_0547429c(asStack_10);
    (*pcVar6)(pDVar3,uVar5);
    std::string::~string(asStack_10);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_10,"textHeadshotInfo");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_10);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x330);
    iVar1 = DSingleton<HeadshotConfig>::getInstance();
    HeadshotConfig::getHeadshotSrc(iVar1);
    uVar5 = FUN_0547429c(asStack_10);
    (*pcVar6)(pDVar3,uVar5);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHeadshot::enableChange(bool) */

void __thiscall UISelectHeadshot::enableChange(UISelectHeadshot *this,bool param_1)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"scrollViewContainer");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar2 + 0x380))(pDVar2,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHeadshot::uploadHeadShot(int) */

void __thiscall UISelectHeadshot::uploadHeadShot(UISelectHeadshot *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  UserInfo *this_01;
  NetworkMgr *this_02;
  INetworkMsgProcess *this_03;
  ICloudRequestSTDCallbackFunction *this_04;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  DRefPtr<DTouchLayer> aDStack_50 [24];
  function afStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsNetworkModuleOK();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)aDStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,(wstring *)aDStack_50);
    FUN_05476c50((wstring *)aDStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              ((Delegate0 *)afStack_38,(wstring *)aDStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,(Delegate0 *)afStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    this_01 = (UserInfo *)DSingleton<UserInfo>::getInstance();
    UserInfo::setHeadShotId(this_01,param_1);
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
    FUN_03d760e0(afStack_38,this);
    this_04 = ::operator_new(0x30);
    ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction(this_04,afStack_38);
    DRefPtr<DTouchLayer>::DRefPtr(aDStack_50,(DTouchLayer *)this_04);
    INetworkMsgProcess::RequestUserHeadshot(this_03,(DRefPtr *)aDStack_50);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_50);
    std::function<bool(Sexy::Touch_const&)>::~function
              ((function<bool(Sexy::Touch_const&)> *)afStack_38);
    enableChange(this,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHeadshot::createHeadshotIdSelect(int) */

void __thiscall UISelectHeadshot::createHeadshotIdSelect(UISelectHeadshot *this,int param_1)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  DNodeLoaderConfig *pDVar3;
  undefined8 uVar4;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x151] == (UISelectHeadshot)0x0) {
    psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
    DString::DString(aDStack_18,param_1);
    DString::operator_cast_to_string(aDStack_18);
    pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
    std::string::~string(asStack_20);
    DString::~DString(aDStack_18);
    if (pDVar2 != (DTouchLayer *)0x0) {
      pDVar3 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string(asStack_20,"aniIdle2");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar3,asStack_20,(DTransformNode *)pDVar2);
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      *(undefined8 *)(this + 0x148) = uVar4;
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
      std::string::~string(asStack_20);
      nop();
      pDVar3 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string(asStack_20,"aniIdle1");
      DNodeLoaderConfig::loadNode<DTouchLayer>(pDVar3,asStack_20,(DTransformNode *)pDVar2);
      uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_18);
      *(undefined8 *)(this + 0x140) = uVar4;
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
      std::string::~string(asStack_20);
      nop();
      this[0x151] = (UISelectHeadshot)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHeadshot::selectHeadshotId(int) */

void __thiscall UISelectHeadshot::selectHeadshotId(UISelectHeadshot *this,int param_1)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  createHeadshotIdSelect(this,param_1);
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  DString::DString(aDStack_18,param_1);
  DString::operator_cast_to_string(aDStack_18);
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_20);
  DString::~DString(aDStack_18);
  if (pDVar2 != (DTouchLayer *)0x0) {
    if (*(DTouchLayer **)(this + 0x140) != (DTouchLayer *)0x0) {
      DRefPtr<DTouchLayer>::DRefPtr
                ((DRefPtr<DTouchLayer> *)aDStack_18,*(DTouchLayer **)(this + 0x140));
      (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140),1);
      (**(code **)(*(long *)pDVar2 + 0x30))(pDVar2,*(undefined8 *)(this + 0x140));
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
    }
    if (*(DTouchLayer **)(this + 0x148) != (DTouchLayer *)0x0) {
      DRefPtr<DTouchLayer>::DRefPtr
                ((DRefPtr<DTouchLayer> *)aDStack_18,*(DTouchLayer **)(this + 0x148));
      (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148),1);
      (**(code **)(*(long *)pDVar2 + 0x30))(pDVar2,*(undefined8 *)(this + 0x148));
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISelectHeadshot::UserInit() */

void __thiscall UISelectHeadshot::UserInit(UISelectHeadshot *this)

{
  exception_ptr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  string *psVar6;
  DTouchLayer *pDVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  PlayerInfo *this_02;
  map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
  *this_03;
  ulong uVar8;
  pair *ppVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  DTransformNode *this_04;
  long *plVar12;
  UIHeadshotIcon *this_05;
  DTouchLayer *pDVar13;
  DNodeLoaderConfig *this_06;
  long *plVar14;
  ulong uVar15;
  code *pcVar16;
  float fVar17;
  float fVar18;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined8 local_c8;
  undefined8 local_c0;
  DRefPtr<DTouchLayer> aDStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  float local_88;
  float local_84;
  function<bool(Sexy::Touch_const&)> afStack_70 [32];
  undefined8 local_50 [9];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x151] = (UISelectHeadshot)0x0;
  lVar5 = DSingleton<UserInfo>::getInstance();
  iVar3 = FUN_03d75118(*(undefined4 *)(lVar5 + 0x24));
  *(int *)(this + 0x134) = iVar3;
  *(int *)(this + 0x138) = iVar3;
  if (iVar3 == 0) {
    showSubUI(this,false);
  }
  this_00 = (exception_ptr *)(this + 0xd8);
  psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_50,"root/menu/btnClose");
  pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
  std::string::~string((string *)local_50);
  nop();
  if (pDVar7 != (DTouchLayer *)0x0) {
    pcVar16 = *(code **)(*(long *)pDVar7 + 0x350);
    FUN_03d75e5c(afStack_70,this);
    (*pcVar16)(pDVar7,afStack_70);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_70);
  }
  psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_50,"btnChangeHeadshot");
  pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
  std::string::~string((string *)local_50);
  nop();
  if (pDVar7 != (DTouchLayer *)0x0) {
    pcVar16 = *(code **)(*(long *)pDVar7 + 0x360);
    FUN_03d75eb8(afStack_70,this);
    (*pcVar16)(pDVar7,afStack_70);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_70);
    pcVar16 = *(code **)(*(long *)pDVar7 + 0x380);
    FUN_03d75f14(afStack_70,this);
    (*pcVar16)(pDVar7,afStack_70);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_70);
    pcVar16 = *(code **)(*(long *)pDVar7 + 0x350);
    FUN_03d75f70(afStack_70,this);
    (*pcVar16)(pDVar7,afStack_70);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_70);
  }
  lVar5 = DSingleton<UserInfo>::getInstance();
  iVar3 = FUN_03d75118(*(undefined4 *)(lVar5 + 0x24));
  changeHeadShot(this,iVar3);
  lVar5 = DSingleton<UserInfo>::getInstance();
  iVar3 = FUN_03d75118(*(undefined4 *)(lVar5 + 0x24));
  changeSubHeadShot(this,iVar3);
  psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)local_50,"scrollViewContainer");
  pDVar7 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar6);
  std::string::~string((string *)local_50);
  nop();
  if (pDVar7 != (DTouchLayer *)0x0) {
    DSingleton<HeadshotConfig>::getInstance();
    nop();
    this_02 = (PlayerInfo *)ProfileUtils::Profile();
    this_03 = (map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
               *)std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_01);
    uVar8 = std::
            map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
            ::size(this_03);
    if (0x14 < uVar8) {
      (**(code **)(*(long *)pDVar7 + 0x218))
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88,pDVar7);
      uVar8 = std::
              map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
              ::size(this_03);
      pcVar16 = *(code **)(*(long *)pDVar7 + 0x210);
      uVar15 = uVar8 / 3;
      lVar5 = uVar15 - 6;
      if (uVar8 != uVar15 * 3) {
        lVar5 = uVar15 - 5;
      }
      DVec2::DVec2((DVec2 *)local_50,local_88,(float)(ulong)(lVar5 * 0x50) + local_84);
      (*pcVar16)(pDVar7,(string *)local_50);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_88);
    local_b0 = std::
               map<std::string,DIniField,std::less<std::string>,std::allocator<std::pair<std::string_const,DIniField>>>
               ::begin(this_03);
    local_a8 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_03);
    if (this_02 == (PlayerInfo *)0x0) {
      while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_b0,(rbtree_iterator *)&local_a8),
            bVar1) {
        psVar6 = (string *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_b0);
        DString::DString((DString *)local_50,psVar6);
        DString::toInt((DString *)local_50);
        DString::~DString((DString *)local_50);
        std::pair<std::string,DIniField>::pair
                  ((pair<std::string,DIniField> *)local_50,(pair *)psVar6);
        std::
        vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>::
        push_back((vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>
                   *)avStack_a0,(pair *)local_50);
        std::pair<std::string_const,DIniField>::~pair((pair<std::string_const,DIniField> *)local_50)
        ;
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_b0);
      }
    }
    else {
      while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_b0,(rbtree_iterator *)&local_a8),
            bVar1) {
        ppVar9 = (pair *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                   ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                    &local_b0);
        DString::DString((DString *)local_50,(string *)ppVar9);
        iVar3 = DString::toInt((DString *)local_50);
        DString::~DString((DString *)local_50);
        cVar2 = PlayerInfo::isUnlockHeadshotId(this_02,iVar3);
        if (cVar2 == '\0') {
          std::pair<std::string,DIniField>::pair((pair<std::string,DIniField> *)local_50,ppVar9);
          std::
          vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>
          ::push_back((vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>
                       *)&local_88,(pair *)local_50);
          std::pair<std::string_const,DIniField>::~pair
                    ((pair<std::string_const,DIniField> *)local_50);
        }
        else {
          std::pair<std::string,DIniField>::pair((pair<std::string,DIniField> *)local_50,ppVar9);
          std::
          vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>
          ::push_back((vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>
                       *)avStack_a0,(pair *)local_50);
          std::pair<std::string_const,DIniField>::~pair
                    ((pair<std::string_const,DIniField> *)local_50);
        }
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_b0);
      }
    }
    iVar3 = 0;
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_a0);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_50,(__normal_iterator *)&local_a8);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_88);
    uVar11 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_88);
    std::vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>::
    insert<__gnu_cxx::__normal_iterator<std::pair<std::string,DIniField>*,std::vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>>,void>
              ((vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>
                *)avStack_a0,local_50[0],uVar10,uVar11);
    local_c8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_a0);
    local_c0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_a0);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar1)
    {
      psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
      DString::DString((DString *)local_50,psVar6);
      iVar4 = DString::toInt((DString *)local_50);
      DString::~DString((DString *)local_50);
      this_05 = (UIHeadshotIcon *)UIHeadshotIcon::create(iVar4,false);
      if (this_05 != (UIHeadshotIcon *)0x0) {
        pDVar13 = (DTouchLayer *)UIHeadshotIcon::getHeadshotIcon(this_05);
        DRefPtr<DTouchLayer>::DRefPtr(aDStack_b8,pDVar13);
        (**(code **)(*(long *)pDVar13 + 0x60))(pDVar13,1);
        (**(code **)(*(long *)pDVar13 + 0x140))(0x3f000000,pDVar13);
        this_06 = (DNodeLoaderConfig *)DNodeWidget::getLoader((DNodeWidget *)this);
        std::string::string((string *)local_50,"btnSelectHeadshot");
        DNodeLoaderConfig::loadNode<DTouchLayer>
                  (this_06,(string *)local_50,(DTransformNode *)pDVar7);
        std::string::~string((string *)local_50);
        nop();
        cVar2 = Sexy::CompiledMap::Initialized((CompiledMap *)&local_b0);
        if (cVar2 != '\0') {
          if ((this_02 == (PlayerInfo *)0x0) ||
             (cVar2 = PlayerInfo::isUnlockHeadshotId(this_02,iVar4), cVar2 == '\0')) {
            pcVar16 = *(code **)(*(long *)pDVar13 + 0x58);
            local_f0 = 0;
            std::string::string((string *)&local_a8,"imgHeadshot");
            plVar14 = (long *)(*pcVar16)(pDVar13,(string *)&local_a8);
            pcVar16 = *(code **)(*plVar14 + 0x2e0);
            std::string::string((string *)local_50,"grayscale");
            (*pcVar16)(plVar14,(string *)local_50);
            std::string::~string((string *)local_50);
            nop();
            std::string::~string((string *)&local_a8);
            nop();
            pcVar16 = *(code **)(*(long *)pDVar13 + 0x2e0);
            std::string::string((string *)local_50,"grayscale");
            (*pcVar16)(pDVar13,(string *)local_50);
            std::string::~string((string *)local_50);
            nop();
            pcVar16 = *(code **)(*(long *)pDVar13 + 0x58);
            std::string::string((string *)&local_a8,"imgHeadshotFrame");
            plVar14 = (long *)(*pcVar16)(pDVar13,(string *)&local_a8);
            pcVar16 = *(code **)(*plVar14 + 0x2e0);
            std::string::string((string *)local_50,"grayscale");
            (*pcVar16)(plVar14,(string *)local_50);
            std::string::~string((string *)local_50);
            nop();
            std::string::~string((string *)&local_a8);
            nop();
          }
          else {
            local_f0 = 1;
          }
          plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          (**(code **)(*plVar14 + 0x388))(plVar14,pDVar13);
          this_04 = (DTransformNode *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          DTransformNode::setName(this_04,psVar6);
          if (*(int *)(this + 0x138) == iVar4) {
            createHeadshotIdSelect(this,iVar4);
          }
          local_100 = local_100 & 0xffffffffffffff00 | local_f0;
          plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          local_f8 = local_f8 & 0xffffffffffffff00 | local_f0;
          pcVar16 = *(code **)(*plVar14 + 0x350);
          FUN_03d75fcc(afStack_70,local_100,this);
          (*pcVar16)(plVar14,afStack_70);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_70);
          plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          pcVar16 = *(code **)(*plVar14 + 0x360);
          FUN_03d76028(afStack_70,this);
          (*pcVar16)(plVar14,afStack_70);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_70);
          plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          pcVar16 = *(code **)(*plVar14 + 0x380);
          FUN_03d76084(afStack_70,local_f8,this);
          (*pcVar16)(plVar14,afStack_70);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_70);
        }
        plVar14 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
        pcVar16 = *(code **)(*plVar14 + 0x110);
        fVar17 = (float)(**(code **)(*plVar14 + 0x1c0))();
        plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
        fVar18 = (float)(**(code **)(*plVar12 + 0x1c8))();
        (*pcVar16)(fVar17 + (float)((iVar3 % 3) * 100),(float)((iVar3 / 3) * 0x50) + -60.0 + fVar18,
                   plVar14);
        (**(code **)(*(long *)this_05 + 0x18))(this_05);
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)&local_b0);
        DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_b8)
        ;
      }
      iVar3 = iVar3 + 1;
      __gnu_cxx::
      __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
      ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                    *)&local_c8);
    }
    std::vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>::
    ~vector((vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>
             *)&local_88);
    std::vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>::
    ~vector((vector<std::pair<std::string,DIniField>,std::allocator<std::pair<std::string,DIniField>>>
             *)avStack_a0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UISelectHeadshot::UISelectHeadshot() */

void __thiscall UISelectHeadshot::UISelectHeadshot(UISelectHeadshot *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_067704c0;
  *(undefined8 *)(this + 0x148) = 0;
  this[0x150] = (UISelectHeadshot)0x0;
  this[0x151] = (UISelectHeadshot)0x0;
  return;
}


/* UISelectHeadshot::create(bool) */

UISelectHeadshot * UISelectHeadshot::create(bool param_1)

{
  UISelectHeadshot *this;
  
  if (s_pSingleton != (UISelectHeadshot *)0x0) {
    return s_pSingleton;
  }
  this = ::operator_new(0x158);
  memset(this,0,0x158);
  UISelectHeadshot(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_1);
  s_pSingleton = this;
  return this;
}


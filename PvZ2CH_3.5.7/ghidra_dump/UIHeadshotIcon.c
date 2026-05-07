// Class: UIHeadshotIcon


/* UIHeadshotIcon::~UIHeadshotIcon() */

void __thiscall UIHeadshotIcon::~UIHeadshotIcon(UIHeadshotIcon *this)

{
  *(undefined ***)this = &PTR_GetClass_067700c0;
  std::string::~string((string *)(this + 0x140));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIHeadshotIcon::~UIHeadshotIcon() */

void __thiscall UIHeadshotIcon::~UIHeadshotIcon(UIHeadshotIcon *this)

{
  ~UIHeadshotIcon(this);
  AK::FreeHook(this);
  return;
}


/* UIHeadshotIcon::UIHeadshotIcon() */

void __thiscall UIHeadshotIcon::UIHeadshotIcon(UIHeadshotIcon *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  this[0x131] = (UIHeadshotIcon)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  this[0x138] = (UIHeadshotIcon)0x0;
  *(undefined ***)this = &PTR_GetClass_067700c0;
  this[0x139] = (UIHeadshotIcon)0x0;
  Set8BytesTo0(this + 0x140);
  return;
}


/* UIHeadshotIcon::setPostion(float, float) */

void __thiscall UIHeadshotIcon::setPostion(UIHeadshotIcon *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_03d72f58();
  *(int *)(this + 0x48) = (int)fVar1;
  fVar1 = (float)FUN_03d72f58(param_2);
  *(int *)(this + 0x4c) = (int)fVar1;
  return;
}


/* UIHeadshotIcon::createShowMonthCardEffect(int, bool) */

UIHeadshotIcon * UIHeadshotIcon::createShowMonthCardEffect(int param_1,bool param_2)

{
  UIHeadshotIcon *this;
  
  this = ::operator_new(0x148);
  memset(this,0,0x148);
  UIHeadshotIcon(this);
  this[0x131] = (UIHeadshotIcon)param_2;
  *(int *)(this + 0x134) = param_1;
  FUN_03d72a7c(this + 0x138);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  return this;
}


/* UIHeadshotIcon::create(int) */

UIHeadshotIcon * UIHeadshotIcon::create(int param_1)

{
  UIHeadshotIcon *this;
  
  this = ::operator_new(0x148);
  memset(this,0,0x148);
  UIHeadshotIcon(this);
  *(int *)(this + 0x134) = param_1;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHeadshotIcon::Initialize() */

void __thiscall UIHeadshotIcon::Initialize(UIHeadshotIcon *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x328))(this,0,0,0xfa,0xfa);
  std::string::string(asStack_10,"imgHeadshotBottom");
  DNodeWidget::setRootName((string *)this);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIHeadshot");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"animHeadshotEffect");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar2 + 0xd8))(pDVar2,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHeadshotIcon::getHeadshotIcon() */

void __thiscall UIHeadshotIcon::getHeadshotIcon(UIHeadshotIcon *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_10,"imgHeadshotBottom");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pDVar2);
}


/* UIHeadshotIcon::setScale(float, float) */

void __thiscall UIHeadshotIcon::setScale(UIHeadshotIcon *this,float param_1,float param_2)

{
  long *plVar1;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
  plVar1 = (long *)getHeadshotIcon(this);
  (**(code **)(*plVar1 + 0x148))
            (CONCAT44(in_register_00005004,param_1),CONCAT44(in_register_00005024,param_2));
  return;
}


/* UIHeadshotIcon::hasMonthCard() */

char UIHeadshotIcon::hasMonthCard(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (pPVar2 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar2,2);
    if (cVar1 != '\0') {
      return cVar1;
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHeadshotIcon::changeHeadshot(int) */

void __thiscall UIHeadshotIcon::changeHeadshot(UIHeadshotIcon *this,int param_1)

{
  exception_ptr *this_00;
  char cVar1;
  int iVar2;
  string *this_01;
  ulong uVar3;
  string *psVar4;
  DTouchLayer *pDVar5;
  ProfileMgr *this_02;
  PlayerInfo *pPVar6;
  undefined8 uVar7;
  char *__s;
  code *pcVar8;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DSingleton<HeadshotConfig>::getInstance();
  nop();
  std::string::string(asStack_48,"");
  nop();
  iVar2 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar2 == 0x5b) || (iVar2 = LawnApp::GetPlatform(gLawnApp), iVar2 == 0x27)) {
    DString::DString(aDStack_18,param_1);
    DString::operator_cast_to_string(aDStack_18);
    std::string::string(asStack_38,"plant");
    __s = "init_4399";
  }
  else {
    DString::DString(aDStack_18,param_1);
    DString::operator_cast_to_string(aDStack_18);
    std::string::string(asStack_38,"plant");
    __s = "init";
  }
  std::string::string(asStack_30,__s);
  DIniFile::getItem(this_01,asStack_40,asStack_38);
  thunk_FUN_05475e00(asStack_48,asStack_28);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  DString::~DString(aDStack_18);
  this_00 = (exception_ptr *)(this + 0xd8);
  DString::DString(aDStack_18,param_1);
  DString::operator_cast_to_string(aDStack_18);
  std::string::string(asStack_28,"frame");
  uVar3 = DIniFile::getItemInt((DIniFile *)this_01,asStack_30,asStack_28,1);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  DString::~DString(aDStack_18);
  DString::DString((DString *)asStack_28);
  DString::format((char *)asStack_28,"UI/HeadshotFrame/lv%d_",uVar3 & 0xffffffff);
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)aDStack_18,"imgHeadshotBottom");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)aDStack_18);
  nop();
  pcVar8 = *(code **)(*(long *)pDVar5 + 0x2e8);
  ::operator+((DString *)asStack_28,"2");
  DString::operator_cast_to_string(aDStack_18);
  (*pcVar8)(pDVar5,asStack_30);
  std::string::~string(asStack_30);
  DString::~DString(aDStack_18);
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)aDStack_18,"imgHeadshotFrame");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)aDStack_18);
  nop();
  cVar1 = FUN_0547419c(this + 0x140);
  if (cVar1 == '\0') {
    uVar7 = FUN_0547429c(this + 0x140);
    DString::format((char *)asStack_28,"UI/HeadshotFrame/%s%d_",uVar7,uVar3 & 0xffffffff);
  }
  pcVar8 = *(code **)(*(long *)pDVar5 + 0x2e8);
  ::operator+((DString *)asStack_28,"1");
  DString::operator_cast_to_string(aDStack_18);
  (*pcVar8)(pDVar5,asStack_30);
  std::string::~string(asStack_30);
  DString::~DString(aDStack_18);
  std::string::string((string *)aDStack_18,"animHeadshotEffect");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar5);
  std::string::~string((string *)aDStack_18);
  nop();
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  if ((pPVar6 == (PlayerInfo *)0x0) ||
     (cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar6,1), cVar1 == '\0')) {
    (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,0);
  }
  else {
    (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,1);
  }
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)aDStack_18,"imgHeadshot");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)aDStack_18);
  nop();
  DString::operator=((DString *)asStack_28,"UI/HeadshotFrame/headshot/");
  pcVar8 = *(code **)(*(long *)pDVar5 + 0x338);
  ::operator+((DString *)asStack_28,asStack_48);
  DString::operator_cast_to_string(aDStack_18);
  (*pcVar8)(pDVar5,asStack_30,0);
  std::string::~string(asStack_30);
  DString::~DString(aDStack_18);
  DString::~DString((DString *)asStack_28);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIHeadshotIcon::setBackSuffix(std::string const&) */

void UIHeadshotIcon::setBackSuffix(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x140);
  changeHeadshot((UIHeadshotIcon *)param_1,*(int *)(param_1 + 0x134));
  return;
}


/* UIHeadshotIcon::UserInit() */

void __thiscall UIHeadshotIcon::UserInit(UIHeadshotIcon *this)

{
  changeHeadshot(this,*(int *)(this + 0x134));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIHeadshotIcon::changeHeadshot(int, bool) */

void __thiscall UIHeadshotIcon::changeHeadshot(UIHeadshotIcon *this,int param_1,bool param_2)

{
  exception_ptr *this_00;
  char cVar1;
  int iVar2;
  string *this_01;
  ulong uVar3;
  string *psVar4;
  DTouchLayer *pDVar5;
  undefined8 uVar6;
  char *__s;
  code *pcVar7;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [16];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DSingleton<HeadshotConfig>::getInstance();
  nop();
  std::string::string(asStack_48,"");
  nop();
  iVar2 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar2 == 0x5b) || (iVar2 = LawnApp::GetPlatform(gLawnApp), iVar2 == 0x27)) {
    DString::DString(aDStack_18,param_1);
    DString::operator_cast_to_string(aDStack_18);
    std::string::string(asStack_38,"plant");
    __s = "init_4399";
  }
  else {
    DString::DString(aDStack_18,param_1);
    DString::operator_cast_to_string(aDStack_18);
    std::string::string(asStack_38,"plant");
    __s = "init";
  }
  std::string::string(asStack_30,__s);
  DIniFile::getItem(this_01,asStack_40,asStack_38);
  thunk_FUN_05475e00(asStack_48,asStack_28);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  std::string::~string(asStack_40);
  DString::~DString(aDStack_18);
  this_00 = (exception_ptr *)(this + 0xd8);
  DString::DString(aDStack_18,param_1);
  DString::operator_cast_to_string(aDStack_18);
  std::string::string(asStack_28,"frame");
  uVar3 = DIniFile::getItemInt((DIniFile *)this_01,asStack_30,asStack_28,1);
  std::string::~string(asStack_28);
  nop();
  std::string::~string(asStack_30);
  DString::~DString(aDStack_18);
  DString::DString((DString *)asStack_28);
  DString::format((char *)asStack_28,"UI/HeadshotFrame/lv%d_",uVar3 & 0xffffffff);
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)aDStack_18,"imgHeadshotBottom");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)aDStack_18);
  nop();
  pcVar7 = *(code **)(*(long *)pDVar5 + 0x2e8);
  ::operator+((DString *)asStack_28,"2");
  DString::operator_cast_to_string(aDStack_18);
  (*pcVar7)(pDVar5,asStack_30);
  std::string::~string(asStack_30);
  DString::~DString(aDStack_18);
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)aDStack_18,"imgHeadshotFrame");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)aDStack_18);
  nop();
  cVar1 = FUN_0547419c(this + 0x140);
  if (cVar1 == '\0') {
    uVar6 = FUN_0547429c(this + 0x140);
    DString::format((char *)asStack_28,"UI/HeadshotFrame/%s%d_",uVar6,uVar3 & 0xffffffff);
  }
  pcVar7 = *(code **)(*(long *)pDVar5 + 0x2e8);
  ::operator+((DString *)asStack_28,"1");
  DString::operator_cast_to_string(aDStack_18);
  (*pcVar7)(pDVar5,asStack_30);
  std::string::~string(asStack_30);
  DString::~DString(aDStack_18);
  std::string::string((string *)aDStack_18,"animHeadshotEffect");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>((string *)pDVar5);
  std::string::~string((string *)aDStack_18);
  nop();
  if (param_2) {
    (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,1);
  }
  else {
    (**(code **)(*(long *)pDVar5 + 0xd8))(pDVar5,0);
  }
  psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)aDStack_18,"imgHeadshot");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar4);
  std::string::~string((string *)aDStack_18);
  nop();
  DString::operator=((DString *)asStack_28,"UI/HeadshotFrame/headshot/");
  pcVar7 = *(code **)(*(long *)pDVar5 + 0x338);
  ::operator+((DString *)asStack_28,asStack_48);
  DString::operator_cast_to_string(aDStack_18);
  (*pcVar7)(pDVar5,asStack_30,0);
  std::string::~string(asStack_30);
  DString::~DString(aDStack_18);
  DString::~DString((DString *)asStack_28);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIHeadshotIcon::UserInit(bool) */

void __thiscall UIHeadshotIcon::UserInit(UIHeadshotIcon *this,bool param_1)

{
  changeHeadshot(this,*(int *)(this + 0x134),param_1);
  return;
}


/* UIHeadshotIcon::create(int, bool) */

UIHeadshotIcon * UIHeadshotIcon::create(int param_1,bool param_2)

{
  UIHeadshotIcon *this;
  
  this = ::operator_new(0x148);
  memset(this,0,0x148);
  UIHeadshotIcon(this);
  *(int *)(this + 0x134) = param_1;
  (**(code **)(*(long *)this + 0x310))(this);
  UserInit(this,param_2);
  return this;
}


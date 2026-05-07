// Class: UIUserInfo


/* UIUserInfo::~UIUserInfo() */

void __thiscall UIUserInfo::~UIUserInfo(UIUserInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06770c40;
  s_pWidgetHandler = 0;
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIUserInfo::~UIUserInfo() */

void __thiscall UIUserInfo::~UIUserInfo(UIUserInfo *this)

{
  ~UIUserInfo(this);
  AK::FreeHook(this);
  return;
}


/* UIUserInfo::UIUserInfo() */

void __thiscall UIUserInfo::UIUserInfo(UIUserInfo *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06770c40;
  return;
}


/* UIUserInfo::create(bool) */

UIUserInfo * UIUserInfo::create(bool param_1)

{
  char cVar1;
  long lVar2;
  UIUserInfo *this;
  
  lVar2 = DSingleton<UserInfo>::getInstance();
  cVar1 = FUN_03d7c368(*(undefined1 *)(lVar2 + 0x20));
  if (cVar1 != '\0') {
    if (s_pWidgetHandler == (UIUserInfo *)0x0) {
      this = ::operator_new(0x138);
      memset(this,0,0x138);
      UIUserInfo(this);
      (**(code **)(*(long *)this + 0x310))(this);
      (**(code **)(*(long *)this + 0x318))(this);
      (**(code **)(*(long *)this + 0x338))(this,param_1);
      s_pWidgetHandler = this;
    }
    return s_pWidgetHandler;
  }
  return (UIUserInfo *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUserInfo::Initialize() */

void __thiscall UIUserInfo::Initialize(UIUserInfo *this)

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
  std::string::string(asStack_10,"UIUserInfo");
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
/* UIUserInfo::UserInit() */

void __thiscall UIUserInfo::UserInit(UIUserInfo *this)

{
  exception_ptr *this_00;
  int iVar1;
  undefined4 uVar2;
  string *psVar3;
  DTouchLayer *pDVar4;
  DTouchLayer *pDVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  UIUserInfo *local_b0;
  DTouchLayer *pDStack_a8;
  DTouchLayer *local_a0;
  UIUserInfo *local_90;
  DTouchLayer *pDStack_88;
  DTouchLayer *local_80;
  DTouchLayer *local_68;
  DTouchLayer *local_60;
  UIUserInfo *local_58;
  DTouchLayer *local_50;
  DTouchLayer *local_48;
  UIUserInfo *local_40;
  DTouchLayer *local_38;
  DTouchLayer *local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_40,"root/menu/btnPrivacy");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar8 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03d7ccd8(afStack_28,this);
    (*pcVar8)(pDVar4,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_40,"root/menu/btnClose");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar8 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03d7cd34(afStack_28,this);
    (*pcVar8)(pDVar4,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_40,"root/menu/btnGreenBtn_Save");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar8 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03d7cd90(afStack_28,this);
    (*pcVar8)(pDVar4,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_40,"root/menu/boyBtn");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string((string *)&local_40,"root/menu/girlBtn");
  pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar1 == 0x48) || (iVar1 = LawnApp::GetPlatform(gLawnApp), iVar1 == 0x14)) {
    fVar10 = 0.0;
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    pcVar8 = *(code **)(*plVar6 + 0x58);
    std::string::string((string *)&local_40,"root/emailNode");
    plVar6 = (long *)(*pcVar8)(plVar6,(string *)&local_40);
    std::string::~string((string *)&local_40);
    nop();
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0xd8))(plVar6,0);
      fVar10 = 40.0;
    }
  }
  else {
    fVar10 = 0.0;
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    pcVar8 = *(code **)(*plVar6 + 0x58);
    std::string::string((string *)&local_40,"root/emailNode");
    (*pcVar8)(plVar6,(string *)&local_40);
    std::string::~string((string *)&local_40);
    nop();
  }
  plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  pcVar8 = *(code **)(*plVar6 + 0x58);
  std::string::string((string *)&local_40,"root/phoneNode");
  plVar6 = (long *)(*pcVar8)(plVar6,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  if (plVar6 != (long *)0x0) {
    pcVar8 = *(code **)(*plVar6 + 0x120);
    fVar9 = (float)(**(code **)(*plVar6 + 0x1c8))(plVar6);
    (*pcVar8)(fVar9 - fVar10,plVar6);
  }
  plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  pcVar8 = *(code **)(*plVar6 + 0x58);
  std::string::string((string *)&local_40,"root/sexText");
  plVar6 = (long *)(*pcVar8)(plVar6,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  if (plVar6 != (long *)0x0) {
    pcVar8 = *(code **)(*plVar6 + 0x120);
    fVar9 = (float)(**(code **)(*plVar6 + 0x1c8))(plVar6);
    (*pcVar8)(fVar9 - fVar10,plVar6);
  }
  plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  pcVar8 = *(code **)(*plVar6 + 0x58);
  std::string::string((string *)&local_40,"root/ageNode");
  plVar6 = (long *)(*pcVar8)(plVar6,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  if (plVar6 != (long *)0x0) {
    pcVar8 = *(code **)(*plVar6 + 0x120);
    fVar9 = (float)(**(code **)(*plVar6 + 0x1c8))(plVar6);
    (*pcVar8)(fVar9 - fVar10,plVar6);
  }
  local_68 = pDVar4;
  local_60 = pDVar5;
  if (pDVar4 == (DTouchLayer *)0x0) {
    if (pDVar5 == (DTouchLayer *)0x0) {
      local_68 = pDVar5;
      lVar7 = DSingleton<UserInfo>::getInstance();
      uVar2 = FUN_03d7c35c(*(undefined4 *)(lVar7 + 0x1c));
      FUN_03d7cffc(&local_68,uVar2);
      goto LAB_03d7d6bc;
    }
    pcVar8 = *(code **)(*(long *)pDVar5 + 0x120);
    fVar9 = (float)(**(code **)(*(long *)pDVar5 + 0x1c8))(pDVar5);
    (*pcVar8)(fVar9 - fVar10,pDVar5);
    lVar7 = DSingleton<UserInfo>::getInstance();
    uVar2 = FUN_03d7c35c(*(undefined4 *)(lVar7 + 0x1c));
    FUN_03d7cffc(&local_68,uVar2);
  }
  else {
    pcVar8 = *(code **)(*(long *)pDVar4 + 0x120);
    fVar9 = (float)(**(code **)(*(long *)pDVar4 + 0x1c8))(pDVar4);
    (*pcVar8)(fVar9 - fVar10,pDVar4);
    if (pDVar5 != (DTouchLayer *)0x0) {
      pcVar8 = *(code **)(*(long *)pDVar5 + 0x120);
      fVar9 = (float)(**(code **)(*(long *)pDVar5 + 0x1c8))(pDVar5);
      (*pcVar8)(fVar9 - fVar10,pDVar5);
    }
    lVar7 = DSingleton<UserInfo>::getInstance();
    uVar2 = FUN_03d7c35c(*(undefined4 *)(lVar7 + 0x1c));
    FUN_03d7cffc(&local_68,uVar2);
    pcVar8 = *(code **)(*(long *)pDVar4 + 0x350);
    local_50 = local_68;
    local_48 = local_60;
    pDStack_88 = local_68;
    local_80 = local_60;
    local_90 = this;
    local_58 = this;
    FUN_03d7cdec(afStack_28,&local_90);
    (*pcVar8)(pDVar4,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    if (pDVar5 == (DTouchLayer *)0x0) goto LAB_03d7d6bc;
  }
  pcVar8 = *(code **)(*(long *)pDVar5 + 0x350);
  local_38 = local_68;
  local_30 = local_60;
  pDStack_a8 = local_68;
  local_a0 = local_60;
  local_b0 = this;
  local_40 = this;
  FUN_03d7ce4c(afStack_28,&local_b0);
  (*pcVar8)(pDVar5,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
LAB_03d7d6bc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


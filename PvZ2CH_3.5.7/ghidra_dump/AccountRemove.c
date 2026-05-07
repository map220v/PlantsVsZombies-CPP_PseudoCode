// Class: AccountRemove


/* AccountRemove::~AccountRemove() */

void __thiscall AccountRemove::~AccountRemove(AccountRemove *this)

{
  *(undefined ***)this = &PTR_GetClass_06615660;
  s_pWidgetHandler = 0;
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* AccountRemove::~AccountRemove() */

void __thiscall AccountRemove::~AccountRemove(AccountRemove *this)

{
  ~AccountRemove(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountRemove::Initialize() */

void __thiscall AccountRemove::Initialize(AccountRemove *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"AccountRemove");
  DNodeWidget::load((DNodeWidget *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccountRemove::AccountRemove() */

void __thiscall AccountRemove::AccountRemove(AccountRemove *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined ***)this = &PTR_GetClass_06615660;
  return;
}


/* AccountRemove::create(AccountStatus) */

AccountRemove * AccountRemove::create(undefined4 param_1)

{
  AccountRemove *this;
  
  if (s_pWidgetHandler != (AccountRemove *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x140);
  memset(this,0,0x140);
  AccountRemove(this);
  *(undefined4 *)(this + 0x138) = param_1;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,1);
  s_pWidgetHandler = this;
  return this;
}


/* AccountRemove::get() */

undefined8 AccountRemove::get(void)

{
  return s_pWidgetHandler;
}


/* AccountRemove::ExitGame() */

void AccountRemove::ExitGame(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Android::Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x100));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccountRemove::InitUI(AccountStatus) */

void __thiscall AccountRemove::InitUI(AccountRemove *this,int param_2,size_t param_3)

{
  exception_ptr *peVar1;
  TGALogMgr *pTVar2;
  DTouchLayer *pDVar3;
  DTouchLayer *pDVar4;
  DTouchLayer *pDVar5;
  long *plVar6;
  DAction *pDVar7;
  string *psVar8;
  DTouchLayer *pDVar9;
  DTouchLayer *pDVar10;
  undefined8 uVar11;
  string *extraout_x0;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  char *pcVar12;
  wstring *extraout_x1;
  code *pcVar13;
  AccountRemove *local_100;
  DTouchLayer *pDStack_f8;
  DTouchLayer *local_f0;
  DTouchLayer *pDStack_e8;
  DTouchLayer *local_e0;
  TGABagData aTStack_c8 [8];
  string asStack_c0 [8];
  DRefPtr<DUpdateNumberAction> aDStack_b8 [8];
  DTouchLayer *local_b0;
  undefined1 auStack_a8 [8];
  NextPopData aNStack_a0 [16];
  function<bool(Sexy::Touch_const&)> afStack_90 [32];
  AccountRemove *local_70;
  DTouchLayer *local_68;
  DTouchLayer *local_60;
  undefined1 auStack_58 [8];
  function<bool(Sexy::Touch_const&)> afStack_50 [32];
  AccountRemove *local_30;
  DTouchLayer *local_28;
  DTouchLayer *local_20;
  DTouchLayer *local_18;
  DTouchLayer *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGABagData::TGABagData(aTStack_c8);
  std::string::append((string *)aTStack_c8,"1",param_3);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData((TGABagData *)&local_30,aTStack_c8);
  TGALogMgr::LogAccountRemove(pTVar2,(TGABagData *)&local_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_30);
  if (param_2 == 0) {
    peVar1 = (exception_ptr *)(this + 0xd8);
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnRecover");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,0);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnExit");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,0);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnClose");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      pcVar13 = *(code **)(*(long *)pDVar9 + 0x350);
      FUN_033b4a88(afStack_50,this);
      (*pcVar13)(pDVar9,afStack_50);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnConfirm");
    pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnConfirmText");
    pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"content");
    pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"displayTitle");
    pDVar5 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    if (pDVar10 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar10 + 0x338))(pDVar10,0);
      pcVar13 = *(code **)(*(long *)pDVar10 + 0x350);
      local_100 = this;
      pDStack_f8 = pDVar4;
      local_f0 = pDVar5;
      pDStack_e8 = pDVar9;
      local_e0 = pDVar3;
      local_30 = this;
      local_28 = pDVar4;
      local_20 = pDVar5;
      local_18 = pDVar9;
      local_10 = pDVar3;
      FUN_033b4ae4(afStack_50,&local_100);
      (*pcVar13)(pDVar10,afStack_50);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
      (**(code **)(*(long *)pDVar3 + 0x360))(asStack_c0,pDVar3);
      DRefPtr<DUpdateNumberAction>::DRefPtr(aDStack_b8);
      local_b0 = pDVar3;
      FUN_05475d88(auStack_a8,asStack_c0);
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_b8);
      pcVar13 = *(code **)(*plVar6 + 0x40);
      NextPopData::NextPopData(aNStack_a0,(NextPopData *)&local_b0);
      FUN_033b4d10(afStack_90,aNStack_a0);
      pDVar7 = (DAction *)(*pcVar13)(plVar6,0x14,0,afStack_90);
      pDVar7 = (DAction *)DAction::setDuration(pDVar7,20.0);
      local_70 = this;
      local_68 = pDVar10;
      local_60 = pDVar3;
      FUN_05475d88(auStack_58,asStack_c0);
      FUN_033b4d70(afStack_50,(Entry *)&local_70);
      DAction::onDone(pDVar7,(function *)afStack_50);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
      Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)&local_70);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_90);
      PakRecord::~PakRecord((PakRecord *)aNStack_a0);
      uVar11 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_b8);
      (**(code **)(*(long *)pDVar3 + 0x298))(pDVar3,uVar11);
      PakRecord::~PakRecord((PakRecord *)&local_b0);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_b8);
      std::string::~string(asStack_c0);
    }
  }
  else if (param_2 == 1) {
    peVar1 = (exception_ptr *)(this + 0xd8);
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnRecover");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,1);
      pcVar13 = *(code **)(*(long *)pDVar9 + 0x350);
      FUN_033b4b44(afStack_50,this);
      (*pcVar13)(pDVar9,afStack_50);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnExit");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,1);
      pcVar13 = *(code **)(*(long *)pDVar9 + 0x350);
      FUN_033b4ba0(afStack_50,this);
      (*pcVar13)(pDVar9,afStack_50);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnConfirm");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,0);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"content");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"displayTitle");
    pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    (**(code **)(*(long *)pDVar10 + 0x338))(pDVar10,&DAT_055a4540);
    DSingleton<UserInfo>::getInstance();
    nop();
    Sexy::UTF8StringToSexyString(extraout_x0);
    this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *)Sexy::LazySingleton<AccountRemoveMgr>::GetInstance();
    psVar8 = (string *)
             std::
             _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             ::_M_root(this_00);
    Sexy::ToWString(psVar8);
    TodStringTranslate(L"[ACCOUNT_REMOVE_CONTENT_5]");
    TodReplaceString((wstring *)&local_30,L"{ACCOUNT}",(wstring *)aDStack_b8);
    FUN_05476c50((TGABagData *)&local_30);
    TodReplaceString((wstring *)aNStack_a0,L"{TIME}",(wstring *)&local_b0);
    FUN_054766c8((wstring *)aNStack_a0,(TGABagData *)&local_30);
    FUN_05476c50((TGABagData *)&local_30);
    Sexy::SexyStringToUTF8String((Sexy *)aNStack_a0,extraout_x1);
    DString::DString((DString *)&local_30,(string *)&local_70);
    std::string::~string((string *)&local_70);
    pcVar13 = *(code **)(*(long *)pDVar9 + 0x338);
    pcVar12 = DString::operator_cast_to_char_((DString *)&local_30);
    (*pcVar13)(pDVar9,pcVar12);
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_70,"btnClose");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_70);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      pcVar13 = *(code **)(*(long *)pDVar9 + 0x350);
      FUN_033b4bfc(afStack_50,this);
      (*pcVar13)(pDVar9,afStack_50);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
    }
    DString::~DString((DString *)&local_30);
    FUN_05476c50((wstring *)aNStack_a0);
    FUN_05476c50((wstring *)&local_b0);
    FUN_05476c50((wstring *)aDStack_b8);
  }
  else if (param_2 == 2) {
    peVar1 = (exception_ptr *)(this + 0xd8);
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnRecover");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,0);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnExit");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,0);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnConfirm");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      (**(code **)(*(long *)pDVar9 + 0xd8))(pDVar9,1);
      pcVar13 = *(code **)(*(long *)pDVar9 + 0x350);
      FUN_033b4c58(afStack_50,this);
      (*pcVar13)(pDVar9,afStack_50);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
    }
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"btnConfirmText");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    (**(code **)(*(long *)pDVar9 + 0x338))(pDVar9,&DAT_055a4550);
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"content");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_30,"displayTitle");
    pDVar10 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_30);
    nop();
    (**(code **)(*(long *)pDVar10 + 0x338))(pDVar10,&DAT_055a4560);
    DString::DString((DString *)&local_30,"[ACCOUNT_REMOVE_CONTENT_6]");
    pcVar13 = *(code **)(*(long *)pDVar9 + 0x330);
    uVar11 = DString::c_str((DString *)&local_30);
    (*pcVar13)(pDVar9,uVar11);
    psVar8 = (string *)std::__exception_ptr::exception_ptr::_M_get(peVar1);
    std::string::string((string *)&local_70,"btnClose");
    pDVar9 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar8);
    std::string::~string((string *)&local_70);
    nop();
    if (pDVar9 != (DTouchLayer *)0x0) {
      pcVar13 = *(code **)(*(long *)pDVar9 + 0x350);
      FUN_033b4cb4(afStack_50,this);
      (*pcVar13)(pDVar9,afStack_50);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_50);
    }
    DString::~DString((DString *)&local_30);
  }
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccountRemove::UserInit() */

void __thiscall AccountRemove::UserInit(AccountRemove *this)

{
  InitUI(this,*(undefined4 *)(this + 0x138));
  return;
}


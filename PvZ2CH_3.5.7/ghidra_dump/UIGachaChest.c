// Class: UIGachaChest


/* UIGachaChest::~UIGachaChest() */

void __thiscall UIGachaChest::~UIGachaChest(UIGachaChest *this)

{
  *(undefined ***)this = &PTR_GetClass_06772230;
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIGachaChest::~UIGachaChest() */

void __thiscall UIGachaChest::~UIGachaChest(UIGachaChest *this)

{
  ~UIGachaChest(this);
  AK::FreeHook(this);
  return;
}


/* UIGachaChest::UIGachaChest() */

void __thiscall UIGachaChest::UIGachaChest(UIGachaChest *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined4 *)(this + 0x134) = 0;
  this[0x138] = (UIGachaChest)0x0;
  this[0x139] = (UIGachaChest)0x0;
  *(undefined ***)this = &PTR_GetClass_06772230;
  return;
}


/* UIGachaChest::create(int, Sexy::TRect<int> const&) */

UIGachaChest * UIGachaChest::create(int param_1,TRect *param_2)

{
  UIGachaChest *this;
  
  this = ::operator_new(0x140);
  memset(this,0,0x140);
  UIGachaChest(this);
  (**(code **)(*(long *)this + 0x328))
            (this,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
             *(undefined4 *)(param_2 + 0xc));
  *(int *)(this + 0x134) = param_1;
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaChest::Initialize() */

void __thiscall UIGachaChest::Initialize(UIGachaChest *this)

{
  undefined1 auStack_48 [16];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIPennyGachaChest");
  DNodeWidget::load((DNodeWidget *)this,asStack_20,false);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_38,"Join");
  std::string::string(asStack_30,"New_Penny_Gacha");
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_20,asStack_30,1,auStack_48);
  std::string::string(asStack_28,"");
  BehaviorLog::event(asStack_38,(vector *)asStack_20,asStack_28);
  std::string::~string(asStack_28);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_20);
  std::string::~string(asStack_30);
  nop();
  std::string::~string(asStack_38);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaChest::updateNew(bool) */

void __thiscall UIGachaChest::updateNew(UIGachaChest *this,bool param_1)

{
  exception_ptr *this_00;
  UIGachaChest UVar1;
  UIGachaChest UVar2;
  int iVar3;
  GachaDetailCacheMgr *pGVar4;
  string *psVar5;
  DTouchLayer *pDVar6;
  undefined8 uVar7;
  code *pcVar8;
  string asStack_40 [8];
  string asStack_38 [16];
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar4 = (GachaDetailCacheMgr *)DSingleton<GachaDetailCacheMgr>::getInstance();
  UVar1 = (UIGachaChest)GachaDetailCacheMgr::isNew(pGVar4,*(int *)(this + 0x134));
  pGVar4 = (GachaDetailCacheMgr *)DSingleton<GachaDetailCacheMgr>::getInstance();
  UVar2 = (UIGachaChest)GachaDetailCacheMgr::isTimeLimited(pGVar4,*(int *)(this + 0x134));
  if (((this[0x139] == UVar2) && (this[0x138] == UVar1)) && (!param_1)) goto LAB_03d911dc;
  this_00 = (exception_ptr *)(this + 0xd8);
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_38,"newFlag");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_38);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar6 + 0xd8))(pDVar6,(byte)UVar1 & ((byte)UVar2 ^ 1));
  }
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_38,"limitedFlag");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_38);
  nop();
  if (pDVar6 != (DTouchLayer *)0x0) {
    (**(code **)(*(long *)pDVar6 + 0xd8))(pDVar6,UVar2);
  }
  if (UVar2 != (UIGachaChest)0x0) {
    pGVar4 = (GachaDetailCacheMgr *)DSingleton<GachaDetailCacheMgr>::getInstance();
    iVar3 = GachaDetailCacheMgr::getTimeLimitedId(pGVar4,*(int *)(this + 0x134),true);
    if (iVar3 == 0) {
      pGVar4 = (GachaDetailCacheMgr *)DSingleton<GachaDetailCacheMgr>::getInstance();
      iVar3 = GachaDetailCacheMgr::getTimeLimitedId(pGVar4,*(int *)(this + 0x134),false);
    }
    psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_38,"limitedPlant");
    pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
    std::string::~string(asStack_38);
    nop();
    if (pDVar6 != (DTouchLayer *)0x0) {
      GetGameItemInfo(iVar3,0x7fffffff,0);
      pcVar8 = *(code **)(*(long *)pDVar6 + 0x2e8);
      FUN_031f5e7c(asStack_40,"IMAGE_UI_HEADSHOT_BIGPLANT_",auStack_28);
      (*pcVar8)(pDVar6,asStack_40);
      std::string::~string(asStack_40);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_38);
    }
  }
  psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_38,"check_anim1");
  pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
  std::string::~string(asStack_38);
  nop();
  if (pDVar6 == (DTouchLayer *)0x0) {
    psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_38,"check_anim2");
    pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
    std::string::~string(asStack_38);
    nop();
    if (pDVar6 != (DTouchLayer *)0x0) {
      if (UVar1 == (UIGachaChest)0x0) goto LAB_03d91310;
LAB_03d91258:
      pcVar8 = *(code **)(*(long *)pDVar6 + 0x298);
      psVar5 = (string *)DNodeWidget::getLoader((DNodeWidget *)this);
      std::string::string(asStack_40,"rotate2");
      DNodeLoaderConfig::loadAction(psVar5);
      uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_38);
      (*pcVar8)(pDVar6,uVar7);
      DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_38);
      std::string::~string(asStack_40);
      nop();
    }
  }
  else if (UVar1 == (UIGachaChest)0x0) {
    (**(code **)(*(long *)pDVar6 + 0x2a8))(pDVar6);
    psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_38,"check_anim2");
    pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
    std::string::~string(asStack_38);
    nop();
    if (pDVar6 != (DTouchLayer *)0x0) {
LAB_03d91310:
      (**(code **)(*(long *)pDVar6 + 0x2a8))(pDVar6);
    }
  }
  else {
    pcVar8 = *(code **)(*(long *)pDVar6 + 0x298);
    psVar5 = (string *)DNodeWidget::getLoader((DNodeWidget *)this);
    std::string::string(asStack_40,"rotate");
    DNodeLoaderConfig::loadAction(psVar5);
    uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_38);
    (*pcVar8)(pDVar6,uVar7);
    DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_38);
    std::string::~string(asStack_40);
    nop();
    psVar5 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
    std::string::string(asStack_38,"check_anim2");
    pDVar6 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar5);
    std::string::~string(asStack_38);
    nop();
    if (pDVar6 != (DTouchLayer *)0x0) goto LAB_03d91258;
  }
  this[0x138] = UVar1;
  this[0x139] = UVar2;
LAB_03d911dc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGachaChest::UserInit() */

void __thiscall UIGachaChest::UserInit(UIGachaChest *this)

{
  string *psVar1;
  DTouchLayer *pDVar2;
  DAction *pDVar3;
  long *plVar4;
  undefined8 uVar5;
  Effect_Barrage *this_00;
  code *pcVar6;
  DRefPtr<DAction> aDStack_38 [8];
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  updateNew(this,true);
  psVar1 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  std::string::string(asStack_30,"root/menu/btnViewDetail");
  pDVar2 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar1);
  std::string::~string(asStack_30);
  nop();
  if (pDVar2 != (DTouchLayer *)0x0) {
    pcVar6 = *(code **)(*(long *)pDVar2 + 0x350);
    FUN_03d8b0c8(afStack_28,this);
    (*pcVar6)(pDVar2,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  DRefPtr<DAction>::DRefPtr(aDStack_38);
  DRefPtr<DSequence>::DRefPtr((DRefPtr<DSequence> *)asStack_30);
  pDVar3 = (DAction *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  pDVar3 = (DAction *)DAction::setDelayTime(pDVar3,0.2);
  FUN_03d8b2f4(afStack_28,this);
  DAction::onDone(pDVar3,(function *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_30);
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)aDStack_38);
  this_00 = (Effect_Barrage *)(**(code **)(*plVar4 + 0x40))(plVar4,uVar5);
  Effect_Barrage::SetViceBarrage(this_00,(Effect_Barrage *)0x0);
  plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)asStack_30);
  (**(code **)(*plVar4 + 0x298))(plVar4,uVar5);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)asStack_30);
  DRefPtr<UIAccumulatedLoginButton>::~DRefPtr((DRefPtr<UIAccumulatedLoginButton> *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


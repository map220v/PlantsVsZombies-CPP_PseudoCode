// Class: UIBuyCrystal


/* UIBuyCrystal::UIBuyCrystal() */

void __thiscall UIBuyCrystal::UIBuyCrystal(UIBuyCrystal *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06777680;
  Set8BytesTo0(this + 0x138);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x140));
  return;
}


/* UIBuyCrystal::create(std::string const&, bool) */

UIBuyCrystal * UIBuyCrystal::create(string *param_1,bool param_2)

{
  UIBuyCrystal *this;
  
  this = ::operator_new(0x148);
  memset(this,0,0x148);
  UIBuyCrystal(this);
  thunk_FUN_05475e00(this + 0x138,param_1);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  (**(code **)(*(long *)this + 0x338))(this,param_2);
  return this;
}


/* UIBuyCrystal::~UIBuyCrystal() */

void __thiscall UIBuyCrystal::~UIBuyCrystal(UIBuyCrystal *this)

{
  *(undefined ***)this = &PTR_GetClass_06777680;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
  std::string::~string((string *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UIBuyCrystal::~UIBuyCrystal() */

void __thiscall UIBuyCrystal::~UIBuyCrystal(UIBuyCrystal *this)

{
  ~UIBuyCrystal(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBuyCrystal::Initialize() */

void __thiscall UIBuyCrystal::Initialize(UIBuyCrystal *this)

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
  std::string::string(asStack_10,"UIBuyCrystal");
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
/* UIBuyCrystal::UserInit() */

void __thiscall UIBuyCrystal::UserInit(UIBuyCrystal *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  exception_ptr *this_01;
  long lVar1;
  RtWeakPtrBase *pRVar2;
  string *psVar3;
  DTouchLayer *pDVar4;
  undefined8 uVar5;
  MagentoProductProps *pMVar6;
  code *pcVar7;
  float fVar8;
  UIBuyCrystal *local_b0;
  undefined8 uStack_a8;
  DTouchLayer *local_a0;
  UIBuyCrystal *local_90;
  undefined8 uStack_88;
  DTouchLayer *local_80;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  UIBuyCrystal *local_58;
  undefined8 uStack_50;
  DTouchLayer *local_48;
  UIBuyCrystal *local_40;
  undefined8 uStack_38;
  DTouchLayer *local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  string *local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  Magento::GetStore((Magento *)(this + 0x138),___stack_chk_guard);
  this_01 = (exception_ptr *)(this + 0xd8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pRVar2 = (RtWeakPtrBase *)FUN_03dbcfa8(*(undefined8 *)(lVar1 + 0x60),0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,pRVar2);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  pRVar2 = (RtWeakPtrBase *)FUN_03dbcfa8(*(undefined8 *)(lVar1 + 0x60),1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,pRVar2);
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"imgFireCrystalsCoin_1");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar7 = *(code **)(*(long *)pDVar4 + 0x2e8);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    (*pcVar7)(pDVar4,lVar1 + 0x68);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"imgFireCrystalsCoin_2");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar7 = *(code **)(*(long *)pDVar4 + 0x2e8);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    (*pcVar7)(pDVar4,lVar1 + 0x68);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"textName_1");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    MagentoProductProps::GetLocalizedName();
    uVar5 = FUN_0547429c((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    (**(code **)(*(long *)pDVar4 + 0x330))(pDVar4,uVar5);
    std::string::~string((string *)&local_40);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"textName_2");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    MagentoProductProps::GetLocalizedName();
    uVar5 = FUN_0547429c((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    (**(code **)(*(long *)pDVar4 + 0x330))(pDVar4,uVar5);
    std::string::~string((string *)&local_40);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"textNumber_1");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    MagentoProductProps::GetLocalizedShortDescription();
    uVar5 = FUN_0547429c((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    (**(code **)(*(long *)pDVar4 + 0x330))(pDVar4,uVar5);
    std::string::~string((string *)&local_40);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"textNumber_2");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    MagentoProductProps::GetLocalizedShortDescription();
    uVar5 = FUN_0547429c((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    (**(code **)(*(long *)pDVar4 + 0x330))(pDVar4,uVar5);
    std::string::~string((string *)&local_40);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"root/menu/btnClose");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar7 = *(code **)(*(long *)pDVar4 + 0x350);
    FUN_03dbd618(afStack_28,this);
    (*pcVar7)(pDVar4,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"textUseGem_1");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pMVar6 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,lVar1 + 0x88);
    fVar8 = (float)MagentoProductProps::GetPriceByTypeName
                             (pMVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0);
    std::string::~string((string *)&local_40);
    Sexy::StrFormat("%d",(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,(ulong)(uint)(int)fVar8);
    uVar5 = FUN_0547429c((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    (**(code **)(*(long *)pDVar4 + 0x338))(pDVar4,uVar5);
    std::string::~string((string *)&local_40);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"textUseGem_2");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pMVar6 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,lVar1 + 0x88);
    fVar8 = (float)MagentoProductProps::GetPriceByTypeName
                             (pMVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,0);
    std::string::~string((string *)&local_40);
    Sexy::StrFormat("%d",(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,(ulong)(uint)(int)fVar8);
    uVar5 = FUN_0547429c((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    (**(code **)(*(long *)pDVar4 + 0x338))(pDVar4,uVar5);
    std::string::~string((string *)&local_40);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"root/menu/btnGreenBtn_UseGem_1");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar7 = *(code **)(*(long *)pDVar4 + 0x350);
    uStack_88 = uStack_50;
    local_90 = this;
    local_80 = pDVar4;
    local_58 = this;
    local_48 = pDVar4;
    FUN_03dbd674(afStack_28,&local_90);
    (*pcVar7)(pDVar4,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_01);
  std::string::string((string *)&local_40,"root/menu/btnGreenBtn_UseGem_10");
  pDVar4 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar3);
  std::string::~string((string *)&local_40);
  nop();
  if (pDVar4 != (DTouchLayer *)0x0) {
    pcVar7 = *(code **)(*(long *)pDVar4 + 0x350);
    uStack_a8 = uStack_38;
    local_b0 = this;
    local_a0 = pDVar4;
    local_40 = this;
    local_30 = pDVar4;
    FUN_03dbd6d4(afStack_28,&local_b0);
    (*pcVar7)(pDVar4,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBuyCrystal::buyItem(int) */

void __thiscall UIBuyCrystal::buyItem(UIBuyCrystal *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  MagentoProductProps *pMVar4;
  TGALogMgr *this_02;
  NameMapperBase *this_03;
  ActivityManager *this_04;
  float fVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x140));
    pRVar3 = (RtWeakPtrBase *)FUN_03dbcfa8(*(undefined8 *)(lVar2 + 0x60),(long)param_1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar3);
    pMVar4 = (MagentoProductProps *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    FUN_05475d88(asStack_18,lVar2 + 0x88);
    fVar5 = (float)MagentoProductProps::GetPriceByTypeName(pMVar4,asStack_18,0);
    std::string::~string(asStack_18);
    iVar1 = PlayerInfo::GetNumGems(this_01,false);
    if (iVar1 < (int)fVar5) {
      LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
    else {
      this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      DString::DString((DString *)asStack_18,(int)fVar5);
      DString::operator_cast_to_string((DString *)asStack_18);
      TGALogMgr::LogSegments(this_02,0x274b,0,asStack_20);
      std::string::~string(asStack_20);
      DString::~DString((DString *)asStack_18);
      this_03 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      iVar1 = NameMapperBase::GetIdForName(this_03,(string *)(lVar2 + 0x80));
      this_04 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      ActivityManager::RequestUseGem(this_04,iVar1,*(int *)(lVar2 + 0x90),true);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


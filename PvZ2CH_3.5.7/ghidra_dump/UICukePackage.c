// Class: UICukePackage


/* UICukePackage::get() */

undefined8 UICukePackage::get(void)

{
  return s_pWidgetHandler;
}


/* UICukePackage::RemoveSelf() */

void __thiscall UICukePackage::RemoveSelf(UICukePackage *this)

{
  LawnApp::removeSpecifiedWidget(gLawnApp,(Widget *)this,false);
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  return;
}


/* UICukePackage::OnCloseButtonClick() */

void __thiscall UICukePackage::OnCloseButtonClick(UICukePackage *this)

{
  LawnApp::removeSpecifiedWidget(gLawnApp,(Widget *)this,false);
  (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),0);
  return;
}


/* UICukePackage::UICukePackage() */

void __thiscall UICukePackage::UICukePackage(UICukePackage *this)

{
  DNodeWidget::DNodeWidget((DNodeWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06980ae0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x138));
  return;
}


/* UICukePackage::create() */

UICukePackage * UICukePackage::create(void)

{
  UICukePackage *this;
  
  if (s_pWidgetHandler != (UICukePackage *)0x0) {
    return s_pWidgetHandler;
  }
  this = ::operator_new(0x140);
  memset(this,0,0x140);
  UICukePackage(this);
  (**(code **)(*(long *)this + 0x310))(this);
  (**(code **)(*(long *)this + 0x318))(this);
  s_pWidgetHandler = this;
  return this;
}


/* UICukePackage::~UICukePackage() */

void __thiscall UICukePackage::~UICukePackage(UICukePackage *this)

{
  *(undefined ***)this = &PTR_GetClass_06980ae0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  s_pWidgetHandler = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138));
  DNodeWidget::~DNodeWidget((DNodeWidget *)this);
  return;
}


/* UICukePackage::~UICukePackage() */

void __thiscall UICukePackage::~UICukePackage(UICukePackage *this)

{
  ~UICukePackage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICukePackage::UserInit() */

void __thiscall UICukePackage::UserInit(UICukePackage *this)

{
  exception_ptr *this_00;
  char cVar1;
  string *psVar2;
  DTouchLayer *pDVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  this_00 = (exception_ptr *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/menu/closeButton");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_30);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x350);
    FUN_04c02414(afStack_28,this);
    (*pcVar6)(pDVar3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/menu/confirmButton");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_30);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x350);
    FUN_04c02470(afStack_28,this);
    (*pcVar6)(pDVar3,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  }
  lVar4 = LawnApp::GetActivityConfig();
  uVar5 = FUN_04c02028(*(undefined4 *)(lVar4 + 0xc));
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/addCount");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_30);
  nop();
  if (pDVar3 != (DTouchLayer *)0x0) {
    pcVar6 = *(code **)(*(long *)pDVar3 + 0x2e8);
    Sexy::StrFormat("UI/ads/num%d",asStack_30,uVar5 & 0xffffffff);
    (*pcVar6)(pDVar3,asStack_30);
    std::string::~string(asStack_30);
  }
  psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get(this_00);
  std::string::string(asStack_30,"root/imgOppoTutorial");
  pDVar3 = DTransformNode::getChildRecursionByName<DTouchLayer*>(psVar2);
  std::string::~string(asStack_30);
  nop();
  (**(code **)(*(long *)pDVar3 + 0xd8))(pDVar3,0);
  cVar1 = LawnApp::isOppoCukeTipShow(gLawnApp);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)pDVar3 + 0xd8))(pDVar3,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICukePackage::OnConfirmButtonClick() */

void UICukePackage::OnConfirmButtonClick(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  PurchaseBroker *this_00;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this);
  PurchaseBroker::RequestPayment(this_00,(string *)&DAT_06b8d740,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICukePackage::Initialize() */

void __thiscall UICukePackage::Initialize(UICukePackage *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  string asStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Magento::GetProduct((Magento *)&DAT_06b8d740,___stack_chk_guard);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x138),(RtWeakPtr *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyCukePackgae);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<MagentoProductProps*,Sexy::CBMemberTranslatorX<UICukePackage,void(UICukePackage::*)(MagentoProductProps*)>>
            ((MessageRouter *)puVar1,Message::ItemPurchasedFromStore,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,BuyCukePackgaeSuccess);
  Sexy::Delegate0::Delegate0<UICukePackage,void(UICukePackage::*)()>(aDStack_38,asStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::BuyIOSCukePacket,aDStack_38);
  std::string::string(asStack_68,"UI_CukePackage");
  DNodeWidget::load((DNodeWidget *)this,asStack_68,false);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICukePackage::BuyCukePackgaeSuccess() */

void __thiscall UICukePackage::BuyCukePackgaeSuccess(UICukePackage *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar2;
  string *psVar3;
  ResourceInfo *pRVar4;
  Board *this_02;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::setHasPurchaseCukePkg(this_01,true);
  lVar2 = LawnApp::GetActivityConfig();
  iVar1 = FUN_04c02028(*(undefined4 *)(lVar2 + 0xc));
  PlayerInfo::ModifyPowerupUses(this_01,(string *)&DAT_06b8d7e8,iVar1);
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
  ObjectTypeDirectory<PowerupType>::GetTypeFromTypeName(psVar3);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Board::SelectPowerup(this_02,(PowerupType *)pRVar4,false);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  RemoveSelf(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICukePackage::OnBuyCukePackgae(MagentoProductProps*) */

void __thiscall UICukePackage::OnBuyCukePackgae(UICukePackage *this,MagentoProductProps *param_1)

{
  MagentoProductProps *pMVar1;
  
  pMVar1 = (MagentoProductProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x138))
  ;
  if (param_1 != pMVar1) {
    return;
  }
  BuyCukePackgaeSuccess(this);
  return;
}


/* UICukePackage::Draw(Sexy::Graphics*) */

void __thiscall UICukePackage::Draw(UICukePackage *this,Graphics *param_1)

{
  DTransformNode *this_00;
  
  this_00 = (DTransformNode *)
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)(this + 0xd8));
  DTransformNode::visit(this_00,param_1);
  return;
}


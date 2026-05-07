// Class: PlantfoodUI


/* PlantfoodUI::onEnterState_Pressed(WidgetState) */

void PlantfoodUI::onEnterState_Pressed(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_FoodArm");
  return;
}


/* PlantfoodUI::cancelTouch() */

void __thiscall PlantfoodUI::cancelTouch(PlantfoodUI *this)

{
  this[0x179] = (PlantfoodUI)0x0;
  *(undefined8 *)(this + 0x180) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::StaticClassInit() */

void PlantfoodUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantfoodUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03f7bd74,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodUI::StaticGetClass() */

long * PlantfoodUI::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodUI::GetClass() const */

long * PlantfoodUI::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodUI::SetFreePlantfoodAddition(bool) */

void __thiscall PlantfoodUI::SetFreePlantfoodAddition(PlantfoodUI *this,bool param_1)

{
  this[0x178] = (PlantfoodUI)param_1;
  return;
}


/* PlantfoodUI::SetForceShowPlus(bool) */

void __thiscall PlantfoodUI::SetForceShowPlus(PlantfoodUI *this,bool param_1)

{
  this[0x16d] = (PlantfoodUI)param_1;
  return;
}


/* PlantfoodUI::AddPlantFood(int) */

void __thiscall PlantfoodUI::AddPlantFood(PlantfoodUI *this,int param_1)

{
  if (0 < param_1) {
    *(int *)(this + 0x1a8) = param_1;
    *(undefined4 *)(this + 0x1ac) = 0x3f000000;
  }
  return;
}


/* PlantfoodUI::SetBuyTutorialArrow(Effect_BouncingArrow*) */

void __thiscall PlantfoodUI::SetBuyTutorialArrow(PlantfoodUI *this,Effect_BouncingArrow *param_1)

{
  undefined8 *puVar1;
  
  *(Effect_BouncingArrow **)(this + 0x188) = param_1;
  if (param_1 != (Effect_BouncingArrow *)0x0) {
    puVar1 = (undefined8 *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)param_1);
    *(undefined8 *)(this + 400) = *puVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::SetBuyTutorialArrowOffsetY(int) */

void __thiscall PlantfoodUI::SetBuyTutorialArrowOffsetY(PlantfoodUI *this,int param_1)

{
  undefined4 local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(StandaloneEffect **)(this + 0x188) != (StandaloneEffect *)0x0) {
    fStack_c = (float)((ulong)*(undefined8 *)(this + 400) >> 0x20);
    _local_10 = CONCAT44(fStack_c + (float)param_1,(int)*(undefined8 *)(this + 400));
    StandaloneEffect::SetScreenSpaceOrigin
              (*(StandaloneEffect **)(this + 0x188),(SexyVector2 *)&local_10,1000000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodUI::SetTouchDelegate(Sexy::Delegate0wRet<bool>) */

void __thiscall PlantfoodUI::SetTouchDelegate(PlantfoodUI *this,Delegate1wRet *param_2)

{
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator=
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x1b8),param_2);
  return;
}


/* PlantfoodUI::GetBuyCount() */

undefined4 __thiscall PlantfoodUI::GetBuyCount(PlantfoodUI *this)

{
  return *(undefined4 *)(this + 0x1a4);
}


/* PlantfoodUI::onGameplayEnded() */

void __thiscall PlantfoodUI::onGameplayEnded(PlantfoodUI *this)

{
  UIWidget::SetClickable((UIWidget *)this,false);
  this[0x16c] = (PlantfoodUI)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::~PlantfoodUI() */

void __thiscall PlantfoodUI::~PlantfoodUI(PlantfoodUI *this)

{
  RtMixedPtrBase *this_00;
  LawnApp *this_01;
  char cVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__PlantfoodUI_067a2a10;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_067a2850;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_01 = gLawnApp;
  if (this[0x1e8] != (PlantfoodUI)0x0) {
    std::string::string(asStack_10,"Effects_SoccerWarning");
    LawnApp::DeleteGroup(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  this_00 = (RtMixedPtrBase *)(this + 0x1f0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  UIWidget::~UIWidget((UIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantfoodUI::~PlantfoodUI() */

void __thiscall PlantfoodUI::~PlantfoodUI(PlantfoodUI *this)

{
  ~PlantfoodUI(this + -0x10);
  return;
}


/* PlantfoodUI::~PlantfoodUI() */

void __thiscall PlantfoodUI::~PlantfoodUI(PlantfoodUI *this)

{
  ~PlantfoodUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantfoodUI::~PlantfoodUI() */

void __thiscall PlantfoodUI::~PlantfoodUI(PlantfoodUI *this)

{
  ~PlantfoodUI(this + -0x10);
  return;
}


/* PlantfoodUI::onCursorDestroyed(BaseCursor*) */

void __thiscall PlantfoodUI::onCursorDestroyed(PlantfoodUI *this,BaseCursor *param_1)

{
  bool bVar1;
  
  if ((param_1 != (BaseCursor *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<PlantfoodCursor>((RtObject *)param_1), bVar1)) {
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
  return;
}


/* PlantfoodUI::onCollectableCollectionFinished(Collectable*) */

void __thiscall PlantfoodUI::onCollectableCollectionFinished(PlantfoodUI *this,Collectable *param_1)

{
  bool bVar1;
  
  if ((param_1 != (Collectable *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<CollectablePlantfood>((RtObject *)param_1), bVar1)) {
    *(int *)(this + 0x170) = *(int *)(this + 0x170) + -1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::GetPrice() */

void __thiscall PlantfoodUI::GetPrice(PlantfoodUI *this)

{
  char cVar1;
  ActivityConfig *this_00;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  DangerRoomManager *this_01;
  MagentoProductProps *this_02;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    iVar5 = *(int *)(this + 0x1a0);
    this_02 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    fVar7 = (float)MagentoProductProps::GetPriceInUSD(this_02,true);
    iVar5 = (int)(fVar7 * (float)iVar5);
  }
  else {
    this_00 = (ActivityConfig *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    iVar5 = 0;
    puVar2 = (undefined8 *)ActivityConfig::GetChristmasProtectData(this_00);
    uVar6 = *puVar2;
    local_10[1] = 0;
    uVar3 = FUN_03f7a234(uVar6,puVar2[1]);
    local_10[0] = (int)uVar3 + -1;
    piVar4 = eastl::min_alt<int>(local_10,(int *)(this + 0x1a4));
    piVar4 = eastl::max_alt<int>(local_10 + 1,piVar4);
    if ((ulong)(long)*piVar4 < uVar3) {
      piVar4 = (int *)FUN_03f7a240(uVar6);
      iVar5 = *piVar4;
    }
    this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    cVar1 = DangerRoomManager::IsTrainingMode(this_01);
    if (cVar1 != '\0') {
      iVar5 = 0;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5);
  }
  return;
}


/* PlantfoodUI::onPlantFoodGrabbed(Collectable*) */

void __thiscall PlantfoodUI::onPlantFoodGrabbed(PlantfoodUI *this,Collectable *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  if ((param_1 != (Collectable *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<CollectablePlantfood>((RtObject *)param_1), bVar1)) {
    *(int *)(this + 0x170) = *(int *)(this + 0x170) + 1;
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x174) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::PlantfoodUI() */

void __thiscall PlantfoodUI::PlantfoodUI(PlantfoodUI *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  LawnApp *this_01;
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  StandaloneEffect *this_02;
  undefined8 uVar6;
  RiftShopMgr *this_03;
  char *__s;
  string *in_x4;
  Effect_PopAnim *pEVar7;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f0);
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_067a2850;
  *(undefined ***)(this + 0x10) = &PTR__PlantfoodUI_067a2a10;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 400));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  *(undefined4 *)(this + 0x1a4) = 0;
  Sexy::Delegate0wRet<bool>::Delegate0wRet((DummyInit *)(this + 0x1b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  *(undefined4 *)(this + 0x168) = 0;
  this[0x16d] = (PlantfoodUI)0x0;
  *(undefined4 *)(this + 0x164) = 0xffffffff;
  this[0x179] = (PlantfoodUI)0x0;
  this[0x178] = (PlantfoodUI)0x0;
  this[0x17a] = (PlantfoodUI)0x0;
  *(undefined8 *)(this + 0x180) = 0;
  this[0x16c] = (PlantfoodUI)0x0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  pEVar7._0_4_ = (Effect_PopAnim *)PVZ_EOT();
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0x174) = pEVar7._0_4_;
  cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 == '\0') {
    __s = "PlantFood";
  }
  else {
    __s = "DangerRoomPlantFood";
  }
  std::string::string(asStack_30,__s);
  nop();
  std::string::string(asStack_20,"iOS PvZ2 PlantFood Store");
  std::string::string(asStack_18,"plantfood");
  std::string::string(asStack_10,"plantfood");
  Magento::FindStoreProduct((Magento *)asStack_20,asStack_30,asStack_18,asStack_10,in_x4);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),(RtWeakPtr *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  *(undefined4 *)(this + 0x1a8) = 0;
  this[0x1b0] = (PlantfoodUI)0x0;
  *(undefined4 *)(this + 0x1a0) = 1;
  *(undefined4 *)(this + 0x1ac) = 0xbf800000;
  cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0));
  uVar2 = 0;
  if (cVar1 != '\0') {
    this_03 = (RiftShopMgr *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    uVar2 = RiftShopMgr::getRefreshShopTimes(this_03);
  }
  *(undefined4 *)(this + 0x1a4) = uVar2;
  this[0x1e8] = (PlantfoodUI)0x0;
  this[0x1e9] = (PlantfoodUI)0x0;
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if ((cVar1 != '\0') || (cVar1 = PlantWarsUtils::IsPlayingPlantWarsLevel(), cVar1 != '\0')) {
    this[0x1e9] = (PlantfoodUI)0x1;
  }
  if ((*(long *)(gLawnApp + 0x9f0) == 0) ||
     (lVar3 = FUN_03f7ac64(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8)), lVar3 == 0)) {
    if (this[0x1e8] == (PlantfoodUI)0x0) goto LAB_03f7afd4;
  }
  else {
    this[0x1e8] = (PlantfoodUI)0x1;
  }
  this_01 = gLawnApp;
  std::string::string(asStack_10,"Effects_SoccerWarning");
  LawnApp::LoadGroup(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  StandaloneEffect::CreateEffect<Effect_PopAnim>();
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_10,"POPANIM_EFFECTS_POWER_UP_SOCCER_FIRE");
  GetPAMByName(asStack_10);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_10);
  nop();
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::SetCentered(pEVar4,true);
  this_02 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(this_02,true);
  uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_10,"CUKE_FIRE");
  Effect_PopAnim::PlayLoopingAnimation(pEVar7._0_4_,uVar6,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
LAB_03f7afd4:
  std::string::~string(asStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantfoodUI::StaticNew() */

PlantfoodUI * PlantfoodUI::StaticNew(void)

{
  PlantfoodUI *this;
  
  this = ::operator_new(0x1f8);
  PlantfoodUI(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::registerForEvents() */

void __thiscall PlantfoodUI::registerForEvents(PlantfoodUI *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_100 [8];
  CBMemberTranslatorX aCStack_f8 [24];
  CBMemberTranslatorX aCStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x190);
  local_120 = local_c8;
  uStack_118 = uStack_c0;
  local_110 = local_b8;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantfoodUI,void(PlantfoodUI::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x198);
  local_140 = local_b0;
  uStack_138 = uStack_a8;
  local_130 = local_a0;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<PlantfoodUI,void(PlantfoodUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::PlantfoodCountChanged,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<PlantfoodUI,void(PlantfoodUI::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1a0);
  local_150 = local_88;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<PlantfoodUI,void(PlantfoodUI::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableCollectionFinished,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1a8);
  local_160 = local_80;
  uStack_158 = uStack_78;
  local_150 = local_70;
  MessageRouter::
  Subscribe<CollectablePlantfood*,Sexy::CBMemberTranslatorX<PlantfoodUI,void(PlantfoodUI::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::PlantfoodGrabbed,&local_160);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PlantfoodUI,bool(PlantfoodUI::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_f8);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_100);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<PlantfoodUI,void(PlantfoodUI::*)()>(aDStack_38,aCStack_e0);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,9,a_Stack_100,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_100);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::CalcPlusButtonRect() */

void __thiscall PlantfoodUI::CalcPlusButtonRect(PlantfoodUI *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *this_00;
  Insets *in_x8;
  int local_18;
  int local_14;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetDrawRect();
  Sexy::Insets::Insets(in_x8);
  iVar2 = LawnApp::GetMaxPlantfoodCount(gLawnApp);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5878);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5690);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  iVar3 = iVar3 + iVar4;
  if (2 < iVar2) {
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5728);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    iVar3 = iVar3 + iVar4;
    if (iVar2 != 3) {
      pLVar6 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae57f0);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      iVar3 = iVar3 + iVar4;
      if (iVar2 != 4) {
        pLVar6 = (LotteryResultProgressBar *)
                 CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5828);
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
        iVar3 = iVar3 + iVar2;
      }
    }
  }
  iVar2 = FUN_03f7a530(0xfffffff4);
  *(int *)in_x8 = iVar3 + local_18 + iVar2;
  iVar3 = FUN_03f7a530(0xb);
  *(int *)(in_x8 + 4) = local_14 + iVar3;
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae55d8);
  uVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  *(undefined4 *)(in_x8 + 8) = uVar5;
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae55d8);
  uVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  *(undefined4 *)(in_x8 + 0xc) = uVar5;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::OnTouch(Sexy::Touch const&) */

void __thiscall PlantfoodUI::OnTouch(PlantfoodUI *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  NewPVPMgr *this_00;
  BaseCursor *pBVar4;
  Board *this_01;
  int local_58;
  int local_54;
  TRect<int> aTStack_50 [16];
  Touch aTStack_40 [16];
  Point aPStack_30 [8];
  Point aPStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = '\0';
  Sexy::Point::Point((Point *)&local_58,(TPoint *)(param_1 + 0x10));
  local_58 = local_58 + *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
  local_54 = local_54 + *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  if (*(int *)(param_1 + 0x30) == 0) {
    CalcPlusButtonRect(this);
    cVar1 = Sexy::TRect<int>::Contains(aTStack_50,(TPoint *)&local_58);
    if ((cVar1 == '\0') &&
       ((iVar3 = FUN_03f7a19c(*(undefined8 *)(this + 0x1c0),*(undefined8 *)(this + 0x1d0)),
        iVar3 == 0 ||
        (cVar1 = Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn
                           ((RtInvokeVariant *)(this + 0x1b8)), cVar2 = '\0', cVar1 != '\0')))) {
      cVar2 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x971);
      if (cVar2 == '\0') {
        Sexy::Touch::Touch(aTStack_40,param_1);
        Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_30);
        Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_28);
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        pBVar4 = (BaseCursor *)NewPVPMgr::TryAddPlantfoodCursor(this_00,aTStack_40);
        cVar2 = Board::TryToAddCursor(this_01,pBVar4,true);
        if (cVar2 == '\0') {
          cVar2 = '\x01';
        }
        else {
          cVar2 = '\x01';
          (**(code **)(*(long *)this + 0xe8))(this,4);
        }
      }
      else {
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::CalcConfirmationRect() */

void PlantfoodUI::CalcConfirmationRect(void)

{
  long lVar1;
  PlantfoodUI *in_x0;
  long lVar2;
  long lVar3;
  Insets *in_x8;
  int local_18;
  int local_14;
  int local_10;
  
  lVar1 = ___stack_chk_guard;
  CalcPlusButtonRect(in_x0);
  Sexy::Insets::Insets(in_x8);
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
  *(int *)in_x8 = local_18 + (local_10 - *(int *)(lVar2 + 0x38)) / 2;
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
  *(undefined4 *)(in_x8 + 8) = *(undefined4 *)(lVar2 + 0x38);
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
  *(int *)(in_x8 + 4) = local_14 - *(int *)(lVar2 + 0x3c);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(in_x8 + 0xc) = *(undefined4 *)(lVar3 + 0x3c);
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::AddPlantFood_impl() */

void PlantfoodUI::AddPlantFood_impl(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  Collectable *this;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  Vec3 aVStack_28 [20];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CalcConfirmationRect();
  Sexy::TRect<int>::GetCenter();
  Sexy::Point::Point((Point *)&local_40,(TPoint *)aVStack_28);
  lVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
  local_3c = (int)((float)local_14 + (float)*(int *)(lVar3 + 0x3c) * 0.36);
  Board::GetBoardBaseOffset();
  iVar1 = FUN_03f7a51c(local_40 - local_38);
  iVar2 = local_3c;
  Board::GetBoardBaseOffset();
  iVar2 = FUN_03f7a51c(iVar2 - local_2c);
  EATextSquish::Vec3::Vec3(aVStack_28,(float)iVar1,(float)iVar2,0.0);
  this = (Collectable *)
         Board::AddPlantfood(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)aVStack_28,0);
  Collectable::SetNeverExpire(this,true);
  Collectable::TryToCollect(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodUI::onUpdate() */

void __thiscall PlantfoodUI::onUpdate(PlantfoodUI *this)

{
  int iVar1;
  char cVar2;
  StandaloneEffect *this_00;
  float fVar3;
  float fVar4;
  
  if ((this[0x17a] != (PlantfoodUI)0x0) &&
     (cVar2 = LawnApp::IsCoinStoreShowing(gLawnApp), cVar2 == '\0')) {
    this[0x17a] = (PlantfoodUI)0x0;
  }
  if (0.0 < *(float *)(this + 0x1ac)) {
    fVar3 = (float)PVZ_Dt();
    fVar4 = *(float *)(this + 0x1ac);
    *(float *)(this + 0x1ac) = fVar4 - fVar3;
    if ((fVar4 - fVar3 <= 0.0) && (0 < *(int *)(this + 0x1a8))) {
      AddPlantFood_impl();
      iVar1 = *(int *)(this + 0x1a8);
      *(int *)(this + 0x1a8) = iVar1 + -1;
      if (0 < iVar1 + -1) {
        *(undefined4 *)(this + 0x1ac) = 0x3f000000;
      }
    }
  }
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1f0));
  if (cVar2 == '\0') {
    return;
  }
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  StandaloneEffect::Update(this_00);
  return;
}


/* PlantfoodUI::onExitState_Loading(WidgetState) */

void PlantfoodUI::onExitState_Loading(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *pLVar7;
  
  uVar1 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,8);
  *(undefined1 *)(param_1 + 0x16d) = uVar1;
  cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if ((((cVar2 != '\0') || (cVar2 = CustomLevelUtils::IsCustomLevel(), cVar2 != '\0')) ||
      (cVar2 = RiftUtils::IsRiftTimedLevel(), cVar2 != '\0')) ||
     (cVar2 = PlantWarsUtils::IsPlayingPlantWarsLevel(), cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x16d) = 0;
  }
  iVar3 = LawnApp::GetMaxPlantfoodCount(gLawnApp);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5878);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5690);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  if (3 < iVar3) {
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae57f0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    if (iVar3 != 4) {
      pLVar7 = (LotteryResultProgressBar *)
               CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5828);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
      FUN_03f7a1b8(param_1 + 0x38,iVar4 + iVar5 + iVar6 + iVar3);
      return;
    }
  }
  FUN_03f7a1b8(param_1 + 0x38);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::DoPurchasePlantFood(int) */

void __thiscall PlantfoodUI::DoPurchasePlantFood(PlantfoodUI *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined *puVar1;
  int iVar2;
  TGALogMgr *this_01;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198);
  *(int *)(this + 0x1a4) = *(int *)(this + 0x1a4) + 1;
  local_8 = ___stack_chk_guard;
  AddPlantFood_impl();
  iVar2 = GetPrice(this);
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  TGALogMgr::UseLevelItem(this_01,(string *)(lVar3 + 0x80),0,iVar2);
  puVar1 = gMessageRouter;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_05475d88(asStack_10,lVar3 + 0x80);
  MessageRouter::Post<std::string_const&,int,int,std::string,int,int>
            ((MessageRouter *)puVar1,Message::PlantfoodPurchased,asStack_10,iVar2,param_1);
  std::string::~string(asStack_10);
  puVar1 = gMessageRouter;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)this_00);
  MessageRouter::
  Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
            ((MessageRouter *)puVar1,Message::ItemPurchaseInfo2,asStack_10,"Store|PvE_store",0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (0 < *(int *)(this + 0x164)) {
    iVar2 = *(int *)(this + 0x164) + -1;
    *(int *)(this + 0x164) = iVar2;
    if (iVar2 == 0) {
      this[0x16d] = (PlantfoodUI)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::doPlantfoodPurchase() */

void __thiscall PlantfoodUI::doPlantfoodPurchase(PlantfoodUI *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  MagentoProductProps *this_03;
  long lVar4;
  NetworkMgr *this_04;
  INetworkMsgProcess *this_05;
  ICloudRequestSTDCallbackFunction *this_06;
  PlantfoodUI *pPVar5;
  PlantfoodUI *local_60;
  DRefPtr<DTouchLayer> aDStack_58 [8];
  code *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  function afStack_28 [32];
  long local_8;
  
  iVar3 = *(int *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  iVar2 = LawnApp::GetMaxPlantfoodCount(gLawnApp);
  if (iVar3 < iVar2) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198);
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    iVar3 = GetPrice(this);
    this_03 = (MagentoProductProps *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar2 = MagentoProductProps::GetPurchaseType(this_03);
    if (iVar2 == 0) {
      iVar2 = PlayerInfo::GetNumGems(this_02,true);
      if (this[0x178] == (PlantfoodUI)0x0) {
        if (iVar2 < iVar3) {
          LawnApp::ShowGemStoreConfirm(gLawnApp,2,1);
          this[0x17a] = (PlantfoodUI)0x1;
        }
        else if ((*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0) ||
                (cVar1 = Board::IsDangerRoom(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          iVar3 = *(int *)(lVar4 + 0x18);
          pPVar5 = ::operator_new(0x28);
          ICloudRequestCallbackFunction<PlantfoodUI,bool>::ICloudRequestCallbackFunction
                    (pPVar5,(_func_void_bool_ptr *)this);
          PlayerInfo::SubtractGems
                    (this_02,1,iVar3,(ICloudRequestCallbackFunctionBase *)pPVar5,1,false);
        }
        else {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          iVar3 = *(int *)(lVar4 + 0x18);
          this_04 = (NetworkMgr *)NetworkMgr::Instance();
          this_05 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_04);
          iVar2 = GetPrice(this);
          local_48 = 0;
          local_50 = OnServerGemCallBack;
          local_60 = this;
          std::
          bind<void(DTouchDelegate::*)(Sexy::Touch_const&),DTouchDelegate*,std::_Placeholder<1>const&>
                    ((_func_void_Touch_ptr *)&local_50,(DTouchDelegate **)&local_60,
                     (_Placeholder *)&DAT_0576d300);
          std::function<void(bool)>::
          function<std::_Bind<std::_Mem_fn<void(PlantfoodUI::*)(bool_const&)>(PlantfoodUI*,std::_Placeholder<1>)>,void>
                    ((function<void(bool)> *)afStack_28,auStack_40);
          this_06 = ::operator_new(0x30);
          ICloudRequestSTDCallbackFunction::ICloudRequestSTDCallbackFunction(this_06,afStack_28);
          DRefPtr<DTouchLayer>::DRefPtr(aDStack_58,(DTouchLayer *)this_06);
          INetworkMsgProcess::ICloudRequestUseGem(this_05,iVar3,iVar2,(DRefPtr *)aDStack_58,1,false)
          ;
          DRefPtr<UIAccumulatedLoginButton>::~DRefPtr
                    ((DRefPtr<UIAccumulatedLoginButton> *)aDStack_58);
          std::function<bool(Sexy::Touch_const&)>::~function
                    ((function<bool(Sexy::Touch_const&)> *)afStack_28);
        }
        goto LAB_03f7c834;
      }
    }
    else if (iVar2 == 2) {
      iVar2 = PlayerInfo::GetNumCoins(this_02,true);
      if (this[0x178] == (PlantfoodUI)0x0) {
        if (iVar2 < iVar3) {
          LawnApp::ShowGemStoreConfirm(gLawnApp,0,1);
          this[0x17a] = (PlantfoodUI)0x1;
          goto LAB_03f7c834;
        }
        PlayerInfo::SubtractCoins(this_02,iVar3);
      }
    }
    DoPurchasePlantFood(this,0);
  }
LAB_03f7c834:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodUI::OnServerGemCallBack(bool const&) */

void __thiscall PlantfoodUI::OnServerGemCallBack(PlantfoodUI *this,bool *param_1)

{
  if (*param_1 == false) {
    return;
  }
  DoPurchasePlantFood(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::OnServerGemCallBack_Android_Convert_Ios(bool const&) */

void __thiscall
PlantfoodUI::OnServerGemCallBack_Android_Convert_Ios(PlantfoodUI *this,bool *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ProfileMgr *this_00;
  NewPVPMgr *this_01;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 != false) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_00);
    local_14 = GetPrice(this);
    local_10[0] = NewPVPMgr::GetSeasonEndTime(this_01);
    piVar4 = eastl::min_alt<int>(&local_14,(int *)local_10);
    iVar1 = *piVar4;
    iVar3 = Board::GetCurrentWave(*(Board **)(gLawnApp + 0x9f0));
    if (-1 < iVar3) {
      uVar7 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xd08);
      uVar5 = FUN_03f7a254(uVar7,*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xd10));
      if ((ulong)(long)iVar3 < uVar5) {
        lVar6 = FUN_03f7a260(uVar7,(long)iVar3);
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      }
    }
    puVar2 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)(this + 0x198));
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,std::string_const&,int,Sexy::RtWeakPtr<MagentoProductProps>,char_const*,int>
              ((MessageRouter *)puVar2,Message::ItemPurchaseInfo2,
               (RtWeakPtr<Sexy::SoundResource> *)local_10,"Store|PvE_store",0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    DoPurchasePlantFood(this,iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::handleTouch(Sexy::Touch const&) */

void __thiscall PlantfoodUI::handleTouch(PlantfoodUI *this,Touch *param_1)

{
  int iVar1;
  PlantfoodUI PVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  TRect<int> aTStack_60 [16];
  TRect<int> aTStack_50 [16];
  Touch aTStack_40 [16];
  int local_30;
  int local_2c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x16d] != (PlantfoodUI)0x0) &&
      (cVar4 = FUN_03f7a7d4(*(undefined4 *)(this + 0x68)), cVar4 != '\0')) &&
     (bVar5 = UIWidget::IsVisible((UIWidget *)this), bVar5 != 0)) {
    Sexy::Touch::Touch(aTStack_40,param_1);
    Board::TranslateBoardPositionToScreenPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_30);
    iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c) + local_2c;
    iVar7 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48) + local_30;
    CalcPlusButtonRect(this);
    bVar6 = Sexy::TRect<int>::Contains(aTStack_60,iVar7,iVar1);
    CalcConfirmationRect();
    PVar2 = this[0x179];
    if ((PVar2 == (PlantfoodUI)0x0) ||
       (cVar4 = Sexy::TRect<int>::Contains(aTStack_50,iVar7,iVar1), cVar4 == '\0')) {
      switch(*(undefined4 *)(param_1 + 0x30)) {
      case 0:
        bVar5 = 0;
        if (bVar6 == 0) {
          this[0x179] = (PlantfoodUI)0x0;
        }
        goto LAB_03f7cd70;
      case 1:
        goto switchD_03f7cce8_caseD_1;
      case 3:
        bVar3 = false;
        goto LAB_03f7cd14;
      case 4:
        goto switchD_03f7cce8_caseD_4;
      }
    }
    else {
      switch(*(undefined4 *)(param_1 + 0x30)) {
      case 0:
        bVar5 = 1;
LAB_03f7cd70:
        if (((*(long *)(this + 0x180) == 0) &&
            (iVar1 = *(int *)(this + 0x168), iVar7 = LawnApp::GetMaxPlantfoodCount(gLawnApp),
            iVar1 < iVar7)) && (bVar5 = bVar5 | bVar6, bVar5 != 0)) {
          *(undefined8 *)(this + 0x180) = *(undefined8 *)param_1;
          goto LAB_03f7cbdc;
        }
        break;
      case 1:
switchD_03f7cce8_caseD_1:
        if ((*(long *)param_1 != *(long *)(this + 0x180)) && (this[0x17a] == (PlantfoodUI)0x0)) {
          this[0x179] = (PlantfoodUI)0x0;
          bVar5 = 0;
          goto LAB_03f7cbdc;
        }
        break;
      case 3:
        bVar3 = true;
LAB_03f7cd14:
        if (*(long *)param_1 == *(long *)(this + 0x180)) {
          if (bVar6 == 0) {
            if (bVar3) {
              this[0x179] = (PlantfoodUI)0x0;
              doPlantfoodPurchase(this);
              if (this[0x17a] != (PlantfoodUI)0x0) {
                *(undefined8 *)(this + 0x180) = 0;
                this[0x179] = (PlantfoodUI)0x1;
                goto LAB_03f7cbdc;
              }
            }
            else if (PVar2 != (PlantfoodUI)0x0) {
              this[0x179] = (PlantfoodUI)0x0;
            }
          }
          else {
            this[0x179] = (PlantfoodUI)((byte)PVar2 ^ 1);
            Board::ClearCachedCursor(*(Board **)(gLawnApp + 0x9f0));
            if (this[0x179] != (PlantfoodUI)0x0) {
              pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
              AudioMgr::SendEvent(pcVar8,"Play_UI_Game_Plant_Food_Buy");
              MessageRouter::Post((_func_void *)gMessageRouter);
              *(undefined8 *)(this + 0x180) = 0;
              goto LAB_03f7cbdc;
            }
          }
          *(undefined8 *)(this + 0x180) = 0;
          goto LAB_03f7cbdc;
        }
        break;
      case 4:
switchD_03f7cce8_caseD_4:
        if (*(long *)param_1 == *(long *)(this + 0x180)) {
          bVar5 = 0;
          cancelTouch(this);
          goto LAB_03f7cbdc;
        }
      }
    }
  }
  bVar5 = 0;
LAB_03f7cbdc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::Draw(Sexy::Graphics*) */

void PlantfoodUI::Draw(Graphics *param_1)

{
  char cVar1;
  Graphics GVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Image *pIVar10;
  LotteryResultProgressBar *pLVar11;
  wchar16 *pwVar12;
  long lVar13;
  ulong uVar14;
  StandaloneEffect *pSVar15;
  CachedUIResourcePtr<Sexy::Image> *pCVar16;
  Graphics *in_x1;
  Insets *pIVar17;
  Board *this;
  LineBreakCategory *pLVar18;
  LineBreakCategory *in_x4;
  float fVar19;
  float fVar20;
  RtMixedPtrBase *this_00;
  Image *local_78;
  GraphicsAutoState aGStack_58 [8];
  undefined1 auStack_50 [8];
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  undefined4 local_28 [4];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw(param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_58,in_x1);
  UIWidget::translateToWidgetPosition((UIWidget *)param_1,in_x1);
  cVar1 = FUN_03f7a7d4(*(undefined4 *)(param_1 + 0x68));
  if ((cVar1 == '\0') && (param_1[0x16c] == (Graphics)0x0)) {
    Sexy::Color::Color((Color *)&local_18,0x80,0x80,0x80);
    Sexy::Graphics::SetColor(in_x1,(Color *)&local_18);
    Sexy::Graphics::SetColorizeImages(in_x1,true);
  }
  iVar3 = LawnApp::GetMaxPlantfoodCount(gLawnApp);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5878);
  Sexy::Graphics::DrawImage(in_x1,pIVar10,0,0);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5878);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  if (2 < iVar3) {
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5728);
    Sexy::Graphics::DrawImage(in_x1,pIVar10,iVar4,0);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5728);
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar4 = iVar4 + iVar9;
    if (iVar3 != 3) {
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae57f0);
      Sexy::Graphics::DrawImage(in_x1,pIVar10,iVar4,0);
      pLVar11 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae57f0);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      iVar4 = iVar4 + iVar9;
      if (iVar3 != 4) {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5828);
        Sexy::Graphics::DrawImage(in_x1,pIVar10,iVar4,0);
        pLVar11 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5828);
        iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        iVar4 = iVar4 + iVar9;
      }
    }
  }
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5690);
  pLVar18 = (LineBreakCategory *)0x0;
  Sexy::Graphics::DrawImage(in_x1,pIVar10,iVar4,0);
  if (param_1[0x1e8] != (Graphics)0x0) {
    cVar1 = Board::GetPlantfoodCount(*(Board **)(gLawnApp + 0x9f0));
    if (cVar1 == '\0') {
      pSVar15 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1f0));
      StandaloneEffect::SetVisibility(pSVar15,false);
    }
    else {
      UIWidget::GetDrawRect();
      Sexy::Point::Point((Point *)&local_38,local_18,local_14);
      this = *(Board **)(gLawnApp + 0x9f0);
      in_x4 = (LineBreakCategory *)(ulong)*(uint *)(this + 0x48);
      local_38 = local_38 - *(uint *)(this + 0x48);
      pLVar18 = (LineBreakCategory *)(ulong)*(uint *)(this + 0x4c);
      local_34 = local_34 - *(uint *)(this + 0x4c);
      Board::TranslateScreenPositionToBoardPosition(this,(Point *)&local_38);
      pSVar15 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1f0));
      iVar4 = local_38 + local_10 / 2;
      iVar5 = FUN_03f7a530(8);
      iVar9 = local_34;
      iVar6 = FUN_03f7a530(1);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)local_28,(float)(iVar4 - iVar5),(float)(iVar9 - iVar6));
      StandaloneEffect::SetScreenSpaceOrigin(pSVar15,(SexyVector2 *)local_28,0x9eb11);
      pSVar15 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x1f0));
      StandaloneEffect::SetVisibility(pSVar15,true);
    }
  }
  this_00 = (RtMixedPtrBase *)(param_1 + 0x1f0);
  pwVar12 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  iVar4 = 0;
  pIVar17 = (Insets *)local_28;
  std::string::string((string *)&local_18,"FreePlanting");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar12,(wchar16 *)&local_18,(LineBreakCategory *)pIVar17,pLVar18,in_x4);
  std::string::~string((string *)&local_18);
  nop();
  iVar9 = *(int *)(param_1 + 0x170);
  if (0 < iVar3) {
    do {
      while ((iVar4 < (int)(*(int *)(param_1 + 0x168) - (uint)(0 < iVar9)) || (cVar1 != '\0'))) {
        pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53e0);
        if (param_1[0x1e8] == (Graphics)0x0) {
          if (param_1[0x1e9] != (Graphics)0x0) {
            pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5458);
          }
        }
        else {
          pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae55b0);
        }
        fVar19 = (float)FUN_03f7a544();
        iVar5 = FUN_03f7a530(0x3b);
        iVar6 = FUN_03f7a530(0);
        iVar7 = FUN_03f7a530(0x19);
        Sexy::Graphics::DrawImage
                  (in_x1,pIVar10,(int)(fVar19 * (float)iVar4) + iVar5 + iVar6,iVar6 + iVar7);
LAB_03f7d0ec:
        iVar4 = iVar4 + 1;
        if (iVar4 == iVar3) goto LAB_03f7d18c;
      }
      if ((*(int *)(param_1 + 0x168) <= iVar4) || (*(int *)(param_1 + 0x170) == 0))
      goto LAB_03f7d0ec;
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5750);
      fVar19 = (float)FUN_03f7a544();
      iVar5 = FUN_03f7a530(0x3b);
      fVar20 = (float)iVar4;
      iVar4 = iVar4 + 1;
      iVar6 = FUN_03f7a530(0xfffffffd);
      iVar7 = FUN_03f7a530(0x19);
      iVar8 = FUN_03f7a530(0xfffffffe);
      Sexy::Graphics::DrawImage(in_x1,pIVar10,(int)(fVar19 * fVar20) + iVar5 + iVar6,iVar7 + iVar8);
    } while (iVar4 != iVar3);
  }
LAB_03f7d18c:
  fVar19 = (float)PVZ_EOT();
  if (*(float *)(param_1 + 0x174) < fVar19) {
    fVar20 = (float)PVZ_T();
    if (fVar20 - *(float *)(param_1 + 0x174) <= 1.0) {
      local_28[0] = 0;
      local_18 = 0x437f0000;
      fVar19 = CurveEvaluate<float>((Insets *)local_28,(string *)&local_18,10);
      Sexy::Graphics::PushState(in_x1);
      Sexy::Insets::Insets((Insets *)&local_18,0xff,0xff,0xff,(int)fVar19);
      Sexy::Graphics::SetColor(in_x1,(Color *)&local_18);
      Sexy::Graphics::SetColorizeImages(in_x1,true);
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae58a0);
      iVar4 = FUN_03f7a530(1);
      Sexy::Graphics::DrawImage(in_x1,pIVar10,iVar4,iVar4);
      Sexy::Graphics::PopState(in_x1);
      goto LAB_03f7d1a0;
    }
    *(float *)(param_1 + 0x174) = fVar19;
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 == '\0') goto LAB_03f7d1b0;
LAB_03f7d6d0:
    pSVar15 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::Draw(pSVar15,in_x1);
    iVar4 = UIWidget::getWidgetStateSerialization((UIWidget *)param_1);
    GVar2 = param_1[0x1e8];
    if (iVar4 != 4) goto LAB_03f7d1c4;
LAB_03f7d6f4:
    if (GVar2 == (Graphics)0x0) {
      if (param_1[0x1e9] == (Graphics)0x0) {
        pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5618;
      }
      else {
        pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5430;
      }
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
      iVar4 = FUN_03f7a530(0xb);
      Sexy::Graphics::DrawImage(in_x1,pIVar10,iVar4,iVar4);
      GVar2 = param_1[0x1b0];
      goto joined_r0x03f7d730;
    }
    local_78 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae56b8);
    iVar3 = FUN_03f7a530(0xb);
    iVar4 = FUN_03f7a530(2);
    iVar4 = iVar3 + iVar4;
LAB_03f7d85c:
    iVar9 = FUN_03f7a530(1);
    Sexy::Graphics::DrawImage(in_x1,local_78,iVar4,iVar3 + iVar9);
  }
  else {
LAB_03f7d1a0:
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') goto LAB_03f7d6d0;
LAB_03f7d1b0:
    iVar4 = UIWidget::getWidgetStateSerialization((UIWidget *)param_1);
    GVar2 = param_1[0x1e8];
    if (iVar4 == 4) goto LAB_03f7d6f4;
LAB_03f7d1c4:
    if (GVar2 != (Graphics)0x0) {
      local_78 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5778);
      iVar4 = FUN_03f7a530(0xb);
      iVar3 = FUN_03f7a530(2);
      iVar4 = iVar4 + iVar3;
      iVar3 = FUN_03f7a530(10);
      goto LAB_03f7d85c;
    }
    if (param_1[0x1e9] == (Graphics)0x0) {
      pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5480;
    }
    else {
      pCVar16 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae57a0;
    }
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar16);
    iVar4 = FUN_03f7a530(0xb);
    iVar3 = FUN_03f7a530(10);
    Sexy::Graphics::DrawImage(in_x1,pIVar10,iVar4,iVar3);
  }
  GVar2 = param_1[0x1b0];
joined_r0x03f7d730:
  if (GVar2 != (Graphics)0x0) {
    pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae57c8);
    iVar4 = FUN_03f7a530(0xc);
    iVar3 = FUN_03f7a530(0xd);
    Sexy::Graphics::DrawImage(in_x1,pIVar10,iVar4,iVar3);
  }
  iVar4 = *(int *)(param_1 + 0x168);
  iVar3 = LawnApp::GetMaxPlantfoodCount(gLawnApp);
  if (param_1[0x16d] != (Graphics)0x0) {
    Sexy::Color::Color((Color *)&local_18,0x80,0x80,0x80);
    Sexy::Graphics::SetColor(in_x1,(Color *)&local_18);
    Sexy::Graphics::SetColorizeImages(in_x1,true);
    if (((iVar4 < iVar3) && (cVar1 = FUN_03f7a7d4(*(undefined4 *)(param_1 + 0x68)), cVar1 != '\0'))
       && (param_1[0x16c] == (Graphics)0x0)) {
      Sexy::Graphics::SetColorizeImages(in_x1,false);
    }
    UIWidget::GetDrawRect();
    CalcPlusButtonRect((PlantfoodUI *)param_1);
    local_38 = local_38 - local_48;
    local_34 = local_34 - local_44;
    if ((param_1[0x17a] == (Graphics)0x0) && (param_1[0x179] == (Graphics)0x0)) {
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae55d8);
      Sexy::Graphics::DrawImage(in_x1,pIVar10,local_38,local_34);
    }
    else {
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5408);
      Sexy::Graphics::DrawImage(in_x1,pIVar10,local_38,local_34);
    }
    if (param_1[0x179] == (Graphics)0x0) {
      SetBuyTutorialArrowOffsetY((PlantfoodUI *)param_1,0);
    }
    else {
      fVar19 = (float)local_38;
      fVar20 = (float)local_34;
      lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae5408);
      iVar4 = *(int *)(lVar13 + 0x38);
      lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
      fVar19 = ((float)(iVar4 / 2) + fVar19) - (float)(*(int *)(lVar13 + 0x38) / 2);
      lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
      fVar20 = fVar20 - (float)*(int *)(lVar13 + 0x3c);
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
      Sexy::Graphics::DrawImage(in_x1,pIVar10,(int)fVar19,(int)fVar20);
      lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
      iVar4 = *(int *)(lVar13 + 0x38);
      lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
      iVar3 = *(int *)(lVar13 + 0x3c);
      lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
      Sexy::Insets::Insets
                ((Insets *)local_28,(int)(fVar19 + (float)iVar4 * 0.42),
                 (int)(fVar20 + (float)iVar3 * 0.675),1000,
                 (int)((float)*(int *)(lVar13 + 0x3c) * 0.20499998));
      uVar14 = GetPrice((PlantfoodUI *)param_1);
      Sexy::StrFormat(L"%d",auStack_50,uVar14 & 0xffffffff);
      PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
      Sexy::Color::Color((Color *)&local_18,0);
      WriteWordInRect();
      FUN_05476c50(auStack_50);
      lVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae53b8);
      SetBuyTutorialArrowOffsetY((PlantfoodUI *)param_1,-*(int *)(lVar13 + 0x3c));
    }
  }
  Sexy::Color::Color((Color *)&local_18,1);
  Sexy::Graphics::SetColor(in_x1,(Color *)&local_18);
  Sexy::Graphics::SetColorizeImages(in_x1,false);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_58);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to PlantfoodUI::Draw(Sexy::Graphics*) */

void __thiscall PlantfoodUI::Draw(PlantfoodUI *this,Graphics *param_1)

{
  Draw((Graphics *)(this + -0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::IsMouseOver(int, int) */

void __thiscall PlantfoodUI::IsMouseOver(PlantfoodUI *this,int param_1,int param_2)

{
  byte bVar1;
  PlantfoodUI PVar2;
  char cVar3;
  wchar16 *pwVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *pLVar7;
  LineBreakCategory aLStack_38 [8];
  LineBreakCategory aLStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  TRect<int> aTStack_18 [16];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar6 = ___stack_chk_guard;
  bVar1 = UIWidget::IsMouseOver((UIWidget *)this,param_1,param_2);
  pLVar7 = (LineBreakCategory *)(ulong)bVar1;
  PVar2 = (PlantfoodUI)0x0;
  if (bVar1 != 0) {
    CalcPlusButtonRect(this);
    cVar3 = Sexy::TRect<int>::Contains(aTStack_18,param_1,param_2);
    if (cVar3 == '\0') {
      PVar2 = (PlantfoodUI)0x1;
      if (*(int *)(this + 0x168) == 0) {
        pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pLVar5 = aLStack_38;
        std::string::string(asStack_28,"FreePlanting");
        cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar4,(wchar16 *)asStack_28,pLVar5,pLVar6,pLVar7);
        bVar1 = 0;
        if (cVar3 == '\0') {
          pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          pLVar5 = aLStack_30;
          std::string::string(asStack_20,"UnlimitedPlantfood");
          bVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                            (pwVar4,(wchar16 *)asStack_20,pLVar5,pLVar6,pLVar7);
          bVar1 = bVar1 ^ 1;
          std::string::~string(asStack_20);
          nop();
        }
        std::string::~string(asStack_28);
        nop();
        PVar2 = (PlantfoodUI)(bVar1 ^ 1);
      }
    }
    else {
      PVar2 = this[0x16d];
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodUI::GetCenterPointOnScreen() */

void __thiscall PlantfoodUI::GetCenterPointOnScreen(PlantfoodUI *this)

{
  long lVar1;
  int iVar2;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  UIWidget::GetCenterPointOnScreen();
  iVar2 = FUN_03f7a508(0);
  Sexy::Point::Point(in_x8,local_10 + iVar2,iVar2 + local_c);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


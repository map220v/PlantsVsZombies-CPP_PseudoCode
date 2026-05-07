// Class: UINewPVPTopZombieQueue


/* UINewPVPTopZombieQueue::onNotifyTurnChanged(int) */

void __thiscall
UINewPVPTopZombieQueue::onNotifyTurnChanged(UINewPVPTopZombieQueue *this,int param_1)

{
  *(int *)(this + 0x1a0) = param_1 + 1;
  return;
}


/* UINewPVPTopZombieQueue::onGameplayRealStarted() */

void __thiscall UINewPVPTopZombieQueue::onGameplayRealStarted(UINewPVPTopZombieQueue *this)

{
  UIWidget::SetVisible((UIWidget *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueue::StaticClassInit() */

void UINewPVPTopZombieQueue::StaticClassInit(void)

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
    std::string::string(asStack_10,"UINewPVPTopZombieQueue");
    (*pcVar2)(plVar1,asStack_10,FUN_0352525c,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPTopZombieQueue::StaticGetClass() */

long * UINewPVPTopZombieQueue::StaticGetClass(void)

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
  uVar2 = SlidingWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UINewPVPTopZombieQueue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPTopZombieQueue::GetClass() const */

long * UINewPVPTopZombieQueue::GetClass(void)

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
  uVar2 = SlidingWidget::StaticGetClass();
  (*pcVar3)(plVar1,"UINewPVPTopZombieQueue",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UINewPVPTopZombieQueue::onGameplayStarted() */

void __thiscall UINewPVPTopZombieQueue::onGameplayStarted(UINewPVPTopZombieQueue *this)

{
  undefined4 uVar1;
  
  Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar1 = NewPVPMgr::GetMaxTurn();
  *(undefined4 *)(this + 0x19c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueue::gettItem(int) */

void __thiscall UINewPVPTopZombieQueue::gettItem(UINewPVPTopZombieQueue *this,int param_1)

{
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtId aRStack_20 [8];
  RtId aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::GetChildId((int)this);
  Sexy::RtId::RtId(aRStack_18,aRStack_20);
  UIWidget::GetUIWidgetByRtId(aRStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtId::~RtId(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueue::setItemPositions() */

void __thiscall UINewPVPTopZombieQueue::setItemPositions(UINewPVPTopZombieQueue *this)

{
  int iVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x1a4)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 1;
      gettItem(this,iVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      iVar2 = iVar1;
    } while (iVar1 < *(int *)(this + 0x1a4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueue::setZombieItemNum(int) */

void __thiscall UINewPVPTopZombieQueue::setZombieItemNum(UINewPVPTopZombieQueue *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  UIWidget *this_00;
  float fVar6;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = UIWidget::GetChildCount((UIWidget *)this);
  if (0 < iVar1 - param_1) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      gettItem(this,param_1);
      Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
      UIWidget::RemoveChildWidget((UIWidget *)this);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      (**(code **)(*plVar5 + 0x48))();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    } while (iVar3 != iVar1 - param_1);
  }
  *(int *)(this + 0x1a4) = param_1;
  iVar1 = UIWidget::GetChildCount((UIWidget *)this);
  if (0 < param_1 - iVar1) {
    iVar3 = 200;
    do {
      Sexy::RtName::RtName((RtName *)&local_18,L"UINewPVPTopZombieQueueItem");
      UIWidget::CreateWidget((RtName *)&local_18,1);
      nop();
      Sexy::RtName::~RtName((RtName *)&local_18);
      *(undefined4 *)(this_00 + 0x174) = *(undefined4 *)(this + 0x1c0);
      UIWidget::SetParentWidget(this_00,(UIWidget *)this);
      UIWidget::CompleteLoad(this_00);
      iVar2 = FUN_0351e4e8(0x46);
      FUN_0351d4ac(this_00 + 0x38,(int)((float)iVar2 * *(float *)(this + 0x1c0)));
      iVar2 = FUN_0351e4e8(0x46);
      FUN_0351d4b8(this_00 + 0x3c,(int)((float)iVar2 * *(float *)(this + 0x1c0)));
      UIWidget::SetAnchorType(this_00,1);
      UIWidget::SetParentAnchorType(this_00,1);
      iVar2 = iVar3 + 0x46;
      iVar3 = FUN_0351e4e8(iVar3);
      fVar6 = *(float *)(this + 0x1c0);
      iVar4 = FUN_0351e4e8(10);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_18,(float)iVar3 * fVar6,(float)iVar4 * fVar6)
      ;
      UIWidget::SetPositionOffset(local_18,local_14,this_00);
      UIWidget::SetVisible(this_00,false);
      iVar3 = iVar2;
    } while (iVar2 != (param_1 - iVar1) * 0x46 + 200);
  }
  setItemPositions(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPTopZombieQueue::UINewPVPTopZombieQueue() */

void __thiscall UINewPVPTopZombieQueue::UINewPVPTopZombieQueue(UINewPVPTopZombieQueue *this)

{
  SlidingWidget::SlidingWidget((SlidingWidget *)this);
  *(undefined4 *)(this + 0x19c) = 0x14;
  *(undefined ***)this = &PTR_GetClass_0664e9b0;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPTopZombieQueue_0664eb60;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a0) = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1c0) = 0x3f800000;
  return;
}


/* UINewPVPTopZombieQueue::StaticNew() */

UINewPVPTopZombieQueue * UINewPVPTopZombieQueue::StaticNew(void)

{
  UINewPVPTopZombieQueue *this;
  
  this = ::operator_new(0x1c8);
  UINewPVPTopZombieQueue(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueue::registerForEvents() */

void __thiscall UINewPVPTopZombieQueue::registerForEvents(UINewPVPTopZombieQueue *this)

{
  undefined *puVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyZombieCacheDatasChanged);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>const&,Sexy::CBMemberTranslatorX<UINewPVPTopZombieQueue,void(UINewPVPTopZombieQueue::*)(std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyZombieCacheDatasChanged,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTurnChanged);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UINewPVPTopZombieQueue,void(UINewPVPTopZombieQueue::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTurnChanged,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<UINewPVPTopZombieQueue,void(UINewPVPTopZombieQueue::*)()>
            (aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayRealStarted);
  Sexy::Delegate0::Delegate0<UINewPVPTopZombieQueue,void(UINewPVPTopZombieQueue::*)()>
            (aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyGameplayStarted,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueue::clearZombieQueue() */

void __thiscall UINewPVPTopZombieQueue::clearZombieQueue(UINewPVPTopZombieQueue *this)

{
  bool bVar1;
  UINewPVPTopZombieQueueItem *this_00;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  while( true ) {
    iVar3 = (int)uVar4;
    uVar2 = FUN_0351d5dc(*(undefined8 *)(this + 0x1a8),*(undefined8 *)(this + 0x1b0));
    bVar1 = uVar2 <= uVar4;
    uVar4 = uVar4 + 1;
    if (bVar1) break;
    gettItem(this,iVar3);
    this_00 = (UINewPVPTopZombieQueueItem *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    UINewPVPTopZombieQueueItem::setEmpty(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::clear
            ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)(this + 0x1a8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueue::onLoadComplete() */

void __thiscall UINewPVPTopZombieQueue::onLoadComplete(UINewPVPTopZombieQueue *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  SecretGachaMgr *local_8;
  
  local_8 = ___stack_chk_guard;
  SecretGachaMgr::GetScreenType(___stack_chk_guard);
  std::operator==(asStack_18,"Large");
  *(undefined4 *)(this + 0x1c0) = 0x3f4ccccd;
  iVar3 = FUN_0351e4e8(0x26c);
  FUN_0351d4ac(this + 0x38,(int)((float)iVar3 * 0.8));
  iVar3 = FUN_0351e4e8(0x50);
  FUN_0351d4b8(this + 0x3c,(int)((float)iVar3 * *(float *)(this + 0x1c0)));
  UIWidget::SetAnchorType((UIWidget *)this,1);
  UIWidget::SetParentAnchorType((UIWidget *)this,1);
  bVar1 = std::operator==(asStack_18,"Large");
  if (bVar1) {
    uVar5 = 0x11a;
  }
  else {
    bVar1 = std::operator==(asStack_18,"Full");
    if (bVar1) {
      cVar2 = (**(code **)(*gLawnApp + 0x360))(gLawnApp);
      if (cVar2 == '\0') {
        (**(code **)(*gLawnApp + 0x368))(gLawnApp);
        uVar5 = 0x23f;
      }
      else {
        uVar5 = 0x23f;
      }
    }
    else {
      uVar5 = 400;
    }
  }
  iVar3 = FUN_0351e4e8(uVar5);
  fVar6 = *(float *)(this + 0x1c0);
  iVar4 = FUN_0351e4e8(1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)iVar3 * fVar6,(float)iVar4 * fVar6);
  UIWidget::SetPositionOffset(local_10,local_c,this);
  setZombieItemNum(this,5);
  clearZombieQueue(this);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPVPTopZombieQueue::~UINewPVPTopZombieQueue() */

void __thiscall UINewPVPTopZombieQueue::~UINewPVPTopZombieQueue(UINewPVPTopZombieQueue *this)

{
  *(undefined ***)this = &PTR_GetClass_0664e9b0;
  *(undefined ***)(this + 0x10) = &PTR__UINewPVPTopZombieQueue_0664eb60;
  std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::~vector
            ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)(this + 0x1a8));
  SlidingWidget::~SlidingWidget((SlidingWidget *)this);
  return;
}


/* non-virtual thunk to UINewPVPTopZombieQueue::~UINewPVPTopZombieQueue() */

void __thiscall UINewPVPTopZombieQueue::~UINewPVPTopZombieQueue(UINewPVPTopZombieQueue *this)

{
  ~UINewPVPTopZombieQueue(this + -0x10);
  return;
}


/* UINewPVPTopZombieQueue::~UINewPVPTopZombieQueue() */

void __thiscall UINewPVPTopZombieQueue::~UINewPVPTopZombieQueue(UINewPVPTopZombieQueue *this)

{
  ~UINewPVPTopZombieQueue(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPVPTopZombieQueue::~UINewPVPTopZombieQueue() */

void __thiscall UINewPVPTopZombieQueue::~UINewPVPTopZombieQueue(UINewPVPTopZombieQueue *this)

{
  ~UINewPVPTopZombieQueue(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueue::setZombieQueue(std::vector<ZombieCacheData,
   std::allocator<ZombieCacheData> >) */

void __thiscall UINewPVPTopZombieQueue::setZombieQueue(UINewPVPTopZombieQueue *this,vector *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ZombieCacheData *pZVar4;
  NewPVPMgr *this_00;
  ulong uVar5;
  UINewPVPTopZombieQueueItem *this_01;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [8];
  ServerZombieID aSStack_48 [16];
  int local_38;
  undefined4 local_34;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::operator=
            ((vector<ZombieCacheData,std::allocator<ZombieCacheData>> *)(this + 0x1a8),param_2);
  uVar8 = *(undefined8 *)param_2;
  lVar3 = FUN_0351d5dc(uVar8,*(undefined8 *)(param_2 + 8));
  uVar5 = 0;
  if (lVar3 != 0) {
    do {
      pZVar4 = (ZombieCacheData *)FUN_0351d5f0(uVar8,uVar7);
      ZombieCacheData::ZombieCacheData((ZombieCacheData *)&local_38,pZVar4);
      if (local_38 < 1) {
        HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)&local_38);
      }
      else {
        gettItem(this,(int)uVar7);
        uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        ServerZombieID::ServerZombieID(aSStack_48,local_38);
        ServerZombieID::ToString();
        UINewPVPTopZombieQueueItem::setTypeName(uVar8,asStack_50);
        std::string::~string(asStack_50);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        FUN_0351d530(lVar3 + 0x170,local_34);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        uVar2 = NewPVPMgr::GetZombieRarityById(this_00,local_38);
        FUN_0351d538(lVar3 + 0x178,uVar2);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)&local_38);
      }
      uVar7 = uVar7 + 1;
      uVar8 = *(undefined8 *)param_2;
      uVar5 = FUN_0351d5dc(uVar8,*(undefined8 *)(param_2 + 8));
    } while (uVar7 < uVar5);
  }
  uVar7 = uVar5 & 0xffffffff;
  if ((int)uVar5 < *(int *)(this + 0x1a4)) {
    do {
      iVar6 = (int)uVar7;
      uVar1 = iVar6 + 1;
      uVar7 = (ulong)uVar1;
      gettItem(this,iVar6);
      this_01 = (UINewPVPTopZombieQueueItem *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38)
      ;
      UINewPVPTopZombieQueueItem::setEmpty(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    } while ((int)uVar1 < *(int *)(this + 0x1a4));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueue::onNotifyZombieCacheDatasChanged(std::vector<ZombieCacheData,
   std::allocator<ZombieCacheData> > const&) */

void __thiscall
UINewPVPTopZombieQueue::onNotifyZombieCacheDatasChanged
          (UINewPVPTopZombieQueue *this,vector *param_1)

{
  vector<ZombieCacheData,std::allocator<ZombieCacheData>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::vector(avStack_20,param_1);
  setZombieQueue(this,avStack_20);
  std::vector<ZombieCacheData,std::allocator<ZombieCacheData>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPVPTopZombieQueue::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPTopZombieQueue::Draw(UINewPVPTopZombieQueue *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  UIWidget *pUVar6;
  long *plVar7;
  float fVar8;
  GraphicsAutoState aGStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_18,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  std::string::string(asStack_10,"IMAGE_UI_NEW_PVP_ZOMBIE_QUEUE_BG");
  pIVar5 = (Image *)StringHelper::ToImage(asStack_10,true);
  std::string::~string(asStack_10);
  nop();
  iVar1 = FUN_0351e4e8(0x2a);
  fVar8 = *(float *)(this + 0x1c0);
  iVar2 = FUN_0351e4e8(10);
  iVar3 = FUN_0351e4e8(0x1f9);
  iVar4 = FUN_0351e4e8(0x3c);
  Sexy::Graphics::DrawImage
            (param_1,pIVar5,(int)((float)iVar1 * fVar8),(int)((float)iVar2 * fVar8),
             (int)((float)iVar3 * fVar8),(int)((float)iVar4 * fVar8));
  iVar1 = 0;
  if (0 < *(int *)(this + 0x1a4)) {
    do {
      iVar2 = iVar1 + 1;
      gettItem(this,iVar1);
      pUVar6 = (UIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
      ;
      UIWidget::SetVisible(pUVar6,true);
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      (**(code **)(*plVar7 + 0x78))(plVar7,param_1);
      pUVar6 = (UIWidget *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
      ;
      UIWidget::SetVisible(pUVar6,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      iVar1 = iVar2;
    } while (iVar2 < *(int *)(this + 0x1a4));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UINewPVPTopZombieQueue::Draw(Sexy::Graphics*) */

void __thiscall UINewPVPTopZombieQueue::Draw(UINewPVPTopZombieQueue *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


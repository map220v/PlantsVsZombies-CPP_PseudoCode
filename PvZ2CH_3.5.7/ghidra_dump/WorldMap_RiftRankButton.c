// Class: WorldMap_RiftRankButton


/* WorldMap_RiftRankButton::performButtonAction() */

void __thiscall WorldMap_RiftRankButton::performButtonAction(WorldMap_RiftRankButton *this)

{
  RiftUtils::SendGet_LeaderboardEntry();
  this[0x1f1] = (WorldMap_RiftRankButton)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftRankButton::StaticClassInit() */

void WorldMap_RiftRankButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_RiftRankButton");
    (*pcVar2)(plVar1,asStack_10,FUN_0368a710,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_RiftRankButton::StaticGetClass() */

long * WorldMap_RiftRankButton::StaticGetClass(void)

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
  uVar2 = UIButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_RiftRankButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_RiftRankButton::GetClass() const */

long * WorldMap_RiftRankButton::GetClass(void)

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
  uVar2 = UIButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_RiftRankButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_RiftRankButton::onSuccessResponse() */

void __thiscall WorldMap_RiftRankButton::onSuccessResponse(WorldMap_RiftRankButton *this)

{
  if (this[0x1f1] == (WorldMap_RiftRankButton)0x0) {
    return;
  }
  this[0x1f1] = (WorldMap_RiftRankButton)0x0;
  RiftUtils::ShowLeaderBoardScreen();
  return;
}


/* WorldMap_RiftRankButton::~WorldMap_RiftRankButton() */

void __thiscall WorldMap_RiftRankButton::~WorldMap_RiftRankButton(WorldMap_RiftRankButton *this)

{
  *(undefined ***)this = &PTR_GetClass_0667c470;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_RiftRankButton_0667c620;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1f8));
  UIButtonWidget::~UIButtonWidget((UIButtonWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_RiftRankButton::~WorldMap_RiftRankButton() */

void __thiscall WorldMap_RiftRankButton::~WorldMap_RiftRankButton(WorldMap_RiftRankButton *this)

{
  ~WorldMap_RiftRankButton(this + -0x10);
  return;
}


/* WorldMap_RiftRankButton::~WorldMap_RiftRankButton() */

void __thiscall WorldMap_RiftRankButton::~WorldMap_RiftRankButton(WorldMap_RiftRankButton *this)

{
  ~WorldMap_RiftRankButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_RiftRankButton::~WorldMap_RiftRankButton() */

void __thiscall WorldMap_RiftRankButton::~WorldMap_RiftRankButton(WorldMap_RiftRankButton *this)

{
  ~WorldMap_RiftRankButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftRankButton::WorldMap_RiftRankButton() */

void __thiscall WorldMap_RiftRankButton::WorldMap_RiftRankButton(WorldMap_RiftRankButton *this)

{
  undefined *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIButtonWidget::UIButtonWidget((UIButtonWidget *)this);
  this[0x1f0] = (WorldMap_RiftRankButton)0x0;
  this[0x1f1] = (WorldMap_RiftRankButton)0x0;
  *(undefined ***)this = &PTR_GetClass_0667c470;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_RiftRankButton_0667c620;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  std::string::string((string *)&local_30,"Play_UI_Menu_Button_Continue_Press");
  UIButtonWidget::SetSoundPressed(this,(string *)&local_30);
  std::string::~string((string *)&local_30);
  nop();
  std::string::string((string *)&local_30,"Play_UI_Rift_Perks_Panel_Open");
  UIButtonWidget::SetSoundReleased(this,(string *)&local_30);
  std::string::~string((string *)&local_30);
  nop();
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)&local_30,(CachedUIResourcePtr *)&DAT_06aab6c0);
  UIButtonWidget::SetImageNormal((UIButtonWidget *)this,(string *)&local_30);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)&local_30);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)&local_30,(CachedUIResourcePtr *)&DAT_06aab738);
  UIButtonWidget::SetImagePressed((UIButtonWidget *)this,(string *)&local_30);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)&local_30);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftNetworkResponse);
  local_60 = local_30;
  uStack_58 = uStack_28;
  local_50 = local_20;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<WorldMap_RiftRankButton,void(WorldMap_RiftRankButton::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::RiftNetworkResponseReceived,&local_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_RiftRankButton::StaticNew() */

WorldMap_RiftRankButton * WorldMap_RiftRankButton::StaticNew(void)

{
  WorldMap_RiftRankButton *this;
  
  this = ::operator_new(0x210);
  WorldMap_RiftRankButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftRankButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_RiftRankButton::Draw(WorldMap_RiftRankButton *this,Graphics *param_1)

{
  Image *pIVar1;
  long lVar2;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIButtonWidget::Draw((UIButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  if (this[0x1f0] != (WorldMap_RiftRankButton)0x0) {
    pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aab710);
    lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aab6c0);
    Sexy::Graphics::DrawImage(param_1,pIVar1,(int)((float)*(int *)(lVar2 + 0x38) * 0.8),0);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_RiftRankButton::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_RiftRankButton::Draw(WorldMap_RiftRankButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_RiftRankButton::CheckMark() */

void __thiscall WorldMap_RiftRankButton::CheckMark(WorldMap_RiftRankButton *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  WorldMap_RiftRankButton WVar1;
  bool bVar2;
  int iVar3;
  RiftNetworkMgr *this_01;
  NetworkLeaderboardInfo *pNVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  NetworkLeaderboardInfo aNStack_88 [104];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  pNVar4 = (NetworkLeaderboardInfo *)RiftNetworkMgr::GetLeaderboardInfo(this_01);
  NetworkLeaderboardInfo::NetworkLeaderboardInfo(aNStack_88,pNVar4);
  this[0x1f0] = (WorldMap_RiftRankButton)0x0;
  iVar3 = RiftUtils::PlayerGetLeague();
  if (iVar3 == 7) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1f8);
    local_9c = 0;
    uVar6 = local_20;
    while (iVar3 = local_9c, uVar5 = FUN_0368a544(uVar6,local_18), (ulong)(long)iVar3 < uVar5) {
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_98 = std::
                 find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                           (uVar6,uVar7,&local_9c);
      local_90 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_98,(__normal_iterator *)&local_90);
      uVar6 = local_20;
      iVar3 = local_9c;
      if (bVar2) {
        WVar1 = this[0x1f0];
        if ((WVar1 == (WorldMap_RiftRankButton)0x0) &&
           (lVar8 = FUN_0368a558(local_20,(long)local_9c), *(int *)(lVar8 + 0x20) != 0)) {
          this[0x1f0] = (WorldMap_RiftRankButton)(*(int *)(lVar8 + 0x24) == 0);
        }
        else {
          this[0x1f0] = WVar1;
        }
      }
      local_9c = iVar3 + 1;
    }
  }
  NetworkLeaderboardInfo::~NetworkLeaderboardInfo(aNStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WorldMap_RiftRankButton::onRiftNetworkResponse(int, int) */

void __thiscall
WorldMap_RiftRankButton::onRiftNetworkResponse
          (WorldMap_RiftRankButton *this,int param_1,int param_2)

{
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x1f8));
  CheckMark(this);
  if (param_1 == 2) {
    if (param_2 == 2) {
      onSuccessResponse(this);
      return;
    }
    if (param_2 == 4) {
      JoustUtils::ShowJoustNetworkIssuePopup(1);
      return;
    }
  }
  return;
}


/* WorldMap_RiftRankButton::GetLegendReward(int) */

void __thiscall WorldMap_RiftRankButton::GetLegendReward(WorldMap_RiftRankButton *this,int param_1)

{
  int local_4;
  
  local_4 = param_1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x1f8),&local_4);
  CheckMark(this);
  return;
}


// Class: WorldMap_PlatformGiftButton


/* WorldMap_PlatformGiftButton::OnMouseDown(int, int) */

void WorldMap_PlatformGiftButton::OnMouseDown(int param_1,int param_2)

{
  if (_canGetGift == '\0') {
    return;
  }
  Sexy::OutputDebugStrF((wchar_t *)"WorldMap_PlatformGiftButton::OnMouseDown",(ulong)(uint)param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlatformGiftButton::StaticClassInit() */

void WorldMap_PlatformGiftButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"WorldMap_PlatformGiftButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04c449b0,0x188,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMap_PlatformGiftButton::StaticGetClass() */

long * WorldMap_PlatformGiftButton::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PlatformGiftButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlatformGiftButton::GetClass() const */

long * WorldMap_PlatformGiftButton::GetClass(void)

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
  (*pcVar3)(plVar1,"WorldMap_PlatformGiftButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WorldMap_PlatformGiftButton::SetButtonEnable(bool) */

void WorldMap_PlatformGiftButton::SetButtonEnable(bool param_1)

{
  _canGetGift = param_1;
  return;
}


/* WorldMap_PlatformGiftButton::WorldMap_PlatformGiftButton() */

void __thiscall
WorldMap_PlatformGiftButton::WorldMap_PlatformGiftButton(WorldMap_PlatformGiftButton *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_069879a0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlatformGiftButton_06987b40;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<GiftItem,std::allocator<GiftItem>>::clear
            ((vector<GiftItem,std::allocator<GiftItem>> *)(this + 0x168));
  *(undefined4 *)(this + 0x180) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefresh);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<WorldMap_PlatformGiftButton,void(WorldMap_PlatformGiftButton::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WorldMap_PlatformGiftButton::StaticNew() */

WorldMap_PlatformGiftButton * WorldMap_PlatformGiftButton::StaticNew(void)

{
  WorldMap_PlatformGiftButton *this;
  
  this = ::operator_new(0x188);
  WorldMap_PlatformGiftButton(this);
  return this;
}


/* WorldMap_PlatformGiftButton::~WorldMap_PlatformGiftButton() */

void __thiscall
WorldMap_PlatformGiftButton::~WorldMap_PlatformGiftButton(WorldMap_PlatformGiftButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069879a0;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_PlatformGiftButton_06987b40;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<GiftItem,std::allocator<GiftItem>>::~vector
            ((vector<GiftItem,std::allocator<GiftItem>> *)(this + 0x168));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_PlatformGiftButton::~WorldMap_PlatformGiftButton() */

void __thiscall
WorldMap_PlatformGiftButton::~WorldMap_PlatformGiftButton(WorldMap_PlatformGiftButton *this)

{
  ~WorldMap_PlatformGiftButton(this + -0x10);
  return;
}


/* WorldMap_PlatformGiftButton::~WorldMap_PlatformGiftButton() */

void __thiscall
WorldMap_PlatformGiftButton::~WorldMap_PlatformGiftButton(WorldMap_PlatformGiftButton *this)

{
  ~WorldMap_PlatformGiftButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_PlatformGiftButton::~WorldMap_PlatformGiftButton() */

void __thiscall
WorldMap_PlatformGiftButton::~WorldMap_PlatformGiftButton(WorldMap_PlatformGiftButton *this)

{
  ~WorldMap_PlatformGiftButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlatformGiftButton::OnMouseUp(int, int) */

void WorldMap_PlatformGiftButton::OnMouseUp(int param_1,int param_2)

{
  PuzzlePlatformGiftPanel *this;
  vector<GiftItem,std::allocator<GiftItem>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF
            ((wchar_t *)"WorldMap_PlatformGiftButton::OnMouseUp x = %d y = %d",(ulong)(uint)param_2)
  ;
  if ((_canGetGift != '\0') &&
     (this = (PuzzlePlatformGiftPanel *)UISingletonDialog<PuzzlePlatformGiftPanel>::ShowDialog(),
     this != (PuzzlePlatformGiftPanel *)0x0)) {
    std::vector<GiftItem,std::allocator<GiftItem>>::vector
              (avStack_20,(vector *)((ulong)(uint)param_1 + 0x168));
    PuzzlePlatformGiftPanel::InitRotateList(this,avStack_20);
    std::vector<GiftItem,std::allocator<GiftItem>>::~vector(avStack_20);
    std::string::string((string *)avStack_20,"");
    PuzzlePlatformGiftPanel::InitView(this,0,0,avStack_20);
    std::string::~string((string *)avStack_20);
    nop();
    PuzzlePlatformGiftPanel::SetLeftDays(this,*(int *)((ulong)(uint)param_1 + 0x180));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlatformGiftButton::OnNotifyRefresh(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
WorldMap_PlatformGiftButton::OnNotifyRefresh
          (WorldMap_PlatformGiftButton *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_a0 [24];
  ActiveItem aAStack_88 [8];
  uint local_80;
  undefined1 auStack_78 [8];
  byte local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF
            ((wchar_t *)"WorldMap_PlatformGiftButton::OnNotifyRefresh i_success = %d",(ulong)param_1
            );
  if (param_1) {
    local_bc = 0x29f1;
    local_b8 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_bc);
    local_b0 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_b8,(rbtree_iterator *)&local_b0);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      Sexy::OutputDebugStrF((wchar_t *)"active item m_id = %d",(ulong)local_80);
      uVar5 = FUN_0547429c(auStack_78);
      Sexy::OutputDebugStrF((wchar_t *)"active item m_version = %s",uVar5);
      Sexy::OutputDebugStrF((wchar_t *)"active item m_bOpen = %d",(ulong)local_70);
      uVar5 = FUN_0547429c(auStack_68);
      Sexy::OutputDebugStrF((wchar_t *)"active item m_strStartDate = %s",uVar5);
      uVar5 = FUN_0547429c(auStack_60);
      Sexy::OutputDebugStrF((wchar_t *)"active item m_strEndDate = %s",uVar5);
      uVar5 = FUN_0547429c(auStack_58);
      Sexy::OutputDebugStrF((wchar_t *)"active item m_strNewStartDate = %s",uVar5);
      uVar5 = FUN_0547429c(auStack_50);
      Sexy::OutputDebugStrF((wchar_t *)"active item m_strNewEndDate = %s",uVar5);
      uVar5 = FUN_0547429c(auStack_48);
      Sexy::OutputDebugStrF((wchar_t *)"active item m_jsonData = %s",uVar5);
      PlatformGiftSerializeData::PlatformGiftSerializeData((PlatformGiftSerializeData *)&local_b0);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)&local_b0);
      if (cVar2 != '\0') {
        if ((local_70 == 0) || (local_a8 != 0)) {
          _canGetGift = 0;
        }
        else {
          _canGetGift = 1;
          uVar4 = ActiveItem::GetLeftDays(aAStack_88);
          *(undefined4 *)(this + 0x180) = uVar4;
          uVar5 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(avStack_a0);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_a0);
          std::vector<GiftItem,std::allocator<GiftItem>>::
          assign<__gnu_cxx::__normal_iterator<GiftItem*,std::vector<GiftItem,std::allocator<GiftItem>>>,void>
                    ((vector<GiftItem,std::allocator<GiftItem>> *)(this + 0x168),uVar5,uVar6);
        }
      }
      PlatformGiftSerializeData::~PlatformGiftSerializeData((PlatformGiftSerializeData *)&local_b0);
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_PlatformGiftButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_PlatformGiftButton::Draw(WorldMap_PlatformGiftButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar3;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (_canGetGift != '\0') {
    UIWidget::Draw((Graphics *)this);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
    UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b90b00);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b90b00);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    pIVar3 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b90b00);
    Sexy::Graphics::DrawImage
              (param_1,pIVar3,0,0,(int)((float)iVar1 * 0.9),(int)((float)iVar2 * 0.9));
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMap_PlatformGiftButton::Draw(Sexy::Graphics*) */

void __thiscall
WorldMap_PlatformGiftButton::Draw(WorldMap_PlatformGiftButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


// Class: PartyAssistDisplayWidget


/* PartyAssistDisplayWidget::~PartyAssistDisplayWidget() */

void __thiscall PartyAssistDisplayWidget::~PartyAssistDisplayWidget(PartyAssistDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698f2f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698f640;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* PartyAssistDisplayWidget::~PartyAssistDisplayWidget() */

void __thiscall PartyAssistDisplayWidget::~PartyAssistDisplayWidget(PartyAssistDisplayWidget *this)

{
  ~PartyAssistDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* PartyAssistDisplayWidget::Update() */

void __thiscall PartyAssistDisplayWidget::Update(PartyAssistDisplayWidget *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0xf0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xf0));
    return;
  }
  return;
}


/* PartyAssistDisplayWidget::PartyAssistDisplayWidget(int, int) */

void __thiscall
PartyAssistDisplayWidget::PartyAssistDisplayWidget
          (PartyAssistDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0698f2f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698f640;
  return;
}


/* PartyAssistDisplayWidget::InitView() */

void __thiscall PartyAssistDisplayWidget::InitView(PartyAssistDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93638);
  (*pcVar2)(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
PartyAssistDisplayWidget::NotifyRefreshActivityList
          (PartyAssistDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  PartyAssistMgr *this_00;
  int local_194;
  undefined8 local_190;
  ActiveItem aAStack_188 [8];
  undefined4 local_180;
  char local_170;
  undefined8 local_108 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_194 = 0x2a79;
    local_190 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_194);
    local_108[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_190,(rbtree_iterator *)local_108);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04c615f4(local_180);
      if (((cVar2 != '\0') && (local_170 != '\0')) && (this[0xec] != (PartyAssistDisplayWidget)0x0))
      {
        lVar4 = UISingletonDialog<UIPartyAssist>::GetSingletonPtr();
        if (lVar4 == 0) {
          PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)local_108);
          cVar2 = ActiveItem::GetDataSerialized(aAStack_188,(RtObject *)local_108);
          if (cVar2 != '\0') {
            this_00 = (PartyAssistMgr *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
            PartyAssistMgr::LoadData(this_00,(PartyAssistMainData *)local_108);
            UISingletonDialog<UIPartyAssist>::ShowDialog();
          }
          PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)local_108);
          this[0xec] = (PartyAssistDisplayWidget)0x0;
        }
        else {
          this[0xec] = (PartyAssistDisplayWidget)0x0;
        }
      }
      ActiveItem::~ActiveItem(aAStack_188);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PartyAssistDisplayWidget::Draw(Sexy::Graphics*) */

void __thiscall PartyAssistDisplayWidget::Draw(PartyAssistDisplayWidget *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  
  nop();
  pIVar2 = *(Image **)(this + 0xe0);
  if (pIVar2 != (Image *)0x0) {
    iVar1 = FUN_04c61824(0);
    Sexy::Graphics::DrawImage
              (param_1,pIVar2,iVar1,iVar1,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (*(StandaloneEffect **)(this + 0xf0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xf0),param_1);
    return;
  }
  return;
}


/* PartyAssistDisplayWidget::ButtonClick() */

void __thiscall PartyAssistDisplayWidget::ButtonClick(PartyAssistDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a79,true,0);
  return;
}


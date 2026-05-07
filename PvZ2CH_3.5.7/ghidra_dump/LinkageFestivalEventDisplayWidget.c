// Class: LinkageFestivalEventDisplayWidget


/* LinkageFestivalEventDisplayWidget::~LinkageFestivalEventDisplayWidget() */

void __thiscall
LinkageFestivalEventDisplayWidget::~LinkageFestivalEventDisplayWidget
          (LinkageFestivalEventDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698f690;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698f9e0;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* LinkageFestivalEventDisplayWidget::~LinkageFestivalEventDisplayWidget() */

void __thiscall
LinkageFestivalEventDisplayWidget::~LinkageFestivalEventDisplayWidget
          (LinkageFestivalEventDisplayWidget *this)

{
  ~LinkageFestivalEventDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* LinkageFestivalEventDisplayWidget::LinkageFestivalEventDisplayWidget(int, int) */

void __thiscall
LinkageFestivalEventDisplayWidget::LinkageFestivalEventDisplayWidget
          (LinkageFestivalEventDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0698f690;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698f9e0;
  return;
}


/* LinkageFestivalEventDisplayWidget::InitView() */

void __thiscall LinkageFestivalEventDisplayWidget::InitView(LinkageFestivalEventDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93688);
  (*pcVar2)(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LinkageFestivalEventDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
LinkageFestivalEventDisplayWidget::NotifyRefreshActivityList
          (LinkageFestivalEventDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a86;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if ((bVar1) && (this[0xec] != (LinkageFestivalEventDisplayWidget)0x0)) {
      LawnApp::ShowLinkageActivityCollection(gLawnApp);
      this[0xec] = (LinkageFestivalEventDisplayWidget)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LinkageFestivalEventDisplayWidget::ButtonClick() */

void __thiscall
LinkageFestivalEventDisplayWidget::ButtonClick(LinkageFestivalEventDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a86,true,0);
  return;
}


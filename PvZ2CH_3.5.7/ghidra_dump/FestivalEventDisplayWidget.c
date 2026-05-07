// Class: FestivalEventDisplayWidget


/* FestivalEventDisplayWidget::~FestivalEventDisplayWidget() */

void __thiscall
FestivalEventDisplayWidget::~FestivalEventDisplayWidget(FestivalEventDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698d250;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698d5a0;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* FestivalEventDisplayWidget::~FestivalEventDisplayWidget() */

void __thiscall
FestivalEventDisplayWidget::~FestivalEventDisplayWidget(FestivalEventDisplayWidget *this)

{
  ~FestivalEventDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* FestivalEventDisplayWidget::FestivalEventDisplayWidget(int, int) */

void __thiscall
FestivalEventDisplayWidget::FestivalEventDisplayWidget
          (FestivalEventDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0698d250;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698d5a0;
  return;
}


/* FestivalEventDisplayWidget::InitView() */

void __thiscall FestivalEventDisplayWidget::InitView(FestivalEventDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93880);
  (*pcVar2)(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalEventDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
FestivalEventDisplayWidget::NotifyRefreshActivityList
          (FestivalEventDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a53;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if ((bVar1) && (this[0xec] != (FestivalEventDisplayWidget)0x0)) {
      LawnApp::ShowActivityCollection(gLawnApp);
      this[0xec] = (FestivalEventDisplayWidget)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalEventDisplayWidget::ButtonClick() */

void __thiscall FestivalEventDisplayWidget::ButtonClick(FestivalEventDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a53,true,0);
  return;
}


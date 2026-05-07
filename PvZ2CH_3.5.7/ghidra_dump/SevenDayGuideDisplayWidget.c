// Class: SevenDayGuideDisplayWidget


/* SevenDayGuideDisplayWidget::~SevenDayGuideDisplayWidget() */

void __thiscall
SevenDayGuideDisplayWidget::~SevenDayGuideDisplayWidget(SevenDayGuideDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698d5f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698d940;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* SevenDayGuideDisplayWidget::~SevenDayGuideDisplayWidget() */

void __thiscall
SevenDayGuideDisplayWidget::~SevenDayGuideDisplayWidget(SevenDayGuideDisplayWidget *this)

{
  ~SevenDayGuideDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* SevenDayGuideDisplayWidget::SevenDayGuideDisplayWidget(int, int) */

void __thiscall
SevenDayGuideDisplayWidget::SevenDayGuideDisplayWidget
          (SevenDayGuideDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined ***)this = &PTR_GetClass_0698d5f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698d940;
  *(undefined4 *)(this + 0x100) = 5;
  return;
}


/* SevenDayGuideDisplayWidget::InitView() */

void __thiscall SevenDayGuideDisplayWidget::InitView(SevenDayGuideDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93788);
  (*pcVar2)(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SevenDayGuideDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
SevenDayGuideDisplayWidget::NotifyRefreshActivityList
          (SevenDayGuideDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  int iVar2;
  PakInterface *this_00;
  undefined8 uVar3;
  code *pcVar4;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1c = 0x2a4c;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      this_00 = (PakInterface *)Sexy::LazySingleton<NoviceSevenDaysManager>::GetInstancePtr();
      iVar2 = PakInterface::GetFileSearchOrder(this_00);
      PennyClassroomDisplayWidget::UpdateProgress((PennyClassroomDisplayWidget *)this,iVar2);
      if (*(int *)(this + 0xfc) == *(int *)(this + 0x100)) {
        pcVar4 = *(code **)(*(long *)this + 800);
        uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93a48);
        (*pcVar4)(this,uVar3);
      }
      if (this[0xec] != (SevenDayGuideDisplayWidget)0x0) {
        LawnApp::ShowNewPlayerCollection(gLawnApp);
        this[0xec] = (SevenDayGuideDisplayWidget)0x0;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SevenDayGuideDisplayWidget::Draw(Sexy::Graphics*) */

void SevenDayGuideDisplayWidget::Draw(Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  CachedUIResourcePtr<Sexy::Image> *this;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  Image *pIVar9;
  Graphics *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  uint uVar10;
  int iVar11;
  undefined1 auVar12 [16];
  
  UIScrollDisplayWidgetBase::Draw((UIScrollDisplayWidgetBase *)param_1,in_x1);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b934b8);
  iVar3 = *(int *)(lVar8 + 0x38);
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b934b8);
  iVar11 = *(int *)(param_1 + 0x50);
  iVar5 = FUN_04c61824(0x2d);
  iVar6 = FUN_04c61824(0);
  auVar12 = FUN_04c61824(0x16);
  cVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (auVar12._0_8_,auVar12._8_8_,in_x2,in_x3,in_x4);
  iVar7 = iVar6;
  if (cVar4 != '\0') {
    iVar5 = FUN_04c61824(0x1e);
    iVar7 = FUN_04c61824(7);
    iVar6 = FUN_04c61824(0xfffffff6);
  }
  if (0 < *(int *)(param_1 + 0x100)) {
    iVar11 = iVar11 / 2 - iVar5;
    uVar10 = 0;
    iVar5 = iVar7;
    while( true ) {
      uVar1 = uVar10 + 1;
      this = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b934b8;
      if (*(int *)(param_1 + 0xfc) <= (int)uVar10) {
        this = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93708;
      }
      pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this);
      iVar2 = iVar11 + iVar6 + iVar3;
      Sexy::Graphics::DrawImage(in_x1,pIVar9,iVar11,iVar5);
      if (*(int *)(param_1 + 0x100) <= (int)uVar1) break;
      iVar11 = iVar2;
      uVar10 = uVar1;
      iVar5 = iVar7 + auVar12._0_4_;
      if ((uVar1 & 1) == 0) {
        iVar5 = iVar7;
      }
    }
  }
  return;
}


/* SevenDayGuideDisplayWidget::ButtonClick() */

void __thiscall SevenDayGuideDisplayWidget::ButtonClick(SevenDayGuideDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a4c,true,0);
  return;
}


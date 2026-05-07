// Class: CornucopiaDisplayWidget


/* CornucopiaDisplayWidget::~CornucopiaDisplayWidget() */

void __thiscall CornucopiaDisplayWidget::~CornucopiaDisplayWidget(CornucopiaDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698e810;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698eb60;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* CornucopiaDisplayWidget::~CornucopiaDisplayWidget() */

void __thiscall CornucopiaDisplayWidget::~CornucopiaDisplayWidget(CornucopiaDisplayWidget *this)

{
  ~CornucopiaDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* CornucopiaDisplayWidget::CornucopiaDisplayWidget(int, int) */

void __thiscall
CornucopiaDisplayWidget::CornucopiaDisplayWidget
          (CornucopiaDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0698e810;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698eb60;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaDisplayWidget::CheckThemeVersion() */

void __thiscall CornucopiaDisplayWidget::CheckThemeVersion(CornucopiaDisplayWidget *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  string *extraout_x1;
  string asStack_1e0 [8];
  string asStack_1d8 [8];
  ActiveItem aAStack_1d0 [8];
  undefined4 local_1c8;
  char local_1b8;
  CornucopiaData aCStack_150 [320];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04c615f4(local_1c8);
  if ((cVar1 != '\0') && (local_1b8 != '\0')) {
    CornucopiaData::CornucopiaData(aCStack_150);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1d0,(RtObject *)aCStack_150);
    if (cVar1 != '\0') {
      Sexy::StringToUpper(aSStack_10,extraout_x1);
      uVar3 = FUN_0547429c(asStack_1d8);
      Sexy::StrFormat("IMAGE_UI_HUD_WORLDMAP_SCROLL_BANNER_CORNUCOPIA_%s",asStack_1e0,uVar3);
      std::string::~string(asStack_1d8);
      lVar4 = StringHelper::ToImage(asStack_1e0,false);
      if (lVar4 != 0) {
        (**(code **)(*(long *)this + 800))(this,lVar4);
      }
      std::string::~string(asStack_1e0);
    }
    CornucopiaData::~CornucopiaData(aCStack_150);
  }
  ActiveItem::~ActiveItem(aAStack_1d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaDisplayWidget::InitView() */

void __thiscall CornucopiaDisplayWidget::InitView(CornucopiaDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93660);
  (*pcVar2)(this,uVar1);
  CheckThemeVersion(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CornucopiaDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
CornucopiaDisplayWidget::NotifyRefreshActivityList
          (CornucopiaDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  CornucopiaMgr *this_00;
  int local_1dc;
  undefined8 local_1d8;
  ActiveItem aAStack_1d0 [8];
  undefined4 local_1c8;
  char local_1b8;
  undefined8 local_150 [41];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1dc = 0x2a6f;
    local_1d8 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1dc);
    local_150[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d8,(rbtree_iterator *)local_150);
    if (bVar1) {
      CheckThemeVersion(this);
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04c615f4(local_1c8);
      if (((cVar2 != '\0') && (local_1b8 != '\0')) && (this[0xec] != (CornucopiaDisplayWidget)0x0))
      {
        lVar4 = UISingletonDialog<UICornucopia>::GetSingletonPtr();
        if (lVar4 == 0) {
          CornucopiaData::CornucopiaData((CornucopiaData *)local_150);
          cVar2 = ActiveItem::GetDataSerialized(aAStack_1d0,(RtObject *)local_150);
          if (cVar2 != '\0') {
            this_00 = (CornucopiaMgr *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
            CornucopiaMgr::LoadData(this_00,(CornucopiaData *)local_150);
            UISingletonDialog<UICornucopia>::ShowDialog();
          }
          CornucopiaData::~CornucopiaData((CornucopiaData *)local_150);
          this[0xec] = (CornucopiaDisplayWidget)0x0;
        }
        else {
          this[0xec] = (CornucopiaDisplayWidget)0x0;
        }
      }
      ActiveItem::~ActiveItem(aAStack_1d0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CornucopiaDisplayWidget::ButtonClick() */

void __thiscall CornucopiaDisplayWidget::ButtonClick(CornucopiaDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a6f,true,0);
  return;
}


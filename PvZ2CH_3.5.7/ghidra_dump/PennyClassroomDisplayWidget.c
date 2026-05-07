// Class: PennyClassroomDisplayWidget


/* PennyClassroomDisplayWidget::UpdateProgress(int) */

void __thiscall
PennyClassroomDisplayWidget::UpdateProgress(PennyClassroomDisplayWidget *this,int param_1)

{
  *(int *)(this + 0xfc) = param_1;
  return;
}


/* PennyClassroomDisplayWidget::~PennyClassroomDisplayWidget() */

void __thiscall
PennyClassroomDisplayWidget::~PennyClassroomDisplayWidget(PennyClassroomDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698d990;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698dce0;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* PennyClassroomDisplayWidget::~PennyClassroomDisplayWidget() */

void __thiscall
PennyClassroomDisplayWidget::~PennyClassroomDisplayWidget(PennyClassroomDisplayWidget *this)

{
  ~PennyClassroomDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* PennyClassroomDisplayWidget::PennyClassroomDisplayWidget(int, int) */

void __thiscall
PennyClassroomDisplayWidget::PennyClassroomDisplayWidget
          (PennyClassroomDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined ***)this = &PTR_GetClass_0698d990;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698dce0;
  return;
}


/* PennyClassroomDisplayWidget::InitView() */

void __thiscall PennyClassroomDisplayWidget::InitView(PennyClassroomDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b936e0);
  (*pcVar2)(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
PennyClassroomDisplayWidget::NotifyRefreshActivityList
          (PennyClassroomDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  BaseTaskResource *this_00;
  int local_15c;
  undefined8 local_158;
  ActiveItem aAStack_150 [8];
  undefined4 local_148;
  char local_138;
  undefined8 local_d0 [25];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_15c = 0x2a5b;
    local_158 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_15c);
    local_d0[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_158,(rbtree_iterator *)local_d0);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04c615f4(local_148);
      if ((cVar2 != '\0') && (local_138 != '\0')) {
        NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)local_d0);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_150,(RtObject *)local_d0);
        if (cVar2 != '\0') {
          this_00 = (BaseTaskResource *)Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr()
          ;
          iVar3 = Sexy::BaseTaskResource::GetType(this_00);
          UpdateProgress(this,iVar3);
          if (this[0xec] != (PennyClassroomDisplayWidget)0x0) {
            LawnApp::ShowNewPlayerCollection(gLawnApp);
            this[0xec] = (PennyClassroomDisplayWidget)0x0;
          }
        }
        NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)local_d0)
        ;
      }
      ActiveItem::~ActiveItem(aAStack_150);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyClassroomDisplayWidget::ButtonClick() */

void __thiscall PennyClassroomDisplayWidget::ButtonClick(PennyClassroomDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a5b,true,0);
  return;
}


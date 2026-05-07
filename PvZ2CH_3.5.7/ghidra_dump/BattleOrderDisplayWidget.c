// Class: BattleOrderDisplayWidget


/* BattleOrderDisplayWidget::~BattleOrderDisplayWidget() */

void __thiscall BattleOrderDisplayWidget::~BattleOrderDisplayWidget(BattleOrderDisplayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_0698e0d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698e420;
  UIScrollDisplayWidgetBase::~UIScrollDisplayWidgetBase((UIScrollDisplayWidgetBase *)this);
  return;
}


/* BattleOrderDisplayWidget::~BattleOrderDisplayWidget() */

void __thiscall BattleOrderDisplayWidget::~BattleOrderDisplayWidget(BattleOrderDisplayWidget *this)

{
  ~BattleOrderDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* BattleOrderDisplayWidget::BattleOrderDisplayWidget(int, int) */

void __thiscall
BattleOrderDisplayWidget::BattleOrderDisplayWidget
          (BattleOrderDisplayWidget *this,int param_1,int param_2)

{
  UIScrollDisplayWidgetBase::UIScrollDisplayWidgetBase
            ((UIScrollDisplayWidgetBase *)this,param_1,param_2);
  *(undefined ***)this = &PTR_GetClass_0698e0d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0698e420;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderDisplayWidget::CheckThemeVersion() */

void __thiscall BattleOrderDisplayWidget::CheckThemeVersion(BattleOrderDisplayWidget *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  string *extraout_x1;
  string asStack_208 [8];
  string asStack_200 [8];
  ActiveItem aAStack_1f8 [8];
  undefined4 local_1f0;
  char local_1e0;
  BattleOrderData aBStack_178 [352];
  Sexy aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04c615f4(local_1f0);
  if ((cVar1 != '\0') && (local_1e0 != '\0')) {
    BattleOrderData::BattleOrderData(aBStack_178);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)aBStack_178);
    if (cVar1 != '\0') {
      Sexy::StringToUpper(aSStack_18,extraout_x1);
      uVar3 = FUN_0547429c(asStack_200);
      Sexy::StrFormat("IMAGE_UI_HUD_WORLDMAP_SCROLL_BANNER_BATTLEORDER_%s",asStack_208,uVar3);
      std::string::~string(asStack_200);
      lVar4 = StringHelper::ToImage(asStack_208,false);
      if (lVar4 != 0) {
        (**(code **)(*(long *)this + 800))(this,lVar4);
      }
      std::string::~string(asStack_208);
    }
    BattleOrderData::~BattleOrderData(aBStack_178);
  }
  ActiveItem::~ActiveItem(aAStack_1f8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleOrderDisplayWidget::InitView() */

void __thiscall BattleOrderDisplayWidget::InitView(BattleOrderDisplayWidget *this)

{
  undefined8 uVar1;
  code *pcVar2;
  
  UIScrollDisplayWidgetBase::InitView((UIScrollDisplayWidgetBase *)this);
  pcVar2 = *(code **)(*(long *)this + 800);
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b93490);
  (*pcVar2)(this,uVar1);
  CheckThemeVersion(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderDisplayWidget::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
BattleOrderDisplayWidget::NotifyRefreshActivityList
          (BattleOrderDisplayWidget *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_9c = 0x2a63;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      CheckThemeVersion(this);
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04c615f4(local_80);
      if (((cVar2 != '\0') && (local_70 != '\0')) && (this[0xec] != (BattleOrderDisplayWidget)0x0))
      {
        lVar4 = UISingletonDialog<UIBattleOrder>::GetSingletonPtr();
        if (lVar4 == 0) {
          UISingletonDialog<UIBattleOrder>::ShowDialog();
          this[0xec] = (BattleOrderDisplayWidget)0x0;
        }
        else {
          this[0xec] = (BattleOrderDisplayWidget)0x0;
        }
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleOrderDisplayWidget::ButtonClick() */

void __thiscall BattleOrderDisplayWidget::ButtonClick(BattleOrderDisplayWidget *this)

{
  ActivityManager *this_00;
  
  UIScrollDisplayWidgetBase::ButtonClick((UIScrollDisplayWidgetBase *)this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a63,true,0);
  return;
}


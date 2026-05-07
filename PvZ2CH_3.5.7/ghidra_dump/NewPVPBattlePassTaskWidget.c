// Class: NewPVPBattlePassTaskWidget


/* NewPVPBattlePassTaskWidget::~NewPVPBattlePassTaskWidget() */

void __thiscall
NewPVPBattlePassTaskWidget::~NewPVPBattlePassTaskWidget(NewPVPBattlePassTaskWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066554a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06655800;
  TemplateTaskWidget::~TemplateTaskWidget((TemplateTaskWidget *)this);
  return;
}


/* NewPVPBattlePassTaskWidget::~NewPVPBattlePassTaskWidget() */

void __thiscall
NewPVPBattlePassTaskWidget::~NewPVPBattlePassTaskWidget(NewPVPBattlePassTaskWidget *this)

{
  ~NewPVPBattlePassTaskWidget(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPBattlePassTaskWidget::NewPVPBattlePassTaskWidget() */

void __thiscall
NewPVPBattlePassTaskWidget::NewPVPBattlePassTaskWidget(NewPVPBattlePassTaskWidget *this)

{
  TemplateTaskWidget::TemplateTaskWidget((TemplateTaskWidget *)this);
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined ***)this = &PTR_GetClass_066554a0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06655800;
  return;
}


/* NewPVPBattlePassTaskWidget::StaticNew() */

NewPVPBattlePassTaskWidget * NewPVPBattlePassTaskWidget::StaticNew(void)

{
  NewPVPBattlePassTaskWidget *this;
  
  this = ::operator_new(0x170);
  NewPVPBattlePassTaskWidget(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassTaskWidget::StaticClassInit() */

void NewPVPBattlePassTaskWidget::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPBattlePassTaskWidget");
    (*pcVar2)(plVar1,asStack_10,FUN_0353c428,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPBattlePassTaskWidget::StaticGetClass() */

long * NewPVPBattlePassTaskWidget::StaticGetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPBattlePassTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPBattlePassTaskWidget::GetClass() const */

long * NewPVPBattlePassTaskWidget::GetClass(void)

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
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPBattlePassTaskWidget",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPBattlePassTaskWidget::GetTaskData() */

void __thiscall NewPVPBattlePassTaskWidget::GetTaskData(NewPVPBattlePassTaskWidget *this)

{
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(*(long *)(this + 0x158) + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassTaskWidget::DrawTaskBackground(Sexy::Graphics*) */

void __thiscall
NewPVPBattlePassTaskWidget::DrawTaskBackground(NewPVPBattlePassTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
  this_00 = *(SalesProgressBar **)(this + 0xe0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)aIStack_28,(TRect *)aIStack_18);
  iVar1 = FUN_0353ba6c(2);
  iVar2 = FUN_0353ba6c(4);
  Sexy::Insets::Insets
            (aIStack_18,iVar1,*(int *)(this + 0x54) / 2,*(int *)(this + 0x50) - iVar2,
             *(int *)(this + 0x54) / 2);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5d80);
  Draw3SliceImage(param_1,aIStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassTaskWidget::RequestReward() */

void __thiscall NewPVPBattlePassTaskWidget::RequestReward(NewPVPBattlePassTaskWidget *this)

{
  undefined8 uVar1;
  long lVar2;
  DNetwork *this_00;
  int local_d48 [2];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2328];
  string asStack_3d0 [968];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"type");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  local_d48[0] = *(int *)(lVar2 + 0xc) + -1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d48);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"ti");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar2 + 8));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"wi");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x168));
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0353b77c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_3d0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassTaskWidget::InitTask(GeneralTask*) */

void __thiscall
NewPVPBattlePassTaskWidget::InitTask(NewPVPBattlePassTaskWidget *this,GeneralTask *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *this_00;
  ulong uVar5;
  map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
  *this_01;
  string *psVar6;
  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>> *this_02;
  NewPVPTaskData *pNVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_290;
  ulong local_288;
  ActiveItem aAStack_280 [128];
  NewPVPBattlePassData aNStack_200 [272];
  map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
  amStack_f0 [72];
  undefined8 local_a8;
  undefined8 local_a0;
  int local_90;
  long local_8;
  
  pNVar7 = (NewPVPTaskData *)0x0;
  local_8 = ___stack_chk_guard;
  TemplateTaskWidget::InitTask((TemplateTaskWidget *)this,param_1);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5ad0);
  *(undefined8 *)(this + 0xe8) = uVar4;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(*(long *)(this + 0x158) + 0x20));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
    pNVar7 = Sexy::RtObject::Cast<NewPVPTaskData>(this_00);
  }
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  NewPVPBattlePassData::NewPVPBattlePassData(aNStack_200);
  cVar2 = ActiveItem::GetDataSerialized(aAStack_280,(RtObject *)aNStack_200);
  if (cVar2 != '\0') {
    if (local_90 < 5) {
      if (pNVar7 != (NewPVPTaskData *)0x0) {
        *(undefined4 *)(this + 0x164) = *(undefined4 *)(pNVar7 + 0x50);
      }
    }
    else {
      uVar9 = 0;
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
      if (*(int *)(lVar8 + 0xc) == 1) {
        local_290 = std::
                    map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
                    ::begin(amStack_f0);
        while( true ) {
          local_288 = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)amStack_f0);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_290,(rbtree_iterator *)&local_288);
          if (!bVar1) break;
          local_288 = local_288 & 0xffffffff00000000;
          psVar6 = (string *)
                   std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                             ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_290);
          cVar2 = Sexy::StringToInt(psVar6,(int *)&local_288);
          if (cVar2 != '\0') {
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
            if (*(int *)(lVar8 + 8) == (int)local_288) {
              lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_290)
              ;
              *(undefined4 *)(this + 0x164) = *(undefined4 *)(lVar8 + 8);
              break;
            }
          }
          FUN_035399f4((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_290);
        }
      }
      else {
LAB_0354d2d8:
        uVar4 = local_a8;
        uVar5 = FUN_03539a24(local_a8,local_a0);
        if (uVar9 < uVar5) {
          this_01 = (map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
                     *)FUN_03539a54(uVar4,uVar9);
          local_290 = std::
                      map<std::string,NewPVPTaskDataInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,NewPVPTaskDataInfo>>>
                      ::begin(this_01);
          while( true ) {
            this_02 = (map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)FUN_03539a54(local_a8,uVar9);
            local_288 = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end(this_02);
            bVar1 = eastl::operator!=((rbtree_iterator *)&local_290,(rbtree_iterator *)&local_288);
            if (!bVar1) break;
            local_288 = local_288 & 0xffffffff00000000;
            psVar6 = (string *)
                     std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_290);
            cVar2 = Sexy::StringToInt(psVar6,(int *)&local_288);
            if (cVar2 != '\0') {
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x158) + 0x20));
              if (*(int *)(lVar8 + 8) == (int)local_288) {
                uVar9 = uVar9 + 1;
                lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                   &local_290);
                *(undefined4 *)(this + 0x164) = *(undefined4 *)(lVar8 + 8);
                goto LAB_0354d2d8;
              }
            }
            FUN_035399f4((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_290);
          }
          uVar9 = uVar9 + 1;
          goto LAB_0354d2d8;
        }
      }
    }
  }
  iVar3 = FUN_0353ba6c(5);
  *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + iVar3;
  iVar3 = FUN_0353ba6c(10);
  *(int *)(this + 0x124) = *(int *)(this + 0x124) - iVar3;
  iVar3 = FUN_0353ba6c(0x3c);
  *(int *)(this + 0x108) = *(int *)(this + 0x108) - iVar3;
  iVar3 = FUN_0353ba6c(10);
  *(int *)(this + 0x10c) = *(int *)(this + 0x10c) - iVar3;
  iVar3 = FUN_0353ba6c(0x32);
  lVar8 = *(long *)(this + 0x150);
  *(int *)(lVar8 + 0x48) = *(int *)(lVar8 + 0x48) - iVar3;
  iVar3 = FUN_0353ba6c(10);
  *(int *)(lVar8 + 0x4c) = *(int *)(lVar8 + 0x4c) - iVar3;
  NewPVPBattlePassData::~NewPVPBattlePassData(aNStack_200);
  ActiveItem::~ActiveItem(aAStack_280);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassTaskWidget::DrawRewards(Sexy::Graphics*) */

void __thiscall
NewPVPBattlePassTaskWidget::DrawRewards(NewPVPBattlePassTaskWidget *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  NewPVPMgr *this_00;
  Image *pIVar9;
  undefined8 uVar10;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  string asStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TemplateTaskWidget::DrawRewards((TemplateTaskWidget *)this,param_1);
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  cVar2 = NewPVPMgr::IsThirdSeason(this_00);
  if ((cVar2 != '\0') && (0 < *(int *)(this + 0x16c))) {
    iVar8 = *(int *)(this + 0x110);
    iVar1 = *(int *)(this + 0x108);
    iVar3 = FUN_0353ba6c(5);
    Sexy::Insets::Insets
              ((Insets *)&local_38,iVar1 + iVar8 * 2 + iVar3 * 2,*(int *)(this + 0x10c),
               iVar8 + iVar3,iVar3 + *(int *)(this + 0x114));
    iVar4 = FUN_0353ba6c(8);
    std::string::string(asStack_18,"IMAGE_UI_GENERIC_ICON_FRAME_ORANGE");
    pIVar9 = (Image *)StringHelper::ToImage(asStack_18,true);
    std::string::~string(asStack_18);
    nop();
    iVar1 = local_30;
    iVar8 = local_30 + local_38;
    iVar3 = FUN_0353ba6c(5);
    Sexy::Graphics::DrawImage(param_1,pIVar9,iVar8 + iVar3,iVar4 + local_34,iVar1,local_2c);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x16c));
    std::operator+("IMAGE_UI_NEW_PVP_SHOP_CHEST_",asStack_28);
    uVar10 = StringHelper::ToImage(asStack_18,true);
    std::string::~string(asStack_18);
    std::string::~string(asStack_28);
    iVar3 = local_30;
    iVar1 = local_38;
    iVar5 = FUN_0353ba6c(5);
    iVar6 = FUN_0353ba6c(2);
    iVar8 = iVar6 + local_34;
    iVar7 = FUN_0353ba6c(4);
    Sexy::Insets::Insets
              ((Insets *)asStack_18,iVar1 + iVar3 + iVar5 + iVar6,iVar8 + iVar4,iVar3 - iVar7,
               local_2c - iVar7);
    DrawAdaptiveImage(param_1,asStack_18,uVar10);
    iVar8 = FUN_0353ba6c(5);
    Sexy::Insets::Insets
              ((Insets *)asStack_28,local_38 + local_30 + iVar8,
               (local_2c << 1) / 3 + local_34 + iVar4,local_30,local_2c / 2);
    Sexy::StrFormat("X %d",asStack_18,1);
    Sexy::ToWString(asStack_18);
    std::string::~string(asStack_18);
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color((Color *)asStack_18,4);
    WriteWordInRect(param_1,auStack_40,asStack_28,uVar10,asStack_18,2,1);
    FUN_05476c50(auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


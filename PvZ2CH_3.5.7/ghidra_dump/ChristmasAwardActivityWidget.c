// Class: ChristmasAwardActivityWidget


/* ChristmasAwardActivityWidget::Resize(Sexy::TRect<int> const&) */

void __thiscall
ChristmasAwardActivityWidget::Resize(ChristmasAwardActivityWidget *this,TRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0xe0) = uVar1;
  *(undefined4 *)(this + 0xe4) = uVar2;
  *(undefined4 *)(this + 0xe8) = uVar3;
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  Sexy::OutputDebugStrF
            ((wchar_t *)"ChristmasAwardActivityWidget::Resize: %d, %d, %d, %d",
             (ulong)*(uint *)(this + 0xe0),(ulong)*(uint *)(this + 0xe4),
             (ulong)*(uint *)(this + 0xe8),(ulong)*(uint *)(this + 0xec));
  return;
}


/* ChristmasAwardActivityWidget::ButtonDepress(int) */

ChristmasAwardActivityWidget * __thiscall
ChristmasAwardActivityWidget::ButtonDepress(ChristmasAwardActivityWidget *this,int param_1)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  if (param_1 == 2) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
    this = (ChristmasAwardActivityWidget *)(**(code **)(*plVar1 + 0x160))(plVar1,0x29b1);
  }
  return this;
}


/* non-virtual thunk to ChristmasAwardActivityWidget::ButtonDepress(int) */

void __thiscall
ChristmasAwardActivityWidget::ButtonDepress(ChristmasAwardActivityWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasAwardActivityWidget::addAwardButton(int, int, int, int) */

void __thiscall
ChristmasAwardActivityWidget::addAwardButton
          (ChristmasAwardActivityWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  PVZ2UIButton *pPVar1;
  long lVar2;
  code *pcVar3;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[PLANT_SEVENDAYSLOGIN_AWARD]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar1 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar1,2,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x150) = pPVar1;
  FUN_05476c50(awStack_78);
  (**(code **)(**(long **)(this + 0x150) + 0x198))
            (*(long **)(this + 0x150),param_1,param_2,param_3,param_4);
  pPVar1 = *(PVZ2UIButton **)(this + 0x150);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abb010,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abb288,2);
  PVZ2UIButton::SetDialogStates(pPVar1,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x150) + 0x188))(*(long **)(this + 0x150),0);
  (**(code **)(**(long **)(this + 0x150) + 0x158))(*(long **)(this + 0x150),1);
  lVar2 = *(long *)(this + 0x150);
  pcVar3 = *(code **)(*(long *)this + 0x60);
  *(undefined1 *)(lVar2 + 0x59) = 0;
  (*pcVar3)(this,lVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasAwardActivityWidget::Init() */

void __thiscall ChristmasAwardActivityWidget::Init(ChristmasAwardActivityWidget *this)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  undefined8 uVar15;
  uint *puVar16;
  NDLoginRewardBonus *pNVar17;
  DaliyLoginRewardContent *this_01;
  ulong uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  code *pcVar22;
  ulong uVar23;
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x158);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  Sexy::StrFormat("IMAGE_UI_PLANTADVENTURE_BG_STONELOTTERY",asStack_20);
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)this_00);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  }
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 < 6) {
    Sexy::StrFormat("IMAGE_UI_NATIONDAYAWARD_GUOQING_NUMBG",asStack_20);
    GetImageByNameWithUIFallback(asStack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x160),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    iVar3 = *(int *)(this + 0x1b4);
  }
  Sexy::StrFormat("IMAGE_UI_NATIONDAYAWARD_GUOQING_%d",asStack_28,(ulong)(iVar3 + 1));
  GetImageByNameWithUIFallback(asStack_28);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x168),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::StrFormat("IMAGE_UI_NATIONALCENTER_CONTENT_BG",asStack_20);
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb010);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  iVar2 = iVar2 * 5;
  iVar3 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  iVar19 = (int)((double)(iVar3 >> 2) * 1.5);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb010);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar20 = (int)((double)((iVar3 << 2) / 5) * 1.5);
  iVar4 = FUN_03925930(5);
  iVar3 = *(int *)(this + 0x50);
  iVar5 = FUN_03925930(0x28);
  iVar2 = *(int *)(this + 0x54);
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb108);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb108);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar8 = FUN_03925930(0);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8,*(int *)(this + 0x54) / 2 - iVar7 / 2,iVar6,iVar7);
  *(undefined8 *)(this + 0x110) = local_18;
  *(undefined8 *)(this + 0x118) = uStack_10;
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb0b0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb0b0);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar8 = FUN_03925930(10);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8,*(int *)(this + 0x54) / 2 - iVar7 / 2,iVar6,iVar7);
  *(undefined8 *)(this + 0x120) = local_18;
  *(undefined8 *)(this + 0x128) = uStack_10;
  iVar7 = FUN_03925930(100);
  iVar8 = FUN_03925930(0x3c);
  iVar6 = *(int *)(this + 0x54);
  iVar9 = FUN_03925930(0x1c7);
  iVar10 = FUN_03925930(0x78);
  Sexy::Insets::Insets((Insets *)&local_18,iVar7,iVar6 / 2 - iVar8,iVar9,iVar10);
  *(undefined8 *)(this + 0x130) = local_18;
  *(undefined8 *)(this + 0x138) = uStack_10;
  uVar15 = FUN_03925280(*(undefined8 *)(this + 0x198),*(undefined8 *)(this + 0x1a0));
  Sexy::OutputDebugStrF
            ((wchar_t *)"ChristmasAwardActivityWidget::Init m_vecAwardItem size %d",uVar15);
  uVar23 = 0;
  while( true ) {
    uVar15 = *(undefined8 *)(this + 0x198);
    uVar18 = FUN_03925280(uVar15,*(undefined8 *)(this + 0x1a0));
    if (uVar18 <= uVar23) break;
    puVar16 = (uint *)FUN_0392528c(uVar15,uVar23);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "ChristmasAwardActivityWidget::Init m_vecAwardItem[index].BonusId = %d m_vecAwardItem[index].Quantity = %d"
               ,(ulong)*puVar16,(ulong)puVar16[1]);
    pNVar17 = (NDLoginRewardBonus *)FUN_0392528c(*(undefined8 *)(this + 0x198),uVar23);
    this_01 = ::operator_new(0xe0);
    DaliyLoginRewardContent::DaliyLoginRewardContent(this_01,pNVar17);
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar14);
    pcVar22 = *(code **)(*(long *)this_01 + 0x198);
    iVar9 = FUN_03925930(0xa0);
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    iVar6 = *(int *)(this + 0x54);
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
    uVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb338);
    uVar12 = SalesProgressBar::GetCurrentLevel(pSVar14);
    (*pcVar22)(this_01,(int)((float)iVar9 +
                            (float)(int)uVar23 * ((float)iVar7 * 0.4 + (float)iVar10)),
               (int)((float)(iVar6 / 2) - (float)(iVar8 / 2)),uVar11,uVar12);
    lVar21 = *(long *)this;
    this_01[0x59] = (DaliyLoginRewardContent)0x0;
    (**(code **)(lVar21 + 0x60))(this,this_01);
    uVar23 = uVar23 + 1;
  }
  pLVar13 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb258);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
  pSVar14 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb258);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar14);
  iVar9 = FUN_03925930(5);
  iVar6 = *(int *)(this + 0x50);
  iVar10 = FUN_03925930(0x46);
  Sexy::Insets::Insets
            ((Insets *)&local_18,((iVar6 + iVar9 * -2) - iVar7) - iVar10,
             *(int *)(this + 0x54) / 2 - iVar8 / 2,iVar7,iVar8);
  *(undefined8 *)(this + 0x140) = local_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  if (this[0x191] == (ChristmasAwardActivityWidget)0x0) {
    if (*(int *)(this + 0x1b4) < *(int *)(this + 0x1b0)) goto LAB_03928954;
  }
  else if (*(int *)(this + 0x1b4) < *(int *)(this + 0x1b0) + -1) {
LAB_03928954:
    Sexy::StrFormat("IMAGE_UI_NATIONDAYAWARD_GUOQING_AWARD",asStack_20);
    GetImageByNameWithUIFallback(asStack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    goto LAB_0392881c;
  }
  addAwardButton(this,((iVar3 + iVar4 * -2) - iVar19) - iVar5,iVar2 / 2 - iVar20 / 2,iVar19,iVar20);
LAB_0392881c:
  this[400] = (ChristmasAwardActivityWidget)0x1;
  iVar3 = FUN_03925930(10);
  iVar2 = FUN_03925930(0x37);
  iVar6 = FUN_03925930(0x15e);
  iVar4 = FUN_03925930(0x23);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar3,iVar2,(int)((double)iVar6 * 1.22),(int)((double)iVar4 * 2.2))
  ;
  *(undefined8 *)(this + 0xf0) = local_18;
  *(undefined8 *)(this + 0xf8) = uStack_10;
  iVar3 = FUN_03925930(10);
  iVar2 = FUN_03925930(0x14);
  iVar6 = FUN_03925930(0x15e);
  iVar4 = FUN_03925930(0x23);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar2,iVar6,(int)((double)iVar4 * 0.8));
  *(undefined8 *)(this + 0x100) = local_18;
  *(undefined8 *)(this + 0x108) = uStack_10;
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasAwardActivityWidget::Draw(Sexy::Graphics*) */

void __thiscall
ChristmasAwardActivityWidget::Draw(ChristmasAwardActivityWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ResourceInfo *pRVar6;
  SalesProgressBar *this_00;
  Image *pIVar7;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1b4) < 6) {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x160));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,*(int *)(this + 0x110),*(int *)(this + 0x114))
    ;
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x168));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,*(int *)(this + 0x120),*(int *)(this + 0x124))
    ;
  }
  else {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x168));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,*(int *)(this + 0x110),*(int *)(this + 0x114))
    ;
  }
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x130));
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x170));
  Draw9SliceImage(param_1,aIStack_18,pRVar6);
  iVar1 = *(int *)(this + 0x11c);
  iVar2 = *(int *)(this + 0x114);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb060);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar3 = *(int *)(this + 0x118);
  iVar4 = *(int *)(this + 0x110);
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abb060);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar4 + iVar3,iVar2 + (iVar1 - iVar5) / 2);
  if (this[0x191] == (ChristmasAwardActivityWidget)0x0) {
    if (*(int *)(this + 0x1b0) <= *(int *)(this + 0x1b4)) goto LAB_03928b0c;
  }
  else if (*(int *)(this + 0x1b0) + -1 <= *(int *)(this + 0x1b4)) goto LAB_03928b0c;
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x178));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,*(int *)(this + 0x140),*(int *)(this + 0x144));
LAB_03928b0c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChristmasAwardActivityWidget::~ChristmasAwardActivityWidget() */

void __thiscall
ChristmasAwardActivityWidget::~ChristmasAwardActivityWidget(ChristmasAwardActivityWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066c9aa0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066c9dc8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0x198));
  FUN_05476c50(this + 0x188);
  FUN_05476c50(this + 0x180);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ChristmasAwardActivityWidget::~ChristmasAwardActivityWidget() */

void __thiscall
ChristmasAwardActivityWidget::~ChristmasAwardActivityWidget(ChristmasAwardActivityWidget *this)

{
  ~ChristmasAwardActivityWidget(this);
  AK::FreeHook(this);
  return;
}


/* ChristmasAwardActivityWidget::ChristmasAwardActivityWidget(int, int, bool,
   std::vector<NDLoginRewardBonus, std::allocator<NDLoginRewardBonus> >&) */

void __thiscall
ChristmasAwardActivityWidget::ChristmasAwardActivityWidget
          (ChristmasAwardActivityWidget *this,int param_1,int param_2,bool param_3,vector *param_4)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066c9aa0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066c9dc8;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  *(undefined8 *)(this + 0x150) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x160));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  FUN_05476574(this + 0x180);
  FUN_05476574(this + 0x188);
  this[0x191] = (ChristmasAwardActivityWidget)param_3;
  this[400] = (ChristmasAwardActivityWidget)0x0;
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0x198),param_4
            );
  *(int *)(this + 0x1b4) = param_1;
  *(int *)(this + 0x1b0) = param_2;
  return;
}


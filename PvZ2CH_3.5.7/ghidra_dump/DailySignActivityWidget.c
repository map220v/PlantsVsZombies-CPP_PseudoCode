// Class: DailySignActivityWidget


/* DailySignActivityWidget::Resize(Sexy::TRect<int> const&) */

void __thiscall DailySignActivityWidget::Resize(DailySignActivityWidget *this,TRect *param_1)

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
  return;
}


/* DailySignActivityWidget::Update() */

void __thiscall DailySignActivityWidget::Update(DailySignActivityWidget *this)

{
  long *plVar1;
  
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (((this[0x189] == (DailySignActivityWidget)0x0) &&
      (plVar1 = *(long **)(this + 0x1b0), plVar1 != (long *)0x0)) &&
     (*(char *)((long)plVar1 + 0x6e) == '\0')) {
    (**(code **)(*plVar1 + 0x188))(plVar1,1);
    return;
  }
  return;
}


/* DailySignActivityWidget::ButtonDepress(int) */

DailySignActivityWidget * __thiscall
DailySignActivityWidget::ButtonDepress(DailySignActivityWidget *this,int param_1)

{
  NetworkMgr *this_00;
  long *plVar1;
  
  if (param_1 == 0x67) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_00);
    this = (DailySignActivityWidget *)(**(code **)(*plVar1 + 0x160))(plVar1,0x29d6);
  }
  return this;
}


/* non-virtual thunk to DailySignActivityWidget::ButtonDepress(int) */

void __thiscall DailySignActivityWidget::ButtonDepress(DailySignActivityWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignActivityWidget::addAwardButton(int, int, int, int) */

void __thiscall
DailySignActivityWidget::addAwardButton
          (DailySignActivityWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  PVZ2UIButton *pPVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[PLANT_SEVENDAYSLOGIN_AWARD]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  pPVar1 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar1,0x67,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x1b0) = pPVar1;
  FUN_05476c50(awStack_78);
  (**(code **)(**(long **)(this + 0x1b0) + 0x198))
            (*(long **)(this + 0x1b0),param_1,param_2,param_3,param_4);
  pPVar1 = *(PVZ2UIButton **)(this + 0x1b0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abd7e0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abd6a8,3);
  PVZ2UIButton::SetDialogStates(pPVar1,(PVZ2UIImage *)awStack_78,aPStack_40);
  (**(code **)(**(long **)(this + 0x1b0) + 0x188))(*(long **)(this + 0x1b0),0);
  (**(code **)(**(long **)(this + 0x1b0) + 0x158))(*(long **)(this + 0x1b0),1);
  plVar3 = *(long **)(this + 0x1b0);
  *(undefined1 *)((long)plVar3 + 0x59) = 0;
  pcVar4 = *(code **)(*plVar3 + 800);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  (*pcVar4)(plVar3,uVar2);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x1b0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignActivityWidget::setIsCanAwardToday(bool) */

void __thiscall
DailySignActivityWidget::setIsCanAwardToday(DailySignActivityWidget *this,bool param_1)

{
  this[0x189] = (DailySignActivityWidget)param_1;
  return;
}


/* DailySignActivityWidget::~DailySignActivityWidget() */

void __thiscall DailySignActivityWidget::~DailySignActivityWidget(DailySignActivityWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066d7f90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d82c0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 400));
  FUN_05476c50(this + 0x180);
  FUN_05476c50(this + 0x178);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x170));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x150));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DailySignActivityWidget::~DailySignActivityWidget() */

void __thiscall DailySignActivityWidget::~DailySignActivityWidget(DailySignActivityWidget *this)

{
  ~DailySignActivityWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailySignActivityWidget::Init() */

void __thiscall DailySignActivityWidget::Init(DailySignActivityWidget *this)

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
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  undefined8 uVar17;
  uint *puVar18;
  NDLoginRewardBonus *pNVar19;
  DaliySignRewardContent *this_01;
  ulong uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  code *pcVar24;
  ulong uVar25;
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x150);
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
  iVar3 = *(int *)(this + 0x1ac);
  if (iVar3 < 7) {
    Sexy::StrFormat("IMAGE_UI_NATIONDAYAWARD_GUOQING_NUMBG",asStack_20);
    GetImageByNameWithUIFallback(asStack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x158),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    iVar3 = *(int *)(this + 0x1ac);
  }
  Sexy::StrFormat("IMAGE_UI_LEVELOFTHEDAY_IMG_DAY_%d",asStack_28,(ulong)(iVar3 + 1));
  GetImageByNameWithUIFallback(asStack_28);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x160),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::StrFormat("IMAGE_UI_DIALOG_ASSET_THICK_WHITE_BG",asStack_20);
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x168),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdb08);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar2 = iVar2 * 5;
  iVar3 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  iVar21 = (int)((double)(iVar3 >> 2) * 1.5);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdb08);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar22 = (int)((double)((iVar3 << 2) / 5) * 1.5);
  iVar4 = FUN_03972124(5);
  iVar3 = *(int *)(this + 0x50);
  iVar5 = FUN_03972124(0x28);
  iVar6 = FUN_03972124(0x19);
  iVar2 = *(int *)(this + 0x54);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd978);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd978);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar9 = FUN_03972124(10);
  Sexy::Insets::Insets((Insets *)&local_18,iVar9,*(int *)(this + 0x54) / 2 - iVar8 / 2,iVar7,iVar8);
  *(undefined8 *)(this + 0x110) = local_18;
  *(undefined8 *)(this + 0x118) = uStack_10;
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc28);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc28);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar10 = FUN_03972124(0x19);
  iVar7 = *(int *)(this + 0x54);
  iVar11 = FUN_03972124(0x1e);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar10,(iVar7 / 2 - (int)((double)iVar9 * 1.5) / 2) + iVar11,
             (int)((double)iVar8 * 1.5),(int)((double)iVar9 * 1.5));
  *(undefined8 *)(this + 0x120) = local_18;
  *(undefined8 *)(this + 0x128) = uStack_10;
  iVar9 = FUN_03972124(0x8c);
  iVar10 = FUN_03972124(0x32);
  iVar7 = *(int *)(this + 0x54);
  iVar8 = *(int *)(this + 0x50);
  iVar11 = FUN_03972124(0x3a);
  iVar12 = FUN_03972124(100);
  Sexy::Insets::Insets((Insets *)&local_18,iVar9,iVar7 / 2 - iVar10,(iVar8 - iVar9) - iVar11,iVar12)
  ;
  *(undefined8 *)(this + 0x130) = local_18;
  *(undefined8 *)(this + 0x138) = uStack_10;
  uVar17 = FUN_03971e84(*(undefined8 *)(this + 400),*(undefined8 *)(this + 0x198));
  Sexy::OutputDebugStrF((wchar_t *)"DailySignActivityWidget::Init m_vecAwardItem size %d",uVar17);
  uVar25 = 0;
  while( true ) {
    uVar17 = *(undefined8 *)(this + 400);
    uVar20 = FUN_03971e84(uVar17,*(undefined8 *)(this + 0x198));
    if (uVar20 <= uVar25) break;
    puVar18 = (uint *)FUN_03971e98(uVar17,uVar25);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "DailySignActivityWidget::Init m_vecAwardItem[index].BonusId = %d m_vecAwardItem[index].Quantity = %d"
               ,(ulong)*puVar18,(ulong)puVar18[1]);
    pNVar19 = (NDLoginRewardBonus *)FUN_03971e98(*(undefined8 *)(this + 400),uVar25);
    this_01 = ::operator_new(0xf0);
    DaliySignRewardContent::DaliySignRewardContent(this_01,pNVar19);
    pLVar15 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar16);
    pcVar24 = *(code **)(*(long *)this_01 + 0x198);
    iVar10 = FUN_03972124(200);
    pLVar15 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
    iVar7 = *(int *)(this + 0x54);
    pLVar15 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    uVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
    pSVar16 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abdc00);
    uVar14 = SalesProgressBar::GetCurrentLevel(pSVar16);
    (*pcVar24)(this_01,(int)((float)iVar10 +
                            (float)(int)uVar25 * ((float)iVar8 * 0.4 + (float)iVar11)),
               (int)((float)(iVar7 / 2) - (float)(iVar9 / 2)),uVar13,uVar14);
    lVar23 = *(long *)this;
    this_01[0x59] = (DaliySignRewardContent)0x0;
    (**(code **)(lVar23 + 0x60))(this,this_01);
    uVar25 = uVar25 + 1;
  }
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd830);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd830);
  iVar9 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar10 = FUN_03972124(5);
  iVar7 = *(int *)(this + 0x50);
  iVar11 = FUN_03972124(0x82);
  Sexy::Insets::Insets
            ((Insets *)&local_18,((iVar7 + iVar10 * -2) - iVar8) - iVar11,
             *(int *)(this + 0x54) / 2 - iVar9 / 2,iVar8,iVar9);
  *(undefined8 *)(this + 0x140) = local_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  if (this[0x189] == (DailySignActivityWidget)0x0) {
    if (*(int *)(this + 0x1ac) < *(int *)(this + 0x1a8)) goto LAB_03973470;
  }
  else if (*(int *)(this + 0x1ac) < *(int *)(this + 0x1a8) + -1) {
LAB_03973470:
    Sexy::StrFormat("IMAGE_UI_NATIONDAYAWARD_GUOQING_AWARD",asStack_20);
    GetImageByNameWithUIFallback(asStack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x170),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
    goto LAB_03973338;
  }
  (**(code **)(*(long *)this + 0x318))
            (this,(((iVar3 + iVar4 * -2) - iVar21) - iVar5) - iVar6,iVar2 / 2 - iVar22 / 2,iVar21,
             iVar22);
LAB_03973338:
  this[0x188] = (DailySignActivityWidget)0x1;
  iVar3 = FUN_03972124(10);
  iVar2 = FUN_03972124(0x37);
  iVar7 = FUN_03972124(0x15e);
  iVar8 = FUN_03972124(0x23);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar3,iVar2,(int)((double)iVar7 * 1.22),(int)((double)iVar8 * 2.2))
  ;
  *(undefined8 *)(this + 0xf0) = local_18;
  *(undefined8 *)(this + 0xf8) = uStack_10;
  iVar3 = FUN_03972124(10);
  iVar2 = FUN_03972124(0x14);
  iVar7 = FUN_03972124(0x15e);
  iVar8 = FUN_03972124(0x23);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar2,iVar7,(int)((double)iVar8 * 0.8));
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
/* DailySignActivityWidget::Draw(Sexy::Graphics*) */

void __thiscall DailySignActivityWidget::Draw(DailySignActivityWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ResourceInfo *pRVar7;
  SalesProgressBar *this_00;
  Image *pIVar8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1ac) < 7) {
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x158));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,*(int *)(this + 0x110),*(int *)(this + 0x114))
    ;
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x160));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,*(int *)(this + 0x120),*(int *)(this + 0x124))
    ;
  }
  else {
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x160));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,*(int *)(this + 0x110),*(int *)(this + 0x114))
    ;
  }
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x130));
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x168));
  Draw9SliceImage(param_1,aIStack_18,pRVar7);
  iVar1 = *(int *)(this + 0x11c);
  iVar2 = *(int *)(this + 0x114);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd880);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar3 = *(int *)(this + 0x118);
  iVar4 = *(int *)(this + 0x110);
  iVar6 = FUN_03972124(8);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abd880);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar4 + iVar3 + iVar6,iVar2 + (iVar1 - iVar5) / 2);
  if (this[0x189] == (DailySignActivityWidget)0x0) {
    if (*(int *)(this + 0x1a8) <= *(int *)(this + 0x1ac)) goto LAB_03973bf0;
  }
  else if (*(int *)(this + 0x1a8) + -1 <= *(int *)(this + 0x1ac)) goto LAB_03973bf0;
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x170));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,*(int *)(this + 0x140),*(int *)(this + 0x144));
LAB_03973bf0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailySignActivityWidget::DailySignActivityWidget(int, int, bool, std::vector<NDLoginRewardBonus,
   std::allocator<NDLoginRewardBonus> >&) */

void __thiscall
DailySignActivityWidget::DailySignActivityWidget
          (DailySignActivityWidget *this,int param_1,int param_2,bool param_3,vector *param_4)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066d7f90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d82c0;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  Sexy::Insets::Insets((Insets *)(this + 0x120));
  Sexy::Insets::Insets((Insets *)(this + 0x130));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x150));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x160));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x168));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x170));
  FUN_05476574(this + 0x178);
  FUN_05476574(this + 0x180);
  this[0x189] = (DailySignActivityWidget)param_3;
  this[0x188] = (DailySignActivityWidget)0x0;
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 400),param_4);
  *(int *)(this + 0x1ac) = param_1;
  *(int *)(this + 0x1a8) = param_2;
  *(undefined8 *)(this + 0x1b0) = 0;
  return;
}


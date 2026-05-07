// Class: SpringAwardActivityWidget


/* SpringAwardActivityWidget::Resize(Sexy::TRect<int> const&) */

void __thiscall SpringAwardActivityWidget::Resize(SpringAwardActivityWidget *this,TRect *param_1)

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
            ((wchar_t *)"SpringAwardActivityWidget::Resize: %d, %d, %d, %d",
             (ulong)*(uint *)(this + 0xe0),(ulong)*(uint *)(this + 0xe4),
             (ulong)*(uint *)(this + 0xe8),(ulong)*(uint *)(this + 0xec));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringAwardActivityWidget::addAwardButton(int, int, int, int) */

void __thiscall
SpringAwardActivityWidget::addAwardButton
          (SpringAwardActivityWidget *this,int param_1,int param_2,int param_3,int param_4)

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
            (pPVar1,0x67,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  *(PVZ2UIButton **)(this + 0x150) = pPVar1;
  FUN_05476c50(awStack_78);
  (**(code **)(**(long **)(this + 0x150) + 0x198))
            (*(long **)(this + 0x150),param_1,param_2,param_3,param_4);
  pPVar1 = *(PVZ2UIButton **)(this + 0x150);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abbdc0,5);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abbce0,5);
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


/* SpringAwardActivityWidget::~SpringAwardActivityWidget() */

void __thiscall
SpringAwardActivityWidget::~SpringAwardActivityWidget(SpringAwardActivityWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066cf210;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066cf538;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>::~vector
            ((vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>> *)(this + 0x198));
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


/* SpringAwardActivityWidget::~SpringAwardActivityWidget() */

void __thiscall
SpringAwardActivityWidget::~SpringAwardActivityWidget(SpringAwardActivityWidget *this)

{
  ~SpringAwardActivityWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringAwardActivityWidget::Init() */

void __thiscall SpringAwardActivityWidget::Init(SpringAwardActivityWidget *this)

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
  undefined4 uVar12;
  undefined4 uVar13;
  LotteryResultProgressBar *pLVar14;
  SalesProgressBar *pSVar15;
  undefined8 uVar16;
  PrimeTypeface *pPVar17;
  ulong uVar18;
  uint *puVar19;
  int *piVar20;
  NameMapperBase *this_01;
  SpringLoginRewardContent *this_02;
  int iVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  code *pcVar25;
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
  uVar24 = 0;
  Sexy::StrFormat("IMAGE_UI_NATIONDAYAWARD_GUOQING_NUMBG",asStack_20);
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x160),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  Sexy::StrFormat("IMAGE_UI_NATIONDAYAWARD_GUOQING_%d",asStack_28,
                  (ulong)(*(int *)(this + 0x1b4) + 1));
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
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbdc0);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  iVar2 = iVar2 * 5;
  iVar3 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  iVar21 = (int)((double)(iVar3 >> 2) * 1.5);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbdc0);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar22 = (int)((double)((iVar3 << 2) / 5) * 0.9);
  iVar4 = FUN_03943dd0(5);
  iVar3 = *(int *)(this + 0x50);
  iVar5 = FUN_03943dd0(0x46);
  iVar2 = *(int *)(this + 0x54);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbf80);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbf80);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar8 = FUN_03943dd0(0);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8,*(int *)(this + 0x54) / 2 - iVar7 / 2,iVar6,iVar7);
  *(undefined8 *)(this + 0x110) = local_18;
  *(undefined8 *)(this + 0x118) = uStack_10;
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbd48);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbd48);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar8 = FUN_03943dd0(10);
  Sexy::Insets::Insets((Insets *)&local_18,iVar8,*(int *)(this + 0x54) / 2 - iVar7 / 2,iVar6,iVar7);
  *(undefined8 *)(this + 0x120) = local_18;
  *(undefined8 *)(this + 0x128) = uStack_10;
  iVar7 = FUN_03943dd0(100);
  iVar8 = FUN_03943dd0(0x2d);
  iVar6 = *(int *)(this + 0x54);
  iVar9 = FUN_03943dd0(0x1a5);
  iVar10 = FUN_03943dd0(0x5a);
  Sexy::Insets::Insets((Insets *)&local_18,iVar7,iVar6 / 2 - iVar8,iVar9,iVar10);
  *(undefined8 *)(this + 0x130) = local_18;
  *(undefined8 *)(this + 0x138) = uStack_10;
  uVar16 = FUN_039436fc(*(undefined8 *)(this + 0x198),*(undefined8 *)(this + 0x1a0));
  Sexy::OutputDebugStrF((wchar_t *)"SpringAwardActivityWidget::Init m_vecAwardItem size %d",uVar16);
  while( true ) {
    uVar16 = *(undefined8 *)(this + 0x198);
    iVar6 = (int)uVar24;
    uVar18 = FUN_039436fc(uVar16,*(undefined8 *)(this + 0x1a0));
    if (uVar18 <= uVar24) break;
    puVar19 = (uint *)FUN_03943724(uVar16,uVar24);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "SpringAwardActivityWidget::Init m_vecAwardItem[index].m_nPlantID = %d m_vecAwardItem[index].m_tSustainedTime = %d"
               ,(ulong)*puVar19,(ulong)puVar19[1]);
    piVar20 = (int *)FUN_03943724(*(undefined8 *)(this + 0x198),uVar24);
    iVar7 = *piVar20;
    Set8BytesTo0(asStack_20);
    this_01 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(this_01,iVar7);
    if (cVar1 == '\0') {
      lVar23 = FUN_03943724(*(undefined8 *)(this + 0x198),uVar24);
      uVar12 = *(undefined4 *)(lVar23 + 4);
      iVar7 = MaterialItemMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar7);
      FUN_05474278(asStack_20,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      std::string::~string((string *)&local_18);
      this_02 = ::operator_new(0x150);
      SpringLoginRewardContent::SpringLoginRewardContent(this_02,5,asStack_20,uVar12,0);
      pPVar17 = (PrimeTypeface *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abc110);
      Lua::CUILabel::SetTypeface((CUILabel *)this_02,pPVar17);
    }
    else {
      iVar7 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar7);
      FUN_05474278(asStack_20,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      std::string::~string((string *)&local_18);
      this_02 = ::operator_new(0x150);
      SpringLoginRewardContent::SpringLoginRewardContent(this_02,2,asStack_20,0,1);
    }
    uVar24 = uVar24 + 1;
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbc60);
    iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbc60);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar15);
    pcVar25 = *(code **)(*(long *)this_02 + 0x198);
    iVar10 = FUN_03943dd0(0x8c);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbc60);
    iVar11 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    iVar7 = *(int *)(this + 0x54);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbc60);
    uVar12 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    pSVar15 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbc60);
    uVar13 = SalesProgressBar::GetCurrentLevel(pSVar15);
    (*pcVar25)(this_02,(int)((float)iVar10 + (float)iVar6 * ((float)iVar8 * 0.4 + (float)iVar11)),
               (int)((float)(iVar7 / 2) - (float)(iVar9 / 2)),uVar12,uVar13);
    lVar23 = *(long *)this;
    *(CUILabel *)(this_02 + 0x59) = (CUILabel)0x0;
    (**(code **)(lVar23 + 0x60))(this,this_02);
    std::string::~string(asStack_20);
  }
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbe38);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbe38);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar9 = FUN_03943dd0(5);
  iVar6 = *(int *)(this + 0x50);
  iVar10 = FUN_03943dd0(0x5a);
  Sexy::Insets::Insets
            ((Insets *)&local_18,((iVar6 + iVar9 * -2) - iVar7) - iVar10,
             *(int *)(this + 0x54) / 2 - iVar8 / 2,iVar7,iVar8);
  *(undefined8 *)(this + 0x140) = local_18;
  *(undefined8 *)(this + 0x148) = uStack_10;
  if ((this[0x191] == (SpringAwardActivityWidget)0x0) &&
     (*(int *)(this + 0x1b8) <= *(int *)(this + 0x1b0))) {
    Sexy::StrFormat("IMAGE_UI_NATIONDAYAWARD_GUOQING_AWARD",asStack_20);
    GetImageByNameWithUIFallback(asStack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    std::string::~string(asStack_20);
  }
  else {
    addAwardButton(this,((iVar3 + iVar4 * -2) - iVar21) - iVar5,iVar2 / 2 - iVar22 / 2,iVar21,iVar22
                  );
  }
  this[400] = (SpringAwardActivityWidget)0x1;
  iVar3 = FUN_03943dd0(10);
  iVar2 = FUN_03943dd0(0x37);
  iVar6 = FUN_03943dd0(0x15e);
  iVar4 = FUN_03943dd0(0x23);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar3,iVar2,(int)((double)iVar6 * 1.22),(int)((double)iVar4 * 2.2))
  ;
  *(undefined8 *)(this + 0xf0) = local_18;
  *(undefined8 *)(this + 0xf8) = uStack_10;
  iVar3 = FUN_03943dd0(10);
  iVar2 = FUN_03943dd0(0x14);
  iVar6 = FUN_03943dd0(0x15e);
  iVar4 = FUN_03943dd0(0x23);
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
/* SpringAwardActivityWidget::Draw(Sexy::Graphics*) */

void __thiscall SpringAwardActivityWidget::Draw(SpringAwardActivityWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  ResourceInfo *pRVar7;
  SalesProgressBar *this_00;
  Image *pIVar8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x160));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,*(int *)(this + 0x110),*(int *)(this + 0x114));
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x168));
  Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,*(int *)(this + 0x120),*(int *)(this + 0x124));
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x130));
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x170));
  Draw9SliceImage(param_1,aIStack_18,pRVar7);
  iVar1 = *(int *)(this + 0x11c);
  iVar2 = *(int *)(this + 0x114);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbcb8);
  iVar6 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar3 = *(int *)(this + 0x118);
  iVar4 = *(int *)(this + 0x110);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abbcb8);
  Sexy::Graphics::DrawImage(param_1,pIVar8,iVar4 + iVar3,iVar2 + (iVar1 - iVar6) / 2);
  bVar5 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
  if (bVar5) {
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x178));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar7,*(int *)(this + 0x140),*(int *)(this + 0x144))
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringAwardActivityWidget::SpringAwardActivityWidget(int, int, bool,
   std::vector<stSpringRewardInfo, std::allocator<stSpringRewardInfo> >&, int) */

void __thiscall
SpringAwardActivityWidget::SpringAwardActivityWidget
          (SpringAwardActivityWidget *this,int param_1,int param_2,bool param_3,vector *param_4,
          int param_5)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066cf210;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066cf538;
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
  this[0x191] = (SpringAwardActivityWidget)param_3;
  this[400] = (SpringAwardActivityWidget)0x0;
  std::vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>>::vector
            ((vector<stSpringRewardInfo,std::allocator<stSpringRewardInfo>> *)(this + 0x198),param_4
            );
  *(int *)(this + 0x1b4) = param_1;
  *(int *)(this + 0x1b0) = param_2;
  *(int *)(this + 0x1b8) = param_5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringAwardActivityWidget::ButtonDepress(int) */

void __thiscall
SpringAwardActivityWidget::ButtonDepress(SpringAwardActivityWidget *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NetworkMgr *this_02;
  long *plVar5;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x67) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x198));
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x198));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1)
    {
      piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      iVar3 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar3);
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
      cVar2 = PlayerInfo::IsCurrentPlantLevelMax(this_01,asStack_28,false);
      if (cVar2 != '\0') {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)avStack_20,piVar4);
      }
      std::string::~string(asStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    this_02 = (NetworkMgr *)NetworkMgr::Instance();
    plVar5 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
    (**(code **)(*plVar5 + 0x170))(plVar5,0x29e6,avStack_20,*(undefined4 *)(this + 0x1b4));
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SpringAwardActivityWidget::ButtonDepress(int) */

void __thiscall
SpringAwardActivityWidget::ButtonDepress(SpringAwardActivityWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


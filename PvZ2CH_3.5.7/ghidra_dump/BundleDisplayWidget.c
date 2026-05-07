// Class: BundleDisplayWidget


/* BundleDisplayWidget::ButtonPress(int) */

int BundleDisplayWidget::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to BundleDisplayWidget::ButtonPress(int) */

void __thiscall BundleDisplayWidget::ButtonPress(BundleDisplayWidget *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* BundleDisplayWidget::GetProductByTypeAndPrice(int, float) */

void __thiscall
BundleDisplayWidget::GetProductByTypeAndPrice(BundleDisplayWidget *this,int param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x128);
  if (param_1 != 0xd2fe) {
    Magento::GetBundleProductPtrByPrice((Magento *)(ulong)uVar1,(float)(int)uVar1);
    return;
  }
  Magento::EventGetBundleProductPtrByPrice((Magento *)(ulong)uVar1,(float)(int)uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDisplayWidget::getDescriptionById(int, int) */

void BundleDisplayWidget::getDescriptionById(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int extraout_w1;
  uint in_w2;
  NetworkHelper *this;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  this = (NetworkHelper *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  OtherServerNameMapper::GetInstance();
  cVar1 = FUN_049ec384(this);
  OtherServerNameMapper::GetInstance();
  cVar2 = FUN_049ec374(this);
  if ((cVar2 == '\0') && (cVar1 == '\0')) {
    NetworkHelper::getObjectNameByActId(this,extraout_w1);
    Sexy::StrFormat(L"x%d",auStack_10,(ulong)in_w2);
    thunk_FUN_05477668(auStack_18,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_05476584();
    FUN_05476c50(auStack_18);
  }
  else {
    Sexy::StrFormat(L"%d",(ulong)in_w2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDisplayWidget::RefreshBundle(std::string const&) */

void __thiscall BundleDisplayWidget::RefreshBundle(BundleDisplayWidget *this,string *param_1)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x170] != (BundleDisplayWidget)0x0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    GetProductByTypeAndPrice(this,*(int *)(this + 0x120),(float)*(int *)(this + 0x128));
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    cVar1 = std::operator==((string *)(lVar2 + 0x10),param_1);
    if ((cVar1 != '\0') &&
       (cVar1 = PlayerInfo::HasOfferedTargetBundle(this_01,param_1), cVar1 != '\0')) {
      this[0x170] = (BundleDisplayWidget)0x0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BundleDisplayWidget::RechargeBundleBeforePurchased(int) */

void __thiscall
BundleDisplayWidget::RechargeBundleBeforePurchased(BundleDisplayWidget *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 != (PlayerInfo *)0x0) && (*(int *)(this + 0x124) == param_1)) {
    iVar1 = *(int *)(this + 0x134);
    *(int *)(this + 0x134) = iVar1 + -1;
    PlayerInfo::SetDisplayingBundleBuyTimes(this_01,*(int *)(this + 0x124),iVar1 + -1);
    if (*(int *)(this + 0x134) == 0) {
      (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),1);
    }
    PlayerInfo::saveCurrentProfile(this_01);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDisplayWidget::Resize(int, int, int, int) */

void __thiscall
BundleDisplayWidget::Resize
          (BundleDisplayWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  BundleDescWidget *this_00;
  code *pcVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar2 = FUN_049ec7f8(0x140);
  iVar3 = FUN_049ec7f8(0x58);
  if (*(int *)(this + 0x110) == 1) {
    iVar2 = FUN_049ec7f8(0xf);
    iVar3 = FUN_049ec7f8(0xe6);
  }
  else if (*(int *)(this + 0x110) == 2) {
    iVar2 = FUN_049ec7f8(0xfa);
  }
  Sexy::Point::Point((Point *)&local_10,iVar2,iVar3);
  *(undefined8 *)(this + 0x118) = local_10;
  if (*(int *)(this + 0x110) == 1) {
    iVar4 = FUN_049ec7f8(0x46);
    iVar2 = iVar2 + iVar4;
  }
  else {
    iVar4 = FUN_049ec7f8(0x20);
    iVar3 = iVar3 + iVar4;
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xe8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar8 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (BundleDescWidget *)*plVar8;
    pcVar9 = *(code **)(*(long *)this_00 + 0x198);
    iVar4 = BundleDescWidget::GetStringWidth(this_00);
    iVar5 = FUN_049ec7f8(0x23);
    iVar6 = FUN_049ec7f8(5);
    uVar7 = FUN_049ec7f8(0x20);
    (*pcVar9)(this_00,iVar2,iVar3,iVar4 + iVar5 + iVar6,uVar7);
    if (*(int *)(this + 0x110) == 1) {
      iVar4 = FUN_049ec7f8(10);
      iVar2 = iVar2 + iVar4 + *(int *)(*plVar8 + 0x50);
    }
    else {
      iVar4 = FUN_049ec7f8(0x20);
      iVar3 = iVar3 + iVar4;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BundleDisplayWidget::~BundleDisplayWidget() */

void __thiscall BundleDisplayWidget::~BundleDisplayWidget(BundleDisplayWidget *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0692c3d8;
  *(undefined ***)this = &PTR_GetClass_0692c0a0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x158));
  FUN_05476c50(this + 0x150);
  FUN_05476c50(this + 0x148);
  std::string::~string((string *)(this + 0x138));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x108));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  std::vector<BundleDescWidget*,std::allocator<BundleDescWidget*>>::~vector
            ((vector<BundleDescWidget*,std::allocator<BundleDescWidget*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* BundleDisplayWidget::~BundleDisplayWidget() */

void __thiscall BundleDisplayWidget::~BundleDisplayWidget(BundleDisplayWidget *this)

{
  ~BundleDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDisplayWidget::BundleDisplayWidget(BundleUIDetail const&) */

void __thiscall
BundleDisplayWidget::BundleDisplayWidget(BundleDisplayWidget *this,BundleUIDetail *param_1)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_01;
  string *this_02;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_03;
  uint uVar1;
  undefined *puVar2;
  LawnApp *this_04;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_05;
  PurchaseBroker *this_06;
  PVZ2UIButton *pPVar11;
  BundleDescWidget *pBVar12;
  uint *puVar13;
  BundlePieceWidget *this_07;
  NameMapperBase *pNVar14;
  string *psVar15;
  long lVar16;
  ProfileMgr *this_08;
  PlayerInfo *this_09;
  OfferBundleConfig *this_10;
  string *extraout_x1;
  undefined8 uVar17;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  code *pcVar18;
  long *plVar19;
  int iVar20;
  undefined1 auVar21 [12];
  BundleDescWidget *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  wstring awStack_c0 [8];
  string asStack_b8 [8];
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  string asStack_98 [8];
  wstring awStack_90 [8];
  string asStack_88 [8];
  wstring awStack_80 [8];
  BundleDescWidget *local_78 [7];
  BundleDescWidget *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x108);
  this_01 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  this_02 = (string *)(this + 0x138);
  this_03 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158);
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0692c0a0;
  *(undefined **)(this + 0xd8) = &DAT_0692c3d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_01);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  this[0x114] = (BundleDisplayWidget)0x0;
  Sexy::Point::Point((Point *)(this + 0x118));
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x130) = 1;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  Set8BytesTo0(this_02);
  *(undefined8 *)(this + 0x140) = 0;
  FUN_05478178(this + 0x148,&DAT_056f11a8,(wstring *)&local_40);
  nop();
  FUN_05478178(this + 0x150,&DAT_056f11a8,(wstring *)&local_40);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_03);
  this[0x170] = (BundleDisplayWidget)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x120) = uVar5;
  *(undefined4 *)(this + 0x124) = uVar6;
  thunk_FUN_05475e00(this_02,param_1 + 0x28);
  iVar20 = *(int *)(param_1 + 0x38);
  *(int *)(this + 0x130) = iVar20;
  uVar1 = (iVar20 * *(int *)(this + 0x128)) / 100;
  *(uint *)(this + 300) = uVar1;
  Sexy::UTF8StringToWString((Sexy *)(param_1 + 0x18),(string *)(ulong)uVar1);
  FUN_054766c8(this + 0x148,(wstring *)&local_40);
  FUN_05476c50((wstring *)&local_40);
  Sexy::UTF8StringToWString((Sexy *)(param_1 + 0x20),extraout_x1);
  FUN_054766c8(this + 0x150,(wstring *)&local_40);
  FUN_05476c50((wstring *)&local_40);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)this_03,(vector *)param_1);
  uVar17 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x140) = uVar17;
  FUN_05476574(awStack_c0);
  this_05 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_06 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_05);
  cVar3 = PurchaseBroker::NeedPurchaseWhite(this_06);
  if (cVar3 == '\0') {
    GetProductByTypeAndPrice(this,*(int *)(this + 0x120),(float)*(int *)(this + 0x128));
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_78);
    if (cVar3 == '\0') {
LAB_049efa44:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_78);
      goto LAB_049ef0e0;
    }
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_78);
    bVar4 = std::operator==((string *)(lVar16 + 0x10),"com.popcap.ios.chs.PVZ2.gempackagelv1");
    if (!bVar4) {
      lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_78);
      bVar4 = std::operator==((string *)(lVar16 + 0x10),"com.popcap.ios.chs.PVZ2.gempackagelv2");
      if (!bVar4) {
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_78)
        ;
        bVar4 = std::operator==((string *)(lVar16 + 0x10),"com.popcap.ios.chs.PVZ2.gempackagelv3");
        if (!bVar4) goto LAB_049efa44;
      }
    }
    TodStringTranslate(L"[PLANT_OBTAIN]");
    FUN_054766c8(awStack_c0,(wstring *)&local_40);
    FUN_05476c50((wstring *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_78);
  }
  else {
LAB_049ef0e0:
    FUN_05478178((wstring *)&local_40,L"[PLANTTRIAL_BUY_BUTTON_NAME_1]",awStack_80);
    TodReplaceNumberString((wstring *)&local_40,L"{NUMBER}",*(int *)(this + 0x128));
    FUN_054766c8(awStack_c0,local_78);
    FUN_05476c50(local_78);
    FUN_05476c50((wstring *)&local_40);
    nop();
  }
  Sexy::Color::Color((Color *)&local_40,1);
  iVar20 = 0;
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,0,(ButtonListener *)(this + 0xd8),awStack_c0,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar11;
  pcVar18 = *(code **)(*(long *)pPVar11 + 800);
  uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  (*pcVar18)(pPVar11,uVar17);
  pPVar11 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b777c8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b77a10,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)local_78,(PVZ2UIImage *)&local_40);
  plVar19 = *(long **)(this + 0xe0);
  uVar5 = FUN_049ec7f8(0x212);
  uVar6 = FUN_049ec7f8(0xaa);
  uVar7 = FUN_049ec7f8(0x96);
  uVar8 = FUN_049ec7f8(0x41);
  (**(code **)(*plVar19 + 0x198))(plVar19,uVar5,uVar6,uVar7,uVar8);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  uVar5 = RechargeBundleConfig::getUITypeByType(this_02);
  *(undefined4 *)(this + 0x110) = uVar5;
  RechargeBundleConfig::getBGImageByType((RechargeBundleConfig *)this_02,extraout_x1_00);
  GetImageByName(asStack_b8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x100),(RtWeakPtr *)&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  iVar9 = FUN_049ec7f8(0x33);
  iVar10 = FUN_049ec7f8(0x70);
  Sexy::Point::Point((Point *)&local_b0,iVar9,iVar10);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_03);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_03);
  while (bVar4 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar4) {
    auVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    puVar13 = auVar21._0_8_;
    NetworkHelper::getObjectTypeStringByActId((NetworkHelper *)(ulong)*puVar13,auVar21._8_4_);
    getDescriptionById((int)this,*puVar13);
    bVar4 = std::operator==(this_02,"family");
    if ((bVar4) && (bVar4 = std::operator==(asStack_98,"plant_piece"), bVar4)) {
      uVar1 = puVar13[1];
      iVar9 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar9);
      this_07 = ::operator_new(0x138);
      BundlePieceWidget::BundlePieceWidget(this_07,this_02,(string *)&local_40,(int *)(puVar13 + 1))
      ;
      uVar5 = local_ac;
      iVar9 = local_b0;
      uVar6 = FUN_049ec7f8(0x56);
      uVar7 = FUN_049ec7f8(100);
      (**(code **)(*(long *)this_07 + 0x198))(this_07,iVar9,uVar5,uVar6,uVar7);
LAB_049ef520:
      iVar20 = iVar20 + uVar1;
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_07);
      iVar9 = FUN_049ec7f8(0x56);
      local_b0 = local_b0 + iVar9;
      std::string::~string((string *)&local_40);
      bVar4 = std::operator==(this_02,"plant");
      if (bVar4) goto LAB_049ef384;
LAB_049ef558:
      bVar4 = std::operator==(this_02,"grow");
      if ((((bVar4) || (bVar4 = std::operator==(this_02,"grow1"), bVar4)) ||
          (bVar4 = std::operator==(this_02,"grow2"), bVar4)) ||
         (bVar4 = std::operator==(this_02,"grow3"), bVar4)) goto LAB_049ef384;
    }
    else {
      bVar4 = std::operator==(this_02,"nutrient");
      if ((bVar4) && (bVar4 = std::operator==(asStack_98,"material"), bVar4)) {
        uVar1 = puVar13[1];
        iVar9 = MaterialItemMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar9);
        this_07 = ::operator_new(0x138);
        BundlePieceWidget::BundlePieceWidget
                  (this_07,this_02,(string *)&local_40,(int *)(puVar13 + 1));
        uVar5 = local_ac;
        iVar9 = local_b0;
        uVar6 = FUN_049ec7f8(0x56);
        uVar7 = FUN_049ec7f8(100);
        (**(code **)(*(long *)this_07 + 0x198))(this_07,iVar9,uVar5,uVar6,uVar7);
        goto LAB_049ef520;
      }
      Set8BytesTo0((string *)local_78);
      bVar4 = std::operator==(asStack_98,"plant_piece");
      if (bVar4) {
        iVar9 = PlantChipNameMapperServerID::GetInstance();
LAB_049ef300:
        NameMapperBase::GetNameForId(iVar9);
        FUN_05474278((string *)local_78,(wstring *)&local_40);
        std::string::~string((string *)&local_40);
      }
      else {
        bVar4 = std::operator==(asStack_98,"plant");
        if (bVar4) {
          iVar9 = PlantNameMapperServerID::GetInstance();
          goto LAB_049ef300;
        }
      }
      iVar9 = 0;
      cVar3 = FUN_0547419c((string *)local_78);
      if (cVar3 == '\0') {
        psVar15 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar15);
        lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        iVar9 = *(int *)(lVar16 + 0xd0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      pBVar12 = ::operator_new(0xe8);
      BundleDescWidget::BundleDescWidget(pBVar12,asStack_98,awStack_90,iVar9);
      local_40 = pBVar12;
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pBVar12);
      std::vector<BundleDescWidget*,std::allocator<BundleDescWidget*>>::push_back
                ((vector<BundleDescWidget*,std::allocator<BundleDescWidget*>> *)this_01,&local_40);
      std::string::~string((string *)local_78);
      bVar4 = std::operator==(this_02,"plant");
      if (!bVar4) goto LAB_049ef558;
LAB_049ef384:
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
      if (cVar3 == '\0') {
        std::string::string(asStack_88,"");
        nop();
        pNVar14 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        cVar3 = NameMapperBase::ContainsId(pNVar14,*puVar13);
        if (cVar3 == '\0') {
          pNVar14 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
          cVar3 = NameMapperBase::ContainsId(pNVar14,*puVar13);
          if (cVar3 != '\0') {
            iVar9 = PlantChipNameMapperServerID::GetInstance();
            goto LAB_049ef990;
          }
          cVar3 = FUN_0547419c(asStack_88);
          psVar15 = extraout_x1_01;
        }
        else {
          iVar9 = PlantNameMapperServerID::GetInstance();
LAB_049ef990:
          NameMapperBase::GetNameForId(iVar9);
          FUN_05474278(asStack_88,(wstring *)&local_40);
          std::string::~string((string *)&local_40);
          cVar3 = FUN_0547419c(asStack_88);
          psVar15 = extraout_x1_02;
        }
        if (cVar3 == '\0') {
          Sexy::StringToUpper((Sexy *)asStack_88,psVar15);
          std::operator+((string *)&PlantHeadshot::PlantBigPrefix,(string *)&local_40);
          GetImageByName((string *)local_78);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)awStack_80);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
          std::string::~string((string *)local_78);
          std::string::~string((string *)&local_40);
        }
        std::string::~string(asStack_88);
      }
    }
    FUN_05476c50(awStack_90);
    std::string::~string(asStack_98);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_a8);
  }
  bVar4 = std::operator==(this_02,"family");
  if (bVar4) {
    FUN_05478178((wstring *)&local_40,L"[RECHARGEBUNDLE_FAMILY_TOTAL]",(string *)local_78);
    TodReplaceNumberString((wstring *)&local_40,L"{NUMBER}",iVar20);
    FUN_05476c50((wstring *)&local_40);
    nop();
    std::string::string((string *)&local_40,"plant_piece");
    pBVar12 = ::operator_new(0xe8);
    BundleDescWidget::BundleDescWidget(pBVar12,(string *)&local_40,awStack_80,4);
    local_78[0] = pBVar12;
    std::string::~string((string *)&local_40);
    nop();
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_78[0]);
    std::vector<BundleDescWidget*,std::allocator<BundleDescWidget*>>::push_back
              ((vector<BundleDescWidget*,std::allocator<BundleDescWidget*>> *)this_01,local_78);
    FUN_05476c50(awStack_80);
  }
  else {
    bVar4 = std::operator==(this_02,"nutrient");
    if (bVar4) {
      FUN_05478178((wstring *)&local_40,L"[RECHARGEBUNDLE_NUTRIENT_TOTAL]",awStack_80);
      TodReplaceNumberString((wstring *)&local_40,L"{NUMBER}",iVar20);
      FUN_05476c50((wstring *)&local_40);
      nop();
      pBVar12 = ::operator_new(0xe8);
      BundleDescWidget::BundleDescWidget(pBVar12,this_02,(wstring *)local_78,0);
      local_40 = pBVar12;
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)pBVar12);
      std::vector<BundleDescWidget*,std::allocator<BundleDescWidget*>>::push_back
                ((vector<BundleDescWidget*,std::allocator<BundleDescWidget*>> *)this_01,&local_40);
      FUN_05476c50((string *)local_78);
      cVar3 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
      goto joined_r0x049ef938;
    }
  }
  cVar3 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
joined_r0x049ef938:
  if (cVar3 != '\0') {
    GetProductByTypeAndPrice(this,*(int *)(this + 0x120),(float)*(int *)(this + 0x128));
    this_08 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_09 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_08);
    lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
    cVar3 = PlayerInfo::HasOfferedTargetBundle(this_09,(string *)(lVar16 + 0x10));
    this_04 = gLawnApp;
    if (cVar3 == '\0') {
      this[0x170] = (BundleDisplayWidget)0x1;
      this_10 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(this_04);
      lVar16 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80)
      ;
      uVar17 = OfferBundleConfig::GetBundleDisplayImageName(this_10,(string *)(lVar16 + 0x10));
      FUN_05475d88((string *)local_78,uVar17);
      GetImageByName((string *)local_78);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      std::string::~string((string *)local_78);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_80);
  }
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x320);
  local_e0 = local_40;
  uStack_d8 = uStack_38;
  local_d0 = local_30;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<BundleDisplayWidget,void(BundleDisplayWidget::*)(int)>>
            ((MessageRouter *)puVar2,Message::RechargeBundlePurchased,&local_e0);
  std::string::~string(asStack_b8);
  FUN_05476c50(awStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDisplayWidget::ButtonDepress(int) */

void __thiscall BundleDisplayWidget::ButtonDepress(BundleDisplayWidget *this,int param_1)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var4;
  PurchaseBroker *pPVar5;
  long lVar6;
  undefined4 *puVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  PurchasedBundleInfo aPStack_30 [16];
  vector<bundleItemInfo,std::allocator<bundleItemInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != 0) goto LAB_049f10e0;
  GetProductByTypeAndPrice(this,*(int *)(this + 0x120),(float)*(int *)(this + 0x128));
  p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PurchaseBroker *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_rightmost(p_Var4);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  PurchaseBroker::RequestPayment(pPVar5,(string *)(lVar6 + 0x10),*(int *)(this + 0x124));
  PurchasedBundleInfo::PurchasedBundleInfo(aPStack_30);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  thunk_FUN_05475e00(aPStack_30,lVar6 + 0x10);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x158));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x158));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2) {
    puVar7 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    local_34 = puVar7[1];
    local_38 = *puVar7;
    std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::push_back
              (avStack_20,(bundleItemInfo *)&local_38);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_48);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::SetBundleInPurchase(this_01,aPStack_30);
  p_Var4 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PurchaseBroker *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_rightmost(p_Var4);
  cVar3 = PurchaseBroker::NeedPurchaseWhite(pPVar5);
  if (cVar3 == '\0') {
    GetProductByTypeAndPrice(this,*(int *)(this + 0x120),(float)*(int *)(this + 0x128));
    cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_40);
    if (cVar3 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      bVar2 = std::operator==((string *)(lVar6 + 0x10),"com.popcap.ios.chs.PVZ2.gempackagelv1");
      if (!bVar2) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40)
        ;
        bVar2 = std::operator==((string *)(lVar6 + 0x10),"com.popcap.ios.chs.PVZ2.gempackagelv2");
        if (!bVar2) {
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          bVar2 = std::operator==((string *)(lVar6 + 0x10),"com.popcap.ios.chs.PVZ2.gempackagelv3");
          if (!bVar2) goto LAB_049f1240;
        }
      }
      puVar1 = gMessageRouter;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      FUN_05475d88((string *)&local_38,lVar6 + 0x10);
      MessageRouter::Post<std::string_const&,std::string>
                ((MessageRouter *)puVar1,Message::BlackPackageCharge,(string *)&local_38);
      std::string::~string((string *)&local_38);
    }
LAB_049f1240:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  }
  PurchasedBundleInfo::~PurchasedBundleInfo(aPStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
LAB_049f10e0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to BundleDisplayWidget::ButtonDepress(int) */

void __thiscall BundleDisplayWidget::ButtonDepress(BundleDisplayWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDisplayWidget::Draw(Sexy::Graphics*) */

void __thiscall BundleDisplayWidget::Draw(BundleDisplayWidget *this,Graphics *param_1)

{
  RtMixedPtrBase *this_00;
  string *psVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  Image *pIVar10;
  PrimeTypeface *pPVar11;
  undefined8 uVar12;
  long lVar13;
  SalesProgressBar *this_01;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  int local_78;
  int local_74;
  Insets aIStack_68 [16];
  int local_58 [2];
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [2];
  int local_30;
  undefined8 local_28;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  iVar6 = *(int *)(this + 0x50);
  pLVar9 = (LotteryResultProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100))
  ;
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar5 = FUN_049ec7f8(0x28);
  pIVar10 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  Sexy::Graphics::DrawImage(param_1,pIVar10,(iVar6 - iVar4) / 2,iVar5);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar2 == '\0') goto LAB_049f2f00;
  psVar1 = (string *)(this + 0x138);
  Sexy::Point::Point((Point *)&local_28);
  bVar3 = std::operator==(psVar1,"plant");
  if (bVar3) {
    iVar6 = FUN_049ec7f8(0x7d);
    uVar12 = 0xbe;
LAB_049f3650:
    iVar4 = FUN_049ec7f8(uVar12);
    Sexy::Point::Point((Point *)local_18,iVar6,iVar4);
    local_28 = local_18[0];
  }
  else {
    bVar3 = std::operator==(psVar1,"grow");
    if ((((bVar3) || (bVar3 = std::operator==(psVar1,"grow1"), bVar3)) ||
        (bVar3 = std::operator==(psVar1,"grow2"), bVar3)) ||
       (bVar3 = std::operator==(psVar1,"grow3"), bVar3)) {
      iVar6 = FUN_049ec7f8(0x8c);
      uVar12 = 0xaf;
      goto LAB_049f3650;
    }
  }
  pIVar10 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar6 = (int)local_28;
  pLVar9 = (LotteryResultProgressBar *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar4 = local_28._4_4_;
  this_01 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  iVar7 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Graphics::DrawImage(param_1,pIVar10,iVar6 - iVar5 / 2,iVar4 - iVar7 / 2);
LAB_049f2f00:
  nop();
  iVar6 = FUN_049ec7f8(0x46);
  iVar4 = FUN_049ec7f8(0x20);
  Sexy::Insets::Insets
            ((Insets *)&local_78,*(int *)(this + 0x118),*(int *)(this + 0x11c),iVar6,iVar4);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_78);
  TodStringTranslate(L"[RECHARGEBUNDLE_CAN_OBTAIN]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,(Insets *)local_38,0,1,(Insets *)local_18,0);
  FUN_05476c50((Insets *)local_38);
  if (this[0x170] != (BundleDisplayWidget)0x0) {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
    if (bVar3) {
      iVar6 = FUN_049ec7f8(0x50);
      iVar4 = FUN_049ec7f8(0xf);
      pIVar10 = (Image *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
      Sexy::Graphics::DrawImage(param_1,pIVar10,local_78 + iVar6,local_74 - iVar4);
    }
  }
  iVar6 = FUN_049ec7f8(0x1e);
  iVar4 = FUN_049ec7f8(0x2d);
  iVar5 = FUN_049ec7f8(0xfa);
  iVar7 = FUN_049ec7f8(0x28);
  Sexy::Insets::Insets(aIStack_68,iVar6,iVar4,iVar5,iVar7);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
  ;
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_68);
  FUN_05477b24((Insets *)local_38,this + 0x148);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_PooyanScore_Yellow);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,(Insets *)local_38,0,1,(Insets *)local_18,0);
  FUN_05476c50((Insets *)local_38);
  iVar4 = FUN_049ec7f8(0xa5);
  iVar6 = *(int *)(this + 0x50);
  iVar5 = FUN_049ec7f8(0x36);
  iVar7 = FUN_049ec7f8(0x28);
  iVar8 = FUN_049ec7f8(0x3c);
  Sexy::Insets::Insets((Insets *)local_58,iVar6 - iVar4,iVar5,iVar7,iVar8);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)local_58);
  TodStringTranslate(L"[RECHARGEBUNDLE_VALUE]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,(Insets *)local_38,0,1,(Insets *)local_18,0);
  FUN_05476c50((Insets *)local_38);
  local_58[0] = local_58[0] + local_50;
  local_50 = FUN_049ec7f8(0x82);
  Sexy::StrFormat(L"%d%%",auStack_98,(ulong)*(uint *)(this + 0x130));
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline)
  ;
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)local_58);
  FUN_05477b24((Insets *)local_38,auStack_98);
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,(Insets *)local_38,0,1,(Insets *)local_18,0);
  FUN_05476c50((Insets *)local_38);
  iVar4 = FUN_049ec7f8(0xa5);
  iVar6 = *(int *)(this + 0x50);
  iVar5 = FUN_049ec7f8(0x69);
  iVar7 = FUN_049ec7f8(0x28);
  iVar8 = FUN_049ec7f8(0x32);
  Sexy::Insets::Insets((Insets *)&local_48,iVar6 - iVar4,iVar5,iVar7,iVar8);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_48);
  TodStringTranslate(L"[RECHARGEBUNDLE_ORIGINAL_PRICE]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,(Insets *)local_38,0,2,(Insets *)local_18,0);
  FUN_05476c50((Insets *)local_38);
  local_48 = local_48 + local_40;
  iVar6 = FUN_049ec7f8(10);
  local_44 = local_44 + iVar6;
  local_40 = FUN_049ec7f8(0x5a);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline)
  ;
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_48);
  Sexy::StrFormat(L"%d",(Insets *)local_38,(ulong)*(uint *)(this + 300));
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,(Insets *)local_38,1,2,(Insets *)local_18,0);
  FUN_05476c50((Insets *)local_38);
  local_48 = local_48 + local_40;
  local_44 = FUN_049ec7f8(0x69);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_48);
  TodStringTranslate(L"[GEM_BUY_RMB]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,(Insets *)local_38,0,2,(Insets *)local_18,0);
  FUN_05476c50((Insets *)local_38);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77a90);
  iVar6 = FUN_049ec7f8(0xa5);
  Sexy::Graphics::DrawImage(param_1,pIVar10,*(int *)(this + 0x50) - iVar6,local_44 + local_3c / 2);
  FUN_05478178(auStack_90,&DAT_056f11a8,(Insets *)local_18);
  nop();
  if (*(int *)(this + 0x134) != 0x7fffffff) {
    FUN_05478178((Insets *)&local_28,L"[RECHARGEBUNDLE_BUY_TIMES]",(Insets *)local_38);
    TodReplaceNumberString((wstring *)&local_28,L"{NUMBER}",*(int *)(this + 0x134));
    FUN_054766c8(auStack_90,(Insets *)local_18);
    FUN_05476c50((Insets *)local_18);
    FUN_05476c50((Insets *)&local_28);
    nop();
  }
  iVar4 = FUN_049ec7f8(0x113);
  iVar6 = *(int *)(this + 0x50);
  iVar5 = FUN_049ec7f8(0xde);
  iVar7 = FUN_049ec7f8(0xa0);
  iVar8 = FUN_049ec7f8(0x3c);
  Sexy::Insets::Insets((Insets *)local_38,iVar6 - iVar4,iVar5,iVar7,iVar8);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)local_18,0);
  WriteWordInRect(param_1,auStack_90,(Insets *)local_38,uVar12,(Insets *)local_18,4,0);
  iVar6 = FUN_049ec7f8(10);
  local_38[0] = local_38[0] + local_30 + iVar6;
  lVar13 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)0x3,(float)(*(long *)(this + 0x140) - lVar13),
             (int)(*(long *)(this + 0x140) - lVar13));
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)local_38);
  FUN_05477b24(auStack_80,auStack_88);
  Sexy::Color::Color((Color *)local_18,0);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,auStack_80,0,1,(Insets *)local_18,0);
  FUN_05476c50(auStack_80);
  FUN_05476c50(auStack_88);
  FUN_05476c50(auStack_90);
  FUN_05476c50(auStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BundleDisplayWidget::RechargeBundlePurchased(int) */

void __thiscall BundleDisplayWidget::RechargeBundlePurchased(BundleDisplayWidget *this,int param_1)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  NameMapperBase *this_02;
  long lVar12;
  TGALogMgr *pTVar13;
  OfferBundleConfig *this_03;
  TGARechargeBundleData *__n;
  string *__n_00;
  size_t sVar14;
  uint uVar15;
  undefined8 local_108;
  undefined8 local_100;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_f8 [48];
  TGARechargeBundleData aTStack_c8 [8];
  string asStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  int local_68;
  int local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (*(int *)(this + 0x124) == param_1) {
    iVar7 = *(int *)(this + 0x134);
    if (iVar7 != 0x7fffffff) {
      iVar7 = iVar7 + -1;
      *(int *)(this + 0x134) = iVar7;
    }
    PlayerInfo::SetDisplayingBundleBuyTimes(this_01,*(int *)(this + 0x124),iVar7);
    if (*(int *)(this + 0x134) == 0) {
      (**(code **)(**(long **)(this + 0xe0) + 0x188))(*(long **)(this + 0xe0),1);
    }
    if (this[0x114] == (BundleDisplayWidget)0x0) {
      __n = aTStack_c8;
      TGARechargeBundleData::TGARechargeBundleData(aTStack_c8);
      std::string::append((string *)aTStack_c8,"2",(size_t)__n);
      std::string::append(asStack_c0,"",(size_t)asStack_a8);
      __n_00 = asStack_a0;
      DString::DString((DString *)&local_68,*(int *)(this + 0x124));
      pcVar9 = (char *)DString::c_str((DString *)&local_68);
      std::string::append(asStack_b8,pcVar9,(size_t)__n_00);
      DString::~DString((DString *)&local_68);
      DString::DString((DString *)&local_68,*(int *)(this + 0x128));
      pcVar9 = (char *)DString::c_str((DString *)&local_68);
      std::string::append(asStack_b0,pcVar9,(size_t)__n_00);
      DString::~DString((DString *)&local_68);
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_f8);
      local_108 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x158));
      local_100 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x158));
      while( true ) {
        bVar3 = __gnu_cxx::operator!=
                          ((__normal_iterator *)&local_108,(__normal_iterator *)&local_100);
        uVar15 = (uint)bVar3;
        if (!bVar3) break;
        piVar10 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_108);
        sVar14 = (size_t)(uint)piVar10[1];
        PlayerInfo::AddCommonGachaReward((int)this_01,*piVar10,SUB41(piVar10[1],0),false);
        piVar11 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                         operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                     *)amStack_f8,piVar10);
        *piVar11 = piVar10[1];
        OtherServerNameMapper::GetInstance();
        cVar4 = FUN_049ec384(*piVar10);
        OtherServerNameMapper::GetInstance();
        cVar5 = FUN_049ec374(*piVar10);
        this_02 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        cVar6 = NameMapperBase::ContainsId(this_02,*piVar10);
        if (cVar4 == '\0') {
          if (cVar5 == '\0') {
            if (cVar6 == '\0') {
              Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
              local_64 = *piVar10;
              local_68 = piVar10[1];
              std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                        ((vector<TGABundle,std::allocator<TGABundle>> *)&local_98,
                         (TGABundle *)&local_68);
            }
            else {
              Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
              local_64 = *piVar10;
              local_68 = piVar10[1];
              std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                        ((vector<TGABundle,std::allocator<TGABundle>> *)&local_80,
                         (TGABundle *)&local_68);
            }
          }
          else {
            DString::DString((DString *)&local_68,piVar10[1]);
            pcVar9 = (char *)DString::c_str((DString *)&local_68);
            std::string::append(asStack_a8,pcVar9,sVar14);
            DString::~DString((DString *)&local_68);
          }
        }
        else {
          sVar14 = (size_t)(uint)piVar10[1];
          MessageRouter::Post<int,int>
                    ((MessageRouter *)gMessageRouter,Message::GemsRecharge,piVar10[1]);
          DString::DString((DString *)&local_68,piVar10[1]);
          pcVar9 = (char *)DString::c_str((DString *)&local_68);
          std::string::append(asStack_a0,pcVar9,sVar14);
          DString::~DString((DString *)&local_68);
        }
        __gnu_cxx::
        __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
        ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                      *)&local_108);
      }
      iVar7 = FUN_049ec3a8(local_98,local_90);
      if (0 < (int)(5U - iVar7)) {
        do {
          uVar15 = uVar15 + 1;
          Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
          std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                    ((vector<TGABundle,std::allocator<TGABundle>> *)&local_98,(TGABundle *)&local_68
                    );
        } while (uVar15 != 5U - iVar7);
      }
      iVar7 = 0;
      iVar8 = FUN_049ec3a8(local_80,local_78);
      if (0 < 5 - iVar8) {
        do {
          iVar7 = iVar7 + 1;
          Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_68);
          std::vector<TGABundle,std::allocator<TGABundle>>::push_back
                    ((vector<TGABundle,std::allocator<TGABundle>> *)&local_80,(TGABundle *)&local_68
                    );
        } while (iVar7 != 5 - iVar8);
      }
      GetProductByTypeAndPrice(this,*(int *)(this + 0x120),(float)*(int *)(this + 0x128));
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_100)
      ;
      PlayerInfo::RemoveBundleInPurchase(this_01,(string *)(lVar12 + 0x10),0);
      cVar4 = LawnApp::isOppoNewerOptimizationOpen(gLawnApp);
      if (cVar4 != '\0') {
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
        cVar4 = PlayerInfo::HasOfferedTargetBundle(this_01,(string *)(lVar12 + 0x10));
        if (cVar4 == '\0') {
          this_03 = (OfferBundleConfig *)LawnApp::GetOfferBundleConfig(gLawnApp);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
          iVar7 = OfferBundleConfig::GetBundleOfferGemAmount(this_03,(string *)(lVar12 + 0x10));
          PlayerInfo::AddGems(this_01,iVar7,true);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
          PlayerInfo::OfferTargetBundle(this_01,(string *)(lVar12 + 0x10));
          this[0x170] = (BundleDisplayWidget)0x0;
          puVar1 = gMessageRouter;
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
          FUN_05475d88((DString *)&local_68,lVar12 + 0x10);
          MessageRouter::Post<std::string_const&,std::string>
                    ((MessageRouter *)puVar1,Message::BundleBuy,(DString *)&local_68);
          std::string::~string((string *)&local_68);
        }
      }
      PlayerInfo::saveCurrentProfile(this_01);
      MessageRouter::Post<std::string_const&,int,std::string_const&,char_const*,int,char_const*>
                ((MessageRouter *)gMessageRouter,Message::RechargeBundleLog,"Bundle_Buy",
                 *(int *)(this + 0x124),"");
      pTVar13 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGARechargeBundleData::TGARechargeBundleData((TGARechargeBundleData *)&local_68,aTStack_c8);
      TGALogMgr::LogRechargeBundle(pTVar13,(DString *)&local_68);
      TGARechargeBundleData::~TGARechargeBundleData((TGARechargeBundleData *)&local_68);
      pLVar2 = gLawnApp;
      FUN_05478178((DString *)&local_68,L"[RECHARGE_PACKAGE_REWARD_TITLE]",
                   (__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_108);
      LawnApp::ShowServerBoxOpenUI(pLVar2,amStack_f8,(DString *)&local_68);
      FUN_05476c50((DString *)&local_68);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_100);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_f8)
      ;
      TGARechargeBundleData::~TGARechargeBundleData(aTStack_c8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


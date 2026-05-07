// Class: EventBundleDisplayWidget


/* EventBundleDisplayWidget::~EventBundleDisplayWidget() */

void __thiscall EventBundleDisplayWidget::~EventBundleDisplayWidget(EventBundleDisplayWidget *this)

{
  *(undefined **)(this + 0xd8) = &DAT_0692c758;
  *(undefined ***)this = &PTR_GetClass_0692c420;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x188);
  FUN_05476c50(this + 0x180);
  BundleDisplayWidget::~BundleDisplayWidget((BundleDisplayWidget *)this);
  return;
}


/* EventBundleDisplayWidget::~EventBundleDisplayWidget() */

void __thiscall EventBundleDisplayWidget::~EventBundleDisplayWidget(EventBundleDisplayWidget *this)

{
  ~EventBundleDisplayWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventBundleDisplayWidget::EventBundleDisplayWidget(BundleUIDetail const&) */

void __thiscall
EventBundleDisplayWidget::EventBundleDisplayWidget
          (EventBundleDisplayWidget *this,BundleUIDetail *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  PVZ2UIButton *pPVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  wstring awStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BundleDisplayWidget::BundleDisplayWidget((BundleDisplayWidget *)this,param_1);
  *(undefined ***)this = &PTR_GetClass_0692c420;
  *(undefined **)(this + 0xd8) = &DAT_0692c758;
  FUN_05476574(this + 0x180);
  FUN_05476574(this + 0x188);
  FUN_05478178(awStack_40,L"[PLANTTRIAL_BUY_BUTTON_NAME_1]",auStack_80);
  TodReplaceNumberString(awStack_40,L"{NUMBER}",*(int *)(this + 0x128));
  FUN_054766c8(this + 0x180,awStack_78);
  FUN_05476c50(awStack_78);
  FUN_05476c50(awStack_40);
  nop();
  Sexy::WidgetContainer::RemoveWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 0x18))();
  }
  FUN_05478178(awStack_78,L"[SALES_SECOND_CONFIRM_BUY]",auStack_80);
  Sexy::Color::Color((Color *)awStack_40,1);
  pPVar5 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar5,0,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)awStack_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar5;
  FUN_05476c50(awStack_78);
  nop();
  plVar7 = *(long **)(this + 0xe0);
  pcVar8 = *(code **)(*plVar7 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  (*pcVar8)(plVar7,uVar6);
  pPVar5 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b777c8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_40,&DAT_06b77a10,3);
  PVZ2UIButton::SetDialogStates(pPVar5,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)awStack_40);
  plVar7 = *(long **)(this + 0xe0);
  uVar1 = FUN_049ec7f8(0x212);
  uVar2 = FUN_049ec7f8(200);
  uVar3 = FUN_049ec7f8(0x96);
  uVar4 = FUN_049ec7f8(0x41);
  (**(code **)(*plVar7 + 0x198))(plVar7,uVar1,uVar2,uVar3,uVar4);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventBundleDisplayWidget::RefreshUI(std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >
   const&) */

void __thiscall EventBundleDisplayWidget::RefreshUI(EventBundleDisplayWidget *this,vector *param_1)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  vector<BundleDescWidget*,std::allocator<BundleDescWidget*>> *this_01;
  vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *this_02;
  string *psVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  PVZ2UIButton *pPVar11;
  undefined8 uVar12;
  BundleDescWidget *pBVar13;
  uint *puVar14;
  BundlePieceWidget *this_03;
  NameMapperBase *pNVar15;
  string *psVar16;
  long lVar17;
  string *extraout_x1;
  string *extraout_x1_00;
  long *plVar18;
  code *pcVar19;
  int iVar20;
  undefined1 auVar21 [12];
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  string asStack_98 [8];
  wstring awStack_90 [8];
  string asStack_88 [8];
  wstring awStack_80 [8];
  BundleDescWidget *local_78 [7];
  BundleDescWidget *local_40 [7];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x108);
  this_01 = (vector<BundleDescWidget*,std::allocator<BundleDescWidget*>> *)(this + 0xe8);
  this_02 = (vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x158);
  iVar20 = 0;
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)(this + 0x138);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=(this_02,param_1);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_40);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  std::vector<BundleDescWidget*,std::allocator<BundleDescWidget*>>::clear(this_01);
  FUN_05478178((string *)local_78,L"[SALES_SECOND_CONFIRM_BUY]",awStack_80);
  Sexy::Color::Color((Color *)local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,0,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0xe0) = pPVar11;
  FUN_05476c50((string *)local_78);
  nop();
  plVar18 = *(long **)(this + 0xe0);
  pcVar19 = *(code **)(*plVar18 + 800);
  uVar12 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  (*pcVar19)(plVar18,uVar12);
  pPVar11 = *(PVZ2UIButton **)(this + 0xe0);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b777c8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b77a10,3);
  PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
  plVar18 = *(long **)(this + 0xe0);
  uVar5 = FUN_049ec7f8(0x212);
  uVar6 = FUN_049ec7f8(200);
  uVar7 = FUN_049ec7f8(0x96);
  uVar8 = FUN_049ec7f8(0x41);
  (**(code **)(*plVar18 + 0x198))(plVar18,uVar5,uVar6,uVar7,uVar8);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xe0));
  iVar9 = FUN_049ec7f8(0x33);
  iVar10 = FUN_049ec7f8(0x70);
  Sexy::Point::Point((Point *)&local_b0,iVar9,iVar10);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_02);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_02);
  do {
    bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0);
    if (!bVar4) {
      bVar4 = std::operator==(psVar1,"family");
      if (bVar4) {
        FUN_05478178((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_40,
                     L"[RECHARGEBUNDLE_FAMILY_TOTAL]",(string *)local_78);
        TodReplaceNumberString((wstring *)local_40,L"{NUMBER}",iVar20);
        FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_40);
        nop();
        std::string::string((string *)local_40,"plant_piece");
        pBVar13 = ::operator_new(0xe8);
        BundleDescWidget::BundleDescWidget(pBVar13,(string *)local_40,awStack_80,4);
        local_78[0] = pBVar13;
        std::string::~string((string *)local_40);
        nop();
        (**(code **)(*(long *)this + 0x60))(this,local_78[0]);
        std::vector<BundleDescWidget*,std::allocator<BundleDescWidget*>>::push_back
                  (this_01,local_78);
        FUN_05476c50(awStack_80);
      }
      else {
        bVar4 = std::operator==(psVar1,"nutrient");
        if (bVar4) {
          FUN_05478178((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_40,
                       L"[RECHARGEBUNDLE_NUTRIENT_TOTAL]",awStack_80);
          TodReplaceNumberString((wstring *)local_40,L"{NUMBER}",iVar20);
          FUN_05476c50((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_40);
          nop();
          pBVar13 = ::operator_new(0xe8);
          BundleDescWidget::BundleDescWidget(pBVar13,psVar1,(wstring *)local_78,0);
          local_40[0] = pBVar13;
          (**(code **)(*(long *)this + 0x60))(this,pBVar13);
          std::vector<BundleDescWidget*,std::allocator<BundleDescWidget*>>::push_back
                    (this_01,local_40);
          FUN_05476c50((string *)local_78);
        }
      }
      (**(code **)(*(long *)this + 0x198))
                (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),
                 *(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    auVar21 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    puVar14 = auVar21._0_8_;
    NetworkHelper::getObjectTypeStringByActId((NetworkHelper *)(ulong)*puVar14,auVar21._8_4_);
    BundleDisplayWidget::getDescriptionById((int)this,*puVar14);
    bVar4 = std::operator==(psVar1,"family");
    if ((bVar4) && (bVar4 = std::operator==(asStack_98,"plant_piece"), bVar4)) {
      uVar2 = puVar14[1];
      iVar9 = PlantChipNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar9);
      this_03 = ::operator_new(0x138);
      BundlePieceWidget::BundlePieceWidget(this_03,psVar1,(string *)local_40,(int *)(puVar14 + 1));
      uVar5 = local_ac;
      iVar9 = local_b0;
      uVar6 = FUN_049ec7f8(0x56);
      uVar7 = FUN_049ec7f8(100);
      (**(code **)(*(long *)this_03 + 0x198))(this_03,iVar9,uVar5,uVar6,uVar7);
      lVar17 = *(long *)this;
LAB_049f020c:
      iVar20 = iVar20 + uVar2;
      (**(code **)(lVar17 + 0x60))(this,this_03);
      iVar9 = FUN_049ec7f8(0x56);
      local_b0 = local_b0 + iVar9;
      std::string::~string((string *)local_40);
      bVar4 = std::operator==(psVar1,"plant");
      if (bVar4) goto LAB_049f0070;
LAB_049f024c:
      bVar4 = std::operator==(psVar1,"grow");
      if ((((bVar4) || (bVar4 = std::operator==(psVar1,"grow1"), bVar4)) ||
          (bVar4 = std::operator==(psVar1,"grow2"), bVar4)) ||
         (bVar4 = std::operator==(psVar1,"grow3"), bVar4)) goto LAB_049f0070;
    }
    else {
      bVar4 = std::operator==(psVar1,"nutrient");
      if ((bVar4) && (bVar4 = std::operator==(asStack_98,"material"), bVar4)) {
        uVar2 = puVar14[1];
        iVar9 = MaterialItemMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar9);
        this_03 = ::operator_new(0x138);
        BundlePieceWidget::BundlePieceWidget(this_03,psVar1,(string *)local_40,(int *)(puVar14 + 1))
        ;
        uVar5 = local_ac;
        iVar9 = local_b0;
        uVar6 = FUN_049ec7f8(0x56);
        uVar7 = FUN_049ec7f8(100);
        (**(code **)(*(long *)this_03 + 0x198))(this_03,iVar9,uVar5,uVar6,uVar7);
        lVar17 = *(long *)this;
        goto LAB_049f020c;
      }
      Set8BytesTo0((string *)local_78);
      bVar4 = std::operator==(asStack_98,"plant_piece");
      if (bVar4) {
        iVar9 = PlantChipNameMapperServerID::GetInstance();
LAB_049effe4:
        NameMapperBase::GetNameForId(iVar9);
        FUN_05474278((string *)local_78,
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_40);
        std::string::~string((string *)local_40);
      }
      else {
        bVar4 = std::operator==(asStack_98,"plant");
        if (bVar4) {
          iVar9 = PlantNameMapperServerID::GetInstance();
          goto LAB_049effe4;
        }
      }
      iVar9 = 0;
      cVar3 = FUN_0547419c((string *)local_78);
      if (cVar3 == '\0') {
        psVar16 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar16);
        lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_40)
        ;
        iVar9 = *(int *)(lVar17 + 0xd0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
      }
      pBVar13 = ::operator_new(0xe8);
      BundleDescWidget::BundleDescWidget(pBVar13,asStack_98,awStack_90,iVar9);
      local_40[0] = pBVar13;
      (**(code **)(*(long *)this + 0x60))(this,pBVar13);
      std::vector<BundleDescWidget*,std::allocator<BundleDescWidget*>>::push_back(this_01,local_40);
      std::string::~string((string *)local_78);
      bVar4 = std::operator==(psVar1,"plant");
      if (!bVar4) goto LAB_049f024c;
LAB_049f0070:
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
      if (cVar3 == '\0') {
        std::string::string(asStack_88,"");
        nop();
        pNVar15 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        cVar3 = NameMapperBase::ContainsId(pNVar15,*puVar14);
        if (cVar3 == '\0') {
          pNVar15 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
          cVar3 = NameMapperBase::ContainsId(pNVar15,*puVar14);
          if (cVar3 != '\0') {
            iVar9 = PlantChipNameMapperServerID::GetInstance();
            goto LAB_049f04a4;
          }
          cVar3 = FUN_0547419c(asStack_88);
          psVar16 = extraout_x1;
        }
        else {
          iVar9 = PlantNameMapperServerID::GetInstance();
LAB_049f04a4:
          NameMapperBase::GetNameForId(iVar9);
          FUN_05474278(asStack_88,
                       (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_40);
          std::string::~string((string *)local_40);
          cVar3 = FUN_0547419c(asStack_88);
          psVar16 = extraout_x1_00;
        }
        if (cVar3 == '\0') {
          Sexy::StringToUpper((Sexy *)asStack_88,psVar16);
          std::operator+((string *)&PlantHeadshot::PlantBigPrefix,(string *)awStack_80);
          GetImageByName((string *)local_78);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40)
          ;
          std::string::~string((string *)local_78);
          std::string::~string((string *)awStack_80);
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
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventBundleDisplayWidget::Draw(Sexy::Graphics*) */

void __thiscall EventBundleDisplayWidget::Draw(EventBundleDisplayWidget *this,Graphics *param_1)

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
  SalesProgressBar *this_01;
  undefined1 auStack_b0 [8];
  wstring awStack_a8 [8];
  undefined1 auStack_a0 [8];
  Insets aIStack_98 [16];
  Insets aIStack_88 [16];
  Insets aIStack_78 [8];
  int local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  undefined8 local_28;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtMixedPtrBase *)(this + 0x108);
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
  if (cVar2 == '\0') goto LAB_049f3828;
  psVar1 = (string *)(this + 0x138);
  Sexy::Point::Point((Point *)&local_28);
  bVar3 = std::operator==(psVar1,"plant");
  if (bVar3) {
    iVar6 = FUN_049ec7f8(0x7d);
    uVar12 = 0xbe;
LAB_049f4298:
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
      goto LAB_049f4298;
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
LAB_049f3828:
  nop();
  iVar6 = FUN_049ec7f8(0x46);
  iVar4 = FUN_049ec7f8(0x20);
  Sexy::Insets::Insets(aIStack_98,*(int *)(this + 0x118),*(int *)(this + 0x11c),iVar6,iVar4);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_98);
  TodStringTranslate(L"[RECHARGEBUNDLE_CAN_OBTAIN]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,aIStack_38,0,1,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar6 = FUN_049ec7f8(0x1e);
  iVar4 = FUN_049ec7f8(0x2d);
  iVar5 = FUN_049ec7f8(0xfa);
  iVar7 = FUN_049ec7f8(0x28);
  Sexy::Insets::Insets(aIStack_88,iVar6,iVar4,iVar5,iVar7);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline)
  ;
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_88);
  FUN_05477b24(aIStack_38,this + 0x148);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)&PrimeText_Game::Color_PooyanScore_Yellow);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,aIStack_38,0,1,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar4 = FUN_049ec7f8(0xa5);
  iVar6 = *(int *)(this + 0x50);
  iVar5 = FUN_049ec7f8(0x36);
  iVar7 = FUN_049ec7f8(0x28);
  iVar8 = FUN_049ec7f8(0x3c);
  Sexy::Insets::Insets(aIStack_78,iVar6 - iVar4,iVar5,iVar7,iVar8);
  iVar6 = FUN_049ec7f8(0x82);
  local_70 = local_70 + iVar6;
  TodStringTranslate(L"[RECHARGEBUNDLE_DISCOUNT]");
  iVar6 = 0;
  if (*(int *)(this + 300) != 0) {
    iVar6 = (*(int *)(this + 0x128) * 10) / *(int *)(this + 300);
  }
  TodReplaceNumberString((wstring *)local_18,L"{DISCOUNT}",iVar6);
  FUN_05476c50((Insets *)local_18);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_78);
  FUN_05477b24(aIStack_38,auStack_b0);
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,aIStack_38,0,1,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar4 = FUN_049ec7f8(0xa5);
  iVar6 = *(int *)(this + 0x50);
  iVar5 = FUN_049ec7f8(0x69);
  iVar7 = FUN_049ec7f8(0x28);
  iVar8 = FUN_049ec7f8(0x32);
  Sexy::Insets::Insets((Insets *)&local_68,iVar6 - iVar4,iVar5,iVar7,iVar8);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_68);
  TodStringTranslate(L"[RECHARGEBUNDLE_ORIGINAL_PRICE]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  local_68 = local_68 + local_60;
  iVar6 = FUN_049ec7f8(10);
  local_64 = local_64 + iVar6;
  local_60 = FUN_049ec7f8(0x5a);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline)
  ;
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_68);
  Sexy::StrFormat(L"%d",aIStack_38,(ulong)*(uint *)(this + 300));
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,aIStack_38,1,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  local_68 = local_68 + local_60;
  local_64 = FUN_049ec7f8(0x69);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_68);
  TodStringTranslate(L"[GEM_BUY_RMB]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar4 = FUN_049ec7f8(0xa5);
  iVar6 = *(int *)(this + 0x50);
  iVar5 = FUN_049ec7f8(0x78);
  iVar7 = FUN_049ec7f8(0x3c);
  iVar8 = FUN_049ec7f8(0x4b);
  Sexy::Insets::Insets((Insets *)&local_58,iVar6 - iVar4,iVar5,iVar7,iVar8);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_58);
  TodStringTranslate(L"[RECHARGEBUNDLE_REAL_PRICE]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar6 = FUN_049ec7f8(10);
  local_58 = local_58 + (local_50 - iVar6);
  iVar6 = FUN_049ec7f8(10);
  local_54 = local_54 + iVar6;
  local_50 = FUN_049ec7f8(0x5a);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline)
  ;
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_58);
  Sexy::StrFormat(L"%d",aIStack_38,(ulong)*(uint *)(this + 0x128));
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,aIStack_38,1,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar6 = local_50;
  iVar4 = FUN_049ec7f8(10);
  local_58 = local_58 + (iVar6 - iVar4);
  iVar6 = FUN_049ec7f8(0x78);
  local_54 = FUN_049ec7f8(5);
  local_54 = iVar6 - local_54;
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Insets::Insets((Insets *)&local_28,(Insets *)&local_58);
  TodStringTranslate(L"[GEM_BUY_RMB]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b77a90);
  iVar6 = FUN_049ec7f8(0xa5);
  Sexy::Graphics::DrawImage(param_1,pIVar10,*(int *)(this + 0x50) - iVar6,local_64 + local_5c / 2);
  iVar6 = FUN_049ec7f8(0xbe);
  iVar4 = FUN_049ec7f8(300);
  iVar5 = FUN_049ec7f8(0x28);
  Sexy::Insets::Insets(aIStack_48,*(int *)(this + 0x118),iVar6,iVar4,iVar5);
  TodStringTranslate(L"[RECHARGEBUNDLE_LIMIT_TIME]");
  FUN_05478178((Insets *)local_18,&DAT_0573a5a8,aIStack_38);
  TodReplaceString((wstring *)&local_28,L"——",(wstring *)local_18);
  FUN_05476c50((Insets *)local_18);
  nop();
  FUN_05476c50((Insets *)&local_28);
  FUN_05478178((Insets *)&local_28,&DAT_0573a608,aIStack_38);
  TodReplaceString(awStack_a8,L"：",(wstring *)&local_28);
  FUN_054766c8(awStack_a8,(Insets *)local_18);
  FUN_05476c50((Insets *)local_18);
  FUN_05476c50((Insets *)&local_28);
  nop();
  FUN_05478178((Insets *)&local_28,&DAT_0573a608,aIStack_38);
  TodReplaceString(awStack_a8,L"：",(wstring *)&local_28);
  FUN_054766c8(awStack_a8,(Insets *)local_18);
  FUN_05476c50((Insets *)local_18);
  FUN_05476c50((Insets *)&local_28);
  nop();
  FUN_05478178((Insets *)&local_28,&DAT_0573a618,aIStack_38);
  TodReplaceString(awStack_a8,L" 12",(wstring *)&local_28);
  FUN_054766c8(awStack_a8,(Insets *)local_18);
  FUN_05476c50((Insets *)local_18);
  FUN_05476c50((Insets *)&local_28);
  nop();
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_48);
  FUN_05477b24(aIStack_38,awStack_a8);
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,aIStack_38,0,2,(Insets *)local_18,0);
  FUN_05476c50(aIStack_38);
  iVar6 = FUN_049ec7f8(0xbe);
  iVar4 = FUN_049ec7f8(0x28);
  iVar5 = FUN_049ec7f8(200);
  iVar7 = FUN_049ec7f8(0x1a);
  Sexy::Insets::Insets(aIStack_38,*(int *)(this + 0x118),iVar6 + iVar4,iVar5,iVar7);
  pPVar11 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)&local_28,aIStack_38);
  TodStringTranslate(L"[RECHARGEBUNDLE_EVENT_TIPS]");
  Sexy::Color::Color((Color *)local_18,1);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar11,param_1,(Insets *)&local_28,auStack_a0,0,2,(Insets *)local_18,0);
  FUN_05476c50(auStack_a0);
  FUN_05476c50(awStack_a8);
  FUN_05476c50(auStack_b0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EventBundleDisplayWidget::RechargeBundlePurchased(int) */

void __thiscall
EventBundleDisplayWidget::RechargeBundlePurchased(EventBundleDisplayWidget *this,int param_1)

{
  ActivityManager *this_00;
  
  BundleDisplayWidget::RechargeBundlePurchased((BundleDisplayWidget *)this,param_1);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2983,false,0);
  return;
}


// Class: UINewPlayerSignPreview


/* UINewPlayerSignPreview::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewPlayerSignPreview::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPlayerSignPreview::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINewPlayerSignPreview::ScrollTargetReached(UINewPlayerSignPreview *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewPlayerSignPreview::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewPlayerSignPreview::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPlayerSignPreview::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UINewPlayerSignPreview::ScrollTargetInterrupted(UINewPlayerSignPreview *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerSignPreview::GetLayoutName() */

void __thiscall UINewPlayerSignPreview::GetLayoutName(UINewPlayerSignPreview *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPlayerSignPreview");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPlayerSignPreview::OnClose() */

void __thiscall UINewPlayerSignPreview::OnClose(UINewPlayerSignPreview *this)

{
  (**(code **)(*(long *)this + 0x80))(this,1,0);
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 0x18))();
    *(undefined8 *)(this + 0x158) = 0;
  }
  if (*(long **)(this + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x160) + 0x18))();
    *(undefined8 *)(this + 0x160) = 0;
  }
  UI::Dialog::OnClose((Dialog *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerSignPreview::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
UINewPlayerSignPreview::DrawAll(UINewPlayerSignPreview *this,ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  PlantType *this_00;
  long lVar7;
  float fVar8;
  float fVar9;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TenYearRecordInfoPage::DrawAll((TenYearRecordInfoPage *)this,param_1,param_2);
  if (*(long *)(this + 0x158) == 0) goto LAB_03448288;
  std::string::string(asStack_18,"UIImage_PlantBG");
  plVar5 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*plVar5 + 0xd0))(&local_30,plVar5);
  iVar4 = local_30;
  iVar2 = FUN_03447a18(0x41);
  iVar3 = local_2c;
  iVar4 = iVar4 - iVar2;
  iVar2 = FUN_03447a18(0);
  iVar3 = iVar3 + iVar2;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x148));
  if (bVar1) {
    this_00 = (PlantType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
    lVar7 = PlantType::GetProps(this_00);
    if (lVar7 == 0) goto LAB_034481e0;
    fVar8 = (float)FUN_03447a2c(*(undefined4 *)(lVar7 + 0x2a8));
    iVar4 = (int)(fVar8 + (float)iVar4);
    fVar9 = (float)FUN_03447a2c(*(undefined4 *)(lVar7 + 0x2ac));
    fVar8 = *(float *)(lVar7 + 0x2a4) * 1.7;
    iVar3 = (int)(fVar9 + (float)iVar3);
  }
  else {
LAB_034481e0:
    fVar8 = 1.7;
  }
  UIUtil::DrawPopAnim(param_2,*(PopAnimRig **)(this + 0x158),iVar4,iVar3,fVar8,0.0,0.0);
  iVar3 = FUN_03447a18(0x11);
  iVar4 = FUN_03447a18(200);
  iVar2 = FUN_03447a18(0x23);
  Sexy::Insets::Insets(aIStack_28,local_30,local_2c + iVar3,iVar4,iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)asStack_18,1);
  WriteWordInRect(param_2,this + 0x150,aIStack_28,uVar6,asStack_18,5,1);
LAB_03448288:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UINewPlayerSignPreview::ButtonDepress(int) */

void __thiscall UINewPlayerSignPreview::ButtonDepress(UINewPlayerSignPreview *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UINewPlayerSignPreview>::CloseDialog();
  return;
}


/* non-virtual thunk to UINewPlayerSignPreview::ButtonDepress(int) */

void __thiscall UINewPlayerSignPreview::ButtonDepress(UINewPlayerSignPreview *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerSignPreview::SwitchPlant(int, int) */

void __thiscall
UINewPlayerSignPreview::SwitchPlant(UINewPlayerSignPreview *this,int param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  PlantNameMapperServerID *this_00;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  wstring awStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(this + 0x168);
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_034469b0(uVar6,*(undefined8 *)(this + 0x170));
  if (lVar1 != 0) {
    do {
      plVar2 = (long *)FUN_034469bc(uVar6,uVar5);
      if (*(int *)(*plVar2 + 0xd4) == param_1) {
        this_00 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
        PlantNameMapperServerID::GetTypeForID(this_00,param_2);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x148),(RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        auVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
        Sexy::StringToUpper((Sexy *)(auVar7._0_8_ + 8),auVar7._8_8_);
        std::operator+("[",asStack_30);
        std::operator+(asStack_28,"]");
        Sexy::ToWString(asStack_20);
        TodStringTranslate(awStack_18);
        FUN_054766c8(this + 0x150,aRStack_10);
        FUN_05476c50(aRStack_10);
        FUN_05476c50(awStack_18);
        std::string::~string(asStack_20);
        std::string::~string(asStack_28);
        std::string::~string(asStack_30);
        puVar3 = (undefined8 *)FUN_034469c4(*(undefined8 *)(this + 0x180),uVar5);
        (**(code **)(*(long *)*puVar3 + 0x158))((long *)*puVar3,1);
      }
      else {
        puVar3 = (undefined8 *)FUN_034469c4(*(undefined8 *)(this + 0x180),uVar5);
        (**(code **)(*(long *)*puVar3 + 0x158))((long *)*puVar3,0);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(this + 0x168);
      uVar4 = FUN_034469b0(uVar6,*(undefined8 *)(this + 0x170));
    } while (uVar5 < uVar4);
  }
  this[0x140] = (UINewPlayerSignPreview)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerSignPreview::Update() */

void __thiscall UINewPlayerSignPreview::Update(UINewPlayerSignPreview *this)

{
  PopAnimRig *this_00;
  string *psVar1;
  float fVar2;
  float fVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (this[0x140] == (UINewPlayerSignPreview)0x0) {
LAB_0344888c:
    this_00 = *(PopAnimRig **)(this + 0x158);
    if (this_00 == (PopAnimRig *)0x0) goto LAB_034488b4;
  }
  else {
    this[0x140] = (UINewPlayerSignPreview)0x0;
    if (*(long **)(this + 0x158) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x158) + 0x18))();
      *(undefined8 *)(this + 0x158) = 0;
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x148));
    this_00 = (PopAnimRig *)CreateStandalonePlantAnimRig(aRStack_10,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(*(long *)this_00 + 0x1a0))(this_00,0);
    psVar1 = *(string **)(this + 0x160);
    *(PopAnimRig **)(this + 0x158) = this_00;
    if (psVar1 != (string *)0x0) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
      PlantDisplayBoard::SetPlantName(psVar1);
      PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(this + 0x160));
      goto LAB_0344888c;
    }
  }
  fVar2 = (float)PVZ_RealT();
  fVar3 = (float)PVZ_RealDt();
  PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
LAB_034488b4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UINewPlayerSignPreview::UINewPlayerSignPreview() */

void __thiscall UINewPlayerSignPreview::UINewPlayerSignPreview(UINewPlayerSignPreview *this)

{
  UISingletonDialog<UINewPlayerSignPreview>::UISingletonDialog
            ((UISingletonDialog<UINewPlayerSignPreview> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  this[0x140] = (UINewPlayerSignPreview)0x0;
  *(undefined ***)this = &PTR_GetClass_06632490;
  *(undefined **)(this + 0xd8) = &DAT_066327f0;
  *(undefined ***)(this + 0x138) = &PTR__UINewPlayerSignPreview_06632838;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x148));
  FUN_05476574(this + 0x150);
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  return;
}


/* UINewPlayerSignPreview::~UINewPlayerSignPreview() */

void __thiscall UINewPlayerSignPreview::~UINewPlayerSignPreview(UINewPlayerSignPreview *this)

{
  *(undefined ***)this = &PTR_GetClass_06632490;
  *(undefined **)(this + 0xd8) = &DAT_066327f0;
  *(undefined ***)(this + 0x138) = &PTR__UINewPlayerSignPreview_06632838;
  std::vector<UIWidgetImage*,std::allocator<UIWidgetImage*>>::~vector
            ((vector<UIWidgetImage*,std::allocator<UIWidgetImage*>> *)(this + 0x180));
  std::vector<QuickButton*,std::allocator<QuickButton*>>::~vector
            ((vector<QuickButton*,std::allocator<QuickButton*>> *)(this + 0x168));
  FUN_05476c50(this + 0x150);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x148));
  UISingletonDialog<UINewPlayerSignPreview>::~UISingletonDialog
            ((UISingletonDialog<UINewPlayerSignPreview> *)this);
  return;
}


/* non-virtual thunk to UINewPlayerSignPreview::~UINewPlayerSignPreview() */

void __thiscall UINewPlayerSignPreview::~UINewPlayerSignPreview(UINewPlayerSignPreview *this)

{
  ~UINewPlayerSignPreview(this + -0x138);
  return;
}


/* UINewPlayerSignPreview::~UINewPlayerSignPreview() */

void __thiscall UINewPlayerSignPreview::~UINewPlayerSignPreview(UINewPlayerSignPreview *this)

{
  ~UINewPlayerSignPreview(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPlayerSignPreview::~UINewPlayerSignPreview() */

void __thiscall UINewPlayerSignPreview::~UINewPlayerSignPreview(UINewPlayerSignPreview *this)

{
  ~UINewPlayerSignPreview(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerSignPreview::FillPlantList(NewPlayerSignData) */

void UINewPlayerSignPreview::FillPlantList
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               undefined8 param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  NameMapperBase *pNVar5;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_3 + 0x18));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_3 + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_28 = *piVar4;
    pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsId(pNVar5,local_28);
    if (cVar2 == '\0') {
      pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      cVar2 = NameMapperBase::ContainsId(pNVar5,local_28);
      if (cVar2 != '\0') {
        iVar3 = PlantChipNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar3);
        pNVar5 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        local_24 = NameMapperBase::GetIdForName(pNVar5,asStack_10);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_1,&local_24);
        std::string::~string(asStack_10);
      }
    }
    else {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_1,&local_28);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerSignPreview::InitView(std::vector<int, std::allocator<int> > const&) */

void __thiscall UINewPlayerSignPreview::InitView(UINewPlayerSignPreview *this,vector *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  uint *puVar8;
  QuickButton *pQVar9;
  Image *pIVar10;
  ulong uVar11;
  string *psVar12;
  UIWidgetImage *pUVar13;
  int *piVar14;
  string *extraout_x1;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong unaff_x28;
  undefined1 auStack_80 [8];
  Sexy aSStack_78 [8];
  QuickButton *local_70;
  UIWidgetImage *local_68;
  function<bool(Sexy::Touch_const&)> afStack_60 [32];
  undefined4 local_40;
  undefined4 local_3c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)param_1);
  if (cVar2 == '\0') {
    std::string::string((string *)&local_40,"Widget_ItemList");
    plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_40);
    std::string::~string((string *)&local_40);
    nop();
    iVar5 = *(int *)((long)plVar7 + 0x54);
    uVar17 = 0;
    while( true ) {
      uVar15 = *(undefined8 *)param_1;
      uVar11 = FUN_0344677c(uVar15,*(undefined8 *)(param_1 + 8));
      if (uVar11 <= uVar17) break;
      puVar8 = (uint *)FUN_03446788(uVar15,uVar17);
      uVar1 = *puVar8;
      iVar6 = PlantNameMapperServerID::GetInstance();
      unaff_x28 = unaff_x28 & 0xffffffff00000000 | (ulong)uVar1;
      FUN_03446788(*(undefined8 *)param_1,uVar17);
      NameMapperBase::GetNameForId(iVar6);
      FUN_05478178((string *)&local_68,&DAT_056f11a8,auStack_80);
      Sexy::Color::Color((Color *)&local_40,1);
      pQVar9 = ::operator_new(800);
      QuickButton::QuickButton
                (pQVar9,(int)uVar17,(ButtonListener *)0x0,(wstring *)&local_68,(Color *)&local_40);
      local_70 = pQVar9;
      FUN_05476c50((string *)&local_68);
      nop();
      pQVar9 = local_70;
      iVar6 = FUN_03447a18(10);
      (**(code **)(*(long *)pQVar9 + 0x198))(pQVar9,(iVar6 + iVar5) * (int)uVar17,0,iVar5,iVar5);
      pQVar9 = local_70;
      FUN_034479bc(afStack_60,this,unaff_x28);
      QuickButton::SetDepressFunction(pQVar9,afStack_60);
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_60);
      (**(code **)(*plVar7 + 0x60))(plVar7,local_70);
      std::vector<QuickButton*,std::allocator<QuickButton*>>::push_back
                ((vector<QuickButton*,std::allocator<QuickButton*>> *)(this + 0x168),&local_70);
      pUVar13 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar13);
      (**(code **)(*(long *)pUVar13 + 0x198))(pUVar13,0,0,iVar5,iVar5);
      std::string::string((string *)&local_40,"IMAGE_UI_DIALOG_ASSET_FRAME_TOOL");
      UIWidgetImage::SetImage(pUVar13,(string *)&local_40);
      std::string::~string((string *)&local_40);
      nop();
      local_40 = 5;
      UIWidgetImage::SetImageType(pUVar13,(string *)&local_40,0.0);
      pUVar13[0x6d] = (UIWidgetImage)0x0;
      (**(code **)(*(long *)local_70 + 0x60))(local_70,pUVar13);
      pUVar13 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar13);
      uVar3 = FUN_03447a18(5);
      iVar6 = FUN_03447a18(10);
      (**(code **)(*(long *)pUVar13 + 0x198))(pUVar13,uVar3,uVar3,iVar5 - iVar6,iVar5 - iVar6);
      Sexy::StringToUpper(aSStack_78,extraout_x1);
      std::operator+("IMAGE_UI_HEADSHOT_BIGPLANT_",(string *)&local_68);
      pIVar10 = (Image *)StringHelper::ToImage((string *)&local_40,false);
      UIWidgetImage::SetImage(pUVar13,pIVar10);
      std::string::~string((string *)&local_40);
      std::string::~string((string *)&local_68);
      local_40 = 9;
      UIWidgetImage::SetImageType(pUVar13,(string *)&local_40,0.0);
      pUVar13[0x6d] = (UIWidgetImage)0x0;
      (**(code **)(*(long *)local_70 + 0x60))(local_70,pUVar13);
      pUVar13 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(pUVar13);
      local_68 = pUVar13;
      iVar6 = FUN_03447a18(5);
      iVar4 = FUN_03447a18(10);
      (**(code **)(*(long *)pUVar13 + 0x198))(pUVar13,-iVar6,-iVar6,iVar4 + iVar5,iVar4 + iVar5);
      pUVar13 = local_68;
      PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06aa0ad0,2);
      UIWidgetImage::SetImage(pUVar13,(PVZ2UIImage *)&local_40);
      local_68[0x6d] = (UIWidgetImage)0x0;
      (**(code **)(*(long *)local_68 + 0x158))(local_68);
      (**(code **)(*(long *)local_70 + 0x60))(local_70,local_68);
      std::vector<UIWidgetImage*,std::allocator<UIWidgetImage*>>::push_back
                ((vector<UIWidgetImage*,std::allocator<UIWidgetImage*>> *)(this + 0x180),&local_68);
      std::string::~string((string *)aSStack_78);
      uVar17 = uVar17 + 1;
    }
    iVar5 = PlantNameMapperServerID::GetInstance();
    FUN_03446788(*(undefined8 *)param_1,0);
    NameMapperBase::GetNameForId(iVar5);
    psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)&local_68);
    plVar7 = (long *)CreateStandalonePlantAnimRig((string *)&local_40,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    (**(code **)(*plVar7 + 0x1a0))(plVar7,0);
    *(long **)(this + 0x158) = plVar7;
    std::string::string((string *)&local_40,"UIImage_Display");
    pUVar13 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_40);
    std::string::~string((string *)&local_40);
    nop();
    psVar12 = ::operator_new(0x178);
    PlantDisplayBoard::PlantDisplayBoard((PlantDisplayBoard *)psVar12,1,0);
    *(string **)(this + 0x160) = psVar12;
    PlantDisplayBoard::SetPlantName(psVar12);
    plVar7 = *(long **)(this + 0x160);
    iVar5 = FUN_03447a18(0x96);
    (**(code **)(*plVar7 + 0x198))
              (plVar7,-iVar5,-iVar5,*(undefined4 *)(pUVar13 + 0x50),*(undefined4 *)(pUVar13 + 0x54))
    ;
    PlantDisplayBoard::DisplayNexyAction(*(PlantDisplayBoard **)(this + 0x160));
    uVar15 = *(undefined8 *)(this + 0x160);
    iVar5 = FUN_03447a18(0x14);
    iVar6 = FUN_03447a18(0x1e);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,(float)-iVar5,(float)iVar6);
    PlantDisplayBoard::SetDisplayLevelButtonPosOffset(local_40,local_3c,uVar15);
    lVar16 = *(long *)(this + 0x160);
    iVar5 = FUN_03447a18(0xb9);
    iVar6 = FUN_03447a18(0xc2);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_40,(float)-iVar5,(float)iVar6);
    FUN_0344675c(local_40,local_3c,lVar16 + 0x124);
    (**(code **)(*(long *)pUVar13 + 0x60))(pUVar13,*(undefined8 *)(this + 0x160));
    piVar14 = (int *)FUN_03446788(*(undefined8 *)param_1,0);
    SwitchPlant(this,0,*piVar14);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::string::~string((string *)&local_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlayerSignPreview::OnCreate() */

void __thiscall UINewPlayerSignPreview::OnCreate(UINewPlayerSignPreview *this)

{
  char cVar1;
  int iVar2;
  UIWidgetBackground *pUVar3;
  vector<int,std::allocator<int>> avStack_110 [24];
  NewPlayerSignData aNStack_f8 [56];
  string asStack_c0 [56];
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_c0,"Background_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_c0);
  std::string::~string(asStack_c0);
  nop();
  *(int *)(pUVar3 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar3 + 0x50)) / 2;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  NewPlayerSignData::NewPlayerSignData(aNStack_f8);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_f8);
  if (cVar1 == '\0') {
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)asStack_c0,&DAT_05751420,3,avStack_110);
    InitView(this,(vector *)asStack_c0);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_c0);
  }
  else {
    NewPlayerSignData::NewPlayerSignData((NewPlayerSignData *)asStack_c0,aNStack_f8);
    FillPlantList(avStack_110,this,asStack_c0);
    NewPlayerSignData::~NewPlayerSignData((NewPlayerSignData *)asStack_c0);
    InitView(this,(vector *)avStack_110);
    std::vector<int,std::allocator<int>>::~vector(avStack_110);
  }
  NewPlayerSignData::~NewPlayerSignData(aNStack_f8);
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


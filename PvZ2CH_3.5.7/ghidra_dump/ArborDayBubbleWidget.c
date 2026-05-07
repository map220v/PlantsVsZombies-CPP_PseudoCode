// Class: ArborDayBubbleWidget


/* ArborDayBubbleWidget::~ArborDayBubbleWidget() */

void __thiscall ArborDayBubbleWidget::~ArborDayBubbleWidget(ArborDayBubbleWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066fec90;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ArborDayBubbleWidget::~ArborDayBubbleWidget() */

void __thiscall ArborDayBubbleWidget::~ArborDayBubbleWidget(ArborDayBubbleWidget *this)

{
  ~ArborDayBubbleWidget(this);
  AK::FreeHook(this);
  return;
}


/* ArborDayBubbleWidget::ArborDayBubbleWidget(int) */

void __thiscall ArborDayBubbleWidget::ArborDayBubbleWidget(ArborDayBubbleWidget *this,int param_1)

{
  Sexy::Widget::Widget((Widget *)this);
  *(int *)(this + 0xd8) = param_1;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_066fec90;
  return;
}


/* ArborDayBubbleWidget::SetData(int, int) */

void __thiscall ArborDayBubbleWidget::SetData(ArborDayBubbleWidget *this,int param_1,int param_2)

{
  *(int *)(this + 0xdc) = param_1;
  *(int *)(this + 0xe0) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayBubbleWidget::TouchEnded(Sexy::Touch const&) */

void __thiscall ArborDayBubbleWidget::TouchEnded(ArborDayBubbleWidget *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ArborDayHarvest *this_00;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xd4) == (int)*(undefined8 *)param_1) {
    this_00 = ::operator_new(0x138);
    ArborDayHarvest::ArborDayHarvest(this_00);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
    (**(code **)(*(long *)this + 0xd0))(&local_20,this);
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0xd8);
    iVar4 = FUN_03a22530(0x49);
    iVar3 = *(int *)(this + 0x54);
    iVar5 = FUN_03a22530(5);
    iVar6 = FUN_03a22530(0x91);
    iVar7 = FUN_03a22530(100);
    Sexy::Insets::Insets
              (aIStack_18,(local_20 + iVar1 / 2) - iVar4,local_1c + iVar3 + iVar5,iVar6,iVar7);
    ArborDayHarvest::Init(this_00,iVar2,(TRect *)aIStack_18);
    UIUtil::ShowDialog((Widget *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayBubbleWidget::Draw(Sexy::Graphics*) */

void __thiscall ArborDayBubbleWidget::Draw(ArborDayBubbleWidget *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  NameMapperBase *pNVar7;
  SeedPacketUtils *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar8;
  undefined8 uVar9;
  long lVar10;
  string *extraout_x1;
  string *extraout_x1_00;
  float fVar11;
  float fVar12;
  string asStack_80 [8];
  int iStack_78;
  int iStack_74;
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  RtId aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_03a22530(5);
  iVar4 = FUN_03a22530(10);
  Sexy::Insets::Insets
            ((Insets *)&local_58,iVar3,iVar3,*(int *)(this + 0x50) - iVar4,
             *(int *)(this + 0x54) - iVar4);
  pNVar7 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar7,*(int *)(this + 0xdc));
  if (cVar1 != '\0') {
    iVar3 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
    this_01 = (RtWeakPtr *)SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,asStack_80);
    fVar12 = ((float)local_50 * 0.9) / (float)*(int *)(this_01 + 0x28);
    fVar11 = ((float)local_4c * 0.9) / (float)*(int *)(this_01 + 0x2c);
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_01 + 0x170));
    GetImageOffset(&iStack_78,aRStack_18);
    Sexy::RtId::~RtId(aRStack_18);
    UIWidget::ConvertPSDImageOffsetToUISpace(&iStack_78,&iStack_74,1536.0);
    Sexy::Insets::Insets
              (aIStack_48,(int)((float)local_58 + (float)*(int *)(this_01 + 0x30) * fVar12),
               (int)((float)local_54 + (float)*(int *)(this_01 + 0x34) * fVar11),
               (int)(fVar12 * (float)*(int *)(this_01 + 0x28)),
               (int)(fVar11 * (float)*(int *)(this_01 + 0x2c)));
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01 + 0x170);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)aIStack_48,(TRect *)(this_01 + 0x20))
    ;
    Sexy::Insets::Insets
              (aIStack_38,(int)((float)local_58 + (float)*(int *)(this_01 + 0x18) * fVar12),
               (int)((float)local_54 + (float)*(int *)(this_01 + 0x1c) * fVar11),
               (int)(fVar12 * (float)*(int *)(this_01 + 0x10)),
               (int)(fVar11 * (float)*(int *)(this_01 + 0x14)));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
    if (bVar2) {
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar10 + 0x48));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,(TRect *)aIStack_38,(TRect *)(this_01 + 8));
    }
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
    std::operator+("X",asStack_70);
    Sexy::ToWString(asStack_68);
    iVar3 = FUN_03a22530(0);
    iVar4 = FUN_03a22530(0x32);
    iVar5 = FUN_03a22530(0x1e);
    Sexy::Insets::Insets(aIStack_28,iVar3,local_4c - iVar4,local_50 - iVar5,iVar4);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
    Sexy::Color::Color((Color *)aRStack_18,1);
    WriteWordInRect(param_1,asStack_60,aIStack_28,uVar9,aRStack_18,4,1);
    FUN_05476c50(asStack_60);
    std::string::~string(asStack_68);
    std::string::~string(asStack_70);
    std::string::~string(asStack_80);
    goto LAB_03a25cb8;
  }
  pNVar7 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar7,*(int *)(this + 0xdc));
  if (cVar1 == '\0') {
    if (*(int *)(this + 0xdc) == 0xbc0) {
      Sexy::Insets::Insets((Insets *)aRStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac3560);
      DrawAdaptiveInInscribedCircleImage(param_1,(Insets *)aRStack_18,uVar9);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
      std::operator+("X",asStack_60);
      Sexy::ToWString((string *)aIStack_48);
      iVar4 = FUN_03a22530(0);
      iVar5 = FUN_03a22530(0x32);
      iVar3 = local_4c - iVar5;
      iVar6 = FUN_03a22530(0x1e);
      local_50 = local_50 - iVar6;
    }
    else {
      if (*(int *)(this + 0xdc) != 0xfad) {
        pNVar7 = (NameMapperBase *)MaterialItemMapper::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar7,*(int *)(this + 0xdc));
        if (cVar1 == '\0') goto LAB_03a25cb8;
        iVar3 = MaterialItemMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar3);
        Sexy::StringToUpper((Sexy *)aIStack_38,extraout_x1);
        std::operator+("IMAGE_UI_FRAGMENT_MATERIAL_",(string *)aIStack_28);
        lVar10 = StringHelper::ToImage((string *)aRStack_18,false);
        std::string::~string((string *)aRStack_18);
        std::string::~string((string *)aIStack_28);
        if (lVar10 != 0) {
          iVar3 = *(int *)(this + 0x50);
          iVar4 = *(int *)(this + 0x54);
          goto LAB_03a25e34;
        }
        goto LAB_03a25e4c;
      }
      Sexy::Insets::Insets((Insets *)aRStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
      uVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac35e0);
      DrawAdaptiveInInscribedCircleImage(param_1,(Insets *)aRStack_18,uVar9);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
      std::operator+("X",asStack_60);
      Sexy::ToWString((string *)aIStack_48);
      iVar4 = FUN_03a22530(0);
      iVar5 = FUN_03a22530(0x32);
      iVar3 = local_4c - iVar5;
    }
    Sexy::Insets::Insets(aIStack_28,iVar4,iVar3,local_50,iVar5);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
    Sexy::Color::Color((Color *)aRStack_18,1);
    WriteWordInRect(param_1,aIStack_38,aIStack_28,uVar9,(Color *)aRStack_18,4,1);
    FUN_05476c50(aIStack_38);
    std::string::~string((string *)aIStack_48);
    std::string::~string(asStack_60);
  }
  else {
    iVar3 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    Sexy::StringToUpper((Sexy *)aIStack_38,extraout_x1_00);
    std::operator+("IMAGE_UI_PACKETS_",(string *)aIStack_28);
    lVar10 = StringHelper::ToImage((string *)aRStack_18,false);
    std::string::~string((string *)aRStack_18);
    std::string::~string((string *)aIStack_28);
    if (lVar10 != 0) {
      iVar3 = *(int *)(this + 0x50);
      iVar4 = *(int *)(this + 0x54);
LAB_03a25e34:
      Sexy::Insets::Insets((Insets *)aRStack_18,0,0,iVar3,iVar4);
      DrawAdaptiveInInscribedCircleImage(param_1,(Insets *)aRStack_18,lVar10);
    }
LAB_03a25e4c:
    std::string::~string((string *)aIStack_38);
  }
LAB_03a25cb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: UIFestivalGoldenEggSelect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEggSelect::GetLayoutName() */

void __thiscall UIFestivalGoldenEggSelect::GetLayoutName(UIFestivalGoldenEggSelect *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIGoldenEggSelect");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIFestivalGoldenEggSelect::ButtonDepress(int) */

void __thiscall
UIFestivalGoldenEggSelect::ButtonDepress(UIFestivalGoldenEggSelect *this,int param_1)

{
  FestivalGoldenEggManager *this_00;
  
  if (param_1 == 0x58) {
    UISingletonDialog<UIFestivalGoldenEggSelect>::CloseDialog();
    return;
  }
  if (param_1 == 0x6f) {
    this_00 = (FestivalGoldenEggManager *)
              Sexy::LazySingleton<FestivalGoldenEggManager>::GetInstance();
    FestivalGoldenEggManager::showDescriptionWidget(this_00);
    return;
  }
  return;
}


/* non-virtual thunk to UIFestivalGoldenEggSelect::ButtonDepress(int) */

void __thiscall
UIFestivalGoldenEggSelect::ButtonDepress(UIFestivalGoldenEggSelect *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIFestivalGoldenEggSelect::UIFestivalGoldenEggSelect() */

void __thiscall
UIFestivalGoldenEggSelect::UIFestivalGoldenEggSelect(UIFestivalGoldenEggSelect *this)

{
  UISingletonDialog<UIFestivalGoldenEggSelect>::UISingletonDialog
            ((UISingletonDialog<UIFestivalGoldenEggSelect> *)this);
  *(undefined ***)this = &PTR_GetClass_066fd250;
  *(undefined **)(this + 0xd8) = &DAT_066fd5a0;
  FestivalGoldenEggData::FestivalGoldenEggData((FestivalGoldenEggData *)(this + 0x138));
  return;
}


/* UIFestivalGoldenEggSelect::~UIFestivalGoldenEggSelect() */

void __thiscall
UIFestivalGoldenEggSelect::~UIFestivalGoldenEggSelect(UIFestivalGoldenEggSelect *this)

{
  *(undefined ***)this = &PTR_GetClass_066fd250;
  *(undefined **)(this + 0xd8) = &DAT_066fd5a0;
  FestivalGoldenEggData::~FestivalGoldenEggData((FestivalGoldenEggData *)(this + 0x138));
  UISingletonDialog<UIFestivalGoldenEggSelect>::~UISingletonDialog
            ((UISingletonDialog<UIFestivalGoldenEggSelect> *)this);
  return;
}


/* UIFestivalGoldenEggSelect::~UIFestivalGoldenEggSelect() */

void __thiscall
UIFestivalGoldenEggSelect::~UIFestivalGoldenEggSelect(UIFestivalGoldenEggSelect *this)

{
  ~UIFestivalGoldenEggSelect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFestivalGoldenEggSelect::Init(int) */

void __thiscall UIFestivalGoldenEggSelect::Init(UIFestivalGoldenEggSelect *this,int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  Image *pIVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  UtilEasyDisplayWidget *this_00;
  NameMapperBase *pNVar11;
  ulong uVar12;
  ulong unaff_x28;
  int local_e4;
  string asStack_e0 [8];
  string asStack_d8 [16];
  UIFestivalGoldenEggSelect *local_c8;
  Insets aIStack_c0 [16];
  int local_b0;
  int local_ac;
  function<bool(Sexy::Touch_const&)> afStack_a8 [32];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x134) = param_1;
  std::string::string(asStack_e0,"UIImage_Egg");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_e0);
  local_e4 = *(int *)(this + 0x134) + 1;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_e4);
  std::operator+("IMAGE_UI_GOLDENEGG_EGG",asStack_d8);
  pIVar7 = (Image *)StringHelper::ToImage((string *)&local_c8,false);
  UIWidgetImage::SetImage(pUVar6,pIVar7);
  std::string::~string((string *)&local_c8);
  std::string::~string(asStack_d8);
  std::string::~string(asStack_e0);
  nop();
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar2 = FUN_03a17a88(local_80);
  if ((cVar2 != '\0') && (local_70 != '\0')) {
    uVar12 = 0;
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x138));
    if (cVar2 != '\0') {
      while( true ) {
        puVar8 = (undefined8 *)
                 FUN_03a17aa8(*(undefined8 *)(this + 0x180),(long)*(int *)(this + 0x134));
        uVar9 = FUN_03a17ab4(*puVar8,puVar8[1]);
        if (uVar9 <= uVar12) break;
        Sexy::StrFormat("UIImage_Frame%d",(string *)&local_c8,(ulong)((int)uVar12 + 1));
        pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_c8);
        std::string::~string((string *)&local_c8);
        if (pUVar6 != (UIWidgetImage *)0x0) {
          puVar8 = (undefined8 *)
                   FUN_03a17aa8(*(undefined8 *)(this + 0x180),(long)*(int *)(this + 0x134));
          piVar10 = (int *)FUN_03a17ac8(*puVar8,uVar12);
          iVar3 = *piVar10;
          iVar1 = piVar10[1];
          iVar4 = FUN_03a18de0(10);
          iVar5 = FUN_03a18de0(0x14);
          Sexy::Insets::Insets
                    ((Insets *)asStack_d8,iVar4,iVar4,*(int *)(pUVar6 + 0x50) - iVar5,
                     *(int *)(pUVar6 + 0x54) - iVar5);
          this_00 = ::operator_new(0x118);
          UtilEasyDisplayWidget::UtilEasyDisplayWidget(this_00);
          (**(code **)(*(long *)this_00 + 0x198))
                    (this_00,0,0,*(undefined4 *)(pUVar6 + 0x50),*(undefined4 *)(pUVar6 + 0x54));
          pNVar11 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
          cVar2 = NameMapperBase::ContainsId(pNVar11,iVar3);
          if (cVar2 == '\0') {
            pNVar11 = (NameMapperBase *)MaterialItemMapper::GetInstance();
            cVar2 = NameMapperBase::ContainsId(pNVar11,iVar3);
            if (cVar2 == '\0') {
              local_c8 = this;
              Sexy::Insets::Insets(aIStack_c0,(Insets *)asStack_d8);
              local_b0 = iVar3;
              local_ac = iVar1;
              FUN_03a19c74(afStack_a8,(string *)&local_c8);
            }
            else {
              local_c8 = this;
              Sexy::Insets::Insets(aIStack_c0,(Insets *)asStack_d8);
              local_b0 = iVar3;
              local_ac = iVar1;
              FUN_03a19ad0(afStack_a8,(string *)&local_c8);
            }
          }
          else {
            local_c8 = this;
            Sexy::Insets::Insets(aIStack_c0,(Insets *)asStack_d8);
            local_b0 = iVar3;
            local_ac = iVar1;
            FUN_03a1992c(afStack_a8,(string *)&local_c8);
          }
          unaff_x28 = unaff_x28 & 0xffffffff00000000 | uVar12 & 0xffffffff;
          UtilEasyDisplayWidget::SetDrawFunction(this_00,afStack_a8);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_a8);
          FUN_03a18d84(afStack_a8,this,unaff_x28);
          UtilEasyDisplayWidget::SetTouchFunction(this_00,afStack_a8);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_a8);
          (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
        }
        uVar12 = uVar12 + 1;
      }
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


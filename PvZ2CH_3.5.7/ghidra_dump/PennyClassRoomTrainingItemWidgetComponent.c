// Class: PennyClassRoomTrainingItemWidgetComponent


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidgetComponent::InitButton() */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::InitButton
          (PennyClassRoomTrainingItemWidgetComponent *this)

{
  int iVar1;
  int iVar2;
  PVZ2UIButton *pPVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  undefined1 auStack_90 [8];
  Insets aIStack_88 [16];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xe4) = *(int *)(this + 0xe0) + 2000;
  iVar1 = FUN_04de8b64(5);
  iVar2 = FUN_04de8b64(0x41);
  Sexy::Insets::Insets
            (aIStack_88,*(int *)(this + 0x50) - iVar2,iVar1,iVar2,*(int *)(this + 0x54) + iVar1 * -2
            );
  if (this[0x100] == (PennyClassRoomTrainingItemWidgetComponent)0x0) {
    if (*(int *)(this + 0xe0) == 0) {
      pwVar5 = L"[PENNY_CLASSROOM_TEST_BTN]";
    }
    else {
      pwVar5 = L"[PENNY_CLASSROOM_LEVEL_BTN]";
    }
    FUN_05478178(aPStack_78,pwVar5,auStack_90);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar3 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar3,*(int *)(this + 0xe4),(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,
               (Color *)aPStack_40);
    FUN_05476c50(aPStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b9c418,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b9c610,3);
    PVZ2UIButton::SetDialogStates(pPVar3,aPStack_78,aPStack_40);
    (**(code **)(*(long *)pPVar3 + 0x1a0))(pPVar3,aIStack_88);
    pcVar6 = *(code **)(*(long *)pPVar3 + 800);
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    (*pcVar6)(pPVar3,uVar4);
    (**(code **)(*(long *)this + 0x60))(this,pPVar3);
  }
  else {
    FUN_05478178(aPStack_78,L"[PENNY_CLASSROOM_TEST_NOT_OPEN]",auStack_90);
    Sexy::Color::Color((Color *)aPStack_40,1);
    pPVar3 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar3,*(int *)(this + 0xe4),(ButtonListener *)(this + 0xd8),(wstring *)aPStack_78,
               (Color *)aPStack_40);
    FUN_05476c50(aPStack_78);
    nop();
    PVZ2UIImage::PVZ2UIImage(aPStack_78,&DAT_06b9c418,3);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b9c610,3);
    PVZ2UIButton::SetDialogStates(pPVar3,aPStack_78,aPStack_40);
    (**(code **)(*(long *)pPVar3 + 0x1a0))(pPVar3,aIStack_88);
    pcVar6 = *(code **)(*(long *)pPVar3 + 800);
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    (*pcVar6)(pPVar3,uVar4);
    (**(code **)(*(long *)pPVar3 + 0x188))(pPVar3,1);
    (**(code **)(*(long *)this + 0x60))(this,pPVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyClassRoomTrainingItemWidgetComponent::PennyClassRoomTrainingItemWidgetComponent() */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::PennyClassRoomTrainingItemWidgetComponent
          (PennyClassRoomTrainingItemWidgetComponent *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_069ccc30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ccf58;
  FUN_05476574(this + 0xf0);
  FUN_05476574(this + 0xf8);
  NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x108));
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  FUN_054772c4(this + 0xf0,&DAT_056f11a8);
  FUN_054772c4(this + 0xf8,&DAT_056f11a8);
  this[0x100] = (PennyClassRoomTrainingItemWidgetComponent)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidgetComponent::Draw(Sexy::Graphics*) */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::Draw
          (PennyClassRoomTrainingItemWidgetComponent *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9c690);
  Draw3SliceImage(param_1,aIStack_18,uVar3);
  iVar1 = FUN_04de8b64(0x78);
  Sexy::Insets::Insets(aIStack_28,0,0,iVar1,*(int *)(this + 0x54));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar3,aIStack_18,5,1);
  iVar1 = FUN_04de8b64(100);
  iVar2 = FUN_04de8b64(0x3c);
  Sexy::Insets::Insets(aIStack_28,iVar1,0,iVar2,*(int *)(this + 0x54));
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,this + 0xf8,aIStack_28,uVar3,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyClassRoomTrainingItemWidgetComponent::~PennyClassRoomTrainingItemWidgetComponent() */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::~PennyClassRoomTrainingItemWidgetComponent
          (PennyClassRoomTrainingItemWidgetComponent *this)

{
  *(undefined ***)this = &PTR_GetClass_069ccc30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069ccf58;
  NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x108))
  ;
  FUN_05476c50(this + 0xf8);
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PennyClassRoomTrainingItemWidgetComponent::~PennyClassRoomTrainingItemWidgetComponent() */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::~PennyClassRoomTrainingItemWidgetComponent
          (PennyClassRoomTrainingItemWidgetComponent *this)

{
  ~PennyClassRoomTrainingItemWidgetComponent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidgetComponent::InitBonus(int) */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::InitBonus
          (PennyClassRoomTrainingItemWidgetComponent *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  vector *pvVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04de8b64(2);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_04de8b64(0xa0);
  iVar2 = iVar1 - iVar3;
  pvVar6 = (vector *)FUN_04de7eb4(*(undefined8 *)(this + 0x170),(long)*(int *)(this + 0xe0));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)local_38,pvVar6);
  pvVar6 = (vector *)FUN_04de7ec0(local_38[0],(long)param_1);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20,pvVar6);
  uVar7 = local_20;
  iVar5 = FUN_04de7ecc(local_20,local_18);
  if (0 < iVar5) {
    uVar10 = 0;
    while( true ) {
      piVar8 = (int *)FUN_04de7ee0(uVar7,uVar10);
      plVar9 = (long *)UIRewardFrame::CreateUIRewardFrame(*piVar8,piVar8[1],true);
      (**(code **)(*plVar9 + 0x198))(plVar9,iVar4,iVar3 / 2,iVar2,iVar2);
      (**(code **)(*(long *)this + 0x60))(this,plVar9);
      if (uVar10 == iVar5 - 1) break;
      uVar10 = uVar10 + 1;
      uVar7 = local_20;
      iVar4 = iVar4 + iVar1;
    }
  }
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidgetComponent::CalcCurrentLevel(int) */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::CalcCurrentLevel
          (PennyClassRoomTrainingItemWidgetComponent *this,int param_1)

{
  int iVar1;
  vector *pvVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = 0;
  std::
  vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
  ::vector((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
            *)local_38,(vector *)(this + 0x158));
  iVar6 = 0;
  pvVar2 = (vector *)FUN_04de7eec(local_38[0],(long)param_1);
  std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>::vector
            ((vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *)&local_20,
             pvVar2);
  lVar3 = FUN_04de7ef8(local_20,local_18);
  if (lVar3 != 0) {
    do {
      piVar4 = (int *)FUN_04de7f20(local_20,lVar5);
      iVar1 = *piVar4;
      if (iVar1 == 2) {
        iVar6 = iVar6 + 1;
      }
      else {
        if (iVar1 == 0) break;
        if (iVar1 == 1) {
          this[0x100] = (PennyClassRoomTrainingItemWidgetComponent)0x0;
          break;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar3);
  }
  std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>::~vector
            ((vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *)&local_20);
  std::
  vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
  ::~vector((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
             *)local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidgetComponent::InitView(int, NetworkPennyClassroomData) */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::InitView
          (PennyClassRoomTrainingItemWidgetComponent *this,undefined4 param_1,
          NetworkPennyClassroomData *param_3)

{
  int iVar1;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0xe0) = param_1;
  local_8 = ___stack_chk_guard;
  NetworkPennyClassroomData::operator=((NetworkPennyClassroomData *)(this + 0x108),param_3);
  PennyClassRoomTrainingItemWidget::GetTrainingTitle((int)this);
  FUN_054766c8(this + 0xf0,auStack_10);
  FUN_05476c50(auStack_10);
  iVar1 = CalcCurrentLevel(this,*(int *)(this + 0xe0));
  *(int *)(this + 0xe8) = iVar1;
  if (iVar1 < 5) {
    InitBonus(this,iVar1);
    InitButton(this);
    std::string::string(asStack_18,"[DAILY_ACHIEVEMENT_OBTAIN]");
    StringHelper::ToStringValue(asStack_18);
    FUN_054766c8(this + 0xf8,auStack_10);
    FUN_05476c50(auStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassRoomTrainingItemWidgetComponent::GotoLevel() */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::GotoLevel
          (PennyClassRoomTrainingItemWidgetComponent *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UIPennyClassroomStartLevel *pUVar3;
  UIPennyClassroomSurvey *pUVar4;
  NetworkPennyClassroomData aNStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == 0) {
    pUVar4 = (UIPennyClassroomSurvey *)UISingletonDialog<UIPennyClassroomSurvey>::ShowDialog();
    uVar1 = *(undefined4 *)(this + 0xe8);
    NetworkPennyClassroomData::NetworkPennyClassroomData
              (aNStack_d0,(NetworkPennyClassroomData *)(this + 0x108));
    UIPennyClassroomSurvey::InitView(pUVar4,uVar1,aNStack_d0);
    NetworkPennyClassroomData::~NetworkPennyClassroomData(aNStack_d0);
  }
  else {
    pUVar3 = (UIPennyClassroomStartLevel *)
             UISingletonDialog<UIPennyClassroomStartLevel>::ShowDialog();
    uVar1 = *(undefined4 *)(this + 0xe8);
    uVar2 = *(undefined4 *)(this + 0xe0);
    NetworkPennyClassroomData::NetworkPennyClassroomData
              (aNStack_d0,(NetworkPennyClassroomData *)(this + 0x108));
    UIPennyClassroomStartLevel::InitView(pUVar3,uVar2,uVar1,aNStack_d0);
    NetworkPennyClassroomData::~NetworkPennyClassroomData(aNStack_d0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyClassRoomTrainingItemWidgetComponent::ButtonDepress(int) */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::ButtonDepress
          (PennyClassRoomTrainingItemWidgetComponent *this,int param_1)

{
  if (*(int *)(this + 0xe4) != param_1) {
    return;
  }
  GotoLevel(this);
  return;
}


/* non-virtual thunk to PennyClassRoomTrainingItemWidgetComponent::ButtonDepress(int) */

void __thiscall
PennyClassRoomTrainingItemWidgetComponent::ButtonDepress
          (PennyClassRoomTrainingItemWidgetComponent *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


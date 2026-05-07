// Class: OppoAwardActivityScrollPanel


/* OppoAwardActivityScrollPanel::RemoveAllDungeonWidget() */

void __thiscall
OppoAwardActivityScrollPanel::RemoveAllDungeonWidget(OppoAwardActivityScrollPanel *this)

{
  std::vector<OppoAwardActivityWidget*,std::allocator<OppoAwardActivityWidget*>>::clear
            ((vector<OppoAwardActivityWidget*,std::allocator<OppoAwardActivityWidget*>> *)
             (this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoAwardActivityScrollPanel::~OppoAwardActivityScrollPanel() */

void __thiscall
OppoAwardActivityScrollPanel::~OppoAwardActivityScrollPanel(OppoAwardActivityScrollPanel *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066c9a50;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066c9730;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  DailySignBonus::~DailySignBonus((DailySignBonus *)(this + 0xf8));
  std::vector<OppoAwardActivityWidget*,std::allocator<OppoAwardActivityWidget*>>::~vector
            ((vector<OppoAwardActivityWidget*,std::allocator<OppoAwardActivityWidget*>> *)
             (this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OppoAwardActivityScrollPanel::~OppoAwardActivityScrollPanel() */

void __thiscall
OppoAwardActivityScrollPanel::~OppoAwardActivityScrollPanel(OppoAwardActivityScrollPanel *this)

{
  ~OppoAwardActivityScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoAwardActivityScrollPanel::InitView() */

void __thiscall OppoAwardActivityScrollPanel::InitView(OppoAwardActivityScrollPanel *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this_00;
  undefined8 uVar7;
  OppoAwardActivityWidget *pOVar8;
  vector *pvVar9;
  long lVar10;
  bool bVar11;
  code *pcVar12;
  OppoAwardActivityWidget *local_48;
  Insets aIStack_40 [12];
  int local_34;
  Insets aIStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_03925930(5);
  *(undefined4 *)(this + 0x54) = uVar1;
  RemoveAllDungeonWidget(this);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  std::string::string(asStack_20,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_20,false);
  std::string::~string(asStack_20);
  nop();
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    lVar10 = 0;
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    uVar7 = FUN_03925260(*(undefined8 *)(this + 0x110),*(undefined8 *)(this + 0x118));
    Sexy::OutputDebugStrF((wchar_t *)"ChristmasAwardActivityScrollPanel size() = %d",uVar7);
    do {
      uVar7 = *(undefined8 *)(this + 0x110);
      iVar4 = (int)lVar10;
      iVar6 = FUN_03925260(uVar7,*(undefined8 *)(this + 0x118));
      if (iVar6 <= iVar4) break;
      pvVar9 = (vector *)FUN_03925274(uVar7,lVar10);
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)asStack_20,pvVar9)
      ;
      if ((*(int *)(this + 0xf8) == iVar4) && (this[0xfc] == (OppoAwardActivityScrollPanel)0x0)) {
        bVar11 = true;
        uVar7 = 1;
      }
      else {
        bVar11 = false;
        uVar7 = 0;
      }
      lVar10 = lVar10 + 1;
      Sexy::OutputDebugStrF((wchar_t *)"ChristmasAwardActivityScrollPanel isCanAward() = %d",uVar7);
      pOVar8 = ::operator_new(0x1b8);
      OppoAwardActivityWidget::OppoAwardActivityWidget
                (pOVar8,iVar4,*(int *)(this + 0xf8),bVar11,(vector *)asStack_20);
      local_48 = pOVar8;
      iVar6 = FUN_03925930(5);
      Sexy::Insets::Insets(aIStack_40,0,iVar6 + *(int *)(this + 0x54),iVar2,iVar3);
      pOVar8 = local_48;
      pcVar12 = *(code **)(*(long *)local_48 + 0x1a0);
      iVar4 = FUN_03925930(5);
      iVar6 = *(int *)(this + 0x54);
      iVar5 = FUN_03925930(0x32);
      Sexy::Insets::Insets
                (aIStack_30,(*(int *)(this + 0x50) - iVar2) / 2,iVar4 + iVar6,iVar5 + iVar2,local_34
                );
      (*pcVar12)(pOVar8,aIStack_30);
      ChristmasAwardActivityWidget::Init((ChristmasAwardActivityWidget *)local_48);
      (**(code **)(*(long *)this + 0x60))(this,local_48);
      std::vector<OppoAwardActivityWidget*,std::allocator<OppoAwardActivityWidget*>>::push_back
                ((vector<OppoAwardActivityWidget*,std::allocator<OppoAwardActivityWidget*>> *)
                 (this + 0xe0),&local_48);
      iVar6 = FUN_03925930(5);
      *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar6 + iVar3;
      std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
                ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)asStack_20);
    } while (lVar10 != 7);
    iVar2 = FUN_03925930(0x32);
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar2;
    iVar2 = FUN_03925930(0x3c);
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OppoAwardActivityScrollPanel::OppoAwardActivityScrollPanel(Sexy::TRect<int>&, DailyAwardBonus&)
    */

void __thiscall
OppoAwardActivityScrollPanel::OppoAwardActivityScrollPanel
          (OppoAwardActivityScrollPanel *this,TRect *param_1,DailyAwardBonus *param_2)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066c9730;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066c9a50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  DailyAwardBonus::DailyAwardBonus((DailyAwardBonus *)(this + 0xf8));
  this_00 = gLawnApp;
  std::string::string(asStack_10,"UI_AwardDialog");
  LawnApp::LoadGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  DailyAwardBonus::operator=((DailyAwardBonus *)(this + 0xf8),param_2);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


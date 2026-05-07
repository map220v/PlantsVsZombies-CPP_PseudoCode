// Class: DaveClubActivityScrollPanel


/* DaveClubActivityScrollPanel::RemoveAllDungeonWidget() */

void __thiscall
DaveClubActivityScrollPanel::RemoveAllDungeonWidget(DaveClubActivityScrollPanel *this)

{
  std::vector<DaveClubActivityWidget*,std::allocator<DaveClubActivityWidget*>>::clear
            ((vector<DaveClubActivityWidget*,std::allocator<DaveClubActivityWidget*>> *)
             (this + 0xe0));
  return;
}


/* DaveClubActivityScrollPanel::~DaveClubActivityScrollPanel() */

void __thiscall
DaveClubActivityScrollPanel::~DaveClubActivityScrollPanel(DaveClubActivityScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_066d38c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d3be0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<DaveClubBonus,std::allocator<DaveClubBonus>>::~vector
            ((vector<DaveClubBonus,std::allocator<DaveClubBonus>> *)(this + 0xf8));
  std::vector<DaveClubActivityWidget*,std::allocator<DaveClubActivityWidget*>>::~vector
            ((vector<DaveClubActivityWidget*,std::allocator<DaveClubActivityWidget*>> *)
             (this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* DaveClubActivityScrollPanel::~DaveClubActivityScrollPanel() */

void __thiscall
DaveClubActivityScrollPanel::~DaveClubActivityScrollPanel(DaveClubActivityScrollPanel *this)

{
  ~DaveClubActivityScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveClubActivityScrollPanel::InitView() */

void __thiscall DaveClubActivityScrollPanel::InitView(DaveClubActivityScrollPanel *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this_00;
  int *piVar7;
  DaveClubActivityWidget *pDVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  DaveClubActivityWidget *local_30;
  Insets aIStack_28 [12];
  int local_1c;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_03960734(5);
  *(undefined4 *)(this + 0x54) = uVar2;
  RemoveAllDungeonWidget(this);
  std::string::string(asStack_18,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
  this_00 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_18,false);
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (LotteryResultProgressBar *)0x0) {
    lVar9 = 0;
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
    uVar10 = *(undefined8 *)(this + 0xf8);
    iVar5 = FUN_039603c0(uVar10,*(undefined8 *)(this + 0x100));
    if (0 < iVar5) {
      do {
        piVar7 = (int *)FUN_039603f0(uVar10,lVar9);
        if ((char)piVar7[2] != '\0') {
          iVar5 = *piVar7;
          pDVar8 = ::operator_new(0x140);
          DaveClubActivityWidget::DaveClubActivityWidget(pDVar8,iVar5,true);
          local_30 = pDVar8;
          iVar5 = FUN_03960734(5);
          Sexy::Insets::Insets(aIStack_28,0,iVar5 + *(int *)(this + 0x54),iVar3,iVar4);
          pDVar8 = local_30;
          iVar1 = *(int *)(this + 0x50);
          iVar5 = (iVar1 - iVar3) / 2;
          pcVar11 = *(code **)(*(long *)local_30 + 0x1a0);
          iVar6 = FUN_03960734(5);
          Sexy::Insets::Insets
                    ((Insets *)asStack_18,iVar5,iVar6 + *(int *)(this + 0x54),iVar1 + iVar5 * -2,
                     local_1c);
          (*pcVar11)(pDVar8,asStack_18);
          DaveClubActivityWidget::Init(local_30);
          (**(code **)(*(long *)this + 0x60))(this,local_30);
          std::vector<DaveClubActivityWidget*,std::allocator<DaveClubActivityWidget*>>::push_back
                    ((vector<DaveClubActivityWidget*,std::allocator<DaveClubActivityWidget*>> *)
                     (this + 0xe0),&local_30);
          iVar5 = FUN_03960734(5);
          uVar10 = *(undefined8 *)(this + 0xf8);
          *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar5 + iVar4;
          iVar5 = FUN_039603c0(uVar10,*(undefined8 *)(this + 0x100));
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < iVar5);
    }
    iVar3 = FUN_03960734(0x32);
    *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar3;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DaveClubActivityScrollPanel::DaveClubActivityScrollPanel(Sexy::TRect<int>&,
   std::vector<DaveClubBonus, std::allocator<DaveClubBonus> >&) */

void __thiscall
DaveClubActivityScrollPanel::DaveClubActivityScrollPanel
          (DaveClubActivityScrollPanel *this,TRect *param_1,vector *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066d38c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066d3be0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  std::vector<DaveClubBonus,std::allocator<DaveClubBonus>>::operator=
            ((vector<DaveClubBonus,std::allocator<DaveClubBonus>> *)(this + 0xf8),param_2);
  InitView(this);
  return;
}


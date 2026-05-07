// Class: AdventureDungeonScrollPanel


/* AdventureDungeonScrollPanel::RemoveAllDungeonWidget() */

void __thiscall
AdventureDungeonScrollPanel::RemoveAllDungeonWidget(AdventureDungeonScrollPanel *this)

{
  std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::clear
            ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)(this + 0x128));
  return;
}


/* AdventureDungeonScrollPanel::~AdventureDungeonScrollPanel() */

void __thiscall
AdventureDungeonScrollPanel::~AdventureDungeonScrollPanel(AdventureDungeonScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_0682e7b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682ead0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::~vector
            ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)(this + 0x128));
  PlantAdventureConfig::~PlantAdventureConfig((PlantAdventureConfig *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AdventureDungeonScrollPanel::~AdventureDungeonScrollPanel() */

void __thiscall
AdventureDungeonScrollPanel::~AdventureDungeonScrollPanel(AdventureDungeonScrollPanel *this)

{
  ~AdventureDungeonScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* AdventureDungeonScrollPanel::GetDungeonList() */

vector<DungeonWidget*,std::allocator<DungeonWidget*>> *
AdventureDungeonScrollPanel::GetDungeonList(void)

{
  long in_x0;
  vector<DungeonWidget*,std::allocator<DungeonWidget*>> *in_x8;
  
  std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::vector
            (in_x8,(vector *)(in_x0 + 0x128));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdventureDungeonScrollPanel::InitView() */

void __thiscall AdventureDungeonScrollPanel::InitView(AdventureDungeonScrollPanel *this)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  LotteryResultProgressBar *this_00;
  long lVar9;
  WorldDungeonInfo *pWVar10;
  DungeonWidget *pDVar11;
  code *pcVar12;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  DungeonWidget *local_f8;
  Insets aIStack_f0 [12];
  int local_e4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_e0 [24];
  WorldDungeonInfo aWStack_c8 [96];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_042d2d60(5);
  *(undefined4 *)(this + 0x54) = uVar3;
  RemoveAllDungeonWidget(this);
  PlantAdventureConfig::GetDungeonListInfo();
  local_110 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_e0);
  do {
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_e0);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_110,(__normal_iterator *)local_68);
    if (!bVar2) goto LAB_042dcbc4;
    iVar4 = LawnApp::GetPlantAdventureTabIndex(gLawnApp);
    piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
    if (iVar4 == *piVar8) {
      std::string::string((string *)local_68,"IMAGE_UI_PLANTADVENTURE_BG_EGYPT");
      this_00 = (LotteryResultProgressBar *)StringHelper::ToImage((string *)local_68,false);
      std::string::~string((string *)local_68);
      nop();
      if (this_00 != (LotteryResultProgressBar *)0x0) {
        iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
        iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
        lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
        local_108 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar9 + 0x20));
        local_100 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(lVar9 + 0x20));
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_108,(__normal_iterator *)&local_100),
              bVar2) {
          pWVar10 = (WorldDungeonInfo *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_108);
          WorldDungeonInfo::WorldDungeonInfo(aWStack_c8,pWVar10);
          WorldDungeonInfo::WorldDungeonInfo((WorldDungeonInfo *)local_68,aWStack_c8);
          pDVar11 = ::operator_new(0x328);
          DungeonWidget::DungeonWidget(pDVar11,(string *)local_68);
          local_f8 = pDVar11;
          WorldDungeonInfo::~WorldDungeonInfo((WorldDungeonInfo *)local_68);
          iVar6 = FUN_042d2d60(5);
          Sexy::Insets::Insets(aIStack_f0,0,iVar6 + *(int *)(this + 0x54),iVar4,iVar5);
          pDVar11 = local_f8;
          iVar1 = *(int *)(this + 0x50);
          iVar6 = (iVar1 - iVar4) / 2;
          pcVar12 = *(code **)(*(long *)local_f8 + 0x1a0);
          iVar7 = FUN_042d2d60(5);
          Sexy::Insets::Insets
                    ((Insets *)local_68,iVar6,iVar7 + *(int *)(this + 0x54),iVar1 + iVar6 * -2,
                     local_e4);
          (*pcVar12)(pDVar11,(string *)local_68);
          DungeonWidget::Init(local_f8);
          (**(code **)(*(long *)this + 0x60))(this,local_f8);
          std::vector<DungeonWidget*,std::allocator<DungeonWidget*>>::push_back
                    ((vector<DungeonWidget*,std::allocator<DungeonWidget*>> *)(this + 0x128),
                     &local_f8);
          iVar6 = FUN_042d2d60(5);
          *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar6 + iVar5;
          WorldDungeonInfo::~WorldDungeonInfo(aWStack_c8);
          __gnu_cxx::
          __normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
          ::operator++((__normal_iterator<Sexy::PIValue2D_const*,std::vector<Sexy::PIValue2D,std::allocator<Sexy::PIValue2D>>>
                        *)&local_108);
        }
LAB_042dcbc4:
        iVar4 = FUN_042d2d60(0x32);
        *(int *)(this + 0x50) = *(int *)(this + 0x50) + iVar4;
        std::vector<DungeonInfo,std::allocator<DungeonInfo>>::~vector
                  ((vector<DungeonInfo,std::allocator<DungeonInfo>> *)avStack_e0);
        if (local_8 == ___stack_chk_guard) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    FUN_042d3d9c((__normal_iterator *)&local_110);
  } while( true );
}


/* AdventureDungeonScrollPanel::AdventureDungeonScrollPanel(Sexy::TRect<int>&) */

void __thiscall
AdventureDungeonScrollPanel::AdventureDungeonScrollPanel
          (AdventureDungeonScrollPanel *this,TRect *param_1)

{
  PlantAdventureConfig *pPVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0682e7b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682ead0;
  PlantAdventureConfig::PlantAdventureConfig((PlantAdventureConfig *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x128));
  pPVar1 = (PlantAdventureConfig *)LawnApp::GetPlantAdventureConfig(gLawnApp);
  PlantAdventureConfig::operator=((PlantAdventureConfig *)(this + 0xe0),pPVar1);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  InitView(this);
  return;
}


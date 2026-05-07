// Class: PlantAdventureScrollPanel


/* PlantAdventureScrollPanel::~PlantAdventureScrollPanel() */

void __thiscall
PlantAdventureScrollPanel::~PlantAdventureScrollPanel(PlantAdventureScrollPanel *this)

{
  PrimeText *this_00;
  
  *(undefined ***)this = &PTR_GetClass_0682e440;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682e768;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0x128));
  PlantAdventureConfig::~PlantAdventureConfig((PlantAdventureConfig *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantAdventureScrollPanel::~PlantAdventureScrollPanel() */

void __thiscall
PlantAdventureScrollPanel::~PlantAdventureScrollPanel(PlantAdventureScrollPanel *this)

{
  ~PlantAdventureScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* PlantAdventureScrollPanel::Draw(Sexy::Graphics*) */

void PlantAdventureScrollPanel::Draw(Graphics *param_1)

{
  LotteryResultProgressBar *this;
  SalesProgressBar *this_00;
  
  this = (LotteryResultProgressBar *)
         CachedUIResourcePtr<Sexy::Image>::operator->
                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7208);
  LotteryResultProgressBar::GetCurrentLevel(this);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af7208);
  SalesProgressBar::GetCurrentLevel(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureScrollPanel::InitView() */

void __thiscall PlantAdventureScrollPanel::InitView(PlantAdventureScrollPanel *this)

{
  LawnApp *this_00;
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  PVZ2UIButton *pPVar9;
  long lVar10;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  ResourceInfo *pRVar11;
  undefined8 local_d8;
  PVZ2UIButton *local_d0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_a8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  undefined8 local_78 [7];
  undefined8 local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x54) = 0;
  bVar2 = true;
  PlantAdventureConfig::GetDungeonListInfo();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  local_d8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_a8);
  do {
    local_40[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_a8);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_d8,(__normal_iterator *)local_40);
    if (!bVar1) {
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40,
                 (vector *)avStack_90);
      PVZ2UI::LinkRadioButtons((RtId *)local_40);
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)local_40);
      this_00 = gLawnApp;
      iVar4 = LawnApp::GetPlantAdventureTabIndex(gLawnApp);
      if (iVar4 == -1) {
        LawnApp::SetPlantAdventureTabIndex(this_00,1);
      }
      std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
                ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90);
      std::vector<DungeonInfo,std::allocator<DungeonInfo>>::~vector
                ((vector<DungeonInfo,std::allocator<DungeonInfo>> *)avStack_a8);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar8 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
    iVar4 = *piVar8;
    FUN_05478178((__normal_iterator *)local_78,&DAT_056f11a8,(Insets *)&local_b8);
    Sexy::Color::Color((Color *)local_40,1);
    pPVar9 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar9,iVar4,(ButtonListener *)(this + 0xd8),(wstring *)local_78,(Color *)local_40);
    local_d0 = pPVar9;
    FUN_05476c50((__normal_iterator *)local_78);
    nop();
    lVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
    lVar10 = StringHelper::ToImage((string *)(lVar10 + 0x10),false);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_c8);
    if (lVar10 != 0) {
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)aRStack_c8,(RtId *)local_40);
      Sexy::RtId::~RtId((RtId *)local_40);
    }
    lVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
    lVar10 = StringHelper::ToImage((string *)(lVar10 + 0x18),false);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_c0);
    if (lVar10 != 0) {
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)aRStack_c0,(RtId *)local_40);
      Sexy::RtId::~RtId((RtId *)local_40);
    }
    this_01 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    this_02 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c8);
    iVar6 = SalesProgressBar::GetCurrentLevel(this_02);
    iVar7 = FUN_042d2d60(0xc);
    Sexy::Insets::Insets
              ((Insets *)&local_b8,(*(int *)(this + 0x50) - iVar5) / 2,iVar7 + *(int *)(this + 0x54)
               ,iVar5,iVar6);
    (**(code **)(*(long *)local_d0 + 0x198))(local_d0,local_b8,local_b4,local_b0,local_ac);
    pPVar9 = local_d0;
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_c0);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,pRVar11,2);
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_c8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,pRVar11,2);
    PVZ2UIButton::SetRadioStates(pPVar9,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40,bVar2);
    FUN_042d26c4(local_d0 + 0x2c0);
    std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
              ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,&local_d0);
    iVar5 = LawnApp::GetPlantAdventureTabIndex(gLawnApp);
    if (iVar5 == -1) {
      lVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
      local_78[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar10 + 0x20));
      while( true ) {
        lVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
        local_40[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)(lVar10 + 0x20));
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_78,(__normal_iterator *)local_40);
        if (!bVar2) break;
        lVar10 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_78);
        cVar3 = std::operator==((string *)(this + 0x128),(string *)(lVar10 + 0x20));
        if (cVar3 != '\0') {
          LawnApp::SetPlantAdventureTabIndex(gLawnApp,iVar4);
          break;
        }
        FUN_042d3dfc((__normal_iterator *)local_78);
      }
    }
    bVar2 = false;
    (**(code **)(*(long *)this + 0x60))(this,local_d0);
    iVar4 = FUN_042d2d60(0xc);
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + iVar4 + iVar6;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c8);
    FUN_042d3d9c((__normal_iterator *)&local_d8);
  } while( true );
}


/* PlantAdventureScrollPanel::PlantAdventureScrollPanel(Sexy::TRect<int>&, std::string) */

void __thiscall
PlantAdventureScrollPanel::PlantAdventureScrollPanel
          (PlantAdventureScrollPanel *this,TRect *param_1,undefined8 param_3)

{
  PrimeText *this_00;
  PlantAdventureConfig *pPVar1;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0682e440;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0682e768;
  PlantAdventureConfig::PlantAdventureConfig((PlantAdventureConfig *)(this + 0xe0));
  FUN_05475d88(this + 0x128,param_3);
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  pPVar1 = (PlantAdventureConfig *)LawnApp::GetPlantAdventureConfig(gLawnApp);
  PlantAdventureConfig::operator=((PlantAdventureConfig *)(this + 0xe0),pPVar1);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  InitView(this);
  return;
}


/* PlantAdventureScrollPanel::ButtonDepress(int) */

void __thiscall
PlantAdventureScrollPanel::ButtonDepress(PlantAdventureScrollPanel *this,int param_1)

{
  LawnApp *this_00;
  int iVar1;
  PlantAdventureUI *this_01;
  
  this_00 = gLawnApp;
  iVar1 = LawnApp::GetPlantAdventureTabIndex(gLawnApp);
  if (((iVar1 != param_1) && (param_1 - 1U < 999)) &&
     (this_01 = (PlantAdventureUI *)LawnApp::GetPlantAdventureUI(this_00),
     this_01 != (PlantAdventureUI *)0x0)) {
    PlantAdventureUI::SetTabIndex(this_01,param_1);
    return;
  }
  return;
}


/* non-virtual thunk to PlantAdventureScrollPanel::ButtonDepress(int) */

void __thiscall
PlantAdventureScrollPanel::ButtonDepress(PlantAdventureScrollPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


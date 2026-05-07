// Class: PlantWarsLevelSelectManager


/* PlantWarsLevelSelectManager::CloseLevelSelectUI() */

void __thiscall PlantWarsLevelSelectManager::CloseLevelSelectUI(PlantWarsLevelSelectManager *this)

{
  if (*(long *)(this + 0x20) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x20));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x20));
  }
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


/* PlantWarsLevelSelectManager::CloseZombieDetails() */

void __thiscall PlantWarsLevelSelectManager::CloseZombieDetails(PlantWarsLevelSelectManager *this)

{
  long *plVar1;
  
  if (*(long *)(this + 0x28) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x28));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
    plVar1 = (long *)gLawnApp[0x13e];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 800))(plVar1,0);
    }
  }
  return;
}


/* PlantWarsLevelSelectManager::CloseEndLevelUI() */

void __thiscall PlantWarsLevelSelectManager::CloseEndLevelUI(PlantWarsLevelSelectManager *this)

{
  if (*(long *)(this + 0x30) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x30));
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  return;
}


/* PlantWarsLevelSelectManager::PlantWarsLevelSelectManager() */

void __thiscall
PlantWarsLevelSelectManager::PlantWarsLevelSelectManager(PlantWarsLevelSelectManager *this)

{
  Sexy::LazySingleton<PlantWarsLevelSelectManager>::LazySingleton
            ((LazySingleton<PlantWarsLevelSelectManager> *)this);
  *(undefined ***)this = &PTR__PlantWarsLevelSelectManager_069bb5b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


/* PlantWarsLevelSelectManager::~PlantWarsLevelSelectManager() */

void __thiscall
PlantWarsLevelSelectManager::~PlantWarsLevelSelectManager(PlantWarsLevelSelectManager *this)

{
  *(undefined ***)this = &PTR__PlantWarsLevelSelectManager_069bb5b0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 8));
  Sexy::LazySingleton<PlantWarsLevelSelectManager>::~LazySingleton
            ((LazySingleton<PlantWarsLevelSelectManager> *)this);
  return;
}


/* PlantWarsLevelSelectManager::~PlantWarsLevelSelectManager() */

void __thiscall
PlantWarsLevelSelectManager::~PlantWarsLevelSelectManager(PlantWarsLevelSelectManager *this)

{
  ~PlantWarsLevelSelectManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelSelectManager::IsPlantBanned(std::string const&) */

void __thiscall
PlantWarsLevelSelectManager::IsPlantBanned(PlantWarsLevelSelectManager *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantWarsLevelSelectManager::SetPlantBanList(std::vector<std::string, std::allocator<std::string
   > > const&) */

void __thiscall
PlantWarsLevelSelectManager::SetPlantBanList(PlantWarsLevelSelectManager *this,vector *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 8),param_1);
  return;
}


/* PlantWarsLevelSelectManager::ShowLevelSelectUI(std::string const&) */

long __thiscall
PlantWarsLevelSelectManager::ShowLevelSelectUI(PlantWarsLevelSelectManager *this,string *param_1)

{
  PlantWarsLevelSelectUI *this_00;
  
  if (*(long *)(this + 0x20) != 0) {
    return *(long *)(this + 0x20);
  }
  this_00 = ::operator_new(0x178);
  PlantWarsLevelSelectUI::PlantWarsLevelSelectUI(this_00);
  *(PlantWarsLevelSelectUI **)(this + 0x20) = this_00;
  PlantWarsLevelSelectUI::Init(this_00,param_1);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x20));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x20));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x20))
  ;
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x20));
  return *(long *)(this + 0x20);
}


/* PlantWarsLevelSelectManager::ShowZombieDetails(ShowZombieTitles const&) */

long __thiscall
PlantWarsLevelSelectManager::ShowZombieDetails
          (PlantWarsLevelSelectManager *this,ShowZombieTitles *param_1)

{
  PlantWarsZombieDetails *this_00;
  
  if (*(long *)(this + 0x28) != 0) {
    return *(long *)(this + 0x28);
  }
  this_00 = ::operator_new(0x1b0);
  PlantWarsZombieDetails::PlantWarsZombieDetails(this_00);
  *(PlantWarsZombieDetails **)(this + 0x28) = this_00;
  PlantWarsZombieDetails::Init(this_00,param_1);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x28));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x28));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x28))
  ;
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x28));
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
  }
  return *(long *)(this + 0x28);
}


/* PlantWarsLevelSelectManager::ShowEndLevelUI(bool, bool) */

long __thiscall
PlantWarsLevelSelectManager::ShowEndLevelUI
          (PlantWarsLevelSelectManager *this,bool param_1,bool param_2)

{
  PlantWarsEndLevelUI *this_00;
  
  if (*(long *)(this + 0x30) != 0) {
    return *(long *)(this + 0x30);
  }
  this_00 = ::operator_new(0x158);
  PlantWarsEndLevelUI::PlantWarsEndLevelUI(this_00);
  *(PlantWarsEndLevelUI **)(this + 0x30) = this_00;
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  PlantWarsEndLevelUI::Init(*(PlantWarsEndLevelUI **)(this + 0x30),param_1,param_2);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x30));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x30));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x30))
  ;
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x30));
  PlantWarsEndLevelUI::ShowReward(*(PlantWarsEndLevelUI **)(this + 0x30));
  return *(long *)(this + 0x30);
}


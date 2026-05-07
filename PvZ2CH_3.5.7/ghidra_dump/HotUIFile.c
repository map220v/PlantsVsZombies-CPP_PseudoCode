// Class: HotUIFile


/* HotUISeedPacketList* HotUIFile::GetWidgetByName<HotUISeedPacketList>(std::string const&) */

HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIFile::FindHotSwapDataByWidget(Sexy::RtWeakPtr<HotUIWidget>) */

void __thiscall HotUIFile::FindHotSwapDataByWidget(HotUIFile *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)(lVar3 + 8));
    if (cVar1 != '\0') goto LAB_03625610;
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  lVar3 = 0;
LAB_03625610:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIFile::GetWidgetByType(Sexy::RtClass const*) */

void __thiscall HotUIFile::GetWidgetByType(HotUIFile *this,RtClass *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      uVar6 = 0;
LAB_036256ec:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar6);
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    puVar4 = (undefined8 *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8));
    plVar5 = (long *)(**(code **)*puVar4)();
    cVar1 = (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
    if (cVar1 != '\0') {
      uVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8))
      ;
      goto LAB_036256ec;
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIFile::GetEntryPointWidget() */

void __thiscall HotUIFile::GetEntryPointWidget(HotUIFile *this)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar4 = 0;
LAB_036257a8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x10));
    if (*(char *)(lVar3 + 0x109) != '\0') {
      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 8))
      ;
      goto LAB_036257a8;
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIFile::GetWidgetByName(std::string const&) */

void __thiscall HotUIFile::GetWidgetByName(HotUIFile *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x10));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar5 = 0;
LAB_03625870:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x10));
    iVar2 = FUN_054748a4(param_1,lVar4 + 0x10);
    if (iVar2 == 0) {
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 8))
      ;
      goto LAB_03625870;
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* HotUIFile::HasWidgetByName(std::string const&) */

bool __thiscall HotUIFile::HasWidgetByName(HotUIFile *this,string *param_1)

{
  long lVar1;
  
  lVar1 = GetWidgetByName(this,param_1);
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIFile::RemoveWidgetsFromApp() */

void __thiscall HotUIFile::RemoveWidgetsFromApp(HotUIFile *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)puVar2[1] + 0x68))((long *)puVar2[1],*puVar2);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  std::
  vector<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>,std::allocator<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>>>
  ::clear((vector<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>,std::allocator<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>>>
           *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIFile::AddWidget(std::string const&, Sexy::RtWeakPtr<HotUIWidget>,
   Sexy::RtWeakPtr<HotUIWidgetProperties>) */

void __thiscall
HotUIFile::AddWidget
          (HotUIFile *this,undefined8 param_1,RtWeakPtrBase *param_3,RtWeakPtrBase *param_4)

{
  long lVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_3);
  lVar1 = FindHotSwapDataByWidget(this,aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (lVar1 == 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,param_3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_4);
    WidgetHotSwapData::WidgetHotSwapData
              ((WidgetHotSwapData *)aRStack_20,param_1,aRStack_30,aRStack_28);
    std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::push_back
              ((vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>> *)(this + 0x10),
               (WidgetHotSwapData *)aRStack_20);
    WidgetHotSwapData::~WidgetHotSwapData((WidgetHotSwapData *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIFile::AddComponent(Sexy::RtWeakPtr<HotUIComponent>,
   Sexy::RtWeakPtr<HotUIComponentProperties>) */

void __thiscall
HotUIFile::AddComponent(HotUIFile *this,RtWeakPtrBase *param_2,RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  DragonBruitLauncherEntry aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,param_2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_3);
  ComponentHotSwapData::ComponentHotSwapData
            ((ComponentHotSwapData *)aDStack_18,aRStack_28,aRStack_20);
  std::vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>>::push_back
            ((vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>> *)(this + 0x28),
             (ComponentHotSwapData *)aDStack_18);
  DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry(aDStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIFile::AddWidgetToApp(Sexy::Widget*, Sexy::WidgetContainer*) */

void __thiscall HotUIFile::AddWidgetToApp(HotUIFile *this,Widget *param_1,WidgetContainer *param_2)

{
  WidgetContainer *local_30;
  Widget *local_28 [2];
  pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = param_2;
  local_28[0] = param_1;
  (**(code **)(*(long *)param_2 + 0x60))(param_2);
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*>::
  pair<std::_Rb_tree_node<std::pair<int_const,std::wstring>>*&,std::_Rb_tree_node<std::pair<int_const,std::wstring>>*&,void>
            (apStack_18,(_Rb_tree_node **)local_28,(_Rb_tree_node **)&local_30);
  std::
  vector<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>,std::allocator<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>>>
  ::push_back((vector<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>,std::allocator<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>>>
               *)(this + 0x40),(pair *)apStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIFile::HotUIFile(std::string const&) */

void __thiscall HotUIFile::HotUIFile(HotUIFile *this,string *param_1)

{
  *(undefined ***)this = &PTR__HotUIFile_0666f750;
  Set8BytesTo0(this + 8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  thunk_FUN_05475e00(this + 8,param_1);
  return;
}


/* HotUIFile::~HotUIFile() */

void __thiscall HotUIFile::~HotUIFile(HotUIFile *this)

{
  *(undefined ***)this = &PTR__HotUIFile_0666f750;
  std::
  vector<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>,std::allocator<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>>>
  ::~vector((vector<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>,std::allocator<std::pair<Sexy::Widget*,Sexy::WidgetContainer*>>>
             *)(this + 0x40));
  std::vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>>::~vector
            ((vector<ComponentHotSwapData,std::allocator<ComponentHotSwapData>> *)(this + 0x28));
  std::vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>>::~vector
            ((vector<WidgetHotSwapData,std::allocator<WidgetHotSwapData>> *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* HotUIFile::~HotUIFile() */

void __thiscall HotUIFile::~HotUIFile(HotUIFile *this)

{
  ~HotUIFile(this);
  AK::FreeHook(this);
  return;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


HotUISeedPacketList * __thiscall
HotUIFile::GetWidgetByName<HotUISeedPacketList>(HotUIFile *this,string *param_1)

{
  HotUISeedPacketList *extraout_x0;
  
  GetWidgetByName(this,param_1);
  nop();
  return extraout_x0;
}


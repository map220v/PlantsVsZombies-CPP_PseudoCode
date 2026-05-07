// Class: PlantScrollPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantScrollPanel::InitView() */

void __thiscall PlantScrollPanel::InitView(PlantScrollPanel *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string *psVar7;
  PlantHeadshot *this_02;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_044e61ac(3);
  Sexy::Insets::Insets((Insets *)&local_28);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xd8));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xd8));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  iVar6 = iVar3;
  if (bVar1) {
    do {
      psVar7 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      FUN_05475d88((string *)&local_18,psVar7);
      this_02 = ::operator_new(0x138);
      PlantHeadshot::PlantHeadshot(this_02,(string *)&local_18);
      std::string::~string((string *)&local_18);
      iVar4 = FUN_044e61ac(0x3c);
      iVar5 = FUN_044e61ac(3);
      if (*(int *)(this + 0x50) < iVar4 + iVar6 + iVar5) {
        iVar3 = iVar3 + iVar4 + iVar5;
        iVar6 = iVar5;
      }
      Sexy::Insets::Insets((Insets *)&local_18,iVar6,iVar3,iVar4,iVar4);
      local_28 = local_18;
      uStack_20 = uStack_10;
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,(Insets *)&local_28);
      if ((this_01 != (PlayerInfo *)0x0) &&
         (cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,psVar7), cVar2 == '\0')) {
        PlantHeadshot::SetNeedLock(this_02,true);
      }
      (**(code **)(*(long *)this + 0x60))(this,this_02);
      iVar4 = FUN_044e61ac(0x3c);
      iVar5 = FUN_044e61ac(3);
      iVar6 = iVar6 + iVar4 + iVar5;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    } while (bVar1);
  }
  iVar6 = FUN_044e61ac(0x3c);
  iVar4 = FUN_044e61ac(3);
  *(int *)(this + 0x54) = iVar6 + iVar3 + iVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantScrollPanel::~PlantScrollPanel() */

void __thiscall PlantScrollPanel::~PlantScrollPanel(PlantScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06855bd0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantScrollPanel::~PlantScrollPanel() */

void __thiscall PlantScrollPanel::~PlantScrollPanel(PlantScrollPanel *this)

{
  ~PlantScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* PlantScrollPanel::PlantScrollPanel(Sexy::TRect<int>&, std::vector<std::string,
   std::allocator<std::string > > const&) */

void __thiscall
PlantScrollPanel::PlantScrollPanel(PlantScrollPanel *this,TRect *param_1,vector *param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06855bd0;
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8),param_2);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  InitView(this);
  return;
}


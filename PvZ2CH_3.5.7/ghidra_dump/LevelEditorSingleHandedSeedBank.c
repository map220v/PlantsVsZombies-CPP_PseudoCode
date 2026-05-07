// Class: LevelEditorSingleHandedSeedBank


/* LevelEditorSingleHandedSeedBank::OnRemoved(int) */

void __thiscall
LevelEditorSingleHandedSeedBank::OnRemoved(LevelEditorSingleHandedSeedBank *this,int param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  int *piVar5;
  LevelEditorCardInfo *pLVar6;
  CustomLevelMgr *this_00;
  undefined8 uVar7;
  LevelEditorSeedPacket *this_01;
  long lVar8;
  PVZ1ModeNetworkMgr *this_02;
  int iVar9;
  
  if (param_1 < 7) {
    lVar8 = (long)param_1;
    iVar9 = param_1;
    do {
      uVar7 = *(undefined8 *)(this + 0xf8);
      lVar2 = lVar8 + 1;
      iVar1 = iVar9 + 1;
      puVar4 = (undefined8 *)FUN_04b2d92c(uVar7,lVar2);
      this_02 = (PVZ1ModeNetworkMgr *)*puVar4;
      cVar3 = FUN_04b2d868(this_02[0x108]);
      if (cVar3 != '\0') {
        puVar4 = (undefined8 *)FUN_04b2d92c(uVar7,(long)iVar9);
        this_01 = (LevelEditorSeedPacket *)*puVar4;
        piVar5 = (int *)PVZ1ModeNetworkMgr::GetEndPlayInfo((PVZ1ModeNetworkMgr *)this_01);
        iVar9 = *piVar5;
        goto joined_r0x04b37464;
      }
      puVar4 = (undefined8 *)FUN_04b2d92c(uVar7,lVar8);
      pLVar6 = (LevelEditorCardInfo *)PVZ1ModeNetworkMgr::GetEndPlayInfo(this_02);
      LevelEditorSeedPacket::ChangeCardInfo((LevelEditorSeedPacket *)*puVar4,pLVar6);
      lVar8 = lVar2;
      iVar9 = iVar1;
    } while (iVar1 != 7);
    puVar4 = (undefined8 *)FUN_04b2d92c(*(undefined8 *)(this + 0xf8),lVar2);
    this_01 = (LevelEditorSeedPacket *)*puVar4;
    piVar5 = (int *)PVZ1ModeNetworkMgr::GetEndPlayInfo((PVZ1ModeNetworkMgr *)this_01);
    iVar9 = *piVar5;
joined_r0x04b37464:
    if (iVar9 == 0) {
      (**(code **)(*(long *)this_01 + 0x188))(this_01,1);
    }
    else {
      LevelEditorSeedPacket::ClearCardInfo(this_01);
    }
    if (param_1 == 0) {
      this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
      CustomLevelMgr::RemoveUpgradePlant(this_00,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSeedBank::Reload() */

void __thiscall LevelEditorSingleHandedSeedBank::Reload(LevelEditorSingleHandedSeedBank *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    LevelEditorSingleHandedSeedPacket::ManualReload((LevelEditorSingleHandedSeedPacket *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorSingleHandedSeedBank::~LevelEditorSingleHandedSeedBank() */

void __thiscall
LevelEditorSingleHandedSeedBank::~LevelEditorSingleHandedSeedBank
          (LevelEditorSingleHandedSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0695f600;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695f948;
  std::vector<LevelEditorSingleHandedSeedPacket*,std::allocator<LevelEditorSingleHandedSeedPacket*>>
  ::~vector((vector<LevelEditorSingleHandedSeedPacket*,std::allocator<LevelEditorSingleHandedSeedPacket*>>
             *)(this + 0xf8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorSingleHandedSeedBank::~LevelEditorSingleHandedSeedBank() */

void __thiscall
LevelEditorSingleHandedSeedBank::~LevelEditorSingleHandedSeedBank
          (LevelEditorSingleHandedSeedBank *this)

{
  ~LevelEditorSingleHandedSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorSingleHandedSeedBank::LevelEditorSingleHandedSeedBank() */

void __thiscall
LevelEditorSingleHandedSeedBank::LevelEditorSingleHandedSeedBank
          (LevelEditorSingleHandedSeedBank *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0695f600;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695f948;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSeedBank::RemovePlant(std::string, int) */

void LevelEditorSingleHandedSeedBank::RemovePlant(long param_1,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0xe0);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10,param_2);
  local_28 = FUN_04b40188(uVar2,uVar3,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<std::string,std::allocator<std::string>>::erase
              ((vector<std::string,std::allocator<std::string>> *)this,local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSeedBank::AddPlant(std::string, int) */

void __thiscall
LevelEditorSingleHandedSeedBank::AddPlant
          (LevelEditorSingleHandedSeedBank *this,string *param_2,int param_3)

{
  char cVar1;
  undefined8 *puVar2;
  CustomLevelMgr *this_00;
  code *pcVar3;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = *(code **)(*(long *)this + 800);
  FUN_05475d88(asStack_10);
  cVar1 = (*pcVar3)(this,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)FUN_04b2d92c(*(undefined8 *)(this + 0xf8),(long)param_3);
    (**(code **)(*(long *)*puVar2 + 0x188))((long *)*puVar2,0);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0),param_2);
    if (param_3 < 7) {
      local_14 = 0;
      std::string::string(asStack_10,"");
      nop();
      if (0 < param_3) {
        this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
        CustomLevelMgr::GetUpgradePlant(this_00,param_3 + -1,asStack_10,&local_14);
      }
      if (local_14 < 0x96) {
        puVar2 = (undefined8 *)FUN_04b2d92c(*(undefined8 *)(this + 0xf8),(long)(param_3 + 1));
        (**(code **)(*(long *)*puVar2 + 0x188))((long *)*puVar2,0);
      }
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSingleHandedSeedBank::Init() */

void __thiscall LevelEditorSingleHandedSeedBank::Init(LevelEditorSingleHandedSeedBank *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  LevelEditorSingleHandedSeedPacket *this_00;
  int iVar5;
  LevelEditorSingleHandedSeedPacket *local_10;
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  do {
    this_00 = ::operator_new(0x110);
    LevelEditorSingleHandedSeedPacket::LevelEditorSingleHandedSeedPacket(this_00,this);
    local_10 = this_00;
    uVar2 = FUN_04b334ec(0);
    iVar3 = FUN_04b334ec(0x37);
    uVar4 = FUN_04b334ec(0x5a);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar2,iVar3 * iVar5,uVar4,iVar3);
    LevelEditorSeedPacket::Init((LevelEditorSeedPacket *)local_10,iVar5);
    bVar1 = iVar5 != 0;
    iVar5 = iVar5 + 1;
    (**(code **)(*(long *)local_10 + 0x188))(local_10,bVar1);
    (**(code **)(*(long *)this + 0x60))(this,local_10);
    std::
    vector<LevelEditorSingleHandedSeedPacket*,std::allocator<LevelEditorSingleHandedSeedPacket*>>::
    push_back((vector<LevelEditorSingleHandedSeedPacket*,std::allocator<LevelEditorSingleHandedSeedPacket*>>
               *)(this + 0xf8),&local_10);
  } while (iVar5 != 8);
  (**(code **)(*(long *)this + 0x318))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


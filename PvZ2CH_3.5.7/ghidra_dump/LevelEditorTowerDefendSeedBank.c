// Class: LevelEditorTowerDefendSeedBank


/* LevelEditorTowerDefendSeedBank::Init() */

void __thiscall LevelEditorTowerDefendSeedBank::Init(LevelEditorTowerDefendSeedBank *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  LevelEditorTowerDefendSeedPacket *this_00;
  int iVar4;
  
  iVar4 = 0;
  do {
    this_00 = ::operator_new(0x108);
    LevelEditorTowerDefendSeedPacket::LevelEditorTowerDefendSeedPacket(this_00,this);
    uVar1 = FUN_04b334ec(0);
    iVar2 = FUN_04b334ec(0x37);
    uVar3 = FUN_04b334ec(0x5a);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,iVar2 * iVar4,uVar3,iVar2);
    iVar2 = iVar4 + 1;
    LevelEditorSeedPacket::Init((LevelEditorSeedPacket *)this_00,iVar4);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    iVar4 = iVar2;
  } while (iVar2 != 8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendSeedBank::CheckValidPlant(std::string) */

void __thiscall
LevelEditorTowerDefendSeedBank::CheckValidPlant
          (LevelEditorTowerDefendSeedBank *this,undefined8 param_2)

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
             *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* LevelEditorTowerDefendSeedBank::~LevelEditorTowerDefendSeedBank() */

void __thiscall
LevelEditorTowerDefendSeedBank::~LevelEditorTowerDefendSeedBank
          (LevelEditorTowerDefendSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_06960390;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069606d8;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorTowerDefendSeedBank::~LevelEditorTowerDefendSeedBank() */

void __thiscall
LevelEditorTowerDefendSeedBank::~LevelEditorTowerDefendSeedBank
          (LevelEditorTowerDefendSeedBank *this)

{
  ~LevelEditorTowerDefendSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* LevelEditorTowerDefendSeedBank::LevelEditorTowerDefendSeedBank() */

void __thiscall
LevelEditorTowerDefendSeedBank::LevelEditorTowerDefendSeedBank(LevelEditorTowerDefendSeedBank *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06960390;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_069606d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendSeedBank::RemovePlant(std::string) */

void __thiscall
LevelEditorTowerDefendSeedBank::RemovePlant(LevelEditorTowerDefendSeedBank *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10,param_2);
  local_28 = FUN_04b4053c(uVar2,uVar3,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_28);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<std::string,std::allocator<std::string>>::erase
              ((vector<std::string,std::allocator<std::string>> *)this_00,local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorTowerDefendSeedBank::AddPlant(std::string) */

void __thiscall
LevelEditorTowerDefendSeedBank::AddPlant(LevelEditorTowerDefendSeedBank *this,string *param_2)

{
  char cVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)this + 800);
  FUN_05475d88(asStack_10);
  cVar1 = (*pcVar2)(this,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 != '\0') {
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0),param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


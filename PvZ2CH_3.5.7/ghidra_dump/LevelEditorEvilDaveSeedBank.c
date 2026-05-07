// Class: LevelEditorEvilDaveSeedBank


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveSeedBank::Init() */

void __thiscall LevelEditorEvilDaveSeedBank::Init(LevelEditorEvilDaveSeedBank *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LevelEditorEvilDaveSeedPacket *this_00;
  PVZ2UIButton *this_01;
  undefined8 uVar6;
  int iVar7;
  code *pcVar8;
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = 0;
  do {
    this_00 = ::operator_new(0x108);
    LevelEditorEvilDaveSeedPacket::LevelEditorEvilDaveSeedPacket(this_00,this);
    uVar1 = FUN_04b334ec(0);
    iVar2 = FUN_04b334ec(0x37);
    uVar3 = FUN_04b334ec(0x5a);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,iVar2 * iVar7,uVar3,iVar2);
    iVar2 = iVar7 + 1;
    LevelEditorSeedPacket::Init((LevelEditorSeedPacket *)this_00,iVar7);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
    iVar7 = iVar2;
  } while (iVar2 != 8);
  TodStringTranslate(L"[LEVEL_EDITOR_EVIL_DAVE_SET_DISTANCE]");
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_01 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_01,0x21,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b859c0,3);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06b85318,3);
  PVZ2UIButton::SetDialogStates(this_01,(PVZ2UIImage *)awStack_78,aPStack_40);
  uVar1 = FUN_04b334ec(0);
  uVar3 = FUN_04b334ec(0x1b8);
  uVar4 = FUN_04b334ec(0x5a);
  uVar5 = FUN_04b334ec(0x1e);
  (**(code **)(*(long *)this_01 + 0x198))(this_01,uVar1,uVar3,uVar4,uVar5);
  pcVar8 = *(code **)(*(long *)this_01 + 800);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_16);
  (*pcVar8)(this_01,uVar6);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveSeedBank::ButtonDepress(int) */

void __thiscall
LevelEditorEvilDaveSeedBank::ButtonDepress(LevelEditorEvilDaveSeedBank *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LevelEditorDistanceSetting *this_00;
  code *pcVar5;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x21) {
    this_00 = ::operator_new(0x180);
    LevelEditorDistanceSetting::LevelEditorDistanceSetting(this_00);
    pcVar5 = *(code **)(*(long *)this_00 + 0x198);
    (**(code **)(*(long *)this + 0xd0))(local_10,this);
    iVar1 = FUN_04b334ec(100);
    uVar2 = FUN_04b334ec(0x46);
    uVar3 = FUN_04b334ec(400);
    uVar4 = FUN_04b334ec(0x104);
    (*pcVar5)(this_00,local_10[0] + iVar1,uVar2,uVar3,uVar4);
    LevelEditorDistanceSetting::Init(this_00);
    UIUtil::ShowDialog((Widget *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorEvilDaveSeedBank::ButtonDepress(int) */

void __thiscall
LevelEditorEvilDaveSeedBank::ButtonDepress(LevelEditorEvilDaveSeedBank *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* LevelEditorEvilDaveSeedBank::LevelEditorEvilDaveSeedBank() */

void __thiscall
LevelEditorEvilDaveSeedBank::LevelEditorEvilDaveSeedBank(LevelEditorEvilDaveSeedBank *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0695e4c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695e7e8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  return;
}


/* LevelEditorEvilDaveSeedBank::~LevelEditorEvilDaveSeedBank() */

void __thiscall
LevelEditorEvilDaveSeedBank::~LevelEditorEvilDaveSeedBank(LevelEditorEvilDaveSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0695e4c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695e7e8;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorEvilDaveSeedBank::~LevelEditorEvilDaveSeedBank() */

void __thiscall
LevelEditorEvilDaveSeedBank::~LevelEditorEvilDaveSeedBank(LevelEditorEvilDaveSeedBank *this)

{
  ~LevelEditorEvilDaveSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorEvilDaveSeedBank::RemoveTypeName(std::string const&) */

void __thiscall
LevelEditorEvilDaveSeedBank::RemoveTypeName(LevelEditorEvilDaveSeedBank *this,string *param_1)

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
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_10,param_1);
  local_28 = FUN_04b3fb60(uVar2,uVar3,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_10);
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


/* LevelEditorEvilDaveSeedBank::AddTypeName(std::string const&) */

void __thiscall
LevelEditorEvilDaveSeedBank::AddTypeName(LevelEditorEvilDaveSeedBank *this,string *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe0),param_1);
  return;
}


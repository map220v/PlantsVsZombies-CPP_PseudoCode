// Class: LevelEditorConveyorSeedBank


/* LevelEditorConveyorSeedBank::onGlobalLevelChange(int) */

void __thiscall
LevelEditorConveyorSeedBank::onGlobalLevelChange(LevelEditorConveyorSeedBank *this,int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xd8);
    uVar2 = FUN_04b2d8dc(uVar4,*(undefined8 *)(this + 0xe0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_04b2d8e8(uVar4,uVar3);
    LevelEditorSeedPacket::ChangeLevel((LevelEditorSeedPacket *)*puVar1,param_1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* LevelEditorConveyorSeedBank::LevelEditorConveyorSeedBank() */

void __thiscall
LevelEditorConveyorSeedBank::LevelEditorConveyorSeedBank(LevelEditorConveyorSeedBank *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06958f10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  return;
}


/* LevelEditorConveyorSeedBank::~LevelEditorConveyorSeedBank() */

void __thiscall
LevelEditorConveyorSeedBank::~LevelEditorConveyorSeedBank(LevelEditorConveyorSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_06958f10;
  std::vector<LevelEditorConveyorSeedPacket*,std::allocator<LevelEditorConveyorSeedPacket*>>::
  ~vector((vector<LevelEditorConveyorSeedPacket*,std::allocator<LevelEditorConveyorSeedPacket*>> *)
          (this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorConveyorSeedBank::~LevelEditorConveyorSeedBank() */

void __thiscall
LevelEditorConveyorSeedBank::~LevelEditorConveyorSeedBank(LevelEditorConveyorSeedBank *this)

{
  ~LevelEditorConveyorSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorConveyorSeedBank::Init() */

void __thiscall LevelEditorConveyorSeedBank::Init(LevelEditorConveyorSeedBank *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  LevelEditorConveyorSeedPacket *pLVar4;
  int iVar5;
  LevelEditorConveyorSeedPacket *local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  do {
    pLVar4 = ::operator_new(0x128);
    LevelEditorConveyorSeedPacket::LevelEditorConveyorSeedPacket(pLVar4);
    local_30 = pLVar4;
    uVar1 = FUN_04b334ec(0);
    iVar2 = FUN_04b334ec(0x37);
    uVar3 = FUN_04b334ec(0x5a);
    (**(code **)(*(long *)pLVar4 + 0x198))(pLVar4,uVar1,iVar2 * iVar5,uVar3,iVar2);
    iVar2 = iVar5 + 1;
    LevelEditorSeedPacket::Init((LevelEditorSeedPacket *)local_30,iVar5);
    pLVar4 = local_30;
    FUN_04b3331c(afStack_28,this);
    LevelEditorConveyorSeedPacket::SetChangeGlobalLevelCallback(pLVar4,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    (**(code **)(*(long *)this + 0x60))(this,local_30);
    std::vector<LevelEditorConveyorSeedPacket*,std::allocator<LevelEditorConveyorSeedPacket*>>::
    push_back((vector<LevelEditorConveyorSeedPacket*,std::allocator<LevelEditorConveyorSeedPacket*>>
               *)(this + 0xd8),&local_30);
    iVar5 = iVar2;
  } while (iVar2 != 8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


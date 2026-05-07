// Class: LevelEditorVaseBreakerSeedBank


/* LevelEditorVaseBreakerSeedBank::GetTotalNumber() */

int __thiscall LevelEditorVaseBreakerSeedBank::GetTotalNumber(LevelEditorVaseBreakerSeedBank *this)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0xe0);
    uVar3 = FUN_04b65644(uVar5,*(undefined8 *)(this + 0xe8));
    if (uVar3 <= uVar4) break;
    puVar2 = (undefined8 *)FUN_04b65650(uVar5,uVar4);
    iVar1 = PuzzleRotatePanel::GetCurrentIndex((PuzzleRotatePanel *)*puVar2);
    iVar6 = iVar6 + iVar1;
    uVar4 = uVar4 + 1;
  }
  return iVar6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSeedBank::AutoSet(int) */

void __thiscall
LevelEditorVaseBreakerSeedBank::AutoSet(LevelEditorVaseBreakerSeedBank *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  NameMapperBase *this_00;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  string asStack_20 [8];
  PakRecord aPStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar8 = 0;
  GetTotalNumber(this);
  uVar7 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0xe0);
    uVar4 = FUN_04b65644(uVar6,*(undefined8 *)(this + 0xe8));
    if (uVar4 <= uVar7) break;
    uVar4 = uVar7 + 1;
    puVar5 = (undefined8 *)FUN_04b65650(uVar6,uVar7);
    iVar1 = PuzzleRotatePanel::GetCurrentIndex((PuzzleRotatePanel *)*puVar5);
    uVar7 = uVar4;
    if (0 < iVar1) {
      iVar8 = iVar8 + 1;
    }
  }
  if (iVar8 != 0) {
    iVar1 = 0;
    if (iVar8 != 0) {
      iVar1 = param_1 / iVar8;
    }
    iVar8 = param_1 - iVar1 * iVar8;
    for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1) {
      puVar5 = (undefined8 *)FUN_04b65650(uVar6,uVar7);
      iVar2 = PuzzleRotatePanel::GetCurrentIndex((PuzzleRotatePanel *)*puVar5);
      if (0 < iVar2) {
        iVar2 = iVar1;
        if (0 < iVar8) {
          iVar2 = iVar1 + 1;
        }
        iVar8 = iVar8 + -1;
        FUN_04b65650(*(undefined8 *)(this + 0xe0),uVar7);
        LevelEditorSeedPacket::GetCardInfo();
        FUN_05474148(asStack_20,auStack_10);
        PakRecord::~PakRecord(aPStack_18);
        this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        iVar3 = NameMapperBase::GetIdForName(this_00,asStack_20);
        CustomLevelUtils::SetVaseBreakerContent(uVar7 & 0xffffffff,iVar3 == -1,asStack_20,iVar2);
        std::string::~string(asStack_20);
      }
      uVar6 = *(undefined8 *)(this + 0xe0);
      uVar4 = FUN_04b65644(uVar6,*(undefined8 *)(this + 0xe8));
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LevelEditorVaseBreakerSeedBank::LevelEditorVaseBreakerSeedBank() */

void __thiscall
LevelEditorVaseBreakerSeedBank::LevelEditorVaseBreakerSeedBank(LevelEditorVaseBreakerSeedBank *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0696bde0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696c110;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<LevelEditorVaseBreakerSeedPacket*,std::allocator<LevelEditorVaseBreakerSeedPacket*>>::
  clear((vector<LevelEditorVaseBreakerSeedPacket*,std::allocator<LevelEditorVaseBreakerSeedPacket*>>
         *)(this + 0xe0));
  return;
}


/* LevelEditorVaseBreakerSeedBank::~LevelEditorVaseBreakerSeedBank() */

void __thiscall
LevelEditorVaseBreakerSeedBank::~LevelEditorVaseBreakerSeedBank
          (LevelEditorVaseBreakerSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0696bde0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0696c110;
  std::vector<LevelEditorVaseBreakerSeedPacket*,std::allocator<LevelEditorVaseBreakerSeedPacket*>>::
  ~vector((vector<LevelEditorVaseBreakerSeedPacket*,std::allocator<LevelEditorVaseBreakerSeedPacket*>>
           *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorVaseBreakerSeedBank::~LevelEditorVaseBreakerSeedBank() */

void __thiscall
LevelEditorVaseBreakerSeedBank::~LevelEditorVaseBreakerSeedBank
          (LevelEditorVaseBreakerSeedBank *this)

{
  ~LevelEditorVaseBreakerSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorVaseBreakerSeedBank::Init() */

void __thiscall LevelEditorVaseBreakerSeedBank::Init(LevelEditorVaseBreakerSeedBank *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  LevelEditorVaseBreakerSeedPacket *this_00;
  int iVar4;
  LevelEditorVaseBreakerSeedPacket *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  do {
    this_00 = ::operator_new(0x118);
    LevelEditorVaseBreakerSeedPacket::LevelEditorVaseBreakerSeedPacket(this_00,this);
    local_10 = this_00;
    uVar1 = FUN_04b665cc(0);
    iVar2 = FUN_04b665cc(0x37);
    uVar3 = FUN_04b665cc(0x5a);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,iVar2 * iVar4,uVar3,iVar2);
    iVar2 = iVar4 + 1;
    LevelEditorSeedPacket::Init((LevelEditorSeedPacket *)local_10,iVar4);
    (**(code **)(*(long *)this + 0x60))(this,local_10);
    std::vector<LevelEditorVaseBreakerSeedPacket*,std::allocator<LevelEditorVaseBreakerSeedPacket*>>
    ::push_back((vector<LevelEditorVaseBreakerSeedPacket*,std::allocator<LevelEditorVaseBreakerSeedPacket*>>
                 *)(this + 0xe0),&local_10);
    iVar4 = iVar2;
  } while (iVar2 != 8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


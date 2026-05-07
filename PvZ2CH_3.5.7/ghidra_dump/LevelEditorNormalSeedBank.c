// Class: LevelEditorNormalSeedBank


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorNormalSeedBank::OnTutorialCreated() */

void __thiscall LevelEditorNormalSeedBank::OnTutorialCreated(LevelEditorNormalSeedBank *this)

{
  long *plVar1;
  long lVar2;
  string asStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)FUN_04b2d8c0(*(undefined8 *)(this + 0xe0),3);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    std::string::string(asStack_20,"[CUSTOM_LEVEL_TUTORIAL_3]");
    Sexy::Insets::Insets(aIStack_18);
    GameMaskUI::ShowMask(lVar2,1,asStack_20,aIStack_18);
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorNormalSeedBank::onGlobalLevelChange(int) */

void __thiscall
LevelEditorNormalSeedBank::onGlobalLevelChange(LevelEditorNormalSeedBank *this,int param_1)

{
  PrimeGlyphCache *this_00;
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  this_00 = (PrimeGlyphCache *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
  Sexy::PrimeGlyphCache::SetGlyphPadding(this_00,param_1);
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xe0);
    uVar2 = FUN_04b2d8c8(uVar4,*(undefined8 *)(this + 0xe8));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_04b2d8c0(uVar4,uVar3);
    (**(code **)(*(long *)*puVar1 + 0x310))((long *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorNormalSeedBank::LevelEditorNormalSeedBank() */

void __thiscall
LevelEditorNormalSeedBank::LevelEditorNormalSeedBank(LevelEditorNormalSeedBank *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0695bb30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695be58;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnTutorialCreated);
  Sexy::Delegate0::Delegate0<LevelEditorNormalSeedBank,void(LevelEditorNormalSeedBank::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe
            ((MessageRouter *)this_00,Message::CustomLevelTutorialSeedBankCreated,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEditorNormalSeedBank::~LevelEditorNormalSeedBank() */

void __thiscall
LevelEditorNormalSeedBank::~LevelEditorNormalSeedBank(LevelEditorNormalSeedBank *this)

{
  *(undefined ***)this = &PTR_GetClass_0695bb30;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0695be58;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<LevelEditorNormalSeedPacket*,std::allocator<LevelEditorNormalSeedPacket*>>::~vector
            ((vector<LevelEditorNormalSeedPacket*,std::allocator<LevelEditorNormalSeedPacket*>> *)
             (this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* LevelEditorNormalSeedBank::~LevelEditorNormalSeedBank() */

void __thiscall
LevelEditorNormalSeedBank::~LevelEditorNormalSeedBank(LevelEditorNormalSeedBank *this)

{
  ~LevelEditorNormalSeedBank(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorNormalSeedBank::Init() */

void __thiscall LevelEditorNormalSeedBank::Init(LevelEditorNormalSeedBank *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LevelEditorNormalSeedPacket *pLVar6;
  PVZ2UIButton *this_00;
  undefined8 uVar7;
  int iVar8;
  code *pcVar9;
  undefined1 auStack_a0 [8];
  function<bool(Sexy::Touch_const&)> afStack_98 [32];
  wstring awStack_78 [56];
  LevelEditorNormalSeedPacket *local_40 [7];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar8 = 0;
  do {
    pLVar6 = ::operator_new(0x120);
    LevelEditorNormalSeedPacket::LevelEditorNormalSeedPacket(pLVar6);
    local_40[0] = pLVar6;
    uVar1 = FUN_04b334ec(0);
    iVar2 = FUN_04b334ec(0x37);
    uVar3 = FUN_04b334ec(0x5a);
    (**(code **)(*(long *)pLVar6 + 0x198))(pLVar6,uVar1,iVar2 * iVar8,uVar3,iVar2);
    iVar2 = iVar8 + 1;
    LevelEditorSeedPacket::Init((LevelEditorSeedPacket *)local_40[0],iVar8);
    pLVar6 = local_40[0];
    FUN_04b33260(afStack_98,this);
    LevelEditorNormalSeedPacket::SetChangeGlobalLevelCallback(pLVar6,afStack_98);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_98);
    (**(code **)(*(long *)this + 0x60))(this,local_40[0]);
    std::vector<LevelEditorNormalSeedPacket*,std::allocator<LevelEditorNormalSeedPacket*>>::
    push_back((vector<LevelEditorNormalSeedPacket*,std::allocator<LevelEditorNormalSeedPacket*>> *)
              (this + 0xe0),local_40);
    iVar8 = iVar2;
  } while (iVar2 != 8);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_a0);
  Sexy::Color::Color((Color *)local_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0x20,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)local_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06b858c8,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06b858c8,2);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)local_40);
  uVar1 = FUN_04b334ec(0);
  uVar3 = FUN_04b334ec(0x1b8);
  uVar4 = FUN_04b334ec(0x5a);
  uVar5 = FUN_04b334ec(0x28);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar3,uVar4,uVar5);
  pcVar9 = *(code **)(*(long *)this_00 + 800);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_16);
  (*pcVar9)(this_00,uVar7);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorNormalSeedBank::ButtonDepress(int) */

void __thiscall
LevelEditorNormalSeedBank::ButtonDepress(LevelEditorNormalSeedBank *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LevelEditorDisablePlant *this_00;
  code *pcVar5;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x20) {
    this_00 = ::operator_new(0x148);
    LevelEditorDisablePlant::LevelEditorDisablePlant(this_00);
    pcVar5 = *(code **)(*(long *)this_00 + 0x198);
    (**(code **)(*(long *)this + 0xd0))(local_10,this);
    iVar1 = FUN_04b334ec(100);
    uVar2 = FUN_04b334ec(0x46);
    uVar3 = FUN_04b334ec(0x1cc);
    uVar4 = FUN_04b334ec(0x1b8);
    (*pcVar5)(this_00,local_10[0] + iVar1,uVar2,uVar3,uVar4);
    LevelEditorDisablePlant::Init(this_00);
    UIUtil::ShowDialog((Widget *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to LevelEditorNormalSeedBank::ButtonDepress(int) */

void __thiscall
LevelEditorNormalSeedBank::ButtonDepress(LevelEditorNormalSeedBank *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


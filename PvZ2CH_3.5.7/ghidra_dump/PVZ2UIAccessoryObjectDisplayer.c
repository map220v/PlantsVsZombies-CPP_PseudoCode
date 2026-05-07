// Class: PVZ2UIAccessoryObjectDisplayer


/* PVZ2UIAccessoryObjectDisplayer::~PVZ2UIAccessoryObjectDisplayer() */

void __thiscall
PVZ2UIAccessoryObjectDisplayer::~PVZ2UIAccessoryObjectDisplayer
          (PVZ2UIAccessoryObjectDisplayer *this)

{
  *(undefined ***)this = &PTR_GetClass_06839170;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  FUN_05476c50(this + 0xe0);
  FUN_05476c50(this + 0xd8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIAccessoryObjectDisplayer::~PVZ2UIAccessoryObjectDisplayer() */

void __thiscall
PVZ2UIAccessoryObjectDisplayer::~PVZ2UIAccessoryObjectDisplayer
          (PVZ2UIAccessoryObjectDisplayer *this)

{
  ~PVZ2UIAccessoryObjectDisplayer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAccessoryObjectDisplayer::Resize(int, int, int, int) */

void __thiscall
PVZ2UIAccessoryObjectDisplayer::Resize
          (PVZ2UIAccessoryObjectDisplayer *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  iVar1 = FUN_043772fc(0x4e);
  iVar2 = FUN_043772fc(0xe);
  iVar3 = FUN_043772fc(0x9a);
  Sexy::Insets::Insets(aIStack_18,iVar2,iVar1,iVar3,(*(int *)(this + 0x54) - iVar1) - iVar2);
  (**(code **)(**(long **)(this + 0xf8) + 0x1a0))(*(long **)(this + 0xf8),aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAccessoryObjectDisplayer::Draw(Sexy::Graphics*) */

void __thiscall
PVZ2UIAccessoryObjectDisplayer::Draw(PVZ2UIAccessoryObjectDisplayer *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  Insets aIStack_58 [16];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x1c8))(this,param_1,1);
  Sexy::Insets::Insets(aIStack_58,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar2 = FUN_043772fc(0xe);
  iVar3 = FUN_043772fc(0xfffffffc);
  iVar4 = FUN_043772fc(0x1c);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_043772fc(0x40);
  Sexy::Insets::Insets(aIStack_48,iVar2,iVar3,iVar1 - iVar4,iVar5);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0xd8,aIStack_48,uVar6,aCStack_18,5,1);
  iVar1 = *(int *)(*(long *)(this + 0xf8) + 0x48);
  iVar2 = *(int *)(*(long *)(this + 0xf8) + 0x50);
  iVar3 = FUN_043772fc(0xe);
  iVar1 = iVar1 + iVar2 + iVar3;
  fVar7 = (float)FUN_04377390(0x43390000);
  iVar5 = (int)fVar7;
  Sexy::Insets::Insets
            (aIStack_38,iVar1,iVar5,(*(int *)(this + 0x50) - iVar1) - iVar3,
             (*(int *)(this + 0x54) - iVar5) - iVar3);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_18,0,0x7c,0);
  WriteWordInRect(param_1,this + 0xe8,aIStack_38,uVar6,aCStack_18,0,1);
  iVar3 = FUN_043772fc(0x50);
  iVar2 = *(int *)(this + 0x50);
  iVar4 = FUN_043772fc(0xe);
  Sexy::Insets::Insets
            (aIStack_28,iVar1,iVar5 - iVar3,(iVar2 - iVar1) - iVar4,
             (*(int *)(this + 0x54) - iVar5) - iVar4);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)aCStack_18,(Insets *)&PrimeText_Game::Color_Description_Brown);
  WriteWordInRect(param_1,this + 0xe0,aIStack_28,uVar6,aCStack_18,0,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAccessoryObjectDisplayer::DrawOverlay(Sexy::Graphics*, int) */

void __thiscall
PVZ2UIAccessoryObjectDisplayer::DrawOverlay
          (PVZ2UIAccessoryObjectDisplayer *this,Graphics *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  if (param_2 == 1) {
    cVar1 = FUN_054765e8(this + 0xf0);
    if (cVar1 == '\0') {
      iVar2 = FUN_043772fc(0x3c);
      iVar3 = FUN_043772fc(0x19);
      Sexy::Insets::Insets(aIStack_28,0,-iVar3 - iVar2,*(int *)(this + 0x50),iVar2);
      uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_34_HardShadow)
      ;
      Sexy::Insets::Insets(aIStack_18,(Insets *)&PrimeText_Game::Color_New_Plant_Header);
      WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar4,aIStack_18,5,0);
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIAccessoryObjectDisplayer::PVZ2UIAccessoryObjectDisplayer(Sexy::Image*, Sexy::Image*,
   std::wstring, std::wstring, std::wstring) */

void __thiscall
PVZ2UIAccessoryObjectDisplayer::PVZ2UIAccessoryObjectDisplayer
          (PVZ2UIAccessoryObjectDisplayer *this,undefined8 param_1,TravelLogTask *param_2,
          undefined8 param_4,undefined8 param_5,undefined8 param_6)

{
  PVZ2UIGameObjectCard *pPVar1;
  undefined8 uVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06839170;
  FUN_05476574(this + 0xd8);
  FUN_05476574(this + 0xe0);
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  pPVar1 = ::operator_new(0x160);
  PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar1,a_Stack_18,0,0xfffffffe,0,1);
  *(PVZ2UIGameObjectCard **)(this + 0xf8) = pPVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  pPVar1 = *(PVZ2UIGameObjectCard **)(this + 0xf8);
  Sexy::Insets::Insets((Insets *)a_Stack_18,0,0x2c,0x4d,0xff);
  PVZ2UIGameObjectCard::SetSpecificBackground(pPVar1,param_1,a_Stack_18);
  TravelLogBonusUI::SetTask(*(TravelLogBonusUI **)(this + 0xf8),param_2);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xf8));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)
                     StoreItemConfig::IMAGE_UI_DIALOG_ASSET_BG_GREEN);
  *(undefined8 *)(this + 0x100) = uVar2;
  TodStringTranslate(L"[AWARD_SCREEN_NEW_ACCESSORY]");
  FUN_054766c8(this + 0xf0,a_Stack_18);
  FUN_05476c50(a_Stack_18);
  thunk_FUN_05477b9c(this + 0xd8,param_4);
  thunk_FUN_05477b9c(this + 0xe0,param_5);
  thunk_FUN_05477b9c(this + 0xe8,param_6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


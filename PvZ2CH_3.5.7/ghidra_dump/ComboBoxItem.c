// Class: ComboBoxItem


/* ComboBoxItem::SetClickFunc(Sexy::Delegate1<int>) */

void __thiscall ComboBoxItem::SetClickFunc(ComboBoxItem *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x328),param_2);
  return;
}


/* ComboBoxItem::GetWidgetID() */

undefined4 __thiscall ComboBoxItem::GetWidgetID(ComboBoxItem *this)

{
  return *(undefined4 *)(this + 0x310);
}


/* ComboBoxItem::SetArrowImage(Sexy::Image*) */

void __thiscall ComboBoxItem::SetArrowImage(ComboBoxItem *this,Image *param_1)

{
  *(Image **)(this + 0x318) = param_1;
  return;
}


/* ComboBoxItem::SetBgImage(Sexy::Image*) */

void __thiscall ComboBoxItem::SetBgImage(ComboBoxItem *this,Image *param_1)

{
  *(Image **)(this + 800) = param_1;
  return;
}


/* ComboBoxItem::SetWidgetName(std::wstring) */

void ComboBoxItem::SetWidgetName(long param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x308);
  return;
}


/* ComboBoxItem::GetWidgetName() */

undefined8 ComboBoxItem::GetWidgetName(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* ComboBoxItem::~ComboBoxItem() */

void __thiscall ComboBoxItem::~ComboBoxItem(ComboBoxItem *this)

{
  *(undefined ***)this = &PTR_GetClass_0698c190;
  *(undefined ***)(this + 0x198) = &PTR__ComboBoxItem_0698c530;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_0698c558;
  FUN_05476c50(this + 0x308);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to ComboBoxItem::~ComboBoxItem() */

void __thiscall ComboBoxItem::~ComboBoxItem(ComboBoxItem *this)

{
  ~ComboBoxItem(this + -0x198);
  return;
}


/* ComboBoxItem::~ComboBoxItem() */

void __thiscall ComboBoxItem::~ComboBoxItem(ComboBoxItem *this)

{
  ~ComboBoxItem(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ComboBoxItem::~ComboBoxItem() */

void __thiscall ComboBoxItem::~ComboBoxItem(ComboBoxItem *this)

{
  ~ComboBoxItem(this + -0x198);
  return;
}


/* ComboBoxItem::SetMainClickFunc(Sexy::Delegate1<int>) */

void __thiscall ComboBoxItem::SetMainClickFunc(ComboBoxItem *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x358),param_2);
  return;
}


/* ComboBoxItem::SetCustomClickFunc(Sexy::Delegate1<int>) */

void __thiscall ComboBoxItem::SetCustomClickFunc(ComboBoxItem *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x388),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComboBoxItem::Draw(Sexy::Graphics*) */

void __thiscall ComboBoxItem::Draw(ComboBoxItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  int iVar7;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 800) != 0) {
    Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 800));
  }
  pIVar6 = *(Image **)(this + 0x318);
  if (pIVar6 != (Image *)0x0) {
    iVar1 = *(int *)(this + 0x54);
    iVar2 = *(int *)(this + 0x50);
    iVar7 = (int)((float)(iVar1 / 2) * 1.13);
    iVar3 = FUN_04c576d4(7);
    iVar4 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar4 = iVar1;
    }
    Sexy::Graphics::DrawImage(param_1,pIVar6,(iVar2 - iVar7) - iVar3,iVar4 >> 2,iVar7,iVar1 / 2);
  }
  iVar4 = FUN_04c576d4(4);
  Sexy::Insets::Insets(aIStack_28,iVar4,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,0x57,0x37,0,0xff);
  WriteWordInRect(param_1,this + 0x308,aIStack_28,uVar5,aIStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComboBoxItem::ComboBoxItem(int) */

void __thiscall ComboBoxItem::ComboBoxItem(ComboBoxItem *this,int param_1)

{
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  Color aCStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_50,&DAT_056f11a8,auStack_58);
  Sexy::Color::Color(aCStack_48,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_50,aCStack_48);
  FUN_05476c50(awStack_50);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_0698c190;
  *(undefined ***)(this + 0x198) = &PTR__ComboBoxItem_0698c530;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_0698c558;
  FUN_05476574(this + 0x308);
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x328));
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x358));
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x388));
  FUN_054772c4(this + 0x308,&DAT_056f11a8);
  *(int *)(this + 0x310) = param_1;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 800) = 0;
  Sexy::Delegate1<int>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x328),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComboBoxItem::ButtonDepress(int) */

void __thiscall ComboBoxItem::ButtonDepress(ComboBoxItem *this,int param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0xd4) == param_1) {
    iVar1 = FUN_04c57648(*(undefined8 *)(this + 0x330),*(undefined8 *)(this + 0x340));
    if (iVar1 != 0) {
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x328),
                 (SexyURL *)(ulong)*(uint *)(this + 0x310));
    }
    iVar1 = FUN_04c57648(*(undefined8 *)(this + 0x360),*(undefined8 *)(this + 0x370));
    if (iVar1 != 0) {
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x358),
                 (SexyURL *)(ulong)*(uint *)(this + 0x310));
    }
    iVar1 = FUN_04c57648(*(undefined8 *)(this + 0x390),*(undefined8 *)(this + 0x3a0));
    if (iVar1 != 0) {
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
                ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x388),
                 (SexyURL *)(ulong)*(uint *)(this + 0x310));
      return;
    }
  }
  return;
}


/* non-virtual thunk to ComboBoxItem::ButtonDepress(int) */

void __thiscall ComboBoxItem::ButtonDepress(ComboBoxItem *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


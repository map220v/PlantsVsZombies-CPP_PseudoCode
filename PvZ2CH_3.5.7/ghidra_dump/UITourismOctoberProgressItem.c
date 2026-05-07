// Class: UITourismOctoberProgressItem


/* UITourismOctoberProgressItem::~UITourismOctoberProgressItem() */

void __thiscall
UITourismOctoberProgressItem::~UITourismOctoberProgressItem(UITourismOctoberProgressItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069ee250;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UITourismOctoberProgressItem::~UITourismOctoberProgressItem() */

void __thiscall
UITourismOctoberProgressItem::~UITourismOctoberProgressItem(UITourismOctoberProgressItem *this)

{
  ~UITourismOctoberProgressItem(this);
  AK::FreeHook(this);
  return;
}


/* UITourismOctoberProgressItem::UITourismOctoberProgressItem() */

void __thiscall
UITourismOctoberProgressItem::UITourismOctoberProgressItem(UITourismOctoberProgressItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069ee250;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctoberProgressItem::Draw(Sexy::Graphics*) */

void __thiscall
UITourismOctoberProgressItem::Draw(UITourismOctoberProgressItem *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04e967b8(7);
  iVar3 = FUN_04e967b8(0x19);
  Sexy::Insets::Insets(aIStack_18,0,iVar2,*(int *)(this + 0x50),iVar3);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba12a8);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  uVar1 = *(uint *)(this + 0xd4);
  if (0 < (int)uVar1) {
    iVar2 = FUN_04e967b8(7);
    iVar3 = FUN_04e967b8(0x19);
    Sexy::Insets::Insets
              (aIStack_18,0,iVar2,
               (int)(((float)(int)uVar1 / (float)*(int *)(this + 0xd8)) *
                    (float)*(int *)(this + 0x50)),iVar3);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba14b8);
    Draw9SliceImage(param_1,aIStack_18,uVar5);
    uVar1 = *(uint *)(this + 0xd4);
  }
  Sexy::StrFormat("%d/%d",asStack_38,(ulong)uVar1,(ulong)*(uint *)(this + 0xd8));
  Sexy::ToWString(asStack_38);
  iVar2 = FUN_04e967b8(0);
  iVar3 = FUN_04e967b8(5);
  iVar4 = FUN_04e967b8(0x19);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,*(int *)(this + 0x50),iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,2,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
  iVar2 = FUN_04e967b8(0);
  iVar3 = FUN_04e967b8(0x28);
  Sexy::Insets::Insets(aIStack_18,iVar2,0,iVar3,iVar3);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba16f0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


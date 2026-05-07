// Class: PVZ2UIImageCard


/* PVZ2UIImageCard::~PVZ2UIImageCard() */

void __thiscall PVZ2UIImageCard::~PVZ2UIImageCard(PVZ2UIImageCard *this)

{
  *(undefined ***)this = &PTR_GetClass_06837d80;
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PVZ2UIImageCard::~PVZ2UIImageCard() */

void __thiscall PVZ2UIImageCard::~PVZ2UIImageCard(PVZ2UIImageCard *this)

{
  ~PVZ2UIImageCard(this);
  AK::FreeHook(this);
  return;
}


/* PVZ2UIImageCard::SetImage(Sexy::Image*, Sexy::Image*) */

void __thiscall PVZ2UIImageCard::SetImage(PVZ2UIImageCard *this,Image *param_1,Image *param_2)

{
  *(Image **)(this + 0xd8) = param_2;
  *(Image **)(this + 0xe0) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIImageCard::Resize(int, int, int, int) */

void __thiscall
PVZ2UIImageCard::Resize(PVZ2UIImageCard *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04373ce4(0x1e);
  Sexy::Widget::Resize((Widget *)this,param_1,param_2 - iVar2,param_3,iVar2 + param_4);
  iVar3 = FUN_04373ce4(10);
  iVar4 = FUN_04373ce4(0x10);
  iVar5 = FUN_04373ce4(0x14);
  iVar2 = *(int *)(this + 0x50);
  iVar6 = FUN_04373ce4(0x36);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar4,iVar2 - iVar5,iVar6);
  *(undefined8 *)(this + 0xf0) = local_18;
  *(undefined8 *)(this + 0xf8) = uStack_10;
  Sexy::Insets::Insets
            ((Insets *)&local_18,0,*(int *)(this + 0xfc),*(int *)(this + 0x50),
             *(int *)(this + 0x54) - *(int *)(this + 0xfc));
  *(undefined8 *)(this + 0x110) = local_18;
  *(undefined8 *)(this + 0x118) = uStack_10;
  iVar3 = FUN_04373ce4(10);
  iVar2 = *(int *)(this + 0x110);
  iVar4 = FUN_04373ce4(0x19);
  Sexy::Insets::Insets
            ((Insets *)&local_18,iVar3 + iVar2,iVar4 + *(int *)(this + 0x114),
             *(int *)(this + 0x118) + iVar3 * -2,(*(int *)(this + 0x11c) - iVar4) - iVar3);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x100) = local_18;
  *(undefined8 *)(this + 0x108) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UIImageCard::PVZ2UIImageCard() */

void __thiscall PVZ2UIImageCard::PVZ2UIImageCard(PVZ2UIImageCard *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06837d80;
  FUN_05476574(this + 0xe8);
  Sexy::Insets::Insets((Insets *)(this + 0xf0));
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  Sexy::Insets::Insets((Insets *)(this + 0x110));
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIImageCard::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
PVZ2UIImageCard::DrawAll(PVZ2UIImageCard *this,ModalFlags *param_1,Graphics *param_2)

{
  undefined8 uVar1;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Color::Color(aCStack_18,0x42,0x41,0);
  WriteWordInRect(param_2,this + 0xe8,this + 0xf0,uVar1,aCStack_18,5,1);
  if (*(long *)(this + 0xd8) != 0) {
    Sexy::Insets::Insets((Insets *)aCStack_18,(Insets *)(this + 0x110));
    Draw9SliceImage(param_2,aCStack_18,*(undefined8 *)(this + 0xd8));
  }
  if (*(Image **)(this + 0xe0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_2,*(Image **)(this + 0xe0),*(int *)(this + 0x100),*(int *)(this + 0x104),
               *(int *)(this + 0x108),*(int *)(this + 0x10c));
  }
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


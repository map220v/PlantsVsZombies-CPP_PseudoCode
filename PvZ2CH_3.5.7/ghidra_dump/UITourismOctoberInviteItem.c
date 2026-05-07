// Class: UITourismOctoberInviteItem


/* UITourismOctoberInviteItem::InitView(std::string const&) */

void UITourismOctoberInviteItem::InitView(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0xd8);
  return;
}


/* UITourismOctoberInviteItem::~UITourismOctoberInviteItem() */

void __thiscall
UITourismOctoberInviteItem::~UITourismOctoberInviteItem(UITourismOctoberInviteItem *this)

{
  *(undefined ***)this = &PTR_GetClass_069ee570;
  std::string::~string((string *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UITourismOctoberInviteItem::~UITourismOctoberInviteItem() */

void __thiscall
UITourismOctoberInviteItem::~UITourismOctoberInviteItem(UITourismOctoberInviteItem *this)

{
  ~UITourismOctoberInviteItem(this);
  AK::FreeHook(this);
  return;
}


/* UITourismOctoberInviteItem::UITourismOctoberInviteItem() */

void __thiscall
UITourismOctoberInviteItem::UITourismOctoberInviteItem(UITourismOctoberInviteItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_069ee570;
  Set8BytesTo0(this + 0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITourismOctoberInviteItem::Draw(Sexy::Graphics*) */

void __thiscall UITourismOctoberInviteItem::Draw(UITourismOctoberInviteItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToWString((string *)(this + 0xd8));
  iVar2 = FUN_04e967b8(0);
  iVar3 = FUN_04e967b8(0x19);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_04e967b8(0x32);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar1 / 2 - iVar3,*(int *)(this + 0x50),iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aCStack_18,2,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


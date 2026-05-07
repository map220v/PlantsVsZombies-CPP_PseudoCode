// Class: PostProcessItem


/* PostProcessItem::PostProcessItem() */

void __thiscall PostProcessItem::PostProcessItem(PostProcessItem *this)

{
  Sexy::Color::Color((Color *)(this + 0xc));
  Sexy::Color::Color((Color *)(this + 0x1c));
  return;
}


/* PostProcessItem::PostProcessItem(PostProcessItem const&) */

void __thiscall PostProcessItem::PostProcessItem(PostProcessItem *this,PostProcessItem *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  Sexy::Insets::Insets((Insets *)(this + 0xc),(Insets *)(param_1 + 0xc));
  Sexy::Insets::Insets((Insets *)(this + 0x1c),(Insets *)(param_1 + 0x1c));
  return;
}


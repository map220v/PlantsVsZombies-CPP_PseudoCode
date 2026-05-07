// Class: ScoreDisplayModifier


/* ScoreDisplayModifier::ScoreDisplayModifier() */

void __thiscall ScoreDisplayModifier::ScoreDisplayModifier(ScoreDisplayModifier *this)

{
  *(undefined4 *)(this + 4) = 0x40000000;
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)(this + 8) = 0x3f000000;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 0x3f99999a;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  Sexy::Color::Color((Color *)(this + 0x1c),1);
  return;
}


/* ScoreDisplayModifier::ScoreDisplayModifier(ScoreDisplayModifier const&) */

void __thiscall
ScoreDisplayModifier::ScoreDisplayModifier(ScoreDisplayModifier *this,ScoreDisplayModifier *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar6;
  Sexy::Insets::Insets((Insets *)(this + 0x1c),(Insets *)(param_1 + 0x1c));
  return;
}


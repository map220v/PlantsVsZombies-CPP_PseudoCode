// Class: EA::Text::FontStyle


/* EA::Text::FontStyle::FontStyle() */

void __thiscall EA::Text::FontStyle::FontStyle(FontStyle *this)

{
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined2 *)this = 0;
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x80) = 0;
  *(undefined2 *)(this + 0xc0) = 0;
  *(undefined2 *)(this + 0x100) = 0;
  *(undefined2 *)(this + 0x140) = 0;
  *(undefined2 *)(this + 0x180) = 0;
  *(undefined2 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x200) = 0x41400000;
  *(undefined4 *)(this + 0x208) = 0x43c80000;
  *(undefined4 *)(this + 0x21c) = 0x3f800000;
  *(undefined4 *)(this + 0x220) = 0x3f800000;
  return;
}


/* EA::Text::FontStyle::TEMPNAMEPLACEHOLDERVALUE(EA::Text::FontStyle const&) */

FontStyle * __thiscall EA::Text::FontStyle::operator=(FontStyle *this,FontStyle *param_1)

{
  FontStyle *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FontStyle *pFVar10;
  
  if (param_1 != this) {
    uVar2 = *(undefined4 *)(param_1 + 0x200);
    uVar3 = *(undefined4 *)(param_1 + 0x208);
    uVar4 = *(undefined4 *)(param_1 + 0x20c);
    uVar5 = *(undefined4 *)(param_1 + 0x21c);
    uVar6 = *(undefined4 *)(param_1 + 0x210);
    uVar7 = *(undefined4 *)(param_1 + 0x220);
    uVar8 = *(undefined4 *)(param_1 + 0x214);
    uVar9 = *(undefined4 *)(param_1 + 0x218);
    *(undefined4 *)(this + 0x204) = *(undefined4 *)(param_1 + 0x204);
    *(undefined4 *)(this + 0x20c) = uVar4;
    *(undefined4 *)(this + 0x210) = uVar6;
    *(undefined4 *)(this + 0x214) = uVar8;
    *(undefined4 *)(this + 0x218) = uVar9;
    *(undefined4 *)(this + 0x200) = uVar2;
    *(undefined4 *)(this + 0x208) = uVar3;
    *(undefined4 *)(this + 0x21c) = uVar5;
    *(undefined4 *)(this + 0x220) = uVar7;
    pFVar10 = this;
    do {
      pFVar1 = pFVar10 + 0x40;
      StdC::Strlcpy((wchar16 *)pFVar10,(wchar16 *)param_1,0x20);
      param_1 = param_1 + 0x40;
      pFVar10 = pFVar1;
    } while (pFVar1 != this + 0x200);
  }
  return this;
}


/* EA::Text::FontStyle::FontStyle(EA::Text::FontStyle const&) */

FontStyle * __thiscall EA::Text::FontStyle::FontStyle(FontStyle *this,FontStyle *param_1)

{
  FontStyle *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  FontStyle *pFVar10;
  
  if (param_1 != this) {
    uVar2 = *(undefined4 *)(param_1 + 0x200);
    uVar3 = *(undefined4 *)(param_1 + 0x208);
    uVar4 = *(undefined4 *)(param_1 + 0x20c);
    uVar5 = *(undefined4 *)(param_1 + 0x21c);
    uVar6 = *(undefined4 *)(param_1 + 0x210);
    uVar7 = *(undefined4 *)(param_1 + 0x220);
    uVar8 = *(undefined4 *)(param_1 + 0x214);
    uVar9 = *(undefined4 *)(param_1 + 0x218);
    *(undefined4 *)(this + 0x204) = *(undefined4 *)(param_1 + 0x204);
    *(undefined4 *)(this + 0x20c) = uVar4;
    *(undefined4 *)(this + 0x210) = uVar6;
    *(undefined4 *)(this + 0x214) = uVar8;
    *(undefined4 *)(this + 0x218) = uVar9;
    *(undefined4 *)(this + 0x200) = uVar2;
    *(undefined4 *)(this + 0x208) = uVar3;
    *(undefined4 *)(this + 0x21c) = uVar5;
    *(undefined4 *)(this + 0x220) = uVar7;
    pFVar10 = this;
    do {
      pFVar1 = pFVar10 + 0x40;
      StdC::Strlcpy((wchar16 *)pFVar10,(wchar16 *)param_1,0x20);
      param_1 = param_1 + 0x40;
      pFVar10 = pFVar1;
    } while (pFVar1 != this + 0x200);
  }
  return this;
}


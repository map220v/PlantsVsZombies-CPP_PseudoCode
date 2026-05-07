// Class: EA::Text::TextRunIterator


/* EA::Text::TextRunIterator::TextRunIterator(EA::Text::TextRunIterator const&) */

void __thiscall
EA::Text::TextRunIterator::TextRunIterator(TextRunIterator *this,TextRunIterator *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)this = uVar6;
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  return;
}


/* EA::Text::TextRunIterator::TEMPNAMEPLACEHOLDERVALUE(EA::Text::TextRunIterator const&) */

void __thiscall EA::Text::TextRunIterator::operator=(TextRunIterator *this,TextRunIterator *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)param_1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)this = uVar6;
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  return;
}


/* EA::Text::TextRunIterator::operator[](unsigned int) const */

undefined2 __thiscall EA::Text::TextRunIterator::operator[](TextRunIterator *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  
  plVar3 = *(long **)this;
  iVar1 = *(int *)(this + 0x20);
  uVar2 = param_1 + iVar1;
  if (plVar3 < *(long **)(this + 8)) {
    uVar5 = *(uint *)(plVar3 + 1);
    plVar4 = plVar3;
    if (uVar5 <= uVar2) {
      do {
        plVar3 = plVar4 + 2;
        uVar2 = uVar2 - uVar5;
        if (*(long **)(this + 8) <= plVar3) {
          return 0xffff;
        }
        uVar5 = *(uint *)(plVar4 + 3);
        plVar4 = plVar3;
      } while (uVar5 <= uVar2);
    }
    if (uVar2 - iVar1 < (uint)(*(int *)(this + 0x24) - iVar1)) {
      return *(undefined2 *)(*plVar3 + (ulong)uVar2 * 2);
    }
  }
  return 0xffff;
}


/* EA::Text::TextRunIterator::SetPosition(unsigned int) */

TextRunIterator * __thiscall
EA::Text::TextRunIterator::SetPosition(TextRunIterator *this,uint param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = *(long **)this;
  plVar7 = *(long **)(this + 8);
  iVar1 = *(int *)(this + 0x20);
  *(long **)(this + 0x10) = plVar6;
  uVar3 = param_1 + iVar1;
  if (plVar6 < plVar7) {
    uVar4 = *(uint *)(plVar6 + 1);
    plVar2 = plVar6;
    if (uVar4 <= uVar3) {
      do {
        plVar6 = plVar2 + 2;
        uVar3 = uVar3 - uVar4;
        if (plVar7 <= plVar6) goto LAB_05361b8c;
        uVar4 = *(uint *)(plVar2 + 3);
        plVar2 = plVar6;
      } while (uVar4 <= uVar3);
      *(long **)(this + 0x10) = plVar6;
    }
    uVar4 = *(int *)(this + 0x24) - iVar1;
    if (uVar3 - iVar1 < uVar4) {
      lVar5 = *plVar6;
      *(uint *)(this + 0x28) = uVar3 - iVar1;
      *(ulong *)(this + 0x18) = lVar5 + (ulong)uVar3 * 2;
      return this;
    }
  }
  else {
LAB_05361b8c:
    uVar4 = *(int *)(this + 0x24) - iVar1;
  }
  uVar3 = *(uint *)(plVar7 + -1);
  lVar5 = plVar7[-2];
  *(uint *)(this + 0x28) = uVar4;
  *(long **)(this + 0x10) = plVar7 + -2;
  *(ulong *)(this + 0x18) = lVar5 + (ulong)uVar3 * 2;
  return this;
}


/* EA::Text::TextRunIterator::SetTextRunArray(EA::Text::TextRun const*, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void __thiscall
EA::Text::TextRunIterator::SetTextRunArray
          (TextRunIterator *this,TextRun *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  *(TextRun **)this = param_1;
  *(TextRun **)(this + 8) = param_1 + (ulong)param_2 * 0x10;
  uVar1 = FUN_0536189c(param_1,param_1 + (ulong)param_2 * 0x10);
  uVar2 = uVar1;
  if (param_4 < uVar1) {
    uVar2 = param_4;
  }
  *(uint *)(this + 0x20) = uVar2;
  if (param_5 < uVar2) {
    *(uint *)(this + 0x24) = uVar2;
  }
  else {
    if (uVar1 < param_5) {
      param_5 = uVar1;
    }
    *(uint *)(this + 0x24) = param_5;
  }
  if ((uVar2 <= param_3) && (uVar2 = *(uint *)(this + 0x24), param_3 <= uVar2)) {
    *(uint *)(this + 0x28) = param_3;
    SetPosition(this,param_3);
    return;
  }
  *(uint *)(this + 0x28) = uVar2;
  SetPosition(this,uVar2);
  return;
}


/* EA::Text::TextRunIterator::TextRunIterator(EA::Text::TextRun const*, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void __thiscall
EA::Text::TextRunIterator::TextRunIterator
          (TextRunIterator *this,TextRun *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  *(TextRun **)this = param_1;
  *(TextRun **)(this + 8) = param_1 + (ulong)param_2 * 0x10;
  uVar1 = FUN_0536189c(param_1,param_1 + (ulong)param_2 * 0x10);
  uVar2 = uVar1;
  if (param_4 < uVar1) {
    uVar2 = param_4;
  }
  *(uint *)(this + 0x20) = uVar2;
  if (param_5 < uVar2) {
    *(uint *)(this + 0x24) = uVar2;
  }
  else {
    if (uVar1 < param_5) {
      param_5 = uVar1;
    }
    *(uint *)(this + 0x24) = param_5;
  }
  if ((uVar2 <= param_3) && (uVar2 = *(uint *)(this + 0x24), param_3 <= uVar2)) {
    *(uint *)(this + 0x28) = param_3;
    SetPosition(this,param_3);
    return;
  }
  *(uint *)(this + 0x28) = uVar2;
  SetPosition(this,uVar2);
  return;
}


/* EA::Text::TextRunIterator::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall EA::Text::TextRunIterator::operator++(TextRunIterator *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (*(uint *)(this + 0x24) <= *(uint *)(this + 0x28)) {
    return;
  }
  plVar2 = *(long **)(this + 0x10);
  lVar3 = *(long *)(this + 0x18);
  uVar1 = *(uint *)(plVar2 + 1);
  lVar5 = *plVar2;
  *(ulong *)(this + 0x18) = lVar3 + 2U;
  if (lVar5 + (ulong)uVar1 * 2 <= lVar3 + 2U) {
    plVar6 = *(long **)(this + 8);
    plVar4 = plVar2 + 2;
    *(long **)(this + 0x10) = plVar4;
    if (plVar6 <= plVar4) {
LAB_05361d08:
      uVar1 = *(uint *)(plVar6 + -1);
      lVar3 = plVar6[-2];
      *(long **)(this + 0x10) = plVar6 + -2;
      *(uint *)(this + 0x28) = *(uint *)(this + 0x24) - *(int *)(this + 0x20);
      *(ulong *)(this + 0x18) = lVar3 + (ulong)uVar1 * 2;
      return;
    }
    if ((int)plVar2[3] == 0) {
      plVar2 = plVar2 + 4;
      do {
        plVar4 = plVar2;
        if (plVar6 <= plVar4) goto LAB_05361d08;
        plVar2 = plVar4 + 2;
      } while ((int)plVar4[1] == 0);
      *(long **)(this + 0x10) = plVar4;
    }
    *(long *)(this + 0x18) = *plVar4;
  }
  *(uint *)(this + 0x28) = *(uint *)(this + 0x28) + 1;
  return;
}


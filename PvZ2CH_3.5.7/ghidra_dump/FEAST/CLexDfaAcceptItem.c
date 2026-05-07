// Class: FEAST::CLexDfaAcceptItem


/* FEAST::CLexDfaAcceptItem::TEMPNAMEPLACEHOLDERVALUE(FEAST::CLexDfaAcceptItem const&) */

void __thiscall
FEAST::CLexDfaAcceptItem::operator=(CLexDfaAcceptItem *this,CLexDfaAcceptItem *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = uVar2;
  *(undefined8 *)(this + 8) = uVar1;
  this[0x18] = param_1[0x18];
  return;
}


/* FEAST::CLexDfaAcceptItem::TEMPNAMEPLACEHOLDERVALUE(FEAST::CLexDfaAcceptItem const&) */

bool __thiscall
FEAST::CLexDfaAcceptItem::operator==(CLexDfaAcceptItem *this,CLexDfaAcceptItem *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(long *)this == *(long *)param_1) && (*(long *)(this + 8) == *(long *)(param_1 + 8))) &&
     (*(long *)(this + 0x10) == *(long *)(param_1 + 0x10))) {
    bVar1 = this[0x18] == param_1[0x18];
  }
  return bVar1;
}


// Class: FEAST::CLexDfaTable


/* FEAST::CLexDfaTable::CLexDfaTable() */

void __thiscall FEAST::CLexDfaTable::CLexDfaTable(CLexDfaTable *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* FEAST::CLexDfaTable::~CLexDfaTable() */

void __thiscall FEAST::CLexDfaTable::~CLexDfaTable(CLexDfaTable *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    LIB_ClientFree(*(void **)(this + 0x18));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    LIB_ClientFree(*(void **)(this + 0x20));
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    LIB_ClientFree(*(void **)(this + 0x28));
    return;
  }
  return;
}


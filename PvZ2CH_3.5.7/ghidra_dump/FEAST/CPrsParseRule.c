// Class: FEAST::CPrsParseRule


/* FEAST::CPrsParseRule::CPrsParseRule() */

void __thiscall FEAST::CPrsParseRule::CPrsParseRule(CPrsParseRule *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* FEAST::CPrsParseRule::~CPrsParseRule() */

void __thiscall FEAST::CPrsParseRule::~CPrsParseRule(CPrsParseRule *this)

{
  CPrsParseProd *this_00;
  CPrsParseProd *pCVar1;
  
  FUN_0539d674(this,0);
  FUN_0539d6d4(this + 8,0);
  FUN_0539d734(this + 0x10,0);
  this_00 = *(CPrsParseProd **)(this + 0x30);
  while (this_00 != (CPrsParseProd *)0x0) {
    pCVar1 = *(CPrsParseProd **)this_00;
    CPrsParseProd::~CPrsParseProd(this_00);
    LIB_ClientFree(this_00);
    this_00 = pCVar1;
  }
  return;
}


// Class: Sexy::RtDbTable::TableOptions


/* Sexy::RtDbTable::TableOptions::TableOptions() */

void __thiscall Sexy::RtDbTable::TableOptions::TableOptions(TableOptions *this)

{
  *(undefined4 *)this = 0;
  RtName::RtName((RtName *)(this + 8));
  Set8BytesTo0(this + 0x18);
  this[0x20] = (TableOptions)0x0;
  this[0x21] = (TableOptions)0x0;
  return;
}


/* Sexy::RtDbTable::TableOptions::~TableOptions() */

void __thiscall Sexy::RtDbTable::TableOptions::~TableOptions(TableOptions *this)

{
  std::string::~string((string *)(this + 0x18));
  RtName::~RtName((RtName *)(this + 8));
  return;
}


/* Sexy::RtDbTable::TableOptions::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtDbTable::TableOptions&&) */

TableOptions * __thiscall
Sexy::RtDbTable::TableOptions::operator=(TableOptions *this,TableOptions *param_1)

{
  TableOptions TVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05194864(this + 8,param_1 + 8);
  FUN_05474278(this + 0x18,param_1 + 0x18);
  TVar1 = param_1[0x21];
  this[0x20] = param_1[0x20];
  this[0x21] = TVar1;
  return this;
}


/* Sexy::RtDbTable::TableOptions::TEMPNAMEPLACEHOLDERVALUE(Sexy::RtDbTable::TableOptions const&) */

TableOptions * __thiscall
Sexy::RtDbTable::TableOptions::operator=(TableOptions *this,TableOptions *param_1)

{
  TableOptions TVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_051b53bc(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  TVar1 = param_1[0x21];
  this[0x20] = param_1[0x20];
  this[0x21] = TVar1;
  return this;
}


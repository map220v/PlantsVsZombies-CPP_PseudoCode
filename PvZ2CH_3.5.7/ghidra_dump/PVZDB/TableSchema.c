// Class: PVZDB::TableSchema


/* PVZDB::TableSchema::~TableSchema() */

void __thiscall PVZDB::TableSchema::~TableSchema(TableSchema *this)

{
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  Sexy::RtName::~RtName((RtName *)(this + 8));
  return;
}


/* PVZDB::TableSchema::TableSchema() */

void __thiscall PVZDB::TableSchema::TableSchema(TableSchema *this)

{
  Sexy::RtName::RtName((RtName *)(this + 8));
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x28);
  return;
}


/* PVZDB::TableSchema::TableSchema(PVZDB::TableIndex, Sexy::RtName const&, std::string const&, bool,
   bool, std::string) */

void __thiscall
PVZDB::TableSchema::TableSchema
          (TableSchema *this,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          TableSchema param_5,TableSchema param_6,undefined8 param_7)

{
  Sexy::RtName::RtName((RtName *)(this + 8));
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x28);
  *(undefined4 *)this = param_2;
  FUN_043e1f9c((RtName *)(this + 8),param_3);
  thunk_FUN_05475e00(this + 0x18,param_4);
  this[0x20] = param_5;
  thunk_FUN_05475e00(this + 0x28,param_7);
  this[0x21] = param_6;
  return;
}


/* PVZDB::TableSchema::TEMPNAMEPLACEHOLDERVALUE(PVZDB::TableSchema&&) */

TableSchema * __thiscall PVZDB::TableSchema::operator=(TableSchema *this,TableSchema *param_1)

{
  TableSchema TVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_043e1f9c(this + 8,param_1 + 8);
  FUN_05474278(this + 0x18,param_1 + 0x18);
  TVar1 = param_1[0x20];
  this[0x21] = param_1[0x21];
  this[0x20] = TVar1;
  FUN_05474278(this + 0x28,param_1 + 0x28);
  return this;
}


/* PVZDB::TableSchema::TableSchema(PVZDB::TableSchema&&) */

void __thiscall PVZDB::TableSchema::TableSchema(TableSchema *this,TableSchema *param_1)

{
  TableSchema TVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::RtName::RtName((RtName *)(this + 8),(RtName *)(param_1 + 8));
  FUN_05474148(this + 0x18,param_1 + 0x18);
  TVar1 = param_1[0x20];
  this[0x21] = param_1[0x21];
  this[0x20] = TVar1;
  FUN_05474148(this + 0x28,param_1 + 0x28);
  return;
}


/* PVZDB::TableSchema::TableSchema(PVZDB::TableSchema const&) */

void __thiscall PVZDB::TableSchema::TableSchema(TableSchema *this,TableSchema *param_1)

{
  TableSchema TVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::RtName::RtName((RtName *)(this + 8),(RtName *)(param_1 + 8));
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  TVar1 = param_1[0x20];
  this[0x21] = param_1[0x21];
  this[0x20] = TVar1;
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  return;
}


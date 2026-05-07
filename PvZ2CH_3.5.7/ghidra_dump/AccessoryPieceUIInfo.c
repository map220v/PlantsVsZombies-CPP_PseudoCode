// Class: AccessoryPieceUIInfo


/* AccessoryPieceUIInfo::~AccessoryPieceUIInfo() */

void __thiscall AccessoryPieceUIInfo::~AccessoryPieceUIInfo(AccessoryPieceUIInfo *this)

{
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* AccessoryPieceUIInfo::AccessoryPieceUIInfo(AccessoryPieceUIInfo&&) */

void __thiscall
AccessoryPieceUIInfo::AccessoryPieceUIInfo(AccessoryPieceUIInfo *this,AccessoryPieceUIInfo *param_1)

{
  FUN_05474148();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  return;
}


/* AccessoryPieceUIInfo::AccessoryPieceUIInfo() */

void __thiscall AccessoryPieceUIInfo::AccessoryPieceUIInfo(AccessoryPieceUIInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 0x10));
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 8) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


/* AccessoryPieceUIInfo::AccessoryPieceUIInfo(AccessoryPieceUIInfo const&) */

void __thiscall
AccessoryPieceUIInfo::AccessoryPieceUIInfo(AccessoryPieceUIInfo *this,AccessoryPieceUIInfo *param_1)

{
  FUN_05475d88();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  return;
}


/* AccessoryPieceUIInfo::TEMPNAMEPLACEHOLDERVALUE(AccessoryPieceUIInfo&&) */

AccessoryPieceUIInfo * __thiscall
AccessoryPieceUIInfo::operator=(AccessoryPieceUIInfo *this,AccessoryPieceUIInfo *param_1)

{
  FUN_05474278();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  FUN_05474278(this + 0x10,param_1 + 0x10);
  return this;
}


// Class: DropGroupNode


/* DropGroupNode::DropGroupNode() */

void __thiscall DropGroupNode::DropGroupNode(DropGroupNode *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  return;
}


/* DropGroupNode::~DropGroupNode() */

void __thiscall DropGroupNode::~DropGroupNode(DropGroupNode *this)

{
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* DropGroupNode::DropGroupNode(DropGroupNode&&) */

void __thiscall DropGroupNode::DropGroupNode(DropGroupNode *this,DropGroupNode *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  return;
}


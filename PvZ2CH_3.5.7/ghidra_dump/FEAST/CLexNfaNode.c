// Class: FEAST::CLexNfaNode


/* FEAST::CLexNfaNode::CLexNfaNode() */

void __thiscall FEAST::CLexNfaNode::CLexNfaNode(CLexNfaNode *this)

{
  CLexBitSet::CLexBitSet((CLexBitSet *)(this + 0x30),0x100);
  this[0x11] = (CLexNfaNode)0x0;
  this[0x10] = (CLexNfaNode)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* FEAST::CLexNfaNode::~CLexNfaNode() */

void __thiscall FEAST::CLexNfaNode::~CLexNfaNode(CLexNfaNode *this)

{
  CLexBitSet::~CLexBitSet((CLexBitSet *)(this + 0x30));
  return;
}


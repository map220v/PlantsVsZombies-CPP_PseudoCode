// Class: ConvertProjectileNameNode


/* ConvertProjectileNameNode::ConvertProjectileNameNode() */

void __thiscall
ConvertProjectileNameNode::ConvertProjectileNameNode(ConvertProjectileNameNode *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0(this + 0x18);
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


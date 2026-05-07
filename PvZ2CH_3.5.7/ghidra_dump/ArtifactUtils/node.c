// Class: ArtifactUtils::node


/* ArtifactUtils::node::node() */

void __thiscall ArtifactUtils::node::node(node *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::string::append((string *)this,"",in_x2);
  this[8] = (node)0x0;
  this[9] = (node)0x0;
  return;
}


/* ArtifactUtils::node::node(ArtifactUtils::node const&) */

void __thiscall ArtifactUtils::node::node(node *this,node *param_1)

{
  FUN_05475d88();
  this[8] = param_1[8];
  this[9] = param_1[9];
  return;
}


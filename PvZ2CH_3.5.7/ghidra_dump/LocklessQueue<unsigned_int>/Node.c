// Class: LocklessQueue<unsigned_int>::Node


/* LocklessQueue<unsigned int>::Node::Node(unsigned int) */

void __thiscall LocklessQueue<unsigned_int>::Node::Node(Node *this,uint param_1)

{
  *(uint *)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  return;
}


// Class: Sexy::Mesh


/* Sexy::Mesh::SetListener(Sexy::MeshListener*) */

void __thiscall Sexy::Mesh::SetListener(Mesh *this,MeshListener *param_1)

{
  *(MeshListener **)(this + 0x10) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::Mesh::Cleanup() */

void __thiscall Sexy::Mesh::Cleanup(Mesh *this)

{
  bool bVar1;
  long *plVar2;
  list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_18 = FUN_053b9814(*(undefined8 *)this_00);
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
    FUN_053b970c((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
  }
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::clear(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::Mesh::Mesh() */

void __thiscall Sexy::Mesh::Mesh(Mesh *this)

{
  *(undefined ***)this = &PTR_Cleanup_06a37040;
  Set8BytesTo0(this + 8);
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x20));
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  (**(code **)(**(long **)(gSexyAppBase + 0x20) + 0xe0))(*(long **)(gSexyAppBase + 0x20),this);
  return;
}


/* Sexy::Mesh::~Mesh() */

void __thiscall Sexy::Mesh::~Mesh(Mesh *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x10);
  *(undefined ***)this = &PTR_Cleanup_06a37040;
  if ((plVar1 != (long *)0x0) && (*(code **)(*plVar1 + 0x38) != MeshListener::MeshPreDeleted)) {
    (**(code **)(*plVar1 + 0x38))(plVar1,this);
  }
  Cleanup(this);
  (**(code **)(**(long **)(gSexyAppBase + 0x20) + 0xe8))(*(long **)(gSexyAppBase + 0x20),this);
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::~list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x20));
  std::string::~string((string *)(this + 8));
  return;
}


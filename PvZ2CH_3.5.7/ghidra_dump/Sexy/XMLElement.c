// Class: Sexy::XMLElement


/* Sexy::XMLElement::XMLElement() */

void __thiscall Sexy::XMLElement::XMLElement(XMLElement *this)

{
  FUN_05476574(this + 8);
  FUN_05476574(this + 0x10);
  FUN_05476574(this + 0x18);
  FUN_05476574(this + 0x20);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x28));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x58));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x88));
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 0x98));
  return;
}


/* Sexy::XMLElement::~XMLElement() */

void __thiscall Sexy::XMLElement::~XMLElement(XMLElement *this)

{
  std::
  list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
  ::~list((list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
           *)(this + 0x98));
  std::
  list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
  ::~list((list<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>,std::allocator<std::_Rb_tree_iterator<std::pair<std::wstring_const,std::wstring>>>>
           *)(this + 0x88));
  std::
  map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
  ::~map((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
          *)(this + 0x58));
  std::
  map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
  ::~map((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
          *)(this + 0x28));
  FUN_05476c50(this + 0x20);
  FUN_05476c50(this + 0x18);
  FUN_05476c50(this + 0x10);
  FUN_05476c50(this + 8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::XMLElement::GetAttributeBool(std::wstring const&, bool) */

void __thiscall Sexy::XMLElement::GetAttributeBool(XMLElement *this,wstring *param_1,bool param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  wchar_t *pwVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
             ::find((map<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,std::wstring>>>
                     *)(this + 0x28),param_1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x28));
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  cVar2 = param_2;
  if (cVar1 == '\0') {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    cVar2 = FUN_054765e8(lVar4 + 8);
    if (cVar2 == '\0') {
      pwVar5 = (wchar_t *)FUN_054766ec(lVar4 + 8);
      iVar3 = wcscasecmp_prime(pwVar5,L"true");
      if ((iVar3 == 0) || (iVar3 = wcscasecmp_prime(pwVar5,L"1"), iVar3 == 0)) {
        cVar2 = '\x01';
      }
      else {
        iVar3 = wcscasecmp_prime(pwVar5,L"false");
        if (iVar3 != 0) {
          iVar3 = wcscasecmp_prime(pwVar5,L"0");
          cVar2 = '\0';
          if (iVar3 != 0) {
            cVar2 = param_2;
          }
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


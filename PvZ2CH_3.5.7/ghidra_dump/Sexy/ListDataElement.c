// Class: Sexy::ListDataElement


/* Sexy::ListDataElement::ListDataElement() */

void __thiscall Sexy::ListDataElement::ListDataElement(ListDataElement *this)

{
  DataElement::DataElement((DataElement *)this);
  *(undefined ***)this = &PTR__ListDataElement_06a382d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this[8] = (ListDataElement)0x1;
  return;
}


/* Sexy::ListDataElement::~ListDataElement() */

void __thiscall Sexy::ListDataElement::~ListDataElement(ListDataElement *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x10);
  uVar4 = 0;
  *(undefined ***)this = &PTR__ListDataElement_06a382d0;
  uVar1 = FUN_05442acc(uVar5,*(undefined8 *)(this + 0x18));
  while (uVar3 = uVar4, uVar4 < uVar1) {
    while( true ) {
      uVar4 = uVar3 + 1;
      plVar2 = (long *)FUN_05442ad8(uVar5,uVar3);
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) break;
      (**(code **)(*plVar2 + 8))(plVar2);
      uVar5 = *(undefined8 *)(this + 0x10);
      uVar1 = FUN_05442acc(uVar5,*(undefined8 *)(this + 0x18));
      uVar3 = uVar4;
      if (uVar1 <= uVar4) goto LAB_054436cc;
    }
  }
LAB_054436cc:
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::~vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  nop();
  return;
}


/* Sexy::ListDataElement::~ListDataElement() */

void __thiscall Sexy::ListDataElement::~ListDataElement(ListDataElement *this)

{
  ~ListDataElement(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ListDataElement::ListDataElement(Sexy::ListDataElement const&) */

void __thiscall
Sexy::ListDataElement::ListDataElement(ListDataElement *this,ListDataElement *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  DataElement *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DataElement::DataElement((DataElement *)this);
  *(undefined ***)this = &PTR__ListDataElement_06a382d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  this[8] = (ListDataElement)0x1;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_05442acc(uVar4,*(undefined8 *)(param_1 + 0x18));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_05442ae0(uVar4,uVar3);
    local_10 = (DataElement *)(**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10),
               &local_10);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ListDataElement::Duplicate() */

ListDataElement * __thiscall Sexy::ListDataElement::Duplicate(ListDataElement *this)

{
  ListDataElement *this_00;
  
  this_00 = ::operator_new(0x28);
  ListDataElement(this_00,this);
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ListDataElement::TEMPNAMEPLACEHOLDERVALUE(Sexy::ListDataElement const&) */

void __thiscall Sexy::ListDataElement::operator=(ListDataElement *this,ListDataElement *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  DataElement *local_10;
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0x10);
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_05442acc(uVar5,*(undefined8 *)(this + 0x18));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_05442ad8(uVar5,uVar4);
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
        uVar5 = *(undefined8 *)(this + 0x10);
        uVar1 = FUN_05442acc(uVar5,*(undefined8 *)(this + 0x18));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::clear
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = FUN_05442acc(uVar5,*(undefined8 *)(param_1 + 0x18));
    if (uVar1 <= uVar4) break;
    puVar3 = (undefined8 *)FUN_05442ae0(uVar5,uVar4);
    local_10 = (DataElement *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::push_back
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10),
               &local_10);
    uVar4 = uVar4 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


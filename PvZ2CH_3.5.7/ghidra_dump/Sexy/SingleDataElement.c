// Class: Sexy::SingleDataElement


/* Sexy::SingleDataElement::~SingleDataElement() */

void __thiscall Sexy::SingleDataElement::~SingleDataElement(SingleDataElement *this)

{
  *(undefined ***)this = &PTR__SingleDataElement_06a382a0;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  FUN_05476c50(this + 0x10);
  nop();
  return;
}


/* Sexy::SingleDataElement::~SingleDataElement() */

void __thiscall Sexy::SingleDataElement::~SingleDataElement(SingleDataElement *this)

{
  ~SingleDataElement(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::SingleDataElement::SingleDataElement() */

void __thiscall Sexy::SingleDataElement::SingleDataElement(SingleDataElement *this)

{
  DataElement::DataElement((DataElement *)this);
  *(undefined ***)this = &PTR__SingleDataElement_06a382a0;
  FUN_05476574(this + 0x10);
  this[8] = (SingleDataElement)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* Sexy::SingleDataElement::SingleDataElement(std::wstring const&) */

void __thiscall Sexy::SingleDataElement::SingleDataElement(SingleDataElement *this,wstring *param_1)

{
  DataElement::DataElement((DataElement *)this);
  *(undefined ***)this = &PTR__SingleDataElement_06a382a0;
  FUN_05477b24(this + 0x10,param_1);
  this[8] = (SingleDataElement)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* Sexy::SingleDataElement::SingleDataElement(Sexy::SingleDataElement const&) */

void __thiscall
Sexy::SingleDataElement::SingleDataElement(SingleDataElement *this,SingleDataElement *param_1)

{
  DataElement::DataElement((DataElement *)this,(DataElement *)param_1);
  *(undefined ***)this = &PTR__SingleDataElement_06a382a0;
  FUN_05477b24(this + 0x10,param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}


/* Sexy::SingleDataElement::Duplicate() */

SingleDataElement * __thiscall Sexy::SingleDataElement::Duplicate(SingleDataElement *this)

{
  SingleDataElement *this_00;
  undefined8 uVar1;
  
  this_00 = ::operator_new(0x20);
  SingleDataElement(this_00,this);
  if (*(long **)(this + 0x18) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x18) + 0x10))();
    *(undefined8 *)(this_00 + 0x18) = uVar1;
  }
  return this_00;
}


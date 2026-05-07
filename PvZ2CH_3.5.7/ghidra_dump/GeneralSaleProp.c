// Class: GeneralSaleProp


/* GeneralSaleProp::GeneralSaleProp() */

void __thiscall GeneralSaleProp::GeneralSaleProp(GeneralSaleProp *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  *this = (GeneralSaleProp)0x0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* GeneralSaleProp::GeneralSaleProp(GeneralSaleProp&&) */

void __thiscall GeneralSaleProp::GeneralSaleProp(GeneralSaleProp *this,GeneralSaleProp *param_1)

{
  undefined4 uVar1;
  GeneralSaleProp GVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  GVar2 = *param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *this = GVar2;
  *(undefined4 *)(this + 8) = uVar1;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  return;
}


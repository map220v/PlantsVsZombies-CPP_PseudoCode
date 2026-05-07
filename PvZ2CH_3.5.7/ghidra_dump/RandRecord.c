// Class: RandRecord


/* RandRecord::set(int) */

void __thiscall RandRecord::set(RandRecord *this,int param_1)

{
  int local_4;
  
  local_4 = param_1;
  std::vector<int,std::allocator<int>>::push_back((vector<int,std::allocator<int>> *)this,&local_4);
  return;
}


/* RandRecord::get() */

undefined4 __thiscall RandRecord::get(RandRecord *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(this + 0x18);
  *(int *)(this + 0x18) = iVar1 + 1;
  puVar2 = (undefined4 *)FUN_03cbd6e0(*(undefined8 *)this,(long)iVar1);
  return *puVar2;
}


/* RandRecord::reset() */

void __thiscall RandRecord::reset(RandRecord *this)

{
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


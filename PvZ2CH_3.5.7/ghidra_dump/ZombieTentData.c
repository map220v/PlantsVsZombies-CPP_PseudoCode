// Class: ZombieTentData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTentData::ZombieTentData() */

void __thiscall ZombieTentData::ZombieTentData(ZombieTentData *this)

{
  uint uVar1;
  ulong __n;
  
  Set8BytesTo0((string *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  uVar1 = _FUN_04ca7630;
  __n = (ulong)_FUN_04ca7630;
  *(undefined4 *)this = 8;
  *(undefined4 *)(this + 4) = 2;
  *(undefined4 *)(this + 0xc) = 0x40000000;
  *(uint *)(this + 8) = uVar1;
  std::string::append((string *)(this + 0x10),"zombie_tent",__n);
  return;
}


/* ZombieTentData::~ZombieTentData() */

void __thiscall ZombieTentData::~ZombieTentData(ZombieTentData *this)

{
  std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::~vector
            ((vector<TentZombieWeights,std::allocator<TentZombieWeights>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* ZombieTentData::ZombieTentData(ZombieTentData const&) */

void __thiscall ZombieTentData::ZombieTentData(ZombieTentData *this,ZombieTentData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::vector
            ((vector<TentZombieWeights,std::allocator<TentZombieWeights>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return;
}


/* ZombieTentData::ZombieTentData(ZombieTentData&&) */

void __thiscall ZombieTentData::ZombieTentData(ZombieTentData *this,ZombieTentData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return;
}


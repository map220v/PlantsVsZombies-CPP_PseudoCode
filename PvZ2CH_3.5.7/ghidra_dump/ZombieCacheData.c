// Class: ZombieCacheData


/* ZombieCacheData::ZombieCacheData() */

void __thiscall ZombieCacheData::ZombieCacheData(ZombieCacheData *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* ZombieCacheData::ZombieCacheData(int, int, int, int, std::vector<int, std::allocator<int> >, int,
   unsigned int) */

void __thiscall
ZombieCacheData::ZombieCacheData
          (ZombieCacheData *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,vector *param_6,undefined4 param_7,undefined4 param_8)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x10),param_6);
  *(undefined4 *)(this + 0x28) = param_7;
  *(undefined4 *)(this + 0x2c) = param_8;
  return;
}


/* ZombieCacheData::ZombieCacheData(ZombieCacheData const&) */

void __thiscall ZombieCacheData::ZombieCacheData(ZombieCacheData *this,ZombieCacheData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x10),(vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* ZombieCacheData::ZombieCacheData(ZombieCacheData&&) */

void __thiscall ZombieCacheData::ZombieCacheData(ZombieCacheData *this,ZombieCacheData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* ZombieCacheData::TEMPNAMEPLACEHOLDERVALUE(ZombieCacheData&&) */

ZombieCacheData * __thiscall
ZombieCacheData::operator=(ZombieCacheData *this,ZombieCacheData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x10),(vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = uVar1;
  return this;
}


/* ZombieCacheData::TEMPNAMEPLACEHOLDERVALUE(ZombieCacheData const&) */

ZombieCacheData * __thiscall
ZombieCacheData::operator=(ZombieCacheData *this,ZombieCacheData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x10),(vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = uVar1;
  return this;
}


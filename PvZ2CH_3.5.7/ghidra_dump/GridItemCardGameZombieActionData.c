// Class: GridItemCardGameZombieActionData


/* GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData() */

void __thiscall
GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
          (GridItemCardGameZombieActionData *this)

{
  std::string::~string((string *)(this + 0x10));
  return;
}


/* GridItemCardGameZombieActionData::GridItemCardGameZombieActionData() */

void __thiscall
GridItemCardGameZombieActionData::GridItemCardGameZombieActionData
          (GridItemCardGameZombieActionData *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 100;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  this[0x18] = (GridItemCardGameZombieActionData)0x0;
  return;
}


/* GridItemCardGameZombieActionData::TEMPNAMEPLACEHOLDERVALUE(GridItemCardGameZombieActionData
   const&) */

GridItemCardGameZombieActionData * __thiscall
GridItemCardGameZombieActionData::operator=
          (GridItemCardGameZombieActionData *this,GridItemCardGameZombieActionData *param_1)

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
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  this[0x18] = param_1[0x18];
  return this;
}


/* GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(GridItemCardGameZombieActionData
   const&) */

void __thiscall
GridItemCardGameZombieActionData::GridItemCardGameZombieActionData
          (GridItemCardGameZombieActionData *this,GridItemCardGameZombieActionData *param_1)

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
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  this[0x18] = param_1[0x18];
  return;
}


/* GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(GridItemCardGameZombieActionData&&)
    */

void __thiscall
GridItemCardGameZombieActionData::GridItemCardGameZombieActionData
          (GridItemCardGameZombieActionData *this,GridItemCardGameZombieActionData *param_1)

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
  FUN_05474148(this + 0x10,param_1 + 0x10);
  this[0x18] = param_1[0x18];
  return;
}


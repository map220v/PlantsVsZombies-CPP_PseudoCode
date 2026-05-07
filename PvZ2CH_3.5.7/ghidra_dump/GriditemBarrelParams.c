// Class: GriditemBarrelParams


/* GriditemBarrelParams::~GriditemBarrelParams() */

void __thiscall GriditemBarrelParams::~GriditemBarrelParams(GriditemBarrelParams *this)

{
  std::vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>>::~vector
            ((vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>> *)
             (this + 0x10));
  return;
}


/* GriditemBarrelParams::GriditemBarrelParams(GriditemBarrelParams const&) */

void __thiscall
GriditemBarrelParams::GriditemBarrelParams(GriditemBarrelParams *this,GriditemBarrelParams *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  std::vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>>::vector
            ((vector<GriditemBarrelZombieDes,std::allocator<GriditemBarrelZombieDes>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* GriditemBarrelParams::GriditemBarrelParams() */

void __thiscall GriditemBarrelParams::GriditemBarrelParams(GriditemBarrelParams *this)

{
  *(undefined4 *)this = 0x453b8000;
  *(undefined4 *)(this + 4) = 0x3e3d70a4;
  *(undefined4 *)(this + 8) = 0x453b8000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* GriditemBarrelParams::GriditemBarrelParams(GriditemBarrelParams&&) */

void __thiscall
GriditemBarrelParams::GriditemBarrelParams(GriditemBarrelParams *this,GriditemBarrelParams *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


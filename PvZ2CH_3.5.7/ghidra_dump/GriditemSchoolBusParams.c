// Class: GriditemSchoolBusParams


/* GriditemSchoolBusParams::GriditemSchoolBusParams() */

void __thiscall GriditemSchoolBusParams::GriditemSchoolBusParams(GriditemSchoolBusParams *this)

{
  *(undefined4 *)this = 0x453b8000;
  *(undefined4 *)(this + 4) = 0x3e3d70a4;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* GriditemSchoolBusParams::~GriditemSchoolBusParams() */

void __thiscall GriditemSchoolBusParams::~GriditemSchoolBusParams(GriditemSchoolBusParams *this)

{
  std::vector<SchoolBusZombieDes,std::allocator<SchoolBusZombieDes>>::~vector
            ((vector<SchoolBusZombieDes,std::allocator<SchoolBusZombieDes>> *)(this + 8));
  return;
}


/* GriditemSchoolBusParams::GriditemSchoolBusParams(GriditemSchoolBusParams const&) */

void __thiscall
GriditemSchoolBusParams::GriditemSchoolBusParams
          (GriditemSchoolBusParams *this,GriditemSchoolBusParams *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<SchoolBusZombieDes,std::allocator<SchoolBusZombieDes>>::vector
            ((vector<SchoolBusZombieDes,std::allocator<SchoolBusZombieDes>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


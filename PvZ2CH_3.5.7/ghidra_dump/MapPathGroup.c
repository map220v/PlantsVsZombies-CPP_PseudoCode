// Class: MapPathGroup


/* MapPathGroup::~MapPathGroup() */

void __thiscall MapPathGroup::~MapPathGroup(MapPathGroup *this)

{
  FUN_03ae9a98(*(undefined8 *)this);
  return;
}


/* MapPathGroup::MapPathGroup(MapPathGroup const&) */

void __thiscall MapPathGroup::MapPathGroup(MapPathGroup *this,MapPathGroup *param_1)

{
  std::vector<MapPath,std::allocator<MapPath>>::vector
            ((vector<MapPath,std::allocator<MapPath>> *)this,(vector *)param_1);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}


// Class: PlantPowerSet


/* PlantPowerSet::PlantPowerSet(PlantPowerSet const&) */

void __thiscall PlantPowerSet::PlantPowerSet(PlantPowerSet *this,PlantPowerSet *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* PlantPowerSet::TEMPNAMEPLACEHOLDERVALUE(PlantPowerSet const&) */

PlantPowerSet * __thiscall PlantPowerSet::operator=(PlantPowerSet *this,PlantPowerSet *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return this;
}


// Class: SpecialGameLevelGroup


/* SpecialGameLevelGroup::SpecialGameLevelGroup(SpecialGameLevelGroup&&) */

void __thiscall
SpecialGameLevelGroup::SpecialGameLevelGroup
          (SpecialGameLevelGroup *this,SpecialGameLevelGroup *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  this[4] = param_1[4];
  *(undefined4 *)this = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  return;
}


/* SpecialGameLevelGroup::SpecialGameLevelGroup() */

void __thiscall SpecialGameLevelGroup::SpecialGameLevelGroup(SpecialGameLevelGroup *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  this[4] = (SpecialGameLevelGroup)0x0;
  *(undefined4 *)this = 0xffffffff;
  return;
}


/* SpecialGameLevelGroup::~SpecialGameLevelGroup() */

void __thiscall SpecialGameLevelGroup::~SpecialGameLevelGroup(SpecialGameLevelGroup *this)

{
  std::vector<PlantNameArray,std::allocator<PlantNameArray>>::~vector
            ((vector<PlantNameArray,std::allocator<PlantNameArray>> *)(this + 8));
  return;
}


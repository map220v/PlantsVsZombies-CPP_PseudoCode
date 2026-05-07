// Class: ComponentConditionRadiusProps


/* ComponentConditionRadiusProps::ComponentConditionRadiusProps() */

void __thiscall
ComponentConditionRadiusProps::ComponentConditionRadiusProps(ComponentConditionRadiusProps *this)

{
  ComponentRadiusBurstProps::ComponentRadiusBurstProps((ComponentRadiusBurstProps *)this);
  *(undefined4 *)(this + 0x84) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  return;
}


/* ComponentConditionRadiusProps::TEMPNAMEPLACEHOLDERVALUE(ComponentConditionRadiusProps const&) */

ComponentConditionRadiusProps * __thiscall
ComponentConditionRadiusProps::operator=
          (ComponentConditionRadiusProps *this,ComponentConditionRadiusProps *param_1)

{
  ComponentRadiusBurstProps::operator=
            ((ComponentRadiusBurstProps *)this,(ComponentRadiusBurstProps *)param_1);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  std::vector<PlantConditionEntry,std::allocator<PlantConditionEntry>>::operator=
            ((vector<PlantConditionEntry,std::allocator<PlantConditionEntry>> *)(this + 0x88),
             (vector *)(param_1 + 0x88));
  return this;
}


/* ComponentConditionRadiusProps::~ComponentConditionRadiusProps() */

void __thiscall
ComponentConditionRadiusProps::~ComponentConditionRadiusProps(ComponentConditionRadiusProps *this)

{
  std::vector<PlantConditionEntry,std::allocator<PlantConditionEntry>>::~vector
            ((vector<PlantConditionEntry,std::allocator<PlantConditionEntry>> *)(this + 0x88));
  ComponentRadiusBurstProps::~ComponentRadiusBurstProps((ComponentRadiusBurstProps *)this);
  return;
}


/* ComponentConditionRadiusProps::ComponentConditionRadiusProps(ComponentConditionRadiusProps
   const&) */

void __thiscall
ComponentConditionRadiusProps::ComponentConditionRadiusProps
          (ComponentConditionRadiusProps *this,ComponentConditionRadiusProps *param_1)

{
  ComponentRadiusBurstProps::ComponentRadiusBurstProps
            ((ComponentRadiusBurstProps *)this,(ComponentRadiusBurstProps *)param_1);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  std::vector<PlantConditionEntry,std::allocator<PlantConditionEntry>>::vector
            ((vector<PlantConditionEntry,std::allocator<PlantConditionEntry>> *)(this + 0x88),
             (vector *)(param_1 + 0x88));
  return;
}


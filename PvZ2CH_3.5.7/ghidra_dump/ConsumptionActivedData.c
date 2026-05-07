// Class: ConsumptionActivedData


/* ConsumptionActivedData::ConsumptionActivedData() */

void __thiscall ConsumptionActivedData::ConsumptionActivedData(ConsumptionActivedData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *this = (ConsumptionActivedData)0x1;
  return;
}


/* ConsumptionActivedData::~ConsumptionActivedData() */

void __thiscall ConsumptionActivedData::~ConsumptionActivedData(ConsumptionActivedData *this)

{
  std::vector<ConsumptionActivedItem,std::allocator<ConsumptionActivedItem>>::~vector
            ((vector<ConsumptionActivedItem,std::allocator<ConsumptionActivedItem>> *)(this + 8));
  return;
}


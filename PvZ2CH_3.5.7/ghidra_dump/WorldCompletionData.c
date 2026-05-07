// Class: WorldCompletionData


/* WorldCompletionData::~WorldCompletionData() */

void __thiscall WorldCompletionData::~WorldCompletionData(WorldCompletionData *this)

{
  std::vector<WorldEventCompletionData,std::allocator<WorldEventCompletionData>>::~vector
            ((vector<WorldEventCompletionData,std::allocator<WorldEventCompletionData>> *)(this + 8)
            );
  return;
}


/* WorldCompletionData::WorldCompletionData() */

void __thiscall WorldCompletionData::WorldCompletionData(WorldCompletionData *this)

{
  *this = (WorldCompletionData)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  this[0x20] = (WorldCompletionData)0x0;
  return;
}


/* WorldCompletionData::WorldCompletionData(WorldCompletionData const&) */

void __thiscall
WorldCompletionData::WorldCompletionData(WorldCompletionData *this,WorldCompletionData *param_1)

{
  *this = *param_1;
  std::vector<WorldEventCompletionData,std::allocator<WorldEventCompletionData>>::vector
            ((vector<WorldEventCompletionData,std::allocator<WorldEventCompletionData>> *)(this + 8)
             ,(vector *)(param_1 + 8));
  this[0x20] = param_1[0x20];
  return;
}


/* WorldCompletionData::WorldCompletionData(WorldCompletionData&&) */

void __thiscall
WorldCompletionData::WorldCompletionData(WorldCompletionData *this,WorldCompletionData *param_1)

{
  *this = *param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  this[0x20] = param_1[0x20];
  return;
}


/* WorldCompletionData::TEMPNAMEPLACEHOLDERVALUE(WorldCompletionData const&) */

WorldCompletionData * __thiscall
WorldCompletionData::operator=(WorldCompletionData *this,WorldCompletionData *param_1)

{
  *this = *param_1;
  std::vector<WorldEventCompletionData,std::allocator<WorldEventCompletionData>>::operator=
            ((vector<WorldEventCompletionData,std::allocator<WorldEventCompletionData>> *)(this + 8)
             ,(vector *)(param_1 + 8));
  this[0x20] = param_1[0x20];
  return this;
}


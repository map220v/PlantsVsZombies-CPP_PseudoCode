// Class: UnchartedModeLevelData


/* UnchartedModeLevelData::~UnchartedModeLevelData() */

void __thiscall UnchartedModeLevelData::~UnchartedModeLevelData(UnchartedModeLevelData *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x88));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x60));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x48));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x30));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x18));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::~vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)this
            );
  return;
}


/* UnchartedModeLevelData::UnchartedModeLevelData(UnchartedModeLevelData const&) */

void __thiscall
UnchartedModeLevelData::UnchartedModeLevelData
          (UnchartedModeLevelData *this,UnchartedModeLevelData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)this
             ,(vector *)param_1);
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::vector
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x60),(vector *)(param_1 + 0x60));
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x7c) = uVar2;
  *(undefined4 *)(this + 0x80) = uVar3;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x88),(vector *)(param_1 + 0x88));
  return;
}


/* UnchartedModeLevelData::UnchartedModeLevelData() */

void __thiscall UnchartedModeLevelData::UnchartedModeLevelData(UnchartedModeLevelData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::clear
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)this
            );
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::clear
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x18));
  std::vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>>::clear
            ((vector<UnchartedModeLevelBonusData,std::allocator<UnchartedModeLevelBonusData>> *)
             (this + 0x30));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x60));
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x88));
  return;
}


/* UnchartedModeLevelData::UnchartedModeLevelData(UnchartedModeLevelData&&) */

void __thiscall
UnchartedModeLevelData::UnchartedModeLevelData
          (UnchartedModeLevelData *this,UnchartedModeLevelData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x60),(vector *)(param_1 + 0x60));
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x7c) = uVar2;
  *(undefined4 *)(this + 0x80) = uVar3;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x88),(vector *)(param_1 + 0x88));
  return;
}


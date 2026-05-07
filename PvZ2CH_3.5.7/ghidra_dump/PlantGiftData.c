// Class: PlantGiftData


/* PlantGiftData::PlantGiftData() */

void __thiscall PlantGiftData::PlantGiftData(PlantGiftData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::string::append((string *)this,"",in_x2);
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  std::vector<LevelGem,std::allocator<LevelGem>>::clear
            ((vector<LevelGem,std::allocator<LevelGem>> *)(this + 0x20));
  return;
}


/* PlantGiftData::~PlantGiftData() */

void __thiscall PlantGiftData::~PlantGiftData(PlantGiftData *this)

{
  std::vector<LevelGem,std::allocator<LevelGem>>::~vector
            ((vector<LevelGem,std::allocator<LevelGem>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* PlantGiftData::PlantGiftData(PlantGiftData&&) */

void __thiscall PlantGiftData::PlantGiftData(PlantGiftData *this,PlantGiftData *param_1)

{
  undefined4 uVar1;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  return;
}


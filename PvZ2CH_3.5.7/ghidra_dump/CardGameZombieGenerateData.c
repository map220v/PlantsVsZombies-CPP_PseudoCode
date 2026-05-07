// Class: CardGameZombieGenerateData


/* CardGameZombieGenerateData::CardGameZombieGenerateData() */

void __thiscall
CardGameZombieGenerateData::CardGameZombieGenerateData(CardGameZombieGenerateData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 2;
  return;
}


/* CardGameZombieGenerateData::~CardGameZombieGenerateData() */

void __thiscall
CardGameZombieGenerateData::~CardGameZombieGenerateData(CardGameZombieGenerateData *this)

{
  std::vector<GridItemCardGameTowerGenerateData,std::allocator<GridItemCardGameTowerGenerateData>>::
  ~vector((vector<GridItemCardGameTowerGenerateData,std::allocator<GridItemCardGameTowerGenerateData>>
           *)(this + 0x18));
  std::string::~string((string *)this);
  return;
}


/* CardGameZombieGenerateData::CardGameZombieGenerateData(CardGameZombieGenerateData&&) */

void __thiscall
CardGameZombieGenerateData::CardGameZombieGenerateData
          (CardGameZombieGenerateData *this,CardGameZombieGenerateData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return;
}


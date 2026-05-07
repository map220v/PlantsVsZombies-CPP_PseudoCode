// Class: MiniGamePerkBuff


/* MiniGamePerkBuff::MiniGamePerkBuff() */

void __thiscall MiniGamePerkBuff::MiniGamePerkBuff(MiniGamePerkBuff *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  PlantRestrictionSet::PlantRestrictionSet((PlantRestrictionSet *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* MiniGamePerkBuff::~MiniGamePerkBuff() */

void __thiscall MiniGamePerkBuff::~MiniGamePerkBuff(MiniGamePerkBuff *this)

{
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x30));
  PlantRestrictionSet::~PlantRestrictionSet((PlantRestrictionSet *)(this + 8));
  return;
}


/* MiniGamePerkBuff::MiniGamePerkBuff(MiniGamePerkBuff&&) */

void __thiscall MiniGamePerkBuff::MiniGamePerkBuff(MiniGamePerkBuff *this,MiniGamePerkBuff *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  PlantRestrictionSet::PlantRestrictionSet
            ((PlantRestrictionSet *)(this + 8),(PlantRestrictionSet *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  return;
}


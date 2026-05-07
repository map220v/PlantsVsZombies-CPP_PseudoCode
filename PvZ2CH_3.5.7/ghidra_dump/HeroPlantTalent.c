// Class: HeroPlantTalent


/* HeroPlantTalent::HeroPlantTalent() */

void __thiscall HeroPlantTalent::HeroPlantTalent(HeroPlantTalent *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 0x18) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* HeroPlantTalent::~HeroPlantTalent() */

void __thiscall HeroPlantTalent::~HeroPlantTalent(HeroPlantTalent *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* HeroPlantTalent::HeroPlantTalent(HeroPlantTalent&&) */

void __thiscall HeroPlantTalent::HeroPlantTalent(HeroPlantTalent *this,HeroPlantTalent *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  return;
}


/* HeroPlantTalent::HeroPlantTalent(HeroPlantTalent const&) */

void __thiscall HeroPlantTalent::HeroPlantTalent(HeroPlantTalent *this,HeroPlantTalent *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  return;
}


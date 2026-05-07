// Class: ZombieLootApplicant


/* ZombieLootApplicant::ZombieLootApplicant() */

void __thiscall ZombieLootApplicant::ZombieLootApplicant(ZombieLootApplicant *this)

{
  *(undefined8 *)this = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* ZombieLootApplicant::~ZombieLootApplicant() */

void __thiscall ZombieLootApplicant::~ZombieLootApplicant(ZombieLootApplicant *this)

{
  std::vector<Loot,std::allocator<Loot>>::~vector
            ((vector<Loot,std::allocator<Loot>> *)(this + 0x20));
  std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::~vector
            ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)(this + 8));
  return;
}


/* ZombieLootApplicant::ZombieLootApplicant(ZombieLootApplicant&&) */

void __thiscall
ZombieLootApplicant::ZombieLootApplicant(ZombieLootApplicant *this,ZombieLootApplicant *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  return;
}


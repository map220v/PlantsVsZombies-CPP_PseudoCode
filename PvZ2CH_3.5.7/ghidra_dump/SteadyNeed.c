// Class: SteadyNeed


/* SteadyNeed::~SteadyNeed() */

void __thiscall SteadyNeed::~SteadyNeed(SteadyNeed *this)

{
  std::string::~string((string *)(this + 0x20));
  std::vector<SteadyMaterial,std::allocator<SteadyMaterial>>::~vector
            ((vector<SteadyMaterial,std::allocator<SteadyMaterial>> *)(this + 8));
  return;
}


/* SteadyNeed::SteadyNeed() */

void __thiscall SteadyNeed::SteadyNeed(SteadyNeed *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  Set8BytesTo0(this + 0x20);
  return;
}


/* SteadyNeed::SteadyNeed(SteadyNeed&&) */

void __thiscall SteadyNeed::SteadyNeed(SteadyNeed *this,SteadyNeed *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  FUN_05474148(this + 0x20,param_1 + 0x20);
  return;
}


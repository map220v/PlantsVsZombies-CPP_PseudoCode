// Class: TriRepGenerator::PointGroup::BarGroup


/* TriRepGenerator::PointGroup::BarGroup::BarGroup() */

void __thiscall TriRepGenerator::PointGroup::BarGroup::BarGroup(BarGroup *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* TriRepGenerator::PointGroup::BarGroup::BarGroup(TriRepGenerator::PointGroup::BarGroup&&) */

void __thiscall TriRepGenerator::PointGroup::BarGroup::BarGroup(BarGroup *this,BarGroup *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}


/* TriRepGenerator::PointGroup::BarGroup::~BarGroup() */

void __thiscall TriRepGenerator::PointGroup::BarGroup::~BarGroup(BarGroup *this)

{
  FUN_0515b99c(*(undefined8 *)this);
  return;
}


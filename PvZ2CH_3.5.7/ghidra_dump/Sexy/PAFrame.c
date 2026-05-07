// Class: Sexy::PAFrame


/* Sexy::PAFrame::PAFrame() */

void __thiscall Sexy::PAFrame::PAFrame(PAFrame *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  this[0x18] = (PAFrame)0x0;
  return;
}


/* Sexy::PAFrame::~PAFrame() */

void __thiscall Sexy::PAFrame::~PAFrame(PAFrame *this)

{
  std::vector<Sexy::PACommand,std::allocator<Sexy::PACommand>>::~vector
            ((vector<Sexy::PACommand,std::allocator<Sexy::PACommand>> *)(this + 0x20));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)this);
  return;
}


/* Sexy::PAFrame::PAFrame(Sexy::PAFrame&&) */

void __thiscall Sexy::PAFrame::PAFrame(PAFrame *this,PAFrame *param_1)

{
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  this[0x18] = param_1[0x18];
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  return;
}


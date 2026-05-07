// Class: Sexy::MemoryImage::TriRep::Level::Region


/* Sexy::MemoryImage::TriRep::Level::Region::Region() */

void __thiscall Sexy::MemoryImage::TriRep::Level::Region::Region(Region *this)

{
  Insets::Insets((Insets *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* Sexy::MemoryImage::TriRep::Level::Region::~Region() */

void __thiscall Sexy::MemoryImage::TriRep::Level::Region::~Region(Region *this)

{
  std::vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>>::
  ~vector((vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>> *)
          (this + 0x10));
  return;
}


/* Sexy::MemoryImage::TriRep::Level::Region::Region(Sexy::MemoryImage::TriRep::Level::Region&&) */

void __thiscall Sexy::MemoryImage::TriRep::Level::Region::Region(Region *this,Region *param_1)

{
  Insets::Insets((Insets *)this,(Insets *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* Sexy::MemoryImage::TriRep::Level::Region::Region(Sexy::MemoryImage::TriRep::Level::Region const&)
    */

void __thiscall Sexy::MemoryImage::TriRep::Level::Region::Region(Region *this,Region *param_1)

{
  Insets::Insets((Insets *)this,(Insets *)param_1);
  std::vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>>::vector
            ((vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>>
              *)(this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


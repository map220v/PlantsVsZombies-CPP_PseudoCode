// Class: Sexy::MemoryImage::TriRep


/* Sexy::MemoryImage::TriRep::GetLevelForScreenSpaceUsage(float, bool) */

ulong Sexy::MemoryImage::TriRep::GetLevelForScreenSpaceUsage(float param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>> *this;
  ulong uVar3;
  ulong uVar4;
  
  this = (vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>
          *)(ulong)param_2;
  cVar2 = std::
          vector<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>
          ::empty(this);
  if (cVar2 == '\0') {
    uVar3 = std::
            vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
            ::back((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                    *)this);
    if (0.001 < param_1) {
      uVar4 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
              front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
                    this);
      if (uVar4 <= uVar3) {
        return uVar3;
      }
    }
    else {
      do {
        uVar4 = std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *
                      )this);
        bVar1 = uVar4 <= uVar3;
        uVar3 = uVar3 - 0x28;
      } while (bVar1);
    }
  }
  return 0;
}


/* Sexy::MemoryImage::TriRep::~TriRep() */

void __thiscall Sexy::MemoryImage::TriRep::~TriRep(TriRep *this)

{
  std::_Destroy<Sexy::MemoryImage::TriRep::Level*>(*(Level **)this,*(Level **)(this + 8));
  std::
  _Vector_base<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>::
  ~_Vector_base((_Vector_base<Sexy::MemoryImage::TriRep::Level,std::allocator<Sexy::MemoryImage::TriRep::Level>>
                 *)this);
  return;
}


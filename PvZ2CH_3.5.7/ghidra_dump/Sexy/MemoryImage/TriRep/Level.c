// Class: Sexy::MemoryImage::TriRep::Level


/* Sexy::MemoryImage::TriRep::Level::Level(Sexy::MemoryImage::TriRep::Level&&) */

void __thiscall Sexy::MemoryImage::TriRep::Level::Level(Level *this,Level *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* Sexy::MemoryImage::TriRep::Level::Level() */

void __thiscall Sexy::MemoryImage::TriRep::Level::Level(Level *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* Sexy::MemoryImage::TriRep::Level::~Level() */

void __thiscall Sexy::MemoryImage::TriRep::Level::~Level(Level *this)

{
  std::
  vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
  ::~vector((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
             *)(this + 0x10));
  return;
}


/* Sexy::MemoryImage::TriRep::Level::GetRegionTrisPtr(int&, Sexy::MemoryImage*, Sexy::TRect<int>
   const&, bool) */

undefined8
Sexy::MemoryImage::TriRep::Level::GetRegionTrisPtr
          (int *param_1,MemoryImage *param_2,TRect *param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  
  piVar9 = (int *)(ulong)param_4;
  cVar5 = std::
          vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
          ::empty((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                   *)(param_1 + 4));
  if (cVar5 == '\0') {
    iVar6 = param_1[2];
    if (iVar6 == *(int *)(param_3 + 0x44)) {
      iVar1 = param_1[3];
      if (iVar1 == *(int *)(param_3 + 0x40)) {
        iVar3 = 0;
        if (iVar6 != 0) {
          iVar3 = *(int *)(param_3 + 0x38) / iVar6;
        }
        iVar2 = piVar9[2];
        iVar4 = 0;
        if (iVar1 != 0) {
          iVar4 = *(int *)(param_3 + 0x3c) / iVar1;
        }
        if ((iVar2 == iVar3) && (iVar3 = piVar9[3], iVar3 == iVar4)) {
          iVar4 = 0;
          if (iVar2 != 0) {
            iVar4 = *piVar9 / iVar2;
          }
          iVar2 = 0;
          if (iVar3 != 0) {
            iVar2 = piVar9[1] / iVar3;
          }
          if ((iVar4 < iVar6) && (iVar2 < iVar1)) {
            lVar7 = FUN_0515b8dc(*(undefined8 *)(param_1 + 4),(long)(iVar4 + iVar6 * iVar2));
            iVar6 = FUN_0515b8c8(*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18));
            *(int *)param_2 = iVar6;
            if (iVar6 != 0) {
              uVar8 = std::
                      vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                      front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                             *)(lVar7 + 0x10));
              return uVar8;
            }
          }
        }
      }
    }
  }
  return 0;
}


void __thiscall Sexy::MemoryImage::TriRep::Level::~Level(Level *this)

{
  std::
  vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
  ::~vector((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
             *)(this + 0x10));
  return;
}


void __thiscall Sexy::MemoryImage::TriRep::Level::~Level(Level *this)

{
  std::
  vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
  ::~vector((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
             *)(this + 0x10));
  return;
}


void __thiscall Sexy::MemoryImage::TriRep::Level::~Level(Level *this)

{
  std::
  vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
  ::~vector((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
             *)(this + 0x10));
  return;
}


/* Sexy::MemoryImage::TriRep::Level::GetRegionTris(std::vector<Sexy::MemoryImage::TriRep::Tri,
   std::allocator<Sexy::MemoryImage::TriRep::Tri> >&, Sexy::MemoryImage*, Sexy::TRect<int> const&,
   bool) */

void Sexy::MemoryImage::TriRep::Level::GetRegionTris
               (vector *param_1,MemoryImage *param_2,TRect *param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  long lVar7;
  int *piVar8;
  
  piVar8 = (int *)(ulong)param_4;
  cVar6 = std::
          vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
          ::empty((vector<Sexy::MemoryImage::TriRep::Level::Region,std::allocator<Sexy::MemoryImage::TriRep::Level::Region>>
                   *)(param_1 + 0x10));
  if (cVar6 == '\0') {
    iVar1 = *(int *)(param_1 + 8);
    if ((iVar1 == *(int *)(param_3 + 0x44)) &&
       (iVar2 = *(int *)(param_1 + 0xc), iVar2 == *(int *)(param_3 + 0x40))) {
      iVar3 = piVar8[2];
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = *(int *)(param_3 + 0x38) / iVar1;
      }
      if (iVar3 == iVar4) {
        iVar4 = piVar8[3];
        iVar5 = 0;
        if (iVar2 != 0) {
          iVar5 = *(int *)(param_3 + 0x3c) / iVar2;
        }
        if (iVar4 == iVar5) {
          iVar5 = 0;
          if (iVar3 != 0) {
            iVar5 = *piVar8 / iVar3;
          }
          iVar3 = 0;
          if (iVar4 != 0) {
            iVar3 = piVar8[1] / iVar4;
          }
          if ((iVar5 < iVar1) && (iVar3 < iVar2)) {
            lVar7 = FUN_0515b8dc(*(undefined8 *)(param_1 + 0x10),(long)(iVar5 + iVar1 * iVar3));
            std::
            vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>>::
            operator=((vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>>
                       *)param_2,(vector *)(lVar7 + 0x10));
            return;
          }
        }
      }
    }
  }
  return;
}


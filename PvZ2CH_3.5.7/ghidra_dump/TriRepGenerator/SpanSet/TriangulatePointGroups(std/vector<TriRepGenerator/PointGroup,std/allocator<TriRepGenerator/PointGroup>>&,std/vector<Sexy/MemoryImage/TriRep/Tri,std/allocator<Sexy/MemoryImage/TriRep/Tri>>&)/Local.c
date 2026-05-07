// Class: TriRepGenerator::SpanSet::TriangulatePointGroups(std::vector<TriRepGenerator::PointGroup,std::allocator<TriRepGenerator::PointGroup>>&,std::vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>>&)::Local


/* PointCompare(void const*, void const*) */

undefined4
TriRepGenerator::SpanSet::
TriangulatePointGroups(std::vector<TriRepGenerator::PointGroup,std::allocator<TriRepGenerator::PointGroup>>&,std::vector<Sexy::MemoryImage::TriRep::Tri,std::allocator<Sexy::MemoryImage::TriRep::Tri>>&)
::Local::PointCompare(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (*(int **)param_1)[1];
  iVar2 = (*(int **)param_2)[1];
  if (iVar1 < iVar2) {
    return 0xffffffff;
  }
  uVar3 = 1;
  if ((iVar1 <= iVar2) && (uVar3 = 0xffffffff, **(int **)param_2 < **(int **)param_1)) {
    uVar3 = 1;
  }
  return uVar3;
}


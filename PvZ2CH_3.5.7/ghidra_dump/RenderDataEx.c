// Class: RenderDataEx


/* RenderDataEx::TEMPNAMEPLACEHOLDERVALUE(RenderDataEx const&) const */

bool __thiscall RenderDataEx::operator<(RenderDataEx *this,RenderDataEx *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator<((string *)this,(string *)param_1);
  if (!bVar1) {
    cVar2 = std::operator==((string *)this,(string *)param_1);
    if (cVar2 != '\0') {
      if (*(int *)(this + 8) < *(int *)(param_1 + 8)) {
        return (bool)cVar2;
      }
      if (*(int *)(this + 8) == *(int *)(param_1 + 8)) {
        bVar1 = *(int *)(this + 0xc) < *(int *)(param_1 + 0xc);
      }
    }
  }
  return bVar1;
}


bool __thiscall RenderDataEx::operator<(RenderDataEx *this,RenderDataEx *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator<((string *)this,(string *)param_1);
  if (!bVar1) {
    cVar2 = std::operator==((string *)this,(string *)param_1);
    if (cVar2 != '\0') {
      if (*(int *)(this + 8) < *(int *)(param_1 + 8)) {
        return (bool)cVar2;
      }
      if (*(int *)(this + 8) == *(int *)(param_1 + 8)) {
        bVar1 = *(int *)(this + 0xc) < *(int *)(param_1 + 0xc);
      }
    }
  }
  return bVar1;
}


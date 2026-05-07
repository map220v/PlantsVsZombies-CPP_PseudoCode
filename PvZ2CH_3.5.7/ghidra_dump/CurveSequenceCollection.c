// Class: CurveSequenceCollection<float>


/* CurveSequenceCollection<float>::getIdxFor(std::string const&) const */

ulong __thiscall
CurveSequenceCollection<float>::getIdxFor(CurveSequenceCollection<float> *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)this;
  uVar2 = FUN_03629ca4(uVar6,*(undefined8 *)(this + 8));
  uVar4 = 0;
  do {
    uVar5 = uVar4 & 0xffffffff;
    if (uVar4 == uVar2) {
      return 0xffffffff;
    }
    psVar3 = (string *)FUN_03629cb0(uVar6,uVar4);
    cVar1 = std::operator==(psVar3,param_1);
    uVar4 = uVar4 + 1;
  } while (cVar1 == '\0');
  return uVar5;
}


/* CurveSequenceCollection<float>::~CurveSequenceCollection() */

void __thiscall
CurveSequenceCollection<float>::~CurveSequenceCollection(CurveSequenceCollection<float> *this)

{
  std::vector<CurveSequence<float>,std::allocator<CurveSequence<float>>>::~vector
            ((vector<CurveSequence<float>,std::allocator<CurveSequence<float>>> *)(this + 0x18));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveSequenceCollection<float>::createIdxFor(std::string const&) */

void __thiscall
CurveSequenceCollection<float>::createIdxFor(CurveSequenceCollection<float> *this,string *param_1)

{
  int iVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this,param_1);
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
  std::vector<CurveSequence<float>,std::allocator<CurveSequence<float>>>::push_back
            ((vector<CurveSequence<float>,std::allocator<CurveSequence<float>>> *)(this + 0x18),
             (CurveSequence *)&local_20);
  CurveSequence<float>::~CurveSequence((CurveSequence<float> *)&local_20);
  iVar1 = FUN_03629ca4(*(undefined8 *)this,*(undefined8 *)(this + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + -1);
}


/* CurveSequenceCollection<float>::Get(std::string const&) */

void __thiscall
CurveSequenceCollection<float>::Get(CurveSequenceCollection<float> *this,string *param_1)

{
  int iVar1;
  
  iVar1 = getIdxFor(this,param_1);
  if (iVar1 != -1) {
    FUN_03629ba4(*(undefined8 *)(this + 0x18));
    return;
  }
  iVar1 = createIdxFor(this,param_1);
  FUN_03629ba4(*(undefined8 *)(this + 0x18),(long)iVar1);
  return;
}


/* CurveSequenceCollection<float>::operator[](std::string const&) */

void CurveSequenceCollection<float>::operator[](string *param_1)

{
  int iVar1;
  string *in_x1;
  
  iVar1 = getIdxFor((CurveSequenceCollection<float> *)param_1,in_x1);
  if (iVar1 != -1) {
    FUN_03629ba4(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  iVar1 = createIdxFor((CurveSequenceCollection<float> *)param_1,in_x1);
  FUN_03629ba4(*(undefined8 *)(param_1 + 0x18),(long)iVar1);
  return;
}


/* CurveSequenceCollection<Sexy::SexyVector2>::getIdxFor(std::string const&) const */

ulong __thiscall
CurveSequenceCollection<Sexy::SexyVector2>::getIdxFor
          (CurveSequenceCollection<Sexy::SexyVector2> *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)this;
  uVar2 = FUN_03676f3c(uVar6,*(undefined8 *)(this + 8));
  uVar4 = 0;
  do {
    uVar5 = uVar4 & 0xffffffff;
    if (uVar4 == uVar2) {
      return 0xffffffff;
    }
    psVar3 = (string *)FUN_03676f48(uVar6,uVar4);
    cVar1 = std::operator==(psVar3,param_1);
    uVar4 = uVar4 + 1;
  } while (cVar1 == '\0');
  return uVar5;
}


/* CurveSequenceCollection<Sexy::SexyVector2>::~CurveSequenceCollection() */

void __thiscall
CurveSequenceCollection<Sexy::SexyVector2>::~CurveSequenceCollection
          (CurveSequenceCollection<Sexy::SexyVector2> *this)

{
  std::vector<CurveSequence<Sexy::SexyVector2>,std::allocator<CurveSequence<Sexy::SexyVector2>>>::
  ~vector((vector<CurveSequence<Sexy::SexyVector2>,std::allocator<CurveSequence<Sexy::SexyVector2>>>
           *)(this + 0x18));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CurveSequenceCollection<Sexy::SexyVector2>::createIdxFor(std::string const&) */

void __thiscall
CurveSequenceCollection<Sexy::SexyVector2>::createIdxFor
          (CurveSequenceCollection<Sexy::SexyVector2> *this,string *param_1)

{
  int iVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)this,param_1);
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
  std::vector<CurveSequence<Sexy::SexyVector2>,std::allocator<CurveSequence<Sexy::SexyVector2>>>::
  push_back((vector<CurveSequence<Sexy::SexyVector2>,std::allocator<CurveSequence<Sexy::SexyVector2>>>
             *)(this + 0x18),(CurveSequence *)&local_20);
  CurveSequence<Sexy::SexyVector2>::~CurveSequence((CurveSequence<Sexy::SexyVector2> *)&local_20);
  iVar1 = FUN_03676f3c(*(undefined8 *)this,*(undefined8 *)(this + 8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + -1);
}


/* CurveSequenceCollection<Sexy::SexyVector2>::Get(std::string const&) */

void __thiscall
CurveSequenceCollection<Sexy::SexyVector2>::Get
          (CurveSequenceCollection<Sexy::SexyVector2> *this,string *param_1)

{
  int iVar1;
  
  iVar1 = getIdxFor(this,param_1);
  if (iVar1 != -1) {
    FUN_03676f98(*(undefined8 *)(this + 0x18));
    return;
  }
  iVar1 = createIdxFor(this,param_1);
  FUN_03676f98(*(undefined8 *)(this + 0x18),(long)iVar1);
  return;
}


/* CurveSequenceCollection<Sexy::SexyVector2>::operator[](std::string const&) */

void CurveSequenceCollection<Sexy::SexyVector2>::operator[](string *param_1)

{
  int iVar1;
  string *in_x1;
  
  iVar1 = getIdxFor((CurveSequenceCollection<Sexy::SexyVector2> *)param_1,in_x1);
  if (iVar1 != -1) {
    FUN_03676f98(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  iVar1 = createIdxFor((CurveSequenceCollection<Sexy::SexyVector2> *)param_1,in_x1);
  FUN_03676f98(*(undefined8 *)(param_1 + 0x18),(long)iVar1);
  return;
}


/* CurveSequenceCollection<float>::Clear() */

void __thiscall CurveSequenceCollection<float>::Clear(CurveSequenceCollection<float> *this)

{
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)this);
  std::vector<CurveSequence<float>,std::allocator<CurveSequence<float>>>::clear
            ((vector<CurveSequence<float>,std::allocator<CurveSequence<float>>> *)(this + 0x18));
  return;
}


/* CurveSequenceCollection<float>::IsEmpty() const */

bool __thiscall CurveSequenceCollection<float>::IsEmpty(CurveSequenceCollection<float> *this)

{
  long lVar1;
  
  lVar1 = FUN_0470dd18(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  return lVar1 == 0;
}


/* CurveSequenceCollection<float>::Get(std::string const&) const */

void __thiscall
CurveSequenceCollection<float>::Get(CurveSequenceCollection<float> *this,string *param_1)

{
  int iVar1;
  
  iVar1 = getIdxFor(this,param_1);
  FUN_0470de4c(*(undefined8 *)(this + 0x18),(long)iVar1);
  return;
}


/* CurveSequenceCollection<float>::operator[](std::string const&) const */

void CurveSequenceCollection<float>::operator[](string *param_1)

{
  int iVar1;
  string *in_x1;
  
  iVar1 = getIdxFor((CurveSequenceCollection<float> *)param_1,in_x1);
  FUN_0470de4c(*(undefined8 *)(param_1 + 0x18),(long)iVar1);
  return;
}


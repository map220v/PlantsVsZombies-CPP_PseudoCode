// Class: PvZ1LevelCompleteInfo


/* PvZ1LevelCompleteInfo::PvZ1LevelCompleteInfo(PvZ1LevelCompleteInfo const&) */

void __thiscall
PvZ1LevelCompleteInfo::PvZ1LevelCompleteInfo
          (PvZ1LevelCompleteInfo *this,PvZ1LevelCompleteInfo *param_1)

{
  undefined4 uVar1;
  PvZ1LevelCompleteInfo PVar2;
  PvZ1LevelCompleteInfo PVar3;
  
  uVar1 = *(undefined4 *)param_1;
  PVar2 = param_1[4];
  PVar3 = param_1[5];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  this[4] = PVar2;
  this[5] = PVar3;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* PvZ1LevelCompleteInfo::PvZ1LevelCompleteInfo(PvZ1LevelCompleteInfo&&) */

void __thiscall
PvZ1LevelCompleteInfo::PvZ1LevelCompleteInfo
          (PvZ1LevelCompleteInfo *this,PvZ1LevelCompleteInfo *param_1)

{
  undefined4 uVar1;
  PvZ1LevelCompleteInfo PVar2;
  PvZ1LevelCompleteInfo PVar3;
  
  uVar1 = *(undefined4 *)param_1;
  PVar2 = param_1[4];
  PVar3 = param_1[5];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  this[4] = PVar2;
  this[5] = PVar3;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}


/* PvZ1LevelCompleteInfo::PvZ1LevelCompleteInfo() */

void __thiscall PvZ1LevelCompleteInfo::PvZ1LevelCompleteInfo(PvZ1LevelCompleteInfo *this)

{
  *(undefined4 *)this = 0xffffffff;
  this[4] = (PvZ1LevelCompleteInfo)0x0;
  this[5] = (PvZ1LevelCompleteInfo)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PvZ1LevelCompleteInfo::TEMPNAMEPLACEHOLDERVALUE(PvZ1LevelCompleteInfo const&) */

PvZ1LevelCompleteInfo * __thiscall
PvZ1LevelCompleteInfo::operator=(PvZ1LevelCompleteInfo *this,PvZ1LevelCompleteInfo *param_1)

{
  undefined4 uVar1;
  PvZ1LevelCompleteInfo PVar2;
  PvZ1LevelCompleteInfo PVar3;
  
  uVar1 = *(undefined4 *)param_1;
  PVar2 = param_1[4];
  PVar3 = param_1[5];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  this[4] = PVar2;
  this[5] = PVar3;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x10),(vector *)(param_1 + 0x10));
  return this;
}


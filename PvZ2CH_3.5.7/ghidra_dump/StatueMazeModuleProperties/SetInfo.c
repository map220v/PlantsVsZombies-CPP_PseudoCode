// Class: StatueMazeModuleProperties::SetInfo


/* StatueMazeModuleProperties::SetInfo::SetInfo() */

void __thiscall StatueMazeModuleProperties::SetInfo::SetInfo(SetInfo *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


/* StatueMazeModuleProperties::SetInfo::~SetInfo() */

void __thiscall StatueMazeModuleProperties::SetInfo::~SetInfo(SetInfo *this)

{
  std::
  vector<StatueMazeModuleProperties::MatrixInfo,std::allocator<StatueMazeModuleProperties::MatrixInfo>>
  ::~vector((vector<StatueMazeModuleProperties::MatrixInfo,std::allocator<StatueMazeModuleProperties::MatrixInfo>>
             *)(this + 0x10));
  return;
}


/* StatueMazeModuleProperties::SetInfo::SetInfo(StatueMazeModuleProperties::SetInfo const&) */

void __thiscall StatueMazeModuleProperties::SetInfo::SetInfo(SetInfo *this,SetInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar1;
  std::
  vector<StatueMazeModuleProperties::MatrixInfo,std::allocator<StatueMazeModuleProperties::MatrixInfo>>
  ::vector((vector<StatueMazeModuleProperties::MatrixInfo,std::allocator<StatueMazeModuleProperties::MatrixInfo>>
            *)(this + 0x10),(vector *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


/* StatueMazeModuleProperties::SetInfo::SetInfo(StatueMazeModuleProperties::SetInfo&&) */

void __thiscall StatueMazeModuleProperties::SetInfo::SetInfo(SetInfo *this,SetInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// Class: DangerRoomLevelData


/* DangerRoomLevelData::DangerRoomLevelData() */

void __thiscall DangerRoomLevelData::DangerRoomLevelData(DangerRoomLevelData *this)

{
  size_t in_x2;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  Set8BytesTo0((string *)(this + 0x28));
  *(undefined4 *)this = 0x1e;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  std::string::append((string *)(this + 0x28),"",in_x2);
  return;
}


/* DangerRoomLevelData::~DangerRoomLevelData() */

void __thiscall DangerRoomLevelData::~DangerRoomLevelData(DangerRoomLevelData *this)

{
  std::string::~string((string *)(this + 0x28));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 8));
  return;
}


/* DangerRoomLevelData::TEMPNAMEPLACEHOLDERVALUE(DangerRoomLevelData const&) */

DangerRoomLevelData * __thiscall
DangerRoomLevelData::operator=(DangerRoomLevelData *this,DangerRoomLevelData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  return this;
}


/* DangerRoomLevelData::DangerRoomLevelData(DangerRoomLevelData const&) */

void __thiscall
DangerRoomLevelData::DangerRoomLevelData(DangerRoomLevelData *this,DangerRoomLevelData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  return;
}


/* DangerRoomLevelData::DangerRoomLevelData(DangerRoomLevelData&&) */

void __thiscall
DangerRoomLevelData::DangerRoomLevelData(DangerRoomLevelData *this,DangerRoomLevelData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  return;
}


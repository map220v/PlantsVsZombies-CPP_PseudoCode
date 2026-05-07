// Class: DungeonInfo


/* DungeonInfo::~DungeonInfo() */

void __thiscall DungeonInfo::~DungeonInfo(DungeonInfo *this)

{
  std::vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>>::~vector
            ((vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  return;
}


/* DungeonInfo::DungeonInfo(DungeonInfo const&) */

void __thiscall DungeonInfo::DungeonInfo(DungeonInfo *this,DungeonInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  std::vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>>::vector
            ((vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return;
}


/* DungeonInfo::DungeonInfo() */

void __thiscall DungeonInfo::DungeonInfo(DungeonInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 8));
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)this = 0xffffffff;
  std::string::append((string *)(this + 8),"",in_x2);
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  return;
}


/* DungeonInfo::TEMPNAMEPLACEHOLDERVALUE(DungeonInfo const&) */

DungeonInfo * __thiscall DungeonInfo::operator=(DungeonInfo *this,DungeonInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  std::vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>>::operator=
            ((vector<WorldDungeonInfo,std::allocator<WorldDungeonInfo>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  return this;
}


/* DungeonInfo::DungeonInfo(DungeonInfo&&) */

void __thiscall DungeonInfo::DungeonInfo(DungeonInfo *this,DungeonInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  FUN_05474148(this + 0x18,param_1 + 0x18);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  return;
}


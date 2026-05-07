// Class: WorldDungeonInfo


/* WorldDungeonInfo::~WorldDungeonInfo() */

void __thiscall WorldDungeonInfo::~WorldDungeonInfo(WorldDungeonInfo *this)

{
  std::vector<AdventureBonusInfo,std::allocator<AdventureBonusInfo>>::~vector
            ((vector<AdventureBonusInfo,std::allocator<AdventureBonusInfo>> *)(this + 0x48));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  return;
}


/* WorldDungeonInfo::WorldDungeonInfo(WorldDungeonInfo const&) */

void __thiscall WorldDungeonInfo::WorldDungeonInfo(WorldDungeonInfo *this,WorldDungeonInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<AdventureBonusInfo,std::allocator<AdventureBonusInfo>>::vector
            ((vector<AdventureBonusInfo,std::allocator<AdventureBonusInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  return;
}


/* WorldDungeonInfo::WorldDungeonInfo() */

void __thiscall WorldDungeonInfo::WorldDungeonInfo(WorldDungeonInfo *this)

{
  size_t __n;
  
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  *(undefined4 *)this = 0;
  __n = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  std::string::append((string *)(this + 0x18),"",0xffffffff);
  std::string::append((string *)(this + 0x20),"",__n);
  std::string::append((string *)(this + 0x28),"",__n);
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* WorldDungeonInfo::TEMPNAMEPLACEHOLDERVALUE(WorldDungeonInfo const&) */

WorldDungeonInfo * __thiscall
WorldDungeonInfo::operator=(WorldDungeonInfo *this,WorldDungeonInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<AdventureBonusInfo,std::allocator<AdventureBonusInfo>>::operator=
            ((vector<AdventureBonusInfo,std::allocator<AdventureBonusInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  return this;
}


/* WorldDungeonInfo::WorldDungeonInfo(WorldDungeonInfo&&) */

void __thiscall WorldDungeonInfo::WorldDungeonInfo(WorldDungeonInfo *this,WorldDungeonInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  return;
}


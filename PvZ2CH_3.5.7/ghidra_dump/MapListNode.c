// Class: MapListNode


/* MapListNode::MapListNode(MapListNode const&) */

void __thiscall MapListNode::MapListNode(MapListNode *this,MapListNode *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  MapListNode MVar3;
  MapListNode MVar4;
  MapListNode MVar5;
  MapListNode MVar6;
  MapListNode MVar7;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  MVar3 = param_1[0x30];
  MVar4 = param_1[0x31];
  MVar5 = param_1[0x32];
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  this[0x30] = MVar3;
  this[0x31] = MVar4;
  this[0x32] = MVar5;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar2;
  Sexy::Point::Point((Point *)(this + 0x40),(TPoint *)(param_1 + 0x40));
  MVar3 = param_1[0x48];
  this[0x49] = param_1[0x49];
  this[0x48] = MVar3;
  WorldResourcesData::WorldResourcesData
            ((WorldResourcesData *)(this + 0x50),(WorldResourcesData *)(param_1 + 0x50));
  this[0xa8] = param_1[0xa8];
  this[0xa9] = param_1[0xa9];
  MVar3 = param_1[0xaa];
  MVar4 = param_1[0xab];
  MVar5 = param_1[0xac];
  MVar6 = param_1[0xad];
  MVar7 = param_1[0xae];
  this[0xaf] = param_1[0xaf];
  this[0xaa] = MVar3;
  this[0xab] = MVar4;
  this[0xac] = MVar5;
  this[0xad] = MVar6;
  this[0xae] = MVar7;
  return;
}


/* MapListNode::~MapListNode() */

void __thiscall MapListNode::~MapListNode(MapListNode *this)

{
  WorldResourcesData::~WorldResourcesData((WorldResourcesData *)(this + 0x50));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  std::string::~string((string *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* MapListNode::MapListNode() */

void __thiscall MapListNode::MapListNode(MapListNode *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  this[0x30] = (MapListNode)0x0;
  *(undefined4 *)(this + 0x34) = 1;
  this[0x31] = (MapListNode)0x1;
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0x32] = (MapListNode)0x0;
  Sexy::Point::Point((Point *)(this + 0x40),0,0);
  this[0x48] = (MapListNode)0x0;
  this[0x49] = (MapListNode)0x0;
  WorldResourcesData::WorldResourcesData((WorldResourcesData *)(this + 0x50));
  this[0xa8] = (MapListNode)0x0;
  this[0xa9] = (MapListNode)0x0;
  this[0xaa] = (MapListNode)0x0;
  this[0xab] = (MapListNode)0x0;
  this[0xac] = (MapListNode)0x0;
  this[0xad] = (MapListNode)0x0;
  this[0xae] = (MapListNode)0x0;
  this[0xaf] = (MapListNode)0x0;
  return;
}


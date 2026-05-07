// Class: DisplayActionInfo


/* DisplayActionInfo::DisplayActionInfo() */

void __thiscall DisplayActionInfo::DisplayActionInfo(DisplayActionInfo *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  this[0x40] = (DisplayActionInfo)0x0;
  this[0x41] = (DisplayActionInfo)0x0;
  std::string::append((string *)this,"",in_x2);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x4c] = (DisplayActionInfo)0x0;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x48) = 0xbf800000;
  return;
}


/* DisplayActionInfo::~DisplayActionInfo() */

void __thiscall DisplayActionInfo::~DisplayActionInfo(DisplayActionInfo *this)

{
  std::vector<DisplayZombieInfo,std::allocator<DisplayZombieInfo>>::~vector
            ((vector<DisplayZombieInfo,std::allocator<DisplayZombieInfo>> *)(this + 0x20));
  std::vector<DisplayPlantInfo,std::allocator<DisplayPlantInfo>>::~vector
            ((vector<DisplayPlantInfo,std::allocator<DisplayPlantInfo>> *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* DisplayActionInfo::DisplayActionInfo(DisplayActionInfo&&) */

void __thiscall
DisplayActionInfo::DisplayActionInfo(DisplayActionInfo *this,DisplayActionInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  DisplayActionInfo DVar5;
  DisplayActionInfo DVar6;
  DisplayActionInfo DVar7;
  
  FUN_05474148();
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  DVar5 = param_1[0x40];
  DVar6 = param_1[0x41];
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  DVar7 = param_1[0x4c];
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x3c) = uVar2;
  this[0x40] = DVar5;
  this[0x41] = DVar6;
  *(undefined4 *)(this + 0x44) = uVar4;
  this[0x4c] = DVar7;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar3;
  return;
}


/* DisplayActionInfo::DisplayActionInfo(DisplayActionInfo const&) */

void __thiscall
DisplayActionInfo::DisplayActionInfo(DisplayActionInfo *this,DisplayActionInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  DisplayActionInfo DVar5;
  DisplayActionInfo DVar6;
  DisplayActionInfo DVar7;
  
  FUN_05475d88();
  std::vector<DisplayPlantInfo,std::allocator<DisplayPlantInfo>>::vector
            ((vector<DisplayPlantInfo,std::allocator<DisplayPlantInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<DisplayZombieInfo,std::allocator<DisplayZombieInfo>>::vector
            ((vector<DisplayZombieInfo,std::allocator<DisplayZombieInfo>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  DVar5 = param_1[0x40];
  DVar6 = param_1[0x41];
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  DVar7 = param_1[0x4c];
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x3c) = uVar2;
  this[0x40] = DVar5;
  this[0x41] = DVar6;
  *(undefined4 *)(this + 0x44) = uVar4;
  this[0x4c] = DVar7;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar3;
  return;
}


/* DisplayActionInfo::TEMPNAMEPLACEHOLDERVALUE(DisplayActionInfo const&) */

DisplayActionInfo * __thiscall
DisplayActionInfo::operator=(DisplayActionInfo *this,DisplayActionInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  DisplayActionInfo DVar5;
  DisplayActionInfo DVar6;
  DisplayActionInfo DVar7;
  
  thunk_FUN_05475e00();
  std::vector<DisplayPlantInfo,std::allocator<DisplayPlantInfo>>::operator=
            ((vector<DisplayPlantInfo,std::allocator<DisplayPlantInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  std::vector<DisplayZombieInfo,std::allocator<DisplayZombieInfo>>::operator=
            ((vector<DisplayZombieInfo,std::allocator<DisplayZombieInfo>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  DVar5 = param_1[0x40];
  DVar6 = param_1[0x41];
  uVar4 = *(undefined4 *)(param_1 + 0x44);
  DVar7 = param_1[0x4c];
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x3c) = uVar2;
  this[0x40] = DVar5;
  this[0x41] = DVar6;
  *(undefined4 *)(this + 0x44) = uVar4;
  this[0x4c] = DVar7;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar3;
  return this;
}


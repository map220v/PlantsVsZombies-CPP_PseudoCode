// Class: WaveWindInfo


/* WaveWindInfo::WaveWindInfo() */

void __thiscall WaveWindInfo::WaveWindInfo(WaveWindInfo *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* WaveWindInfo::~WaveWindInfo() */

void __thiscall WaveWindInfo::~WaveWindInfo(WaveWindInfo *this)

{
  std::vector<WindInfo,std::allocator<WindInfo>>::~vector
            ((vector<WindInfo,std::allocator<WindInfo>> *)(this + 8));
  return;
}


/* WaveWindInfo::WaveWindInfo(WaveWindInfo const&) */

void __thiscall WaveWindInfo::WaveWindInfo(WaveWindInfo *this,WaveWindInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<WindInfo,std::allocator<WindInfo>>::vector
            ((vector<WindInfo,std::allocator<WindInfo>> *)(this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


/* WaveWindInfo::WaveWindInfo(WaveWindInfo&&) */

void __thiscall WaveWindInfo::WaveWindInfo(WaveWindInfo *this,WaveWindInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return;
}


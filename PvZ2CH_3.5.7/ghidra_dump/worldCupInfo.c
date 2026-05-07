// Class: worldCupInfo


/* worldCupInfo::worldCupInfo(worldCupInfo const&) */

void __thiscall worldCupInfo::worldCupInfo(worldCupInfo *this,worldCupInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 8),(vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* worldCupInfo::worldCupInfo(worldCupInfo&&) */

void __thiscall worldCupInfo::worldCupInfo(worldCupInfo *this,worldCupInfo *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


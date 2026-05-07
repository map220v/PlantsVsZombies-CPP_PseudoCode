// Class: DangerRoomLevelDesignerHelpers::FlagWavePool


/* DangerRoomLevelDesignerHelpers::FlagWavePool::FlagWavePool(int) */

void __thiscall
DangerRoomLevelDesignerHelpers::FlagWavePool::FlagWavePool(FlagWavePool *this,int param_1)

{
  *(int *)this = param_1;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 8));
  return;
}


/* DangerRoomLevelDesignerHelpers::FlagWavePool::~FlagWavePool() */

void __thiscall DangerRoomLevelDesignerHelpers::FlagWavePool::~FlagWavePool(FlagWavePool *this)

{
  BundleItem::~BundleItem((BundleItem *)(this + 8));
  return;
}


/* DangerRoomLevelDesignerHelpers::FlagWavePool::FlagWavePool(DangerRoomLevelDesignerHelpers::FlagWavePool&&)
    */

void __thiscall
DangerRoomLevelDesignerHelpers::FlagWavePool::FlagWavePool(FlagWavePool *this,FlagWavePool *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 8),(PIInterpolator *)(param_1 + 8))
  ;
  return;
}


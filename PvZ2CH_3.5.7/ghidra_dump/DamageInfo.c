// Class: DamageInfo


/* DamageInfo::DamageInfo(float, BoardEntity*, Sexy::Point, bool, ResilienceDamageInfo) */

void __thiscall
DamageInfo::DamageInfo
          (undefined4 param_1,undefined4 param_2_00,undefined4 param_3,DamageInfo *this,
          undefined8 param_2,TPoint *param_6,DamageInfo param_7)

{
  *(undefined8 *)this = param_2;
  *(undefined8 *)(this + 0x10) = 1;
  *(undefined4 *)(this + 8) = param_1;
  Sexy::Point::Point((Point *)(this + 0x18),param_6);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x58] = param_7;
  *(ulong *)(this + 0x50) = CONCAT44(param_3,param_2_00);
  return;
}


/* DamageInfo::DamageInfo(float, DamageTypeFlags, BoardEntity*, Sexy::Point, bool,
   ResilienceDamageInfo) */

void __thiscall
DamageInfo::DamageInfo
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,DamageInfo *this,
          undefined8 param_5,undefined8 param_6,TPoint *param_7,DamageInfo param_8)

{
  *(undefined8 *)this = param_6;
  *(undefined8 *)(this + 0x10) = param_5;
  *(undefined4 *)(this + 8) = param_1;
  Sexy::Point::Point((Point *)(this + 0x18),param_7);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x58] = param_8;
  *(ulong *)(this + 0x50) = CONCAT44(param_3,param_2);
  return;
}


/* DamageInfo::~DamageInfo() */

void __thiscall DamageInfo::~DamageInfo(DamageInfo *this)

{
  std::
  vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>::
  ~vector((vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>
           *)(this + 0x38));
  std::
  vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
  ::~vector((vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
             *)(this + 0x20));
  return;
}


/* DamageInfo::DamageInfo(DamageInfo const&) */

void __thiscall DamageInfo::DamageInfo(DamageInfo *this,DamageInfo *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = uVar2;
  *(undefined4 *)(this + 8) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x18),(TPoint *)(param_1 + 0x18));
  std::
  vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
  ::vector((vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
            *)(this + 0x20),(vector *)(param_1 + 0x20));
  std::
  vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>::
  vector((vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>
          *)(this + 0x38),(vector *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  this[0x58] = param_1[0x58];
  *(undefined8 *)(this + 0x50) = uVar2;
  return;
}


/* DamageInfo::DamageInfo() */

void __thiscall DamageInfo::DamageInfo(DamageInfo *this)

{
  *(undefined8 *)(this + 0x10) = 1;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  Sexy::Point::Point((Point *)(this + 0x18),-1,-1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x50),1.0,0.0);
  this[0x58] = (DamageInfo)0x0;
  return;
}


/* DamageInfo::DamageInfo(float, Sexy::Point, bool, ResilienceDamageInfo) */

void __thiscall
DamageInfo::DamageInfo
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,DamageInfo *this,TPoint *param_5
          ,DamageInfo param_6)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 1;
  *(undefined4 *)(this + 8) = param_1;
  Sexy::Point::Point((Point *)(this + 0x18),param_5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x58] = param_6;
  *(ulong *)(this + 0x50) = CONCAT44(param_3,param_2);
  return;
}


/* DamageInfo::DamageInfo(float, DamageTypeFlags, Sexy::Point, bool, ResilienceDamageInfo) */

void __thiscall
DamageInfo::DamageInfo
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,DamageInfo *this,
          undefined8 param_5,TPoint *param_6,DamageInfo param_7)

{
  *(undefined8 *)(this + 0x10) = param_5;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = param_1;
  Sexy::Point::Point((Point *)(this + 0x18),param_6);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  this[0x58] = param_7;
  *(ulong *)(this + 0x50) = CONCAT44(param_3,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DamageInfo::AddCondition(ZombieConditions, float) */

void __thiscall DamageInfo::AddCondition(float param_1,DamageInfo *this,undefined4 param_3)

{
  float local_54;
  SpanSet aSStack_50 [24];
  undefined4 local_38;
  pair<ZombieConditionInfo,float> apStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_54 = param_1;
  TriRepGenerator::SpanSet::SpanSet(aSStack_50);
  local_38 = param_3;
  std::pair<ZombieConditionInfo,float>::pair<ZombieConditionInfo&,float&,void>
            (apStack_30,(ZombieConditionInfo *)aSStack_50,&local_54);
  std::
  vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
  ::push_back((vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
               *)(this + 0x20),(pair *)apStack_30);
  std::_Destroy<PlantWarsNodeData>((PlantWarsNodeData *)apStack_30);
  PlantWarsNodeData::~PlantWarsNodeData((PlantWarsNodeData *)aSStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DamageInfo::DamageInfo(DamageInfo&&) */

void __thiscall DamageInfo::DamageInfo(DamageInfo *this,DamageInfo *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = uVar2;
  *(undefined4 *)(this + 8) = uVar1;
  Sexy::Point::Point((Point *)(this + 0x18),(TPoint *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x38),(vector *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  this[0x58] = param_1[0x58];
  *(undefined8 *)(this + 0x50) = uVar2;
  return;
}


/* DamageInfo::TEMPNAMEPLACEHOLDERVALUE(DamageInfo const&) */

DamageInfo * __thiscall DamageInfo::operator=(DamageInfo *this,DamageInfo *param_1)

{
  undefined4 uVar1;
  DamageInfo DVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  std::
  vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
  ::operator=((vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
               *)(this + 0x20),(vector *)(param_1 + 0x20));
  std::
  vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>::
  operator=((vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>
             *)(this + 0x38),(vector *)(param_1 + 0x38));
  DVar2 = param_1[0x58];
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  this[0x58] = DVar2;
  return this;
}


/* DamageInfo::TEMPNAMEPLACEHOLDERVALUE(DamageInfo&&) */

DamageInfo * __thiscall DamageInfo::operator=(DamageInfo *this,DamageInfo *param_1)

{
  undefined4 uVar1;
  DamageInfo DVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  std::
  vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
  ::operator=((vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
               *)(this + 0x20),(vector *)(param_1 + 0x20));
  std::
  vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>::
  operator=((vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>
             *)(this + 0x38),(vector *)(param_1 + 0x38));
  DVar2 = param_1[0x58];
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  this[0x58] = DVar2;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DamageInfo::ObtainZombieCondition(ZombieConditions) const */

void __thiscall DamageInfo::ObtainZombieCondition(DamageInfo *this,int param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_03c52608(*(undefined8 *)(this + 0x20));
  local_10 = FUN_03c52658(*(undefined8 *)(this + 0x28));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((!bVar1) ||
       (lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
       *(int *)(lVar2 + 0x18) == param_2)) break;
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* DamageInfo::GetFrostAmount() const */

undefined4 __thiscall DamageInfo::GetFrostAmount(DamageInfo *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x10);
  bVar1 = TestFlag<DamageTypeFlags>(uVar3,0x3f8000000);
  uVar2 = 0;
  if (bVar1) {
    bVar1 = TestFlag<DamageTypeFlags>(uVar3,0x80000000);
    if (bVar1) {
      uVar2 = 0xfffffff6;
    }
    else {
      bVar1 = TestFlag<DamageTypeFlags>(uVar3,0x100000000);
      if (bVar1) {
        uVar2 = 0xffffffe7;
      }
      else {
        bVar1 = TestFlag<DamageTypeFlags>(uVar3,0x200000000);
        if (bVar1) {
          uVar2 = 0xffffff9c;
        }
        else {
          bVar1 = TestFlag<DamageTypeFlags>(uVar3,0x8000000);
          uVar2 = 10;
          if (!bVar1) {
            bVar1 = TestFlag<DamageTypeFlags>(uVar3,0x10000000);
            uVar2 = 0x19;
            if (!bVar1) {
              bVar1 = TestFlag<DamageTypeFlags>(uVar3,0x20000000);
              uVar2 = 100;
              if (!bVar1) {
                bVar1 = TestFlag<DamageTypeFlags>(uVar3,0x40000000);
                uVar2 = 0;
                if (bVar1) {
                  uVar2 = 0x15e;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DamageInfo::RemoveGridItemCondition(GridItemConditions) */

void __thiscall DamageInfo::RemoveGridItemCondition(DamageInfo *this,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar2 == param_2) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::
    vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>
    ::erase((vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>
             *)this_00,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DamageInfo::AddCondition(GridItemConditions, float) */

void __thiscall DamageInfo::AddCondition(wchar_t param_1,DamageInfo *this,wchar_t param_3)

{
  wchar_t local_18;
  wchar_t local_14;
  pair<wchar_t_const,wchar_t> apStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  local_14 = param_3;
  RemoveGridItemCondition();
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_10,&local_14,&local_18);
  std::
  vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>::
  push_back((vector<std::pair<GridItemConditions,float>,std::allocator<std::pair<GridItemConditions,float>>>
             *)(this + 0x38),(pair *)apStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DamageInfo::AddCondition(ZombieConditionInfo, float) */

void __thiscall
DamageInfo::AddCondition(float param_1,DamageInfo *this,ZombieConditionInfo *param_3)

{
  float local_34;
  pair<ZombieConditionInfo,float> apStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34 = param_1;
  std::pair<ZombieConditionInfo,float>::pair<ZombieConditionInfo&,float&,void>
            (apStack_30,param_3,&local_34);
  std::
  vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
  ::push_back((vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
               *)(this + 0x20),(pair *)apStack_30);
  std::_Destroy<PlantWarsNodeData>((PlantWarsNodeData *)apStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DamageInfo::RemoveZombieCondition(ZombieConditions) */

void __thiscall DamageInfo::RemoveZombieCondition(DamageInfo *this,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*(int *)(lVar2 + 0x18) == param_2) break;
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::
    vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
    ::erase((vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
             *)this_00,local_10);
  } while( true );
}


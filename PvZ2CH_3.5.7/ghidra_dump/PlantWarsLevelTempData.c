// Class: PlantWarsLevelTempData


/* PlantWarsLevelTempData::GetNodePlantPacket(int, int) */

void PlantWarsLevelTempData::GetNodePlantPacket(int param_1,int param_2)

{
  undefined8 *puVar1;
  int in_w2;
  
  puVar1 = (undefined8 *)FUN_04d8c3b8(*(undefined8 *)(ulong)(uint)param_1,(long)param_2);
  FUN_04d8c3c4(*puVar1,(long)in_w2);
  FUN_05475d88();
  return;
}


/* PlantWarsLevelTempData::SetLevelTime(int, float) */

void __thiscall
PlantWarsLevelTempData::SetLevelTime(PlantWarsLevelTempData *this,int param_1,float param_2)

{
  long lVar1;
  
  lVar1 = FUN_04d8c3b8(*(undefined8 *)this,(long)param_1);
  *(float *)(lVar1 + 0x20) = param_2;
  return;
}


/* PlantWarsLevelTempData::GetLevelTime(int) */

undefined4 __thiscall PlantWarsLevelTempData::GetLevelTime(PlantWarsLevelTempData *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_04d8c3b8(*(undefined8 *)this,(long)param_1);
  return *(undefined4 *)(lVar1 + 0x20);
}


/* PlantWarsLevelTempData::ClearNode(int) */

void __thiscall PlantWarsLevelTempData::ClearNode(PlantWarsLevelTempData *this,int param_1)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)
            FUN_04d8c3b8(*(undefined8 *)this,(long)param_1);
  std::vector<std::string,std::allocator<std::string>>::clear(this_00);
  return;
}


/* PlantWarsLevelTempData::GetNodePlantPackets(int) */

void PlantWarsLevelTempData::GetNodePlantPackets(int param_1)

{
  vector *pvVar1;
  int in_w1;
  vector<std::string,std::allocator<std::string>> *in_x8;
  
  pvVar1 = (vector *)FUN_04d8c3b8(*(undefined8 *)(ulong)(uint)param_1,(long)in_w1);
  std::vector<std::string,std::allocator<std::string>>::vector(in_x8,pvVar1);
  return;
}


/* PlantWarsLevelTempData::~PlantWarsLevelTempData() */

void __thiscall PlantWarsLevelTempData::~PlantWarsLevelTempData(PlantWarsLevelTempData *this)

{
  std::_Destroy<PlantWarsNodeData*>(*(PlantWarsNodeData **)this,*(PlantWarsNodeData **)(this + 8));
  std::_Vector_base<PlantWarsNodeData,std::allocator<PlantWarsNodeData>>::~_Vector_base
            ((_Vector_base<PlantWarsNodeData,std::allocator<PlantWarsNodeData>> *)this);
  return;
}


/* PlantWarsLevelTempData::Assign(int, std::vector<std::string, std::allocator<std::string > >) */

void __thiscall
PlantWarsLevelTempData::Assign
          (PlantWarsLevelTempData *this,int param_1,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  vector<std::string,std::allocator<std::string>> *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pvVar1 = (vector<std::string,std::allocator<std::string>> *)
           FUN_04d8c3b8(*(undefined8 *)this,(long)param_1);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_3);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_3);
  std::vector<std::string,std::allocator<std::string>>::
  assign<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,void>
            (pvVar1,uVar2,uVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelTempData::DeleteNode(int, std::string) */

void __thiscall
PlantWarsLevelTempData::DeleteNode(PlantWarsLevelTempData *this,int param_1,undefined8 param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar2;
  undefined8 uVar3;
  long lVar4;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_38 [8];
  TGABagData aTStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  lVar4 = (long)param_1;
  local_8 = ___stack_chk_guard;
  FUN_05475d88(apStack_38,param_3);
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)FUN_04d8c3b8(*(undefined8 *)this,lVar4);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  pvVar2 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)FUN_04d8c3b8(*(undefined8 *)this,lVar4);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(pvVar2);
  TGABagData::TGABagData(aTStack_30,(TGABagData *)apStack_38);
  local_28 = FUN_04d92458(uVar1,uVar3,aTStack_30);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_28);
  pvVar2 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)FUN_04d8c3b8(*(undefined8 *)this,lVar4);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(pvVar2);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_20);
  std::vector<std::string,std::allocator<std::string>>::erase
            ((vector<std::string,std::allocator<std::string>> *)this_00,local_18,local_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04d968dc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantWarsLevelTempData::PlantWarsLevelTempData(PlantWarsLevelTempData const&) */

void __thiscall
PlantWarsLevelTempData::PlantWarsLevelTempData
          (PlantWarsLevelTempData *this,PlantWarsLevelTempData *param_1)

{
  long lVar1;
  allocator *paVar2;
  allocator *extraout_x0;
  undefined8 uVar3;
  PlantWarsNodeData *pPVar4;
  
  lVar1 = ___stack_chk_guard;
  paVar2 = (allocator *)FUN_04d8c6b0(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
  nop();
  __gnu_cxx::__alloc_traits<std::allocator<Sexy::PIForce>>::_S_select_on_copy(extraout_x0);
  std::_Vector_base<PlantWarsNodeData,std::allocator<PlantWarsNodeData>>::_Vector_base
            ((ulong)this,paVar2);
  FUN_04d93048(*(undefined8 *)param_1);
  uVar3 = FUN_04d93098(*(undefined8 *)(param_1 + 8));
  pPVar4 = std::
           uninitialized_copy<__gnu_cxx::__normal_iterator<PlantWarsNodeData_const*,std::vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>>>,PlantWarsNodeData*>
                     (uVar3,uVar3,*(undefined8 *)this);
  *(PlantWarsNodeData **)(this + 8) = pPVar4;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsLevelTempData::AddNode(int, std::string) */

void __thiscall
PlantWarsLevelTempData::AddNode(PlantWarsLevelTempData *this,int param_1,string *param_3)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)
            FUN_04d8c3b8(*(undefined8 *)this,(long)param_1);
  std::vector<std::string,std::allocator<std::string>>::push_back(this_00,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsLevelTempData::FillData() */

void __thiscall PlantWarsLevelTempData::FillData(PlantWarsLevelTempData *this)

{
  PlantWarsNodeData aPStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantWarsNodeData::PlantWarsNodeData(aPStack_30);
  std::vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>>::push_back
            ((vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>> *)this,aPStack_30);
  std::vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>>::push_back
            ((vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>> *)this,aPStack_30);
  PlantWarsNodeData::~PlantWarsNodeData(aPStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsLevelTempData::PlantWarsLevelTempData() */

void __thiscall PlantWarsLevelTempData::PlantWarsLevelTempData(PlantWarsLevelTempData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>>::clear
            ((vector<PlantWarsNodeData,std::allocator<PlantWarsNodeData>> *)this);
  FillData(this);
  return;
}


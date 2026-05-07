// Class: ManholePipeline


/* ManholePipeline::CanPlantFlatMushroom(PlantFlattenedshroom*) */

undefined8 __thiscall
ManholePipeline::CanPlantFlatMushroom(ManholePipeline *this,PlantFlattenedshroom *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (PlantFlattenedshroom *)0x0) {
    iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x18));
    iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_1 + 0x10));
    if (iVar1 == iVar2) {
      iVar1 = SharkMinion::getRow(*(SharkMinion **)(this + 0x18));
      iVar2 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
      if (iVar1 == iVar2) {
        return 1;
      }
    }
    iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x20));
    iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_1 + 0x10));
    if (iVar1 == iVar2) {
      iVar1 = SharkMinion::getRow(*(SharkMinion **)(this + 0x20));
      iVar2 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
      if (iVar1 == iVar2) {
        return 1;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipeline::InitPipleline(int, int, int, int, float, float, float) */

void __thiscall
ManholePipeline::InitPipleline
          (ManholePipeline *this,int param_1,int param_2,int param_3,int param_4,float param_5,
          float param_6,float param_7)

{
  uint uVar1;
  undefined8 extraout_x0;
  undefined8 extraout_x0_00;
  Board *pBVar2;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = param_3 - param_1 >> 0x1f;
  *(float *)(this + 0x14) = param_6;
  *(float *)(this + 0x10) = param_7;
  local_8 = ___stack_chk_guard;
  *(float *)(this + 0xc) = (float)(int)((param_3 - param_1 ^ uVar1) - uVar1) * param_5;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"PipelineStart");
  Board::AddGridItem(pBVar2,asStack_10,param_1,param_2,1);
  nop();
  *(undefined8 *)(this + 0x18) = extraout_x0;
  std::string::~string(asStack_10);
  nop();
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"PipelineEnd");
  Board::AddGridItem(pBVar2,asStack_10,param_3,param_4,1);
  nop();
  *(undefined8 *)(this + 0x20) = extraout_x0_00;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ManholePipeline::SetupPipelineImage() */

void __thiscall ManholePipeline::SetupPipelineImage(ManholePipeline *this)

{
  if (*(GridItemManholePipeline **)(this + 0x18) != (GridItemManholePipeline *)0x0) {
    GridItemManholePipeline::SetupPipelineImage(*(GridItemManholePipeline **)(this + 0x18));
  }
  if (*(GridItemManholePipeline **)(this + 0x20) != (GridItemManholePipeline *)0x0) {
    GridItemManholePipeline::SetupPipelineImage(*(GridItemManholePipeline **)(this + 0x20));
    return;
  }
  return;
}


/* ManholePipeline::ManholePipeline() */

void __thiscall ManholePipeline::ManholePipeline(ManholePipeline *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ManholePipeline_066bdf50;
  *(undefined4 *)(this + 0xc) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ManholePipeline::~ManholePipeline() */

void __thiscall ManholePipeline::~ManholePipeline(ManholePipeline *this)

{
  *(undefined ***)this = &PTR__ManholePipeline_066bdf50;
  std::vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>>::~vector
            ((vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28));
  return;
}


/* ManholePipeline::~ManholePipeline() */

void __thiscall ManholePipeline::~ManholePipeline(ManholePipeline *this)

{
  ~ManholePipeline(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipeline::RemoveZombieToPipleline(Sexy::RtWeakPtr<Zombie>) */

void ManholePipeline::RemoveZombieToPipleline(long param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Zombie *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(param_1 + 0x28);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_038eafa0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar1);
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar2 = Zombie::getZombieStateSerialization(this_01);
    if (iVar2 != 0x14) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this,
                 local_10);
      goto LAB_038eafa0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipeline::onZombieDie(Zombie*) */

void __thiscall ManholePipeline::onZombieDie(ManholePipeline *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_038eb06c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    if (param_1 == (Zombie *)pRVar2) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00,
                 local_10);
      goto LAB_038eb06c;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipeline::UnBlockPipeline(PlantFlattenedshroom*) */

void __thiscall
ManholePipeline::UnBlockPipeline(ManholePipeline *this,PlantFlattenedshroom *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PlantFlattenedshroom *)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x40);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      if (param_1 == (PlantFlattenedshroom *)*puVar3) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>>::erase
                  ((vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>> *)this_00,
                   local_10);
        cVar2 = std::vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>>::empty
                          ((vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>> *)
                           this_00);
        goto joined_r0x038eb1c4;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    cVar2 = std::vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>>::empty
                      ((vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>> *)
                       this_00);
joined_r0x038eb1c4:
    if (cVar2 != '\0') {
      lVar4 = FUN_038e9e7c(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
      if (lVar4 == 0) {
        *(undefined4 *)(this + 8) = 0;
      }
      else {
        *(undefined4 *)(this + 8) = 1;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipeline::AddZombieToPipleline(Sexy::RtWeakPtr<Zombie>) */

void __thiscall ManholePipeline::AddZombieToPipleline(ManholePipeline *this,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Zombie *pZVar4;
  undefined8 *puVar5;
  SexyVector3 *pSVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    pZVar4 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar2 = Zombie::CanBeLaunchedByPlants(pZVar4);
    if (cVar2 != '\0') {
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      iVar3 = Zombie::GetSizeType(pZVar4);
      if (iVar3 == 0) {
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x28),param_2);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x40));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x40));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar1) {
          puVar5 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          PlantFlattenedshroom::GetBlockTime((PlantFlattenedshroom *)*puVar5);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        pSVar6 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 **)(this + 0x20));
        Zombie::StuckIntoGround
                  (pZVar4,pSVar6,*(float *)(this + 0x14),*(float *)(this + 0xc),65.0,
                   *(float *)(this + 0x10),false);
        MessageRouter::Post((_func_void *)gMessageRouter);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipeline::onUpdate(float) */

void __thiscall ManholePipeline::onUpdate(ManholePipeline *this,float param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  RtWeakPtrBase *pRVar11;
  ulong uVar12;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x18) != 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    uVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x18));
    uVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x18));
    EntityFinder::GetEntitiesAtGridSquare(avStack_80,2,uVar4,uVar5);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_98,(__normal_iterator *)&local_90), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
      nop();
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x18));
      if ((*pfVar6 - *pfVar7 < 0.5) && (-0.5 < *pfVar6 - *pfVar7)) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_68,(RtWeakPtrBase *)&local_88);
        AddZombieToPipleline(this,(RtWeakPtr<Sexy::SoundResource> *)local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
    }
    iVar1 = *(int *)(this + 8);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        lVar8 = FUN_038e9e7c(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
        if (lVar8 != 0) {
          local_88 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x28));
          while( true ) {
            local_68[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)(this + 0x28));
            bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_88,(__normal_iterator *)local_68);
            if (!bVar2) break;
            pRVar11 = (RtWeakPtrBase *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)local_68,pRVar11);
            cVar3 = RemoveZombieToPipleline(this,(RtWeakPtr<Sexy::SoundResource> *)local_68);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
            if (cVar3 != '\0') break;
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
          }
        }
      }
      else if (iVar1 == 2) {
        uVar12 = 0;
        lVar8 = FUN_038e9e7c(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
        if (lVar8 != 0) {
          for (; uVar10 = FUN_038e9e88(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48)),
              uVar12 < uVar10; uVar12 = uVar12 + 1) {
            Sexy::Point::Point((Point *)&local_90,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)param_1,(undefined4)local_88,local_88._4_4_,
                       (DamageInfo *)local_68,(Point *)&local_90,0);
            plVar9 = (long *)FUN_038e9e94(*(undefined8 *)(this + 0x40),uVar12);
            plVar9 = *(long **)(*plVar9 + 0x10);
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x110))(plVar9,(DamageInfo *)local_68);
            }
            DamageInfo::~DamageInfo((DamageInfo *)local_68);
          }
        }
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ManholePipeline::BlockPipeline(PlantFlattenedshroom*) */

void __thiscall ManholePipeline::BlockPipeline(ManholePipeline *this,PlantFlattenedshroom *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  Zombie *pZVar5;
  float fVar6;
  PlantFlattenedshroom *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  if (param_1 != (PlantFlattenedshroom *)0x0) {
    iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x18));
    iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(local_28[0] + 0x10));
    if (iVar2 == iVar3) {
      iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x18));
      iVar3 = SharkMinion::getRow(*(SharkMinion **)(local_28[0] + 0x10));
      if (iVar2 == iVar3) {
        *(undefined4 *)(this + 8) = 2;
        std::vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>>::push_back
                  ((vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>> *)
                   (this + 0x40),local_28);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x28));
        while( true ) {
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x28));
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
          if (!bVar1) break;
          pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
          fVar6 = (float)PlantFlattenedshroom::GetBlockTime(local_28[0]);
          Zombie::AddStuckTime(pZVar5,fVar6);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
        goto LAB_038eb8a8;
      }
    }
    iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x20));
    iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(local_28[0] + 0x10));
    if (iVar2 == iVar3) {
      iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x20));
      iVar3 = SharkMinion::getRow(*(SharkMinion **)(local_28[0] + 0x10));
      if (iVar2 == iVar3) {
        *(undefined4 *)(this + 8) = 2;
        std::vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>>::push_back
                  ((vector<PlantFlattenedshroom*,std::allocator<PlantFlattenedshroom*>> *)
                   (this + 0x40),local_28);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x28));
        while( true ) {
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x28));
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
          if (!bVar1) break;
          pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
          pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
          fVar6 = (float)PlantFlattenedshroom::GetBlockTime(local_28[0]);
          Zombie::AddStuckTime(pZVar5,fVar6);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
      }
    }
  }
LAB_038eb8a8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


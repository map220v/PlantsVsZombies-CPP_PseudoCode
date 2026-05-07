// Class: InfluenceAuraManager


/* InfluenceAuraManager::~InfluenceAuraManager() */

void __thiscall InfluenceAuraManager::~InfluenceAuraManager(InfluenceAuraManager *this)

{
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>*>(*(RtWeakPtr **)this,*(RtWeakPtr **)(this + 8));
  std::_Vector_base<Sexy::RtWeakPtr<InfluenceAura>,std::allocator<Sexy::RtWeakPtr<InfluenceAura>>>::
  ~_Vector_base((_Vector_base<Sexy::RtWeakPtr<InfluenceAura>,std::allocator<Sexy::RtWeakPtr<InfluenceAura>>>
                 *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfluenceAuraManager::UnRegisterAura(Sexy::RtWeakPtr<InfluenceAura>) */

void __thiscall
InfluenceAuraManager::UnRegisterAura(InfluenceAuraManager *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  RtWeakPtrBase *this_00;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
LAB_0360acfc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = Sexy::RtWeakPtrBase::operator==(this_00,param_2);
    if (cVar1 != '\0') {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<InfluenceAura>,std::allocator<Sexy::RtWeakPtr<InfluenceAura>>>::
      erase((vector<Sexy::RtWeakPtr<InfluenceAura>,std::allocator<Sexy::RtWeakPtr<InfluenceAura>>> *
            )this,local_10);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_2);
      if (cVar1 != '\0') {
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        (**(code **)(*plVar3 + 0x48))();
      }
      Sexy::RtWeakPtrBase::ClearId(param_2);
      goto LAB_0360acfc;
    }
    FUN_0360a73c((exception_ptr *)&local_18);
  } while( true );
}


/* InfluenceAuraManager::AddAura(Sexy::RtWeakPtr<InfluenceAura>) */

void InfluenceAuraManager::AddAura
               (vector<Sexy::RtWeakPtr<InfluenceAura>,std::allocator<Sexy::RtWeakPtr<InfluenceAura>>>
                *param_1,RtWeakPtr *param_2)

{
  if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
    FUN_0360a404(*(long *)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    return;
  }
  std::vector<Sexy::RtWeakPtr<InfluenceAura>,std::allocator<Sexy::RtWeakPtr<InfluenceAura>>>::
  _M_emplace_back_aux<Sexy::RtWeakPtr<InfluenceAura>const&>(param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InfluenceAuraManager::RegisterAura(Sexy::RtWeakPtr<InfluenceAura>) */

void InfluenceAuraManager::RegisterAura
               (RtWeakPtr<Sexy::SoundResource> *param_1,undefined8 *param_2,RtWeakPtr *param_3)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  RtWeakPtrBase *pRVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_3);
  if (bVar1) {
    uVar9 = 0;
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    cVar2 = (**(code **)(*plVar3 + 0x80))();
    if (cVar2 != '\0') {
      while( true ) {
        uVar10 = *param_2;
        uVar7 = FUN_036090c4(uVar10,param_2[1]);
        if (uVar7 <= uVar9) break;
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036090d0(uVar10,uVar9);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
        lVar5 = InfluenceAura::StaticGetClass();
        lVar6 = InfluenceAura::StaticGetClass();
        if (lVar5 == lVar6) {
          pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_036090d0(*param_2,uVar9);
          plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
          pcVar11 = *(code **)(*plVar3 + 0x88);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
          (*pcVar11)(plVar3,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_3);
          if (cVar2 != '\0') {
            plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
            (**(code **)(*plVar3 + 0x48))();
          }
          Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)param_3);
          pRVar8 = (RtWeakPtrBase *)FUN_036090d0(*param_2,uVar9);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,pRVar8);
          goto LAB_0360b0ac;
        }
        uVar9 = uVar9 + 1;
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
    AddAura(param_2,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)param_3);
LAB_0360b0ac:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,
   std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura> > >
   InfluenceAuraManager::GetTypeAuraList<DoubledSummonZombieAura>() */

void InfluenceAuraManager::GetTypeAuraList<DoubledSummonZombieAura>(void)

{
  undefined8 *in_x0;
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  RtObject *this_00;
  DoubledSummonZombieAura *pDVar2;
  ulong uVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar5 = *in_x0;
  lVar1 = FUN_0360be6c(uVar5,in_x0[1]);
  if (lVar1 != 0) {
    do {
      this = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0360be78(uVar5,uVar4);
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      pDVar2 = Sexy::RtObject::Cast<DoubledSummonZombieAura>(this_00);
      if (pDVar2 != (DoubledSummonZombieAura *)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        std::
        vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
        ::push_back((vector<Sexy::RtWeakPtr<DoubledSummonZombieAura>,std::allocator<Sexy::RtWeakPtr<DoubledSummonZombieAura>>>
                     *)in_x8,(RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
      uVar5 = *in_x0;
      uVar4 = uVar4 + 1;
      uVar3 = FUN_0360be6c(uVar5,in_x0[1]);
    } while (uVar4 < uVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: PlantUtils


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUtils::GetBestDamageableGridItemFromEntities(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >) */

void __thiscall
PlantUtils::GetBestDamageableGridItemFromEntities
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,PlantUtils *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *extraout_x0;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  uVar7 = *(undefined8 *)this;
  lVar4 = FUN_03fdc158(uVar7,*(undefined8 *)(this + 8));
  if (lVar4 != 0) {
    do {
      FUN_03fdc164(uVar7,uVar6);
      nop();
      cVar1 = (**(code **)(*extraout_x0 + 0x200))();
      if (cVar1 != '\0') {
        iVar3 = FUN_03fdc14c((int)extraout_x0[0x26]);
        if (iVar3 < iVar2) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,(RtWeakPtrBase *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          iVar2 = iVar3;
        }
      }
      uVar6 = uVar6 + 1;
      uVar7 = *(undefined8 *)this;
      uVar5 = FUN_03fdc158(uVar7,*(undefined8 *)(this + 8));
    } while (uVar6 < uVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUtils::GetBestZombieFromEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*> >,
   PlantTargetParams&) */

void __thiscall
PlantUtils::GetBestZombieFromEntities
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,PlantUtils *this,
          int *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  local_28 = FUN_03fddea8(*(undefined8 *)this);
  local_20 = FUN_03fddef8(*(undefined8 *)(this + 8));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    if (!bVar1) {
LAB_03fde04c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
    if ((((cVar2 != '\0') &&
         (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)param_1), cVar2 == '\0')) &&
        (Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                   ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_18), *param_3 == 0
        )) && (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_1), bVar1)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      goto LAB_03fde04c;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantUtils::GetEntityClusterTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >,
   BoardEntityTypeFlag, float) */

void __thiscall
PlantUtils::GetEntityClusterTargets
          (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,undefined4 param_2
          ,PlantUtils *this,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)this);
  if (cVar1 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      local_48 = *puVar3;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      uVar4 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)*puVar3);
      EntityFinder::GetEntitiesWithinCircle
                (param_2,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,
                 param_4,uVar4);
      local_40 = FUN_03fdc158(local_20,local_18);
      FUN_03fde630(avStack_38,&local_48);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    uVar4 = FUN_03fdb2d8(avStack_38);
    uVar5 = FUN_03fdb28c(avStack_38);
    FUN_03fdc670(uVar4,uVar5);
    local_58 = FUN_03fdb2d8(avStack_38);
    local_50 = FUN_03fdb28c(avStack_38);
    while (cVar1 = FUN_03fdae90((exception_ptr *)&local_58,(__normal_iterator *)&local_50),
          cVar1 != '\0') {
      FUN_03fdae84((exception_ptr *)&local_58);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_48);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )param_1,(RtWeakPtr *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      FUN_03fdae74((exception_ptr *)&local_58);
    }
    FUN_03fdc018(avStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


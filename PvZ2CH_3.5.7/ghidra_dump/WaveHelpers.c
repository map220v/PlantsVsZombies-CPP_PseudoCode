// Class: WaveHelpers


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveHelpers::PickZombiesFromPool(int, std::set<Sexy::RtWeakPtr<ZombieType const>,
   std::less<Sexy::RtWeakPtr<ZombieType const> >, std::allocator<Sexy::RtWeakPtr<ZombieType const> >
   > const&, Sexy::MTRand&, std::vector<Sexy::RtWeakPtr<ZombieType const>,
   std::allocator<Sexy::RtWeakPtr<ZombieType const> > >&) */

void WaveHelpers::PickZombiesFromPool(int param_1,set *param_2,MTRand *param_3,vector *param_4)

{
  bool bVar1;
  ResourceInfo *this;
  RtWeakPtrBase *pRVar2;
  ZombieType *pZVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilitySet(aPStack_38,param_3);
  local_50 = std::
             set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
             ::begin((set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                      *)param_2);
  local_48 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_48), bVar1
        ) {
    pRVar2 = (RtWeakPtrBase *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,pRVar2);
    this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_58);
    lVar4 = ZombieType::GetProps((ZombieType *)this);
    if (0.0 < (float)*(int *)(lVar4 + 0xa0)) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_58);
      pZVar3 = (ZombieType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
      ;
      lVar4 = ZombieType::GetProps(pZVar3);
      ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
                (aPStack_38,aRStack_40,*(undefined4 *)(lVar4 + 0xa0));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_50);
  }
  for (; 0 < param_1; param_1 = param_1 - *(int *)(lVar4 + 0x9c)) {
    local_50 = std::
               set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
               ::begin((set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                        *)param_2);
    local_48 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_48),
          bVar1) {
      pRVar2 = (RtWeakPtrBase *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_50);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,pRVar2);
      pZVar3 = (ZombieType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
      ;
      lVar4 = ZombieType::GetProps(pZVar3);
      if (param_1 < *(int *)(lVar4 + 0x9c)) {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_58);
        ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::RemoveItem(aPStack_38,aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_50);
    }
    lVar4 = ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::GetSize(aPStack_38);
    if (lVar4 == 0) break;
    ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::PickItem();
    std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::push_back((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                 *)param_4,(RtWeakPtr *)aRStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_4);
    pZVar3 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar4 = ZombieType::GetProps(pZVar3);
  }
  ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::~ProbabilitySet(aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveHelpers::PickZombiesFromPool(int, std::set<ZombieType const*, std::less<ZombieType const*>,
   std::allocator<ZombieType const*> > const&, Sexy::MTRand&, std::vector<ZombieType const*,
   std::allocator<ZombieType const*> >&) */

void WaveHelpers::PickZombiesFromPool(int param_1,set *param_2,MTRand *param_3,vector *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  ZombieType *pZVar4;
  undefined8 local_48;
  undefined8 local_40;
  ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilitySet(aPStack_38,param_3);
  local_48 = std::
             set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::
             begin((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                    *)param_2);
  local_40 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)param_2);
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40), bVar1
        ) {
    puVar2 = (undefined8 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    pZVar4 = (ZombieType *)*puVar2;
    lVar3 = ZombieType::GetProps(pZVar4);
    ProbabilitySet<ZombieType_const*>::AddItem
              ((ProbabilitySet<ZombieType_const*> *)aPStack_38,pZVar4,*(int *)(lVar3 + 0xa0));
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_48);
  }
  for (; 0 < param_1; param_1 = param_1 - *(int *)(lVar3 + 0x9c)) {
    local_48 = std::
               set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
               ::begin((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                        *)param_2);
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40),
          bVar1) {
      puVar2 = (undefined8 *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
      pZVar4 = (ZombieType *)*puVar2;
      lVar3 = ZombieType::GetProps(pZVar4);
      if (param_1 < *(int *)(lVar3 + 0x9c)) {
        ProbabilitySet<ZombieType_const*>::RemoveItem
                  ((ProbabilitySet<ZombieType_const*> *)aPStack_38,pZVar4);
      }
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_48);
    }
    lVar3 = ProbabilitySet<ZombieType_const*>::GetSize
                      ((ProbabilitySet<ZombieType_const*> *)aPStack_38);
    if (lVar3 == 0) break;
    local_40 = ProbabilitySet<ZombieType_const*>::PickItem
                         ((ProbabilitySet<ZombieType_const*> *)aPStack_38);
    std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
              ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)param_4,
               (ZombieType **)&local_40);
    puVar2 = (undefined8 *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)param_4);
    lVar3 = ZombieType::GetProps((ZombieType *)*puVar2);
  }
  ProbabilitySet<ZombieType_const*>::~ProbabilitySet
            ((ProbabilitySet<ZombieType_const*> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveHelpers::GenerateRandomJitteredWaves(RandomJitteredWaveConfig const&, WaveManagerProperties*)
    */

void WaveHelpers::GenerateRandomJitteredWaves
               (RandomJitteredWaveConfig *param_1,WaveManagerProperties *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x0;
  undefined8 *puVar6;
  string *psVar7;
  RtWeakPtr *this;
  ResourceInfo *pRVar8;
  ulong uVar9;
  vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
  *this_00;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  int local_1474;
  ResourceInfo *local_1470;
  undefined8 local_1468;
  undefined8 local_1460;
  undefined8 local_1458;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1450 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1438 [48];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1408 [48];
  undefined8 local_13d8 [2];
  undefined4 local_13c4;
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::MTRand::MTRand(aMStack_13a0,(long)*(int *)(param_1 + 0x14));
  iVar10 = 0;
  FUN_049312e4(*(undefined4 *)(param_1 + 4),param_2);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1438);
  if (0 < *(int *)(param_1 + 4)) {
    do {
      lVar3 = RandomJitteredWaveConfig::GetInstructionForWave(param_1,iVar10);
      if (lVar3 != 0) {
        uVar4 = FUN_04928dfc(*(undefined8 *)(lVar3 + 8));
        uVar5 = FUN_04928e4c(*(undefined8 *)(lVar3 + 0x10));
        std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::
        insert<__gnu_cxx::__normal_iterator<ZombieType_const*const*,std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>>>
                  ((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                    *)amStack_1438,uVar4,uVar5);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 4));
  }
  iVar10 = *(int *)(param_1 + 0xc);
  uVar13 = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1408);
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar12 = (int)uVar13;
      lVar3 = RandomJitteredWaveConfig::GetInstructionForWave(param_1,iVar12);
      if (lVar3 == 0) {
        if (*(int *)param_1 <= iVar12) {
          uVar11 = 0;
LAB_04931930:
          uVar4 = SpawnZombiesJitteredWaveActionProps::StaticGetClass();
          GameObject::Create(uVar4,0x35);
          nop();
          uVar5 = *(undefined8 *)(param_2 + 0x18);
          uVar4 = *(undefined8 *)(param_2 + 0x10);
          *(undefined4 *)(extraout_x0 + 0x58) = uVar11;
          uVar4 = FUN_04926794(uVar4,uVar5);
          cVar1 = FUN_0492667c(uVar13 & 0xffffffff,uVar4,*(undefined4 *)(param_1 + 8));
          local_1474 = iVar10;
          if (cVar1 != '\0') {
            local_1474 = (int)((float)iVar10 * 2.5);
          }
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1450);
          uVar4 = FUN_04926794(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
          cVar1 = FUN_0492666c(uVar13 & 0xffffffff,uVar4);
          if (cVar1 != '\0') {
            FUN_0492edb8(amStack_1438,&local_1474,avStack_1450);
            local_1458 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)avStack_1450);
            local_13d8[0] =
                 std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1450);
            while (bVar2 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_1458,
                                      (__normal_iterator *)local_13d8), bVar2) {
              puVar6 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1458);
              local_1460 = *puVar6;
              std::
              set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
              ::erase((ZombieType **)amStack_1438);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1458);
            }
          }
          PickZombiesFromPool(local_1474,(set *)amStack_1408,aMStack_13a0,(vector *)avStack_1450);
          local_1468 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)avStack_1450);
          local_1460 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_1450);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_1468,(__normal_iterator *)&local_1460);
          if (bVar2) {
            do {
              puVar6 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1468);
              local_1470 = (ResourceInfo *)*puVar6;
              SpawnZombiesJitteredInstruction::SpawnZombiesJitteredInstruction
                        ((SpawnZombiesJitteredInstruction *)local_13d8);
              psVar7 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
              ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar7);
              Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                        ((RtWeakPtr<PowerPropertySheet> *)local_13d8,(RtWeakPtr *)&local_1458);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_1458);
              cVar1 = std::vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>>::empty
                                ((vector<DrZomibeLevelData,std::allocator<DrZomibeLevelData>> *)
                                 (param_1 + 0x30));
              if (cVar1 == '\0') {
                uVar14 = 0;
                do {
                  uVar4 = *(undefined8 *)(param_1 + 0x30);
                  uVar9 = FUN_04926814(uVar4,*(undefined8 *)(param_1 + 0x38));
                  if (uVar9 <= uVar14) goto LAB_04931aa8;
                  this = (RtWeakPtr *)FUN_049268a4(uVar4,uVar14);
                  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
                  uVar14 = uVar14 + 1;
                } while (local_1470 != pRVar8);
                local_13c4 = *(undefined4 *)(this + 8);
              }
LAB_04931aa8:
              std::
              vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
              ::push_back((vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
                           *)(extraout_x0 + 0x40),(SpawnZombiesJitteredInstruction *)local_13d8);
              std::
              set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
              ::erase((ZombieType **)amStack_1438);
              SpawnZombiesJitteredInstruction::~SpawnZombiesJitteredInstruction
                        ((SpawnZombiesJitteredInstruction *)local_13d8);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1468);
              bVar2 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&local_1468,(__normal_iterator *)&local_1460);
            } while (bVar2);
          }
          this_00 = (vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                     *)FUN_049267c4(*(undefined8 *)(param_2 + 0x10),uVar13);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_13d8,(RtWeakPtrBase *)&local_1458);
          std::
          vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
          ::push_back(this_00,(RtWeakPtr *)local_13d8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)local_13d8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_1458);
          std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::~vector
                    ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)avStack_1450);
LAB_049318e4:
          iVar10 = iVar10 + *(int *)(param_1 + 0x10);
        }
      }
      else {
        FUN_0492dcdc(lVar3 + 8,lVar3 + 0x20,amStack_1408);
        uVar11 = *(undefined4 *)(lVar3 + 0x38);
        if (*(int *)param_1 <= iVar12) {
          if (*(char *)(lVar3 + 0x3c) == '\0') goto LAB_04931930;
          goto LAB_049318e4;
        }
      }
      uVar13 = uVar13 + 1;
    } while (iVar12 + 1 < *(int *)(param_1 + 4));
  }
  std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::~set
            ((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
              *)amStack_1408);
  std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::~set
            ((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
              *)amStack_1438);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveHelpers::GenerateDangerRoomWaves(DanggerRoomWaveConfig const&, WaveManagerProperties*) */

void WaveHelpers::GenerateDangerRoomWaves
               (DanggerRoomWaveConfig *param_1,WaveManagerProperties *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x0;
  undefined8 *puVar9;
  string *psVar10;
  ulong uVar11;
  vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
  *this;
  int iVar12;
  undefined4 uVar13;
  ZombieType *this_00;
  int iVar14;
  ulong uVar15;
  int local_149c;
  undefined8 local_1498;
  undefined8 local_1490;
  undefined8 local_1488;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1480 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1468 [48];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1438 [48];
  undefined8 local_1408 [6];
  undefined8 local_13d8 [2];
  undefined1 local_13c7;
  int local_13c4;
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::MTRand::MTRand(aMStack_13a0,(long)*(int *)(param_1 + 0x14));
  iVar12 = 0;
  FUN_049312e4(*(undefined4 *)(param_1 + 4),param_2);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1468);
  if (0 < *(int *)(param_1 + 4)) {
    do {
      lVar6 = RandomJitteredWaveConfig::GetInstructionForWave
                        ((RandomJitteredWaveConfig *)param_1,iVar12);
      if (lVar6 != 0) {
        uVar7 = FUN_04928dfc(*(undefined8 *)(lVar6 + 8));
        uVar8 = FUN_04928e4c(*(undefined8 *)(lVar6 + 0x10));
        std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::
        insert<__gnu_cxx::__normal_iterator<ZombieType_const*const*,std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>>>
                  ((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                    *)amStack_1468,uVar7,uVar8);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 4));
  }
  iVar12 = *(int *)(param_1 + 0xc);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1438);
  iVar4 = *(int *)(param_1 + 0x48);
  if (iVar4 < 4) {
LAB_049326c0:
    iVar5 = -1;
  }
  else {
    uVar15 = Sexy::MTRand::Next(aMStack_13a0,100);
    if (*(float *)(param_1 + 0x60) * 100.0 <= (float)uVar15) {
      iVar4 = *(int *)(param_1 + 0x48);
      goto LAB_049326c0;
    }
    iVar4 = FUN_04926794(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    iVar5 = Sexy::MTRand::Next(aMStack_13a0,iVar4);
    iVar4 = *(int *)(param_1 + 0x48);
  }
  if (3 < iVar4) {
    uVar15 = Sexy::MTRand::Next(aMStack_13a0,100);
    if ((float)uVar15 < *(float *)(param_1 + 0x5c) * 100.0) {
      iVar4 = FUN_04926794(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
      iVar4 = Sexy::MTRand::Next(aMStack_13a0,iVar4);
      if ((-1 < iVar4) && (-1 < iVar5)) {
        uVar15 = Sexy::MTRand::Next(aMStack_13a0,100);
        if (uVar15 < 0x32) {
          iVar4 = -1;
        }
        else {
          iVar5 = -1;
        }
      }
      goto LAB_049326d8;
    }
  }
  iVar4 = -1;
LAB_049326d8:
  uVar15 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar14 = (int)uVar15;
      lVar6 = RandomJitteredWaveConfig::GetInstructionForWave
                        ((RandomJitteredWaveConfig *)param_1,iVar14);
      if (lVar6 == 0) {
        if (*(int *)param_1 <= iVar14) {
          uVar13 = 0;
LAB_04932774:
          uVar7 = SpawnZombiesJitteredWaveActionProps::StaticGetClass();
          GameObject::Create(uVar7,0x35);
          nop();
          uVar8 = *(undefined8 *)(param_2 + 0x18);
          uVar7 = *(undefined8 *)(param_2 + 0x10);
          *(undefined4 *)(extraout_x0 + 0x58) = uVar13;
          uVar7 = FUN_04926794(uVar7,uVar8);
          cVar2 = FUN_0492667c(uVar15 & 0xffffffff,uVar7,*(undefined4 *)(param_1 + 8));
          local_149c = iVar12;
          if (cVar2 != '\0') {
            local_149c = (int)((float)iVar12 * 2.5);
          }
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1480);
          uVar7 = FUN_04926794(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
          cVar2 = FUN_0492666c(uVar15 & 0xffffffff,uVar7);
          if (cVar2 != '\0') {
            FUN_0492edb8(amStack_1468,&local_149c,avStack_1480);
            local_1408[0] =
                 std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_1480);
            local_13d8[0] =
                 std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_1480);
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)local_1408,
                                      (__normal_iterator *)local_13d8), bVar3) {
              puVar9 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_1408);
              local_1488 = *puVar9;
              std::
              set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
              ::erase((ZombieType **)amStack_1468);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_1408);
            }
          }
          PickZombiesFromPool(local_149c,(set *)amStack_1438,aMStack_13a0,(vector *)avStack_1480);
          local_1490 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)avStack_1480);
          local_1488 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_1480);
          while (bVar3 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_1490,
                                    (__normal_iterator *)&local_1488), bVar3) {
            puVar9 = (undefined8 *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_1490);
            local_1498 = *puVar9;
            SpawnZombiesJitteredInstruction::SpawnZombiesJitteredInstruction
                      ((SpawnZombiesJitteredInstruction *)local_13d8);
            psVar10 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
            ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar10);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)local_13d8,(RtWeakPtr *)local_1408);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_1408);
            iVar1 = *(int *)(param_1 + 0x50);
            if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x4c)) {
              uVar11 = Sexy::MTRand::Next(aMStack_13a0,100);
              if (*(float *)(param_1 + 0x54) * 100.0 <= (float)uVar11) {
                iVar1 = *(int *)(param_1 + 0x4c);
              }
              else {
                iVar1 = *(int *)(param_1 + 0x50);
              }
            }
            local_13c4 = iVar1;
            std::
            vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
            ::push_back((vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
                         *)(extraout_x0 + 0x40),(SpawnZombiesJitteredInstruction *)local_13d8);
            std::
            set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::
            erase((ZombieType **)amStack_1468);
            SpawnZombiesJitteredInstruction::~SpawnZombiesJitteredInstruction
                      ((SpawnZombiesJitteredInstruction *)local_13d8);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_1490);
          }
          if (iVar5 == iVar14) {
            SpawnZombiesJitteredInstruction::SpawnZombiesJitteredInstruction
                      ((SpawnZombiesJitteredInstruction *)local_13d8);
            psVar10 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
            std::string::string((string *)&local_1488,"endlesswealth");
            ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar10);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)local_13d8,(RtWeakPtr *)local_1408);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_1408);
            std::string::~string((string *)&local_1488);
            nop();
            iVar1 = *(int *)(param_1 + 0x50);
            if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x4c)) {
              uVar11 = Sexy::MTRand::Next(aMStack_13a0,100);
              if (*(float *)(param_1 + 0x54) * 100.0 <= (float)uVar11) {
                iVar1 = *(int *)(param_1 + 0x4c);
              }
              else {
                iVar1 = *(int *)(param_1 + 0x50);
              }
            }
            local_13c4 = iVar1;
            std::
            vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
            ::push_back((vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
                         *)(extraout_x0 + 0x40),(SpawnZombiesJitteredInstruction *)local_13d8);
            SpawnZombiesJitteredInstruction::~SpawnZombiesJitteredInstruction
                      ((SpawnZombiesJitteredInstruction *)local_13d8);
          }
          if (iVar4 == iVar14) {
            ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::ProbabilitySet
                      ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)local_1408,aMStack_13a0)
            ;
            local_1488 = std::
                         set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                         ::begin((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
                                  *)amStack_1438);
            local_13d8[0] =
                 std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_1438);
            while (bVar3 = eastl::operator!=((rbtree_iterator *)&local_1488,
                                             (rbtree_iterator *)local_13d8), bVar3) {
              puVar9 = (undefined8 *)
                       std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                 ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                  &local_1488);
              this_00 = (ZombieType *)*puVar9;
              lVar6 = ZombieType::GetProps(this_00);
              if (*(int *)(param_1 + 0x58) < *(int *)(lVar6 + 0x9c)) {
                lVar6 = ZombieType::GetProps(this_00);
                ProbabilitySet<ZombieType_const*>::AddItem
                          ((ProbabilitySet<ZombieType_const*> *)local_1408,this_00,
                           *(int *)(lVar6 + 0xa0));
              }
              std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                        ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_1488);
            }
            lVar6 = ProbabilitySet<ZombieType_const*>::GetSize
                              ((ProbabilitySet<ZombieType_const*> *)local_1408);
            if (lVar6 != 0) {
              ProbabilitySet<ZombieType_const*>::PickItem
                        ((ProbabilitySet<ZombieType_const*> *)local_1408);
              SpawnZombiesJitteredInstruction::SpawnZombiesJitteredInstruction
                        ((SpawnZombiesJitteredInstruction *)local_13d8);
              local_13c7 = 1;
              psVar10 = (string *)
                        Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
              ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar10);
              Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                        ((RtWeakPtr<PowerPropertySheet> *)local_13d8,(RtWeakPtr *)&local_1488);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_1488);
              iVar1 = *(int *)(param_1 + 0x50);
              if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x4c)) {
                uVar11 = Sexy::MTRand::Next(aMStack_13a0,100);
                if (*(float *)(param_1 + 0x54) * 100.0 <= (float)uVar11) {
                  iVar1 = *(int *)(param_1 + 0x4c);
                }
                else {
                  iVar1 = *(int *)(param_1 + 0x50);
                }
              }
              local_13c4 = iVar1;
              std::
              vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
              ::push_back((vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
                           *)(extraout_x0 + 0x40),(SpawnZombiesJitteredInstruction *)local_13d8);
              SpawnZombiesJitteredInstruction::~SpawnZombiesJitteredInstruction
                        ((SpawnZombiesJitteredInstruction *)local_13d8);
            }
            ProbabilitySet<ZombieType_const*>::~ProbabilitySet
                      ((ProbabilitySet<ZombieType_const*> *)local_1408);
          }
          this = (vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                  *)FUN_049267c4(*(undefined8 *)(param_2 + 0x10),uVar15);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_13d8,(RtWeakPtrBase *)local_1408);
          std::
          vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
          ::push_back(this,(RtWeakPtr *)local_13d8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)local_13d8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)local_1408);
          std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::~vector
                    ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)avStack_1480);
LAB_04932728:
          iVar12 = iVar12 + *(int *)(param_1 + 0x10);
        }
      }
      else {
        FUN_0492dcdc(lVar6 + 8,lVar6 + 0x20,amStack_1438);
        uVar13 = *(undefined4 *)(lVar6 + 0x38);
        if (*(int *)param_1 <= iVar14) {
          if (*(char *)(lVar6 + 0x3c) == '\0') goto LAB_04932774;
          goto LAB_04932728;
        }
      }
      uVar15 = uVar15 + 1;
    } while (iVar14 + 1 < *(int *)(param_1 + 4));
  }
  std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::~set
            ((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
              *)amStack_1438);
  std::set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>::~set
            ((set<ZombieType_const*,std::less<ZombieType_const*>,std::allocator<ZombieType_const*>>
              *)amStack_1468);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


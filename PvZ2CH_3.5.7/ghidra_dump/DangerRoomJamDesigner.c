// Class: DangerRoomJamDesigner


/* DangerRoomJamDesigner::~DangerRoomJamDesigner() */

void __thiscall DangerRoomJamDesigner::~DangerRoomJamDesigner(DangerRoomJamDesigner *this)

{
  *(undefined ***)this = &PTR_GetClass_0675c600;
  DangerRoomLevelDesigner::~DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  return;
}


/* DangerRoomJamDesigner::~DangerRoomJamDesigner() */

void __thiscall DangerRoomJamDesigner::~DangerRoomJamDesigner(DangerRoomJamDesigner *this)

{
  ~DangerRoomJamDesigner(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomJamDesigner::StaticClassInit() */

void DangerRoomJamDesigner::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"DangerRoomJamDesigner");
    (*pcVar2)(plVar1,asStack_10,FUN_03cab89c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomJamDesigner::StaticGetClass() */

long * DangerRoomJamDesigner::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = DangerRoomLevelDesigner::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomJamDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomJamDesigner::GetClass() const */

long * DangerRoomJamDesigner::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = DangerRoomLevelDesigner::StaticGetClass();
  (*pcVar3)(plVar1,"DangerRoomJamDesigner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomJamDesigner::DangerRoomJamDesigner() */

void __thiscall DangerRoomJamDesigner::DangerRoomJamDesigner(DangerRoomJamDesigner *this)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DangerRoomLevelDesigner::DangerRoomLevelDesigner((DangerRoomLevelDesigner *)this);
  *(undefined ***)this = &PTR_GetClass_0675c600;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x18));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x20));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x28));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x30));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x38));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x40));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x48));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x50));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x58));
  DVec2::DVec2((DVec2 *)&local_10,1.0,100.0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x10) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomJamDesigner::StaticNew() */

DangerRoomJamDesigner * DangerRoomJamDesigner::StaticNew(void)

{
  DangerRoomJamDesigner *this;
  
  this = ::operator_new(0x68);
  DangerRoomJamDesigner(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomJamDesigner::GenerateEvents(int, Sexy::MTRand&, WaveManagerProperties*) const */

void __thiscall
DangerRoomJamDesigner::GenerateEvents
          (DangerRoomJamDesigner *this,int param_1,MTRand *param_2,WaveManagerProperties *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  vector *pvVar10;
  RtWeakPtrBase *pRVar11;
  RtObject *this_00;
  long lVar12;
  SpawnZombiesJitteredInstruction *pSVar13;
  SpawnZombiesJitteredInstruction *pSVar14;
  undefined4 *puVar15;
  string *psVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  string asStack_d8 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_d0 [8];
  string asStack_c8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
  avStack_88 [24];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40 [2];
  undefined4 local_2c;
  long local_8;
  
  fVar19 = (float)param_1;
  local_8 = ___stack_chk_guard;
  if (*(float *)(this + 0x10) <= fVar19) {
    fVar18 = (float)ValueRange::GetTimeForValue((ValueRange *)(this + 0x10),fVar19);
    fVar19 = (float)ValueRange::GetTimeForValue((ValueRange *)(this + 0x48),fVar19);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_b8);
    if (param_1 < *(int *)(this + 0x60)) {
      std::vector<std::string,std::allocator<std::string>>::operator=
                ((vector<std::string,std::allocator<std::string>> *)&local_b8,
                 (vector *)&DAT_06ad2c58);
    }
    else {
      std::vector<std::string,std::allocator<std::string>>::operator=
                ((vector<std::string,std::allocator<std::string>> *)&local_b8,
                 (vector *)&DAT_06ad2c40);
    }
    iVar2 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                      (fVar18,(ValueRange *)(this + 0x18),(ValueRange *)(this + 0x20));
    iVar3 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                      (fVar18,(ValueRange *)(this + 0x38),(ValueRange *)(this + 0x40));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_a0);
    uVar6 = FUN_03cab598(local_b8,local_b0);
    if (uVar6 < (ulong)(long)iVar3) {
      iVar3 = (int)uVar6;
    }
    if (0 < iVar3) {
      do {
        iVar4 = RandRangeInt(0,(int)uVar6 + -1);
        uVar9 = local_a0;
        local_40[0] = CONCAT44(local_40[0]._4_4_,iVar4);
        lVar7 = FUN_03cab588(local_a0,local_98);
        lVar12 = 0;
        do {
          if (lVar12 == lVar7) {
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)&local_a0,(int *)local_40);
            iVar3 = iVar3 + -1;
            if (iVar3 == 0) goto LAB_03cac1b0;
            break;
          }
          piVar8 = (int *)FUN_03cab5a4(uVar9,lVar12);
          lVar12 = lVar12 + 1;
        } while (iVar4 != *piVar8);
        uVar6 = FUN_03cab598(local_b8,local_b0);
      } while( true );
    }
LAB_03cac1b0:
    if (iVar2 < *(int *)(param_3 + 0x2c)) {
      do {
        iVar3 = FUN_03cab588(local_a0,local_98);
        iVar3 = RandRangeInt(0,iVar3 + -1);
        piVar8 = (int *)FUN_03cab5a4(local_a0,(long)iVar3);
        iVar3 = *piVar8;
        uVar9 = FUN_03cab5ac(local_b8,(long)iVar3);
        FUN_05475d88(asStack_d8,uVar9);
        pvVar10 = (vector *)FUN_03cab5b4(*(undefined8 *)(param_3 + 0x10),(long)iVar2);
        std::
        vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
        ::vector(avStack_88,pvVar10);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_d0);
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_88);
        local_40[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)avStack_88);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_58,(__normal_iterator *)local_40),
              bVar1) {
          pRVar11 = (RtWeakPtrBase *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_70,pRVar11);
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_70);
          if (bVar1) {
            this_00 = (RtObject *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
            bVar1 = Sexy::RtObject::IsA<SpawnZombiesJitteredWaveActionProps>(this_00);
            if (bVar1) {
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_d0,
                         (RtWeakPtrBase *)&local_70);
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
        }
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)(lVar12 + 0x28),asStack_d8);
        pvVar10 = (vector *)FUN_03cab5c0(DAT_06ad2ce8,(long)iVar3);
        std::vector<std::string,std::allocator<std::string>>::vector
                  ((vector<std::string,std::allocator<std::string>> *)&local_70,pvVar10);
        iVar3 = FUN_03cab598(local_70,local_68);
        iVar3 = RandRangeInt(0,iVar3 + -1);
        uVar9 = FUN_03cab5ac(local_70,(long)iVar3);
        FUN_05475d88(asStack_c8,uVar9);
        iVar3 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                          (fVar19,(ValueRange *)(this + 0x50),(ValueRange *)(this + 0x58));
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
        uVar6 = FUN_03cab5cc(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
        if (uVar6 < (ulong)(long)iVar3) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
          iVar3 = FUN_03cab5cc(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
        }
        lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
        iVar4 = FUN_03cab5cc(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
        while( true ) {
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
          uVar6 = FUN_03cab5cc(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
          if (uVar6 <= (ulong)(long)(iVar4 - iVar3)) break;
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
          iVar5 = FUN_03cab5cc(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48));
          iVar5 = RandRangeInt(0,iVar5 + -1);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
          lVar12 = FUN_03cab5ec(*(undefined8 *)(lVar12 + 0x40),(long)iVar5);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)&local_58,(int *)(lVar12 + 0x14));
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
          pSVar13 = (SpawnZombiesJitteredInstruction *)
                    FUN_03cab5ec(*(undefined8 *)(lVar12 + 0x40),(long)iVar5);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
          pSVar14 = (SpawnZombiesJitteredInstruction *)
                    std::vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>>::back
                              ((vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>> *)
                               (lVar12 + 0x40));
          std::swap<SpawnZombiesJitteredInstruction>(pSVar13,pSVar14);
          lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
          FUN_03cabed4(lVar12 + 0x48);
        }
        lVar12 = 0;
        if (0 < iVar3) {
          do {
            uVar9 = local_58;
            uVar17 = 1;
            iVar4 = FUN_03cab588(local_58,local_50);
            if ((int)lVar12 < iVar4) {
              puVar15 = (undefined4 *)FUN_03cab5a4(uVar9,lVar12);
              uVar17 = *puVar15;
            }
            lVar12 = lVar12 + 1;
            SpawnZombiesJitteredInstruction::SpawnZombiesJitteredInstruction
                      ((SpawnZombiesJitteredInstruction *)local_40);
            psVar16 = (string *)
                      Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
            ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar16);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)local_40,(RtWeakPtr *)aRStack_c0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
            local_2c = uVar17;
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0);
            std::
            vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
            ::push_back((vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
                         *)(lVar7 + 0x40),(SpawnZombiesJitteredInstruction *)local_40);
            SpawnZombiesJitteredInstruction::~SpawnZombiesJitteredInstruction
                      ((SpawnZombiesJitteredInstruction *)local_40);
          } while ((int)lVar12 < iVar3);
        }
        iVar3 = DangerRoomLevelDesignerHelpers::CalculateLevelValue
                          (fVar18,(ValueRange *)(this + 0x28),(ValueRange *)(this + 0x30));
        iVar2 = iVar2 + iVar3;
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_58);
        std::string::~string(asStack_c8);
        std::vector<std::string,std::allocator<std::string>>::~vector
                  ((vector<std::string,std::allocator<std::string>> *)&local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d0)
        ;
        std::
        vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
        ::~vector(avStack_88);
        std::string::~string(asStack_d8);
      } while (iVar2 < *(int *)(param_3 + 0x2c));
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_a0);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_b8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


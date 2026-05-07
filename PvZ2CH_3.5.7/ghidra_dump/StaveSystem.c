// Class: StaveSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StaveSystem::StaticClassInit() */

void StaveSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"StaveSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03fb379c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StaveSystem::StaticGetClass() */

long * StaveSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"StaveSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StaveSystem::GetClass() const */

long * StaveSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"StaveSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StaveSystem::RemoveSyllable(Sexy::Point const&) */

void __thiscall StaveSystem::RemoveSyllable(StaveSystem *this,Point *param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int *piVar6;
  long lVar7;
  PlantHeavenDatura *this_00;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar10 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar11 = *(int *)param_1;
  uVar2 = FUN_03fb0d54(uVar10,*(undefined8 *)(this + 0x18));
  if ((ulong)(long)iVar11 < uVar2) {
    uVar9 = (ulong)*(int *)(param_1 + 4);
    puVar3 = (undefined8 *)FUN_03fb0d68(uVar10,0);
    uVar4 = FUN_03fb0d48(*puVar3,puVar3[1]);
    if (uVar9 < uVar4) {
      iVar8 = 1;
      puVar3 = (undefined8 *)FUN_03fb0d68(uVar10,(long)iVar11);
      puVar5 = (undefined4 *)FUN_03fb0d74(*puVar3,uVar9);
      *puVar5 = 0;
      iVar11 = *(int *)param_1 + 1;
      uVar4 = (ulong)iVar11;
      if (uVar4 < uVar2) {
        do {
          puVar3 = (undefined8 *)FUN_03fb0d68(uVar10,uVar4);
          piVar6 = (int *)FUN_03fb0d74(*puVar3,uVar9);
          if (*piVar6 == 0) break;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
          EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,iVar11,*(undefined4 *)(param_1 + 4));
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_20);
          local_30 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
          while (bVar1 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
                bVar1) {
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
            nop();
            Plant::GetType();
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            bVar1 = std::operator==((string *)(lVar7 + 8),"heavendatura");
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            if ((bVar1) && (nop(), this_00 != (PlantHeavenDatura *)0x0)) {
              PlantHeavenDatura::SetSyllableQueueType(this_00,iVar8);
              puVar3 = (undefined8 *)FUN_03fb0d68(*(undefined8 *)(this + 0x10),uVar4);
              piVar6 = (int *)FUN_03fb0d74(*puVar3,uVar9);
              *piVar6 = iVar8;
              iVar8 = iVar8 + 1;
              break;
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
          }
          uVar4 = uVar4 + 1;
          iVar11 = iVar11 + 1;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
          uVar10 = *(undefined8 *)(this + 0x10);
          uVar2 = FUN_03fb0d54(uVar10,*(undefined8 *)(this + 0x18));
        } while (uVar4 < uVar2);
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
/* StaveSystem::AddSyllable(Sexy::Point const&) */

void __thiscall StaveSystem::AddSyllable(StaveSystem *this,Point *param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  PlantHeavenDatura *this_00;
  ulong uVar5;
  PlantHeavenDatura *this_01;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar10 = *(int *)param_1;
  uVar8 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_03fb0d54(uVar8,*(undefined8 *)(this + 0x18));
  if ((ulong)(long)iVar10 < uVar2) {
    uVar6 = (ulong)*(int *)(param_1 + 4);
    puVar3 = (undefined8 *)FUN_03fb0d68(uVar8,0);
    uVar2 = FUN_03fb0d48(*puVar3,puVar3[1]);
    if (uVar6 < uVar2) {
      if (iVar10 + -1 < 0) {
        iVar9 = 1;
      }
      else {
        lVar7 = (long)(iVar10 + -1);
        iVar9 = 1;
        do {
          puVar3 = (undefined8 *)FUN_03fb0d68(uVar8,lVar7);
          piVar4 = (int *)FUN_03fb0d74(*puVar3,uVar6);
          if (*piVar4 == 0) break;
          iVar9 = iVar9 + 1;
          lVar7 = lVar7 + -1;
        } while (iVar9 != iVar10 + 1);
      }
      puVar3 = (undefined8 *)FUN_03fb0d68(uVar8,(long)iVar10);
      piVar4 = (int *)FUN_03fb0d74(*puVar3,uVar6);
      *piVar4 = iVar9;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      EntityFinder::GetEntitiesAtGridSquare
                (avStack_20,1,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
            iVar10 = iVar9, bVar1) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        nop();
        Plant::GetType();
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        bVar1 = std::operator==((string *)(lVar7 + 8),"heavendatura");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        if ((bVar1) && (nop(), this_00 != (PlantHeavenDatura *)0x0)) {
          iVar10 = iVar9 + 1;
          PlantHeavenDatura::SetSyllableQueueType(this_00,iVar9);
          break;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      iVar9 = *(int *)param_1 + 1;
      uVar2 = (ulong)iVar9;
      uVar8 = *(undefined8 *)(this + 0x10);
      uVar5 = FUN_03fb0d54(uVar8,*(undefined8 *)(this + 0x18));
      if (uVar2 < uVar5) {
        do {
          puVar3 = (undefined8 *)FUN_03fb0d68(uVar8,uVar2);
          piVar4 = (int *)FUN_03fb0d74(*puVar3,uVar6);
          if (*piVar4 == 0) break;
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
          EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,iVar9,*(undefined4 *)(param_1 + 4));
          local_38 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_20);
          local_30 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
          while (bVar1 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
                bVar1) {
            std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
            nop();
            Plant::GetType();
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            bVar1 = std::operator==((string *)(lVar7 + 8),"heavendatura");
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            if ((bVar1) && (nop(), this_01 != (PlantHeavenDatura *)0x0)) {
              PlantHeavenDatura::SetSyllableQueueType(this_01,iVar10);
              uVar8 = *(undefined8 *)(this + 0x10);
              puVar3 = (undefined8 *)FUN_03fb0d68(uVar8,uVar2);
              piVar4 = (int *)FUN_03fb0d74(*puVar3,uVar6);
              *piVar4 = iVar10;
              iVar10 = iVar10 + 1;
              goto LAB_03fb3558;
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
          }
          uVar8 = *(undefined8 *)(this + 0x10);
LAB_03fb3558:
          uVar2 = uVar2 + 1;
          iVar9 = iVar9 + 1;
          uVar5 = FUN_03fb0d54(uVar8,*(undefined8 *)(this + 0x18));
        } while (uVar2 < uVar5);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StaveSystem::~StaveSystem() */

void __thiscall StaveSystem::~StaveSystem(StaveSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067a78a0;
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* StaveSystem::~StaveSystem() */

void __thiscall StaveSystem::~StaveSystem(StaveSystem *this)

{
  ~StaveSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StaveSystem::StaveSystem() */

void __thiscall StaveSystem::StaveSystem(StaveSystem *this)

{
  int iVar1;
  int iVar2;
  undefined4 local_3c;
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  avStack_38 [24];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067a78a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  local_3c = 0;
  std::vector<int,std::allocator<int>>::vector
            ((ulong)avStack_20,(int *)(long)iVar2,(allocator *)&local_3c);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::vector((ulong)avStack_38,(vector *)(long)iVar1,(allocator *)avStack_20);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::operator=((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
               *)(this + 0x10),(vector *)avStack_38);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector(avStack_38);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StaveSystem::StaticNew() */

StaveSystem * StaveSystem::StaticNew(void)

{
  StaveSystem *this;
  
  this = ::operator_new(0x28);
  StaveSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StaveSystem::PlayNextSyllable(Sexy::Point const&) */

void __thiscall StaveSystem::PlayNextSyllable(StaveSystem *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  PlantHeavenDatura *this_00;
  undefined8 uVar9;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar9 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_03fb0d54(uVar9,*(undefined8 *)(this + 0x18));
  iVar1 = *(int *)param_1;
  if ((ulong)(long)iVar1 < uVar4) {
    iVar2 = *(int *)(param_1 + 4);
    puVar5 = (undefined8 *)FUN_03fb0d68(uVar9,0);
    uVar6 = FUN_03fb0d48(*puVar5,puVar5[1]);
    if (((ulong)(long)iVar2 < uVar6) && ((ulong)(long)(iVar1 + 1) < uVar4)) {
      puVar5 = (undefined8 *)FUN_03fb0d68(uVar9);
      piVar7 = (int *)FUN_03fb0d74(*puVar5,(long)iVar2);
      if (*piVar7 != 0) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
        EntityFinder::GetEntitiesAtGridSquare
                  (avStack_20,1,*(int *)param_1 + 1,*(undefined4 *)(param_1 + 4));
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
              bVar3) {
          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
          nop();
          Plant::GetType();
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
          bVar3 = std::operator==((string *)(lVar8 + 8),"heavendatura");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          if ((bVar3) && (nop(), this_00 != (PlantHeavenDatura *)0x0)) {
            PlantHeavenDatura::PlaySyllable(this_00);
            break;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: RandZombieProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RandZombieProperties::StaticClassInit() */

void RandZombieProperties::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RandZombieInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0490f1f8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RandZombieProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0490f4d4,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RandZombieProperties::StaticGetClass() */

long * RandZombieProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RandZombieProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RandZombieProperties::GetClass() const */

long * RandZombieProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RandZombieProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RandZombieProperties::GetModuleClass() const */

long * RandZombieProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RandZombieModule::sClass != (long *)0x0) {
    return RandZombieModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RandZombieModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"RandZombieModule",uVar2,RandZombieModule::StaticNew);
  RandZombieModule::StaticClassInit();
  return RandZombieModule::sClass;
}


/* RandZombieProperties::RandZombieProperties() */

void __thiscall RandZombieProperties::RandZombieProperties(RandZombieProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0690e4a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<RandZombieInfo,std::allocator<RandZombieInfo>>::clear
            ((vector<RandZombieInfo,std::allocator<RandZombieInfo>> *)(this + 0x40));
  std::
  vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
  ::clear((vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
           *)(this + 0x58));
  return;
}


/* RandZombieProperties::StaticNew() */

RandZombieProperties * RandZombieProperties::StaticNew(void)

{
  RandZombieProperties *this;
  
  this = ::operator_new(0x70);
  RandZombieProperties(this);
  return this;
}


/* RandZombieProperties::~RandZombieProperties() */

void __thiscall RandZombieProperties::~RandZombieProperties(RandZombieProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0690e4a0;
  std::
  vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
  ::~vector((vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
             *)(this + 0x58));
  std::vector<RandZombieInfo,std::allocator<RandZombieInfo>>::~vector
            ((vector<RandZombieInfo,std::allocator<RandZombieInfo>> *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RandZombieProperties::~RandZombieProperties() */

void __thiscall RandZombieProperties::~RandZombieProperties(RandZombieProperties *this)

{
  ~RandZombieProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RandZombieProperties::SetupRandZombieList() const */

void __thiscall RandZombieProperties::SetupRandZombieList(RandZombieProperties *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  RtWeakPtr *pRVar5;
  ulong uVar6;
  undefined8 *puVar7;
  TaskResource **ppTVar8;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  long lVar10;
  long lVar11;
  list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>> *plVar12
  ;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  uVar14 = *(undefined8 *)(this + 0x40);
  lVar3 = FUN_0490e788(uVar14,*(undefined8 *)(this + 0x48));
  lVar4 = 0;
  uVar16 = 0;
  while (lVar4 != lVar3) {
    lVar10 = lVar4 + 1;
    lVar11 = FUN_0490e7b8(uVar14,lVar4);
    lVar4 = lVar10;
    if (uVar16 < *(uint *)(lVar11 + 0xc)) {
      uVar16 = *(uint *)(lVar11 + 0xc);
    }
  }
  iVar1 = uVar16 + 1;
  uVar13 = 0;
  uVar15 = (ulong)iVar1;
  std::
  vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
  ::resize((vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
            *)local_38,uVar15);
  std::
  vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
  ::resize((vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
            *)local_20,uVar15);
  uVar14 = *(undefined8 *)(this + 0x40);
  lVar4 = FUN_0490e788(uVar14,*(undefined8 *)(this + 0x48));
  if (lVar4 != 0) {
    do {
      pRVar5 = (RtWeakPtr *)FUN_0490e7b8(uVar14,uVar13);
      if (*(int *)(pRVar5 + 8) != 0) {
        plVar12 = (list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                   *)FUN_0490e7c4(local_38[0],*(int *)(pRVar5 + 8) + -1);
        std::
        list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
        push_back(plVar12,pRVar5);
        uVar14 = *(undefined8 *)(this + 0x40);
        pRVar5 = (RtWeakPtr *)FUN_0490e7b8(uVar14,uVar13);
      }
      if (*(int *)(pRVar5 + 0xc) != 0) {
        plVar12 = (list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                   *)FUN_0490e7c4(local_20[0],*(int *)(pRVar5 + 0xc));
        std::
        list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
        push_back(plVar12,pRVar5);
        uVar14 = *(undefined8 *)(this + 0x40);
      }
      uVar13 = uVar13 + 1;
      uVar6 = FUN_0490e788(uVar14,*(undefined8 *)(this + 0x48));
    } while (uVar13 < uVar6);
  }
  std::
  vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
  ::resize((vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
            *)(this + 0x58),uVar15);
  if (0 < iVar1) {
    lVar4 = 1;
    while( true ) {
      lVar3 = lVar4 + -1;
      puVar7 = (undefined8 *)FUN_0490e7c4(local_38[0],lVar3);
      local_48 = FUN_0490ef68(*puVar7);
      while( true ) {
        ppTVar8 = (TaskResource **)FUN_0490e7c4(local_38[0],lVar3);
        local_40 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             (ppTVar8);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
        if (!bVar2) break;
        plVar12 = (list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                   *)FUN_0490e7c4(*(undefined8 *)(this + 0x58),lVar3);
        pRVar5 = (RtWeakPtr *)
                 std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                           ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_48);
        std::
        list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
        push_back(plVar12,pRVar5);
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_48);
      }
      if (iVar1 <= (int)lVar4) break;
      puVar7 = (undefined8 *)FUN_0490e7c4(local_20[0],lVar4);
      local_50 = FUN_0490ef68(*puVar7);
      while( true ) {
        ppTVar8 = (TaskResource **)FUN_0490e7c4(local_20[0],lVar4);
        local_40 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             (ppTVar8);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_40);
        if (!bVar2) break;
        puVar7 = (undefined8 *)FUN_0490e7c4(*(undefined8 *)(this + 0x58),lVar3);
        local_48 = FUN_0490ef68(*puVar7);
        while( true ) {
          pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_48);
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
          pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_50);
          lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
          bVar2 = std::operator!=((string *)(lVar10 + 8),(string *)(lVar11 + 8));
          if (!bVar2) break;
          ppTVar8 = (TaskResource **)FUN_0490e7c4(*(undefined8 *)(this + 0x58),lVar3);
          local_40 = std::
                     __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                               (ppTVar8);
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
          if (!bVar2) break;
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)&local_48);
        }
        ppTVar8 = (TaskResource **)FUN_0490e7c4(*(undefined8 *)(this + 0x58),lVar3);
        local_40 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             (ppTVar8);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
        if (bVar2) {
          eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                    ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_40,
                     (TextureInfo ***)&local_48);
          FUN_0490f0d8(local_40);
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_50);
      }
      puVar7 = (undefined8 *)FUN_0490e7c4(*(undefined8 *)(this + 0x58),lVar3);
      local_48 = FUN_0490ef68(*puVar7);
      while( true ) {
        ppTVar8 = (TaskResource **)FUN_0490e7c4(*(undefined8 *)(this + 0x58),lVar3);
        local_40 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             (ppTVar8);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
        if (!bVar2) break;
        plVar12 = (list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                   *)FUN_0490e7c4(*(undefined8 *)(this + 0x58),lVar4);
        pRVar5 = (RtWeakPtr *)
                 std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                           ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_48);
        std::
        list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
        push_back(plVar12,pRVar5);
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_48);
      }
      lVar4 = lVar4 + 1;
    }
  }
  std::
  vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
  ::~vector((vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
             *)local_20);
  std::
  vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
  ::~vector((vector<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::list<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
             *)local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


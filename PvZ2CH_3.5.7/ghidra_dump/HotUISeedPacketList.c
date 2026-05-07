// Class: HotUISeedPacketList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISeedPacketList::StaticClassInit() */

void HotUISeedPacketList::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUISeedPacketList");
    (*pcVar2)(plVar1,asStack_10,FUN_0364d268,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUISeedPacketList::StaticGetClass() */

long * HotUISeedPacketList::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUISeedPacketList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUISeedPacketList::HotUISeedPacketList() */

void __thiscall HotUISeedPacketList::HotUISeedPacketList(HotUISeedPacketList *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_066716e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  this[0x228] = (HotUISeedPacketList)0x0;
  return;
}


/* HotUISeedPacketList::StaticNew() */

HotUISeedPacketList * HotUISeedPacketList::StaticNew(void)

{
  HotUISeedPacketList *this;
  
  this = ::operator_new(0x230);
  HotUISeedPacketList(this);
  return this;
}


/* HotUISeedPacketList::~HotUISeedPacketList() */

void __thiscall HotUISeedPacketList::~HotUISeedPacketList(HotUISeedPacketList *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_066716e0;
  std::vector<HotUISeedPacketList::SeedPacketRow,std::allocator<HotUISeedPacketList::SeedPacketRow>>
  ::~vector((vector<HotUISeedPacketList::SeedPacketRow,std::allocator<HotUISeedPacketList::SeedPacketRow>>
             *)(this + 0x210));
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUISeedPacketList::~HotUISeedPacketList() */

void __thiscall HotUISeedPacketList::~HotUISeedPacketList(HotUISeedPacketList *this)

{
  ~HotUISeedPacketList(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISeedPacketList::ensureRowsBuilt() */

void __thiscall HotUISeedPacketList::ensureRowsBuilt(HotUISeedPacketList *this)

{
  bool bVar1;
  undefined8 *puVar2;
  long extraout_x0;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  HotUISeedPacket *local_30;
  PlantWarsStarRewardData local_28 [8];
  vector<HotUISeedPacket*,std::allocator<HotUISeedPacket*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x228] == (HotUISeedPacketList)0x0) {
    local_50 = FUN_0364d8a8(*(undefined8 *)(this + 8));
    local_48 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_48);
    if (bVar1) {
      do {
        puVar2 = (undefined8 *)
                 std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                           ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_50);
        if (((RtObject *)*puVar2 != (RtObject *)0x0) &&
           (bVar1 = Sexy::RtObject::IsA<HotUIHorizontalList>((RtObject *)*puVar2), bVar1)) {
          nop();
          PlantWarsStarRewardData::PlantWarsStarRewardData(local_28);
          local_40 = FUN_0364d8a8(*(TaskResource **)(extraout_x0 + 8));
          local_38 = std::
                     __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                               ((TaskResource **)(extraout_x0 + 8));
          while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_40,(rbtree_iterator *)&local_38
                                          ), bVar1) {
            puVar2 = (undefined8 *)
                     std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_40);
            if (((RtObject *)*puVar2 != (RtObject *)0x0) &&
               (bVar1 = Sexy::RtObject::IsA<HotUISeedPacket>((RtObject *)*puVar2), bVar1)) {
              nop();
              std::vector<HotUISeedPacket*,std::allocator<HotUISeedPacket*>>::push_back
                        (avStack_20,&local_30);
            }
            std::_List_const_iterator<Sexy::FontLayer>::operator++
                      ((_List_const_iterator<Sexy::FontLayer> *)&local_40);
          }
          std::
          vector<HotUISeedPacketList::SeedPacketRow,std::allocator<HotUISeedPacketList::SeedPacketRow>>
          ::push_back((vector<HotUISeedPacketList::SeedPacketRow,std::allocator<HotUISeedPacketList::SeedPacketRow>>
                       *)(this + 0x210),(SeedPacketRow *)local_28);
          SeedPacketRow::~SeedPacketRow((SeedPacketRow *)local_28);
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_50);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_50,(rbtree_iterator *)&local_48);
      } while (bVar1);
    }
    this[0x228] = (HotUISeedPacketList)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUISeedPacketList::SetSeedTypes(std::vector<HotUISeedPacketConfig,
   std::allocator<HotUISeedPacketConfig> > const&, int) */

void __thiscall
HotUISeedPacketList::SetSeedTypes(HotUISeedPacketList *this,vector *param_1,int param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  HotUISeedPacketConfig *pHVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar15 = 0;
  local_8 = ___stack_chk_guard;
  iVar14 = 0;
  ensureRowsBuilt(this);
  uVar13 = *(undefined8 *)(this + 0x210);
  uVar11 = 0;
  iVar8 = 0;
  uVar2 = FUN_0364c5c4(uVar13,*(undefined8 *)(this + 0x218));
  while (uVar11 < uVar2) {
    while( true ) {
      uVar9 = (ulong)iVar8;
      lVar3 = FUN_0364c5d0(uVar13,uVar11);
      uVar12 = *(undefined8 *)(lVar3 + 8);
      uVar4 = FUN_0364c5d8(uVar12,*(undefined8 *)(lVar3 + 0x10));
      if (uVar9 < uVar4) break;
      iVar14 = iVar14 + 1;
      iVar8 = 0;
      uVar11 = (ulong)iVar14;
      if (uVar2 <= uVar11) goto LAB_0364e718;
    }
    uVar4 = (ulong)iVar15;
    uVar13 = *(undefined8 *)param_1;
    uVar2 = FUN_0364c5e4(uVar13,*(undefined8 *)(param_1 + 8));
    if ((uVar4 < uVar2) && (iVar8 < param_2 || param_2 < 1)) {
      iVar15 = iVar15 + 1;
      pHVar6 = (HotUISeedPacketConfig *)FUN_0364c600(uVar13,uVar4);
      puVar5 = (undefined8 *)FUN_0364c5f8(uVar12,uVar9);
      HotUISeedPacket::SetPacketConfig((HotUISeedPacket *)*puVar5,pHVar6);
      puVar5 = (undefined8 *)FUN_0364c5f8(*(undefined8 *)(lVar3 + 8),uVar9);
      plVar7 = (long *)*puVar5;
      pcVar10 = *(code **)(*plVar7 + 0x158);
      bVar1 = std::operator!=((string *)pHVar6,"");
      (*pcVar10)(plVar7,bVar1);
    }
    else {
      puVar5 = (undefined8 *)FUN_0364c5f8(uVar12,uVar9);
      (**(code **)(*(long *)*puVar5 + 0x158))((long *)*puVar5,0);
    }
    uVar13 = *(undefined8 *)(this + 0x210);
    iVar8 = iVar8 + 1;
    uVar2 = FUN_0364c5c4(uVar13,*(undefined8 *)(this + 0x218));
  }
LAB_0364e718:
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x210));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x210));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    HotUIWidget::FinalizeLayout((HotUIWidget *)*puVar5);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


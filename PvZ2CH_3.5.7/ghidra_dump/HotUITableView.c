// Class: HotUITableView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITableView::StaticClassInit() */

void HotUITableView::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUITableView");
    (*pcVar2)(plVar1,asStack_10,FUN_0364f890,0x260,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITableView::StaticGetClass() */

long * HotUITableView::StaticGetClass(void)

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
  uVar2 = HotUILayoutList::StaticGetClass();
  (*pcVar3)(plVar1,"HotUITableView",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITableView::SetOverrideListenerForCells(Sexy::ButtonListener*) */

void __thiscall
HotUITableView::SetOverrideListenerForCells(HotUITableView *this,ButtonListener *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  HotUIButton *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x240));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x240));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (HotUIButton *)(**(code **)(*(long *)*puVar2 + 0x358))((long *)*puVar2);
    HotUIButton::SetListener(this_00,param_1);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITableView::removeCells() */

void __thiscall HotUITableView::removeCells(HotUITableView *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x240);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar3 = (**(code **)(*(long *)*plVar2 + 0x358))((long *)*plVar2);
    (**(code **)(*(long *)this + 0x68))(this,uVar3);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 0x18))();
      *plVar2 = 0;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<HotUIAdaptorTableViewCell*,std::allocator<HotUIAdaptorTableViewCell*>>::clear
            ((vector<HotUIAdaptorTableViewCell*,std::allocator<HotUIAdaptorTableViewCell*>> *)
             this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUITableView::updateHeightToFitCells() */

void __thiscall HotUITableView::updateHeightToFitCells(HotUITableView *this)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  HotUIZPSMeterProperties *pHVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  if (*(int *)(this + 600) < 0) {
    *(undefined4 *)(this + 600) = *(undefined4 *)(this + 0x54);
  }
  lVar4 = FUN_0364f654(*(undefined8 *)(this + 0x210),*(undefined8 *)(this + 0x218));
  if (lVar4 != 0) {
    lVar4 = HotUIWidget::GetPadding((HotUIWidget *)this);
    uVar10 = *(undefined8 *)(this + 0x210);
    iVar1 = *(int *)(this + 0x50);
    fVar12 = *(float *)(lVar4 + 0xc);
    fVar11 = *(float *)(lVar4 + 0x2c);
    plVar5 = (long *)FUN_0364f758(uVar10);
    iVar2 = *(int *)(*plVar5 + 0x54);
    iVar9 = (int)((((float)iVar1 - fVar12) - fVar11) / (float)*(int *)(*plVar5 + 0x50));
    uVar6 = FUN_0364f654(uVar10,*(undefined8 *)(this + 0x218));
    uVar8 = (ulong)iVar9;
    iVar1 = 0;
    if (iVar9 != 0) {
      iVar1 = (int)uVar6 / iVar9;
    }
    uVar3 = 0;
    if (uVar8 != 0) {
      uVar3 = uVar6 / uVar8;
    }
    if (uVar6 != uVar3 * uVar8) {
      iVar1 = iVar1 + 1;
    }
    pHVar7 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
    (**(code **)(*(long *)this + 0x198))
              (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),
               *(undefined4 *)(this + 0x50),
               (int)((float)(iVar1 + -1) * *(float *)(pHVar7 + 0x134) + (float)iVar2 * (float)iVar1)
              );
    return;
  }
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x4c),
             *(undefined4 *)(this + 0x50),*(undefined4 *)(this + 600));
  return;
}


/* HotUITableView::onLayoutFinalized() */

void __thiscall HotUITableView::onLayoutFinalized(HotUITableView *this)

{
  updateHeightToFitCells(this);
  HotUILayoutList::onLayoutFinalized((HotUILayoutList *)this);
  return;
}


/* HotUITableView::HotUITableView() */

void __thiscall HotUITableView::HotUITableView(HotUITableView *this)

{
  HotUILayoutList::HotUILayoutList((HotUILayoutList *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_06671e80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x228));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x240));
  *(undefined4 *)(this + 600) = 0xffffffff;
  return;
}


/* HotUITableView::StaticNew() */

HotUITableView * HotUITableView::StaticNew(void)

{
  HotUITableView *this;
  
  this = ::operator_new(0x260);
  HotUITableView(this);
  return this;
}


/* HotUITableView::~HotUITableView() */

void __thiscall HotUITableView::~HotUITableView(HotUITableView *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06671e80;
  removeCells(this);
  std::vector<HotUIAdaptorTableViewCell*,std::allocator<HotUIAdaptorTableViewCell*>>::~vector
            ((vector<HotUIAdaptorTableViewCell*,std::allocator<HotUIAdaptorTableViewCell*>> *)
             (this + 0x240));
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::~vector
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x228));
  HotUILayoutList::~HotUILayoutList((HotUILayoutList *)this);
  return;
}


/* HotUITableView::~HotUITableView() */

void __thiscall HotUITableView::~HotUITableView(HotUITableView *this)

{
  ~HotUITableView(this);
  AK::FreeHook(this);
  return;
}


/* HotUITableView::SetDataSource(std::vector<Sexy::RtId, std::allocator<Sexy::RtId> >) */

void __thiscall HotUITableView::SetDataSource(HotUITableView *this,vector *param_2)

{
  std::vector<Sexy::RtId,std::allocator<Sexy::RtId>>::operator=
            ((vector<Sexy::RtId,std::allocator<Sexy::RtId>> *)(this + 0x228),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUITableView::CreateCells(Sexy::RtClass const*) */

void __thiscall HotUITableView::CreateCells(HotUITableView *this,RtClass *param_1)

{
  bool bVar1;
  RtId *pRVar2;
  HotUIAdaptor *extraout_x0;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_28;
  undefined8 local_20;
  HotUIAdaptor *local_18;
  RtId aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  removeCells(this);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x228));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x228));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    pRVar2 = (RtId *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    FUN_0364f630(*(undefined8 *)(param_1 + 0x18));
    nop();
    pcVar4 = *(code **)(*(long *)extraout_x0 + 0x350);
    local_18 = extraout_x0;
    Sexy::RtId::RtId(aRStack_10,pRVar2);
    (*pcVar4)(extraout_x0,aRStack_10);
    Sexy::RtId::~RtId(aRStack_10);
    HotUIAdaptor::LoadWidget(local_18);
    uVar3 = (**(code **)(*(long *)local_18 + 0x358))(local_18);
    (**(code **)(*(long *)this + 0x60))(this,uVar3);
    std::vector<HotUIAdaptorTableViewCell*,std::allocator<HotUIAdaptorTableViewCell*>>::push_back
              ((vector<HotUIAdaptorTableViewCell*,std::allocator<HotUIAdaptorTableViewCell*>> *)
               (this + 0x240),(HotUIAdaptorTableViewCell **)&local_18);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  HotUIWidget::FinalizeLayout((HotUIWidget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: HotUILayoutList


/* HotUILayoutList::HotUILayoutList() */

void __thiscall HotUILayoutList::HotUILayoutList(HotUILayoutList *this)

{
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0666f3e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  return;
}


/* HotUILayoutList::~HotUILayoutList() */

void __thiscall HotUILayoutList::~HotUILayoutList(HotUILayoutList *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666f3e0;
  std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>::~vector
            ((vector<HotUIWidget*,std::allocator<HotUIWidget*>> *)(this + 0x210));
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUILayoutList::~HotUILayoutList() */

void __thiscall HotUILayoutList::~HotUILayoutList(HotUILayoutList *this)

{
  ~HotUILayoutList(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUILayoutList::StaticClassInit() */

void HotUILayoutList::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUILayoutList");
    (*pcVar2)(plVar1,asStack_10,FUN_03644c8c,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUILayoutList::StaticGetClass() */

long * HotUILayoutList::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUILayoutList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUILayoutList::calculateGapsBetweenChildren(std::vector<HotUIWidget*,
   std::allocator<HotUIWidget*> >&, int, int) const */

void __thiscall
HotUILayoutList::calculateGapsBetweenChildren
          (HotUILayoutList *this,vector *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  float *pfVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  int local_18;
  float local_14;
  float local_10;
  undefined4 uStack_c;
  long local_8;
  
  uVar11 = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_14 = _FUN_03644fc4;
  lVar3 = FUN_036448c8(uVar11,*(undefined8 *)(param_1 + 8));
  lVar7 = 0;
  iVar9 = 0;
  iVar10 = 0;
  iVar8 = 0;
  iVar12 = 0;
  iVar1 = 0;
  iVar2 = 0;
  if (lVar3 != 0) {
    do {
      iVar9 = iVar2;
      iVar10 = iVar1;
      plVar4 = (long *)FUN_036448d4(uVar11,lVar7);
      iVar2 = *(int *)(*plVar4 + 0x50);
      iVar1 = iVar2 + iVar12;
      if (iVar1 < param_2) {
        iVar8 = iVar8 + 1;
        piVar5 = eastl::max_alt<int>((int *)(*plVar4 + 0x54),&local_18);
        local_18 = *piVar5;
        iVar12 = iVar1;
        if ((param_2 <= iVar2 + iVar1) || (lVar3 + -1 == lVar7)) goto LAB_03644f74;
      }
      else {
LAB_03644f74:
        iVar10 = iVar10 + local_18;
        local_10 = (float)iVar8;
        iVar8 = 0;
        iVar9 = iVar9 + 1;
        local_10 = (float)(param_2 - iVar12) / local_10;
        pfVar6 = eastl::min_alt<float>(&local_14,&local_10);
        local_14 = *pfVar6;
        local_18 = 0;
        iVar12 = 0;
      }
      lVar7 = lVar7 + 1;
      iVar1 = iVar10;
      iVar2 = iVar9;
    } while (lVar7 != lVar3);
  }
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_10,local_14,(float)(param_3 - iVar10) / (float)(iVar9 + -1));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10,uStack_c);
  }
  return;
}


/* HotUILayoutList::StaticNew() */

HotUILayoutList * HotUILayoutList::StaticNew(void)

{
  HotUILayoutList *this;
  
  this = ::operator_new(0x228);
  HotUILayoutList(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUILayoutList::RemoveWidget(Sexy::Widget*) */

void __thiscall HotUILayoutList::RemoveWidget(HotUILayoutList *this,Widget *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  HotUIWidget *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIWidget::RemoveWidget((HotUIWidget *)this,param_1);
  if (param_1 != (Widget *)0x0) {
    local_20 = Sexy::RtObject::Cast<HotUIWidget>((RtObject *)param_1);
    if (local_20 != (HotUIWidget *)0x0) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x210);
      uVar2 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<HotUIWidget**,std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>>,HotUIWidget*>
                           (uVar2,uVar3,&local_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (bVar1) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>::erase
                  ((vector<HotUIWidget*,std::allocator<HotUIWidget*>> *)this_00,local_10);
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
/* HotUILayoutList::AddWidget(Sexy::Widget*) */

void __thiscall HotUILayoutList::AddWidget(HotUILayoutList *this,Widget *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  HotUIWidget *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIWidget::AddWidget((HotUIWidget *)this,param_1);
  if (param_1 != (Widget *)0x0) {
    local_20 = Sexy::RtObject::Cast<HotUIWidget>((RtObject *)param_1);
    if (local_20 != (HotUIWidget *)0x0) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x210);
      uVar2 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<HotUIWidget**,std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>>,HotUIWidget*>
                           (uVar2,uVar3,&local_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (bVar1) {
        std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>::push_back
                  ((vector<HotUIWidget*,std::allocator<HotUIWidget*>> *)this_00,&local_20);
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
/* HotUILayoutList::performLayout() */

void __thiscall HotUILayoutList::performLayout(HotUILayoutList *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  HotUIWidget *local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = HotUIWidget::GetPadding((HotUIWidget *)this);
  iVar1 = *(int *)(this + 0x54);
  fVar9 = *(float *)(lVar3 + 0x1c);
  fVar8 = *(float *)(lVar3 + 0x3c);
  fVar7 = ((float)*(int *)(this + 0x50) - *(float *)(lVar3 + 0xc)) - *(float *)(lVar3 + 0x2c);
  iVar6 = (int)fVar7;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x210));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x210));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    local_38 = (HotUIWidget *)*plVar4;
    if (local_38[0x6c] != (HotUIWidget)0x0) {
      std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>::push_back
                ((vector<HotUIWidget*,std::allocator<HotUIWidget*>> *)avStack_20,&local_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  fVar9 = (float)calculateGapsBetweenChildren
                           (this,(vector *)avStack_20,iVar6,(int)(((float)iVar1 - fVar9) - fVar8));
  fVar10 = *(float *)(lVar3 + 0x1c);
  fVar11 = *(float *)(lVar3 + 0xc) + fVar9 * 0.5;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar8 = fVar11;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    plVar5 = (long *)*plVar4;
    lVar3 = plVar5[10];
    if ((float)iVar6 <= fVar8) {
      fVar10 = fVar10 + (float)*(int *)((long)plVar5 + 0x54) + fVar7;
      fVar8 = fVar11;
    }
    (**(code **)(*plVar5 + 0x198))(plVar5,(int)fVar8,(int)fVar10,(int)lVar3);
    HotUIWidget::FinalizeLayout((HotUIWidget *)*plVar4);
    fVar8 = fVar8 + (float)(int)lVar3 + fVar9;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>::~vector
            ((vector<HotUIWidget*,std::allocator<HotUIWidget*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUILayoutList::onLayoutFinalized() */

void __thiscall HotUILayoutList::onLayoutFinalized(HotUILayoutList *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  HotUIWidget *pHStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar3 = HotUIWidget::GetPadding((HotUIWidget *)this);
  iVar1 = *(int *)(this + 0x54);
  fVar9 = *(float *)(lVar3 + 0x1c);
  fVar8 = *(float *)(lVar3 + 0x3c);
  fVar7 = ((float)*(int *)(this + 0x50) - *(float *)(lVar3 + 0xc)) - *(float *)(lVar3 + 0x2c);
  iVar6 = (int)fVar7;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uStack_30 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x210));
  uStack_28 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x210));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_30,(__normal_iterator *)&uStack_28), bVar2)
  {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_30);
    pHStack_38 = (HotUIWidget *)*plVar4;
    if (pHStack_38[0x6c] != (HotUIWidget)0x0) {
      std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>::push_back
                ((vector<HotUIWidget*,std::allocator<HotUIWidget*>> *)avStack_20,&pHStack_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_30);
  }
  fVar9 = (float)calculateGapsBetweenChildren
                           (this,(vector *)avStack_20,iVar6,(int)(((float)iVar1 - fVar9) - fVar8));
  fVar10 = *(float *)(lVar3 + 0x1c);
  fVar11 = *(float *)(lVar3 + 0xc) + fVar9 * 0.5;
  uStack_30 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  uStack_28 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
  fVar8 = fVar11;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_30,(__normal_iterator *)&uStack_28), bVar2)
  {
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_30);
    plVar5 = (long *)*plVar4;
    lVar3 = plVar5[10];
    if ((float)iVar6 <= fVar8) {
      fVar10 = fVar10 + (float)*(int *)((long)plVar5 + 0x54) + fVar7;
      fVar8 = fVar11;
    }
    (**(code **)(*plVar5 + 0x198))(plVar5,(int)fVar8,(int)fVar10,(int)lVar3);
    HotUIWidget::FinalizeLayout((HotUIWidget *)*plVar4);
    fVar8 = fVar8 + (float)(int)lVar3 + fVar9;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_30);
  }
  std::vector<HotUIWidget*,std::allocator<HotUIWidget*>>::~vector
            ((vector<HotUIWidget*,std::allocator<HotUIWidget*>> *)avStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


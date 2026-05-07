// Class: UI::Selection


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Selection::draw(Sexy::Graphics*, Sexy::Color const&, Sexy::Color const&) */

void __thiscall UI::Selection::draw(Selection *this,Graphics *param_1,Color *param_2,Color *param_3)

{
  Insets *pIVar1;
  WndBox *this_00;
  ulong uVar2;
  ulong uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (uVar3 = 0; uVar2 = FUN_04b6e3e4(*(undefined8 *)this,*(undefined8 *)(this + 8)), uVar3 < uVar2
      ; uVar3 = uVar3 + 1) {
    pIVar1 = (Insets *)param_2;
    if (uVar3 != 0) {
      pIVar1 = (Insets *)param_3;
    }
    Sexy::Insets::Insets(aIStack_18,pIVar1);
    this_00 = (WndBox *)FUN_04b6e404(*(undefined8 *)this,uVar3);
    WndBox::draw(this_00,param_1,(Color *)aIStack_18,uVar3 == 0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UI::Selection::reset() */

void __thiscall UI::Selection::reset(Selection *this)

{
  WndBox *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)this;
    uVar1 = FUN_04b6e3e4(uVar3,*(undefined8 *)(this + 8));
    if (uVar1 <= uVar2) break;
    this_00 = (WndBox *)FUN_04b6e404(uVar3,uVar2);
    WndBox::reset(this_00);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* UI::Selection::isDraging() const */

bool __thiscall UI::Selection::isDraging(Selection *this)

{
  return *(int *)(this + 0x20) - 1U < 0xb;
}


/* UI::Selection::endDrag() */

void __thiscall UI::Selection::endDrag(Selection *this)

{
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* UI::Selection::offsetArea(UI::Rect<float> const&, Sexy::Widget*) */

Selection * __thiscall UI::Selection::offsetArea(Selection *this,Rect *param_1,Widget *param_2)

{
  float *extraout_x0;
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 != (Widget *)0x0) {
    nop();
    pfVar1 = (float *)EATextSquish::ColorSet::GetPoints((ColorSet *)param_1);
    fVar2 = (float)FUN_04b6e414(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 8));
    fVar3 = (float)FUN_04b6e41c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
    this = (Selection *)
           (**(code **)(*(long *)param_2 + 0x198))
                     (param_2,(int)((float)*(int *)(param_2 + 0x48) + *extraout_x0),
                      (int)((float)*(int *)(param_2 + 0x4c) + *pfVar1),
                      (int)(fVar2 + (float)*(int *)(param_2 + 0x50)),
                      (int)(fVar3 + (float)*(int *)(param_2 + 0x54)));
  }
  return this;
}


/* UI::Selection::offsetArea(UI::Rect<float> const&) */

void __thiscall UI::Selection::offsetArea(Selection *this,Rect *param_1)

{
  undefined8 *puVar1;
  Widget *pWVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)this;
    uVar3 = FUN_04b6e3e4(uVar5,*(undefined8 *)(this + 8));
    if (uVar3 <= uVar4) break;
    puVar1 = (undefined8 *)FUN_04b6e404(uVar5,uVar4);
    pWVar2 = (Widget *)FUN_04b6e3e0(*puVar1);
    offsetArea(this,param_1,pWVar2);
    uVar4 = uVar4 + 1;
  }
  reset(this);
  return;
}


/* UI::Selection::Selection() */

void __thiscall UI::Selection::Selection(Selection *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x18),0.0,0.0);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* UI::Selection::getSelectWindow() const */

undefined8 __thiscall UI::Selection::getSelectWindow(Selection *this)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  cVar1 = std::vector<UI::WndBox,std::allocator<UI::WndBox>>::empty
                    ((vector<UI::WndBox,std::allocator<UI::WndBox>> *)this);
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)FUN_04b6e4f4(*(undefined8 *)this);
    uVar3 = FUN_04b6e3e0(*puVar2);
    return uVar3;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Selection::drawParent(Sexy::Graphics*, Sexy::Color const&) */

void __thiscall UI::Selection::drawParent(Selection *this,Graphics *param_1,Color *param_2)

{
  long lVar1;
  long *plVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = getSelectWindow(this);
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x20), plVar2 != (long *)0x0)) {
    Sexy::Graphics::SetColor(param_1,param_2);
    (**(code **)(*plVar2 + 0xd0))(&local_10,plVar2);
    Sexy::Graphics::DrawRect(param_1,local_10,local_c,(int)plVar2[10],*(int *)((long)plVar2 + 0x54))
    ;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UI::Selection::beginDrag(int, int, int) */

void __thiscall UI::Selection::beginDrag(Selection *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = getSelectWindow(this);
  if (lVar1 != 0) {
    *(int *)(this + 0x20) = param_3;
    *(float *)(this + 0x18) = (float)param_1;
    *(float *)(this + 0x1c) = (float)param_2;
    isDraging(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Selection::alignArea(UI::Selection::AlignType, float) */

void __thiscall UI::Selection::alignArea(float param_1,Selection *this,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  Widget *pWVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<UI::WndBox,std::allocator<UI::WndBox>>::empty
                    ((vector<UI::WndBox,std::allocator<UI::WndBox>> *)this);
  if (cVar1 == '\0') {
    lVar2 = getSelectWindow(this);
    local_34 = (float)*(int *)(lVar2 + 0x48);
    local_30 = (float)*(int *)(lVar2 + 0x4c);
    local_2c = (float)(*(int *)(lVar2 + 0x48) + *(int *)(lVar2 + 0x50));
    local_18 = (float)(*(int *)(lVar2 + 0x4c) + *(int *)(lVar2 + 0x54));
    Rect<float>::Rect((Rect<float> *)&local_28,&local_34,&local_30,&local_2c,&local_18);
    switch(param_3) {
    case 0:
      uVar8 = 1;
      while( true ) {
        uVar9 = *(undefined8 *)this;
        uVar6 = FUN_04b6e3e4(uVar9,*(undefined8 *)(this + 8));
        if (uVar6 <= uVar8) break;
        puVar4 = (undefined8 *)FUN_04b6e404(uVar9,uVar8);
        pWVar3 = (Widget *)FUN_04b6e3e0(*puVar4);
        local_38 = 0.0;
        local_34 = 0.0;
        local_30 = 0.0;
        local_2c = 0.0;
        Rect<float>::Rect((Rect<float> *)&local_18,&local_38,&local_34,&local_30,&local_2c);
        local_18 = local_28 - (float)*(int *)(pWVar3 + 0x48);
        local_10 = local_18;
        offsetArea(this,(Rect *)&local_18,pWVar3);
        uVar8 = uVar8 + 1;
      }
      break;
    case 1:
      uVar8 = 1;
      while( true ) {
        uVar9 = *(undefined8 *)this;
        uVar6 = FUN_04b6e3e4(uVar9,*(undefined8 *)(this + 8));
        if (uVar6 <= uVar8) break;
        puVar4 = (undefined8 *)FUN_04b6e404(uVar9,uVar8);
        pWVar3 = (Widget *)FUN_04b6e3e0(*puVar4);
        local_38 = 0.0;
        local_34 = 0.0;
        local_30 = 0.0;
        local_2c = 0.0;
        Rect<float>::Rect((Rect<float> *)&local_18,&local_38,&local_34,&local_30,&local_2c);
        local_18 = local_20 - (float)(*(int *)(pWVar3 + 0x48) + *(int *)(pWVar3 + 0x50));
        local_10 = local_18;
        offsetArea(this,(Rect *)&local_18,pWVar3);
        uVar8 = uVar8 + 1;
      }
      break;
    case 2:
      uVar8 = 1;
      while( true ) {
        uVar9 = *(undefined8 *)this;
        uVar6 = FUN_04b6e3e4(uVar9,*(undefined8 *)(this + 8));
        if (uVar6 <= uVar8) break;
        puVar4 = (undefined8 *)FUN_04b6e404(uVar9,uVar8);
        pWVar3 = (Widget *)FUN_04b6e3e0(*puVar4);
        local_38 = 0.0;
        local_34 = 0.0;
        local_30 = 0.0;
        local_2c = 0.0;
        Rect<float>::Rect((Rect<float> *)&local_18,&local_38,&local_34,&local_30,&local_2c);
        local_14 = local_24 - (float)*(int *)(pWVar3 + 0x4c);
        local_c = local_14;
        offsetArea(this,(Rect *)&local_18,pWVar3);
        uVar8 = uVar8 + 1;
      }
      break;
    case 3:
      uVar8 = 1;
      while( true ) {
        uVar9 = *(undefined8 *)this;
        uVar6 = FUN_04b6e3e4(uVar9,*(undefined8 *)(this + 8));
        if (uVar6 <= uVar8) break;
        puVar4 = (undefined8 *)FUN_04b6e404(uVar9,uVar8);
        pWVar3 = (Widget *)FUN_04b6e3e0(*puVar4);
        local_38 = 0.0;
        local_34 = 0.0;
        local_30 = 0.0;
        local_2c = 0.0;
        Rect<float>::Rect((Rect<float> *)&local_18,&local_38,&local_34,&local_30,&local_2c);
        local_14 = local_24 - (float)(*(int *)(pWVar3 + 0x4c) + *(int *)(pWVar3 + 0x54));
        local_c = local_14;
        offsetArea(this,(Rect *)&local_18,pWVar3);
        uVar8 = uVar8 + 1;
      }
      break;
    case 4:
      uVar8 = 1;
      while( true ) {
        uVar9 = *(undefined8 *)this;
        uVar6 = FUN_04b6e3e4(uVar9,*(undefined8 *)(this + 8));
        if (uVar6 <= uVar8) break;
        puVar4 = (undefined8 *)FUN_04b6e404(uVar9,uVar8);
        pWVar3 = (Widget *)FUN_04b6e3e0(*puVar4);
        local_38 = 0.0;
        local_34 = 0.0;
        local_30 = 0.0;
        local_2c = 0.0;
        Rect<float>::Rect((Rect<float> *)&local_18,&local_38,&local_34,&local_30,&local_2c);
        local_18 = ((local_20 + local_28) * 0.5 - (float)*(int *)(pWVar3 + 0x48)) -
                   (float)*(int *)(pWVar3 + 0x50) * 0.5;
        local_10 = local_18;
        offsetArea(this,(Rect *)&local_18,pWVar3);
        uVar8 = uVar8 + 1;
      }
      break;
    case 5:
      uVar8 = 1;
      while( true ) {
        uVar9 = *(undefined8 *)this;
        uVar6 = FUN_04b6e3e4(uVar9,*(undefined8 *)(this + 8));
        if (uVar6 <= uVar8) break;
        puVar4 = (undefined8 *)FUN_04b6e404(uVar9,uVar8);
        pWVar3 = (Widget *)FUN_04b6e3e0(*puVar4);
        local_38 = 0.0;
        local_34 = 0.0;
        local_30 = 0.0;
        local_2c = 0.0;
        Rect<float>::Rect((Rect<float> *)&local_18,&local_38,&local_34,&local_30,&local_2c);
        local_14 = ((local_1c + local_24) * 0.5 - (float)*(int *)(pWVar3 + 0x4c)) -
                   (float)*(int *)(pWVar3 + 0x54) * 0.5;
        local_c = local_14;
        offsetArea(this,(Rect *)&local_18,pWVar3);
        uVar8 = uVar8 + 1;
      }
      break;
    case 6:
      uVar8 = 1;
      while( true ) {
        uVar9 = *(undefined8 *)this;
        uVar6 = FUN_04b6e3e4(uVar9,*(undefined8 *)(this + 8));
        if (uVar6 <= uVar8) break;
        puVar4 = (undefined8 *)FUN_04b6e404(uVar9,uVar8);
        plVar5 = (long *)FUN_04b6e3e0(*puVar4);
        (**(code **)(*plVar5 + 0x198))
                  (plVar5,(int)plVar5[9],*(undefined4 *)((long)plVar5 + 0x4c),
                   *(undefined4 *)(lVar2 + 0x50),*(undefined4 *)((long)plVar5 + 0x54));
        uVar8 = uVar8 + 1;
      }
      break;
    case 7:
      uVar8 = 1;
      while( true ) {
        uVar9 = *(undefined8 *)this;
        uVar6 = FUN_04b6e3e4(uVar9,*(undefined8 *)(this + 8));
        if (uVar6 <= uVar8) break;
        puVar4 = (undefined8 *)FUN_04b6e404(uVar9,uVar8);
        plVar5 = (long *)FUN_04b6e3e0(*puVar4);
        (**(code **)(*plVar5 + 0x198))
                  (plVar5,(int)plVar5[9],*(undefined4 *)((long)plVar5 + 0x4c),(int)plVar5[10],
                   *(undefined4 *)(lVar2 + 0x54));
        uVar8 = uVar8 + 1;
      }
      break;
    case 8:
      iVar7 = *(int *)(lVar2 + 0x48);
      uVar8 = 1;
      while( true ) {
        uVar9 = *(undefined8 *)this;
        uVar6 = FUN_04b6e3e4(uVar9,*(undefined8 *)(this + 8));
        if (uVar6 <= uVar8) break;
        iVar7 = (int)(param_1 + (float)iVar7);
        puVar4 = (undefined8 *)FUN_04b6e404(uVar9,uVar8);
        plVar5 = (long *)FUN_04b6e3e0(*puVar4);
        (**(code **)(*plVar5 + 0x198))
                  (plVar5,iVar7,*(undefined4 *)((long)plVar5 + 0x4c),(int)plVar5[10],
                   *(undefined4 *)((long)plVar5 + 0x54));
        uVar8 = uVar8 + 1;
      }
      break;
    case 9:
      iVar7 = *(int *)(lVar2 + 0x4c);
      uVar8 = 1;
      while( true ) {
        uVar9 = *(undefined8 *)this;
        uVar6 = FUN_04b6e3e4(uVar9,*(undefined8 *)(this + 8));
        if (uVar6 <= uVar8) break;
        iVar7 = (int)(param_1 + (float)iVar7);
        puVar4 = (undefined8 *)FUN_04b6e404(uVar9,uVar8);
        plVar5 = (long *)FUN_04b6e3e0(*puVar4);
        (**(code **)(*plVar5 + 0x198))
                  (plVar5,(int)plVar5[9],iVar7,(int)plVar5[10],*(undefined4 *)((long)plVar5 + 0x54))
        ;
        uVar8 = uVar8 + 1;
      }
    }
    reset(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Selection::dragMove(int, int) */

void __thiscall UI::Selection::dragMove(Selection *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  long local_8;
  
  fVar6 = (float)param_1;
  fVar5 = (float)param_2;
  local_8 = ___stack_chk_guard;
  if ((*(float *)(this + 0x18) != fVar6) || (*(float *)(this + 0x1c) != fVar5)) {
    Rect<float>::zero((Rect<float> *)this);
    fVar4 = *(float *)(this + 0x18);
    fVar3 = *(float *)(this + 0x1c);
    *(float *)(this + 0x18) = fVar6;
    *(float *)(this + 0x1c) = fVar5;
    iVar2 = (int)(fVar6 - fVar4);
    iVar1 = (int)(fVar5 - fVar3);
    switch(*(undefined4 *)(this + 0x20)) {
    case 1:
      local_18 = (float)iVar2;
      local_14 = (float)iVar1;
      break;
    case 2:
      local_10 = (float)iVar2 + local_10;
      local_14 = (float)iVar1 + local_14;
      break;
    case 3:
      local_18 = (float)iVar2 + local_18;
      local_c = (float)iVar1 + local_c;
      break;
    case 4:
      local_10 = (float)iVar2 + local_10;
      local_c = (float)iVar1 + local_c;
      break;
    default:
      goto switchD_04b6f3bc_caseD_5;
    case 7:
      local_14 = (float)iVar1 + local_14;
      break;
    case 8:
      local_18 = (float)iVar2 + local_18;
      break;
    case 9:
      local_10 = (float)iVar2 + local_10;
      break;
    case 10:
      local_c = (float)iVar1 + local_c;
      break;
    case 0xb:
      local_18 = (float)iVar2;
      local_14 = (float)iVar1;
      local_10 = local_18;
      local_c = local_14;
    }
    offsetArea(this,(Rect *)&local_18);
  }
switchD_04b6f3bc_caseD_5:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UI::Selection::~Selection() */

void __thiscall UI::Selection::~Selection(Selection *this)

{
  std::_Destroy<UI::WndBox*>(*(WndBox **)this,*(WndBox **)(this + 8));
  std::_Vector_base<UI::WndBox,std::allocator<UI::WndBox>>::~_Vector_base
            ((_Vector_base<UI::WndBox,std::allocator<UI::WndBox>> *)this);
  return;
}


/* UI::Selection::clear() */

void __thiscall UI::Selection::clear(Selection *this)

{
  std::vector<UI::WndBox,std::allocator<UI::WndBox>>::clear
            ((vector<UI::WndBox,std::allocator<UI::WndBox>> *)this);
  endDrag(this);
  return;
}


/* UI::Selection::getSelectBox() const */

void UI::Selection::getSelectBox(void)

{
  char cVar1;
  vector<UI::WndBox,std::allocator<UI::WndBox>> *in_x0;
  WndBox *pWVar2;
  WndBox *in_x8;
  
  cVar1 = std::vector<UI::WndBox,std::allocator<UI::WndBox>>::empty(in_x0);
  if (cVar1 != '\0') {
    WndBox::WndBox(in_x8,(Widget *)0x0);
    return;
  }
  pWVar2 = (WndBox *)FUN_04b6e4f4(*(undefined8 *)in_x0);
  WndBox::WndBox(in_x8,pWVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Selection::unselectWindow(Sexy::Widget*) */

void __thiscall UI::Selection::unselectWindow(Selection *this,Widget *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  Widget *pWVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Widget *)0x0) {
    bVar1 = false;
  }
  else {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
    while( true ) {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar1) break;
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      pWVar3 = (Widget *)FUN_04b6e3e0(*puVar2);
      if (param_1 == pWVar3) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<UI::WndBox,std::allocator<UI::WndBox>>::erase
                  ((vector<UI::WndBox,std::allocator<UI::WndBox>> *)this,local_10);
        break;
      }
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI::Selection::selectWindow(Sexy::Widget*) */

void __thiscall UI::Selection::selectWindow(Selection *this,Widget *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  WndBox *this_00;
  long lVar5;
  undefined8 uVar6;
  WndBox aWStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (Widget *)0x0) || (cVar1 = unselectWindow(this,param_1), cVar1 != '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)this;
    lVar2 = FUN_04b6e3e4(uVar6,*(undefined8 *)(this + 8));
    for (lVar5 = 0; lVar5 != lVar2; lVar5 = lVar5 + 1) {
      puVar3 = (undefined8 *)FUN_04b6e404(uVar6,lVar5);
      lVar4 = FUN_04b6e3e0(*puVar3);
      if (*(long *)(param_1 + 0x20) != *(long *)(lVar4 + 0x20)) {
        clear(this);
        break;
      }
    }
    WndBox::WndBox(aWStack_40,(Widget *)0x0);
    std::vector<UI::WndBox,std::allocator<UI::WndBox>>::push_back
              ((vector<UI::WndBox,std::allocator<UI::WndBox>> *)this,aWStack_40);
    WndBox::~WndBox(aWStack_40);
    this_00 = (WndBox *)
              std::vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>>::back
                        ((vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>> *)this);
    WndBox::setWindow(this_00,param_1);
    uVar6 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


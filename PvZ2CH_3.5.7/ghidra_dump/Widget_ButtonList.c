// Class: Widget_ButtonList


/* Widget_ButtonList::~Widget_ButtonList() */

void __thiscall Widget_ButtonList::~Widget_ButtonList(Widget_ButtonList *this)

{
  *(undefined ***)this = &PTR_GetClass_06792dc0;
  std::
  vector<std::pair<PVZ2UIButton*,std::function<void()>>,std::allocator<std::pair<PVZ2UIButton*,std::function<void()>>>>
  ::~vector((vector<std::pair<PVZ2UIButton*,std::function<void()>>,std::allocator<std::pair<PVZ2UIButton*,std::function<void()>>>>
             *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* Widget_ButtonList::~Widget_ButtonList() */

void __thiscall Widget_ButtonList::~Widget_ButtonList(Widget_ButtonList *this)

{
  ~Widget_ButtonList(this);
  AK::FreeHook(this);
  return;
}


/* Widget_ButtonList::GetNextFreeButtonID() */

void __thiscall Widget_ButtonList::GetNextFreeButtonID(Widget_ButtonList *this)

{
  *(int *)(this + 0xd4) = *(int *)(this + 0xd4) + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Widget_ButtonList::DrawButtonsManually(Sexy::Graphics*) */

void __thiscall Widget_ButtonList::DrawButtonsManually(Widget_ButtonList *this,Graphics *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0xe0);
    uVar3 = FUN_0450bcd8(uVar5,*(undefined8 *)(this + 0xe8));
    if (uVar3 <= uVar4) break;
    plVar1 = (long *)FUN_0450bcec(uVar5,uVar4);
    Sexy::Graphics::Translate(param_1,*(int *)(*plVar1 + 0x48),*(int *)(*plVar1 + 0x4c));
    puVar2 = (undefined8 *)FUN_0450bcec(*(undefined8 *)(this + 0xe0),uVar4);
    (**(code **)(*(long *)*puVar2 + 0x128))((long *)*puVar2,param_1);
    plVar1 = (long *)FUN_0450bcec(*(undefined8 *)(this + 0xe0),uVar4);
    Sexy::Graphics::Translate(param_1,-*(int *)(*plVar1 + 0x48),-*(int *)(*plVar1 + 0x4c));
    uVar4 = uVar4 + 1;
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Widget_ButtonList::PerformLayout(int, int, int, int, int) */

void __thiscall
Widget_ButtonList::PerformLayout
          (Widget_ButtonList *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  uVar7 = *(undefined8 *)(this + 0xe0);
  iVar5 = 0;
  uVar2 = FUN_0450bcd8(uVar7,*(undefined8 *)(this + 0xe8),param_2,param_3,param_4);
  lVar4 = 0;
  while (lVar4 + 1 != uVar2 + 1) {
    plVar3 = (long *)FUN_0450bcec(uVar7,lVar4);
    iVar5 = iVar5 + *(int *)(*plVar3 + 0x50);
    lVar4 = lVar4 + 1;
  }
  iVar1 = param_3 + param_5 * -2;
  if (iVar1 < iVar5) {
    fVar8 = 0.0;
    param_1 = param_1 - (iVar5 - iVar1) / 2;
  }
  else {
    fVar8 = (float)(iVar1 - iVar5);
  }
  fVar8 = fVar8 / (float)(int)uVar2;
  fVar9 = (float)param_1 + fVar8 * 0.5;
  uVar6 = 0;
  while (uVar6 < uVar2) {
    plVar3 = (long *)FUN_0450bcec(uVar7,uVar6);
    plVar3 = (long *)*plVar3;
    (**(code **)(*plVar3 + 0x198))
              (plVar3,(int)fVar9,(int)(float)param_2,(int)plVar3[10],
               *(undefined4 *)((long)plVar3 + 0x54));
    uVar7 = *(undefined8 *)(this + 0xe0);
    plVar3 = (long *)FUN_0450bcec(uVar7,uVar6);
    fVar9 = fVar9 + fVar8 + (float)*(int *)(*plVar3 + 0x50);
    uVar2 = FUN_0450bcd8(uVar7,*(undefined8 *)(this + 0xe8));
    uVar6 = uVar6 + 1;
  }
  return;
}


/* Widget_ButtonList::NormalizeFonts() */

uint __thiscall Widget_ButtonList::NormalizeFonts(Widget_ButtonList *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  PrimeTypeface *this_00;
  undefined8 uVar3;
  PrimeTypeface *this_01;
  PrimeTypeface *pPVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = 0;
  uVar6 = 1;
  this_01 = (PrimeTypeface *)0x0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0xe0);
    uVar1 = FUN_0450bcd8(uVar3,*(undefined8 *)(this + 0xe8));
    if (uVar1 <= uVar5) break;
    puVar2 = (undefined8 *)FUN_0450bcec(uVar3,uVar5);
    this_00 = (PrimeTypeface *)PVZ2UIButton::GetTextFontDrawn((PVZ2UIButton *)*puVar2);
    if (this_01 == (PrimeTypeface *)0x0) {
      uVar5 = uVar5 + 1;
      this_01 = this_00;
    }
    else {
      pPVar4 = this_01;
      if (this_00 != this_01) {
        fVar7 = (float)Sexy::PrimeTypeface::GetLineHeight(this_00);
        uVar6 = 0;
        fVar8 = (float)Sexy::PrimeTypeface::GetLineHeight(this_01);
        pPVar4 = this_00;
        if (fVar8 <= fVar7) {
          pPVar4 = this_01;
        }
      }
      uVar5 = uVar5 + 1;
      this_01 = pPVar4;
    }
  }
  uVar5 = 0;
  if (uVar6 == 0) {
    while (uVar5 < uVar1) {
      puVar2 = (undefined8 *)FUN_0450bcec(uVar3,uVar5);
      (**(code **)(*(long *)*puVar2 + 800))((long *)*puVar2,this_01);
      uVar3 = *(undefined8 *)(this + 0xe0);
      uVar1 = FUN_0450bcd8(uVar3,*(undefined8 *)(this + 0xe8));
      uVar5 = uVar5 + 1;
    }
  }
  return uVar6 ^ 1;
}


/* Widget_ButtonList::DoLayout(int, int, int, int, int) */

void __thiscall
Widget_ButtonList::DoLayout
          (Widget_ButtonList *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  
  PerformLayout(this,param_1,param_2,param_3,param_4,param_5);
  this[0xd8] = (Widget_ButtonList)0x0;
  cVar1 = NormalizeFonts(this);
  if (cVar1 == '\0') {
    return;
  }
  PerformLayout(this,param_1,param_2,param_3,param_4,param_5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Widget_ButtonList::Build_WidgetList_Button_Base(Widget_Button_Stats&) */

void Widget_ButtonList::Build_WidgetList_Button_Base(Widget_Button_Stats *param_1)

{
  int iVar1;
  int iVar2;
  PVZ2UIButton *this;
  undefined8 uVar3;
  int *piVar4;
  PrimeTypeface *pPVar5;
  int local_20;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)aIStack_18,1);
  this = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this,*(int *)(param_1 + 0x10),(ButtonListener *)0x0,(wstring *)(param_1 + 0x20),
             (Color *)aIStack_18);
  local_20 = *(int *)param_1;
  pPVar5 = *(PrimeTypeface **)(param_1 + 0x18);
  FUN_05477b24(aIStack_18,(wstring *)(param_1 + 0x20));
  uVar3 = Sexy::PrimeTypeface::FitString_Line
                    (pPVar5,aIStack_18,*(undefined4 *)(param_1 + 0x14),&local_1c);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  FUN_05476c50(aIStack_18);
  iVar1 = *(int *)(param_1 + 8);
  local_1c = local_1c + iVar1 * 2;
  piVar4 = eastl::max_alt<int>(&local_20,&local_1c);
  iVar2 = *piVar4;
  Sexy::Insets::Insets
            (aIStack_18,iVar1,*(int *)(param_1 + 0xc),iVar2 + iVar1 * -2,
             *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * -2);
  PVZ2UIButton::SetContentsRect(this,(TRect *)aIStack_18);
  (**(code **)(*(long *)this + 0x198))(this,0,0,iVar2,*(undefined4 *)(param_1 + 4));
  (**(code **)(*(long *)this + 800))(this,*(undefined8 *)(param_1 + 0x18));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* Widget_ButtonList::Build_WidgetList_Button(Widget_Button_Stats&, PVZ2UIImage const&, PVZ2UIImage
   const&) */

PVZ2UIButton *
Widget_ButtonList::Build_WidgetList_Button
          (Widget_Button_Stats *param_1,PVZ2UIImage *param_2,PVZ2UIImage *param_3)

{
  PVZ2UIButton *this;
  
  this = (PVZ2UIButton *)Build_WidgetList_Button_Base(param_1);
  PVZ2UIButton::SetDialogStates(this,param_2,param_3);
  return this;
}


/* Widget_ButtonList::Widget_ButtonList() */

void __thiscall Widget_ButtonList::Widget_ButtonList(Widget_ButtonList *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06792dc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  this[0xd8] = (Widget_ButtonList)0x0;
  this[0xd9] = (Widget_ButtonList)0x0;
  this[0x59] = (Widget_ButtonList)0x0;
  *(undefined4 *)(this + 0xd4) = 1000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Widget_ButtonList::SetButtonCallback(PVZ2UIButton*, std::function<void ()>&&) */

void __thiscall
Widget_ButtonList::SetButtonCallback
          (Widget_ButtonList *this,PVZ2UIButton *param_1,function *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  function *extraout_x0;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_0450cff8(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    nop();
    std::function<void(Zombie*)>::operator=((function<void(Zombie*)> *)(lVar4 + 8),extraout_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Widget_ButtonList::GetButton(int) */

void __thiscall Widget_ButtonList::GetButton(Widget_ButtonList *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_0450d298(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar2 = *puVar4;
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* Widget_ButtonList::HasButton(int) */

bool __thiscall Widget_ButtonList::HasButton(Widget_ButtonList *this,int param_1)

{
  long lVar1;
  
  lVar1 = GetButton(this,param_1);
  return lVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Widget_ButtonList::ButtonDepress(int) */

void __thiscall Widget_ButtonList::ButtonDepress(Widget_ButtonList *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_0450d53c(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    bVar1 = std::function::operator_cast_to_bool((function *)(lVar4 + 8));
    if (bVar1) {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      std::function<void()>::operator()((function<void()> *)(lVar4 + 8));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Widget_ButtonList::ClearButtons() */

void __thiscall Widget_ButtonList::ClearButtons(Widget_ButtonList *this)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar5 = *(undefined8 *)(this + 0xe0);
  uVar6 = 0;
  lVar1 = FUN_0450bcd8(uVar5,*(undefined8 *)(this + 0xe8));
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_0450bcec(uVar5,uVar6);
      (**(code **)(*(long *)this + 0x68))(this,*puVar2);
      uVar5 = *(undefined8 *)(this + 0xe0);
      plVar3 = (long *)FUN_0450bcec(uVar5,uVar6);
      plVar3 = (long *)*plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
        uVar5 = *(undefined8 *)(this + 0xe0);
      }
      uVar6 = uVar6 + 1;
      uVar4 = FUN_0450bcd8(uVar5,*(undefined8 *)(this + 0xe8));
    } while (uVar6 < uVar4);
  }
  std::
  vector<std::pair<PVZ2UIButton*,std::function<void()>>,std::allocator<std::pair<PVZ2UIButton*,std::function<void()>>>>
  ::clear((vector<std::pair<PVZ2UIButton*,std::function<void()>>,std::allocator<std::pair<PVZ2UIButton*,std::function<void()>>>>
           *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Widget_ButtonList::ReplaceButton(int, PVZ2UIButton*, std::function<void ()>&&,
   Sexy::ButtonListener*) */

void __thiscall
Widget_ButtonList::ReplaceButton
          (Widget_ButtonList *this,int param_1,PVZ2UIButton *param_2,function *param_3,
          ButtonListener *param_4)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  function *extraout_x0;
  long *plVar6;
  PVZ2UIButton *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  pair<PVZ2UIButton*,std::function<void()>> apStack_98 [40];
  Delegate0 aDStack_70 [48];
  pair<PVZ2UIButton*,Sexy::Delegate0> apStack_40 [56];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  local_b8 = param_2;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_b0 = FUN_0450ca7c(uVar2,uVar3,param_1);
  puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
  plVar6 = (long *)*puVar4;
  (**(code **)(*(long *)this + 0x60))(this,local_b8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_a0,(__normal_iterator *)&local_b0);
  Sexy::Delegate0::Delegate0(aDStack_70,(DummyInit *)0x0);
  std::pair<PVZ2UIButton*,Sexy::Delegate0>::pair<PVZ2UIButton*&,Sexy::Delegate0,void>
            (apStack_40,&local_b8,aDStack_70);
  std::pair<PVZ2UIButton*,std::function<void()>>::pair<PVZ2UIButton*,Sexy::Delegate0,void>
            (apStack_98,(pair *)apStack_40);
  std::
  vector<std::pair<PVZ2UIButton*,std::function<void()>>,std::allocator<std::pair<PVZ2UIButton*,std::function<void()>>>>
  ::insert((vector<std::pair<PVZ2UIButton*,std::function<void()>>,std::allocator<std::pair<PVZ2UIButton*,std::function<void()>>>>
            *)this_00,local_a0,apStack_98);
  std::pair<int_const,std::function<void()>>::~pair
            ((pair<int_const,std::function<void()>> *)apStack_98);
  *(undefined4 *)(local_b8 + 0xd4) = *(undefined4 *)((long)plVar6 + 0xd4);
  *(ButtonListener **)(local_b8 + 0x168) = param_4;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_a8 = FUN_0450cc50(uVar2,uVar3,local_b8);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_a8);
  if (bVar1) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    nop();
    std::function<void(Zombie*)>::operator=((function<void(Zombie*)> *)(lVar5 + 8),extraout_x0);
  }
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_b0 = FUN_0450ce24(uVar2,uVar3,plVar6);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_a0,(__normal_iterator *)&local_b0);
  std::
  vector<std::pair<PVZ2UIButton*,std::function<void()>>,std::allocator<std::pair<PVZ2UIButton*,std::function<void()>>>>
  ::erase((vector<std::pair<PVZ2UIButton*,std::function<void()>>,std::allocator<std::pair<PVZ2UIButton*,std::function<void()>>>>
           *)this_00,local_a0);
  (**(code **)(*(long *)this + 0x68))(this,plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  this[0xd8] = (Widget_ButtonList)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Widget_ButtonList::AddButton_Internal(PVZ2UIButton*) */

void __thiscall Widget_ButtonList::AddButton_Internal(Widget_ButtonList *this,PVZ2UIButton *param_1)

{
  long lVar1;
  PVZ2UIButton *local_a8 [2];
  pair<PVZ2UIButton*,std::function<void()>> apStack_98 [40];
  Delegate0 aDStack_70 [48];
  pair<PVZ2UIButton*,Sexy::Delegate0> apStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_a8[0] = param_1;
  (**(code **)(*(long *)this + 0x60))();
  Sexy::Delegate0::Delegate0(aDStack_70,(DummyInit *)0x0);
  std::pair<PVZ2UIButton*,Sexy::Delegate0>::pair<PVZ2UIButton*&,Sexy::Delegate0,void>
            (apStack_40,local_a8,aDStack_70);
  std::pair<PVZ2UIButton*,std::function<void()>>::pair<PVZ2UIButton*,Sexy::Delegate0,void>
            (apStack_98,(pair *)apStack_40);
  std::
  vector<std::pair<PVZ2UIButton*,std::function<void()>>,std::allocator<std::pair<PVZ2UIButton*,std::function<void()>>>>
  ::push_back((vector<std::pair<PVZ2UIButton*,std::function<void()>>,std::allocator<std::pair<PVZ2UIButton*,std::function<void()>>>>
               *)(this + 0xe0),(pair *)apStack_98);
  std::pair<int_const,std::function<void()>>::~pair
            ((pair<int_const,std::function<void()>> *)apStack_98);
  lVar1 = ___stack_chk_guard;
  this[0xd8] = (Widget_ButtonList)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a8[0]);
}


/* Widget_ButtonList::AddButton(PVZ2UIButton*, Sexy::ButtonListener*) */

void __thiscall
Widget_ButtonList::AddButton(Widget_ButtonList *this,PVZ2UIButton *param_1,ButtonListener *param_2)

{
  long lVar1;
  
  lVar1 = AddButton_Internal(this,param_1);
  *(ButtonListener **)(lVar1 + 0x168) = param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Widget_ButtonList::AddButton(PVZ2UIButton*, std::function<void ()>&&, Sexy::ButtonListener*) */

void __thiscall
Widget_ButtonList::AddButton
          (Widget_ButtonList *this,PVZ2UIButton *param_1,function *param_2,ButtonListener *param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  function *extraout_x0;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xe0);
  local_8 = ___stack_chk_guard;
  lVar3 = AddButton_Internal(this,param_1);
  iVar1 = *(int *)(this + 0xd4);
  *(ButtonListener **)(lVar3 + 0x168) = param_3;
  *(int *)(lVar3 + 0xd4) = iVar1;
  *(int *)(this + 0xd4) = iVar1 + 1;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_0450c8a8(uVar4,uVar5,lVar3);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_10,(__normal_iterator *)&local_18);
  if (bVar2) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    nop();
    std::function<void(Zombie*)>::operator=((function<void(Zombie*)> *)(lVar3 + 8),extraout_x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


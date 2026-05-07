// Class: CommandConsole


/* CommandConsole::AllowChar(int, wchar_t) */

bool __thiscall CommandConsole::AllowChar(CommandConsole *this,int param_1,wchar_t param_2)

{
  return (param_2 + L'\xffffffa4' & 0xfffffffbU) != 0;
}


/* non-virtual thunk to CommandConsole::AllowChar(int, wchar_t) */

void __thiscall CommandConsole::AllowChar(CommandConsole *this,int param_1,wchar_t param_2)

{
  AllowChar(this + -0xd8,param_1,param_2);
  return;
}


/* CommandConsole::FindCurrentContext() */

long __thiscall CommandConsole::FindCurrentContext(CommandConsole *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0xe8);
  iVar1 = FUN_03c6e8d0(uVar4,*(undefined8 *)(this + 0xf0));
  lVar3 = 0;
  do {
    if (iVar1 <= (int)lVar3) {
      return 0;
    }
    lVar2 = FUN_03c6e8f0(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(lVar2 + 0x30) != *(int *)(this + 500));
  return lVar2;
}


/* CommandConsole::ClearButtons() */

void __thiscall CommandConsole::ClearButtons(CommandConsole *this)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(this + 0x240);
    uVar3 = FUN_03c6e8bc(uVar6,*(undefined8 *)(this + 0x248));
    if (uVar3 <= uVar5) break;
    plVar1 = (long *)FUN_03c6e8c8(uVar6,uVar5);
    lVar4 = *plVar1;
    if (*(long *)(*(long *)(this + 0x18) + 200) == lVar4) {
      (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x360) + 0x98))
                (*(long **)(Sexy::gSexyAppBase + 0x360),0);
      plVar1 = (long *)FUN_03c6e8c8(*(undefined8 *)(this + 0x240),uVar5);
      lVar4 = *plVar1;
    }
    (**(code **)(*(long *)this + 0x68))(this,lVar4);
    plVar1 = Sexy::gSexyApp;
    puVar2 = (undefined8 *)FUN_03c6e8c8(*(undefined8 *)(this + 0x240),uVar5);
    (**(code **)(*plVar1 + 0x150))(plVar1,*puVar2);
    uVar5 = (ulong)((int)uVar5 + 1);
  }
  std::vector<Sexy::ButtonWidget*,std::allocator<Sexy::ButtonWidget*>>::clear
            ((vector<Sexy::ButtonWidget*,std::allocator<Sexy::ButtonWidget*>> *)(this + 0x240));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::RefreshButtonPositions() */

void __thiscall CommandConsole::RefreshButtonPositions(CommandConsole *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = 0;
  if (*(long **)(this + 0x148) == (long *)0x0) {
    iVar2 = 0x1e;
  }
  else {
    iVar2 = (**(code **)(**(long **)(this + 0x148) + 0x68))();
    iVar2 = iVar2 + 10;
  }
  uVar8 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(this + 0x240);
    uVar9 = (ulong)uVar8;
    uVar4 = FUN_03c6e8bc(uVar7,*(undefined8 *)(this + 0x248));
    if (uVar4 <= uVar9) break;
    plVar11 = *(long **)(this + 0x148);
    uVar8 = uVar8 + 1;
    plVar6 = (long *)FUN_03c6e8c8(uVar7,uVar9);
    local_c = (**(code **)(*plVar11 + 0x80))(plVar11,*plVar6 + 0xd8);
    local_c = local_c + 0x10;
    piVar3 = eastl::max_alt<int>(&local_10,&local_c);
    local_10 = *piVar3;
  }
  iVar12 = 1;
  iVar10 = 0;
  for (uVar8 = 0; uVar9 = (ulong)uVar8, uVar9 < uVar4; uVar8 = uVar8 + 1) {
    puVar5 = (undefined8 *)FUN_03c6e8c8(uVar7,uVar9);
    iVar1 = (iVar2 + 4) * iVar10;
    iVar10 = iVar10 + 1;
    (**(code **)(*(long *)*puVar5 + 0x198))
              ((long *)*puVar5,*(int *)(this + 0x50) + (-6 - local_10) * iVar12,iVar1 + 6,local_10,
               iVar2);
    uVar7 = *(undefined8 *)(this + 0x240);
    plVar6 = (long *)FUN_03c6e8c8(uVar7,uVar9);
    if (*(int *)(this + 0x54) - *(int *)(*(long *)(this + 0x158) + 0x54) <
        *(int *)(*plVar6 + 0x4c) + *(int *)(*plVar6 + 0x54)) {
      iVar12 = iVar12 + 1;
      uVar8 = uVar8 - 1;
      iVar10 = 0;
    }
    uVar4 = FUN_03c6e8bc(uVar7,*(undefined8 *)(this + 0x248));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommandConsole::RefreshSize(bool) */

void __thiscall CommandConsole::RefreshSize(CommandConsole *this,bool param_1)

{
  int iVar1;
  int iVar2;
  
  if (this[0x23c] == (CommandConsole)0x0) {
    return;
  }
  if ((param_1) || (iVar2 = *(int *)(this + 0x50), iVar2 != *(int *)(Sexy::gSexyAppBase + 0xd4))) {
    iVar2 = *(int *)(Sexy::gSexyAppBase + 0xd4);
    iVar1 = *(int *)(Sexy::gSexyAppBase + 0xd8) / 2;
  }
  else {
    iVar1 = *(int *)(Sexy::gSexyAppBase + 0xd8) / 2;
    if (*(int *)(this + 0x238) == iVar1) {
      return;
    }
  }
  *(int *)(this + 0x238) = iVar1;
  (**(code **)(*(long *)this + 0x198))(this,0,0,iVar2);
  if (*(long *)(this + 0x158) != 0) {
    iVar2 = (**(code **)(**(long **)(this + 0x148) + 0x68))(*(long **)(this + 0x148));
    (**(code **)(**(long **)(this + 0x158) + 0x198))
              (*(long **)(this + 0x158),10,(*(int *)(this + 0x238) - (iVar2 + 10)) + -5,
               *(int *)(this + 0x50) + -0x14);
  }
  RefreshButtonPositions(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::Hide(bool) */

void __thiscall CommandConsole::Hide(CommandConsole *this,bool param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  char *__s;
  CommandConsole *pCVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  double dVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1f0] != (CommandConsole)param_1) {
    this[0x1f0] = (CommandConsole)param_1;
    if (param_1) {
      (**(code **)(*(long *)this + 0x188))(this,1);
      (**(code **)(**(long **)(this + 0x158) + 0x188))(*(long **)(this + 0x158),1);
      if (*(long *)(this + 0x160) != 0) {
        (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x360) + 0x98))
                  (*(long **)(Sexy::gSexyAppBase + 0x360));
      }
      uVar7 = *(undefined8 *)(this + 0x240);
      uVar6 = 0;
      uVar3 = FUN_03c6e8bc(uVar7,*(undefined8 *)(this + 0x248));
      if (uVar3 != 0) {
        do {
          plVar2 = (long *)FUN_03c6e8c8(uVar7);
          if (*(long *)(*(long *)(this + 0x18) + 200) == *plVar2) {
            (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x360) + 0x98))
                      (*(long **)(Sexy::gSexyAppBase + 0x360),0);
            uVar7 = *(undefined8 *)(this + 0x240);
            uVar3 = FUN_03c6e8bc(uVar7,*(undefined8 *)(this + 0x248));
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x30;
      *(undefined8 *)(this + 0x160) = 0;
      __s = "b;0,1,0.01,0.25,####         ~~###";
    }
    else {
      (**(code **)(*(long *)this + 0x158))();
      RefreshSize(this,false);
      (**(code **)(*(long *)this + 0x188))(this,0);
      (**(code **)(**(long **)(this + 0x158) + 0x158))(*(long **)(this + 0x158),1);
      (**(code **)(**(long **)(this + 0x158) + 0x188))(*(long **)(this + 0x158),0);
      plVar2 = *(long **)(Sexy::gSexyAppBase + 0x360);
      pCVar4 = (CommandConsole *)plVar2[0x19];
      if ((this != pCVar4) && (pCVar4 != *(CommandConsole **)(this + 0x158))) {
        *(CommandConsole **)(this + 0x160) = pCVar4;
      }
      pcVar5 = *(code **)(*plVar2 + 0x98);
      *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 0xffffffcf;
      (*pcVar5)();
      FUN_05476f98(*(long *)(this + 0x158) + 0xe8);
      __s = "b;0,1,0.01,0.25,~###         ~####";
    }
    std::string::string(asStack_10,__s);
    Sexy::CurvedVal::Intercept((CurvedVal *)(this + 0x168),asStack_10,(CurvedVal *)0x0,0.01,false);
    std::string::~string(asStack_10);
    nop();
    iVar1 = *(int *)(this + 0x210);
    dVar8 = Sexy::CurvedVal::operator_cast_to_double((CurvedVal *)(this + 0x168));
    *(int *)(this + 0x4c) = iVar1 - (int)(dVar8 * (double)*(int *)(this + 0x238));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::ButtonDepress(int) */

void __thiscall CommandConsole::ButtonDepress(CommandConsole *this,int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
  *this_00;
  wstring *pwVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  iVar1 = param_1 + -1000;
  local_8 = ___stack_chk_guard;
  if (-1 < iVar1) {
    uVar8 = *(undefined8 *)(this + 0x240);
    iVar4 = FUN_03c6e8bc(uVar8,*(undefined8 *)(this + 0x248));
    if (iVar1 < iVar4) {
      plVar5 = (long *)FUN_03c6e8c8(uVar8,(long)iVar1);
      lVar7 = *plVar5;
      this_00 = (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
                 *)FindCurrentContext(this);
      local_28 = std::
                 map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
                 ::begin(this_00);
      while( true ) {
        local_20[0] = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_00);
        bVar3 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)local_20);
        if (!bVar3) break;
        pwVar6 = (wstring *)
                 std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
        cVar2 = std::operator==(pwVar6,(wstring *)(lVar7 + 0xd8));
        if (cVar2 != '\0') {
          pwVar6 = (wstring *)
                   std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                             ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
          fastdelegate::
          FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
          ::operator()((FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
                        *)(pwVar6 + 8),pwVar6,(vector *)local_20);
          std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                    ((vector<std::wstring,std::allocator<std::wstring>> *)local_20);
          break;
        }
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CommandConsole::ButtonDepress(int) */

void __thiscall CommandConsole::ButtonDepress(CommandConsole *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* CommandConsole::~CommandConsole() */

void __thiscall CommandConsole::~CommandConsole(CommandConsole *this)

{
  *(undefined ***)this = &PTR_GetClass_067596a0;
  *(undefined ***)(this + 0xd8) = &PTR_EditWidgetText_067599d8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06759a08;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  if (*(long *)(this + 0x160) != 0) {
    (**(code **)(**(long **)(Sexy::gSexyAppBase + 0x360) + 0x98))
              (*(long **)(Sexy::gSexyAppBase + 0x360));
  }
  if ((this[0x205] != (CommandConsole)0x0) && (*(long **)(this + 0x148) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x148) + 0x18))();
  }
  std::vector<Sexy::ButtonWidget*,std::allocator<Sexy::ButtonWidget*>>::~vector
            ((vector<Sexy::ButtonWidget*,std::allocator<Sexy::ButtonWidget*>> *)(this + 0x240));
  std::vector<CommandConsole::DrawScreenText,std::allocator<CommandConsole::DrawScreenText>>::
  ~vector((vector<CommandConsole::DrawScreenText,std::allocator<CommandConsole::DrawScreenText>> *)
          (this + 0x220));
  Sexy::CurvedVal::~CurvedVal((CurvedVal *)(this + 0x168));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x130));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x118));
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x100));
  std::vector<ConsoleContext,std::allocator<ConsoleContext>>::~vector
            ((vector<ConsoleContext,std::allocator<ConsoleContext>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* CommandConsole::~CommandConsole() */

void __thiscall CommandConsole::~CommandConsole(CommandConsole *this)

{
  ~CommandConsole(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::RefreshButtons() */

void __thiscall CommandConsole::RefreshButtons(CommandConsole *this)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
  *this_00;
  long lVar4;
  ButtonWidget *this_01;
  uint uVar5;
  undefined8 uVar6;
  undefined8 local_18;
  ButtonWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = 0;
  ClearButtons(this);
  uVar6 = *(undefined8 *)(this + 0xe8);
  uVar3 = FUN_03c6e8d0(uVar6,*(undefined8 *)(this + 0xf0));
  while( true ) {
    if (uVar3 <= uVar5) goto LAB_03c7083c;
    this_00 = (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
               *)FUN_03c6e8f0(uVar6);
    if (*(int *)(this_00 + 0x30) == *(int *)(this + 500)) break;
    uVar5 = uVar5 + 1;
  }
  local_18 = std::
             map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
             ::begin(this_00);
  while( true ) {
    local_10 = (ButtonWidget *)
               std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(char *)(lVar4 + 0x28) != '\0') {
      iVar2 = FUN_03c6e8bc(*(undefined8 *)(this + 0x240),*(undefined8 *)(this + 0x248));
      this_01 = ::operator_new(0x198);
      Sexy::ButtonWidget::ButtonWidget(this_01,iVar2 + 1000,(ButtonListener *)(this + 0xe0));
      uVar6 = *(undefined8 *)(this + 0x148);
      this_01[0xa0] = (ButtonWidget)0x1;
      local_10 = this_01;
      (**(code **)(*(long *)this_01 + 0x328))(this_01,uVar6);
      (**(code **)(*(long *)local_10 + 800))(local_10,*(undefined8 *)(this + 0x150));
      uVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      thunk_FUN_05477b9c(local_10 + 0xd8,uVar6);
      (**(code **)(*(long *)this + 0x60))(this,local_10);
      std::vector<Sexy::ButtonWidget*,std::allocator<Sexy::ButtonWidget*>>::push_back
                ((vector<Sexy::ButtonWidget*,std::allocator<Sexy::ButtonWidget*>> *)(this + 0x240),
                 &local_10);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  RefreshButtonPositions(this);
LAB_03c7083c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::SetFont(Sexy::Font*) */

void __thiscall CommandConsole::SetFont(CommandConsole *this,Font *param_1)

{
  int iVar1;
  long *plVar2;
  SysFont *this_00;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x205] != (CommandConsole)0x0) {
    if (*(long **)(this + 0x148) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x148) + 0x18))();
    }
    this[0x205] = (CommandConsole)0x0;
  }
  if (param_1 == (Font *)0x0) {
    std::string::string(asStack_10,"Courier");
    this_00 = ::operator_new(0x48);
    Sexy::SysFont::SysFont(this_00,(SysFont *)asStack_10);
    *(SysFont **)(this + 0x148) = this_00;
    std::string::~string(asStack_10);
    nop();
    plVar2 = *(long **)(this + 0x148);
  }
  else {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
    *(long **)(this + 0x148) = plVar2;
  }
  lVar3 = *plVar2;
  this[0x205] = (CommandConsole)0x1;
  iVar1 = (**(code **)(lVar3 + 0x68))();
  (**(code **)(**(long **)(this + 0x158) + 0x338))
            (*(long **)(this + 0x158),*(undefined8 *)(this + 0x148),0);
  (**(code **)(**(long **)(this + 0x158) + 0x198))
            (*(long **)(this + 0x158),10,(*(int *)(this + 0x238) - (iVar1 + 10)) + -5,
             *(int *)(this + 0x50) + -0x14,iVar1 + 10);
  RefreshButtons(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommandConsole::SetFont(Sexy::PrimeTypeface*) */

void __thiscall CommandConsole::SetFont(CommandConsole *this,PrimeTypeface *param_1)

{
  BaseBufferResource *this_00;
  float fVar1;
  
  if (this[0x205] != (CommandConsole)0x0) {
    if (*(long **)(this + 0x148) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x148) + 0x18))();
    }
    this[0x205] = (CommandConsole)0x0;
  }
  if (param_1 == (PrimeTypeface *)0x0) {
    this_00 = (BaseBufferResource *)Sexy::PrimeText::Instance();
    param_1 = (PrimeTypeface *)Sexy::BaseBufferResource::GetPtr(this_00);
    *(PrimeTypeface **)(this + 0x150) = param_1;
  }
  else {
    *(PrimeTypeface **)(this + 0x150) = param_1;
  }
  fVar1 = (float)Sexy::PrimeTypeface::GetHeight(param_1);
  (**(code **)(**(long **)(this + 0x158) + 0x330))
            (*(long **)(this + 0x158),*(undefined8 *)(this + 0x150),0);
  (**(code **)(**(long **)(this + 0x158) + 0x198))
            (*(long **)(this + 0x158),10,(*(int *)(this + 0x238) - (int)(fVar1 + 10.0)) + -5,
             *(int *)(this + 0x50) + -0x14);
  RefreshButtons(this);
  return;
}


/* CommandConsole::SetContext(int) */

void __thiscall CommandConsole::SetContext(CommandConsole *this,int param_1)

{
  if (*(int *)(this + 500) != param_1) {
    *(int *)(this + 500) = param_1;
    RefreshButtons(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::AddHistory(std::wstring const&, bool) */

void __thiscall CommandConsole::AddHistory(CommandConsole *this,wstring *param_1,bool param_2)

{
  undefined4 uVar1;
  long lVar2;
  wstring awStack_10 [8];
  wstring *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Trim((Sexy *)param_1,___stack_chk_guard);
  lVar2 = FUN_054765d0(awStack_10);
  if ((lVar2 != 0) &&
     (std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x100),awStack_10),
     param_2)) {
    uVar1 = FUN_03c6e900(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
    *(undefined4 *)(this + 0x1fc) = uVar1;
  }
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::GetAllCompletionStrings(std::vector<std::wstring, std::allocator<std::wstring >
   >&) */

void __thiscall CommandConsole::GetAllCompletionStrings(CommandConsole *this,vector *param_1)

{
  bool bVar1;
  map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
  *this_00;
  wstring *pwVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
             *)FindCurrentContext(this);
  if (this_00 !=
      (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
       *)0x0) {
    FUN_05477b24(auStack_20,*(long *)(this + 0x158) + 0xe8);
    if (this[0x204] != (CommandConsole)0x0) {
      FUN_05477da4(&local_10,auStack_20,0,(long)*(int *)(*(long *)(this + 0x158) + 0x138));
      FUN_054766c8(auStack_20,&local_10);
      FUN_05476c50(&local_10);
    }
    local_18 = std::
               map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_00);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      pwVar2 = (wstring *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      for (uVar6 = 0; uVar3 = FUN_054765d0(auStack_20), uVar6 < uVar3;
          uVar6 = (ulong)((int)uVar6 + 1)) {
        uVar3 = FUN_054765d0(pwVar2);
        if (uVar3 <= uVar6) {
LAB_03c70f5c:
          uVar3 = FUN_054765d0(auStack_20);
          break;
        }
        piVar4 = (int *)FUN_05476f5c(auStack_20,uVar6);
        piVar5 = (int *)FUN_054765fc(pwVar2,uVar6);
        if (*piVar4 != *piVar5) goto LAB_03c70f5c;
      }
      if (uVar6 == uVar3) {
        std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                  ((vector<std::wstring,std::allocator<std::wstring>> *)param_1,pwVar2);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    }
    FUN_05476c50(auStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CommandConsole::ClearLastCompletionHelp() */

void __thiscall CommandConsole::ClearLastCompletionHelp(CommandConsole *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 0x208);
  if (0 < iVar1) {
    lVar2 = FUN_03c6e900(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120));
    std::vector<std::wstring,std::allocator<std::wstring>>::resize
              ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x118),lVar2 - iVar1);
    iVar1 = FUN_03c6e900(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120));
    *(int *)(this + 0x1f8) = iVar1 + -1;
  }
  *(undefined4 *)(this + 0x208) = 0;
  return;
}


/* CommandConsole::ResetCompletion() */

void __thiscall CommandConsole::ResetCompletion(CommandConsole *this)

{
  this[0x204] = (CommandConsole)0x0;
  *(undefined4 *)(this + 0x200) = 0;
  ClearLastCompletionHelp(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::addLineHelper(std::wstring const&, CommandConsole::ELineType, int, bool) */

void __thiscall
CommandConsole::addLineHelper
          (CommandConsole *this,wstring *param_1,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined1 auStack_18 [8];
  int local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 1) {
    uVar2 = FUN_054766ec(param_1);
    pcVar4 = "^FFFF44^";
  }
  else {
    if (param_3 == 0) {
      std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x118),param_1);
      goto LAB_03c714dc;
    }
    if (param_3 != 2) goto LAB_03c714dc;
    uVar2 = FUN_054766ec(param_1);
    pcVar4 = "^FF4444^";
  }
  Sexy::StrFormat(L"%S%ls%S",&local_10,pcVar4,uVar2,"^FFFFFF^");
  std::vector<std::wstring,std::allocator<std::wstring>>::push_back
            ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x118),
             (wstring *)&local_10);
  FUN_05476c50((wstring *)&local_10);
LAB_03c714dc:
  if ((param_5 != '\0') &&
     (lVar3 = FUN_03c6e900(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120)), lVar3 != 0)
     ) {
    local_c = *(undefined4 *)(this + 0x214);
    local_10 = (int)lVar3 + -1;
    std::vector<CommandConsole::DrawScreenText,std::allocator<CommandConsole::DrawScreenText>>::
    push_back((vector<CommandConsole::DrawScreenText,std::allocator<CommandConsole::DrawScreenText>>
               *)(this + 0x220),(DrawScreenText *)&local_10);
  }
  if (0 < param_4) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_05478178((wstring *)&local_10,&DAT_056f11a8,auStack_18);
      std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x118),
                 (wstring *)&local_10);
      FUN_05476c50((wstring *)&local_10);
      nop();
    } while (iVar1 != param_4);
  }
  iVar1 = FUN_03c6e900(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120));
  *(int *)(this + 0x1f8) = iVar1 + -1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommandConsole::AddLine(std::wstring const&, int, bool) */

void __thiscall
CommandConsole::AddLine(CommandConsole *this,wstring *param_1,int param_2,bool param_3)

{
  addLineHelper(this,param_1,0,param_2,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::CommandConsole(Sexy::PrimeTypeface*) */

void __thiscall CommandConsole::CommandConsole(CommandConsole *this,PrimeTypeface *param_1)

{
  CommandConsoleEdit *this_00;
  Widget *pWVar1;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::EditListener::EditListener((EditListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_067596a0;
  *(undefined ***)(this + 0xd8) = &PTR_EditWidgetText_067599d8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_06759a08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x118));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x130));
  Sexy::CurvedVal::CurvedVal((CurvedVal *)(this + 0x168));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x220));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x240));
  this[0x23c] = (CommandConsole)0x1;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  RefreshSize(this,true);
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x218) = 0x32;
  *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 8;
  *(undefined4 *)(this + 0x214) = 500;
  *(undefined4 *)(this + 500) = 0;
  this[0x205] = (CommandConsole)0x0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  Sexy::CurvedVal::SetConstant((CurvedVal *)(this + 0x168),1.0);
  ResetCompletion(this);
  this_00 = ::operator_new(0x188);
  CommandConsoleEdit::CommandConsoleEdit(this_00,1,(EditListener *)(this + 0xd8));
  *(CommandConsoleEdit **)(this + 0x158) = this_00;
  *(undefined4 *)(this_00 + 0x140) = 0x7fffffff;
  this_00[0x130] = (CommandConsoleEdit)0x1;
  *(CommandConsole **)(this_00 + 0x180) = this;
  *(undefined4 *)(this_00 + 0xf8) = 0;
  SetFont(this,param_1);
  this[0x204] = (CommandConsole)0x0;
  pWVar1 = *(Widget **)(this + 0x158);
  *(undefined4 *)(this + 100) = 100000;
  *(undefined4 *)(this + 0x68) = 100000;
  *(undefined4 *)(pWVar1 + 0x68) = 0x186a1;
  *(undefined4 *)(pWVar1 + 100) = 0x186a1;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  this[0x58] = (CommandConsole)0x1;
  this[0x72] = (CommandConsole)0x1;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar1);
  FUN_05478178(awStack_10,L"*** Command Console ***",auStack_18);
  AddLine(this,awStack_10,0,false);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05478178(awStack_10,L"^fff71f^/?^FFFFFF^         List commands in current context",auStack_18)
  ;
  AddLine(this,awStack_10,0,false);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05478178(awStack_10,
               L"^fff71f^ctrl-UP^FFFFFF^:   Scrolls the currently displayed text up a line",
               auStack_18);
  AddLine(this,awStack_10,0,false);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05478178(awStack_10,
               L"^fff71f^ctrl-DOWN^FFFFFF^: Scrolls the currently displayed text down a line",
               auStack_18);
  AddLine(this,awStack_10,0,false);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05478178(awStack_10,L"^fff71f^UP^FFFFFF^:        Scrolls up in the command history buffer",
               auStack_18);
  AddLine(this,awStack_10,0,false);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05478178(awStack_10,L"^fff71f^DOWN^FFFFFF^:      Scrolls down in the command history buffer",
               auStack_18);
  AddLine(this,awStack_10,0,false);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05478178(awStack_10,L"^fff71f^/clear^ffffff^:    Clears the console",auStack_18);
  AddLine(this,awStack_10,0,false);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05478178(awStack_10,L"^fff71f^ctrl-` key^FFFFFF^:Closes/opens this window",auStack_18);
  AddLine(this,awStack_10,1,false);
  FUN_05476c50(awStack_10);
  nop();
  this[0x1f0] = (CommandConsole)0x0;
  Hide(this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::DoHelp() */

void __thiscall CommandConsole::DoHelp(CommandConsole *this)

{
  bool bVar1;
  map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
  *this_00;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_28;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
             *)FindCurrentContext(this);
  if (this_00 !=
      (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
       *)0x0) {
    FUN_05478178((wstring *)&local_10,&DAT_056f11a8,awStack_18);
    AddLine(this,(wstring *)&local_10,0,false);
    FUN_05476c50((wstring *)&local_10);
    nop();
    FUN_05478178((wstring *)&local_10,L"Commands valid in the current context:",awStack_18);
    AddLine(this,(wstring *)&local_10,0,false);
    FUN_05476c50((wstring *)&local_10);
    nop();
    local_28 = std::
               map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
               ::begin(this_00);
    while( true ) {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_00);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_10);
      if (!bVar1) break;
      uVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      FUN_036944b8(awStack_20,&DAT_05716030,uVar2);
      std::operator+(awStack_20,L"^ffffff^:     ");
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      std::operator+(awStack_18,(wstring *)(lVar3 + 0x20));
      AddLine(this,(wstring *)&local_10,0,false);
      FUN_05476c50((wstring *)&local_10);
      FUN_05476c50(awStack_18);
      FUN_05476c50(awStack_20);
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::EditWidgetText(int, std::wstring const&) */

void __thiscall CommandConsole::EditWidgetText(CommandConsole *this,int param_1,wstring *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
  *this_00;
  wstring *pwVar5;
  long lVar6;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  wstring awStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  wstring awStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AddHistory(this,param_2,true);
  FUN_05478178(awStack_38,&DAT_05716098,auStack_58);
  cVar1 = StrEquals(param_2,awStack_38,true);
  if (cVar1 == '\0') {
    FUN_05478178((wstring *)&local_30,&DAT_057160b0,auStack_50);
    cVar1 = StrEquals(param_2,(wstring *)&local_30,true);
    if (cVar1 == '\0') {
      FUN_05478178((wstring *)&local_28,&DAT_057160c8,auStack_48);
      cVar1 = StrEquals(param_2,(wstring *)&local_28,true);
      if (cVar1 == '\0') {
        FUN_05478178(awStack_20,&DAT_057055c0,auStack_40);
        cVar1 = StrEquals(param_2,awStack_20,true);
        FUN_05476c50(awStack_20);
        nop();
      }
      FUN_05476c50((wstring *)&local_28);
      nop();
      FUN_05476c50((wstring *)&local_30);
      nop();
      FUN_05476c50(awStack_38);
      nop();
      if (cVar1 == '\0') {
        FUN_05477da4((wstring *)&local_28,param_2,0,6);
        FUN_05478178((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)awStack_20,
                     L"/clear",(wstring *)&local_30);
        cVar1 = StrEquals((wstring *)&local_28,awStack_20,true);
        FUN_05476c50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)awStack_20);
        nop();
        FUN_05476c50((wstring *)&local_28);
        if (cVar1 == '\0') {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)awStack_20);
          FUN_05477b24((wstring *)&local_28,param_2);
          SplitStr((wstring *)&local_28,
                   (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)awStack_20);
          FUN_05476c50((wstring *)&local_28);
          uVar4 = FUN_05476818(param_2,0x20,0);
          FUN_05477da4(awStack_38,param_2,0,uVar4);
          uVar4 = *(undefined8 *)(this + 0xe8);
          iVar3 = FUN_03c6e8d0(uVar4,*(undefined8 *)(this + 0xf0));
          lVar6 = 0;
          do {
            if (iVar3 <= (int)lVar6) {
              FUN_036944b8((wstring *)&local_30,L"Error: unknown command \"",awStack_38);
              std::operator+((wstring *)&local_30,L"\"");
              AddLine(this,(wstring *)&local_28,0,false);
              FUN_05476c50((wstring *)&local_28);
              FUN_05476c50((wstring *)&local_30);
              FUN_054772c4(*(long *)(this + 0x158) + 0xe8,&DAT_056f11a8);
              FUN_05476c50(awStack_38);
              std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                        ((vector<std::wstring,std::allocator<std::wstring>> *)awStack_20);
              goto LAB_03c71bd4;
            }
            this_00 = (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
                       *)FUN_03c6e8f0(uVar4,lVar6);
            lVar6 = lVar6 + 1;
          } while (*(int *)(this_00 + 0x30) != *(int *)(this + 500));
          local_30 = std::
                     map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
                     ::begin(this_00);
          while( true ) {
            local_28 = std::
                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
            bVar2 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_28);
            if (!bVar2) break;
            pwVar5 = (wstring *)
                     std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
            cVar1 = StrEquals(awStack_38,pwVar5,true);
            if (cVar1 != '\0') {
              lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
              fastdelegate::
              FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
              ::operator()((FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
                            *)(lVar6 + 8),awStack_38,(vector *)awStack_20);
              goto LAB_03c71f40;
            }
            std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
          }
          FUN_036944b8((wstring *)&local_30,L"Error: unknown command \"",awStack_38);
          std::operator+((wstring *)&local_30,L"\"");
          AddLine(this,(wstring *)&local_28,0,bVar2);
          FUN_05476c50((wstring *)&local_28);
          FUN_05476c50((wstring *)&local_30);
LAB_03c71f40:
          FUN_054772c4(*(long *)(this + 0x158) + 0xe8,&DAT_056f11a8);
          FUN_05476c50(awStack_38);
          std::vector<std::wstring,std::allocator<std::wstring>>::~vector
                    ((vector<std::wstring,std::allocator<std::wstring>> *)awStack_20);
        }
        else {
          std::vector<std::wstring,std::allocator<std::wstring>>::clear
                    ((vector<std::wstring,std::allocator<std::wstring>> *)(this + 0x118));
          *(undefined4 *)(this + 0x1f8) = 0xffffffff;
          FUN_054772c4(*(long *)(this + 0x158) + 0xe8,&DAT_056f11a8);
        }
        goto LAB_03c71bd4;
      }
    }
    else {
      FUN_05476c50((wstring *)&local_30);
      nop();
      FUN_05476c50(awStack_38);
      nop();
    }
  }
  else {
    FUN_05476c50(awStack_38);
    nop();
  }
  DoHelp(this);
  FUN_054772c4(*(long *)(this + 0x158) + 0xe8,&DAT_056f11a8);
LAB_03c71bd4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CommandConsole::EditWidgetText(int, std::wstring const&) */

void __thiscall CommandConsole::EditWidgetText(CommandConsole *this,int param_1,wstring *param_2)

{
  EditWidgetText(this + -0xd8,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::ShowError(std::wstring const&) */

void CommandConsole::ShowError(wstring *param_1)

{
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_036944b8(awStack_10,L"^FF00FF^ERROR: ^FFFFFF^");
  AddLine((CommandConsole *)param_1,awStack_10,0,false);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::AddCommand(int, std::wstring const&, std::wstring const&, bool,
   fastdelegate::FastDelegate2<std::wstring const&, std::vector<std::wstring,
   std::allocator<std::wstring > > const&, void>) */

void __thiscall
CommandConsole::AddCommand
          (CommandConsole *this,int param_1,wstring *param_2,undefined8 param_3,undefined1 param_4,
          FastDelegate2 *param_6)

{
  int iVar1;
  map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
  *this_00;
  ConsoleAction *this_01;
  long lVar2;
  undefined8 uVar3;
  ParamCollection aPStack_40 [8];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  uVar3 = *(undefined8 *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03c6e8d0(uVar3,*(undefined8 *)(this + 0xf0));
  lVar2 = 0;
  do {
    if (iVar1 <= (int)lVar2) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      Sexy::AndroidGL20RenderEffect::ParamCollection::ParamCollection(aPStack_40);
      std::vector<ConsoleContext,std::allocator<ConsoleContext>>::push_back
                ((vector<ConsoleContext,std::allocator<ConsoleContext>> *)(this + 0xe8),
                 (ConsoleContext *)aPStack_40);
      ConsoleContext::~ConsoleContext((ConsoleContext *)aPStack_40);
      uVar3 = *(undefined8 *)(this + 0xe8);
      iVar1 = FUN_03c6e8d0(uVar3,*(undefined8 *)(this + 0xf0));
      this_00 = (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
                 *)FUN_03c6e8f0(uVar3,(long)(iVar1 + -1));
      break;
    }
    this_00 = (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
               *)FUN_03c6e8f0(uVar3,lVar2);
    lVar2 = lVar2 + 1;
  } while (*(int *)(this_00 + 0x30) != param_1);
  fastdelegate::
  FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
  ::FastDelegate2((FastDelegate2<std::wstring_const&,std::vector<std::wstring,std::allocator<std::wstring>>const&,void>
                   *)aPStack_40,param_6);
  FUN_05477b24(&local_28,param_3);
  local_20 = CONCAT71(local_20._1_7_,param_4);
  this_01 = (ConsoleAction *)
            std::
            map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
            ::operator[](this_00,param_2);
  ConsoleAction::operator=(this_01,(ConsoleAction *)aPStack_40);
  *(int *)(this_00 + 0x30) = param_1;
  PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)aPStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::UpdateCompletionHelp() */

void __thiscall CommandConsole::UpdateCompletionHelp(CommandConsole *this)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
  *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  wstring *pwVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uStack_c8;
  uint local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a8 [24];
  undefined8 local_90 [17];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ClearLastCompletionHelp(this);
  this_00 = (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
             *)FindCurrentContext(this);
  if (this_00 ==
      (map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
       *)0x0) goto LAB_03c72768;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a8);
  GetAllCompletionStrings(this,(vector *)avStack_a8);
  lVar12 = *(long *)(this + 0x158);
  cVar2 = FUN_054765e8(lVar12 + 0xe8);
  if (cVar2 == '\0') {
    lVar12 = FUN_05476818(lVar12 + 0xe8,0x20,0);
    if (lVar12 == -1) {
      cVar2 = std::vector<std::wstring,std::allocator<std::wstring>>::empty
                        ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_a8);
      if (cVar2 != '\0') goto LAB_03c72810;
      FUN_05478178((wstring *)&local_b0,&DAT_056f11a8,(exception_ptr *)&local_b8);
      AddLine(this,(wstring *)&local_b0,0,false);
      FUN_05476c50((wstring *)&local_b0);
      nop();
      FUN_05478178((wstring *)&local_b0,L"Available Commands",(exception_ptr *)&local_b8);
      AddLine(this,(wstring *)&local_b0,0,false);
      FUN_05476c50((wstring *)&local_b0);
      nop();
      FUN_05478178((wstring *)&local_b0,L"--------------------",(exception_ptr *)&local_b8);
      AddLine(this,(wstring *)&local_b0,0,false);
      FUN_05476c50((wstring *)&local_b0);
      nop();
      *(int *)(this + 0x208) = *(int *)(this + 0x208) + 3;
      local_c0[0] = 0;
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_a8);
      while( true ) {
        local_b0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_a8);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0)
        ;
        if (!bVar3) break;
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
        uVar4 = FUN_054765d0();
        local_b0 = CONCAT44(local_b0._4_4_,uVar4);
        puVar7 = (uint *)eastl::max_alt<int>((int *)local_c0,(int *)&local_b0);
        local_c0[0] = *puVar7;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
      }
      local_c0[0] = local_c0[0] + 1;
      local_b0 = CONCAT44(local_b0._4_4_,0x1f);
      puVar7 = (uint *)eastl::min_alt<int>((int *)&local_b0,(int *)local_c0);
      local_c0[0] = *puVar7;
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_a8);
      while( true ) {
        local_b0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_a8);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0)
        ;
        if (!bVar3) break;
        if (0x14 < *(int *)(this + 0x208)) {
          puVar10 = &uStack_c8;
          pwVar9 = L" ^fff71f^[...]^ffffff^";
          goto LAB_03c7282c;
        }
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
        lVar12 = FUN_054765d0();
        uVar1 = (int)local_c0[0] - lVar12;
        if (uVar1 != 0) {
          lVar12 = (uVar1 - 4 >> 2) + 1;
          if (uVar1 - 1 < 3) {
            iVar11 = 0;
          }
          else {
            local_90[1] = 0x2000000020;
            local_90[0] = 0x2000000020;
            if (lVar12 != 1) {
              local_90[3] = 0x2000000020;
              local_90[2] = 0x2000000020;
              if (lVar12 != 2) {
                local_90[5] = 0x2000000020;
                local_90[4] = 0x2000000020;
                if (lVar12 != 3) {
                  local_90[7] = 0x2000000020;
                  local_90[6] = 0x2000000020;
                  if (lVar12 != 4) {
                    local_90[9] = 0x2000000020;
                    local_90[8] = 0x2000000020;
                    if (lVar12 != 5) {
                      local_90[0xb] = 0x2000000020;
                      local_90[10] = 0x2000000020;
                      if (lVar12 != 6) {
                        local_90[0xd] = 0x2000000020;
                        local_90[0xc] = 0x2000000020;
                        if (lVar12 != 7) {
                          local_90[0xf] = 0x2000000020;
                          local_90[0xe] = 0x2000000020;
                        }
                      }
                    }
                  }
                }
              }
            }
            iVar11 = (int)(lVar12 * 4);
            if (lVar12 * 4 - uVar1 == 0) goto LAB_03c72bd0;
          }
          *(undefined4 *)((long)local_90 + (long)iVar11 * 4) = 0x20;
          if ((ulong)(long)(iVar11 + 1) < uVar1) {
            *(undefined4 *)((long)local_90 + (long)(iVar11 + 1) * 4) = 0x20;
            if ((ulong)(long)(iVar11 + 2) < uVar1) {
              *(undefined4 *)((long)local_90 + (long)(iVar11 + 2) * 4) = 0x20;
            }
          }
        }
LAB_03c72bd0:
        *(undefined4 *)((long)local_90 + uVar1 * 4) = 0;
        pwVar8 = (wstring *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
        cVar2 = std::operator==(pwVar8,(wstring *)(*(long *)(this + 0x158) + 0xe8));
        if (cVar2 == '\0') {
          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
          uVar5 = FUN_054766ec();
          pwVar8 = (wstring *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
          lVar12 = std::
                   map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
                   ::operator[](this_00,pwVar8);
          uVar6 = FUN_054766ec(lVar12 + 0x18);
          Sexy::StrFormat(L"^fff71f^%ls^ffffff^:%ls%ls",(wstring *)&local_b0,uVar5,local_90,uVar6);
          AddLine(this,(wstring *)&local_b0,0,false);
          FUN_05476c50((wstring *)&local_b0);
        }
        else {
          std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
          uVar5 = FUN_054766ec();
          pwVar8 = (wstring *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
          lVar12 = std::
                   map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
                   ::operator[](this_00,pwVar8);
          uVar6 = FUN_054766ec(lVar12 + 0x18);
          Sexy::StrFormat(L"^44f744^%ls:^99f799^%ls%ls^ffffff^",(wstring *)&local_b0,uVar5,local_90,
                          uVar6);
          AddLine(this,(wstring *)&local_b0,0,false);
          FUN_05476c50((wstring *)&local_b0);
        }
        *(int *)(this + 0x208) = *(int *)(this + 0x208) + 1;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b8);
      }
    }
    else {
      FUN_05477da4((wstring *)local_c0,*(long *)(this + 0x158) + 0xe8,0,lVar12);
      local_b8 = std::
                 map<std::wstring,ConsoleAction,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,ConsoleAction>>>
                 ::find(this_00,(wstring *)local_c0);
      local_b0 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_00);
      bVar3 = eastl::operator!=((rbtree_iterator *)&local_b8,(rbtree_iterator *)&local_b0);
      if (bVar3) {
        *(int *)(this + 0x208) = *(int *)(this + 0x208) + 1;
        uVar5 = FUN_054766ec((wstring *)local_c0);
        lVar12 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_b8);
        uVar6 = FUN_054766ec(lVar12 + 0x20);
        Sexy::StrFormat(L"^44f744^%ls:^99f799^%ls^ffffff^",(rbtree_iterator *)&local_b0,uVar5,uVar6)
        ;
        AddLine(this,(wstring *)&local_b0,0,false);
        FUN_05476c50((rbtree_iterator *)&local_b0);
        FUN_05476c50((wstring *)local_c0);
      }
      else {
        FUN_05476c50((wstring *)local_c0);
LAB_03c72810:
        puVar10 = &local_b8;
        pwVar9 = L"^ffff66^No matching commands^ffffff^";
        *(int *)(this + 0x208) = *(int *)(this + 0x208) + 1;
LAB_03c7282c:
        FUN_05478178((wstring *)&local_b0,pwVar9,puVar10);
        AddLine(this,(wstring *)&local_b0,0,false);
        FUN_05476c50((wstring *)&local_b0);
        nop();
      }
    }
  }
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)avStack_a8);
LAB_03c72768:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::EditProcessKey(Sexy::KeyCode) */

void __thiscall CommandConsole::EditProcessKey(CommandConsole *this,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0xd) {
    plVar6 = *(long **)(this + 0x158);
    pcVar7 = *(code **)(*plVar6 + 0x340);
    FUN_05478178(auStack_10,&DAT_056f11a8,auStack_18);
    (*pcVar7)(plVar6,auStack_10,1);
    FUN_05476c50(auStack_10);
    nop();
    ResetCompletion(this);
  }
  else {
    UpdateCompletionHelp(this);
    if ((param_2 == 0x26) && (*(char *)(*(long *)(this + 0x18) + 0x161) != '\0')) {
      iVar1 = *(int *)(this + 0x1f8) + -1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      *(int *)(this + 0x1f8) = iVar1;
    }
    else if ((*(char *)(*(long *)(this + 0x18) + 0x161) == '\0') || (param_2 != 0x28)) {
      if (param_2 == 0x26) {
        if (*(int *)(this + 0x1fc) < 1) goto LAB_03c72ce8;
        iVar1 = *(int *)(this + 0x1fc) + -1;
        uVar5 = *(undefined8 *)(this + 0x100);
        *(int *)(this + 0x1fc) = iVar1;
      }
      else {
        if (param_2 != 0x28) goto LAB_03c72ce8;
        uVar5 = *(undefined8 *)(this + 0x100);
        iVar1 = *(int *)(this + 0x1fc) + 1;
        iVar2 = FUN_03c6e900(uVar5,*(undefined8 *)(this + 0x108));
        if (iVar2 <= iVar1) goto LAB_03c72ce8;
        *(int *)(this + 0x1fc) = iVar1;
      }
      uVar5 = FUN_03c6e920(uVar5,(long)iVar1);
      thunk_FUN_05477b9c(*(long *)(this + 0x158) + 0xe8,uVar5);
      lVar4 = *(long *)(this + 0x158);
      uVar3 = FUN_054765d0(lVar4 + 0xe8);
      *(undefined4 *)(lVar4 + 0x134) = uVar3;
    }
    else {
      iVar1 = *(int *)(this + 0x1f8);
      *(int *)(this + 0x1f8) = iVar1 + 1;
      iVar2 = FUN_03c6e900(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120));
      if (iVar2 <= iVar1 + 1) {
        *(int *)(this + 0x1f8) = iVar2 + -1;
      }
    }
  }
LAB_03c72ce8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::DoNextCompletion(bool) */

void __thiscall CommandConsole::DoNextCompletion(CommandConsole *this,bool param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  GetAllCompletionStrings(this,(vector *)&local_20);
  plVar6 = *(long **)(this + 0x158);
  uVar7 = *(undefined4 *)((long)plVar6 + 0x134);
  if (this[0x204] == (CommandConsole)0x0) {
    lVar5 = FUN_03c6e900(local_20,local_18);
    if (lVar5 != 0) {
      *(undefined4 *)(this + 0x200) = 0;
      lVar5 = 0;
      goto LAB_03c72ee0;
    }
  }
  else {
    uVar7 = (undefined4)plVar6[0x27];
    uVar3 = FUN_03c6e900(local_20,local_18);
    if (uVar3 != 0) {
      if (param_1) {
        iVar1 = *(int *)(this + 0x200) + -1;
        if (iVar1 < 0) {
          iVar1 = (int)uVar3 + -1;
          *(int *)(this + 0x200) = iVar1;
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = (ulong)(long)iVar1 / uVar3;
          }
          lVar5 = (long)iVar1 - uVar2 * uVar3;
        }
        else {
          *(int *)(this + 0x200) = iVar1;
          uVar2 = 0;
          if (uVar3 != 0) {
            uVar2 = (ulong)(long)iVar1 / uVar3;
          }
          lVar5 = (long)iVar1 - uVar2 * uVar3;
        }
      }
      else {
        iVar1 = *(int *)(this + 0x200) + 1;
        *(int *)(this + 0x200) = iVar1;
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = (ulong)(long)iVar1 / uVar3;
        }
        lVar5 = (long)iVar1 - uVar2 * uVar3;
      }
LAB_03c72ee0:
      uVar4 = FUN_03c6e920(local_20,lVar5);
      (**(code **)(*plVar6 + 0x340))(plVar6,uVar4,1);
      *(undefined4 *)(*(long *)(this + 0x158) + 0x138) = uVar7;
      this[0x204] = (CommandConsole)0x1;
      goto LAB_03c72e94;
    }
  }
  this[0x204] = (CommandConsole)0x0;
LAB_03c72e94:
  UpdateCompletionHelp(this);
  std::vector<std::wstring,std::allocator<std::wstring>>::~vector
            ((vector<std::wstring,std::allocator<std::wstring>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::EditKeyCodeDown(Sexy::KeyCode) */

void __thiscall CommandConsole::EditKeyCodeDown(CommandConsole *this,uint param_2)

{
  bool bVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x204] == (CommandConsole)0x0) || ((param_2 & 0xfffffffb) == 9)) ||
     ((param_2 - 0x10 & 0xffffffef) == 0)) {
    if (param_2 == 9) {
      DoNextCompletion(this,*(bool *)(*(long *)(this + 0x18) + 0x160));
      bVar1 = true;
      goto LAB_03c7302c;
    }
    bVar1 = param_2 == 0xd || param_2 == 0x20;
    if (param_2 != 0xd && param_2 != 0x20) goto LAB_03c7302c;
  }
  else {
    plVar2 = *(long **)(this + 0x158);
    pcVar3 = *(code **)(*plVar2 + 0x340);
    FUN_05477da4(auStack_10,plVar2 + 0x1d,0,(long)(int)plVar2[0x27]);
    (*pcVar3)(plVar2,auStack_10,1);
    FUN_05476c50(auStack_10);
  }
  *(undefined4 *)(*(long *)(this + 0x158) + 0x138) =
       *(undefined4 *)(*(long *)(this + 0x158) + 0x134);
  ResetCompletion(this);
  bVar1 = false;
LAB_03c7302c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::GetDisplayLineHeight(int, Sexy::Graphics*) */

void __thiscall
CommandConsole::GetDisplayLineHeight(CommandConsole *this,int param_1,Graphics *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  wstring *pwVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_14 [4];
  int local_10 [2];
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x130);
  lVar6 = (long)param_1;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03c6e90c(uVar7,*(undefined8 *)(this + 0x138));
  if (iVar1 <= param_1) {
    local_10[0] = -1;
    std::vector<int,std::allocator<int>>::resize
              ((vector<int,std::allocator<int>> *)(this + 0x130),(long)(param_1 + 1),local_10);
    uVar7 = *(undefined8 *)(this + 0x130);
  }
  piVar3 = (int *)FUN_03c6e918(uVar7,lVar6);
  iVar1 = *piVar3;
  if (iVar1 == -1) {
    if (*(Effect_Barrage **)(this + 0x148) == (Effect_Barrage *)0x0) {
      lVar8 = *(long *)(this + 0x150);
      if (lVar8 != 0) {
        uVar7 = FUN_03c6e920(*(undefined8 *)(this + 0x118),lVar6);
        FUN_05477b24(local_10,uVar7);
        uVar7 = FUN_03c6e918(*(undefined8 *)(this + 0x130),lVar6);
        Sexy::PrimeTypeface::SizeString_Paragraph(0,lVar8,local_10,auStack_14,uVar7);
        FUN_05476c50(local_10);
        piVar3 = (int *)FUN_03c6e918(*(undefined8 *)(this + 0x130),lVar6);
        iVar1 = *piVar3;
      }
    }
    else {
      Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_2,*(Effect_Barrage **)(this + 0x148));
      puVar4 = (undefined4 *)FUN_03c6e918(*(undefined8 *)(this + 0x130),lVar6);
      pwVar5 = (wstring *)FUN_03c6e920(*(undefined8 *)(this + 0x118),lVar6);
      uVar2 = Sexy::Graphics::GetWordWrappedHeight
                        (param_2,*(int *)(this + 0x50) + -10,pwVar5,-1,(int *)0x0,(int *)0x0);
      *puVar4 = uVar2;
      piVar3 = (int *)FUN_03c6e918(*(undefined8 *)(this + 0x130),lVar6);
      iVar1 = *piVar3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::DrawWithFont(Sexy::Graphics*) */

void __thiscall CommandConsole::DrawWithFont(CommandConsole *this,Graphics *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  wstring *pwVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_Barrage::SetViceBarrage((Effect_Barrage *)param_1,*(Effect_Barrage **)(this + 0x148));
  dVar12 = Sexy::CurvedVal::operator_cast_to_double((CurvedVal *)(this + 0x168));
  if (dVar12 == 1.0) {
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::Translate(param_1,0,-*(int *)(this + 0x4c));
    uVar10 = *(undefined8 *)(this + 0x220);
    iVar3 = FUN_03c6e928(uVar10,*(undefined8 *)(this + 0x228));
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      lVar11 = (long)iVar3;
      iVar2 = 0x14;
      do {
        piVar9 = (int *)FUN_03c6e934(uVar10,lVar11);
        iVar4 = *piVar9;
        iVar5 = FUN_03c6e900(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120));
        if ((iVar4 < iVar5) && (-1 < iVar4)) {
          iVar5 = piVar9[1];
          if (*(int *)(Sexy::gSexyAppBase + 0xd8) < iVar2) break;
          iVar6 = GetDisplayLineHeight(this,iVar3,param_1);
          iVar7 = (**(code **)(**(long **)(this + 0x148) + 0x68))(*(long **)(this + 0x148));
          if (iVar7 < iVar6 / 2) {
            iVar7 = (**(code **)(**(long **)(this + 0x148) + 0x68))(*(long **)(this + 0x148));
            iVar2 = iVar2 + (iVar6 / 2 - iVar7) + 0x14;
          }
          uVar1 = *(uint *)(this + 0x218);
          if (iVar5 < (int)uVar1) {
            Sexy::Color::FAlpha((Color *)(ulong)uVar1,(float)iVar5 / (float)(int)uVar1);
            Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
            Sexy::Graphics::SetColorizeImages(param_1,true);
          }
          else {
            Sexy::Color::Color((Color *)aIStack_18,-1);
            Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
          }
          Sexy::Color::Color((Color *)aIStack_18,0,*(int *)(param_1 + 0x6c));
          Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
          pwVar8 = (wstring *)FUN_03c6e920(*(undefined8 *)(this + 0x118),(long)iVar4);
          Sexy::Graphics::WriteString
                    (param_1,pwVar8,*(int *)(this + 0x48) + 0xb,iVar2 + 1,-1,-1,true,0,-1,-1);
          Sexy::Color::Color((Color *)aIStack_18,-1,*(int *)(param_1 + 0x6c));
          Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
          pwVar8 = (wstring *)FUN_03c6e920(*(undefined8 *)(this + 0x118),(long)iVar4);
          Sexy::Graphics::WriteString
                    (param_1,pwVar8,*(int *)(this + 0x48) + 10,iVar2,-1,-1,true,0,-1,-1);
          Sexy::Color::Color((Color *)aIStack_18,-1);
          Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
          Sexy::Graphics::SetColorizeImages(param_1,false);
          iVar4 = (**(code **)(**(long **)(this + 0x148) + 0x68))(*(long **)(this + 0x148));
          iVar2 = iVar2 + iVar4;
        }
        iVar3 = iVar3 + -1;
        lVar11 = lVar11 + -1;
        if (iVar3 == -1) break;
        uVar10 = *(undefined8 *)(this + 0x220);
      } while( true );
    }
    Sexy::Graphics::Translate(param_1,0,*(int *)(this + 0x4c));
  }
  else {
    Sexy::Insets::Insets(aIStack_18,10,10,10,0xdc);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x238));
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    iVar3 = *(int *)(*(long *)(this + 0x158) + 0x4c);
    iVar2 = (**(code **)(**(long **)(this + 0x148) + 0x68))(*(long **)(this + 0x148));
    iVar3 = iVar3 - iVar2;
    if ((-1 < *(int *)(this + 0x1f8)) && (*(int *)(this + 0x4c) <= iVar3)) {
      lVar11 = (long)*(int *)(this + 0x1f8);
      do {
        iVar2 = (**(code **)(**(long **)(this + 0x148) + 0x68))(*(long **)(this + 0x148));
        if (iVar2 < 10) {
          iVar2 = (**(code **)(**(long **)(this + 0x148) + 0x68))(*(long **)(this + 0x148));
          iVar3 = iVar3 - (0x1e - iVar2);
        }
        Sexy::Insets::Insets
                  (aIStack_18,*(int *)(this + 0x48) + 10,iVar3,*(int *)(this + 0x50) + -10,
                   *(int *)(this + 0x238));
        pwVar8 = (wstring *)FUN_03c6e920(*(undefined8 *)(this + 0x118),lVar11);
        Sexy::Graphics::WriteWordWrapped
                  (param_1,(TRect *)aIStack_18,pwVar8,-1,-1,(int *)0x0,-1,(int *)0x0,(int *)0x0,true
                  );
        iVar2 = (**(code **)(**(long **)(this + 0x148) + 0x68))(*(long **)(this + 0x148));
        iVar3 = iVar3 - iVar2;
      } while ((lVar11 != 0) && (lVar11 = lVar11 + -1, *(int *)(this + 0x4c) <= iVar3));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::DrawWithPrimeFont(Sexy::Graphics*) */

void __thiscall CommandConsole::DrawWithPrimeFont(CommandConsole *this,Graphics *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_40 [8];
  Color aCStack_38 [16];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  dVar13 = Sexy::CurvedVal::operator_cast_to_double((CurvedVal *)(this + 0x168));
  if (dVar13 == 1.0) {
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::Translate(param_1,0,-*(int *)(this + 0x4c));
    uVar6 = *(undefined8 *)(this + 0x220);
    iVar8 = FUN_03c6e928(uVar6,*(undefined8 *)(this + 0x228));
    iVar8 = iVar8 + -1;
    if (-1 < iVar8) {
      lVar9 = (long)iVar8;
      iVar10 = 0x14;
      do {
        piVar7 = (int *)FUN_03c6e934(uVar6,lVar9);
        iVar1 = *piVar7;
        iVar3 = FUN_03c6e900(*(undefined8 *)(this + 0x118),*(undefined8 *)(this + 0x120));
        if ((iVar1 < iVar3) && (-1 < iVar1)) {
          iVar3 = piVar7[1];
          if (*(int *)(Sexy::gSexyAppBase + 0xd8) < iVar10) break;
          iVar4 = GetDisplayLineHeight(this,iVar8,param_1);
          iVar5 = (**(code **)(**(long **)(this + 0x148) + 0x68))(*(long **)(this + 0x148));
          if (iVar5 < iVar4 / 2) {
            iVar5 = (**(code **)(**(long **)(this + 0x148) + 0x68))(*(long **)(this + 0x148));
            iVar10 = iVar10 + (iVar4 / 2 - iVar5) + 0x14;
          }
          uVar2 = *(uint *)(this + 0x218);
          if (iVar3 < (int)uVar2) {
            Sexy::Color::FAlpha((Color *)(ulong)uVar2,(float)iVar3 / (float)(int)uVar2);
            Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
            Sexy::Graphics::SetColorizeImages(param_1,true);
          }
          else {
            Sexy::Color::Color((Color *)aIStack_18,-1);
            Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
          }
          Sexy::Color::Color(aCStack_38,0,*(int *)(param_1 + 0x6c));
          Sexy::Color::Color(aCStack_28,-1,*(int *)(param_1 + 0x6c));
          uVar11 = *(undefined8 *)(this + 0x150);
          iVar3 = *(int *)(this + 0x48);
          uVar6 = FUN_03c6e920(*(undefined8 *)(this + 0x118),(long)iVar1);
          FUN_05477b24(auStack_40,uVar6);
          Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_38);
          Sexy::PrimeTypeface::DrawString_Simple
                    ((PrimeTypeface *)(float)(iVar3 + 0xb),(float)(iVar10 + 1),uVar11,param_1,
                     auStack_40,aIStack_18,0);
          FUN_05476c50(auStack_40);
          iVar3 = *(int *)(this + 0x48);
          uVar11 = *(undefined8 *)(this + 0x150);
          uVar6 = FUN_03c6e920(*(undefined8 *)(this + 0x118),(long)iVar1);
          FUN_05477b24(auStack_40,uVar6);
          Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_28);
          Sexy::PrimeTypeface::DrawString_Simple
                    ((PrimeTypeface *)(float)(iVar3 + 10),(float)iVar10,uVar11,param_1,auStack_40,
                     aIStack_18,0);
          FUN_05476c50(auStack_40);
          Sexy::Color::Color((Color *)aIStack_18,-1);
          Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
          Sexy::Graphics::SetColorizeImages(param_1,false);
          fVar12 = (float)Sexy::PrimeTypeface::GetHeight(*(PrimeTypeface **)(this + 0x150));
          iVar10 = (int)(fVar12 + (float)iVar10);
        }
        iVar8 = iVar8 + -1;
        lVar9 = lVar9 + -1;
        if (iVar8 == -1) break;
        uVar6 = *(undefined8 *)(this + 0x220);
      } while( true );
    }
    Sexy::Graphics::Translate(param_1,0,*(int *)(this + 0x4c));
  }
  else {
    Sexy::Insets::Insets(aIStack_18,10,10,10,0xdc);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x238));
    Sexy::Color::Color((Color *)aIStack_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
    iVar8 = *(int *)(*(long *)(this + 0x158) + 0x4c);
    fVar12 = (float)Sexy::PrimeTypeface::GetHeight(*(PrimeTypeface **)(this + 0x150));
    iVar8 = (int)((float)iVar8 - fVar12);
    if ((-1 < *(int *)(this + 0x1f8)) && (*(int *)(this + 0x4c) <= iVar8)) {
      lVar9 = (long)*(int *)(this + 0x1f8);
      do {
        fVar12 = (float)Sexy::PrimeTypeface::GetHeight(*(PrimeTypeface **)(this + 0x150));
        if (fVar12 < 10.0) {
          fVar12 = (float)Sexy::PrimeTypeface::GetHeight(*(PrimeTypeface **)(this + 0x150));
          iVar8 = (int)((float)iVar8 + -30.0 + fVar12);
        }
        iVar10 = *(int *)(this + 0x48);
        iVar1 = *(int *)(this + 0x50);
        iVar3 = *(int *)(this + 0x238);
        uVar11 = *(undefined8 *)(this + 0x150);
        uVar6 = FUN_03c6e920(*(undefined8 *)(this + 0x118),lVar9);
        FUN_05477b24(aCStack_28,uVar6);
        Sexy::Color::Color((Color *)aIStack_18,0xffffffff);
        Sexy::PrimeTypeface::DrawString_Paragraph
                  ((PrimeTypeface *)(float)(iVar10 + 10),(float)iVar8,(float)(iVar1 + -10),
                   (float)iVar3,uVar11,param_1,aCStack_28,0,0,aIStack_18,0);
        FUN_05476c50(aCStack_28);
        fVar12 = (float)Sexy::PrimeTypeface::GetHeight(*(PrimeTypeface **)(this + 0x150));
        iVar8 = (int)((float)iVar8 - fVar12);
      } while ((lVar9 != 0) && (lVar9 = lVar9 + -1, *(int *)(this + 0x4c) <= iVar8));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommandConsole::Draw(Sexy::Graphics*) */

void __thiscall CommandConsole::Draw(CommandConsole *this,Graphics *param_1)

{
  if (*(long *)(this + 0x148) != 0) {
    DrawWithFont(this,param_1);
    return;
  }
  if (*(long *)(this + 0x150) != 0) {
    DrawWithPrimeFont(this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::EraseContext(int) */

void __thiscall CommandConsole::EraseContext(CommandConsole *this,int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  long lVar4;
  
  uVar5 = *(undefined8 *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03c6e8d0(uVar5,*(undefined8 *)(this + 0xf0));
  lVar4 = 0;
  do {
    iVar3 = (int)lVar4;
    if (iVar1 <= iVar3) goto LAB_03c74254;
    lVar2 = FUN_03c6e8f0(uVar5,lVar4);
    lVar4 = lVar4 + 1;
  } while (*(int *)(lVar2 + 0x30) != param_1);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe8));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>::
             operator+((__normal_iterator<Sexy::Touch*,std::vector<Sexy::Touch,std::allocator<Sexy::Touch>>>
                        *)&local_20,(long)iVar3);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<ConsoleContext,std::allocator<ConsoleContext>>::erase
            ((vector<ConsoleContext,std::allocator<ConsoleContext>> *)(this + 0xe8),local_10);
  if (*(int *)(this + 500) == param_1) {
    *(undefined4 *)(this + 500) = 0;
  }
LAB_03c74254:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandConsole::Update() */

void __thiscall CommandConsole::Update(CommandConsole *this)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  plVar7 = *(long **)(this + 0x158);
  uVar6 = 0;
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  pcVar4 = *(code **)(*plVar7 + 0x158);
  dVar9 = Sexy::CurvedVal::operator_cast_to_double((CurvedVal *)(this + 0x168));
  (*pcVar4)(plVar7,dVar9 != 1.0);
  iVar1 = *(int *)(this + 0x210);
  dVar9 = Sexy::CurvedVal::operator_cast_to_double((CurvedVal *)(this + 0x168));
  *(int *)(this + 0x4c) = iVar1 - (int)(dVar9 * (double)*(int *)(this + 0x238));
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  (**(code **)(*(long *)this + 0xd8))(this);
  do {
    uVar8 = *(undefined8 *)(this + 0x220);
    uVar2 = FUN_03c6e928(uVar8,*(undefined8 *)(this + 0x228));
    while( true ) {
      if (uVar2 <= uVar5) {
        *(int *)(this + 0x20c) = *(int *)(this + 0x20c) + 1;
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      lVar3 = FUN_03c6e934(uVar8,uVar5);
      iVar1 = *(int *)(lVar3 + 4) + -1;
      *(int *)(lVar3 + 4) = iVar1;
      if (iVar1 < 1) break;
      uVar5 = (ulong)((int)uVar6 + 1);
      uVar6 = uVar5;
    }
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x220));
    local_18 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_20,uVar5);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<CommandConsole::DrawScreenText,std::allocator<CommandConsole::DrawScreenText>>::
    erase((vector<CommandConsole::DrawScreenText,std::allocator<CommandConsole::DrawScreenText>> *)
          (this + 0x220),local_10);
  } while( true );
}


/* CommandConsole::AddLineWarn(std::wstring const&, int, bool) */

void __thiscall
CommandConsole::AddLineWarn(CommandConsole *this,wstring *param_1,int param_2,bool param_3)

{
  addLineHelper(this,param_1,1,param_2,param_3);
  return;
}


/* CommandConsole::AddLineErr(std::wstring const&, int, bool) */

void __thiscall
CommandConsole::AddLineErr(CommandConsole *this,wstring *param_1,int param_2,bool param_3)

{
  addLineHelper(this,param_1,2,param_2,param_3);
  return;
}


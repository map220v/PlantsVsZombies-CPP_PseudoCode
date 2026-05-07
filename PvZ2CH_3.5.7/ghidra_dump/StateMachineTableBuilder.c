// Class: StateMachineTableBuilder


/* StateMachineTableBuilder::StateMachineTableBuilder() */

void __thiscall StateMachineTableBuilder::StateMachineTableBuilder(StateMachineTableBuilder *this)

{
  Sexy::LazySingleton<StateMachineTableBuilder>::LazySingleton
            ((LazySingleton<StateMachineTableBuilder> *)this);
  *(undefined ***)this = &PTR__StateMachineTableBuilder_06851890;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<IntroState>&
   StateMachineTableBuilder::RegisterClass<IntroState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<IntroState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<IntroState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<IntroState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<IntroState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_0329b2c8(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_032dc76c:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<IntroState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<IntroState>::FillFrom(this_00,pSVar3);
      goto LAB_032dc76c;
    }
    pRVar2 = (RtClass *)FUN_0329b2c8(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<IntroState> const*
   StateMachineTableBuilder::GetTable<IntroState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<IntroState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_0329b2c8(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<IntroState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<IntroState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<ZombieState>&
   StateMachineTableBuilder::RegisterClass<ZombieState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<ZombieState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<ZombieState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<ZombieState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<ZombieState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_033d37dc(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_033dcdbc:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<ZombieState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<ZombieState>::FillFrom(this_00,pSVar3);
      goto LAB_033dcdbc;
    }
    pRVar2 = (RtClass *)FUN_033d37dc(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<ZombieState> const*
   StateMachineTableBuilder::GetTable<ZombieState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<ZombieState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_033d37dc(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<ZombieState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<ZombieState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<RunningPlayerState>&
   StateMachineTableBuilder::RegisterClass<RunningPlayerState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<RunningPlayerState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<RunningPlayerState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<RunningPlayerState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<RunningPlayerState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_033e937c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_033f644c:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<RunningPlayerState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<RunningPlayerState>::FillFrom(this_00,pSVar3);
      goto LAB_033f644c;
    }
    pRVar2 = (RtClass *)FUN_033e937c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<RunningPlayerState> const*
   StateMachineTableBuilder::GetTable<RunningPlayerState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<RunningPlayerState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_033e937c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<RunningPlayerState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<RunningPlayerState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<WidgetState>&
   StateMachineTableBuilder::RegisterClass<WidgetState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<WidgetState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<WidgetState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<WidgetState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<WidgetState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_0351d43c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_0352871c:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<WidgetState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<WidgetState>::FillFrom(this_00,pSVar3);
      goto LAB_0352871c;
    }
    pRVar2 = (RtClass *)FUN_0351d43c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<WidgetState> const*
   StateMachineTableBuilder::GetTable<WidgetState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<WidgetState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_0351d43c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<WidgetState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<WidgetState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PVZ1IState>&
   StateMachineTableBuilder::RegisterClass<PVZ1IState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<PVZ1IState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<PVZ1IState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<PVZ1IState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<PVZ1IState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03615b80(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03617e24:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<PVZ1IState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<PVZ1IState>::FillFrom(this_00,pSVar3);
      goto LAB_03617e24;
    }
    pRVar2 = (RtClass *)FUN_03615b80(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PVZ1IState> const*
   StateMachineTableBuilder::GetTable<PVZ1IState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<PVZ1IState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03615b80(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<PVZ1IState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<PVZ1IState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<CollectableState>&
   StateMachineTableBuilder::RegisterClass<CollectableState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<CollectableState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<CollectableState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<CollectableState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<CollectableState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_038e4ac0(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_038e58ac:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<CollectableState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<CollectableState>::FillFrom(this_00,pSVar3);
      goto LAB_038e58ac;
    }
    pRVar2 = (RtClass *)FUN_038e4ac0(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<CollectableState> const*
   StateMachineTableBuilder::GetTable<CollectableState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<CollectableState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_038e4ac0(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<CollectableState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<CollectableState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<MoleState>& StateMachineTableBuilder::RegisterClass<MoleState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<MoleState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<MoleState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<MoleState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<MoleState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03b50558(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03b54058:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<MoleState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<MoleState>::FillFrom(this_00,pSVar3);
      goto LAB_03b54058;
    }
    pRVar2 = (RtClass *)FUN_03b50558(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<MoleState> const* StateMachineTableBuilder::GetTable<MoleState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<MoleState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03b50558(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<MoleState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<MoleState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PowerupState>&
   StateMachineTableBuilder::RegisterClass<PowerupState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<PowerupState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<PowerupState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<PowerupState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<PowerupState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03b7520c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03b76690:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<PowerupState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<PowerupState>::FillFrom(this_00,pSVar3);
      goto LAB_03b76690;
    }
    pRVar2 = (RtClass *)FUN_03b7520c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PowerupState> const*
   StateMachineTableBuilder::GetTable<PowerupState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<PowerupState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03b7520c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<PowerupState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<PowerupState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<BombState>& StateMachineTableBuilder::RegisterClass<BombState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<BombState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<BombState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<BombState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<BombState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03b9d46c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03b9ef24:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<BombState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<BombState>::FillFrom(this_00,pSVar3);
      goto LAB_03b9ef24;
    }
    pRVar2 = (RtClass *)FUN_03b9d46c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<BombState> const* StateMachineTableBuilder::GetTable<BombState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<BombState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03b9d46c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<BombState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<BombState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<ModernNewspaperZombieState>&
   StateMachineTableBuilder::RegisterClass<ModernNewspaperZombieState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<ModernNewspaperZombieState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<ModernNewspaperZombieState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<ModernNewspaperZombieState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<ModernNewspaperZombieState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03bc2f34(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03bc4808:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<ModernNewspaperZombieState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<ModernNewspaperZombieState>::FillFrom(this_00,pSVar3);
      goto LAB_03bc4808;
    }
    pRVar2 = (RtClass *)FUN_03bc2f34(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<ModernNewspaperZombieState> const*
   StateMachineTableBuilder::GetTable<ModernNewspaperZombieState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<ModernNewspaperZombieState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03bc2f34(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<ModernNewspaperZombieState>(this,pRVar2),
       pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<ModernNewspaperZombieState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PlantState>&
   StateMachineTableBuilder::RegisterClass<PlantState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<PlantState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<PlantState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<PlantState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<PlantState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03bde600(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03be1304:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<PlantState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<PlantState>::FillFrom(this_00,pSVar3);
      goto LAB_03be1304;
    }
    pRVar2 = (RtClass *)FUN_03bde600(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PlantState> const*
   StateMachineTableBuilder::GetTable<PlantState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<PlantState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03bde600(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<PlantState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<PlantState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<CrazyNPCState>&
   StateMachineTableBuilder::RegisterClass<CrazyNPCState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<CrazyNPCState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<CrazyNPCState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<CrazyNPCState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<CrazyNPCState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03c7f81c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03c83274:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<CrazyNPCState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<CrazyNPCState>::FillFrom(this_00,pSVar3);
      goto LAB_03c83274;
    }
    pRVar2 = (RtClass *)FUN_03c7f81c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<CrazyNPCState> const*
   StateMachineTableBuilder::GetTable<CrazyNPCState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<CrazyNPCState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03c7f81c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<CrazyNPCState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<CrazyNPCState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<FTIState>& StateMachineTableBuilder::RegisterClass<FTIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<FTIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<FTIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<FTIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<FTIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03ce2e80(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03ce5350:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<FTIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<FTIState>::FillFrom(this_00,pSVar3);
      goto LAB_03ce5350;
    }
    pRVar2 = (RtClass *)FUN_03ce2e80(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<FTIState> const* StateMachineTableBuilder::GetTable<FTIState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<FTIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03ce2e80(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<FTIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<FTIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<FuseState>& StateMachineTableBuilder::RegisterClass<FuseState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<FuseState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<FuseState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<FuseState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<FuseState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03ce69bc(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03ce805c:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<FuseState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<FuseState>::FillFrom(this_00,pSVar3);
      goto LAB_03ce805c;
    }
    pRVar2 = (RtClass *)FUN_03ce69bc(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<FuseState> const* StateMachineTableBuilder::GetTable<FuseState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<FuseState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03ce69bc(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<FuseState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<FuseState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<OTIState>& StateMachineTableBuilder::RegisterClass<OTIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<OTIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<OTIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<OTIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<OTIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03e49548(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03e4b34c:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<OTIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<OTIState>::FillFrom(this_00,pSVar3);
      goto LAB_03e4b34c;
    }
    pRVar2 = (RtClass *)FUN_03e49548(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<OTIState> const* StateMachineTableBuilder::GetTable<OTIState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<OTIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03e49548(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<OTIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<OTIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<TDIState>& StateMachineTableBuilder::RegisterClass<TDIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<TDIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<TDIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<TDIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<TDIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03e4c018(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03e4d720:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<TDIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<TDIState>::FillFrom(this_00,pSVar3);
      goto LAB_03e4d720;
    }
    pRVar2 = (RtClass *)FUN_03e4c018(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<TDIState> const* StateMachineTableBuilder::GetTable<TDIState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<TDIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03e4c018(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<TDIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<TDIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SKIState>& StateMachineTableBuilder::RegisterClass<SKIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<SKIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<SKIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<SKIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<SKIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03e4e530(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03e5012c:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<SKIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<SKIState>::FillFrom(this_00,pSVar3);
      goto LAB_03e5012c;
    }
    pRVar2 = (RtClass *)FUN_03e4e530(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SKIState> const* StateMachineTableBuilder::GetTable<SKIState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<SKIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03e4e530(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<SKIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<SKIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SDIState>& StateMachineTableBuilder::RegisterClass<SDIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<SDIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<SDIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<SDIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<SDIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03e50cf0(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03e52d60:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<SDIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<SDIState>::FillFrom(this_00,pSVar3);
      goto LAB_03e52d60;
    }
    pRVar2 = (RtClass *)FUN_03e50cf0(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SDIState> const* StateMachineTableBuilder::GetTable<SDIState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<SDIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03e50cf0(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<SDIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<SDIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<ELIIState>& StateMachineTableBuilder::RegisterClass<ELIIState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<ELIIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<ELIIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<ELIIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<ELIIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03e53f34(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03e55884:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<ELIIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<ELIIState>::FillFrom(this_00,pSVar3);
      goto LAB_03e55884;
    }
    pRVar2 = (RtClass *)FUN_03e53f34(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<ELIIState> const* StateMachineTableBuilder::GetTable<ELIIState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<ELIIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03e53f34(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<ELIIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<ELIIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SCIState>& StateMachineTableBuilder::RegisterClass<SCIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<SCIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<SCIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<SCIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<SCIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03e56188(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03e57c6c:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<SCIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<SCIState>::FillFrom(this_00,pSVar3);
      goto LAB_03e57c6c;
    }
    pRVar2 = (RtClass *)FUN_03e56188(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SCIState> const* StateMachineTableBuilder::GetTable<SCIState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<SCIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03e56188(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<SCIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<SCIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<CMPState>& StateMachineTableBuilder::RegisterClass<CMPState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<CMPState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<CMPState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<CMPState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<CMPState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03e593c4(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03e5b410:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<CMPState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<CMPState>::FillFrom(this_00,pSVar3);
      goto LAB_03e5b410;
    }
    pRVar2 = (RtClass *)FUN_03e593c4(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<CMPState> const* StateMachineTableBuilder::GetTable<CMPState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<CMPState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03e593c4(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<CMPState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<CMPState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<TIState>& StateMachineTableBuilder::RegisterClass<TIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<TIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<TIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<TIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<TIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_03e5c5fc(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_03e5e3f0:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<TIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<TIState>::FillFrom(this_00,pSVar3);
      goto LAB_03e5e3f0;
    }
    pRVar2 = (RtClass *)FUN_03e5c5fc(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<TIState> const* StateMachineTableBuilder::GetTable<TIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<TIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_03e5c5fc(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<TIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<TIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<LaunchState>&
   StateMachineTableBuilder::RegisterClass<LaunchState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<LaunchState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<LaunchState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<LaunchState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<LaunchState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04034894(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04036f68:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<LaunchState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<LaunchState>::FillFrom(this_00,pSVar3);
      goto LAB_04036f68;
    }
    pRVar2 = (RtClass *)FUN_04034894(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<LaunchState> const*
   StateMachineTableBuilder::GetTable<LaunchState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<LaunchState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04034894(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<LaunchState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<LaunchState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<MSCState>& StateMachineTableBuilder::RegisterClass<MSCState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<MSCState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<MSCState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<MSCState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<MSCState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_040cfffc(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_040d522c:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<MSCState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<MSCState>::FillFrom(this_00,pSVar3);
      goto LAB_040d522c;
    }
    pRVar2 = (RtClass *)FUN_040cfffc(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<MSCState> const* StateMachineTableBuilder::GetTable<MSCState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<MSCState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_040cfffc(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<MSCState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<MSCState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<MSState>& StateMachineTableBuilder::RegisterClass<MSState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<MSState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<MSState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<MSState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<MSState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_040cfffc(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_040d6b98:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<MSState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<MSState>::FillFrom(this_00,pSVar3);
      goto LAB_040d6b98;
    }
    pRVar2 = (RtClass *)FUN_040cfffc(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<MSState> const* StateMachineTableBuilder::GetTable<MSState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<MSState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_040cfffc(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<MSState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<MSState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PHBState>& StateMachineTableBuilder::RegisterClass<PHBState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<PHBState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<PHBState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<PHBState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<PHBState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04222ecc(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04225cf0:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<PHBState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<PHBState>::FillFrom(this_00,pSVar3);
      goto LAB_04225cf0;
    }
    pRVar2 = (RtClass *)FUN_04222ecc(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PHBState> const* StateMachineTableBuilder::GetTable<PHBState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<PHBState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04222ecc(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<PHBState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<PHBState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<HBPState>& StateMachineTableBuilder::RegisterClass<HBPState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<HBPState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<HBPState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<HBPState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<HBPState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04226f88(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_042296f8:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<HBPState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<HBPState>::FillFrom(this_00,pSVar3);
      goto LAB_042296f8;
    }
    pRVar2 = (RtClass *)FUN_04226f88(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<HBPState> const* StateMachineTableBuilder::GetTable<HBPState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<HBPState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04226f88(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<HBPState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<HBPState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PowerupCukeTutorialState>&
   StateMachineTableBuilder::RegisterClass<PowerupCukeTutorialState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<PowerupCukeTutorialState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<PowerupCukeTutorialState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<PowerupCukeTutorialState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<PowerupCukeTutorialState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04310930(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04314018:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<PowerupCukeTutorialState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<PowerupCukeTutorialState>::FillFrom(this_00,pSVar3);
      goto LAB_04314018;
    }
    pRVar2 = (RtClass *)FUN_04310930(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PowerupCukeTutorialState> const*
   StateMachineTableBuilder::GetTable<PowerupCukeTutorialState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<PowerupCukeTutorialState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04310930(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<PowerupCukeTutorialState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0
       )) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<PowerupCukeTutorialState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StateMachineTableBuilder::~StateMachineTableBuilder() */

void __thiscall StateMachineTableBuilder::~StateMachineTableBuilder(StateMachineTableBuilder *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *(undefined ***)this = &PTR__StateMachineTableBuilder_06851890;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 8);
    uVar2 = FUN_0449918c(uVar4,*(undefined8 *)(this + 0x10));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_04499198(uVar4,uVar3);
    AK::FreeHook((void *)*puVar1);
    uVar3 = uVar3 + 1;
  }
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::clear
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8));
  std::
  map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
  ::clear((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           *)(this + 0x20));
  std::
  map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
  ::~map((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
          *)(this + 0x20));
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::~vector
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8));
  Sexy::LazySingleton<StateMachineTableBuilder>::~LazySingleton
            ((LazySingleton<StateMachineTableBuilder> *)this);
  return;
}


/* StateMachineTableBuilder::~StateMachineTableBuilder() */

void __thiscall StateMachineTableBuilder::~StateMachineTableBuilder(StateMachineTableBuilder *this)

{
  ~StateMachineTableBuilder(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<WalrusStatueState>&
   StateMachineTableBuilder::RegisterClass<WalrusStatueState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<WalrusStatueState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<WalrusStatueState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<WalrusStatueState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<WalrusStatueState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04777418(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04778bfc:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<WalrusStatueState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<WalrusStatueState>::FillFrom(this_00,pSVar3);
      goto LAB_04778bfc;
    }
    pRVar2 = (RtClass *)FUN_04777418(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<WalrusStatueState> const*
   StateMachineTableBuilder::GetTable<WalrusStatueState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<WalrusStatueState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04777418(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<WalrusStatueState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<WalrusStatueState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PIState>& StateMachineTableBuilder::RegisterClass<PIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<PIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<PIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<PIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<PIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04784a04(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04786608:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<PIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<PIState>::FillFrom(this_00,pSVar3);
      goto LAB_04786608;
    }
    pRVar2 = (RtClass *)FUN_04784a04(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<PIState> const* StateMachineTableBuilder::GetTable<PIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<PIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04784a04(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<PIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<PIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<BIState>& StateMachineTableBuilder::RegisterClass<BIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<BIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<BIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<BIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<BIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_047909c0(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04793388:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<BIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<BIState>::FillFrom(this_00,pSVar3);
      goto LAB_04793388;
    }
    pRVar2 = (RtClass *)FUN_047909c0(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<BIState> const* StateMachineTableBuilder::GetTable<BIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<BIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_047909c0(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<BIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<BIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<FIState>& StateMachineTableBuilder::RegisterClass<FIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<FIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<FIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<FIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<FIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_047c77b0(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_047c9770:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<FIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<FIState>::FillFrom(this_00,pSVar3);
      goto LAB_047c9770;
    }
    pRVar2 = (RtClass *)FUN_047c77b0(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<FIState> const* StateMachineTableBuilder::GetTable<FIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<FIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_047c77b0(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<FIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<FIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SteamCoalCartZombieState>&
   StateMachineTableBuilder::RegisterClass<SteamCoalCartZombieState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<SteamCoalCartZombieState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<SteamCoalCartZombieState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<SteamCoalCartZombieState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<SteamCoalCartZombieState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04809e7c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_0480b9d8:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<SteamCoalCartZombieState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<SteamCoalCartZombieState>::FillFrom(this_00,pSVar3);
      goto LAB_0480b9d8;
    }
    pRVar2 = (RtClass *)FUN_04809e7c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SteamCoalCartZombieState> const*
   StateMachineTableBuilder::GetTable<SteamCoalCartZombieState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<SteamCoalCartZombieState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04809e7c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<SteamCoalCartZombieState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0
       )) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<SteamCoalCartZombieState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<CreatureState>&
   StateMachineTableBuilder::RegisterClass<CreatureState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<CreatureState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<CreatureState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<CreatureState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<CreatureState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_0480fa94(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04812ff8:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<CreatureState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<CreatureState>::FillFrom(this_00,pSVar3);
      goto LAB_04812ff8;
    }
    pRVar2 = (RtClass *)FUN_0480fa94(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<CreatureState> const*
   StateMachineTableBuilder::GetTable<CreatureState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<CreatureState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_0480fa94(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<CreatureState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<CreatureState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<AnkyloState>&
   StateMachineTableBuilder::RegisterClass<AnkyloState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<AnkyloState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<AnkyloState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<AnkyloState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<AnkyloState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_0481ea1c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04821378:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<AnkyloState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<AnkyloState>::FillFrom(this_00,pSVar3);
      goto LAB_04821378;
    }
    pRVar2 = (RtClass *)FUN_0481ea1c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<AnkyloState> const*
   StateMachineTableBuilder::GetTable<AnkyloState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<AnkyloState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_0481ea1c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<AnkyloState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<AnkyloState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<StegoState>&
   StateMachineTableBuilder::RegisterClass<StegoState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<StegoState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<StegoState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<StegoState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<StegoState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04824fe4(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04828fa4:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<StegoState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<StegoState>::FillFrom(this_00,pSVar3);
      goto LAB_04828fa4;
    }
    pRVar2 = (RtClass *)FUN_04824fe4(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<StegoState> const*
   StateMachineTableBuilder::GetTable<StegoState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<StegoState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04824fe4(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<StegoState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<StegoState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<TyrannoState>&
   StateMachineTableBuilder::RegisterClass<TyrannoState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<TyrannoState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<TyrannoState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<TyrannoState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<TyrannoState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_0482a5a4(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_0482d1e8:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<TyrannoState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<TyrannoState>::FillFrom(this_00,pSVar3);
      goto LAB_0482d1e8;
    }
    pRVar2 = (RtClass *)FUN_0482a5a4(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<TyrannoState> const*
   StateMachineTableBuilder::GetTable<TyrannoState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<TyrannoState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_0482a5a4(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<TyrannoState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<TyrannoState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<DinoYoungerState>&
   StateMachineTableBuilder::RegisterClass<DinoYoungerState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<DinoYoungerState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<DinoYoungerState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<DinoYoungerState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<DinoYoungerState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_0482e708(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_048304b8:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<DinoYoungerState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<DinoYoungerState>::FillFrom(this_00,pSVar3);
      goto LAB_048304b8;
    }
    pRVar2 = (RtClass *)FUN_0482e708(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<DinoYoungerState> const*
   StateMachineTableBuilder::GetTable<DinoYoungerState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<DinoYoungerState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_0482e708(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<DinoYoungerState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<DinoYoungerState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<DinoRunnerState>&
   StateMachineTableBuilder::RegisterClass<DinoRunnerState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<DinoRunnerState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<DinoRunnerState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<DinoRunnerState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<DinoRunnerState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04832ec0(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_048355a4:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<DinoRunnerState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<DinoRunnerState>::FillFrom(this_00,pSVar3);
      goto LAB_048355a4;
    }
    pRVar2 = (RtClass *)FUN_04832ec0(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<DinoRunnerState> const*
   StateMachineTableBuilder::GetTable<DinoRunnerState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<DinoRunnerState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04832ec0(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<DinoRunnerState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<DinoRunnerState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SharkMinionState>&
   StateMachineTableBuilder::RegisterClass<SharkMinionState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<SharkMinionState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<SharkMinionState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<SharkMinionState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<SharkMinionState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_0483b258(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_0483d7f0:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<SharkMinionState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<SharkMinionState>::FillFrom(this_00,pSVar3);
      goto LAB_0483d7f0;
    }
    pRVar2 = (RtClass *)FUN_0483b258(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SharkMinionState> const*
   StateMachineTableBuilder::GetTable<SharkMinionState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<SharkMinionState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_0483b258(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<SharkMinionState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<SharkMinionState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SnakeState>&
   StateMachineTableBuilder::RegisterClass<SnakeState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<SnakeState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<SnakeState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<SnakeState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<SnakeState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_049d210c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_049d4490:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<SnakeState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<SnakeState>::FillFrom(this_00,pSVar3);
      goto LAB_049d4490;
    }
    pRVar2 = (RtClass *)FUN_049d210c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SnakeState> const*
   StateMachineTableBuilder::GetTable<SnakeState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<SnakeState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_049d210c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<SnakeState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<SnakeState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<RiverEntitiesManagerState>&
   StateMachineTableBuilder::RegisterClass<RiverEntitiesManagerState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<RiverEntitiesManagerState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<RiverEntitiesManagerState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<RiverEntitiesManagerState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<RiverEntitiesManagerState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04a11264(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04a15218:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<RiverEntitiesManagerState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<RiverEntitiesManagerState>::FillFrom(this_00,pSVar3);
      goto LAB_04a15218;
    }
    pRVar2 = (RtClass *)FUN_04a11264(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<RiverEntitiesManagerState> const*
   StateMachineTableBuilder::GetTable<RiverEntitiesManagerState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<RiverEntitiesManagerState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04a11264(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<RiverEntitiesManagerState>(this,pRVar2),
       pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<RiverEntitiesManagerState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<StarvingChomperState>&
   StateMachineTableBuilder::RegisterClass<StarvingChomperState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<StarvingChomperState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<StarvingChomperState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<StarvingChomperState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<StarvingChomperState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04a18478(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04a19c68:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<StarvingChomperState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<StarvingChomperState>::FillFrom(this_00,pSVar3);
      goto LAB_04a19c68;
    }
    pRVar2 = (RtClass *)FUN_04a18478(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<StarvingChomperState> const*
   StateMachineTableBuilder::GetTable<StarvingChomperState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<StarvingChomperState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04a18478(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<StarvingChomperState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<StarvingChomperState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<RCIState>& StateMachineTableBuilder::RegisterClass<RCIState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<RCIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<RCIState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<RCIState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<RCIState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04a1b10c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04a1cc04:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<RCIState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<RCIState>::FillFrom(this_00,pSVar3);
      goto LAB_04a1cc04;
    }
    pRVar2 = (RtClass *)FUN_04a1b10c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<RCIState> const* StateMachineTableBuilder::GetTable<RCIState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<RCIState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04a1b10c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<RCIState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<RCIState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<RiverCrossingDodoRiderState>&
   StateMachineTableBuilder::RegisterClass<RiverCrossingDodoRiderState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<RiverCrossingDodoRiderState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<RiverCrossingDodoRiderState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<RiverCrossingDodoRiderState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<RiverCrossingDodoRiderState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04a1e104(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04a1fe54:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<RiverCrossingDodoRiderState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<RiverCrossingDodoRiderState>::FillFrom(this_00,pSVar3);
      goto LAB_04a1fe54;
    }
    pRVar2 = (RtClass *)FUN_04a1e104(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<RiverCrossingDodoRiderState> const*
   StateMachineTableBuilder::GetTable<RiverCrossingDodoRiderState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<RiverCrossingDodoRiderState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04a1e104(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<RiverCrossingDodoRiderState>(this,pRVar2),
       pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<RiverCrossingDodoRiderState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SalesButtonState>&
   StateMachineTableBuilder::RegisterClass<SalesButtonState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<SalesButtonState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<SalesButtonState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<SalesButtonState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<SalesButtonState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04a57870(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04a600f8:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<SalesButtonState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<SalesButtonState>::FillFrom(this_00,pSVar3);
      goto LAB_04a600f8;
    }
    pRVar2 = (RtClass *)FUN_04a57870(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<SalesButtonState> const*
   StateMachineTableBuilder::GetTable<SalesButtonState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<SalesButtonState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04a57870(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<SalesButtonState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<SalesButtonState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<RewardAniState>&
   StateMachineTableBuilder::RegisterClass<RewardAniState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<RewardAniState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<RewardAniState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<RewardAniState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<RewardAniState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04a7e21c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04a7f624:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<RewardAniState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<RewardAniState>::FillFrom(this_00,pSVar3);
      goto LAB_04a7f624;
    }
    pRVar2 = (RtClass *)FUN_04a7e21c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<RewardAniState> const*
   StateMachineTableBuilder::GetTable<RewardAniState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<RewardAniState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04a7e21c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<RewardAniState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<RewardAniState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<ABEState>& StateMachineTableBuilder::RegisterClass<ABEState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<ABEState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<ABEState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<ABEState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<ABEState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04caaac4(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04cb3a04:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<ABEState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<ABEState>::FillFrom(this_00,pSVar3);
      goto LAB_04cb3a04;
    }
    pRVar2 = (RtClass *)FUN_04caaac4(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<ABEState> const* StateMachineTableBuilder::GetTable<ABEState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<ABEState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04caaac4(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<ABEState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<ABEState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<DPEState>& StateMachineTableBuilder::RegisterClass<DPEState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<DPEState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<DPEState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<DPEState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<DPEState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04d615a4(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04d69080:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<DPEState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<DPEState>::FillFrom(this_00,pSVar3);
      goto LAB_04d69080;
    }
    pRVar2 = (RtClass *)FUN_04d615a4(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<DPEState> const* StateMachineTableBuilder::GetTable<DPEState>(Sexy::RtClass*)
    */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<DPEState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04d615a4(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<DPEState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<DPEState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<CardGameState>&
   StateMachineTableBuilder::RegisterClass<CardGameState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::RegisterClass<CardGameState>
          (StateMachineTableBuilder *this,RtClass *param_1)

{
  StateMachineTable<CardGameState> *this_00;
  undefined8 *puVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  RtClass *local_18;
  StateMachineTable<CardGameState> *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = param_1;
  this_00 = ::operator_new(0x20);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  StateMachineTable<CardGameState>::StateMachineTable(this_00);
  local_10 = this_00;
  std::vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>>::push_back
            ((vector<StateMachineTableBase*,std::allocator<StateMachineTableBase*>> *)(this + 8),
             (StateMachineTableBase **)&local_10);
  puVar1 = (undefined8 *)
           std::
           map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
           ::operator[]((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                         *)(this + 0x20),&local_18);
  *puVar1 = this_00;
  pRVar2 = (RtClass *)FUN_04e0117c(*(undefined8 *)(local_18 + 0x10));
  do {
    if (pRVar2 == (RtClass *)0x0) {
LAB_04e0520c:
      if (local_8 == ___stack_chk_guard) {
        return (StateMachineTable *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar3 = GetTable<CardGameState>(this,pRVar2);
    if (pSVar3 != (StateMachineTable *)0x0) {
      StateMachineTable<CardGameState>::FillFrom(this_00,pSVar3);
      goto LAB_04e0520c;
    }
    pRVar2 = (RtClass *)FUN_04e0117c(*(undefined8 *)(pRVar2 + 0x10));
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StateMachineTable<CardGameState> const*
   StateMachineTableBuilder::GetTable<CardGameState>(Sexy::RtClass*) */

StateMachineTable * __thiscall
StateMachineTableBuilder::GetTable<CardGameState>(StateMachineTableBuilder *this,RtClass *param_1)

{
  bool bVar1;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  long lVar4;
  RtClass *local_28;
  generic_iterator<EA::Text::TextureInfo**,void> agStack_20 [8];
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  local_10 = std::
             map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
             ::find((map<Sexy::RtClass*,StateMachineTableBase*,std::less<Sexy::RtClass*>,std::allocator<std::pair<Sexy::RtClass*const,StateMachineTableBase*>>>
                     *)(this + 0x20),&local_28);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            (agStack_20,(TextureInfo ***)&local_10);
  local_18 = (TextureInfo **)
             std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 0x20));
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
  bVar1 = eastl::operator!=((rbtree_iterator *)agStack_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)agStack_20);
    pSVar3 = *(StateMachineTable **)(lVar4 + 8);
  }
  else {
    pRVar2 = (RtClass *)FUN_04e0117c(*(undefined8 *)(local_28 + 0x10));
    if ((pRVar2 == (RtClass *)0x0) ||
       (pSVar3 = GetTable<CardGameState>(this,pRVar2), pSVar3 == (StateMachineTable *)0x0)) {
      pSVar3 = (StateMachineTable *)0x0;
    }
    else {
      pSVar3 = RegisterClass<CardGameState>(this,local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


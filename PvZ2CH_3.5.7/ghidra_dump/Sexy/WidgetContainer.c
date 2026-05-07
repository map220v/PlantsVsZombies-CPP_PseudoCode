// Class: Sexy::WidgetContainer


/* Sexy::WidgetContainer::MarkDirty() */

void __thiscall Sexy::WidgetContainer::MarkDirty(WidgetContainer *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,this);
    return;
  }
  this[0x44] = (WidgetContainer)0x1;
  return;
}


/* Sexy::WidgetContainer::MarkDirtyFull() */

void __thiscall Sexy::WidgetContainer::MarkDirtyFull(WidgetContainer *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xe8))(plVar1,this);
    return;
  }
  this[0x44] = (WidgetContainer)0x1;
  return;
}


/* Sexy::WidgetContainer::Update() */

void __thiscall Sexy::WidgetContainer::Update(WidgetContainer *this)

{
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  return;
}


/* Sexy::WidgetContainer::SetIgnoreMouseInput(bool) */

void __thiscall Sexy::WidgetContainer::SetIgnoreMouseInput(WidgetContainer *this,bool param_1)

{
  if (!param_1) {
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 0xffffffef;
    return;
  }
  *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x10;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::StaticClassInit() */

void Sexy::WidgetContainer::StaticClassInit(void)

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
    std::string::string(asStack_10,"WidgetContainer");
    (*pcVar2)(plVar1,asStack_10,FUN_052c16a4,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::WidgetContainer::StaticGetClass() */

long * Sexy::WidgetContainer::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"WidgetContainer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::WidgetContainer::GetClass() const */

long * Sexy::WidgetContainer::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"WidgetContainer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::WidgetContainer::GetRect() */

Insets * Sexy::WidgetContainer::GetRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Insets::Insets(in_x8,*(int *)(in_x0 + 0x48),*(int *)(in_x0 + 0x4c),*(int *)(in_x0 + 0x50),
                 *(int *)(in_x0 + 0x54));
  return in_x8;
}


/* Sexy::WidgetContainer::GetClipRect() const */

Insets * Sexy::WidgetContainer::GetClipRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Insets::Insets(in_x8,0,0,*(int *)(in_x0 + 0x50),*(int *)(in_x0 + 0x54));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::Intersects(Sexy::WidgetContainer*) */

void __thiscall Sexy::WidgetContainer::Intersects(WidgetContainer *this,WidgetContainer *param_1)

{
  TRect<int> aTStack_28 [16];
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x48))(aTStack_28);
  (**(code **)(*(long *)param_1 + 0x48))(aTStack_18,param_1);
  TRect<int>::Intersects(aTStack_28,aTStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::GetAbsPos() */

void Sexy::WidgetContainer::GetAbsPos(void)

{
  long in_x0;
  Point *in_x8;
  Point aPStack_20 [8];
  TPoint aTStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x20) == 0) {
    Point::Point(in_x8,*(int *)(in_x0 + 0x48),*(int *)(in_x0 + 0x4c));
  }
  else {
    Point::Point(aPStack_20,*(int *)(in_x0 + 0x48),*(int *)(in_x0 + 0x4c));
    (**(code **)(**(long **)(in_x0 + 0x20) + 0xd0))(aTStack_18,*(long **)(in_x0 + 0x20));
    TPoint<int>::operator+((TPoint<int> *)aPStack_20,aTStack_18);
    Point::Point(in_x8,aTStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::WidgetContainer::RemoveAllWidgets(bool, bool) */

void __thiscall
Sexy::WidgetContainer::RemoveAllWidgets(WidgetContainer *this,bool param_1,bool param_2)

{
  list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *this_00;
  char cVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  this_00 = (list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>> *)(this + 8);
  if (param_2) {
    if (param_1) {
      while (cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                               (this_00), cVar1 == '\0') {
        puVar2 = (undefined8 *)
                 std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::front
                           ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)this_00);
        plVar3 = (long *)*puVar2;
        (**(code **)(*(long *)this + 0x68))(this,plVar3);
        (**(code **)(*plVar3 + 0x80))(plVar3,1,1);
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      return;
    }
    while (cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                             (this_00), cVar1 == '\0') {
      puVar2 = (undefined8 *)
               std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::front
                         ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)this_00);
      plVar3 = (long *)*puVar2;
      (**(code **)(*(long *)this + 0x68))(this,plVar3);
      (**(code **)(*plVar3 + 0x80))(plVar3,0,1);
    }
  }
  else {
    while (cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                             (this_00), cVar1 == '\0') {
      while( true ) {
        puVar2 = (undefined8 *)
                 std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::front
                           ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)this_00);
        plVar3 = (long *)*puVar2;
        (**(code **)(*(long *)this + 0x68))(this,plVar3);
        if ((plVar3 == (long *)0x0) || (!param_1)) break;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        cVar1 = std::list<Sexy::ActiveFontLayer,std::allocator<Sexy::ActiveFontLayer>>::empty
                          (this_00);
        if (cVar1 != '\0') {
          return;
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::IsBelowHelper(Sexy::Widget*, Sexy::Widget*, bool*) */

void __thiscall
Sexy::WidgetContainer::IsBelowHelper
          (WidgetContainer *this,Widget *param_1,Widget *param_2,bool *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  WidgetContainer *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_052c1910(*(undefined8 *)(this + 8));
  do {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    uVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!(bool)uVar1) {
LAB_052c1bb8:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar1);
      }
      return;
    }
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    this_00 = (WidgetContainer *)*puVar2;
    if (this_00 == (WidgetContainer *)param_1) {
LAB_052c1bec:
      *param_3 = true;
      goto LAB_052c1bb8;
    }
    if (this_00 == (WidgetContainer *)param_2) {
      uVar1 = false;
      goto LAB_052c1bec;
    }
    uVar1 = IsBelowHelper(this_00,param_1,param_2,param_3);
    if (*param_3 != false) goto LAB_052c1bb8;
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::IsBelow(Sexy::Widget*, Sexy::Widget*) */

void __thiscall
Sexy::WidgetContainer::IsBelow(WidgetContainer *this,Widget *param_1,Widget *param_2)

{
  bool local_9;
  long local_8;
  
  local_9 = false;
  local_8 = ___stack_chk_guard;
  IsBelowHelper(this,param_1,param_2,&local_9);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::MarkAllDirty() */

void __thiscall Sexy::WidgetContainer::MarkAllDirty(WidgetContainer *this)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xd8))();
  local_18 = FUN_052c1910(*(undefined8 *)(this + 8));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    *(undefined1 *)(*plVar2 + 0x44) = 1;
    puVar3 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    (**(code **)(*(long *)*puVar3 + 0xa8))((long *)*puVar3);
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::AddedToManager(Sexy::WidgetManager*) */

void __thiscall Sexy::WidgetContainer::AddedToManager(WidgetContainer *this,WidgetManager *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_052c1910(*(undefined8 *)(this + 8));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    plVar2 = (long *)*plVar2;
    plVar2[3] = (long)param_1;
    (**(code **)(*plVar2 + 0xf8))(plVar2,param_1);
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    (**(code **)(*(long *)this + 0xd8))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::RemovedFromManager(Sexy::WidgetManager*) */

void __thiscall
Sexy::WidgetContainer::RemovedFromManager(WidgetContainer *this,WidgetManager *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_052c1910(*(undefined8 *)(this + 8));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    plVar3 = (long *)*puVar2;
    (**(code **)(*(long *)param_1 + 0x78))(param_1,plVar3);
    (**(code **)(*plVar3 + 0x100))(plVar3,param_1);
    plVar3[3] = 0;
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  if (*(WidgetContainer **)(param_1 + 0xa0) == this) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::DisableAllWidgets(bool) */

void __thiscall Sexy::WidgetContainer::DisableAllWidgets(WidgetContainer *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_052c1910(*(undefined8 *)(this + 8));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x188))((long *)*puVar2,param_1);
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::MarkDirty(Sexy::WidgetContainer*) */

void __thiscall Sexy::WidgetContainer::MarkDirty(WidgetContainer *this,WidgetContainer *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  WidgetContainer *pWVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x44] == (WidgetContainer)0x0) {
    (**(code **)(*(long *)this + 0xd8))();
    lVar5 = *(long *)(this + 0x20);
    param_1[0x44] = (WidgetContainer)0x1;
    if (lVar5 == 0) {
      if (param_1[0x58] == (WidgetContainer)0x0) {
        bVar1 = false;
        local_18 = FUN_052c1910(*(undefined8 *)(this + 8));
        while( true ) {
          local_10 = std::
                     __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                               ((TaskResource **)(this + 8));
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (!bVar2) break;
          puVar4 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
          pWVar6 = (WidgetContainer *)*puVar4;
          if (pWVar6 == param_1) {
            bVar1 = true;
          }
          else if (((bVar1) && (pWVar6[0x6c] != (WidgetContainer)0x0)) &&
                  (cVar3 = (**(code **)(*(long *)pWVar6 + 0x58))(pWVar6,param_1), cVar3 != '\0')) {
            (**(code **)(*(long *)this + 0xf0))(this,pWVar6);
          }
          std::_List_const_iterator<Sexy::FontLayer>::operator++
                    ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
        }
      }
      else {
        (**(code **)(*(long *)this + 0xe8))(this,param_1);
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
/* Sexy::WidgetContainer::UpdateAll(Sexy::ModalFlags*) */

void __thiscall Sexy::WidgetContainer::UpdateAll(WidgetContainer *this,ModalFlags *param_1)

{
  WidgetContainer WVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  rbtree_iterator *this_00;
  long lVar8;
  undefined8 local_20;
  AutoModalFlags aAStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoModalFlags::AutoModalFlags(aAStack_18,param_1,(FlagsMod *)(this + 0x5c));
  uVar3 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]);
  if ((uVar3 >> 1 & 1) != 0) {
    (**(code **)(*(long *)this + 0xd8))(this);
  }
  lVar8 = *(long *)(this + 0x18);
  if (lVar8 != 0) {
    uVar4 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]);
    if (((uVar4 & 1) != 0) && (*(long *)(this + 0x38) != (long)*(int *)(lVar8 + 0x40))) {
      *(long *)(this + 0x38) = (long)*(int *)(lVar8 + 0x40);
      (**(code **)(*(long *)this + 0x108))(this);
    }
    uVar5 = FUN_052c1910(*(undefined8 *)(this + 8));
    this_00 = (rbtree_iterator *)(this + 0x30);
    *(undefined8 *)this_00 = uVar5;
    do {
      local_20 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 8));
      bVar2 = eastl::operator!=(this_00,(rbtree_iterator *)&local_20);
      while( true ) {
        if (!bVar2) {
          this[0x28] = (WidgetContainer)0x1;
          AutoModalFlags::~AutoModalFlags(aAStack_18);
          goto LAB_052c2218;
        }
        this[0x28] = (WidgetContainer)0x0;
        plVar6 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)this_00);
        plVar6 = (long *)*plVar6;
        if (*(long **)(lVar8 + 0xe0) == plVar6) {
          lVar7 = *plVar6;
          param_1[8] = (ModalFlags)0x1;
          (**(code **)(lVar7 + 0x110))(plVar6,param_1);
          WVar1 = this[0x28];
        }
        else {
          (**(code **)(*plVar6 + 0x110))(plVar6,param_1);
          WVar1 = this[0x28];
        }
        if (WVar1 != (WidgetContainer)0x0) break;
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)this_00);
        local_20 = std::
                   __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                             ((TaskResource **)(this + 8));
        bVar2 = eastl::operator!=(this_00,(rbtree_iterator *)&local_20);
      }
    } while( true );
  }
  AutoModalFlags::~AutoModalFlags(aAStack_18);
LAB_052c2218:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::UpdateFAll(Sexy::ModalFlags*, float) */

void __thiscall
Sexy::WidgetContainer::UpdateFAll(WidgetContainer *this,ModalFlags *param_1,float param_2)

{
  WidgetContainer WVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  rbtree_iterator *this_00;
  long lVar7;
  undefined8 local_20;
  AutoModalFlags aAStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AutoModalFlags::AutoModalFlags(aAStack_18,param_1,(FlagsMod *)(this + 0x5c));
  lVar7 = *(long *)(this + 0x18);
  if (lVar7 == 0) {
    AutoModalFlags::~AutoModalFlags(aAStack_18);
LAB_052c23cc:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*(long *)this + 0x118))(param_2,this);
  }
  uVar4 = FUN_052c1910(*(undefined8 *)(this + 8));
  this_00 = (rbtree_iterator *)(this + 0x30);
  *(undefined8 *)this_00 = uVar4;
  do {
    local_20 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar2 = eastl::operator!=(this_00,(rbtree_iterator *)&local_20);
    while( true ) {
      if (!bVar2) {
        this[0x28] = (WidgetContainer)0x1;
        AutoModalFlags::~AutoModalFlags(aAStack_18);
        goto LAB_052c23cc;
      }
      this[0x28] = (WidgetContainer)0x0;
      plVar5 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                 ((_List_const_iterator<Sexy::ActiveFontLayer> *)this_00);
      plVar5 = (long *)*plVar5;
      if (*(long **)(lVar7 + 0xe0) == plVar5) {
        lVar6 = *plVar5;
        param_1[8] = (ModalFlags)0x1;
        (**(code **)(lVar6 + 0x120))(param_2,plVar5,param_1);
        WVar1 = this[0x28];
      }
      else {
        (**(code **)(*plVar5 + 0x120))(param_2,plVar5,param_1);
        WVar1 = this[0x28];
      }
      if (WVar1 != (WidgetContainer)0x0) break;
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)this_00);
      local_20 = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(this + 8));
      bVar2 = eastl::operator!=(this_00,(rbtree_iterator *)&local_20);
    }
  } while( true );
}


/* Sexy::WidgetContainer::WidgetContainer() */

void __thiscall Sexy::WidgetContainer::WidgetContainer(WidgetContainer *this)

{
  undefined8 uVar1;
  _func_void *extraout_x1;
  
  RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06a323f0;
  std::list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>>::list
            ((list<Sexy::MeshPiece*,std::allocator<Sexy::MeshPiece*>> *)(this + 8));
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 0x30),extraout_x1);
  FlagsMod::FlagsMod((FlagsMod *)(this + 0x5c));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x28] = (WidgetContainer)0x0;
  uVar1 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)(this + 8));
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x44] = (WidgetContainer)0x0;
  this[0x58] = (WidgetContainer)0x0;
  this[0x59] = (WidgetContainer)0x1;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


/* Sexy::WidgetContainer::StaticNew() */

WidgetContainer * Sexy::WidgetContainer::StaticNew(void)

{
  WidgetContainer *this;
  
  this = ::operator_new(0x70);
  WidgetContainer(this);
  return this;
}


/* Sexy::WidgetContainer::~WidgetContainer() */

void __thiscall Sexy::WidgetContainer::~WidgetContainer(WidgetContainer *this)

{
  *(undefined ***)this = &PTR_GetClass_06a323f0;
  std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::~list
            ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 8));
  nop();
  return;
}


/* Sexy::WidgetContainer::~WidgetContainer() */

void __thiscall Sexy::WidgetContainer::~WidgetContainer(WidgetContainer *this)

{
  ~WidgetContainer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::GetWidgetAtHelper(int, int, int, bool*, int*, int*) */

void __thiscall
Sexy::WidgetContainer::GetWidgetAtHelper
          (WidgetContainer *this,int param_1,int param_2,int param_3,bool *param_4,int *param_5,
          int *param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  WidgetContainer *pWVar7;
  code *pcVar8;
  WidgetContainer *this_00;
  uint local_34 [3];
  bool local_25;
  uint local_24;
  reverse_iterator<std::_List_iterator<Sexy::Widget*>> arStack_20 [8];
  TRect<int> aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_34[0] = param_3;
  ModFlags((int *)local_34,(FlagsMod *)(this + 0x5c));
  bVar3 = false;
  std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::rbegin();
  do {
    std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::rend();
    bVar4 = std::operator!=((reverse_iterator *)arStack_20,(reverse_iterator *)aTStack_18);
    if (!bVar4) {
      *param_4 = bVar4;
      this_00 = (WidgetContainer *)0x0;
LAB_052c27e8:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(this_00);
      }
      return;
    }
    puVar6 = (undefined8 *)
             std::reverse_iterator<std::_List_iterator<Sexy::Widget*>>::operator*(arStack_20);
    this_00 = (WidgetContainer *)*puVar6;
    local_24 = local_34[0];
    ModFlags((int *)&local_24,(FlagsMod *)(this_00 + 0x5c));
    if (bVar3) {
      ModFlags((int *)&local_24,(FlagsMod *)(*(long *)(this + 0x18) + 0xf8));
    }
    if (((local_24 >> 4 & 1) != 0) && (this_00[0x6c] != (WidgetContainer)0x0)) {
      pWVar7 = (WidgetContainer *)
               GetWidgetAtHelper(this_00,param_1 - *(int *)(this_00 + 0x48),
                                 param_2 - *(int *)(this_00 + 0x4c),local_24,&local_25,param_5,
                                 param_6);
      if ((pWVar7 != (WidgetContainer *)0x0) || (local_25 != false)) {
        *param_4 = true;
        this_00 = pWVar7;
        goto LAB_052c27e8;
      }
      if (this_00[0x6d] != (WidgetContainer)0x0) {
        (**(code **)(*(long *)this_00 + 0x308))(aTStack_18,this_00);
        cVar5 = TRect<int>::Contains(aTStack_18,param_1,param_2);
        if (cVar5 != '\0') {
          iVar1 = *(int *)(this_00 + 0x48);
          iVar2 = *(int *)(this_00 + 0x4c);
          pcVar8 = *(code **)(*(long *)this_00 + 0x248);
          *param_4 = true;
          cVar5 = (*pcVar8)(this_00,param_1 - iVar1,param_2 - iVar2);
          if (cVar5 != '\0') {
            if (param_5 != (int *)0x0) {
              *param_5 = param_1 - *(int *)(this_00 + 0x48);
            }
            if (param_6 != (int *)0x0) {
              *param_6 = param_2 - *(int *)(this_00 + 0x4c);
            }
            goto LAB_052c27e8;
          }
        }
      }
    }
    if ((*(WidgetContainer **)(*(long *)(this + 0x18) + 0xe0) == this_00) &&
       (this_00[0x6c] != (WidgetContainer)0x0)) {
      bVar3 = true;
    }
    std::reverse_iterator<std::_List_iterator<Sexy::Widget*>>::operator++(arStack_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::OnBackButtonPressed() */

void Sexy::WidgetContainer::OnBackButtonPressed(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  reverse_iterator<std::_List_iterator<Sexy::Widget*>> arStack_18 [8];
  reverse_iterator arStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::rbegin();
  while( true ) {
    std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::rend();
    bVar2 = std::operator!=((reverse_iterator *)arStack_18,arStack_10);
    if (!bVar2) break;
    puVar3 = (undefined8 *)
             std::reverse_iterator<std::_List_iterator<Sexy::Widget*>>::operator*(arStack_18);
    cVar1 = (**(code **)(*(long *)*puVar3 + 0x148))((long *)*puVar3);
    if (cVar1 != '\0') break;
    std::reverse_iterator<std::_List_iterator<Sexy::Widget*>>::operator++(arStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::HasWidget(Sexy::Widget*) */

void __thiscall Sexy::WidgetContainer::HasWidget(WidgetContainer *this,Widget *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  WidgetContainer *pWVar4;
  Widget *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pWVar4 = this + 8;
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar2 = FUN_052c1910(*(undefined8 *)pWVar4);
  uVar3 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)pWVar4);
  local_18 = std::find<std::_List_iterator<Sexy::Widget*>,Sexy::Widget*>(uVar2,uVar3,local_28);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)pWVar4);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::RemoveWidget(Sexy::Widget*) */

void __thiscall Sexy::WidgetContainer::RemoveWidget(WidgetContainer *this,Widget *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  WidgetContainer *pWVar5;
  Widget *local_28;
  undefined8 local_20;
  TextureInfo **local_18;
  undefined8 local_10;
  long local_8;
  
  pWVar5 = this + 8;
  local_8 = ___stack_chk_guard;
  local_28 = param_1;
  uVar3 = FUN_052c1910(*(undefined8 *)pWVar5);
  uVar4 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)pWVar5);
  local_20 = std::find<std::_List_iterator<Sexy::Widget*>,Sexy::Widget*>(uVar3,uVar4,&local_28);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)pWVar5);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_10);
  if (bVar1) {
    Widget::WidgetRemovedHelper(local_28);
    *(undefined8 *)(local_28 + 0x20) = 0;
    cVar2 = std::__exception_ptr::operator==
                      ((exception_ptr *)&local_20,(exception_ptr *)(this + 0x30));
    local_18 = (TextureInfo **)FUN_052c1478((rbtree_iterator *)&local_20);
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,&local_18);
    FUN_052c2428(local_10);
    if (cVar2 != '\0') {
      *(undefined8 *)(this + 0x30) = local_20;
      this[0x28] = (WidgetContainer)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::WidgetContainer::GetChildCount() */

void __thiscall Sexy::WidgetContainer::GetChildCount(WidgetContainer *this)

{
  std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
            ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
Sexy::WidgetContainer::DrawAll(WidgetContainer *this,ModalFlags *param_1,Graphics *param_2)

{
  bool bVar1;
  uint uVar2;
  WidgetManager *this_00;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_30;
  AutoModalFlags aAStack_28 [16];
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = *(WidgetManager **)(this + 0x18);
  local_8 = ___stack_chk_guard;
  if ((this_00 != (WidgetManager *)0x0) && (*(int *)(this_00 + 0xc0) < *(int *)(this + 100))) {
    WidgetManager::FlushDeferredOverlayWidgets(this_00,*(int *)(this + 100));
  }
  AutoModalFlags::AutoModalFlags(aAStack_28,param_1,(FlagsMod *)(this + 0x5c));
  if ((this[0x59] != (WidgetContainer)0x0) &&
     (uVar2 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]),
     (uVar2 >> 3 & 1) != 0)) {
    (**(code **)(*(long *)this + 0x50))((TRect *)local_18,this);
    Graphics::ClipRect(param_2,(TRect *)local_18);
  }
  lVar3 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                    ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 8));
  if (lVar3 == 0) {
    uVar2 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]);
    if ((uVar2 >> 2 & 1) != 0) {
      (**(code **)(*(long *)this + 0x128))(this,param_2);
    }
  }
  else {
    uVar2 = FUN_052c1458(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_1[8]);
    if ((uVar2 >> 2 & 1) != 0) {
      Graphics::PushState(param_2);
      (**(code **)(*(long *)this + 0x128))(this,param_2);
      Graphics::PopState(param_2);
    }
    local_30 = FUN_052c1910(*(undefined8 *)(this + 8));
    while( true ) {
      local_18[0] = std::
                    __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                              ((TaskResource **)(this + 8));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_18);
      if (!bVar1) break;
      puVar4 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_30);
      plVar5 = (long *)*puVar4;
      if (*(char *)((long)plVar5 + 0x6c) != '\0') {
        if ((*(long *)(this + 0x18) != 0) && (*(long **)(*(long *)(this + 0x18) + 0xe0) == plVar5))
        {
          param_1[8] = (ModalFlags)0x1;
        }
        Graphics::PushState(param_2);
        Graphics::Translate(param_2,(int)plVar5[9],*(int *)((long)plVar5 + 0x4c));
        (**(code **)(*plVar5 + 0x130))(plVar5,param_1,param_2);
        *(undefined1 *)((long)plVar5 + 0x44) = 0;
        Graphics::PopState(param_2);
      }
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_30);
    }
  }
  AutoModalFlags::~AutoModalFlags(aAStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::SysColorChangedAll() */

void __thiscall Sexy::WidgetContainer::SysColorChangedAll(WidgetContainer *this)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x140))();
  lVar2 = std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::size
                    ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 8));
  if (lVar2 != 0) {
    DAT_06bbed30 = DAT_06bbed30 + 1;
  }
  local_18 = FUN_052c1910(*(undefined8 *)(this + 8));
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    puVar3 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    (**(code **)(*(long *)*puVar3 + 0x138))((long *)*puVar3);
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::InsertWidgetHelper(std::_List_iterator<Sexy::Widget*> const&,
   Sexy::Widget*) */

void __thiscall
Sexy::WidgetContainer::InsertWidgetHelper
          (WidgetContainer *this,_List_iterator *param_1,Widget *param_2)

{
  bool bVar1;
  long *plVar2;
  TextureInfo ***pppTVar3;
  Widget *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  local_28[0] = param_2;
  while( true ) {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
    if (*(int *)(local_28[0] + 0x68) <= *(int *)(*plVar2 + 0x68)) {
      local_10 = FUN_052c1910(*(undefined8 *)(this + 8));
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (bVar1) {
        local_10 = local_18;
        FUN_052c1490((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10);
        plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                                   ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
        if (*(int *)(local_28[0] + 0x68) < *(int *)(*plVar2 + 0x68)) break;
      }
      eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
                ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
                 (TextureInfo ***)&local_18);
      FUN_052c2ebc(local_10,local_28);
      goto LAB_052c3060;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  }
  do {
    local_10 = FUN_052c1910(*(undefined8 *)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) {
      std::list<Sexy::Widget*,std::allocator<Sexy::Widget*>>::push_front
                ((list<Sexy::Widget*,std::allocator<Sexy::Widget*>> *)(this + 8),local_28);
      goto LAB_052c3060;
    }
    eastl::
    ListIterator<EA::IO::DirectoryIterator::Entry,EA::IO::DirectoryIterator::Entry*,EA::IO::DirectoryIterator::Entry&>
    ::operator--((ListIterator<EA::IO::DirectoryIterator::Entry,EA::IO::DirectoryIterator::Entry*,EA::IO::DirectoryIterator::Entry&>
                  *)&local_18);
    plVar2 = (long *)std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                               ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
  } while (*(int *)(local_28[0] + 0x68) < *(int *)(*plVar2 + 0x68));
  pppTVar3 = (TextureInfo ***)
             std::_List_const_iterator<Sexy::FontLayer>::operator++
                       ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
  eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
            ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,pppTVar3);
  FUN_052c2ebc(local_10,local_28);
LAB_052c3060:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::AddWidget(Sexy::Widget*) */

void __thiscall Sexy::WidgetContainer::AddWidget(WidgetContainer *this,Widget *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  WidgetContainer *pWVar4;
  Widget *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pWVar4 = this + 8;
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar2 = FUN_052c1910(*(undefined8 *)pWVar4);
  uVar3 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)pWVar4);
  local_18 = std::find<std::_List_iterator<Sexy::Widget*>,Sexy::Widget*>(uVar2,uVar3,local_28);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)pWVar4);
  cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar1 != '\0') {
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)pWVar4);
    InsertWidgetHelper(this,(_List_iterator *)&local_10,local_28[0]);
    *(undefined8 *)(local_28[0] + 0x18) = *(undefined8 *)(this + 0x18);
    *(WidgetContainer **)(local_28[0] + 0x20) = this;
    if (*(long *)(this + 0x18) != 0) {
      (**(code **)(*(long *)local_28[0] + 0xf8))();
      (**(code **)(*(long *)local_28[0] + 0xe0))(local_28[0]);
      WidgetManager::RehupMouse(*(WidgetManager **)(this + 0x18));
    }
    (**(code **)(*(long *)this + 0xd8))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::BringToFront(Sexy::Widget*) */

void __thiscall Sexy::WidgetContainer::BringToFront(WidgetContainer *this,Widget *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  WidgetContainer *pWVar5;
  Widget *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pWVar5 = this + 8;
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar3 = FUN_052c1910(*(undefined8 *)pWVar5);
  uVar4 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)pWVar5);
  local_18 = std::find<std::_List_iterator<Sexy::Widget*>,Sexy::Widget*>(uVar3,uVar4,local_28);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)pWVar5);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    cVar2 = std::__exception_ptr::operator==
                      ((exception_ptr *)&local_18,(exception_ptr *)(this + 0x30));
    if (cVar2 != '\0') {
      FUN_052c1478((exception_ptr *)(this + 0x30));
      this[0x28] = (WidgetContainer)0x1;
    }
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
               (TextureInfo ***)&local_18);
    FUN_052c2428(local_10);
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)pWVar5);
    InsertWidgetHelper(this,(_List_iterator *)&local_10,local_28[0]);
    (**(code **)(*(long *)local_28[0] + 0x150))(local_28[0]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::BringToBack(Sexy::Widget*) */

void __thiscall Sexy::WidgetContainer::BringToBack(WidgetContainer *this,Widget *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  WidgetContainer *pWVar5;
  Widget *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pWVar5 = this + 8;
  local_8 = ___stack_chk_guard;
  local_28[0] = param_1;
  uVar3 = FUN_052c1910(*(undefined8 *)pWVar5);
  uVar4 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)pWVar5);
  local_18 = std::find<std::_List_iterator<Sexy::Widget*>,Sexy::Widget*>(uVar3,uVar4,local_28);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)pWVar5);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    cVar2 = std::__exception_ptr::operator==
                      ((exception_ptr *)&local_18,(exception_ptr *)(this + 0x30));
    if (cVar2 != '\0') {
      FUN_052c1478((exception_ptr *)(this + 0x30));
      this[0x28] = (WidgetContainer)0x1;
    }
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
               (TextureInfo ***)&local_18);
    FUN_052c2428(local_10);
    local_10 = FUN_052c1910(*(undefined8 *)(this + 8));
    InsertWidgetHelper(this,(_List_iterator *)&local_10,local_28[0]);
    (**(code **)(*(long *)local_28[0] + 0x150))(local_28[0]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::PutBehind(Sexy::Widget*, Sexy::Widget*) */

void __thiscall
Sexy::WidgetContainer::PutBehind(WidgetContainer *this,Widget *param_1,Widget *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  WidgetContainer *pWVar5;
  Widget *local_30;
  Widget *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (Widget *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  }
  pWVar5 = this + 8;
  local_30 = param_2;
  local_28[0] = param_1;
  uVar3 = FUN_052c1910(*(undefined8 *)pWVar5);
  uVar4 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)pWVar5);
  local_18 = std::find<std::_List_iterator<Sexy::Widget*>,Sexy::Widget*>(uVar3,uVar4,local_28);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)pWVar5);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    cVar2 = std::__exception_ptr::operator==
                      ((exception_ptr *)&local_18,(exception_ptr *)(this + 0x30));
    if (cVar2 != '\0') {
      FUN_052c1478((exception_ptr *)(this + 0x30));
      this[0x28] = (WidgetContainer)0x1;
    }
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
               (TextureInfo ***)&local_18);
    FUN_052c2428(local_10);
    uVar3 = FUN_052c1910(*(undefined8 *)(this + 8));
    uVar4 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)pWVar5);
    local_18 = std::find<std::_List_iterator<Sexy::Widget*>,Sexy::Widget*>(uVar3,uVar4,&local_30);
    InsertWidgetHelper(this,(_List_iterator *)&local_18,local_28[0]);
    (**(code **)(*(long *)local_28[0] + 0x150))(local_28[0]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::PutInfront(Sexy::Widget*, Sexy::Widget*) */

void __thiscall
Sexy::WidgetContainer::PutInfront(WidgetContainer *this,Widget *param_1,Widget *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  WidgetContainer *pWVar5;
  Widget *local_30;
  Widget *local_28 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (Widget *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  }
  pWVar5 = this + 8;
  local_30 = param_2;
  local_28[0] = param_1;
  uVar3 = FUN_052c1910(*(undefined8 *)pWVar5);
  uVar4 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)pWVar5);
  local_18 = std::find<std::_List_iterator<Sexy::Widget*>,Sexy::Widget*>(uVar3,uVar4,local_28);
  local_10 = std::
             __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                       ((TaskResource **)pWVar5);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    cVar2 = std::__exception_ptr::operator==
                      ((exception_ptr *)&local_18,(exception_ptr *)(this + 0x30));
    if (cVar2 != '\0') {
      FUN_052c1478((exception_ptr *)(this + 0x30));
      this[0x28] = (WidgetContainer)0x1;
    }
    eastl::generic_iterator<EA::Text::TextureInfo**,void>::generic_iterator
              ((generic_iterator<EA::Text::TextureInfo**,void> *)&local_10,
               (TextureInfo ***)&local_18);
    FUN_052c2428(local_10);
    uVar3 = FUN_052c1910(*(undefined8 *)(this + 8));
    uVar4 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)pWVar5);
    local_18 = std::find<std::_List_iterator<Sexy::Widget*>,Sexy::Widget*>(uVar3,uVar4,&local_30);
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)pWVar5);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      FUN_052c1478((rbtree_iterator *)&local_18);
    }
    InsertWidgetHelper(this,(_List_iterator *)&local_18,local_28[0]);
    (**(code **)(*(long *)local_28[0] + 0x150))(local_28[0]);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WidgetContainer::MarkDirtyFull(Sexy::WidgetContainer*) */

void __thiscall Sexy::WidgetContainer::MarkDirtyFull(WidgetContainer *this,WidgetContainer *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  WidgetContainer *pWVar8;
  WidgetContainer *local_58 [2];
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_58[0] = param_1;
  (**(code **)(*(long *)this + 0xe0))();
  lVar3 = *(long *)(this + 0x20);
  local_58[0][0x44] = (WidgetContainer)0x1;
  if (lVar3 == 0) {
    pWVar8 = this + 8;
    uVar4 = FUN_052c1910(*(undefined8 *)pWVar8);
    uVar5 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)pWVar8);
    local_48 = std::find<std::_List_iterator<Sexy::Widget*>,Sexy::WidgetContainer*>
                         (uVar4,uVar5,local_58);
    local_18[0] = std::
                  __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                            ((TaskResource **)pWVar8);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_48,(exception_ptr *)local_18);
    if (cVar1 == '\0') {
      local_40 = local_48;
      local_18[0] = FUN_052c1910(*(undefined8 *)(this + 8));
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_40,(rbtree_iterator *)local_18);
      if (bVar2) {
        FUN_052c1490((rbtree_iterator *)&local_40);
        do {
          puVar6 = (undefined8 *)
                   std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                             ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_40);
          plVar7 = (long *)*puVar6;
          if (*(char *)((long)plVar7 + 0x6c) != '\0') {
            if (*(char *)((long)plVar7 + 0x72) == '\0') {
              if ((char)plVar7[0xb] == '\0') {
                Insets::Insets(aIStack_28,*(int *)(local_58[0] + 0x48),*(int *)(local_58[0] + 0x4c),
                               *(int *)(local_58[0] + 0x50),*(int *)(local_58[0] + 0x54));
                Insets::Insets((Insets *)local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
                TRect<int>::Intersection((TRect *)aIStack_28);
                cVar1 = (**(code **)(*plVar7 + 0x300))(plVar7,local_38,local_34);
                if ((cVar1 != '\0') &&
                   (cVar1 = (**(code **)(*plVar7 + 0x300))
                                      (plVar7,local_38 + local_30 + -1,local_34 + local_2c + -1),
                   cVar1 != '\0')) {
                  (**(code **)(*plVar7 + 0xd8))(plVar7);
                  break;
                }
              }
            }
            cVar1 = (**(code **)(*plVar7 + 0x58))(plVar7,local_58[0]);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)this + 0xf0))(this,plVar7);
            }
          }
          local_18[0] = FUN_052c1910(*(undefined8 *)(this + 8));
          cVar1 = std::__exception_ptr::operator==
                            ((exception_ptr *)&local_40,(exception_ptr *)local_18);
          if (cVar1 != '\0') break;
          eastl::
          ListIterator<EA::IO::DirectoryIterator::Entry,EA::IO::DirectoryIterator::Entry*,EA::IO::DirectoryIterator::Entry&>
          ::operator--((ListIterator<EA::IO::DirectoryIterator::Entry,EA::IO::DirectoryIterator::Entry*,EA::IO::DirectoryIterator::Entry&>
                        *)&local_40);
        } while( true );
      }
      local_40 = local_48;
      while( true ) {
        local_18[0] = std::
                      __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                                ((TaskResource **)pWVar8);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_40,(rbtree_iterator *)local_18);
        if (!bVar2) break;
        puVar6 = (undefined8 *)
                 std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                           ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_40);
        plVar7 = (long *)*puVar6;
        if ((*(char *)((long)plVar7 + 0x6c) != '\0') &&
           (cVar1 = (**(code **)(*plVar7 + 0x58))(plVar7,local_58[0]), cVar1 != '\0')) {
          (**(code **)(*(long *)this + 0xf0))(this,plVar7);
        }
        std::_List_const_iterator<Sexy::FontLayer>::operator++
                  ((_List_const_iterator<Sexy::FontLayer> *)&local_40);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


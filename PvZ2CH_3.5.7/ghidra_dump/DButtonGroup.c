// Class: DButtonGroup


/* DButtonGroup::selected() */

void __thiscall DButtonGroup::selected(DButtonGroup *this)

{
  long *plVar1;
  
  DButton::selected((DButton *)this);
  plVar1 = (long *)DArray<DButton*>::at((long)(this + 0x270));
  (**(code **)(*plVar1 + 0x3d0))();
  return;
}


/* DButtonGroup::selected(Sexy::Touch const&) */

void __thiscall DButtonGroup::selected(DButtonGroup *this,Touch *param_1)

{
  long *plVar1;
  
  DButton::selected((DButton *)this,param_1);
  plVar1 = (long *)DArray<DButton*>::at((long)(this + 0x270));
  (**(code **)(*plVar1 + 0x3f8))(plVar1,param_1);
  return;
}


/* DButtonGroup::unselected() */

void __thiscall DButtonGroup::unselected(DButtonGroup *this)

{
  long *plVar1;
  
  DButton::unselected((DButton *)this);
  plVar1 = (long *)DArray<DButton*>::at((long)(this + 0x270));
  (**(code **)(*plVar1 + 0x3d8))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButtonGroup::setSelectedIndex(unsigned int) */

void __thiscall DButtonGroup::setSelectedIndex(DButtonGroup *this,uint param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this + 0x260) != param_1) {
    lVar1 = DArray<DButton*>::size((DArray<DButton*> *)(this + 0x270));
    if (0 < lVar1) {
      plVar2 = *(long **)(this + 0x268);
      *(uint *)(this + 0x260) = param_1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x60))(plVar2,0);
      }
      uVar3 = DArray<DButton*>::at((long)(this + 0x270));
      *(undefined8 *)(this + 0x268) = uVar3;
      (**(code **)(*(long *)this + 0x30))(this,uVar3);
      (**(code **)(**(long **)(this + 0x268) + 0x218))(&local_10,*(long **)(this + 0x268));
      (**(code **)(*(long *)this + 0x210))(this,&local_10);
      (**(code **)(**(long **)(this + 0x268) + 0x110))
                (local_10 * 0.5,local_c * 0.5,*(long **)(this + 0x268));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DButtonGroup::active() */

void __thiscall DButtonGroup::active(DButtonGroup *this)

{
  int iVar1;
  long lVar2;
  
  if (this[0x14b] != (DButtonGroup)0x0) {
    lVar2 = DArray<DButton*>::size((DArray<DButton*> *)(this + 0x270));
    iVar1 = 0;
    if (lVar2 != 0) {
      iVar1 = (int)((long)(ulong)(*(int *)(this + 0x260) + 1U) / lVar2);
    }
    setSelectedIndex(this,(*(int *)(this + 0x260) + 1U) - iVar1 * (int)lVar2);
  }
  DButton::active((DButton *)this);
  return;
}


/* DButtonGroup::active(Sexy::Touch const&) */

void __thiscall DButtonGroup::active(DButtonGroup *this,Touch *param_1)

{
  int iVar1;
  long lVar2;
  
  if (this[0x14b] != (DButtonGroup)0x0) {
    lVar2 = DArray<DButton*>::size((DArray<DButton*> *)(this + 0x270));
    iVar1 = 0;
    if (lVar2 != 0) {
      iVar1 = (int)((long)(ulong)(*(int *)(this + 0x260) + 1U) / lVar2);
    }
    setSelectedIndex(this,(*(int *)(this + 0x260) + 1U) - iVar1 * (int)lVar2);
  }
  DButton::active((DButton *)this,param_1);
  return;
}


/* DButtonGroup::getSelectedItem() */

void __thiscall DButtonGroup::getSelectedItem(DButtonGroup *this)

{
  DArray<DButton*>::at((long)(this + 0x270));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButtonGroup::setEnabled(bool) */

void __thiscall DButtonGroup::setEnabled(DButtonGroup *this,bool param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x14b] != (DButtonGroup)param_1) {
    DButton::setEnabled((DButton *)this,param_1);
    local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x270));
    local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>((vector *)(this + 0x270));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      (**(code **)(*(long *)*puVar2 + 0x338))((long *)*puVar2,param_1);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DButtonGroup::DButtonGroup() */

void __thiscall DButtonGroup::DButtonGroup(DButtonGroup *this)

{
  DButton::DButton((DButton *)this);
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined ***)this = &PTR__DButtonGroup_06a252c0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a256e0;
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x270));
  *(undefined4 *)(this + 0x260) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DButtonGroup::~DButtonGroup() */

void __thiscall DButtonGroup::~DButtonGroup(DButtonGroup *this)

{
  vector *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector *)(this + 0x270);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__DButtonGroup_06a252c0;
  *(undefined ***)(this + 0x10) = &PTR_setColor_06a256e0;
  local_18 = std::begin<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  local_10 = std::end<std::vector<DButton*,std::allocator<DButton*>>>(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    (**(code **)(*(long *)*puVar2 + 0x2f0))((long *)*puVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  DArray<DButton*>::~DArray((DArray<DButton*> *)this_00);
  DButton::~DButton((DButton *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DButtonGroup::~DButtonGroup() */

void __thiscall DButtonGroup::~DButtonGroup(DButtonGroup *this)

{
  ~DButtonGroup(this);
  AK::FreeHook(this);
  return;
}


/* DButtonGroup::addSubItem(DButton*) */

DButtonGroup * __thiscall DButtonGroup::addSubItem(DButtonGroup *this,DButton *param_1)

{
  long lVar1;
  
  DArray<DButton*>::pushBack((DArray<DButton*> *)(this + 0x270),param_1);
  lVar1 = DArray<DButton*>::size((DArray<DButton*> *)(this + 0x270));
  if (lVar1 != 1) {
    return this;
  }
  setSelectedIndex(this,0);
  return this;
}


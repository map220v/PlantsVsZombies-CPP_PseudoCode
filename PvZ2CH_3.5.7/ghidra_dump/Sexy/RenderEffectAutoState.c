// Class: Sexy::RenderEffectAutoState


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderEffectAutoState::RenderEffectAutoState(Sexy::Graphics*, Sexy::RenderEffect*, int) */

void __thiscall
Sexy::RenderEffectAutoState::RenderEffectAutoState
          (RenderEffectAutoState *this,Graphics *param_1,RenderEffect *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 local_10;
  long local_8;
  
  *(int *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x14) = 0;
  local_8 = ___stack_chk_guard;
  *(RenderEffect **)this = param_2;
  if (param_2 != (RenderEffect *)0x0) {
    pcVar2 = *(code **)(*(long *)param_2 + 0x48);
    if (param_1 == (Graphics *)0x0) {
      eastl::
      rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
      ::rbtree_iterator((rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
                         *)&local_10,(rbtree_node *)0x0);
    }
    else {
      local_10 = FUN_0329b308(*(undefined8 *)(param_1 + 0x90));
    }
    iVar1 = (*pcVar2)(param_2,this + 8,&local_10);
    *(int *)(this + 0x10) = iVar1;
    if (*(int *)(this + 0x14) < iVar1) {
      (**(code **)(**(long **)this + 0x50))(*(long **)this,this + 8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RenderEffectAutoState::~RenderEffectAutoState() */

void __thiscall Sexy::RenderEffectAutoState::~RenderEffectAutoState(RenderEffectAutoState *this)

{
  long *plVar1;
  
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(this + 0x14) < *(int *)(this + 0x10)) {
      (**(code **)(*plVar1 + 0x58))(plVar1,this + 8);
      plVar1 = *(long **)this;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,this + 8);
  }
  return;
}


/* Sexy::RenderEffectAutoState::NextPass() */

void __thiscall Sexy::RenderEffectAutoState::NextPass(RenderEffectAutoState *this)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
    return;
  }
  iVar2 = *(int *)(this + 0x10);
  if (*(int *)(this + 0x14) < iVar2) {
    (**(code **)(*plVar3 + 0x58))(plVar3,this + 8);
    plVar3 = *(long **)this;
    iVar1 = *(int *)(this + 0x14) + 1;
    *(int *)(this + 0x14) = iVar1;
    if (plVar3 == (long *)0x0) {
      return;
    }
    iVar2 = *(int *)(this + 0x10);
  }
  else {
    iVar1 = *(int *)(this + 0x14) + 1;
    *(int *)(this + 0x14) = iVar1;
  }
  if (iVar1 < iVar2) {
    (**(code **)(*plVar3 + 0x50))(plVar3,this + 8);
  }
  return;
}


/* Sexy::RenderEffectAutoState::operator bool() const */

bool __thiscall Sexy::RenderEffectAutoState::operator_cast_to_bool(RenderEffectAutoState *this)

{
  byte bVar1;
  
  bVar1 = FUN_0329b324(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14));
  return (bool)(bVar1 ^ 1);
}


/* Sexy::RenderEffectAutoState::TEMPNAMEPLACEHOLDERVALUE() */

RenderEffectAutoState * __thiscall
Sexy::RenderEffectAutoState::operator++(RenderEffectAutoState *this)

{
  NextPass(this);
  return this;
}


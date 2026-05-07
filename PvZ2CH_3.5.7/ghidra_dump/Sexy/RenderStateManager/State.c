// Class: Sexy::RenderStateManager::State


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderStateManager::State::SetValue(unsigned int) */

void __thiscall Sexy::RenderStateManager::State::SetValue(State *this,uint param_1)

{
  StateValue aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateValue::StateValue(aSStack_20,param_1);
  SetValue(this,aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderStateManager::State::SetValue(float) */

void __thiscall Sexy::RenderStateManager::State::SetValue(State *this,float param_1)

{
  StateValue aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateValue::StateValue(aSStack_20,param_1);
  SetValue(this,aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderStateManager::State::SetValue(float, float, float, float) */

void __thiscall
Sexy::RenderStateManager::State::SetValue
          (State *this,float param_1,float param_2,float param_3,float param_4)

{
  StateValue aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateValue::StateValue(aSStack_20,param_1,param_2,param_3,param_4);
  SetValue(this,aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RenderStateManager::State::GetDword() const */

void __thiscall Sexy::RenderStateManager::State::GetDword(State *this)

{
  FUN_052d96c8(*(undefined4 *)(this + 0x30));
  return;
}


/* Sexy::RenderStateManager::State::GetFloat() const */

void __thiscall Sexy::RenderStateManager::State::GetFloat(State *this)

{
  FUN_052d96cc(*(undefined4 *)(this + 0x30));
  return;
}


/* Sexy::RenderStateManager::State::GetVector(float&, float&, float&, float&) const */

void __thiscall
Sexy::RenderStateManager::State::GetVector
          (State *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  StateValue::GetVector((StateValue *)(this + 0x28),param_1,param_2,param_3,param_4);
  return;
}


/* Sexy::RenderStateManager::State::State(Sexy::RenderStateManager*, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void __thiscall
Sexy::RenderStateManager::State::State
          (State *this,RenderStateManager *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  *(RenderStateManager **)this = param_1;
  StateValue::StateValue((StateValue *)(this + 0x28),0);
  StateValue::StateValue((StateValue *)(this + 0x40),0);
  StateValue::StateValue((StateValue *)(this + 0x58),0);
  StateValue::StateValue((StateValue *)(this + 0x70),0);
  *(undefined8 *)(this + 0x98) = 0;
  Set8BytesTo0(this + 0xa0);
  *(State **)(this + 0x20) = this;
  *(State **)(this + 0x18) = this;
  *(State **)(this + 0x90) = this;
  *(State **)(this + 0x88) = this;
  *(uint *)(this + 8) = param_2;
  *(uint *)(this + 0xc) = param_3;
  *(uint *)(this + 0x10) = param_4;
  *(uint *)(this + 0x14) = param_5;
  return;
}


/* Sexy::RenderStateManager::State::State(Sexy::RenderStateManager::State const&) */

void __thiscall Sexy::RenderStateManager::State::State(State *this,State *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  StateValue::StateValue((StateValue *)(this + 0x28),(StateValue *)(param_1 + 0x28));
  StateValue::StateValue((StateValue *)(this + 0x40),(StateValue *)(param_1 + 0x40));
  StateValue::StateValue((StateValue *)(this + 0x58),(StateValue *)(param_1 + 0x58));
  StateValue::StateValue((StateValue *)(this + 0x70),(StateValue *)(param_1 + 0x70));
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  Set8BytesTo0(this + 0xa0);
  *(State **)(this + 0x20) = this;
  *(State **)(this + 0x18) = this;
  *(State **)(this + 0x90) = this;
  *(State **)(this + 0x88) = this;
  if ((this + 8 < param_1 + 0x18) && (param_1 + 8 < this + 0x18)) {
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderStateManager::State::SetValue(void*) */

void __thiscall Sexy::RenderStateManager::State::SetValue(State *this,void *param_1)

{
  StateValue aSStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateValue::StateValue(aSStack_20,param_1);
  SetValue(this,aSStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RenderStateManager::State::GetPtr() const */

void __thiscall Sexy::RenderStateManager::State::GetPtr(State *this)

{
  FUN_052eb770(*(undefined8 *)(this + 0x30));
  return;
}


/* Sexy::RenderStateManager::State::~State() */

void __thiscall Sexy::RenderStateManager::State::~State(State *this)

{
  std::string::~string((string *)(this + 0xa0));
  return;
}


/* Sexy::RenderStateManager::State::IsDirty() const */

bool __thiscall Sexy::RenderStateManager::State::IsDirty(State *this)

{
  return *(State **)(this + 0x18) != this;
}


/* Sexy::RenderStateManager::State::Init(Sexy::RenderStateManager::StateValue const&, std::string
   const&, char const*) */

void Sexy::RenderStateManager::State::Init(StateValue *param_1,string *param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined8 *)param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  puVar4 = (undefined8 *)**(undefined8 **)param_1;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar2 = (*(code *)*puVar4)(*(undefined8 **)param_1,param_1);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  thunk_FUN_05475e00(param_1 + 0xa0,param_3);
  return;
}


/* Sexy::RenderStateManager::State::Init(Sexy::RenderStateManager::StateValue const&,
   Sexy::RenderStateManager::StateValue const&, std::string const&, char const*) */

void Sexy::RenderStateManager::State::Init
               (StateValue *param_1,StateValue *param_2,string *param_3,char *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar2 = *(undefined8 *)param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  puVar6 = (undefined8 *)**(undefined8 **)param_1;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_3 + 0x10);
  uVar2 = (*(code *)*puVar6)(*(undefined8 **)param_1,param_1);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  thunk_FUN_05475e00(param_1 + 0xa0,param_4);
  lVar3 = *(long *)param_1;
  *(long *)(param_1 + 0x88) = lVar3 + 0xb0;
  lVar4 = *(long *)(lVar3 + 0x140);
  *(long *)(param_1 + 0x90) = lVar4;
  *(StateValue **)(lVar4 + 0x88) = param_1;
  *(StateValue **)(lVar3 + 0x140) = param_1;
  return;
}


/* Sexy::RenderStateManager::State::Reset() */

void __thiscall Sexy::RenderStateManager::State::Reset(State *this)

{
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x48);
  return;
}


/* Sexy::RenderStateManager::State::SetDirty() */

void __thiscall Sexy::RenderStateManager::State::SetDirty(State *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = IsDirty(this);
  if (cVar1 == '\0') {
    lVar2 = *(long *)this;
    *(long *)(this + 0x18) = lVar2 + 8;
    lVar3 = *(long *)(lVar2 + 0x28);
    *(long *)(this + 0x20) = lVar3;
    *(State **)(lVar3 + 0x18) = this;
    *(State **)(lVar2 + 0x28) = this;
    *(undefined1 *)(lVar2 + 0x1d0) = 1;
  }
  return;
}


/* Sexy::RenderStateManager::State::ClearDirty(bool) */

void __thiscall Sexy::RenderStateManager::State::ClearDirty(State *this,bool param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = IsDirty(this);
  if (cVar1 != '\0') {
    if (param_1) {
      *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x28);
      *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x30);
      *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x38);
    }
    lVar2 = *(long *)(this + 0x18);
    lVar3 = *(long *)this;
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(this + 0x20);
    *(long *)(*(long *)(this + 0x20) + 0x18) = lVar2;
    *(State **)(this + 0x20) = this;
    *(State **)(this + 0x18) = this;
    *(undefined1 *)(lVar3 + 0x1d0) = 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RenderStateManager::State::SetValue(Sexy::RenderStateManager::StateValue const&) */

void __thiscall Sexy::RenderStateManager::State::SetValue(State *this,StateValue *param_1)

{
  StateValue *pSVar1;
  undefined8 uVar2;
  char cVar3;
  vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
  *this_00;
  JournalEntry aJStack_40 [56];
  long local_8;
  
  pSVar1 = (StateValue *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  cVar3 = StateValue::operator==(param_1,pSVar1);
  if (cVar3 == '\0') {
    (**(code **)(**(long **)this + 0x30))(*(long **)this);
    if (*(Context **)(*(long *)this + 0x158) != (Context *)0x0) {
      Context::SplitChildren(*(Context **)(*(long *)this + 0x158));
      this_00 = *(vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
                  **)(*(long *)this + 0x158);
      Context::JournalEntry::JournalEntry(aJStack_40,this,pSVar1,param_1);
      std::
      vector<Sexy::RenderStateManager::Context::JournalEntry,PooledAllocator<Sexy::RenderStateManager::Context::JournalEntry,Sexy::SimpleMemPool>>
      ::push_back(this_00,aJStack_40);
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)pSVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x30) = uVar2;
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x10);
    SetDirty(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


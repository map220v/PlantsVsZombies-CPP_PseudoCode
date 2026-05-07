// Class: Sexy::RenderStateManager


/* Sexy::RenderStateManager::Cleanup() */

void __thiscall Sexy::RenderStateManager::Cleanup(RenderStateManager *this)

{
  Context::Unacquire(*(Context **)(this + 0x158),false);
  return;
}


/* Sexy::RenderStateManager::RenderStateManager() */

void __thiscall Sexy::RenderStateManager::RenderStateManager(RenderStateManager *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_06a37140;
  State::State((State *)(this + 8),(RenderStateManager *)0x0,0,0,0,0);
  State::State((State *)(this + 0xb0),(RenderStateManager *)0x0,0,0,0,0);
  Context::Context((Context *)(this + 0x160));
  this[0x1d0] = (RenderStateManager)0x0;
  this[0x1d1] = (RenderStateManager)0x0;
  *(Context **)(this + 0x158) = (Context *)(this + 0x160);
  return;
}


/* Sexy::RenderStateManager::~RenderStateManager() */

void __thiscall Sexy::RenderStateManager::~RenderStateManager(RenderStateManager *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_06a37140;
  Context::~Context((Context *)(this + 0x160));
  State::~State((State *)(this + 0xb0));
  State::~State((State *)(this + 8));
  return;
}


/* Sexy::RenderStateManager::~RenderStateManager() */

void __thiscall Sexy::RenderStateManager::~RenderStateManager(RenderStateManager *this)

{
  ~RenderStateManager(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::RenderStateManager::ApplyContextDefaults() */

void __thiscall Sexy::RenderStateManager::ApplyContextDefaults(RenderStateManager *this)

{
  State *this_00;
  
  for (this_00 = *(State **)(this + 0x140); this_00 != (State *)(this + 0xb0);
      this_00 = *(State **)(this_00 + 0x90)) {
    *(undefined8 *)(this_00 + 0x38) = *(undefined8 *)(this_00 + 0x68);
    *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(this_00 + 0x58);
    *(undefined8 *)(this_00 + 0x30) = *(undefined8 *)(this_00 + 0x60);
    State::SetDirty(this_00);
  }
  return;
}


/* Sexy::RenderStateManager::WouldCommitState() */

RenderStateManager __thiscall Sexy::RenderStateManager::WouldCommitState(RenderStateManager *this)

{
  RenderStateManager RVar1;
  char cVar2;
  RenderStateManager *pRVar3;
  
  RVar1 = this[0x1d0];
  if (RVar1 == (RenderStateManager)0x0) {
    return this[0x1d1];
  }
  pRVar3 = *(RenderStateManager **)(this + 0x28);
  this[0x1d0] = (RenderStateManager)0x0;
  while( true ) {
    if (pRVar3 == this + 8) {
      this[0x1d1] = (RenderStateManager)0x0;
      return (RenderStateManager)0x0;
    }
    cVar2 = StateValue::operator==((StateValue *)(pRVar3 + 0x28),(StateValue *)(pRVar3 + 0x70));
    if ((cVar2 == '\0') && (*(long *)(pRVar3 + 0x98) != 0)) break;
    pRVar3 = *(RenderStateManager **)(pRVar3 + 0x20);
  }
  this[0x1d1] = (RenderStateManager)0x1;
  return RVar1;
}


/* Sexy::RenderStateManager::CommitState() */

uint __thiscall Sexy::RenderStateManager::CommitState(RenderStateManager *this)

{
  char cVar1;
  uint uVar2;
  RenderStateManager *this_00;
  RenderStateManager *pRVar3;
  uint uVar4;
  
  uVar4 = 1;
  do {
    this_00 = *(RenderStateManager **)(this + 0x28);
    if (*(RenderStateManager **)(this + 0x28) == this + 8) {
      return uVar4;
    }
    while( true ) {
      cVar1 = StateValue::operator==((StateValue *)(this_00 + 0x28),(StateValue *)(this_00 + 0x70));
      if (cVar1 != '\0') break;
      if (*(code **)(this_00 + 0x98) == (code *)0x0) {
        State::ClearDirty((State *)this_00,false);
      }
      else {
        uVar2 = (**(code **)(this_00 + 0x98))();
        uVar4 = uVar2 & uVar4;
      }
      *(undefined8 *)(this_00 + 0x70) = *(undefined8 *)(this_00 + 0x28);
      *(undefined8 *)(this_00 + 0x78) = *(undefined8 *)(this_00 + 0x30);
      pRVar3 = *(RenderStateManager **)(this + 0x28);
      *(undefined8 *)(this_00 + 0x80) = *(undefined8 *)(this_00 + 0x38);
      this_00 = pRVar3;
      if (pRVar3 == this + 8) {
        return uVar4;
      }
    }
    State::ClearDirty((State *)this_00,false);
  } while( true );
}


/* Sexy::RenderStateManager::SetContext(Sexy::RenderStateManager::Context*) */

void __thiscall Sexy::RenderStateManager::SetContext(RenderStateManager *this,Context *param_1)

{
  Context *this_00;
  Context *pCVar1;
  
  if (param_1 == (Context *)0x0) {
    param_1 = (Context *)(this + 0x160);
  }
  this_00 = *(Context **)(this + 0x158);
  if (this_00 != param_1) {
    pCVar1 = *(Context **)(this_00 + 0x48);
    if (pCVar1 != param_1) {
      if (this_00 != *(Context **)(param_1 + 0x48)) {
        Context::Unacquire(this_00,false);
        *(Context **)(this + 0x158) = param_1;
        Context::Reacquire(param_1,false);
        return;
      }
      *(Context **)(this + 0x158) = param_1;
      Context::Reacquire(param_1,true);
      return;
    }
    Context::Unacquire(this_00,true);
    *(Context **)(this + 0x158) = pCVar1;
  }
  return;
}


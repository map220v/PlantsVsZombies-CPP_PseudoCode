// Class: Sexy::RenderStateManager::StateValue


/* Sexy::RenderStateManager::StateValue::clear() */

void __thiscall Sexy::RenderStateManager::StateValue::clear(StateValue *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* Sexy::RenderStateManager::StateValue::StateValue(unsigned int) */

void __thiscall Sexy::RenderStateManager::StateValue::StateValue(StateValue *this,uint param_1)

{
  *(undefined4 *)this = 0;
  clear(this);
  *(uint *)(this + 8) = param_1;
  return;
}


/* Sexy::RenderStateManager::StateValue::StateValue(float) */

void __thiscall Sexy::RenderStateManager::StateValue::StateValue(StateValue *this,float param_1)

{
  *(undefined4 *)this = 1;
  clear(this);
  *(float *)(this + 8) = param_1;
  return;
}


/* Sexy::RenderStateManager::StateValue::StateValue(float, float, float, float) */

void __thiscall
Sexy::RenderStateManager::StateValue::StateValue
          (StateValue *this,float param_1,float param_2,float param_3,float param_4)

{
  *(undefined4 *)this = 3;
  *(float *)(this + 8) = param_1;
  *(float *)(this + 0xc) = param_2;
  *(float *)(this + 0x10) = param_3;
  *(float *)(this + 0x14) = param_4;
  return;
}


/* Sexy::RenderStateManager::StateValue::GetVector(float&, float&, float&, float&) const */

void __thiscall
Sexy::RenderStateManager::StateValue::GetVector
          (StateValue *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  *param_1 = *(float *)(this + 8);
  *param_2 = *(float *)(this + 0xc);
  *param_3 = *(float *)(this + 0x10);
  *param_4 = *(float *)(this + 0x14);
  return;
}


/* Sexy::RenderStateManager::StateValue::StateValue(void*) */

void __thiscall Sexy::RenderStateManager::StateValue::StateValue(StateValue *this,void *param_1)

{
  *(undefined4 *)this = 2;
  clear(this);
  *(void **)(this + 8) = param_1;
  return;
}


/* Sexy::RenderStateManager::StateValue::StateValue(Sexy::RenderStateManager::StateValue const&) */

void __thiscall
Sexy::RenderStateManager::StateValue::StateValue(StateValue *this,StateValue *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}


/* Sexy::RenderStateManager::StateValue::TEMPNAMEPLACEHOLDERVALUE(Sexy::RenderStateManager::StateValue
   const&) const */

bool __thiscall
Sexy::RenderStateManager::StateValue::operator==(StateValue *this,StateValue *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(int *)(this + 8) == *(int *)(param_1 + 8)) &&
      (*(int *)(this + 0x14) == *(int *)(param_1 + 0x14))) &&
     (*(int *)(this + 0xc) == *(int *)(param_1 + 0xc))) {
    bVar1 = *(int *)(this + 0x10) == *(int *)(param_1 + 0x10);
  }
  return bVar1;
}


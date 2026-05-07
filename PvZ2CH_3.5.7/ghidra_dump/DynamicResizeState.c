// Class: DynamicResizeState


/* DynamicResizeState::DynamicResizeState() */

void __thiscall DynamicResizeState::DynamicResizeState(DynamicResizeState *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (DynamicResizeState)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* DynamicResizeState::DynamicResizeState(DynamicSizeData const*, DynamicSizeData const*,
   DynamicSizeData const*, int*, bool, int) */

void __thiscall
DynamicResizeState::DynamicResizeState
          (DynamicResizeState *this,DynamicSizeData *param_1,DynamicSizeData *param_2,
          DynamicSizeData *param_3,int *param_4,bool param_5,int param_6)

{
  *(DynamicSizeData **)this = param_1;
  *(DynamicSizeData **)(this + 8) = param_2;
  *(DynamicSizeData **)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x18) = 0;
  *(int **)(this + 0x20) = param_4;
  this[0x28] = (DynamicResizeState)param_5;
  *(int *)(this + 0x2c) = param_6;
  return;
}


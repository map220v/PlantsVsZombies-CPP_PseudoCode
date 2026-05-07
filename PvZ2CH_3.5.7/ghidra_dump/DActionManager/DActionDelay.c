// Class: DActionManager::DActionDelay


/* DActionManager::DActionDelay::DActionDelay(DAction*, DTransformNode*,
   DActionManager::DActionDelay::Type) */

void __thiscall
DActionManager::DActionDelay::DActionDelay
          (DActionDelay *this,DRef *param_1,undefined8 param_2,undefined4 param_4)

{
  *(undefined4 *)this = param_4;
  *(DRef **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = param_2;
  if (param_1 != (DRef *)0x0) {
    DRef::ref(param_1);
    return;
  }
  return;
}


/* DActionManager::DActionDelay::DActionDelay(DActionManager::DActionDelay const&) */

void __thiscall DActionManager::DActionDelay::DActionDelay(DActionDelay *this,DActionDelay *param_1)

{
  DRef *this_00;
  undefined8 uVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this_00 = *(DRef **)(param_1 + 8);
  *(DRef **)(this + 8) = this_00;
  if (this_00 != (DRef *)0x0) {
    DRef::ref(this_00);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


/* DActionManager::DActionDelay::~DActionDelay() */

void __thiscall DActionManager::DActionDelay::~DActionDelay(DActionDelay *this)

{
  if (*(DRef **)(this + 8) != (DRef *)0x0) {
    DRef::unref(*(DRef **)(this + 8));
    return;
  }
  return;
}


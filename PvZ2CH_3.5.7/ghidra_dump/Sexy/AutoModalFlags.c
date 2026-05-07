// Class: Sexy::AutoModalFlags


/* Sexy::AutoModalFlags::AutoModalFlags(Sexy::ModalFlags*, Sexy::FlagsMod const&) */

void __thiscall
Sexy::AutoModalFlags::AutoModalFlags(AutoModalFlags *this,ModalFlags *param_1,FlagsMod *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  *(ModalFlags **)this = param_1;
  *(undefined4 *)(this + 8) = uVar1;
  ModalFlags::ModFlags(param_1,param_2);
  return;
}


/* Sexy::AutoModalFlags::~AutoModalFlags() */

void __thiscall Sexy::AutoModalFlags::~AutoModalFlags(AutoModalFlags *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)this;
  uVar1 = *(undefined4 *)(this + 8);
  puVar2[1] = *(undefined4 *)(this + 0xc);
  *puVar2 = uVar1;
  return;
}


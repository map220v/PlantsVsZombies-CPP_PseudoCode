// Class: VaseContentProperties


/* VaseContentProperties::VaseContentProperties(VaseContentProperties const&) */

void __thiscall
VaseContentProperties::VaseContentProperties
          (VaseContentProperties *this,VaseContentProperties *param_1)

{
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* VaseContentProperties::VaseContentProperties() */

void __thiscall VaseContentProperties::VaseContentProperties(VaseContentProperties *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  Set8BytesTo0(this + 0x10);
  *(undefined4 *)(this + 0x18) = 1;
  return;
}


/* VaseContentProperties::VaseContentProperties(VaseContentProperties&&) */

void __thiscall
VaseContentProperties::VaseContentProperties
          (VaseContentProperties *this,VaseContentProperties *param_1)

{
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  FUN_05474148(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


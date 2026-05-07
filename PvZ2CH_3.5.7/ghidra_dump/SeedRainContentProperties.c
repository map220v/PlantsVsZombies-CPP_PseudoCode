// Class: SeedRainContentProperties


/* SeedRainContentProperties::SeedRainContentProperties() */

void __thiscall
SeedRainContentProperties::SeedRainContentProperties(SeedRainContentProperties *this)

{
  Set8BytesTo0();
  Set8BytesTo0(this + 8);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 5;
  *(undefined4 *)(this + 0x18) = 5;
  return;
}


/* SeedRainContentProperties::SeedRainContentProperties(SeedRainContentProperties const&) */

void __thiscall
SeedRainContentProperties::SeedRainContentProperties
          (SeedRainContentProperties *this,SeedRainContentProperties *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}


/* SeedRainContentProperties::TEMPNAMEPLACEHOLDERVALUE(SeedRainContentProperties const&) const */

bool __thiscall
SeedRainContentProperties::operator==
          (SeedRainContentProperties *this,SeedRainContentProperties *param_1)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = std::operator==((string *)param_1,(string *)this);
  bVar1 = false;
  if (cVar2 != '\0') {
    cVar2 = std::operator==((string *)(param_1 + 8),(string *)(this + 8));
    bVar1 = false;
    if ((cVar2 != '\0') && (bVar1 = false, *(long *)(param_1 + 0x10) == *(long *)(this + 0x10))) {
      bVar1 = *(int *)(param_1 + 0x18) == *(int *)(this + 0x18);
    }
  }
  return bVar1;
}


/* SeedRainContentProperties::SeedRainContentProperties(SeedRainContentProperties&&) */

void __thiscall
SeedRainContentProperties::SeedRainContentProperties
          (SeedRainContentProperties *this,SeedRainContentProperties *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}


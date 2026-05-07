// Class: ToolPacketData_LargeElixir


/* ToolPacketData_LargeElixir::StaticGetClass() */

long * ToolPacketData_LargeElixir::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ToolPacketData::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketData_LargeElixir",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_LargeElixir::GetClass() const */

long * ToolPacketData_LargeElixir::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ToolPacketData::StaticGetClass();
  (*pcVar3)(plVar1,"ToolPacketData_LargeElixir",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_LargeElixir::ToolPacketData_LargeElixir() */

void __thiscall
ToolPacketData_LargeElixir::ToolPacketData_LargeElixir(ToolPacketData_LargeElixir *this)

{
  ToolPacketData::ToolPacketData((ToolPacketData *)this);
  *(undefined ***)this = &PTR_GetClass_06849d90;
  return;
}


/* ToolPacketData_LargeElixir::StaticNew() */

ToolPacketData_LargeElixir * ToolPacketData_LargeElixir::StaticNew(void)

{
  ToolPacketData_LargeElixir *this;
  
  this = ::operator_new(0x10);
  ToolPacketData_LargeElixir(this);
  return this;
}


/* ToolPacketData_LargeElixir::~ToolPacketData_LargeElixir() */

void __thiscall
ToolPacketData_LargeElixir::~ToolPacketData_LargeElixir(ToolPacketData_LargeElixir *this)

{
  *(undefined ***)this = &PTR_GetClass_06849d90;
  ToolPacketData::~ToolPacketData((ToolPacketData *)this);
  return;
}


/* ToolPacketData_LargeElixir::~ToolPacketData_LargeElixir() */

void __thiscall
ToolPacketData_LargeElixir::~ToolPacketData_LargeElixir(ToolPacketData_LargeElixir *this)

{
  ~ToolPacketData_LargeElixir(this);
  AK::FreeHook(this);
  return;
}


/* ToolPacketData_LargeElixir::UseAt(Sexy::Point const&) */

undefined8 __thiscall
ToolPacketData_LargeElixir::UseAt(ToolPacketData_LargeElixir *this,Point *param_1)

{
  ArtifactCalabashSubSystem *this_00;
  
  this_00 = Board::FindGameSubSystem<ArtifactCalabashSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (ArtifactCalabashSubSystem *)0x0) {
    ArtifactCalabashSubSystem::ApplyLargeElixir(this_00,param_1);
  }
  return 1;
}


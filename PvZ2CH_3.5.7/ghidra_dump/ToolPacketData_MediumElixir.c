// Class: ToolPacketData_MediumElixir


/* ToolPacketData_MediumElixir::StaticGetClass() */

long * ToolPacketData_MediumElixir::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_MediumElixir",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_MediumElixir::GetClass() const */

long * ToolPacketData_MediumElixir::GetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_MediumElixir",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_MediumElixir::ToolPacketData_MediumElixir() */

void __thiscall
ToolPacketData_MediumElixir::ToolPacketData_MediumElixir(ToolPacketData_MediumElixir *this)

{
  ToolPacketData::ToolPacketData((ToolPacketData *)this);
  *(undefined ***)this = &PTR_GetClass_06849d00;
  return;
}


/* ToolPacketData_MediumElixir::StaticNew() */

ToolPacketData_MediumElixir * ToolPacketData_MediumElixir::StaticNew(void)

{
  ToolPacketData_MediumElixir *this;
  
  this = ::operator_new(0x10);
  ToolPacketData_MediumElixir(this);
  return this;
}


/* ToolPacketData_MediumElixir::~ToolPacketData_MediumElixir() */

void __thiscall
ToolPacketData_MediumElixir::~ToolPacketData_MediumElixir(ToolPacketData_MediumElixir *this)

{
  *(undefined ***)this = &PTR_GetClass_06849d00;
  ToolPacketData::~ToolPacketData((ToolPacketData *)this);
  return;
}


/* ToolPacketData_MediumElixir::~ToolPacketData_MediumElixir() */

void __thiscall
ToolPacketData_MediumElixir::~ToolPacketData_MediumElixir(ToolPacketData_MediumElixir *this)

{
  ~ToolPacketData_MediumElixir(this);
  AK::FreeHook(this);
  return;
}


/* ToolPacketData_MediumElixir::UseAt(Sexy::Point const&) */

undefined8 __thiscall
ToolPacketData_MediumElixir::UseAt(ToolPacketData_MediumElixir *this,Point *param_1)

{
  ArtifactCalabashSubSystem *this_00;
  
  this_00 = Board::FindGameSubSystem<ArtifactCalabashSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (ArtifactCalabashSubSystem *)0x0) {
    ArtifactCalabashSubSystem::ApplyMediumElixir(this_00,param_1);
  }
  return 1;
}


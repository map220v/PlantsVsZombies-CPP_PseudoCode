// Class: ToolPacketData_SmallElixir


/* ToolPacketData_SmallElixir::StaticGetClass() */

long * ToolPacketData_SmallElixir::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_SmallElixir",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_SmallElixir::GetClass() const */

long * ToolPacketData_SmallElixir::GetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_SmallElixir",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_SmallElixir::ToolPacketData_SmallElixir() */

void __thiscall
ToolPacketData_SmallElixir::ToolPacketData_SmallElixir(ToolPacketData_SmallElixir *this)

{
  ToolPacketData::ToolPacketData((ToolPacketData *)this);
  *(undefined ***)this = &PTR_GetClass_06849c70;
  return;
}


/* ToolPacketData_SmallElixir::StaticNew() */

ToolPacketData_SmallElixir * ToolPacketData_SmallElixir::StaticNew(void)

{
  ToolPacketData_SmallElixir *this;
  
  this = ::operator_new(0x10);
  ToolPacketData_SmallElixir(this);
  return this;
}


/* ToolPacketData_SmallElixir::~ToolPacketData_SmallElixir() */

void __thiscall
ToolPacketData_SmallElixir::~ToolPacketData_SmallElixir(ToolPacketData_SmallElixir *this)

{
  *(undefined ***)this = &PTR_GetClass_06849c70;
  ToolPacketData::~ToolPacketData((ToolPacketData *)this);
  return;
}


/* ToolPacketData_SmallElixir::~ToolPacketData_SmallElixir() */

void __thiscall
ToolPacketData_SmallElixir::~ToolPacketData_SmallElixir(ToolPacketData_SmallElixir *this)

{
  ~ToolPacketData_SmallElixir(this);
  AK::FreeHook(this);
  return;
}


/* ToolPacketData_SmallElixir::UseAt(Sexy::Point const&) */

undefined8 __thiscall
ToolPacketData_SmallElixir::UseAt(ToolPacketData_SmallElixir *this,Point *param_1)

{
  ArtifactCalabashSubSystem *this_00;
  
  this_00 = Board::FindGameSubSystem<ArtifactCalabashSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (ArtifactCalabashSubSystem *)0x0) {
    ArtifactCalabashSubSystem::ApplySmallElixir(this_00,param_1);
  }
  return 1;
}


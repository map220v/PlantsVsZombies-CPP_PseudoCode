// Class: ToolPacketData_ThunderElixir


/* ToolPacketData_ThunderElixir::CanUseAt(Sexy::Point const&) */

void ToolPacketData_ThunderElixir::CanUseAt(Point *param_1)

{
  Board::HasPlantAt(*(Point **)(gLawnApp + 0x9f0));
  return;
}


/* ToolPacketData_ThunderElixir::StaticGetClass() */

long * ToolPacketData_ThunderElixir::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_ThunderElixir",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_ThunderElixir::GetClass() const */

long * ToolPacketData_ThunderElixir::GetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_ThunderElixir",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_ThunderElixir::ToolPacketData_ThunderElixir() */

void __thiscall
ToolPacketData_ThunderElixir::ToolPacketData_ThunderElixir(ToolPacketData_ThunderElixir *this)

{
  ToolPacketData::ToolPacketData((ToolPacketData *)this);
  *(undefined ***)this = &PTR_GetClass_06849e20;
  return;
}


/* ToolPacketData_ThunderElixir::StaticNew() */

ToolPacketData_ThunderElixir * ToolPacketData_ThunderElixir::StaticNew(void)

{
  ToolPacketData_ThunderElixir *this;
  
  this = ::operator_new(0x10);
  ToolPacketData_ThunderElixir(this);
  return this;
}


/* ToolPacketData_ThunderElixir::~ToolPacketData_ThunderElixir() */

void __thiscall
ToolPacketData_ThunderElixir::~ToolPacketData_ThunderElixir(ToolPacketData_ThunderElixir *this)

{
  *(undefined ***)this = &PTR_GetClass_06849e20;
  ToolPacketData::~ToolPacketData((ToolPacketData *)this);
  return;
}


/* ToolPacketData_ThunderElixir::~ToolPacketData_ThunderElixir() */

void __thiscall
ToolPacketData_ThunderElixir::~ToolPacketData_ThunderElixir(ToolPacketData_ThunderElixir *this)

{
  ~ToolPacketData_ThunderElixir(this);
  AK::FreeHook(this);
  return;
}


/* ToolPacketData_ThunderElixir::UseAt(Sexy::Point const&) */

undefined8 __thiscall
ToolPacketData_ThunderElixir::UseAt(ToolPacketData_ThunderElixir *this,Point *param_1)

{
  ArtifactCalabashSubSystem *this_00;
  
  this_00 = Board::FindGameSubSystem<ArtifactCalabashSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (ArtifactCalabashSubSystem *)0x0) {
    ArtifactCalabashSubSystem::ApplyThunderElixir(this_00,param_1);
  }
  return 1;
}


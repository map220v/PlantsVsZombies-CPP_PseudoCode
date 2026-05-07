// Class: ToolPacketData_RiftPlantfood


/* ToolPacketData_RiftPlantfood::StaticGetClass() */

long * ToolPacketData_RiftPlantfood::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_RiftPlantfood",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_RiftPlantfood::GetClass() const */

long * ToolPacketData_RiftPlantfood::GetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_RiftPlantfood",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_RiftPlantfood::ToolPacketData_RiftPlantfood() */

void __thiscall
ToolPacketData_RiftPlantfood::ToolPacketData_RiftPlantfood(ToolPacketData_RiftPlantfood *this)

{
  ToolPacketData::ToolPacketData((ToolPacketData *)this);
  *(undefined ***)this = &PTR_GetClass_06849b50;
  return;
}


/* ToolPacketData_RiftPlantfood::StaticNew() */

ToolPacketData_RiftPlantfood * ToolPacketData_RiftPlantfood::StaticNew(void)

{
  ToolPacketData_RiftPlantfood *this;
  
  this = ::operator_new(0x10);
  ToolPacketData_RiftPlantfood(this);
  return this;
}


/* ToolPacketData_RiftPlantfood::~ToolPacketData_RiftPlantfood() */

void __thiscall
ToolPacketData_RiftPlantfood::~ToolPacketData_RiftPlantfood(ToolPacketData_RiftPlantfood *this)

{
  *(undefined ***)this = &PTR_GetClass_06849b50;
  ToolPacketData::~ToolPacketData((ToolPacketData *)this);
  return;
}


/* ToolPacketData_RiftPlantfood::~ToolPacketData_RiftPlantfood() */

void __thiscall
ToolPacketData_RiftPlantfood::~ToolPacketData_RiftPlantfood(ToolPacketData_RiftPlantfood *this)

{
  ~ToolPacketData_RiftPlantfood(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketData_RiftPlantfood::UseAt(Sexy::Point const&) */

void ToolPacketData_RiftPlantfood::UseAt(Point *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  Board *pBVar5;
  int local_10;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  uVar3 = Board::GetPlantfoodCount(pBVar5);
  local_10 = (uVar3 & 0xff) + 1;
  local_c = Board::GetPlantfoodMax(pBVar5);
  local_c = local_c & 0xff;
  piVar4 = eastl::min_alt<int>(&local_10,(int *)&local_c);
  Board::SetPlantfoodCount(pBVar5,*piVar4);
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  bVar1 = Board::GetPlantfoodCount(pBVar5);
  bVar2 = Board::GetPlantfoodMax(pBVar5);
  if (bVar2 <= bVar1) {
    MessageRouter::Post<ToolPacketData*,ToolPacketData_RiftPlantfood*>
              ((MessageRouter *)gMessageRouter,Message::NotifyToolPlantfoodMax,
               (ToolPacketData_RiftPlantfood *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


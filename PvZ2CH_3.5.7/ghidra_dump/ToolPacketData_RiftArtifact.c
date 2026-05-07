// Class: ToolPacketData_RiftArtifact


/* ToolPacketData_RiftArtifact::UseAt(Sexy::Point const&) */

undefined8 ToolPacketData_RiftArtifact::UseAt(Point *param_1)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return 1;
}


/* ToolPacketData_RiftArtifact::StaticGetClass() */

long * ToolPacketData_RiftArtifact::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_RiftArtifact",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_RiftArtifact::GetClass() const */

long * ToolPacketData_RiftArtifact::GetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_RiftArtifact",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_RiftArtifact::ToolPacketData_RiftArtifact() */

void __thiscall
ToolPacketData_RiftArtifact::ToolPacketData_RiftArtifact(ToolPacketData_RiftArtifact *this)

{
  ToolPacketData::ToolPacketData((ToolPacketData *)this);
  *(undefined ***)this = &PTR_GetClass_06849be0;
  return;
}


/* ToolPacketData_RiftArtifact::StaticNew() */

ToolPacketData_RiftArtifact * ToolPacketData_RiftArtifact::StaticNew(void)

{
  ToolPacketData_RiftArtifact *this;
  
  this = ::operator_new(0x10);
  ToolPacketData_RiftArtifact(this);
  return this;
}


/* ToolPacketData_RiftArtifact::~ToolPacketData_RiftArtifact() */

void __thiscall
ToolPacketData_RiftArtifact::~ToolPacketData_RiftArtifact(ToolPacketData_RiftArtifact *this)

{
  *(undefined ***)this = &PTR_GetClass_06849be0;
  ToolPacketData::~ToolPacketData((ToolPacketData *)this);
  return;
}


/* ToolPacketData_RiftArtifact::~ToolPacketData_RiftArtifact() */

void __thiscall
ToolPacketData_RiftArtifact::~ToolPacketData_RiftArtifact(ToolPacketData_RiftArtifact *this)

{
  ~ToolPacketData_RiftArtifact(this);
  AK::FreeHook(this);
  return;
}


/* ToolPacketData_RiftArtifact::GetCost(int) */

undefined4 __thiscall
ToolPacketData_RiftArtifact::GetCost(ToolPacketData_RiftArtifact *this,int param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 8);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar1 = FUN_0442df24(*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x60));
  if (iVar1 <= param_1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar1 = FUN_0442df24(*(undefined8 *)(lVar3 + 0x58),*(undefined8 *)(lVar3 + 0x60));
    puVar4 = (undefined4 *)FUN_0442df64(*(undefined8 *)(lVar2 + 0x58),(long)(iVar1 + -1));
    return *puVar4;
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  puVar4 = (undefined4 *)FUN_0442df64(*(undefined8 *)(lVar2 + 0x58),(long)param_1);
  return *puVar4;
}


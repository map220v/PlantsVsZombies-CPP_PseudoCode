// Class: WorldMapPropertySheet


/* WorldMapPropertySheet::~WorldMapPropertySheet() */

void __thiscall WorldMapPropertySheet::~WorldMapPropertySheet(WorldMapPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06857900;
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* WorldMapPropertySheet::~WorldMapPropertySheet() */

void __thiscall WorldMapPropertySheet::~WorldMapPropertySheet(WorldMapPropertySheet *this)

{
  ~WorldMapPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* WorldMapPropertySheet::StaticGetClass() */

long * WorldMapPropertySheet::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMapPropertySheet",uVar2,StaticNew);
  nop();
  return sClass;
}


/* WorldMapPropertySheet::GetClass() const */

long * WorldMapPropertySheet::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMapPropertySheet",uVar2,StaticNew);
  nop();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapPropertySheet::WorldMapPropertySheet() */

void __thiscall WorldMapPropertySheet::WorldMapPropertySheet(WorldMapPropertySheet *this)

{
  bool bVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06857900;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x50));
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 0x3fb33333;
  *(undefined4 *)(this + 0x34) = 0x3f000000;
  *(undefined4 *)(this + 0x14) = 0x3fa66666;
  *(undefined4 *)(this + 0x18) = 0x3f99999a;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x1c) = 0x3f8ccccd;
  *(undefined4 *)(this + 0x24) = 0x3f666666;
  *(undefined4 *)(this + 0x28) = 0x3f4ccccd;
  *(undefined4 *)(this + 0x2c) = 0x3f333333;
  *(undefined4 *)(this + 0x30) = 0x3f19999a;
  *(undefined4 *)(this + 0x38) = 0x3ecccccd;
  *(undefined4 *)(this + 0x3c) = 0x3e99999a;
  *(undefined4 *)(this + 0x40) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x44) = 0x3dcccccd;
  *(undefined4 *)(this + 0x4c) = 0x43c80000;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,62.35,32.9);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x50) = local_10;
  *(undefined4 *)(this + 0x58) = 0x42f80000;
  *(undefined4 *)(this + 0x5c) = 0x43e60000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapPropertySheet::StaticNew() */

WorldMapPropertySheet * WorldMapPropertySheet::StaticNew(void)

{
  WorldMapPropertySheet *this;
  
  this = ::operator_new(0x60);
  WorldMapPropertySheet(this);
  return this;
}


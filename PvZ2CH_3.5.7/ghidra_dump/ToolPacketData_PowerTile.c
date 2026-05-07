// Class: ToolPacketData_PowerTile


/* ToolPacketData_PowerTile::StaticGetClass() */

long * ToolPacketData_PowerTile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_PowerTile",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_PowerTile::GetClass() const */

long * ToolPacketData_PowerTile::GetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketData_PowerTile",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketData_PowerTile::ToolPacketData_PowerTile() */

void __thiscall ToolPacketData_PowerTile::ToolPacketData_PowerTile(ToolPacketData_PowerTile *this)

{
  ToolPacketData::ToolPacketData((ToolPacketData *)this);
  *(undefined ***)this = &PTR_GetClass_068499a0;
  return;
}


/* ToolPacketData_PowerTile::StaticNew() */

ToolPacketData_PowerTile * ToolPacketData_PowerTile::StaticNew(void)

{
  ToolPacketData_PowerTile *this;
  
  this = ::operator_new(0x10);
  ToolPacketData_PowerTile(this);
  return this;
}


/* ToolPacketData_PowerTile::~ToolPacketData_PowerTile() */

void __thiscall ToolPacketData_PowerTile::~ToolPacketData_PowerTile(ToolPacketData_PowerTile *this)

{
  *(undefined ***)this = &PTR_GetClass_068499a0;
  ToolPacketData::~ToolPacketData((ToolPacketData *)this);
  return;
}


/* ToolPacketData_PowerTile::~ToolPacketData_PowerTile() */

void __thiscall ToolPacketData_PowerTile::~ToolPacketData_PowerTile(ToolPacketData_PowerTile *this)

{
  ~ToolPacketData_PowerTile(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketData_PowerTile::GetCursorAnimRigOffset() const */

void __thiscall ToolPacketData_PowerTile::GetCursorAnimRigOffset(ToolPacketData_PowerTile *this)

{
  long lVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  PowerTileSubsystem::GetGridItemType
            ((PowerTileSubsystem *)aRStack_18,*(undefined4 *)(lVar1 + 0x50));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar1 + 0x30));
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  uVar2 = *(undefined8 *)(lVar1 + 0xa8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)uVar2,(int)((ulong)uVar2 >> 0x20));
}


/* ToolPacketData_PowerTile::CanUseAt(Sexy::Point const&) */

void __thiscall ToolPacketData_PowerTile::CanUseAt(ToolPacketData_PowerTile *this,Point *param_1)

{
  PowerTileSubsystem *pPVar1;
  long lVar2;
  
  pPVar1 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  PowerTileSubsystem::CanAddPowerTileAt(pPVar1,*(undefined4 *)(lVar2 + 0x50),param_1);
  return;
}


/* ToolPacketData_PowerTile::UseAt(Sexy::Point const&) */

void __thiscall ToolPacketData_PowerTile::UseAt(ToolPacketData_PowerTile *this,Point *param_1)

{
  PowerTileSubsystem *pPVar1;
  long lVar2;
  
  pPVar1 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  PowerTileSubsystem::TryAddPowerTileAt(pPVar1,*(undefined4 *)(lVar2 + 0x50),param_1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketData_PowerTile::CreateCursorAnimRig() */

void __thiscall ToolPacketData_PowerTile::CreateCursorAnimRig(ToolPacketData_PowerTile *this)

{
  char cVar1;
  long lVar2;
  ResourceInfo *pRVar3;
  EffectAnimRig_LinkedTile *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  PowerTileSubsystem::GetGridItemType
            ((PowerTileSubsystem *)aRStack_28,*(undefined4 *)(lVar2 + 0x50));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar2 + 0x30));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  FUN_05475d88(asStack_18,lVar2 + 0x98);
  GetPAMByName(asStack_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 == '\0') {
    this_00 = (EffectAnimRig_LinkedTile *)0x0;
  }
  else {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
    this_00 = PopAnimRig::CreateRigOutsideTable<EffectAnimRig_LinkedTile>((PopAnim *)pRVar3);
    EffectAnimRig_LinkedTile::PlayIdle(this_00);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


// Class: MeteorLauncherEntry


/* MeteorLauncherEntry::MeteorLauncherEntry() */

void __thiscall MeteorLauncherEntry::MeteorLauncherEntry(MeteorLauncherEntry *this)

{
  undefined4 uVar1;
  
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 8) = uVar1;
  Sexy::Point::Point((Point *)(this + 0xc));
  *(undefined4 *)(this + 0x14) = 0x3f000000;
  *(undefined4 *)(this + 0x18) = 0x3f000000;
  *(undefined4 *)(this + 0x1c) = 0x3f000000;
  return;
}


/* MeteorLauncherEntry::MeteorLauncherEntry(MeteorLauncherEntry const&) */

void __thiscall
MeteorLauncherEntry::MeteorLauncherEntry(MeteorLauncherEntry *this,MeteorLauncherEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  Sexy::Point::Point((Point *)(this + 0xc),(TPoint *)(param_1 + 0xc));
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar3;
  return;
}


/* MeteorLauncherEntry::TEMPNAMEPLACEHOLDERVALUE(MeteorLauncherEntry&&) */

MeteorLauncherEntry * __thiscall
MeteorLauncherEntry::operator=(MeteorLauncherEntry *this,MeteorLauncherEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar5;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MeteorLauncherEntry::MeteorLauncherEntry(PlantFramework*, float, Sexy::Point const&, float,
   float, float, int) */

void __thiscall
MeteorLauncherEntry::MeteorLauncherEntry
          (MeteorLauncherEntry *this,PlantFramework *param_1,float param_2,Point *param_3,
          float param_4,float param_5,float param_6,int param_7)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(float *)(this + 8) = param_2;
  Sexy::Point::Point((Point *)(this + 0xc),(TPoint *)param_3);
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x20) = param_7;
  *(float *)(this + 0x14) = param_4;
  *(float *)(this + 0x18) = param_5;
  *(float *)(this + 0x1c) = param_6;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


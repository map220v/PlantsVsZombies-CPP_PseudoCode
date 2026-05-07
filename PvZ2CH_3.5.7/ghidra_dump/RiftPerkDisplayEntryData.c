// Class: RiftPerkDisplayEntryData


/* RiftPerkDisplayEntryData::RiftPerkDisplayEntryData() */

void __thiscall RiftPerkDisplayEntryData::RiftPerkDisplayEntryData(RiftPerkDisplayEntryData *this)

{
  size_t in_x2;
  
  Set8BytesTo0((string *)(this + 0x10));
  Set8BytesTo0((string *)(this + 0x18));
  *this = (RiftPerkDisplayEntryData)0x0;
  *(undefined4 *)(this + 4) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  std::string::append((string *)(this + 0x18),"",in_x2);
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* RiftPerkDisplayEntryData::TEMPNAMEPLACEHOLDERVALUE(RiftPerkDisplayEntryData const&) */

RiftPerkDisplayEntryData * __thiscall
RiftPerkDisplayEntryData::operator=
          (RiftPerkDisplayEntryData *this,RiftPerkDisplayEntryData *param_1)

{
  undefined4 uVar1;
  RiftPerkDisplayEntryData RVar2;
  
  RVar2 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *this = RVar2;
  *(undefined4 *)(this + 4) = uVar1;
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  return this;
}


/* RiftPerkDisplayEntryData::RiftPerkDisplayEntryData(RiftPerkDisplayEntryData const&) */

void __thiscall
RiftPerkDisplayEntryData::RiftPerkDisplayEntryData
          (RiftPerkDisplayEntryData *this,RiftPerkDisplayEntryData *param_1)

{
  undefined4 uVar1;
  RiftPerkDisplayEntryData RVar2;
  
  RVar2 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *this = RVar2;
  *(undefined4 *)(this + 4) = uVar1;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  return;
}


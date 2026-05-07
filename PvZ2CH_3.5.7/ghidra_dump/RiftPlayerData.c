// Class: RiftPlayerData


/* RiftPlayerData::~RiftPlayerData() */

void __thiscall RiftPlayerData::~RiftPlayerData(RiftPlayerData *this)

{
  *(undefined ***)this = &PTR__RiftPlayerData_06679890;
  FUN_05476c50(this + 0x10);
  return;
}


/* RiftPlayerData::~RiftPlayerData() */

void __thiscall RiftPlayerData::~RiftPlayerData(RiftPlayerData *this)

{
  ~RiftPlayerData(this);
  AK::FreeHook(this);
  return;
}


/* RiftPlayerData::RiftPlayerData(RiftPlayerData const&) */

void __thiscall RiftPlayerData::RiftPlayerData(RiftPlayerData *this,RiftPlayerData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  RiftPlayerData RVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined ***)this = &PTR__RiftPlayerData_06679890;
  FUN_05477b24(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  RVar3 = param_1[0x20];
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  this[0x20] = RVar3;
  return;
}


/* RiftPlayerData::RiftPlayerData() */

void __thiscall RiftPlayerData::RiftPlayerData(RiftPlayerData *this)

{
  *(undefined ***)this = &PTR__RiftPlayerData_06679890;
  FUN_05476574(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  FUN_054772c4(this + 0x10,&DAT_056f11a8);
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (RiftPlayerData)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* RiftPlayerData::TEMPNAMEPLACEHOLDERVALUE(RiftPlayerData const&) */

RiftPlayerData * __thiscall RiftPlayerData::operator=(RiftPlayerData *this,RiftPlayerData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  RiftPlayerData RVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = uVar1;
  thunk_FUN_05477b9c(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  RVar3 = param_1[0x20];
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  this[0x20] = RVar3;
  return this;
}


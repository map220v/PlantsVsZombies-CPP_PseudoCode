// Class: RiftLocalPlayerData


/* RiftLocalPlayerData::~RiftLocalPlayerData() */

void __thiscall RiftLocalPlayerData::~RiftLocalPlayerData(RiftLocalPlayerData *this)

{
  *(undefined ***)this = &PTR__RiftLocalPlayerData_066798b0;
  RiftPlayerData::~RiftPlayerData((RiftPlayerData *)this);
  return;
}


/* RiftLocalPlayerData::~RiftLocalPlayerData() */

void __thiscall RiftLocalPlayerData::~RiftLocalPlayerData(RiftLocalPlayerData *this)

{
  ~RiftLocalPlayerData(this);
  AK::FreeHook(this);
  return;
}


/* RiftLocalPlayerData::RiftLocalPlayerData(RiftLocalPlayerData const&) */

void __thiscall
RiftLocalPlayerData::RiftLocalPlayerData(RiftLocalPlayerData *this,RiftLocalPlayerData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  RiftPlayerData::RiftPlayerData((RiftPlayerData *)this,(RiftPlayerData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined ***)this = &PTR__RiftLocalPlayerData_066798b0;
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x34) = uVar3;
  return;
}


/* RiftLocalPlayerData::RiftLocalPlayerData() */

void __thiscall RiftLocalPlayerData::RiftLocalPlayerData(RiftLocalPlayerData *this)

{
  RiftPlayerData::RiftPlayerData((RiftPlayerData *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR__RiftLocalPlayerData_066798b0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  return;
}


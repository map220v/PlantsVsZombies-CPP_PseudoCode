// Class: DynamicZombiesInstruction


/* DynamicZombiesInstruction::~DynamicZombiesInstruction() */

void __thiscall
DynamicZombiesInstruction::~DynamicZombiesInstruction(DynamicZombiesInstruction *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x10));
  return;
}


// Class: WaveSpawnItem


/* WaveSpawnItem::~WaveSpawnItem() */

void __thiscall WaveSpawnItem::~WaveSpawnItem(WaveSpawnItem *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::string::~string((string *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveSpawnItem::WaveSpawnItem() */

void __thiscall WaveSpawnItem::WaveSpawnItem(WaveSpawnItem *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0((string *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  this[4] = (WaveSpawnItem)0x0;
  *(undefined4 *)this = 6;
  *(undefined4 *)(this + 8) = 0;
  std::string::append((string *)(this + 0x10),"",6);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined4 *)(this + 0x34) = 0x3fc00000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveSpawnItem::WaveSpawnItem(WaveSpawnItem const&) */

void __thiscall WaveSpawnItem::WaveSpawnItem(WaveSpawnItem *this,WaveSpawnItem *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  WaveSpawnItem WVar8;
  
  uVar1 = *(undefined4 *)param_1;
  WVar8 = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  this[4] = WVar8;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x20) = uVar6;
  *(undefined4 *)(this + 0x24) = uVar7;
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar3;
  *(undefined4 *)(this + 0x34) = uVar5;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x38),(RtWeakPtrBase *)(param_1 + 0x38));
  return;
}


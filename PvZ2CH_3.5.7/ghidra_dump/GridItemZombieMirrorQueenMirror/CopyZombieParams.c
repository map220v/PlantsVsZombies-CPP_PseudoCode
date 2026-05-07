// Class: GridItemZombieMirrorQueenMirror::CopyZombieParams


/* GridItemZombieMirrorQueenMirror::CopyZombieParams::~CopyZombieParams() */

void __thiscall
GridItemZombieMirrorQueenMirror::CopyZombieParams::~CopyZombieParams(CopyZombieParams *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* GridItemZombieMirrorQueenMirror::CopyZombieParams::CopyZombieParams(GridItemZombieMirrorQueenMirror::CopyZombieParams
   const&) */

void __thiscall
GridItemZombieMirrorQueenMirror::CopyZombieParams::CopyZombieParams
          (CopyZombieParams *this,CopyZombieParams *param_1)

{
  undefined4 uVar1;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = uVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  return;
}


/* GridItemZombieMirrorQueenMirror::CopyZombieParams::CopyZombieParams() */

void __thiscall
GridItemZombieMirrorQueenMirror::CopyZombieParams::CopyZombieParams(CopyZombieParams *this)

{
  undefined4 uVar1;
  
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xc) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


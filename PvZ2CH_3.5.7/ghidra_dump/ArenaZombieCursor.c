// Class: ArenaZombieCursor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaZombieCursor::GetCurrentGridPosition() */

void __thiscall ArenaZombieCursor::GetCurrentGridPosition(ArenaZombieCursor *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Point *in_x8;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  iVar2 = BoardTransforms::BoardSpaceToGridXKeepOnBoard((float)local_10);
  iVar3 = BoardTransforms::BoardSpaceToGridYKeepOnBoard((float)local_c);
  Sexy::Point::Point(in_x8,iVar2,iVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaZombieCursor::getCursorAnimOffset() const */

void __thiscall ArenaZombieCursor::getCursorAnimOffset(ArenaZombieCursor *this)

{
  ZombieType *pZVar1;
  long lVar2;
  float fVar3;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = (ZombieType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  lVar2 = ZombieType::GetProps(pZVar1);
  fVar3 = *(float *)(lVar2 + 0xc4);
  pZVar1 = (ZombieType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  lVar2 = ZombieType::GetProps(pZVar1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar3,*(float *)(lVar2 + 200));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10 & 0xffffffff,(int)(local_10 >> 0x20));
}


/* ArenaZombieCursor::StaticGetClass() */

long * ArenaZombieCursor::StaticGetClass(void)

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
  uVar2 = PacketCursor::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaZombieCursor",uVar2,StaticNew);
  return sClass;
}


/* ArenaZombieCursor::GetClass() const */

long * ArenaZombieCursor::GetClass(void)

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
  uVar2 = PacketCursor::StaticGetClass();
  (*pcVar3)(plVar1,"ArenaZombieCursor",uVar2,StaticNew);
  return sClass;
}


/* ArenaZombieCursor::ArenaZombieCursor() */

void __thiscall ArenaZombieCursor::ArenaZombieCursor(ArenaZombieCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_06954b80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  this[0x50] = (ArenaZombieCursor)0x0;
  return;
}


/* ArenaZombieCursor::StaticNew() */

ArenaZombieCursor * ArenaZombieCursor::StaticNew(void)

{
  ArenaZombieCursor *this;
  
  this = ::operator_new(0x58);
  ArenaZombieCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaZombieCursor::ArenaZombieCursor(Sexy::Touch const&, Sexy::RtWeakPtr<ZombieType const>,
   Sexy::TRect<int>) */

void __thiscall
ArenaZombieCursor::ArenaZombieCursor
          (ArenaZombieCursor *this,undefined8 param_1,RtWeakPtr *param_3,TRect *param_4)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined ***)this = &PTR_GetClass_06954b80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  this[0x50] = (ArenaZombieCursor)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),param_3);
  BaseCursor::setCursorBoardOrigin((BaseCursor *)this,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaZombieCursor::~ArenaZombieCursor() */

void __thiscall ArenaZombieCursor::~ArenaZombieCursor(ArenaZombieCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_06954b80;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* ArenaZombieCursor::~ArenaZombieCursor() */

void __thiscall ArenaZombieCursor::~ArenaZombieCursor(ArenaZombieCursor *this)

{
  ~ArenaZombieCursor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaZombieCursor::ArenaZombieCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall
ArenaZombieCursor::ArenaZombieCursor
          (ArenaZombieCursor *this,undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  ZombieType *this_00;
  PopAnimRig *pPVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_01;
  code *pcVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)param_3);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  this_01 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_06954b80;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_01)
  ;
  this[0x50] = (ArenaZombieCursor)0x0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
  PowerupUI::GetPowerupDownImage();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)this_01);
  pPVar1 = (PopAnimRig *)CreateStandaloneZombieAnimRig(aRStack_58,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  pcVar2 = *(code **)(*(long *)pPVar1 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  Board::SetArenaZombieAnim(*(Board **)(gLawnApp + 0x9f0),pPVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArenaZombieCursor::IsInsideOriginRect() const */

undefined8 __thiscall ArenaZombieCursor::IsInsideOriginRect(ArenaZombieCursor *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_04b18e64(uVar3);
    if (((lVar2 != 0) && (lVar2 = FUN_04b19264(uVar3), lVar2 != 0)) &&
       (cVar1 = FUN_04b18e60(this[0x23]), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar3 = BaseCursor::IsInsideOriginRect();
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArenaZombieCursor::tryToUse() */

void __thiscall ArenaZombieCursor::tryToUse(ArenaZombieCursor *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  this[0x50] = (ArenaZombieCursor)0x1;
  lVar1 = ___stack_chk_guard;
  BaseCursor::GetBoardPosition();
  iVar2 = FUN_04b18e68(local_10);
  BaseCursor::GetBoardPosition();
  iVar3 = FUN_04b18e68(local_c);
  MessageRouter::Post<int,int,float,float>
            ((_func_void_int_int *)gMessageRouter,(float)iVar2,(float)iVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


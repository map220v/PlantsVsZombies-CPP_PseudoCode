// Class: PacketCursor


/* PacketCursor::PacketCursor() */

void __thiscall PacketCursor::PacketCursor(PacketCursor *this)

{
  BaseCursor::BaseCursor((BaseCursor *)this);
  *(undefined ***)this = &PTR_GetClass_067a1e90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* PacketCursor::~PacketCursor() */

void __thiscall PacketCursor::~PacketCursor(PacketCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_067a1e90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  BaseCursor::~BaseCursor((BaseCursor *)this);
  return;
}


/* PacketCursor::~PacketCursor() */

void __thiscall PacketCursor::~PacketCursor(PacketCursor *this)

{
  ~PacketCursor(this);
  AK::FreeHook(this);
  return;
}


/* PacketCursor::tryToUse() */

void PacketCursor::tryToUse(void)

{
  return;
}


/* PacketCursor::onTouchEvent(Sexy::Touch const&) */

char __thiscall PacketCursor::onTouchEvent(PacketCursor *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 4) {
    BaseCursor::Destroy((BaseCursor *)this);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  cVar2 = '\0';
  if (iVar1 == 3) {
    cVar2 = (**(code **)(*(long *)this + 0x48))(this);
    if (cVar2 == '\0') {
      if (*(code **)(*(long *)this + 0x88) != tryToUse) {
        (**(code **)(*(long *)this + 0x88))(this);
      }
      BaseCursor::Destroy((BaseCursor *)this);
      return '\x01';
    }
    BaseCursor::cacheOrDestroyCursor((BaseCursor *)this);
  }
  return cVar2;
}


/* PacketCursor::StaticGetClass() */

long * PacketCursor::StaticGetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"PacketCursor",uVar2,StaticNew);
  return sClass;
}


/* PacketCursor::GetClass() const */

long * PacketCursor::GetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"PacketCursor",uVar2,StaticNew);
  return sClass;
}


/* PacketCursor::GetCurrentGridPosition() */

Point * __thiscall PacketCursor::GetCurrentGridPosition(PacketCursor *this)

{
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,-1,-1);
  return in_x8;
}


/* PacketCursor::StaticNew() */

PacketCursor * PacketCursor::StaticNew(void)

{
  PacketCursor *this;
  
  this = ::operator_new(0x48);
  PacketCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PacketCursor::PacketCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall PacketCursor::PacketCursor(PacketCursor *this,Touch *param_1,RtWeakPtr *param_3)

{
  bool bVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_00;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::BaseCursor((BaseCursor *)this,param_1);
  this_00 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40);
  *(undefined ***)this = &PTR_GetClass_067a1e90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_00)
  ;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_3);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    UIWidget::GetDrawRect();
    Board::TranslateScreenRectToBoardRect(*(Board **)(gLawnApp + 0x9f0),(TRect *)&local_18);
    local_18 = local_18 - *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
    local_14 = local_14 - *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
    BaseCursor::setCursorBoardOrigin((BaseCursor *)this,(TRect *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


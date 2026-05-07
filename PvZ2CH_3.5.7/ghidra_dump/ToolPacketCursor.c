// Class: ToolPacketCursor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketCursor::GetCurrentGridPosition() */

void __thiscall ToolPacketCursor::GetCurrentGridPosition(ToolPacketCursor *this)

{
  int iVar1;
  int iVar2;
  Point *in_x8;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  iVar1 = BoardTransforms::PlantingBoardSpaceToGridX
                    ((float)local_10,
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  iVar2 = BoardTransforms::PlantingBoardSpaceToGridY
                    ((float)local_c,
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point(in_x8,iVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToolPacketCursor::getCursorAnimOffset() const */

undefined4 __thiscall ToolPacketCursor::getCursorAnimOffset(ToolPacketCursor *this)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x48) + 0x70))(*(long **)(this + 0x48));
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketCursor::CanUseAtCurrentPosition() */

void __thiscall ToolPacketCursor::CanUseAtCurrentPosition(ToolPacketCursor *this)

{
  undefined1 uVar1;
  int iVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_10);
  if ((((local_10 < 0) || (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar2 <= local_10)) ||
      (local_c < 0)) || (iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar2 <= local_c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(this + 0x48) + 0x50))(*(long **)(this + 0x48),&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ToolPacketCursor::StaticGetClass() */

long * ToolPacketCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketCursor",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketCursor::GetClass() const */

long * ToolPacketCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"ToolPacketCursor",uVar2,StaticNew);
  return sClass;
}


/* ToolPacketCursor::ToolPacketCursor() */

void __thiscall ToolPacketCursor::ToolPacketCursor(ToolPacketCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR_GetClass_067a1df0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  this[0x58] = (ToolPacketCursor)0x0;
  return;
}


/* ToolPacketCursor::StaticNew() */

ToolPacketCursor * ToolPacketCursor::StaticNew(void)

{
  ToolPacketCursor *this;
  
  this = ::operator_new(0x60);
  ToolPacketCursor(this);
  return this;
}


/* ToolPacketCursor::ToolPacketCursor(Sexy::Touch const&, std::string const&) */

void __thiscall
ToolPacketCursor::ToolPacketCursor(ToolPacketCursor *this,Touch *param_1,string *param_2)

{
  long *plVar1;
  PopAnimRig *pPVar2;
  long lVar3;
  
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_067a1df0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  this[0x58] = (ToolPacketCursor)0x0;
  BaseCursor::DelayConstruct((BaseCursor *)this,param_1);
  plVar1 = (long *)ToolPacketDataFactory::CreateData(param_2);
  lVar3 = *plVar1;
  *(long **)(this + 0x48) = plVar1;
  pPVar2 = (PopAnimRig *)(**(code **)(lVar3 + 0x68))();
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar2);
  return;
}


/* ToolPacketCursor::~ToolPacketCursor() */

void __thiscall ToolPacketCursor::~ToolPacketCursor(ToolPacketCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_067a1df0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* ToolPacketCursor::~ToolPacketCursor() */

void __thiscall ToolPacketCursor::~ToolPacketCursor(ToolPacketCursor *this)

{
  ~ToolPacketCursor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketCursor::ToolPacketCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall
ToolPacketCursor::ToolPacketCursor(ToolPacketCursor *this,undefined8 param_1,RtWeakPtrBase *param_3)

{
  PVPManager *this_00;
  string *psVar1;
  long *plVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  *(undefined ***)this = &PTR_GetClass_067a1df0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  this[0x58] = (ToolPacketCursor)0x0;
  this_00 = (PVPManager *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  psVar1 = (string *)PVPManager::GetPVPMapDataList(this_00);
  plVar2 = (long *)ToolPacketDataFactory::CreateData(psVar1);
  lVar4 = *plVar2;
  *(long **)(this + 0x48) = plVar2;
  pPVar3 = (PopAnimRig *)(**(code **)(lVar4 + 0x68))();
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToolPacketCursor::tryToUse() */

void __thiscall ToolPacketCursor::tryToUse(ToolPacketCursor *this)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  Board *pBVar8;
  long *plVar9;
  code *pcVar10;
  undefined8 uVar11;
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseCursor::GetBoardPosition();
  BaseCursor::GetBoardPosition();
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  iVar3 = BoardTransforms::PlantingBoardSpaceToGridX
                    ((float)local_10,
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  iVar4 = BoardTransforms::PlantingBoardSpaceToGridY
                    ((float)local_c,
                     (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Sexy::Point::Point(aPStack_20,iVar3,iVar4);
  if ((((-1 < iVar3) && (iVar5 = BoardConstants::NUMBER_OF_COLUMNS(), iVar3 < iVar5)) &&
      (-1 < iVar4)) && (iVar5 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar5)) {
    plVar9 = *(long **)(this + 0x48);
    pcVar10 = *(code **)(*plVar9 + 0x50);
    Sexy::Point::Point((Point *)&local_10,iVar3,iVar4);
    cVar2 = (*pcVar10)(plVar9,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                              &local_10);
    if (cVar2 == '\0') {
      uVar11 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_18,iVar3,iVar4);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
      uVar6 = Board::GetCanPlantAtReason
                        (uVar11,aPStack_18,
                         (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10
                         ,0,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
      Board::GiveAdvice(pBVar8,iVar3,iVar4,
                        (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10,
                        uVar6);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      goto LAB_03f6b554;
    }
    Board::ClearLowPriorityAdvice(*(Board **)(gLawnApp + 0x9f0));
    cVar2 = (**(code **)(**(long **)(this + 0x48) + 0x58))(*(long **)(this + 0x48),aPStack_20);
    if (cVar2 != '\0') {
      this[0x58] = (ToolPacketCursor)0x1;
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40));
      puVar1 = gMessageRouter;
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)(this + 0x40));
        MessageRouter::Broadcast<SeedPacket*,Sexy::RtWeakPtr<SeedPacket>>
                  ((MessageRouter *)puVar1,Message::SeedPacketPlanted,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      }
      goto LAB_03f6b554;
    }
    this[0x58] = (ToolPacketCursor)0x0;
  }
  pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar7,"Play_drop");
LAB_03f6b554:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


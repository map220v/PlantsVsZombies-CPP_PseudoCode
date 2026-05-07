// Class: PowerTilePropagationInfo


/* PowerTilePropagationInfo::IsDone() */

undefined1 __thiscall PowerTilePropagationInfo::IsDone(PowerTilePropagationInfo *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(float *)(this + 0x28) < 0.0) {
    uVar4 = *(undefined8 *)(this + 0x30);
    lVar1 = FUN_03d526e4(uVar4,*(undefined8 *)(this + 0x38));
    lVar3 = 0;
    do {
      if (lVar3 == lVar1) {
        return 1;
      }
      lVar2 = FUN_03d52714(uVar4,lVar3);
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar2 + 0x20) != '\0');
  }
  return 0;
}


/* PowerTilePropagationInfo::PowerTilePropagationInfo() */

void __thiscall PowerTilePropagationInfo::PowerTilePropagationInfo(PowerTilePropagationInfo *this)

{
  Sexy::Point::Point((Point *)this);
  Sexy::Point::Point((Point *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  this[0x2c] = (PowerTilePropagationInfo)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* PowerTilePropagationInfo::~PowerTilePropagationInfo() */

void __thiscall PowerTilePropagationInfo::~PowerTilePropagationInfo(PowerTilePropagationInfo *this)

{
  std::
  vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
  ::~vector((vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
             *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  return;
}


void __thiscall PowerTilePropagationInfo::~PowerTilePropagationInfo(PowerTilePropagationInfo *this)

{
  std::
  vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
  ::~vector((vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
             *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  return;
}


void __thiscall PowerTilePropagationInfo::~PowerTilePropagationInfo(PowerTilePropagationInfo *this)

{
  std::
  vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
  ::~vector((vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
             *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  return;
}


void __thiscall PowerTilePropagationInfo::~PowerTilePropagationInfo(PowerTilePropagationInfo *this)

{
  std::
  vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
  ::~vector((vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
             *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  return;
}


/* PowerTilePropagationInfo::DestroyTileGlows() */

void __thiscall PowerTilePropagationInfo::DestroyTileGlows(PowerTilePropagationInfo *this)

{
  PowerTilePropagation_ConnectingDotHandler *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x30);
    uVar1 = FUN_03d526e4(uVar3,*(undefined8 *)(this + 0x38));
    if (uVar1 <= uVar2) break;
    this_00 = (PowerTilePropagation_ConnectingDotHandler *)FUN_03d52714(uVar3,uVar2);
    PowerTilePropagation_ConnectingDotHandler::DestroyRig(this_00);
    uVar2 = uVar2 + 1;
  }
  std::
  vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
  ::clear((vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
           *)(this + 0x30));
  return;
}


/* PowerTilePropagationInfo::TEMPNAMEPLACEHOLDERVALUE(PowerTilePropagationInfo&&) */

PowerTilePropagationInfo * __thiscall
PowerTilePropagationInfo::operator=
          (PowerTilePropagationInfo *this,PowerTilePropagationInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)this = uVar5;
  *(undefined8 *)(this + 8) = uVar4;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),(RtWeakPtr *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  this[0x2c] = param_1[0x2c];
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  std::
  vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
  ::operator=((vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
               *)(this + 0x30),(vector *)(param_1 + 0x30));
  return this;
}


/* PowerTilePropagationInfo::PowerTilePropagationInfo(PowerTilePropagationInfo const&) */

void __thiscall
PowerTilePropagationInfo::PowerTilePropagationInfo
          (PowerTilePropagationInfo *this,PowerTilePropagationInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  Sexy::Point::Point((Point *)this,(TPoint *)param_1);
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x18),(RtWeakPtrBase *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  this[0x2c] = param_1[0x2c];
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar3;
  std::
  vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
  ::vector((vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
            *)(this + 0x30),(vector *)(param_1 + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerTilePropagationInfo::BuildTileGlows(Sexy::Color const&) */

void __thiscall
PowerTilePropagationInfo::BuildTileGlows(PowerTilePropagationInfo *this,Color *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PowerTileSubsystem *this_00;
  BoardTransforms *this_01;
  ulong uVar6;
  ulong uVar7;
  PowerTilePropagation_ConnectingDotHandler *this_02;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  int local_70;
  int local_6c;
  undefined8 local_68;
  FastCurve aFStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DestroyTileGlows(this);
  this_00 = Board::GetGameSubSystem<PowerTileSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Point::Point((Point *)&local_70,(TPoint *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  while (cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)&local_70,(TPoint *)(this + 8)),
        cVar1 != '\0') {
    if (local_70 < *(int *)(this + 8)) {
      local_70 = local_70 + 1;
    }
    else if (*(int *)(this + 8) < local_70) {
      local_70 = local_70 + -1;
    }
    else if (local_6c < *(int *)(this + 0xc)) {
      local_6c = local_6c + 1;
    }
    else {
      local_6c = local_6c + -1;
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,(Point *)&local_70);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  if (((DAT_06ad78f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06ad78f8), iVar5 != 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar5 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad78d0,(float)(iVar2 / 2),(float)(iVar5 >> 3));
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar5 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&DAT_06ad78d8,(float)(iVar2 - (iVar5 >> 3)),(float)(iVar4 / 2));
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar5 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&DAT_06ad78e0,(float)(iVar2 / 2),(float)(iVar3 - (iVar5 >> 3)));
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar5 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad78e8,(float)(iVar5 >> 3),(float)(iVar3 / 2));
    __cxa_guard_release(&DAT_06ad78f8);
  }
  if (((DAT_06ad78f0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06ad78f0), iVar5 != 0)) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad7980,32.0,10.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad7988,32.0,26.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad7990,56.0,38.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad7998,43.0,38.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad79a0,32.0,66.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad79a8,32.0,50.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad79b0,8.0,38.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad79b8,22.0,38.0);
    __cxa_guard_release(&DAT_06ad78f0);
  }
  Sexy::Point::Point((Point *)&local_68,(TPoint *)this);
  uVar7 = 0;
  while( true ) {
    uVar11 = local_38;
    uVar6 = FUN_03d52728(local_38,local_30);
    if (uVar6 <= uVar7) break;
    this_01 = (BoardTransforms *)FUN_03d52734(uVar11,uVar7);
    auVar15 = FUN_03d52530((Point *)&local_68,this_01);
    uVar6 = auVar15._0_8_ & 0xffffffff;
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)&local_68,auVar15._8_8_);
    Sexy::FastCurve::SetOutRange(aFStack_60,(float)(int)local_58,(float)local_58._4_4_);
    lVar9 = PowerTileSubsystem::FindPowerTileAt(this_00,(Point *)&local_68);
    FUN_03d576a0((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar6,
                 aFStack_60,lVar9 != 0);
    auVar15 = FUN_03d525a4(uVar6);
    BoardTransforms::GridToBoardSpaceRect(this_01,auVar15._8_8_);
    local_58 = local_48;
    local_50 = local_40;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_48,(float)(int)local_48,(float)(int)((ulong)local_48 >> 0x20));
    lVar9 = PowerTileSubsystem::FindPowerTileAt(this_00,(Point *)&local_68);
    FUN_03d5776c((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,
                 auVar15._0_8_ & 0xffffffff,(FastCurve *)&local_48,lVar9 != 0);
    local_68 = *(undefined8 *)this_01;
    uVar7 = uVar7 + 1;
  }
  uVar7 = FUN_03d5273c(local_20,local_18);
  std::
  vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
  ::resize((vector<PowerTilePropagation_ConnectingDotHandler,std::allocator<PowerTilePropagation_ConnectingDotHandler>>
            *)(this + 0x30),uVar7);
  uVar7 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)(this + 0x30);
    uVar6 = FUN_03d526e4(uVar11,*(undefined8 *)(this + 0x38));
    if (uVar6 <= uVar7) break;
    this_02 = (PowerTilePropagation_ConnectingDotHandler *)FUN_03d52714(uVar11,uVar7);
    PowerTilePropagation_ConnectingDotHandler::CreateRig(this_02);
    puVar8 = (undefined8 *)FUN_03d52748(local_20,uVar7);
    uVar10 = *puVar8;
    uVar11 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this_02 + 0x10) = *(undefined8 *)param_1;
    *(undefined8 *)(this_02 + 0x18) = uVar11;
    *(undefined8 *)(this_02 + 8) = uVar10;
    uVar7 = uVar7 + 1;
  }
  fVar13 = *(float *)(this + 0x20);
  fVar14 = (*(float *)(this + 0x24) - fVar13) / (float)(uVar6 - 1);
  uVar7 = 0;
  while (uVar7 < uVar6) {
    lVar9 = FUN_03d52714(uVar11);
    fVar12 = (float)PVZ_T();
    uVar11 = *(undefined8 *)(this + 0x30);
    fVar12 = fVar12 + fVar13;
    uVar10 = *(undefined8 *)(this + 0x38);
    fVar13 = fVar13 + fVar14;
    *(float *)(lVar9 + 0x24) = fVar12;
    uVar6 = FUN_03d526e4(uVar11,uVar10);
    uVar7 = uVar7 + 1;
  }
  uVar7 = 0;
  while (uVar7 < uVar6) {
    lVar9 = FUN_03d52714(uVar11);
    fVar12 = (float)PVZ_T();
    uVar11 = *(undefined8 *)(this + 0x30);
    fVar12 = fVar12 + fVar13;
    uVar10 = *(undefined8 *)(this + 0x38);
    fVar13 = fVar13 + fVar14 * 0.33333334;
    *(float *)(lVar9 + 0x28) = fVar12;
    uVar6 = FUN_03d526e4(uVar11,uVar10);
    uVar7 = uVar7 + 1;
  }
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)&local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


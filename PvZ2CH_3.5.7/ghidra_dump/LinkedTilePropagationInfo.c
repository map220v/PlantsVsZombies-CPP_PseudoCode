// Class: LinkedTilePropagationInfo


/* LinkedTilePropagationInfo::IsDone() */

undefined1 __thiscall LinkedTilePropagationInfo::IsDone(LinkedTilePropagationInfo *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(float *)(this + 0x18) < 0.0) {
    uVar4 = *(undefined8 *)(this + 0x20);
    lVar1 = FUN_03cea484(uVar4,*(undefined8 *)(this + 0x28));
    lVar3 = 0;
    do {
      if (lVar3 == lVar1) {
        return 1;
      }
      plVar2 = (long *)FUN_03cea490(uVar4,lVar3);
      lVar3 = lVar3 + 1;
    } while (*(char *)(*plVar2 + 0x20) != '\0');
  }
  return 0;
}


/* LinkedTilePropagationInfo::DestroyTileGlows() */

void __thiscall LinkedTilePropagationInfo::DestroyTileGlows(LinkedTilePropagationInfo *this)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  RtWeakPtr *pRVar6;
  
  uVar5 = *(undefined8 *)(this + 0x20);
  uVar4 = 0;
  lVar1 = FUN_03cea484(uVar5,*(undefined8 *)(this + 0x28));
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_03cea490(uVar5,uVar4);
      PowerTilePropagation_ConnectingDotHandler::DestroyRig
                ((PowerTilePropagation_ConnectingDotHandler *)*puVar2);
      uVar5 = *(undefined8 *)(this + 0x20);
      puVar2 = (undefined8 *)FUN_03cea490(uVar5,uVar4);
      pRVar6 = (RtWeakPtr *)*puVar2;
      if (pRVar6 != (RtWeakPtr *)0x0) {
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(pRVar6);
        AK::FreeHook(pRVar6);
        puVar2 = (undefined8 *)FUN_03cea490(*(undefined8 *)(this + 0x20),uVar4);
        *puVar2 = 0;
        uVar5 = *(undefined8 *)(this + 0x20);
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_03cea484(uVar5,*(undefined8 *)(this + 0x28));
    } while (uVar4 < uVar3);
  }
  std::
  vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
  ::clear((vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
           *)(this + 0x20));
  return;
}


/* LinkedTilePropagationInfo::LinkedTilePropagationInfo() */

void __thiscall
LinkedTilePropagationInfo::LinkedTilePropagationInfo(LinkedTilePropagationInfo *this)

{
  Sexy::Point::Point((Point *)this);
  Sexy::Point::Point((Point *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  TimeLine::TimeLine((TimeLine *)(this + 0x38));
  this[0x1c] = (LinkedTilePropagationInfo)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* LinkedTilePropagationInfo::~LinkedTilePropagationInfo() */

void __thiscall
LinkedTilePropagationInfo::~LinkedTilePropagationInfo(LinkedTilePropagationInfo *this)

{
  TimeLine::~TimeLine((TimeLine *)(this + 0x38));
  std::
  vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
  ::~vector((vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
             *)(this + 0x20));
  return;
}


void __thiscall
LinkedTilePropagationInfo::~LinkedTilePropagationInfo(LinkedTilePropagationInfo *this)

{
  TimeLine::~TimeLine((TimeLine *)(this + 0x38));
  std::
  vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
  ::~vector((vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
             *)(this + 0x20));
  return;
}


void __thiscall
LinkedTilePropagationInfo::~LinkedTilePropagationInfo(LinkedTilePropagationInfo *this)

{
  TimeLine::~TimeLine((TimeLine *)(this + 0x38));
  std::
  vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
  ::~vector((vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
             *)(this + 0x20));
  return;
}


void __thiscall
LinkedTilePropagationInfo::~LinkedTilePropagationInfo(LinkedTilePropagationInfo *this)

{
  TimeLine::~TimeLine((TimeLine *)(this + 0x38));
  std::
  vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
  ::~vector((vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
             *)(this + 0x20));
  return;
}


/* LinkedTilePropagationInfo::TEMPNAMEPLACEHOLDERVALUE(LinkedTilePropagationInfo&&) */

LinkedTilePropagationInfo * __thiscall
LinkedTilePropagationInfo::operator=
          (LinkedTilePropagationInfo *this,LinkedTilePropagationInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  this[0x1c] = param_1[0x1c];
  *(undefined8 *)this = uVar5;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  std::
  vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
  ::operator=((vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
               *)(this + 0x20),(vector *)(param_1 + 0x20));
  TimeLine::operator=((TimeLine *)(this + 0x38),(TimeLine *)(param_1 + 0x38));
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LinkedTilePropagationInfo::BuildTileGlows(FutureStage*, Sexy::Color const&) */

void __thiscall
LinkedTilePropagationInfo::BuildTileGlows
          (LinkedTilePropagationInfo *this,FutureStage *param_1,Color *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BoardTransforms *this_00;
  ulong uVar6;
  ulong uVar7;
  LinkedTilePropagation_ConnectingDotHandler *this_01;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  PowerTilePropagation_ConnectingDotHandler *this_02;
  undefined8 uVar11;
  float fVar12;
  TimeLine *pTVar14;
  undefined1 auVar13 [16];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  FastCurve aFStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DestroyTileGlows(this);
  Sexy::Point::Point((Point *)&local_a8,(TPoint *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  while (cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)&local_a8,(TPoint *)(this + 8)),
        cVar1 != '\0') {
    if (local_a8 < *(int *)(this + 8)) {
      local_a8 = local_a8 + 1;
    }
    else if (*(int *)(this + 8) < local_a8) {
      local_a8 = local_a8 + -1;
    }
    else if (local_a4 < *(int *)(this + 0xc)) {
      local_a4 = local_a4 + 1;
    }
    else {
      local_a4 = local_a4 + -1;
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_80,(Point *)&local_a8);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  if (((DAT_06ad5068 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad5068), iVar2 != 0)) {
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar2 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad5010,(float)(iVar3 / 2),(float)(iVar2 >> 3));
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar2 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&DAT_06ad5018,(float)(iVar3 - (iVar2 >> 3)),(float)(iVar5 / 2));
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar2 = iVar5 + 7;
    if (-1 < iVar5) {
      iVar2 = iVar5;
    }
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&DAT_06ad5020,(float)(iVar3 / 2),(float)(iVar4 - (iVar2 >> 3)));
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar2 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad5028,(float)(iVar2 >> 3),(float)(iVar4 / 2));
    __cxa_guard_release(&DAT_06ad5068);
  }
  if (((DAT_06ad4f78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad4f78), iVar2 != 0)) {
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4fa0,32.0,10.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4fa8,32.0,26.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4fb0,56.0,38.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4fb8,43.0,38.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4fc0,32.0,66.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4fc8,32.0,50.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4fd0,8.0,38.0);
    Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06ad4fd8,22.0,38.0);
    __cxa_guard_release(&DAT_06ad4f78);
  }
  Sexy::Point::Point((Point *)&local_a0,(TPoint *)this);
  uVar7 = 0;
  while( true ) {
    uVar11 = local_80;
    uVar6 = FUN_03cea4d8(local_80,local_78);
    if (uVar6 <= uVar7) break;
    this_00 = (BoardTransforms *)FUN_03cea4e4(uVar11,uVar7);
    auVar13 = FUN_03cea254((Point *)&local_a0,this_00);
    uVar6 = auVar13._0_8_ & 0xffffffff;
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)&local_a0,auVar13._8_8_);
    Sexy::FastCurve::SetOutRange(aFStack_98,(float)(int)local_90,(float)local_90._4_4_);
    iVar2 = FutureStage::GetLinkedTileClassAt(param_1,(Point *)&local_a0);
    FUN_03cf2690((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,uVar6,
                 aFStack_98,iVar2 != -1);
    auVar13 = FUN_03cea29c(uVar6);
    BoardTransforms::GridToBoardSpaceRect(this_00,auVar13._8_8_);
    local_90 = local_50;
    local_88 = local_48;
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_50,(float)(int)local_50,(float)(int)((ulong)local_50 >> 0x20));
    iVar2 = FutureStage::GetLinkedTileClassAt(param_1,(Point *)this_00);
    FUN_03cf275c((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68,
                 auVar13._0_8_ & 0xffffffff,(FastCurve *)&local_50,iVar2 != -1);
    local_a0 = *(undefined8 *)this_00;
    uVar7 = uVar7 + 1;
  }
  uVar7 = FUN_03cea4ec(local_68,local_60);
  std::
  vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
  ::resize((vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
            *)(this + 0x20),uVar7);
  uVar7 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)(this + 0x20);
    uVar6 = FUN_03cea484(uVar11,*(undefined8 *)(this + 0x28));
    if (uVar6 <= uVar7) break;
    this_01 = ::operator_new(0x28);
    LinkedTilePropagation_ConnectingDotHandler::LinkedTilePropagation_ConnectingDotHandler(this_01);
    puVar8 = (undefined8 *)FUN_03cea490(*(undefined8 *)(this + 0x20),uVar7);
    *puVar8 = this_01;
    puVar8 = (undefined8 *)FUN_03cea490(*(undefined8 *)(this + 0x20),uVar7);
    this_02 = (PowerTilePropagation_ConnectingDotHandler *)*puVar8;
    PowerTilePropagation_ConnectingDotHandler::CreateRig(this_02);
    puVar8 = (undefined8 *)FUN_03cea4f8(local_68,uVar7);
    uVar10 = *puVar8;
    uVar11 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(this_02 + 0x10) = *(undefined8 *)param_2;
    *(undefined8 *)(this_02 + 0x18) = uVar11;
    *(undefined8 *)(this_02 + 8) = uVar10;
    uVar7 = uVar7 + 1;
  }
  uVar9 = uVar6 - 1;
  fVar12 = *(float *)(this + 0x14);
  uVar7 = 0;
  pTVar14._0_4_ = (TimeLine *)0x0;
  while (uVar7 < uVar6) {
    puVar8 = (undefined8 *)FUN_03cea490(uVar11);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)*puVar8,LinkedTilePropagation_ConnectingDotHandler::FadeIn);
    Sexy::Delegate1<float>::
    Delegate1<LinkedTilePropagation_ConnectingDotHandler,void(LinkedTilePropagation_ConnectingDotHandler::*)(float)>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    TimeLine::AddEvent(pTVar14._0_4_,this + 0x38,aDStack_38);
    uVar11 = *(undefined8 *)(this + 0x20);
    uVar6 = FUN_03cea484(uVar11,*(undefined8 *)(this + 0x28));
    uVar7 = uVar7 + 1;
    pTVar14._0_4_ = (TimeLine *)((float)pTVar14._0_4_ + fVar12 / (float)uVar9);
  }
  uVar7 = 0;
  while (uVar7 < uVar6) {
    puVar8 = (undefined8 *)FUN_03cea490(uVar11);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)*puVar8,LinkedTilePropagation_ConnectingDotHandler::FadeOut);
    Sexy::Delegate1<float>::
    Delegate1<LinkedTilePropagation_ConnectingDotHandler,void(LinkedTilePropagation_ConnectingDotHandler::*)(float)>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    TimeLine::AddEvent(pTVar14._0_4_,this + 0x38,aDStack_38);
    uVar11 = *(undefined8 *)(this + 0x20);
    uVar6 = FUN_03cea484(uVar11,*(undefined8 *)(this + 0x28));
    uVar7 = uVar7 + 1;
  }
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)&local_68);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LinkedTilePropagationInfo::LinkedTilePropagationInfo(LinkedTilePropagationInfo const&) */

void __thiscall
LinkedTilePropagationInfo::LinkedTilePropagationInfo
          (LinkedTilePropagationInfo *this,LinkedTilePropagationInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LinkedTilePropagationInfo LVar3;
  
  Sexy::Point::Point((Point *)this,(TPoint *)param_1);
  Sexy::Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  LVar3 = param_1[0x1c];
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  this[0x1c] = LVar3;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  std::
  vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
  ::vector((vector<LinkedTilePropagation_ConnectingDotHandler*,std::allocator<LinkedTilePropagation_ConnectingDotHandler*>>
            *)(this + 0x20),(vector *)(param_1 + 0x20));
  TimeLine::TimeLine((TimeLine *)(this + 0x38),(TimeLine *)(param_1 + 0x38));
  return;
}


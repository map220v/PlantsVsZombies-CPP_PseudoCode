// Class: BoardTransforms


int BoardTransforms::BoardSpaceToGridYUnbounded(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  return (int)((param_1 - 160.0) / (float)iVar1);
}


int BoardTransforms::BoardSpaceToGridXUnbounded(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return (int)((param_1 - 200.0) / (float)iVar1);
}


int BoardTransforms::BoardSpaceToGridYUnbounded(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  return (int)((param_1 - 160.0) / (float)iVar1);
}


int BoardTransforms::BoardSpaceToGridXUnbounded(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return (int)((param_1 - 200.0) / (float)iVar1);
}


/* BoardTransforms::GridToBoardSpaceXUnbounded(int) */

int BoardTransforms::GridToBoardSpaceXUnbounded(int param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return param_1 * iVar1 + 200 + iVar1 / 2;
}


/* BoardTransforms::GridToBoardSpaceX(int) */

int BoardTransforms::GridToBoardSpaceX(int param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return param_1 * iVar1 + 200 + iVar1 / 2;
}


/* BoardTransforms::GridToBoardSpaceXUnbounded_Float(float) */

float BoardTransforms::GridToBoardSpaceXUnbounded_Float(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return (float)(iVar1 / 2) + param_1 * (float)iVar1 + 200.0;
}


/* BoardTransforms::GridToBoardSpaceYUnbounded(int) */

int BoardTransforms::GridToBoardSpaceYUnbounded(int param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  return param_1 * iVar1 + iVar1 / 2 + 0xb8;
}


/* BoardTransforms::GridToBoardSpaceY(int) */

int BoardTransforms::GridToBoardSpaceY(int param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  return param_1 * iVar1 + iVar1 / 2 + 0xb8;
}


/* BoardTransforms::BoardSpaceToGridXUnboundedFloat(float) */

float BoardTransforms::BoardSpaceToGridXUnboundedFloat(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return (param_1 - 200.0) / (float)iVar1;
}


/* BoardTransforms::BoardSpaceToGridYUnboundedFloat(float) */

float BoardTransforms::BoardSpaceToGridYUnboundedFloat(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  return (param_1 - 160.0) / (float)iVar1;
}


/* BoardTransforms::BoardSpaceToGridXUnbounded(int) */

int BoardTransforms::BoardSpaceToGridXUnbounded(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = (param_1 + -200) / iVar2;
  }
  return iVar1;
}


/* BoardTransforms::BoardSpaceToGridX(int) */

int BoardTransforms::BoardSpaceToGridX(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardSpaceToGridXUnbounded(param_1);
  if ((-1 < iVar1) && (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 < iVar2)) {
    return iVar1;
  }
  return -1;
}


/* BoardTransforms::PlantingBoardSpaceToGridX(int, Sexy::RtWeakPtr<PlantType const>) */

int BoardTransforms::PlantingBoardSpaceToGridX(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardSpaceToGridXUnbounded(param_1);
  if ((-1 < iVar1) && (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 < iVar2)) {
    return iVar1;
  }
  return -1;
}


/* BoardTransforms::BoardSpaceToGridXUnbounded(float) */

int BoardTransforms::BoardSpaceToGridXUnbounded(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return (int)((param_1 - 200.0) / (float)iVar1);
}


/* BoardTransforms::BoardSpaceToGridX(float) */

int BoardTransforms::BoardSpaceToGridX(float param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardSpaceToGridXUnbounded(param_1);
  if ((-1 < iVar1) && (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 < iVar2)) {
    return iVar1;
  }
  return -1;
}


/* BoardTransforms::PlantingBoardSpaceToGridX(float, Sexy::RtWeakPtr<PlantType const>) */

int BoardTransforms::PlantingBoardSpaceToGridX(float param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardSpaceToGridXUnbounded(param_1);
  if ((-1 < iVar1) && (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 < iVar2)) {
    return iVar1;
  }
  return -1;
}


/* BoardTransforms::BoardSpaceToGridYUnbounded(int) */

int BoardTransforms::BoardSpaceToGridYUnbounded(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = (param_1 + -0xa0) / iVar2;
  }
  return iVar1;
}


/* BoardTransforms::BoardSpaceToGridY(int) */

int BoardTransforms::BoardSpaceToGridY(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardSpaceToGridYUnbounded(param_1);
  if ((-1 < iVar1) && (iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar1 < iVar2)) {
    return iVar1;
  }
  return -1;
}


/* BoardTransforms::BoardSpaceToGridYUnbounded(float) */

int BoardTransforms::BoardSpaceToGridYUnbounded(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  return (int)((param_1 - 160.0) / (float)iVar1);
}


/* BoardTransforms::BoardSpaceToGridY(float) */

int BoardTransforms::BoardSpaceToGridY(float param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardSpaceToGridYUnbounded(param_1);
  if ((-1 < iVar1) && (iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar1 < iVar2)) {
    return iVar1;
  }
  return -1;
}


/* BoardTransforms::ClampGridCoords(int&, int&) */

void BoardTransforms::ClampGridCoords(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = ClampInt(iVar2,0,iVar1 + -1);
  *param_1 = iVar2;
  iVar2 = *param_2;
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  iVar2 = ClampInt(iVar2,0,iVar1 + -1);
  *param_2 = iVar2;
  return;
}


/* BoardTransforms::IsGridCoordinateOnBoard(int, int) */

bool BoardTransforms::IsGridCoordinateOnBoard(int param_1,int param_2)

{
  int iVar1;
  
  if (((-1 < param_1) && (-1 < param_2)) &&
     (iVar1 = BoardConstants::NUMBER_OF_COLUMNS(), param_1 < iVar1)) {
    iVar1 = BoardConstants::NUMBER_OF_ROWS();
    return param_2 < iVar1;
  }
  return false;
}


/* BoardTransforms::GridToBoardSpaceUnbounded(Sexy::Point const&) */

void __thiscall BoardTransforms::GridToBoardSpaceUnbounded(BoardTransforms *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  Point *in_x8;
  
  iVar1 = GridToBoardSpaceXUnbounded(*(int *)this);
  iVar2 = GridToBoardSpaceYUnbounded(*(int *)(this + 4));
  Sexy::Point::Point(in_x8,iVar1,iVar2);
  return;
}


/* BoardTransforms::GridToBoardSpace(Sexy::Point const&) */

void BoardTransforms::GridToBoardSpace(Point *param_1)

{
  Point *in_x1;
  
  GridToBoardSpaceUnbounded((BoardTransforms *)param_1,in_x1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTransforms::GridToBoardSpacePos(int, int) */

void __thiscall BoardTransforms::GridToBoardSpacePos(BoardTransforms *this,int param_1,int param_2)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,(int)this,param_1);
  GridToBoardSpace(aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardTransforms::BoardSpaceToGrid(int, int) */

void __thiscall BoardTransforms::BoardSpaceToGrid(BoardTransforms *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  Point *in_x8;
  
  iVar1 = BoardSpaceToGridX((int)this);
  iVar2 = BoardSpaceToGridY(param_1);
  if ((iVar2 != -1) && (iVar1 != -1)) {
    Sexy::Point::Point(in_x8,iVar1,iVar2);
    return;
  }
  Sexy::Point::Point(in_x8,-1,-1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTransforms::BoardSpaceToGrid(int, int, int&, int&) */

void BoardTransforms::BoardSpaceToGrid(int param_1,int param_2,int *param_3,int *param_4)

{
  long lVar1;
  long lVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardSpaceToGrid((BoardTransforms *)(ulong)(uint)param_1,param_2,(int)param_3);
  lVar2 = ___stack_chk_guard;
  *param_3 = local_10;
  *param_4 = local_c;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardTransforms::BoardSpaceToGrid(float, float) */

void __thiscall BoardTransforms::BoardSpaceToGrid(BoardTransforms *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  Point *in_x8;
  
  iVar1 = BoardSpaceToGridX(param_1);
  iVar2 = BoardSpaceToGridY(param_2);
  if ((iVar2 != -1) && (iVar1 != -1)) {
    Sexy::Point::Point(in_x8,iVar1,iVar2);
    return;
  }
  Sexy::Point::Point(in_x8,-1,-1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTransforms::BoardSpaceToGrid(float, float, int&, int&) */

void BoardTransforms::BoardSpaceToGrid(float param_1,float param_2,int *param_3,int *param_4)

{
  long lVar1;
  long lVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  BoardSpaceToGrid((BoardTransforms *)param_3,param_1,param_2);
  lVar2 = ___stack_chk_guard;
  *param_3 = local_10;
  *param_4 = local_c;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardTransforms::BoardSpaceToGridUnbounded(Sexy::SexyVector3 const&) */

void __thiscall
BoardTransforms::BoardSpaceToGridUnbounded(BoardTransforms *this,SexyVector3 *param_1)

{
  int iVar1;
  int iVar2;
  Point *in_x8;
  
  iVar1 = BoardSpaceToGridXUnbounded(*(float *)this);
  iVar2 = BoardSpaceToGridYUnbounded(*(float *)(this + 4));
  Sexy::Point::Point(in_x8,iVar1,iVar2);
  return;
}


/* BoardTransforms::GridToBoardSpaceRect(int, int, int, int) */

void __thiscall
BoardTransforms::GridToBoardSpaceRect
          (BoardTransforms *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(in_x8 + 8) = iVar1 * param_2;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(int *)(in_x8 + 0xc) = iVar1 * param_3;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)in_x8 = iVar1 * (int)this + 200;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(int *)(in_x8 + 4) = iVar1 * param_1 + 0xa0;
  return;
}


/* BoardTransforms::GridToBoardSpaceRect(Sexy::Point const&) */

void __thiscall BoardTransforms::GridToBoardSpaceRect(BoardTransforms *this,Point *param_1)

{
  int in_w4;
  
  GridToBoardSpaceRect((BoardTransforms *)(ulong)*(uint *)this,*(int *)(this + 4),1,1,in_w4);
  return;
}


/* BoardTransforms::GridToBoardSpaceRect(Sexy::Point const&, Sexy::Point const&) */

void BoardTransforms::GridToBoardSpaceRect(Point *param_1,Point *param_2)

{
  int in_w4;
  
  GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)*(uint *)param_1,*(int *)(param_1 + 4),*(int *)param_2,
             *(int *)(param_2 + 4),in_w4);
  return;
}


/* BoardTransforms::GridRectToBoardSpaceRect(Sexy::TRect<int> const&) */

void __thiscall BoardTransforms::GridRectToBoardSpaceRect(BoardTransforms *this,TRect *param_1)

{
  int in_w4;
  
  GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)*(uint *)this,*(int *)(this + 4),*(int *)(this + 8),
             *(int *)(this + 0xc),in_w4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTransforms::BoardSpaceToGridXKeepOnBoard(int) */

void BoardTransforms::BoardSpaceToGridXKeepOnBoard(int param_1)

{
  int *piVar1;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = BoardSpaceToGridXUnbounded(param_1);
  local_14[1] = 0;
  piVar1 = eastl::max_alt<int>(local_14 + 1,local_14);
  local_14[2] = BoardConstants::NUMBER_OF_COLUMNS();
  local_14[2] = local_14[2] + -1;
  piVar1 = eastl::min_alt<int>(piVar1,local_14 + 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTransforms::BoardSpaceToGridXKeepOnBoard(float) */

void BoardTransforms::BoardSpaceToGridXKeepOnBoard(float param_1)

{
  int *piVar1;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = BoardSpaceToGridXUnbounded(param_1);
  local_14[1] = 0;
  piVar1 = eastl::max_alt<int>(local_14 + 1,local_14);
  local_14[2] = BoardConstants::NUMBER_OF_COLUMNS();
  local_14[2] = local_14[2] + -1;
  piVar1 = eastl::min_alt<int>(piVar1,local_14 + 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTransforms::BoardSpaceToGridYKeepOnBoard(int) */

void BoardTransforms::BoardSpaceToGridYKeepOnBoard(int param_1)

{
  int *piVar1;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = BoardSpaceToGridYUnbounded(param_1);
  local_14[1] = 0;
  piVar1 = eastl::max_alt<int>(local_14 + 1,local_14);
  local_14[2] = BoardConstants::NUMBER_OF_ROWS();
  local_14[2] = local_14[2] + -1;
  piVar1 = eastl::min_alt<int>(piVar1,local_14 + 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTransforms::BoardSpaceToGridYKeepOnBoard(float) */

void BoardTransforms::BoardSpaceToGridYKeepOnBoard(float param_1)

{
  int *piVar1;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = BoardSpaceToGridYUnbounded(param_1);
  local_14[1] = 0;
  piVar1 = eastl::max_alt<int>(local_14 + 1,local_14);
  local_14[2] = BoardConstants::NUMBER_OF_ROWS();
  local_14[2] = local_14[2] + -1;
  piVar1 = eastl::min_alt<int>(piVar1,local_14 + 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar1);
}


/* BoardTransforms::OffsetYForPlanting(int&, Sexy::RtWeakPtr<PlantType const>) */

void BoardTransforms::OffsetYForPlanting(int *param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x28));
    *param_1 = (int)((float)*param_1 + *(float *)(lVar2 + 0x90));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTransforms::PlantingBoardSpaceToGridY(int, Sexy::RtWeakPtr<PlantType const>) */

void BoardTransforms::PlantingBoardSpaceToGridY(int param_1,RtWeakPtrBase *param_2)

{
  int local_14;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14 = param_1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  OffsetYForPlanting(&local_14,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  BoardSpaceToGridY(local_14);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardTransforms::PlantingBoardSpaceToGridY(float, Sexy::RtWeakPtr<PlantType const>) */

void BoardTransforms::PlantingBoardSpaceToGridY(float param_1,RtWeakPtrBase *param_2)

{
  int local_14;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_14 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  OffsetYForPlanting(&local_14,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  BoardSpaceToGridY(param_1 + (float)local_14);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


int BoardTransforms::BoardSpaceToGridYUnbounded(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  return (int)((param_1 - 160.0) / (float)iVar1);
}


int BoardTransforms::BoardSpaceToGridXUnbounded(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return (int)((param_1 - 200.0) / (float)iVar1);
}


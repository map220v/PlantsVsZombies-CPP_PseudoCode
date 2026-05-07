// Class: BesiegeMazeMap


/* BesiegeMazeMap::calcGridHeight(int, int) */

undefined4 __thiscall BesiegeMazeMap::calcGridHeight(BesiegeMazeMap *this,int param_1,int param_2)

{
  return *(undefined4 *)(this + ((long)param_1 * 7 + (long)param_2) * 4 + 0xc);
}


/* BesiegeMazeMap::ResetMazeMap() */

void __thiscall BesiegeMazeMap::ResetMazeMap(BesiegeMazeMap *this)

{
  *(undefined4 *)(this + 0x2c) = 1000;
  *(undefined4 *)(this + 0x30) = 1000;
  *(undefined4 *)(this + 0x34) = 1000;
  *(undefined4 *)(this + 0x38) = 1000;
  *(undefined4 *)(this + 0x3c) = 1000;
  *(undefined4 *)(this + 0x48) = 1000;
  *(undefined4 *)(this + 0x4c) = 1000;
  *(undefined4 *)(this + 0x50) = 1000;
  *(undefined4 *)(this + 0x54) = 1000;
  *(undefined4 *)(this + 0x58) = 1000;
  *(undefined4 *)(this + 100) = 1000;
  *(undefined4 *)(this + 0x68) = 1000;
  *(undefined4 *)(this + 0x6c) = 1000;
  *(undefined4 *)(this + 0x70) = 1000;
  *(undefined4 *)(this + 0x74) = 1000;
  *(undefined4 *)(this + 0x80) = 1000;
  *(undefined4 *)(this + 0x84) = 1000;
  *(undefined4 *)(this + 0x88) = 1000;
  *(undefined4 *)(this + 0x8c) = 1000;
  *(undefined4 *)(this + 0x90) = 1000;
  *(undefined4 *)(this + 0x9c) = 1000;
  *(undefined4 *)(this + 0xa0) = 1000;
  *(undefined4 *)(this + 0xa4) = 1000;
  *(undefined4 *)(this + 0xa8) = 1000;
  *(undefined4 *)(this + 0xac) = 1000;
  *(undefined4 *)(this + 0xb8) = 1000;
  *(undefined4 *)(this + 0xbc) = 1000;
  *(undefined4 *)(this + 0xc0) = 1000;
  *(undefined4 *)(this + 0xc4) = 1000;
  *(undefined4 *)(this + 200) = 1000;
  *(undefined4 *)(this + 0xd4) = 1000;
  *(undefined4 *)(this + 0xd8) = 1000;
  *(undefined4 *)(this + 0xdc) = 1000;
  *(undefined4 *)(this + 0xe0) = 1000;
  *(undefined4 *)(this + 0xe4) = 1000;
  *(undefined4 *)(this + 0xf0) = 1000;
  *(undefined4 *)(this + 0xf4) = 1000;
  *(undefined4 *)(this + 0xf8) = 1000;
  *(undefined4 *)(this + 0xfc) = 1000;
  *(undefined4 *)(this + 0x100) = 1000;
  *(undefined4 *)(this + 0x10c) = 1000;
  *(undefined4 *)(this + 0x110) = 1000;
  *(undefined4 *)(this + 0x114) = 1000;
  *(undefined4 *)(this + 0x118) = 1000;
  *(undefined4 *)(this + 0x11c) = 1000;
  return;
}


/* BesiegeMazeMap::SetTestBox(int, int) */

void __thiscall BesiegeMazeMap::SetTestBox(BesiegeMazeMap *this,int param_1,int param_2)

{
  *(int *)this = param_1 + 1;
  *(int *)(this + 4) = param_2 + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeMazeMap::RemoveAllBesiegeGuide() */

void BesiegeMazeMap::RemoveAllBesiegeGuide(void)

{
  long *plVar1;
  int iVar2;
  Board *this;
  int iVar3;
  string asStack_10 [8];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  do {
    iVar2 = 0;
    do {
      this = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"BesiegeGuide");
      plVar1 = (long *)Board::GetGridItemAt(this,asStack_10,iVar3,iVar2);
      std::string::~string(asStack_10);
      nop();
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))(plVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 5);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 9);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BesiegeMazeMap::ShouldTryGrid(int, int, int) */

bool __thiscall
BesiegeMazeMap::ShouldTryGrid(BesiegeMazeMap *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + ((long)param_1 * 7 + (long)param_2) * 4 + 0xc);
  if (iVar1 != 1000) {
    return iVar1 != 900 && (param_3 < iVar1 && iVar1 != 800);
  }
  return true;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeMazeMap::SearchMazeGrid(int, int, int, bool) */

void __thiscall
BesiegeMazeMap::SearchMazeGrid
          (BesiegeMazeMap *this,int param_1,int param_2,int param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_4) && (*(int *)this == param_1)) && (*(int *)(this + 4) == param_2)) {
    *(undefined4 *)(this + ((long)*(int *)this * 7 + (long)*(int *)(this + 4)) * 4 + 0xc) = 800;
  }
  else {
    iVar2 = param_1 + -1;
    iVar3 = param_2 + -1;
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"BesiegeBox");
    lVar5 = Board::GetGridItemAt(this_00,asStack_10,iVar2,iVar3);
    std::string::~string(asStack_10);
    nop();
    if (lVar5 == 0) {
      iVar1 = param_3 + 1;
      *(int *)(this + ((long)param_1 * 7 + (long)param_2) * 4 + 0xc) = param_3;
      cVar4 = ShouldTryGrid(this,param_1,iVar3,iVar1);
      if (cVar4 != '\0') {
        SearchMazeGrid(this,param_1,iVar3,iVar1,param_4);
      }
      cVar4 = ShouldTryGrid(this,iVar2,param_2,iVar1);
      if (cVar4 != '\0') {
        SearchMazeGrid(this,iVar2,param_2,iVar1,param_4);
      }
      cVar4 = ShouldTryGrid(this,param_1,param_2 + 1,iVar1);
      if (cVar4 != '\0') {
        SearchMazeGrid(this,param_1,param_2 + 1,iVar1,param_4);
      }
      cVar4 = ShouldTryGrid(this,param_1 + 1,param_2,iVar1);
      if (cVar4 != '\0') {
        SearchMazeGrid(this,param_1 + 1,param_2,iVar1,param_4);
      }
    }
    else {
      *(undefined4 *)(this + ((long)param_1 * 7 + (long)param_2) * 4 + 0xc) = 800;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeMazeMap::ResetBesiegeGuide() */

void __thiscall BesiegeMazeMap::ResetBesiegeGuide(BesiegeMazeMap *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  ulong uVar2;
  bool bVar3;
  LevelModuleManager *this_01;
  BesiegeModule *pBVar4;
  int *piVar5;
  RtObject *pRVar6;
  GridItemBesiegeGuide *pGVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  Board *pBVar12;
  int iVar13;
  undefined8 local_20;
  undefined8 local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (LevelModuleManager *)FUN_0478aae4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pBVar4 = LevelModuleManager::GetModuleByClass<BesiegeModule>(this_01);
  if (pBVar4 != (BesiegeModule *)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x140);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
    if (bVar3) {
      do {
        piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        iVar9 = *piVar5;
        iVar13 = piVar5[1];
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)&local_10,"BesiegeGuide");
        Board::AddGridItem(pBVar12,(string *)&local_10,iVar9,iVar13,1);
        std::string::~string((string *)&local_10);
        nop();
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)&local_10,"BesiegeGuide");
        pRVar6 = (RtObject *)Board::GetGridItemAt(pBVar12,(string *)&local_10,iVar9,iVar13);
        std::string::~string((string *)&local_10);
        nop();
        pGVar7 = Sexy::RtObject::Cast<GridItemBesiegeGuide>(pRVar6);
        GridItemBesiegeGuide::SetIsStartPoint(pGVar7,true);
        BesiegeModule::calcNextGrid((int)pBVar4,iVar9 + 1,iVar13 + 1,false);
        iVar9 = (int)local_18;
        iVar13 = local_18._4_4_;
        while( true ) {
          iVar10 = iVar9 + -1;
          iVar1 = iVar13 + -1;
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)&local_10,"BesiegeGuide");
          lVar8 = Board::GetGridItemAt(pBVar12,(string *)&local_10,iVar10,iVar1);
          std::string::~string((string *)&local_10);
          nop();
          if (lVar8 != 0) break;
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)&local_10,"BesiegeGuide");
          Board::AddGridItem(pBVar12,(string *)&local_10,iVar10,iVar1,1);
          std::string::~string((string *)&local_10);
          nop();
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)&local_10,"BesiegeGuide");
          pRVar6 = (RtObject *)Board::GetGridItemAt(pBVar12,(string *)&local_10,iVar10,iVar1);
          std::string::~string((string *)&local_10);
          nop();
          pGVar7 = Sexy::RtObject::Cast<GridItemBesiegeGuide>(pRVar6);
          GridItemBesiegeGuide::SetIsStartPoint(pGVar7,false);
          BesiegeModule::calcNextGrid((int)pBVar4,(int)local_18,local_18._4_4_,false);
          local_18 = local_10;
          uVar2 = local_18;
          iVar10 = (int)local_10;
          local_18 = uVar2;
          if ((iVar10 == -100) || (local_18._4_4_ = (int)(local_10 >> 0x20), local_18._4_4_ == -100)
             ) {
            pGVar7 = Sexy::RtObject::Cast<GridItemBesiegeGuide>(pRVar6);
            GridItemBesiegeGuide::PlayArrow(pGVar7,1);
            break;
          }
          uVar11 = local_10;
          if (iVar10 == iVar9) {
            if (local_18._4_4_ < iVar13) {
              pGVar7 = Sexy::RtObject::Cast<GridItemBesiegeGuide>(pRVar6);
              GridItemBesiegeGuide::PlayArrow(pGVar7,3);
              uVar11 = local_18 & 0xffffffff;
              iVar13 = local_18._4_4_;
              uVar2 = local_18;
            }
            else {
              bVar3 = iVar13 < local_18._4_4_;
              iVar13 = local_18._4_4_;
              uVar2 = local_10;
              if (bVar3) {
                pGVar7 = Sexy::RtObject::Cast<GridItemBesiegeGuide>(pRVar6);
                GridItemBesiegeGuide::PlayArrow(pGVar7,4);
                uVar11 = local_18 & 0xffffffff;
                iVar13 = local_18._4_4_;
                uVar2 = local_18;
              }
            }
          }
          else {
            bVar3 = local_18._4_4_ == iVar13;
            iVar13 = local_18._4_4_;
            if (bVar3) {
              if (iVar10 < iVar9) {
                pGVar7 = Sexy::RtObject::Cast<GridItemBesiegeGuide>(pRVar6);
                GridItemBesiegeGuide::PlayArrow(pGVar7,1);
                uVar11 = local_18 & 0xffffffff;
                iVar13 = local_18._4_4_;
                uVar2 = local_18;
              }
              else if (iVar9 < iVar10) {
                pGVar7 = Sexy::RtObject::Cast<GridItemBesiegeGuide>(pRVar6);
                GridItemBesiegeGuide::PlayArrow(pGVar7,2);
                uVar11 = local_18 & 0xffffffff;
                iVar13 = local_18._4_4_;
                uVar2 = local_18;
              }
            }
          }
          local_18 = uVar2;
          iVar9 = (int)uVar11;
        }
        FUN_0478c724((__normal_iterator *)&local_20);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10)
        ;
      } while (bVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BesiegeMazeMap::BesiegeMazeMap() */

void __thiscall BesiegeMazeMap::BesiegeMazeMap(BesiegeMazeMap *this)

{
  BesiegeMazeMap *pBVar1;
  undefined4 uVar2;
  int iVar3;
  
  Sexy::Point::Point((Point *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  Sexy::Point::Point((Point *)(this + 0x158));
  iVar3 = 0;
  pBVar1 = this + 0xc;
  do {
    while( true ) {
      uVar2 = 900;
      *(undefined4 *)pBVar1 = 900;
      if (iVar3 != 10) {
        uVar2 = 1000;
      }
      if (iVar3 != 0) break;
      iVar3 = 1;
      *(undefined4 *)(pBVar1 + 4) = 900;
      *(undefined4 *)(pBVar1 + 8) = 900;
      *(undefined4 *)(pBVar1 + 0xc) = 900;
      *(undefined4 *)(pBVar1 + 0x10) = 900;
      *(undefined4 *)(pBVar1 + 0x14) = 900;
      *(undefined4 *)(pBVar1 + 0x18) = 900;
      pBVar1 = pBVar1 + 0x1c;
    }
    iVar3 = iVar3 + 1;
    *(undefined4 *)(pBVar1 + 4) = uVar2;
    *(undefined4 *)(pBVar1 + 8) = uVar2;
    *(undefined4 *)(pBVar1 + 0xc) = uVar2;
    *(undefined4 *)(pBVar1 + 0x10) = uVar2;
    *(undefined4 *)(pBVar1 + 0x14) = uVar2;
    *(undefined4 *)(pBVar1 + 0x18) = 900;
    pBVar1 = pBVar1 + 0x1c;
  } while (iVar3 != 0xb);
  this[8] = (BesiegeMazeMap)0x0;
  return;
}


/* BesiegeMazeMap::~BesiegeMazeMap() */

void __thiscall BesiegeMazeMap::~BesiegeMazeMap(BesiegeMazeMap *this)

{
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeMazeMap::calcMazeMapHeight(bool, bool) */

void __thiscall BesiegeMazeMap::calcMazeMapHeight(BesiegeMazeMap *this,bool param_1,bool param_2)

{
  bool bVar1;
  undefined8 uVar2;
  Zombie *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RemoveAllBesiegeGuide();
  if (param_1) {
    ResetMazeMap(this);
  }
  SearchMazeGrid(this,*(int *)(this + 0x158) + 2,*(int *)(this + 0x15c) + 1,1,param_2);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x29);
  while( true ) {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) break;
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this_00 = (Zombie *)Sexy::RtWeakPtr<Zombie>::GetPtr((RtWeakPtr<Zombie> *)aRStack_38);
    Zombie::SetBesieged(this_00,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  *(undefined4 *)
   (this + ((long)(*(int *)(this + 0x158) + 1) * 7 + (long)(*(int *)(this + 0x15c) + 1)) * 4 + 0xc)
       = 0;
  ResetBesiegeGuide(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BesiegeMazeMap::InitMazeMap(std::vector<Sexy::Point, std::allocator<Sexy::Point> >, Sexy::Point,
   bool) */

void __thiscall
BesiegeMazeMap::InitMazeMap
          (BesiegeMazeMap *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2,undefined8 *param_3,bool param_4)

{
  bool bVar1;
  Point *pPVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(param_2);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    pPVar2 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x140),pPVar2);
    FUN_0478c724((exception_ptr *)&local_18);
  }
  *(undefined8 *)(this + 0x158) = *param_3;
  calcMazeMapHeight(this,false,param_4);
  this[8] = (BesiegeMazeMap)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


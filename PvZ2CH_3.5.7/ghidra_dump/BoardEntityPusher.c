// Class: BoardEntityPusher


/* BoardEntityPusher::~BoardEntityPusher() */

void __thiscall BoardEntityPusher::~BoardEntityPusher(BoardEntityPusher *this)

{
  std::string::~string((string *)(this + 0x20));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 8));
  return;
}


/* BoardEntityPusher::CanPushPlant(Plant*) */

byte BoardEntityPusher::CanPushPlant(Plant *param_1)

{
  char cVar1;
  byte bVar2;
  
  if (((param_1 != (Plant *)0x0) && (cVar1 = Plant::IsInvincible(param_1,false), cVar1 == '\0')) &&
     (cVar1 = FUN_0495b56c(*(undefined4 *)(param_1 + 0x1d0)), cVar1 == '\0')) {
    bVar2 = Plant::IsSwapping(param_1);
    return bVar2 ^ 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntityPusher::GetOffBoardGridLocation(int, Plant*) */

void BoardEntityPusher::GetOffBoardGridLocation(int param_1,Plant *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  Board *pBVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (Plant *)0x0) {
    if (param_1 < 1) {
      uVar6 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
    }
    else {
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar1 + -1);
      uVar6 = BoardTransforms::BoardSpaceToGridXUnbounded(iVar1 + 100);
    }
  }
  else {
    iVar1 = SharkMinion::getRow((SharkMinion *)param_2);
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)param_2);
    if (param_1 < 1) {
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_2);
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      uVar7 = iVar2 - (iVar3 + iVar4 + 2);
      while( true ) {
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"");
        lVar5 = Board::GetPlantAt(pBVar8,uVar7,iVar1,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (lVar5 == 0) break;
        uVar7 = uVar7 - 1;
      }
    }
    else {
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_2);
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      uVar7 = iVar2 + iVar3 + iVar4 + 2;
      while( true ) {
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"");
        lVar5 = Board::GetPlantAt(pBVar8,uVar7,iVar1,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (lVar5 == 0) break;
        uVar7 = uVar7 + 1;
      }
    }
    uVar6 = (ulong)uVar7;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* BoardEntityPusher::BoardEntityPusher(BoardEntity*, std::string const&) */

void __thiscall
BoardEntityPusher::BoardEntityPusher(BoardEntityPusher *this,BoardEntity *param_1,string *param_2)

{
  *(BoardEntity **)this = param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  FUN_05475d88(this + 0x20,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntityPusher::plantWillBeDrowned(Plant*, int) const */

void __thiscall
BoardEntityPusher::plantWillBeDrowned(BoardEntityPusher *this,Plant *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  cVar2 = *(char *)(lVar3 + 0x24b);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if ((cVar2 == '\0') && (cVar2 = FUN_0495b578(param_1[0x3d0]), cVar2 == '\0')) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::Point::Point((Point *)aRStack_10,param_2 + *(int *)(param_1 + 0x114),
                       *(int *)(param_1 + 0x110));
    cVar2 = Board::IsShallowWater(this_00,(Point *)aRStack_10);
    if (cVar2 != '\0') {
      lVar3 = FUN_0495b914(param_2 + *(int *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x110));
      bVar1 = lVar3 == 0;
      goto LAB_0495ba60;
    }
  }
  bVar1 = false;
LAB_0495ba60:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntityPusher::pushGridItem(GridItem*, int) const */

void __thiscall
BoardEntityPusher::pushGridItem(BoardEntityPusher *this,GridItem *param_1,int param_2)

{
  GridItemPlantShield *this_00;
  long lVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (GridItem *)0x0) &&
      (this_00 = Sexy::RtObject::Cast<GridItemPlantShield>((RtObject *)param_1),
      this_00 != (GridItemPlantShield *)0x0)) && (param_2 < 0)) {
    DamageInfo::DamageInfo((DamageInfo *)&local_68);
    lVar1 = *(long *)this_00;
    local_68 = *(undefined8 *)this;
    if (*(code **)(lVar1 + 0x1d8) == GridItem::GetHitpoints) {
      local_60 = GridItem::GetHitpoints((GridItem *)this_00);
    }
    else {
      local_60 = (**(code **)(lVar1 + 0x1d8))();
      lVar1 = *(long *)this_00;
    }
    local_58 = 0x20;
    (**(code **)(lVar1 + 0x110))(this_00,(DamageInfo *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntityPusher::isLocationBlacklisted(int, int) const */

void __thiscall
BoardEntityPusher::isLocationBlacklisted(BoardEntityPusher *this,int param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  Point aPStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = FUN_0495b7f0(*(undefined8 *)(this + 0x10));
  uVar2 = FUN_0495b7a0(*(undefined8 *)(this + 8));
  uVar3 = FUN_0495b7f0(*(undefined8 *)(this + 0x10));
  Sexy::Point::Point(aPStack_18,param_1,param_2);
  local_10 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::Point_const*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                       (uVar2,uVar3,aPStack_18);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntityPusher::getNextValidColumnInDirection(Sexy::RtWeakPtr<PlantGroup>, int, int) const */

void __thiscall
BoardEntityPusher::getNextValidColumnInDirection
          (BoardEntityPusher *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  RtWeakPtrBase *pRVar13;
  PlantType *this_00;
  Point *pPVar14;
  undefined8 uVar15;
  Board *pBVar16;
  int iVar17;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  bVar1 = false;
  local_8 = ___stack_chk_guard;
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar7 = FUN_0495b580(*(undefined4 *)(lVar11 + 0xa8));
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar8 = FUN_0495b57c(*(undefined4 *)(lVar11 + 0xa4));
  iVar8 = iVar8 + param_3 * param_4;
  lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar9 = FUN_0495b57c(*(undefined4 *)(lVar11 + 0xa4));
  iVar17 = iVar9 + param_3;
  iVar9 = iVar9 + param_3;
  while( true ) {
    while( true ) {
      pPVar14 = *(Point **)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_10,iVar9,iVar7);
      bVar4 = Board::HasPlantAt(pPVar14);
      bVar4 = bVar4 ^ 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      puVar12 = (undefined8 *)PlantGroup::Plants();
      local_30 = FUN_0495b840(*puVar12);
      local_28 = FUN_0495b890(puVar12[1]);
      while (bVar5 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar5) {
        pRVar13 = (RtWeakPtrBase *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,pRVar13);
        pBVar16 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::Point::Point(aPStack_18,iVar9,iVar7);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        Plant::GetType();
        cVar6 = Board::CanPlantAt(pBVar16,aPStack_18,aRStack_20);
        if (cVar6 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          Plant::GetType();
          this_00 = (PlantType *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
          lVar11 = PlantType::GetProps(this_00);
          iVar10 = *(int *)(lVar11 + 0xbc);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          if (iVar10 != 0) {
            cVar6 = NewPVPUtils::IsPlayingNewPVP();
            if (cVar6 == '\0') {
              bVar4 = 0;
            }
            else {
              uVar15 = *(undefined8 *)(gLawnApp + 0x9f0);
              Sexy::Point::Point(aPStack_10,iVar9,iVar7);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
              Plant::GetType();
              iVar10 = Board::GetCanPlantAtReason(uVar15,aPStack_10,aPStack_18,0,0xffffffff);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_18);
              if (1 < iVar10 - 1U) {
                bVar4 = 0;
              }
            }
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      EntityFinder::GetGridItemAt<GridIcelotusDropwater>(iVar9,iVar7);
      pBVar16 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_10,iVar9,iVar7);
      cVar6 = Board::IsShallowWater(pBVar16,aPStack_10);
      if (((cVar6 != '\0') || (bVar4 != 0)) &&
         (cVar6 = isLocationBlacklisted(this,iVar9,iVar7), cVar6 == '\0')) break;
      iVar9 = iVar9 + param_3;
      if ((iVar9 < 0) || (iVar10 = BoardConstants::NUMBER_OF_COLUMNS(), iVar10 < iVar9))
      goto LAB_0495c094;
    }
    if (iVar8 * param_3 <= iVar9 * param_3) break;
    bVar1 = true;
    iVar17 = iVar9;
    iVar9 = iVar9 + param_3;
  }
LAB_0495c094:
  if ((bVar1) &&
     (uVar3 = iVar17 - iVar8 >> 0x1f, uVar2 = iVar9 - iVar8 >> 0x1f,
     (int)((iVar17 - iVar8 ^ uVar3) - uVar3) <= (int)((iVar9 - iVar8 ^ uVar2) - uVar2))) {
    iVar9 = iVar17;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntityPusher::plantGroupIsBeingPushedOffBoard(Sexy::RtWeakPtr<PlantGroup>, int, int) const
    */

void __thiscall
BoardEntityPusher::plantGroupIsBeingPushedOffBoard
          (BoardEntityPusher *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined8 param_3,
          undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  PlantGroup *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantGroup *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = PlantGroup::Empty(this_00);
  bVar2 = false;
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    iVar3 = getNextValidColumnInDirection(this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    bVar2 = true;
    if (-1 < iVar3) {
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      bVar2 = iVar4 <= iVar3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntityPusher::BlacklistBoardLocation(int, int) */

void __thiscall
BoardEntityPusher::BlacklistBoardLocation(BoardEntityPusher *this,int param_1,int param_2)

{
  char cVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isLocationBlacklisted(this,param_1,param_2);
  if (cVar1 == '\0') {
    Sexy::Point::Point(aPStack_10,param_1,param_2);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 8),aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntityPusher::PushPlantGroup(PushPlantGroupProps&) const */

void __thiscall
BoardEntityPusher::PushPlantGroup(BoardEntityPusher *this,PushPlantGroupProps *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_1);
  if (bVar1) {
    bVar1 = false;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    puVar4 = (undefined8 *)PlantGroup::Plants();
    local_18 = FUN_0495b840(*puVar4);
    local_10 = FUN_0495b890(puVar4[1]);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      cVar2 = FUN_0495b56c(*(undefined4 *)(lVar5 + 0x1d0));
      if (cVar2 != '\0') {
        bVar1 = true;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    if (!bVar1) {
      pushPlantGroup(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardEntityPusher::moveRowFromGridLocInDirection(int, int, int) const */

void __thiscall
BoardEntityPusher::moveRowFromGridLocInDirection
          (BoardEntityPusher *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Plant *this_01;
  ulong uVar11;
  int iVar12;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar12 = param_1;
  if (-1 < param_1) {
    bVar2 = false;
    iVar1 = param_1;
    do {
      iVar7 = BoardConstants::NUMBER_OF_COLUMNS();
      if (iVar7 <= iVar1) break;
      cVar4 = Board::IsGridSquareLocked(*(Board **)(gLawnApp + 0x9f0),iVar1,param_2);
      if (cVar4 != '\0') {
        bVar2 = true;
      }
      cVar4 = isLocationBlacklisted(this,iVar1,param_2);
      if (cVar4 == '\0') {
        lVar8 = Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),iVar1,param_2);
        if (lVar8 == 0) break;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_28);
        cVar4 = plantGroupIsBeingPushedOffBoard
                          (this,(RtWeakPtr<Sexy::SoundResource> *)&local_20,param_3,
                           PUSH_DISTANCE_DEFAULT);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        puVar9 = (undefined8 *)PlantGroup::Plants();
        local_30 = FUN_0495b840(*puVar9);
        local_28 = FUN_0495b890(puVar9[1]);
        while (bVar5 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
              bVar5) {
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          cVar6 = CanPushPlant(this_01);
          if (cVar6 == '\0') {
LAB_0495cd64:
            bVar2 = true;
            break;
          }
          if ((cVar4 != '\0') || (cVar6 = plantWillBeDrowned(this,this_01,param_3), cVar6 != '\0'))
          {
            iVar7 = GetOffBoardGridLocation(param_3,this_01);
            Sexy::Point::Point((Point *)&local_20,iVar7,param_2);
            cVar6 = Board::HasPlantAt(*(Point **)(gLawnApp + 0x9f0));
            if (cVar6 != '\0') goto LAB_0495cd64;
          }
          if (*(RtObject **)this != (RtObject *)0x0) {
            Sexy::RtObject::IsA<Zombie>(*(RtObject **)this);
          }
          cVar6 = Plant::TryBlockPush(this_01);
          iVar12 = iVar1;
          if (cVar6 != '\0') break;
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
        }
      }
      iVar1 = iVar1 + param_3;
    } while (-1 < iVar1);
    if (bVar2) goto LAB_0495cb98;
  }
  cVar4 = isLocationBlacklisted(this,iVar12,param_2);
  if (cVar4 == '\0') goto LAB_0495caa4;
  do {
    do {
      iVar12 = iVar12 - param_3;
      cVar4 = isLocationBlacklisted(this,iVar12,param_2);
    } while (cVar4 != '\0');
LAB_0495caa4:
    lVar8 = Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),iVar12,param_2);
    if (lVar8 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
      PushPlantGroupProps::PushPlantGroupProps
                ((PushPlantGroupProps *)&local_20,(RtWeakPtr<Sexy::SoundResource> *)&local_28,
                 param_3,PUSH_DISTANCE_DEFAULT);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      PushPlantGroup(this,(PushPlantGroupProps *)&local_20);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_20);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),iVar12,param_2,(vector *)&local_20);
    uVar11 = 0;
    while( true ) {
      uVar3 = local_20;
      uVar10 = FUN_0495b584(local_20,local_18);
      if (uVar10 <= uVar11) break;
      puVar9 = (undefined8 *)FUN_0495b590(uVar3,uVar11);
      pushGridItem(this,(GridItem *)*puVar9,param_3);
      uVar11 = uVar11 + 1;
    }
    std::vector<GridItem*,std::allocator<GridItem*>>::~vector
              ((vector<GridItem*,std::allocator<GridItem*>> *)&local_20);
  } while (iVar12 != param_1);
LAB_0495cb98:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* BoardEntityPusher::PushRowLeft(int, int) const */

void __thiscall BoardEntityPusher::PushRowLeft(BoardEntityPusher *this,int param_1,int param_2)

{
  moveRowFromGridLocInDirection(this,param_1,param_2,PUSH_DIRECTION_LEFT);
  return;
}


/* BoardEntityPusher::PullRowRight(int, int) const */

void __thiscall BoardEntityPusher::PullRowRight(BoardEntityPusher *this,int param_1,int param_2)

{
  moveRowFromGridLocInDirection(this,param_1,param_2,PUSH_DIRECTION_RIGHT);
  return;
}


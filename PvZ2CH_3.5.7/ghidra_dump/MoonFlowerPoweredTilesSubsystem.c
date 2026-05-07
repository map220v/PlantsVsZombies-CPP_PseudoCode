// Class: MoonFlowerPoweredTilesSubsystem


/* MoonFlowerPoweredTilesSubsystem::~MoonFlowerPoweredTilesSubsystem() */

void __thiscall
MoonFlowerPoweredTilesSubsystem::~MoonFlowerPoweredTilesSubsystem
          (MoonFlowerPoweredTilesSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067bed90;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* MoonFlowerPoweredTilesSubsystem::~MoonFlowerPoweredTilesSubsystem() */

void __thiscall
MoonFlowerPoweredTilesSubsystem::~MoonFlowerPoweredTilesSubsystem
          (MoonFlowerPoweredTilesSubsystem *this)

{
  ~MoonFlowerPoweredTilesSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerPoweredTilesSubsystem::StaticClassInit() */

void MoonFlowerPoweredTilesSubsystem::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"MoonFlowerPoweredTilesSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_0404b38c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoonFlowerPoweredTilesSubsystem::StaticGetClass() */

long * MoonFlowerPoweredTilesSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"MoonFlowerPoweredTilesSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoonFlowerPoweredTilesSubsystem::GetClass() const */

long * MoonFlowerPoweredTilesSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"MoonFlowerPoweredTilesSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MoonFlowerPoweredTilesSubsystem::convertRadiusGridToBoard(float) */

float MoonFlowerPoweredTilesSubsystem::convertRadiusGridToBoard(float param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  return (float)iVar1 * param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerPoweredTilesSubsystem::gridToBoardCentered(Sexy::Point) */

void MoonFlowerPoweredTilesSubsystem::gridToBoardCentered
               (Point *param_1,undefined8 param_2,BoardTransforms *param_3)

{
  Point *pPVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  pPVar1 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceRect(param_3,___stack_chk_guard);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Point::Point(param_1,local_18 + iVar2 / 2,local_14 + iVar3 / 2);
  if (pPVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* MoonFlowerPoweredTilesSubsystem::isMoonSpawningPlant(Plant*) */

bool __thiscall
MoonFlowerPoweredTilesSubsystem::isMoonSpawningPlant
          (MoonFlowerPoweredTilesSubsystem *this,Plant *param_1)

{
  bool bVar1;
  
  if (param_1 == (Plant *)0x0) {
    return false;
  }
  bVar1 = false;
  if (*(RtObject **)(param_1 + 0xa8) != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<PlantMoonFlower>(*(RtObject **)(param_1 + 0xa8));
    if (!bVar1) {
      bVar1 = Sexy::RtObject::IsA<PlantGloomVine>(*(RtObject **)(param_1 + 0xa8));
      return bVar1;
    }
  }
  return bVar1;
}


/* MoonFlowerPoweredTilesSubsystem::MoonFlowerPoweredTilesSubsystem() */

void __thiscall
MoonFlowerPoweredTilesSubsystem::MoonFlowerPoweredTilesSubsystem
          (MoonFlowerPoweredTilesSubsystem *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_067bed90;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantKilled);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<MoonFlowerPoweredTilesSubsystem,void(MoonFlowerPoweredTilesSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRailcartMoved);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<GridItemRailcart*,Sexy::CBMemberTranslatorX<MoonFlowerPoweredTilesSubsystem,void(MoonFlowerPoweredTilesSubsystem::*)(GridItemRailcart*)>>
            ((MessageRouter *)puVar1,Message::RailcartMoved,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlaced);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<MoonFlowerPoweredTilesSubsystem,void(MoonFlowerPoweredTilesSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_70);
  return;
}


/* MoonFlowerPoweredTilesSubsystem::StaticNew() */

MoonFlowerPoweredTilesSubsystem * MoonFlowerPoweredTilesSubsystem::StaticNew(void)

{
  MoonFlowerPoweredTilesSubsystem *this;
  
  this = ::operator_new(0x18);
  MoonFlowerPoweredTilesSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerPoweredTilesSubsystem::isOrphanedGlow(GridSquareMoonFlowerGlow*, Plant*) */

void __thiscall
MoonFlowerPoweredTilesSubsystem::isOrphanedGlow
          (MoonFlowerPoweredTilesSubsystem *this,GridSquareMoonFlowerGlow *param_1,Plant *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  TRect *pTVar4;
  undefined8 *puVar5;
  Plant *this_00;
  undefined4 uVar6;
  float fVar7;
  TPoint aTStack_50 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined8 local_28;
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  Sexy::Point::Point(aPStack_20,aTStack_50);
  gridToBoardCentered(&local_48,this,aPStack_20);
  uVar6 = convertRadiusGridToBoard(1.5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_20);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,(float)local_48,(float)local_44);
  EntityFinder::GetEntitiesTouchingCircle2D
            (uVar6,aPStack_20,1,(FastCurve *)&local_28,0xffffffff,0xffffffff);
  Sexy::Point::Point((Point *)&local_40,-1,-1);
  if (param_2 != (Plant *)0x0) {
    local_40 = *(int *)(param_2 + 0x114);
    local_3c = *(int *)(param_2 + 0x110);
  }
  bVar1 = true;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aPStack_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aPStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_28);
    if ((!bVar2) || (bVar1 == false)) break;
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
    Sexy::Point::Point((Point *)&local_30,*(int *)(this_00 + 0x114),*(int *)(this_00 + 0x110));
    cVar3 = isMoonSpawningPlant(this,this_00);
    if ((cVar3 == '\0') ||
       (((local_40 == local_30 && (local_3c == local_2c)) ||
        (cVar3 = Plant::IsSuspended(this_00), cVar3 != '\0')))) {
      bVar1 = true;
    }
    else {
      fVar7 = (float)(**(code **)(**(long **)(this_00 + 0xa8) + 0x1f8))(*(long **)(this_00 + 0xa8));
      pTVar4 = (TRect *)(**(code **)(*(long *)this_00 + 0x178))(this_00);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,(float)local_48,(float)local_44);
      fVar7 = (float)convertRadiusGridToBoard(fVar7);
      bVar1 = RectCircleIntersection<int>(pTVar4,(SexyVector2 *)&local_28,fVar7);
      bVar1 = !bVar1;
    }
    FUN_0404bca8((__normal_iterator *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* MoonFlowerPoweredTilesSubsystem::initScratchVector(std::vector<GridSquareMoonFlowerGlow*,
   std::allocator<GridSquareMoonFlowerGlow*> >&, int) */

void __thiscall
MoonFlowerPoweredTilesSubsystem::initScratchVector
          (MoonFlowerPoweredTilesSubsystem *this,vector *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  std::vector<GridSquareMoonFlowerGlow*,std::allocator<GridSquareMoonFlowerGlow*>>::clear
            ((vector<GridSquareMoonFlowerGlow*,std::allocator<GridSquareMoonFlowerGlow*>> *)param_1)
  ;
  std::vector<GridSquareMoonFlowerGlow*,std::allocator<GridSquareMoonFlowerGlow*>>::resize
            ((vector<GridSquareMoonFlowerGlow*,std::allocator<GridSquareMoonFlowerGlow*>> *)param_1,
             (long)param_2);
  if (0 < param_2) {
    lVar3 = 0;
    do {
      lVar1 = lVar3 + 1;
      puVar2 = (undefined8 *)FUN_0404aea8(*(undefined8 *)param_1,lVar3);
      *puVar2 = 0;
      lVar3 = lVar1;
    } while (lVar1 != (ulong)(param_2 - 1) + 1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerPoweredTilesSubsystem::getMoonFlowerGlows(Plant*,
   std::vector<GridSquareMoonFlowerGlow*, std::allocator<GridSquareMoonFlowerGlow*> >&,
   MoonFlowerFetchType) */

void __thiscall
MoonFlowerPoweredTilesSubsystem::getMoonFlowerGlows
          (MoonFlowerPoweredTilesSubsystem *this,Plant *param_1,vector *param_2,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  GridSquareMoonFlowerGlow *pGVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  if (param_1 == (Plant *)0x0) {
    initScratchVector(this,param_2,iVar3 * iVar4);
    fVar7 = 0.0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntities(avStack_20,0x20);
    fVar9 = fVar7;
  }
  else {
    fVar7 = (float)(**(code **)(**(long **)(param_1 + 0xa8) + 0x1f8))(*(long **)(param_1 + 0xa8));
    if (fVar7 == 0.0) {
      iVar3 = 0x10;
      fVar7 = 2.0;
      fVar9 = 4.0;
    }
    else {
      fVar9 = fVar7 + fVar7;
      iVar3 = (int)(fVar9 * fVar9);
    }
    initScratchVector(this,param_2,iVar3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    Sexy::Point::Point((Point *)&local_38,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
    Sexy::Point::Point((Point *)&local_28,(TPoint *)&local_38);
    gridToBoardCentered(&local_30,this,(Point *)&local_28);
    fVar8 = (float)convertRadiusGridToBoard(fVar7);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,(float)local_30,(float)local_2c);
    EntityFinder::GetEntitiesTouchingCircle2D
              (fVar8 + 20.0,avStack_20,0x20,(Point *)&local_28,0xffffffff,0xffffffff);
  }
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_28);
    if (!bVar1) break;
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    pGVar6 = Sexy::RtObject::Cast<GridSquareMoonFlowerGlow>((RtObject *)*puVar5);
    if ((pGVar6 != (GridSquareMoonFlowerGlow *)0x0) &&
       ((param_4 != 1 || (cVar2 = isOrphanedGlow(this,pGVar6,param_1), cVar2 != '\0')))) {
      BoardEntity::CalcGridPosition();
      iVar3 = local_2c;
      if (param_1 == (Plant *)0x0) {
        iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
        puVar5 = (undefined8 *)FUN_0404aea8(*(undefined8 *)param_2,(long)(local_30 + iVar3 * iVar4))
        ;
        *puVar5 = pGVar6;
      }
      else {
        Sexy::Point::Point((Point *)&local_28,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
        puVar5 = (undefined8 *)
                 FUN_0404aea8(*(undefined8 *)param_2,
                              (long)((local_30 - ((int)local_28 - (int)(fVar7 - 0.5))) +
                                    (local_2c - (local_28._4_4_ - (int)(fVar7 - 0.5))) * (int)fVar9)
                             );
        *puVar5 = pGVar6;
      }
    }
    FUN_0404bca8((__normal_iterator *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerPoweredTilesSubsystem::AddGlowEffects(Plant*) */

void __thiscall
MoonFlowerPoweredTilesSubsystem::AddGlowEffects
          (MoonFlowerPoweredTilesSubsystem *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  GridSquareMoonFlowerGlow *pGVar4;
  long lVar5;
  int iVar6;
  Board *this_00;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_30;
  int local_2c;
  Point aPStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isMoonSpawningPlant(this,param_1);
  if (cVar1 != '\0') {
    cVar1 = Plant::IsSuspended(param_1);
    if (cVar1 == '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      getMoonFlowerGlows(this,param_1,
                         (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,0
                        );
      fVar7 = (float)(**(code **)(**(long **)(param_1 + 0xa8) + 0x1f8))(*(long **)(param_1 + 0xa8));
      Sexy::Point::Point((Point *)&local_30,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
      fVar8 = ((float)local_2c + 0.5) - fVar7;
      if (fVar8 <= (float)local_2c + -0.5 + fVar7) {
        iVar6 = 0;
        do {
          while ((fVar8 < 0.0 || (iVar2 = BoardConstants::NUMBER_OF_ROWS(), (float)iVar2 <= fVar8)))
          {
            iVar6 = iVar6 + (int)(fVar7 + fVar7);
            fVar8 = fVar8 + 1.0;
            if ((float)local_2c + -0.5 + fVar7 < fVar8) goto LAB_0404e7d4;
          }
          lVar5 = (long)iVar6;
          fVar9 = ((float)local_30 + 0.5) - fVar7;
          if (fVar9 <= (float)local_30 + -0.5 + fVar7) {
            do {
              if (((0.0 <= fVar9) &&
                  (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), fVar9 < (float)iVar2)) &&
                 (plVar3 = (long *)FUN_0404aea8(local_20[0],lVar5), *plVar3 == 0)) {
                this_00 = *(Board **)(gLawnApp + 0x9f0);
                Sexy::Point::Point(aPStack_28,(int)fVar9,(int)fVar8);
                cVar1 = Board::IsPitOfDoom(this_00,aPStack_28);
                if (cVar1 == '\0') {
                  pGVar4 = GameObject::Create<GridSquareMoonFlowerGlow>();
                  Sexy::Point::Point(aPStack_28,(int)fVar9,(int)fVar8);
                  GridSquareMoonFlowerGlow::StartEffect(pGVar4,aPStack_28);
                }
              }
              iVar6 = iVar6 + 1;
              fVar9 = fVar9 + 1.0;
              lVar5 = lVar5 + 1;
            } while (fVar9 <= (float)local_30 + -0.5 + fVar7);
          }
          fVar8 = fVar8 + 1.0;
        } while (fVar8 <= (float)local_2c + -0.5 + fVar7);
      }
LAB_0404e7d4:
      std::vector<GridSquareMoonFlowerGlow*,std::allocator<GridSquareMoonFlowerGlow*>>::~vector
                ((vector<GridSquareMoonFlowerGlow*,std::allocator<GridSquareMoonFlowerGlow*>> *)
                 local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerPoweredTilesSubsystem::RemoveGlowEffects(Plant*) */

void __thiscall
MoonFlowerPoweredTilesSubsystem::RemoveGlowEffects
          (MoonFlowerPoweredTilesSubsystem *this,Plant *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  GridSquareMoonFlowerGlow *this_00;
  ulong uVar3;
  undefined8 uVar4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  getMoonFlowerGlows(this,param_1,
                     (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  uVar4 = local_20;
  uVar1 = FUN_0404aeb0(local_20,local_18);
  if (uVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_0404aea8(uVar4,uVar3);
      if ((RtObject *)*puVar2 != (RtObject *)0x0) {
        this_00 = Sexy::RtObject::Cast<GridSquareMoonFlowerGlow>((RtObject *)*puVar2);
        if (this_00 != (GridSquareMoonFlowerGlow *)0x0) {
          GridSquareMoonFlowerGlow::DoExit(this_00);
          (**(code **)(*(long *)this_00 + 0x48))(this_00);
        }
        uVar4 = local_20;
        uVar1 = FUN_0404aeb0(local_20,local_18);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  std::vector<GridSquareMoonFlowerGlow*,std::allocator<GridSquareMoonFlowerGlow*>>::~vector
            ((vector<GridSquareMoonFlowerGlow*,std::allocator<GridSquareMoonFlowerGlow*>> *)
             &local_20);
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerPoweredTilesSubsystem::onPlantKilled(Plant*) */

void __thiscall
MoonFlowerPoweredTilesSubsystem::onPlantKilled(MoonFlowerPoweredTilesSubsystem *this,Plant *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  GridSquareMoonFlowerGlow *this_00;
  ulong uVar3;
  undefined8 uVar4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar3 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_20);
  getMoonFlowerGlows(this,param_1,
                     (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&uStack_20,1);
  uVar4 = uStack_20;
  uVar1 = FUN_0404aeb0(uStack_20,uStack_18);
  if (uVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_0404aea8(uVar4,uVar3);
      if ((RtObject *)*puVar2 != (RtObject *)0x0) {
        this_00 = Sexy::RtObject::Cast<GridSquareMoonFlowerGlow>((RtObject *)*puVar2);
        if (this_00 != (GridSquareMoonFlowerGlow *)0x0) {
          GridSquareMoonFlowerGlow::DoExit(this_00);
          (**(code **)(*(long *)this_00 + 0x48))(this_00);
        }
        uVar4 = uStack_20;
        uVar1 = FUN_0404aeb0(uStack_20,uStack_18);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  std::vector<GridSquareMoonFlowerGlow*,std::allocator<GridSquareMoonFlowerGlow*>>::~vector
            ((vector<GridSquareMoonFlowerGlow*,std::allocator<GridSquareMoonFlowerGlow*>> *)
             &uStack_20);
  std::vector<Plant*,std::allocator<Plant*>>::~vector
            ((vector<Plant*,std::allocator<Plant*>> *)avStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MoonFlowerPoweredTilesSubsystem::onPlantPlaced(Plant*) */

void __thiscall
MoonFlowerPoweredTilesSubsystem::onPlantPlaced(MoonFlowerPoweredTilesSubsystem *this,Plant *param_1)

{
  char cVar1;
  
  cVar1 = isMoonSpawningPlant(this,param_1);
  if (cVar1 == '\0') {
    return;
  }
  RemoveGlowEffects(this,(Plant *)0x0);
  AddGlowEffects(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerPoweredTilesSubsystem::onRailcartMoved(GridItemRailcart*) */

void MoonFlowerPoweredTilesSubsystem::onRailcartMoved(GridItemRailcart *param_1)

{
  char cVar1;
  Plant *this;
  Board *pBVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  GridItem::GetGridLocation();
  this = (Plant *)Board::GetPlantAt(pBVar2,auStack_10,1);
  cVar1 = isMoonSpawningPlant((MoonFlowerPoweredTilesSubsystem *)param_1,this);
  if ((cVar1 != '\0') && (cVar1 = Plant::IsSuspended(this), cVar1 == '\0')) {
    RemoveGlowEffects((MoonFlowerPoweredTilesSubsystem *)param_1,(Plant *)0x0);
    AddGlowEffects((MoonFlowerPoweredTilesSubsystem *)param_1,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MoonFlowerPoweredTilesSubsystem::UpdateGlowEffects(Plant*) */

void __thiscall
MoonFlowerPoweredTilesSubsystem::UpdateGlowEffects
          (MoonFlowerPoweredTilesSubsystem *this,Plant *param_1)

{
  char cVar1;
  
  cVar1 = Plant::IsSuspended(param_1);
  if (((cVar1 == '\0') && (cVar1 = GameObject::IsDestroyed((GameObject *)param_1), cVar1 == '\0'))
     && (_FUN_0404eb60 < *(float *)(param_1 + 0xd8))) {
    cVar1 = Plant::IsOnBoard(param_1);
    if (cVar1 == '\0') {
      return;
    }
    AddGlowEffects(this,param_1);
    return;
  }
  RemoveGlowEffects(this,(Plant *)0x0);
  return;
}


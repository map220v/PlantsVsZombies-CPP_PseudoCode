// Class: BoardRegion


/* BoardRegion::DoEntityEnteredEffects(Sexy::SexyVector3 const&, BoardEntity*) */

void BoardRegion::DoEntityEnteredEffects(SexyVector3 *param_1,BoardEntity *param_2)

{
  return;
}


/* BoardRegion::GatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void BoardRegion::GatherPlantingRestrictions(Point *param_1,PlantType *param_2,vector *param_3)

{
  return;
}


/* BoardRegion::GetGroundHeightOffsetFraction(Sexy::SexyVector3 const&) */

undefined1  [16] BoardRegion::GetGroundHeightOffsetFraction(SexyVector3 *param_1)

{
  return ZEXT816(0);
}


/* BoardRegion::onUpdate() */

void BoardRegion::onUpdate(void)

{
  return;
}


/* BoardRegion::~BoardRegion() */

void __thiscall BoardRegion::~BoardRegion(BoardRegion *this)

{
  *(undefined ***)this = &PTR_GetClass_06734d70;
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* BoardRegion::~BoardRegion() */

void __thiscall BoardRegion::~BoardRegion(BoardRegion *this)

{
  ~BoardRegion(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegion::StaticClassInit() */

void BoardRegion::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardRegion");
    (*pcVar2)(plVar1,asStack_10,FUN_03b82fcc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardRegion::StaticGetClass() */

long * BoardRegion::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"BoardRegion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegion::GetClass() const */

long * BoardRegion::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,"BoardRegion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardRegion::Update() */

void __thiscall BoardRegion::Update(BoardRegion *this)

{
  if (*(code **)(*(long *)this + 0x98) != onUpdate) {
    (**(code **)(*(long *)this + 0x98))();
  }
  return;
}


/* BoardRegion::BoardRegion() */

void __thiscall BoardRegion::BoardRegion(BoardRegion *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_06734d70;
  Sexy::SexyVector4::SexyVector4((SexyVector4 *)(this + 0x14));
  return;
}


/* BoardRegion::StaticNew() */

BoardRegion * BoardRegion::StaticNew(void)

{
  BoardRegion *this;
  
  this = ::operator_new(0x28);
  BoardRegion(this);
  return this;
}


/* BoardRegion::HasFlags(BoardRegionFlags) const */

bool BoardRegion::HasFlags(long param_1)

{
  bool bVar1;
  
  bVar1 = TestAllFlags<BoardRegionFlags>(*(undefined4 *)(param_1 + 0x10));
  return bVar1;
}


/* BoardRegion::GetRegion() const */

TRect<float> * BoardRegion::GetRegion(void)

{
  long in_x0;
  TRect<float> *in_x8;
  
  Sexy::TRect<float>::TRect(in_x8,(TRect *)(in_x0 + 0x14));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegion::DrawCollisionInfo(Sexy::Graphics*) */

void __thiscall BoardRegion::DrawCollisionInfo(BoardRegion *this,Graphics *param_1)

{
  long lVar1;
  char *__s;
  string *extraout_x1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetRegion();
  Sexy::Insets::Insets(aIStack_18,0xff,0xad,0,0x40);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  fVar2 = (float)FUN_03b82a60(local_38);
  fVar3 = (float)FUN_03b82a60(local_34);
  fVar4 = (float)FUN_03b82a60(local_30);
  fVar5 = (float)FUN_03b82a60(local_2c);
  Sexy::Insets::Insets((Insets *)&local_28,(int)fVar2,(int)fVar3,(int)fVar4,(int)fVar5);
  Sexy::Graphics::FillRect(param_1,(TRect *)&local_28);
  Sexy::Insets::Insets(aIStack_18,0xff,0xad,0,0xff);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::DrawRect(param_1,(TRect *)&local_28);
  lVar1 = (*(code *)**(undefined8 **)this)(this);
  __s = (char *)FUN_03b82a24(*(undefined8 *)(lVar1 + 8));
  std::string::string(asStack_48,__s);
  Sexy::UTF8StringToWString((Sexy *)asStack_48,extraout_x1);
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::PrimeText::DrawDebugText(param_1,auStack_40,local_28,local_24,aIStack_18);
  FUN_05476c50(auStack_40);
  std::string::~string(asStack_48);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegion::Contains(Sexy::SexyVector3 const&) const */

void __thiscall BoardRegion::Contains(BoardRegion *this,SexyVector3 *param_1)

{
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_10,*(float *)param_1,*(float *)(param_1 + 4));
  Sexy::TRect<float>::Contains((TRect<float> *)(this + 0x14),(TPoint *)aFStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegion::Contains(Sexy::Point const&) const */

void __thiscall BoardRegion::Contains(BoardRegion *this,Point *param_1)

{
  Point *pPVar1;
  int local_10;
  int local_c;
  
  pPVar1 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)param_1,___stack_chk_guard);
  Sexy::TRect<float>::Contains((TRect<float> *)(this + 0x14),(float)local_10,(float)local_c);
  if (pPVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardRegion::SetRegionFromBoardCoordinates(Sexy::TRect<float> const&) */

void __thiscall BoardRegion::SetRegionFromBoardCoordinates(BoardRegion *this,TRect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x14) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1c) = uVar1;
  MessageRouter::Broadcast<BoardRegion*,BoardRegion*>
            ((MessageRouter *)gMessageRouter,Message::BoardRegionResized,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegion::SetRegionFromGridSquares(Sexy::TRect<int> const&) */

void __thiscall BoardRegion::SetRegionFromGridSquares(BoardRegion *this,TRect *param_1)

{
  long lVar1;
  RtObject *this_00;
  PoolDaylightStage *pPVar2;
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_30,*(int *)param_1,*(int *)(param_1 + 4));
  Sexy::Point::Point((Point *)&local_18,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
  BoardTransforms::GridToBoardSpaceRect(aPStack_30,(Point *)&local_18);
  lVar1 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if (lVar1 != 0) {
    this_00 = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    pPVar2 = Sexy::RtObject::Cast<PoolDaylightStage>(this_00);
    if ((pPVar2 != (PoolDaylightStage *)0x0) && (*(int *)(param_1 + 4) == 1)) {
      local_24 = local_24 + 0x14;
      local_1c = local_1c + -0x14;
    }
  }
  EA::Text::Rectangle::Rectangle
            ((Rectangle *)&local_18,(float)local_28,(float)local_24,(float)local_20,(float)local_1c)
  ;
  *(undefined8 *)(this + 0x14) = local_18;
  *(undefined8 *)(this + 0x1c) = uStack_10;
  MessageRouter::Broadcast<BoardRegion*,BoardRegion*>
            ((MessageRouter *)gMessageRouter,Message::BoardRegionResized,this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardRegion::GetContainedEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   BoardEntityTypeFlag, std::function<bool (BoardEntity*)>) */

void __thiscall
BoardRegion::GetContainedEntities
          (undefined8 param_1_00,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_1,undefined4 param_3,function *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  Insets aIStack_38 [16];
  function<bool(BoardEntity*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetRegion();
  Sexy::Insets::Insets(aIStack_38,(int)local_48,(int)local_44,(int)local_40,(int)local_3c);
  EntityFinder::GetEntitiesInRectangle(param_1,param_3,aIStack_38);
  bVar1 = std::function::operator_cast_to_bool(param_4);
  if (bVar1) {
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_1);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_1);
    std::function<bool(BoardEntity*)>::function(afStack_28,param_4);
    local_68 = FUN_03b837f8(uVar2,uVar3,afStack_28);
    EntitySearch_Lambda::~EntitySearch_Lambda((EntitySearch_Lambda *)afStack_28);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_58,(__normal_iterator *)&local_68);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(param_1);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_50,(__normal_iterator *)&local_60);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,local_58,local_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


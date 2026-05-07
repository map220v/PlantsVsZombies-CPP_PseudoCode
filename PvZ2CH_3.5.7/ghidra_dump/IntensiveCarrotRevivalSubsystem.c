// Class: IntensiveCarrotRevivalSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::StaticClassInit() */

void IntensiveCarrotRevivalSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntensiveCarrotRevivalSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_04168764,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntensiveCarrotRevivalSubsystem::StaticGetClass() */

long * IntensiveCarrotRevivalSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntensiveCarrotRevivalSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntensiveCarrotRevivalSubsystem::GetClass() const */

long * IntensiveCarrotRevivalSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"IntensiveCarrotRevivalSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntensiveCarrotRevivalSubsystem::isAllowedBoardPosition(int, int) const */

bool __thiscall
IntensiveCarrotRevivalSubsystem::isAllowedBoardPosition
          (IntensiveCarrotRevivalSubsystem *this,int param_1,int param_2)

{
  int iVar1;
  
  if (((-1 < param_1) && (iVar1 = BoardConstants::NUMBER_OF_SQUARES(), param_1 < iVar1)) &&
     (-1 < param_2)) {
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    return param_2 < iVar1;
  }
  return false;
}


/* IntensiveCarrotRevivalSubsystem::deleteSavedPlantUsingLocationFrom(Plant*) */

void __thiscall
IntensiveCarrotRevivalSubsystem::deleteSavedPlantUsingLocationFrom
          (IntensiveCarrotRevivalSubsystem *this,Plant *param_1)

{
  int iVar1;
  ulong uVar2;
  RtWeakPtrBase *this_00;
  undefined8 uVar3;
  
  iVar1 = FUN_04166eb4(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x110));
  if (-1 < iVar1) {
    uVar3 = *(undefined8 *)(this + 0x10);
    uVar2 = FUN_04166d40(uVar3,*(undefined8 *)(this + 0x18));
    if ((ulong)(long)iVar1 < uVar2) {
      this_00 = (RtWeakPtrBase *)FUN_04166d38(uVar3,(long)iVar1);
      Sexy::RtWeakPtrBase::ClearId(this_00);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::calcPreviewPos(Sexy::RtWeakPtr<PlantType const>, int, int) */

void __thiscall
IntensiveCarrotRevivalSubsystem::calcPreviewPos
          (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  PlantType *this;
  long lVar4;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar4 = PlantType::GetProps(this);
  Sexy::Point::Point((Point *)&local_18,param_3,param_4);
  BoardTransforms::GridToBoardSpace((Point *)&local_18);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_28,(float)(int)((float)local_30 - *(float *)(lVar4 + 0x9c)),
             (float)(int)(((float)local_2c - *(float *)(lVar4 + 0xa0)) - 10.0),0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::shouldBeCleared(Plant*) */

void __thiscall
IntensiveCarrotRevivalSubsystem::shouldBeCleared
          (IntensiveCarrotRevivalSubsystem *this,Plant *param_1)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar3 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = std::operator==(asStack_18,"intensivecarrot");
  if (((((bVar1) || (bVar1 = std::operator==(asStack_18,"imitater"), bVar1)) ||
       (bVar1 = std::operator==(asStack_18,"powerplant"), bVar1)) ||
      ((((bVar1 = std::operator==(asStack_18,"goldleaf"), bVar1 ||
         (bVar1 = std::operator==(asStack_18,"lilypad"), bVar1)) ||
        ((bVar1 = std::operator==(asStack_18,"flowerpot"), bVar1 ||
         ((bVar1 = std::operator==(asStack_18,"bitpeashooter"), bVar1 ||
          (bVar1 = std::operator==(asStack_18,"frog"), bVar1)))))) ||
       (bVar1 = std::operator==(asStack_18,"magicbeans"), bVar1)))) ||
     (((bVar1 = std::operator==(asStack_18,"pumpkin"), bVar1 ||
       (bVar1 = std::operator==(asStack_18,"powervine"), bVar1)) ||
      (bVar1 = std::operator==(asStack_18,"peavine"), bVar1)))) {
    bVar2 = 0;
  }
  else {
    Plant::GetType();
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar2 = (**(code **)(*plVar4 + 0xa0))();
    if (bVar2 == 0) {
      bVar2 = isAllowedBoardPosition(this,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
      bVar2 = bVar2 ^ 1;
    }
    bVar2 = bVar2 ^ 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::GetPlantLastPlantedAt(int, int) */

void IntensiveCarrotRevivalSubsystem::GetPlantLastPlantedAt(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  GridItemPoolEntry *pGVar3;
  int in_w2;
  GridItemPoolEntry *in_x8;
  uint local_14;
  _func_decltype_nullptr *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = isAllowedBoardPosition
                    ((IntensiveCarrotRevivalSubsystem *)(ulong)(uint)param_1,param_2,in_w2);
  if ((uVar1 & 0xff) == 0) {
    local_10 = (_func_decltype_nullptr *)0x0;
    local_14 = uVar1 & 0xff;
    std::pair<Sexy::RtWeakPtr<PlantType>,int>::pair<decltype(nullptr),int,void>
              ((pair<Sexy::RtWeakPtr<PlantType>,int> *)in_x8,&local_10,(int *)&local_14);
  }
  else {
    iVar2 = FUN_04166eb4(param_2,in_w2);
    pGVar3 = (GridItemPoolEntry *)
             FUN_04166d38(*(undefined8 *)
                           ((IntensiveCarrotRevivalSubsystem *)(ulong)(uint)param_1 + 0x10),
                          (long)iVar2);
    GridItemPoolEntry::GridItemPoolEntry(in_x8,pGVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::updateSavedPlantTo(Plant*) */

void __thiscall
IntensiveCarrotRevivalSubsystem::updateSavedPlantTo
          (IntensiveCarrotRevivalSubsystem *this,Plant *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04166eb4(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x110));
  if (-1 < iVar1) {
    uVar6 = *(undefined8 *)(this + 0x10);
    uVar5 = (ulong)iVar1;
    uVar3 = FUN_04166d40(uVar6,*(undefined8 *)(this + 0x18));
    if (uVar5 < uVar3) {
      this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)FUN_04166d38(uVar6,uVar5);
      Plant::GetType();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      lVar4 = FUN_04166d38(*(undefined8 *)(this + 0x10),uVar5);
      uVar2 = FUN_04166d24(*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(lVar4 + 8) = uVar2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntensiveCarrotRevivalSubsystem::HasPlantAt(int, int) const */

bool __thiscall
IntensiveCarrotRevivalSubsystem::HasPlantAt
          (IntensiveCarrotRevivalSubsystem *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar4;
  
  cVar2 = isAllowedBoardPosition(this,param_1,param_2);
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = FUN_04166eb4(param_1,param_2);
    this_00 = (RtWeakPtr *)FUN_04166d30(*(undefined8 *)(this + 0x10),(long)iVar3);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    bVar1 = pRVar4 != (ResourceInfo *)0x0;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::canShowPreviewAt(int, int) */

void __thiscall
IntensiveCarrotRevivalSubsystem::canShowPreviewAt
          (IntensiveCarrotRevivalSubsystem *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  Point aPStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = HasPlantAt(this,param_1,param_2);
  if (cVar1 != '\0') {
    GetPlantLastPlantedAt((int)this,param_1);
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_28,param_1,param_2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(this + 0x28));
    iVar2 = Board::GetCanPlantAtReason(uVar4,aPStack_28,aRStack_20,0,0xffffffff);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_28,param_1,param_2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_18);
    iVar3 = Board::GetCanPlantAtReason(uVar4,aPStack_28,aRStack_20,0,0xffffffff);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (iVar3 != 0 || iVar2 != 0) {
      cVar1 = '\0';
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::shouldActivatePreview(BaseCursor*) */

void __thiscall
IntensiveCarrotRevivalSubsystem::shouldActivatePreview
          (IntensiveCarrotRevivalSubsystem *this,BaseCursor *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  PacketCursor *pPVar4;
  long lVar5;
  long lVar6;
  RtMixedPtrBase aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BaseCursor *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    pPVar4 = Sexy::RtObject::Cast<PacketCursor>((RtObject *)param_1);
    if (pPVar4 != (PacketCursor *)0x0) {
      PlantTwinsHoneySuckle::GetAssistPerson();
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
      if (cVar1 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        uVar3 = 0;
      }
      else {
        PlantTwinsHoneySuckle::GetAssistPerson();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        SeedPacket::GetPlantType();
        cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
        if (cVar2 == '\0') {
          uVar3 = 0;
          cVar2 = cVar1;
        }
        else {
          PlantTwinsHoneySuckle::GetAssistPerson();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          SeedPacket::GetPlantType();
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
          uVar3 = std::operator==((string *)(lVar5 + 8),(string *)(lVar6 + 8));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::deactivatePreview() */

void __thiscall
IntensiveCarrotRevivalSubsystem::deactivatePreview(IntensiveCarrotRevivalSubsystem *this)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  RtWeakPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x38] != (IntensiveCarrotRevivalSubsystem)0x0) {
    this[0x38] = (IntensiveCarrotRevivalSubsystem)0x0;
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x40));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x40));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if (cVar2 != '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        (**(code **)(*plVar4 + 0x48))();
      }
      Sexy::RtWeakPtrBase::ClearId(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::onCursorDestroyed(BaseCursor*) */

void IntensiveCarrotRevivalSubsystem::onCursorDestroyed(BaseCursor *param_1)

{
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  RtWeakPtrBase aRStack_20 [8];
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1[0x38] != (BaseCursor)0x0) {
    param_1[0x38] = (BaseCursor)0x0;
    uStack_18 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(param_1 + 0x40));
    uStack_10 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(param_1 + 0x40));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_18,(__normal_iterator *)&uStack_10),
          bVar1) {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_20,pRVar3);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if (cVar2 != '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        (**(code **)(*plVar4 + 0x48))();
      }
      Sexy::RtWeakPtrBase::ClearId(aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_18);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntensiveCarrotRevivalSubsystem::~IntensiveCarrotRevivalSubsystem() */

void __thiscall
IntensiveCarrotRevivalSubsystem::~IntensiveCarrotRevivalSubsystem
          (IntensiveCarrotRevivalSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067f36f0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  std::
  vector<std::pair<Sexy::RtWeakPtr<PlantType>,int>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType>,int>>>
  ::~vector((vector<std::pair<Sexy::RtWeakPtr<PlantType>,int>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType>,int>>>
             *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* IntensiveCarrotRevivalSubsystem::~IntensiveCarrotRevivalSubsystem() */

void __thiscall
IntensiveCarrotRevivalSubsystem::~IntensiveCarrotRevivalSubsystem
          (IntensiveCarrotRevivalSubsystem *this)

{
  ~IntensiveCarrotRevivalSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::IntensiveCarrotRevivalSubsystem() */

void __thiscall
IntensiveCarrotRevivalSubsystem::IntensiveCarrotRevivalSubsystem
          (IntensiveCarrotRevivalSubsystem *this)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  _func_decltype_nullptr *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtName aRStack_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  _func_decltype_nullptr *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  _func_decltype_nullptr *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_067f36f0;
  iVar2 = BoardConstants::NUMBER_OF_SQUARES();
  local_38 = (_func_decltype_nullptr *)0x0;
  local_50 = 0;
  std::pair<Sexy::RtWeakPtr<PlantType>,int>::pair<decltype(nullptr),int,void>
            ((pair<Sexy::RtWeakPtr<PlantType>,int> *)&local_20,&local_38,&local_50);
  std::
  vector<std::pair<Sexy::RtWeakPtr<PlantType>,int>,std::allocator<std::pair<Sexy::RtWeakPtr<PlantType>,int>>>
  ::vector((ulong)(this + 0x10),(pair *)(long)iVar2,(allocator *)&local_20);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  this[0x38] = (IntensiveCarrotRevivalSubsystem)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlacedOnBoard);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<IntensiveCarrotRevivalSubsystem,void(IntensiveCarrotRevivalSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantKilled);
  local_a0 = CONCAT44(uStack_4c,local_50);
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<IntensiveCarrotRevivalSubsystem,void(IntensiveCarrotRevivalSubsystem::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorAdded);
  local_b0 = local_28;
  local_c0 = local_38;
  uStack_b8 = uStack_30;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<IntensiveCarrotRevivalSubsystem,void(IntensiveCarrotRevivalSubsystem::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorAdded,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorDestroyed);
  local_c0 = local_20;
  uStack_b8 = uStack_18;
  local_b0 = local_10;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<IntensiveCarrotRevivalSubsystem,void(IntensiveCarrotRevivalSubsystem::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_c0);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_78,L"intensivecarrot");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_80,uVar3,6,aRStack_78);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x28),(RtWeakPtr *)aRStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  Sexy::RtName::~RtName(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntensiveCarrotRevivalSubsystem::StaticNew() */

IntensiveCarrotRevivalSubsystem * IntensiveCarrotRevivalSubsystem::StaticNew(void)

{
  IntensiveCarrotRevivalSubsystem *this;
  
  this = ::operator_new(0x58);
  IntensiveCarrotRevivalSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::createPreviewEffect(Sexy::RtWeakPtr<PlantType const>, int, int)
    */

void IntensiveCarrotRevivalSubsystem::createPreviewEffect
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               IntensiveCarrotRevivalSubsystem *param_4,RtWeakPtr<Sexy::ResourceInfo> *param_5,
               undefined4 param_6,ulong param_7)

{
  int iVar1;
  Effect_PopAnim *this;
  long lVar2;
  long lVar3;
  PopAnimRig *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Board::MakeRenderOrder(0x64d48,param_7 & 0xffffffff,0);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  Effect_PopAnim::CreatePopAnimRig(this,(string *)(lVar2 + 0x20),(string *)(lVar3 + 0x18));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)param_5);
  local_18 = calcPreviewPos(param_4,aRStack_20,param_6,param_7);
  local_14 = param_2;
  local_10 = param_3;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_18,iVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_20);
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
             *)(param_4 + 0x40),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  UIWidget::GetAtlasImage((UIWidget *)this);
  nop();
  PopAnimRig::SetSaturation(this_00,0.0);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntensiveCarrotRevivalSubsystem::addPlantPreviewToGrid(int, int) */

void __thiscall
IntensiveCarrotRevivalSubsystem::addPlantPreviewToGrid
          (IntensiveCarrotRevivalSubsystem *this,int param_1,int param_2)

{
  char cVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canShowPreviewAt(this,param_1,param_2);
  if (cVar1 != '\0') {
    GetPlantLastPlantedAt((int)this,param_1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_18);
    createPreviewEffect(this,aRStack_20,param_1,param_2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntensiveCarrotRevivalSubsystem::activatePreview() */

void __thiscall
IntensiveCarrotRevivalSubsystem::activatePreview(IntensiveCarrotRevivalSubsystem *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this[0x38] == (IntensiveCarrotRevivalSubsystem)0x0) {
    this[0x38] = (IntensiveCarrotRevivalSubsystem)0x1;
    iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        for (iVar1 = 0; iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar1 < iVar2; iVar1 = iVar1 + 1)
        {
          addPlantPreviewToGrid(this,iVar3,iVar1);
        }
        iVar3 = iVar3 + 1;
        iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      } while (iVar3 < iVar1);
    }
  }
  return;
}


/* IntensiveCarrotRevivalSubsystem::onCursorAdded(BaseCursor*) */

void __thiscall
IntensiveCarrotRevivalSubsystem::onCursorAdded
          (IntensiveCarrotRevivalSubsystem *this,BaseCursor *param_1)

{
  char cVar1;
  
  cVar1 = shouldActivatePreview(this,param_1);
  if (cVar1 == '\0') {
    return;
  }
  activatePreview(this);
  return;
}


/* IntensiveCarrotRevivalSubsystem::resetPreview() */

void __thiscall IntensiveCarrotRevivalSubsystem::resetPreview(IntensiveCarrotRevivalSubsystem *this)

{
  if (this[0x38] == (IntensiveCarrotRevivalSubsystem)0x0) {
    return;
  }
  deactivatePreview(this);
  activatePreview(this);
  return;
}


/* IntensiveCarrotRevivalSubsystem::onPlantPlacedOnBoard(Plant*) */

void __thiscall
IntensiveCarrotRevivalSubsystem::onPlantPlacedOnBoard
          (IntensiveCarrotRevivalSubsystem *this,Plant *param_1)

{
  char cVar1;
  
  cVar1 = shouldBeCleared(this,param_1);
  if (cVar1 == '\0') {
    return;
  }
  deleteSavedPlantUsingLocationFrom(this,param_1);
  resetPreview(this);
  return;
}


/* IntensiveCarrotRevivalSubsystem::onPlantKilled(Plant*) */

void __thiscall
IntensiveCarrotRevivalSubsystem::onPlantKilled(IntensiveCarrotRevivalSubsystem *this,Plant *param_1)

{
  char cVar1;
  
  cVar1 = Plant::WasKilledByZombies(param_1);
  if ((cVar1 != '\0') &&
     (cVar1 = isAllowedBoardPosition(this,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110)),
     cVar1 != '\0')) {
    updateSavedPlantTo(this,param_1);
    resetPreview(this);
    return;
  }
  return;
}


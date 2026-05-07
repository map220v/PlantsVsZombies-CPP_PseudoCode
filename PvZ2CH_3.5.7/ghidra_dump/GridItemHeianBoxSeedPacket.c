// Class: GridItemHeianBoxSeedPacket


/* GridItemHeianBoxSeedPacket::~GridItemHeianBoxSeedPacket() */

void __thiscall
GridItemHeianBoxSeedPacket::~GridItemHeianBoxSeedPacket(GridItemHeianBoxSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_06767750;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxSeedPacket_06767a20;
  GridItemHeianBox::~GridItemHeianBox((GridItemHeianBox *)this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxSeedPacket::~GridItemHeianBoxSeedPacket() */

void __thiscall
GridItemHeianBoxSeedPacket::~GridItemHeianBoxSeedPacket(GridItemHeianBoxSeedPacket *this)

{
  ~GridItemHeianBoxSeedPacket(this + -0x10);
  return;
}


/* GridItemHeianBoxSeedPacket::~GridItemHeianBoxSeedPacket() */

void __thiscall
GridItemHeianBoxSeedPacket::~GridItemHeianBoxSeedPacket(GridItemHeianBoxSeedPacket *this)

{
  ~GridItemHeianBoxSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxSeedPacket::~GridItemHeianBoxSeedPacket() */

void __thiscall
GridItemHeianBoxSeedPacket::~GridItemHeianBoxSeedPacket(GridItemHeianBoxSeedPacket *this)

{
  ~GridItemHeianBoxSeedPacket(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSeedPacket::StaticClassInit() */

void GridItemHeianBoxSeedPacket::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxSeedPacket");
    (*pcVar2)(plVar1,asStack_10,FUN_03d29f10,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxSeedPacket::StaticGetClass() */

long * GridItemHeianBoxSeedPacket::StaticGetClass(void)

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
  uVar2 = GridItemHeianBox::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxSeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxSeedPacket::GetClass() const */

long * GridItemHeianBoxSeedPacket::GetClass(void)

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
  uVar2 = GridItemHeianBox::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxSeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxSeedPacket::GridItemHeianBoxSeedPacket() */

void __thiscall
GridItemHeianBoxSeedPacket::GridItemHeianBoxSeedPacket(GridItemHeianBoxSeedPacket *this)

{
  undefined4 uVar1;
  
  GridItemHeianBox::GridItemHeianBox((GridItemHeianBox *)this);
  *(undefined ***)this = &PTR_GetClass_06767750;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxSeedPacket_06767a20;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ac) = uVar1;
  return;
}


/* GridItemHeianBoxSeedPacket::StaticNew() */

GridItemHeianBoxSeedPacket * GridItemHeianBoxSeedPacket::StaticNew(void)

{
  GridItemHeianBoxSeedPacket *this;
  
  this = ::operator_new(0x1b0);
  GridItemHeianBoxSeedPacket(this);
  return this;
}


/* GridItemHeianBoxSeedPacket::updateState() */

void GridItemHeianBoxSeedPacket::updateState(void)

{
  long in_x0;
  float fVar1;
  undefined4 uVar2;
  
  nop();
  if ((*(int *)(in_x0 + 0x1a8) == 3) && (fVar1 = (float)PVZ_T(), *(float *)(in_x0 + 0x1ac) < fVar1))
  {
    GridItemHeianBox::setState();
    uVar2 = PVZ_EOT();
    *(undefined4 *)(in_x0 + 0x1ac) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSeedPacket::pickRandomSeedPacket() */

void __thiscall GridItemHeianBoxSeedPacket::pickRandomSeedPacket(GridItemHeianBoxSeedPacket *this)

{
  bool bVar1;
  GridItemHeianBoxSeedPacketProps *pGVar2;
  undefined8 uVar3;
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  pGVar2 = GridItem::GetProps<GridItemHeianBoxSeedPacketProps>();
  local_50 = FUN_03d2af94(*(undefined8 *)(pGVar2 + 0xd0));
  local_48 = FUN_03d2afe4(*(undefined8 *)(pGVar2 + 0xd8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    FUN_05475d88(asStack_58,uVar3);
    FUN_05475d88(asStack_40,asStack_58);
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)aPStack_38,asStack_40,1);
    std::string::~string(asStack_40);
    std::string::~string(asStack_58);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  ProbabilitySet<std::string>::PickItem();
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSeedPacket::triggerSeedPacket() */

void __thiscall GridItemHeianBoxSeedPacket::triggerSeedPacket(GridItemHeianBoxSeedPacket *this)

{
  char cVar1;
  string *psVar2;
  PlantType *pPVar3;
  long lVar4;
  Collectable *this_00;
  string *extraout_x0;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_70;
  int local_6c;
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  Vec3 aVStack_58 [16];
  Vec3 aVStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  DVec3 aDStack_28 [16];
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  BoardTransforms::GridToBoardSpace(aPStack_18);
  EATextSquish::Vec3::Vec3(aVStack_58,(float)local_70,(float)local_6c,0.0);
  pickRandomSeedPacket(this);
  cVar1 = FUN_03d27f38(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0x118));
  iVar5 = 5;
  if (cVar1 == '\0') {
    iVar5 = 3;
  }
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  pPVar3 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  lVar4 = PlantType::GetProps(pPVar3);
  if (*(int *)(lVar4 + 0x2c) < iVar5) {
    pPVar3 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    lVar4 = PlantType::GetProps(pPVar3);
    iVar5 = *(int *)(lVar4 + 0x2c);
  }
  psVar2 = *(string **)(gLawnApp + 0x9f0);
  std::string::string((string *)aPStack_18,"vasebreaker_packet");
  this_00 = (Collectable *)Board::AddCollectableWithDefaultMotion(psVar2,(SexyVector3 *)aPStack_18);
  std::string::~string((string *)aPStack_18);
  nop();
  nop();
  CollectableSeedPacket::SetSeedType(extraout_x0);
  FUN_03d27f3c(extraout_x0 + 0x208,iVar5);
  uVar7 = 0;
  uVar6 = 0;
  EATextSquish::Vec3::Vec3(aVStack_48,0.0,0.0,0.0);
  local_38 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_58,(SexyVector3 *)aVStack_48);
  local_34 = uVar6;
  local_30 = uVar7;
  DVec3::DVec3(aDStack_28);
  DVec3::DVec3((DVec3 *)aPStack_18);
  CalculateTossVelocity
            ((SexyVector3 *)aVStack_58,(SexyVector3 *)&local_38,40.0,0.6,(SexyVector3 *)aDStack_28,
             (SexyVector3 *)aPStack_18);
  Collectable::SetMotionNewtonian(this_00,(SexyVector3 *)aDStack_28,(SexyVector3 *)aPStack_18,true);
  Collectable::SetKeepOnBoard(this_00,true);
  NewPVPHealthBar::FlashDamage((NewPVPHealthBar *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  std::string::~string(asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxSeedPacket::onActivated() */

void __thiscall GridItemHeianBoxSeedPacket::onActivated(GridItemHeianBoxSeedPacket *this)

{
  GridItemHeianBoxSeedPacketProps *pGVar1;
  float fVar2;
  
  triggerSeedPacket(this);
  fVar2 = (float)PVZ_T();
  pGVar1 = GridItem::GetProps<GridItemHeianBoxSeedPacketProps>();
  *(float *)(this + 0x1ac) = fVar2 + *(float *)(pGVar1 + 0xe8);
  return;
}


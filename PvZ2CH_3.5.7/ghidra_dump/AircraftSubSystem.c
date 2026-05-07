// Class: AircraftSubSystem


/* AircraftSubSystem::onAircraftDownMoveDone(BoardEntity*) */

void AircraftSubSystem::onAircraftDownMoveDone(BoardEntity *param_1)

{
  return;
}


/* AircraftSubSystem::onAircraftUpMoveDone(BoardEntity*) */

void AircraftSubSystem::onAircraftUpMoveDone(BoardEntity *param_1)

{
  return;
}


/* AircraftSubSystem::~AircraftSubSystem() */

void __thiscall AircraftSubSystem::~AircraftSubSystem(AircraftSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0676b3b0;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* AircraftSubSystem::~AircraftSubSystem() */

void __thiscall AircraftSubSystem::~AircraftSubSystem(AircraftSubSystem *this)

{
  ~AircraftSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AircraftSubSystem::StaticClassInit() */

void AircraftSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"AircraftSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5c518,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AircraftSubSystem::StaticGetClass() */

long * AircraftSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AircraftSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AircraftSubSystem::GetClass() const */

long * AircraftSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"AircraftSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AircraftSubSystem::AircraftSubSystem() */

void __thiscall AircraftSubSystem::AircraftSubSystem(AircraftSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0676b3b0;
  return;
}


/* AircraftSubSystem::StaticNew() */

AircraftSubSystem * AircraftSubSystem::StaticNew(void)

{
  AircraftSubSystem *this;
  
  this = ::operator_new(0x10);
  AircraftSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AircraftSubSystem::LaunchAircraft(Sexy::SexyVector3 const&, int, int, int, float, float, float)
    */

void __thiscall
AircraftSubSystem::LaunchAircraft
          (AircraftSubSystem *this,SexyVector3 *param_1,int param_2,int param_3,int param_4,
          float param_5,float param_6,float param_7)

{
  int iVar1;
  int iVar2;
  RtObject *pRVar3;
  BossAircraft *pBVar4;
  AircraftLine *this_00;
  code *pcVar5;
  Board *pBVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_28;
  float local_24;
  undefined4 local_20;
  string asStack_18 [16];
  long local_8;
  
  iVar2 = param_4 - param_3;
  local_8 = ___stack_chk_guard;
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"aircraft");
  pRVar3 = (RtObject *)Board::AddGridItem(pBVar6,asStack_18,0,param_4,1);
  pBVar4 = Sexy::RtObject::Cast<BossAircraft>(pRVar3);
  std::string::~string(asStack_18);
  nop();
  BossAircraft::BossAircraftInitialize((BossAircraft *)param_5,param_6,pBVar4,0,param_2);
  DVec3::DVec3((DVec3 *)&local_28);
  local_28 = *(float *)param_1 - 100.0;
  if (iVar2 < 3) {
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar1 = iVar1 * param_4 + 0xa5;
  }
  else {
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar1 = iVar1 * param_4 + 0xb4;
  }
  local_24 = (float)iVar1;
  local_20 = 0;
  (**(code **)(*(long *)pBVar4 + 0x78))(pBVar4,(DVec3 *)&local_28);
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"aircraft");
  pRVar3 = (RtObject *)Board::AddGridItem(pBVar6,asStack_18,0,param_3,1);
  pBVar4 = Sexy::RtObject::Cast<BossAircraft>(pRVar3);
  std::string::~string(asStack_18);
  nop();
  BossAircraft::BossAircraftInitialize((BossAircraft *)param_5,param_6,pBVar4,1,param_2);
  local_28 = *(float *)param_1 - 100.0;
  if (iVar2 < 3) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_24 = (float)(iVar2 * param_3 + 0xa8);
    local_20 = 0;
    (**(code **)(*(long *)pBVar4 + 0x78))(pBVar4,(DVec3 *)&local_28);
    this_00 = GameObject::Create<AircraftLine>();
    AircraftLine::AircraftLineInitialize(this_00,param_2,true,param_7);
    fVar7 = *(float *)param_1;
    fVar9 = *(float *)(param_1 + 4);
    pcVar5 = *(code **)(*(long *)this_00 + 0x78);
    fVar8 = 145.0;
  }
  else {
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_24 = (float)(iVar1 * param_3 + 0xaa);
    local_20 = 0;
    (**(code **)(*(long *)pBVar4 + 0x78))(pBVar4,(DVec3 *)&local_28);
    this_00 = GameObject::Create<AircraftLine>();
    AircraftLine::AircraftLineInitialize(this_00,param_2,iVar2 < 3,param_7);
    fVar7 = *(float *)param_1;
    fVar9 = *(float *)(param_1 + 4);
    pcVar5 = *(code **)(*(long *)this_00 + 0x78);
    fVar8 = 142.0;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,fVar7 - 97.0,fVar9 - fVar8,*(float *)(param_1 + 8));
  (*pcVar5)(this_00,asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


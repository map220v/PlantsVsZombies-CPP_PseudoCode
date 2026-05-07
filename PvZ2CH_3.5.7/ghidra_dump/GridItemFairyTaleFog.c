// Class: GridItemFairyTaleFog


/* GridItemFairyTaleFog::CalcRenderOrder() const */

void __thiscall GridItemFairyTaleFog::CalcRenderOrder(GridItemFairyTaleFog *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(600000,0,uVar1);
  return;
}


/* non-virtual thunk to GridItemFairyTaleFog::CalcRenderOrder() const */

void __thiscall GridItemFairyTaleFog::CalcRenderOrder(GridItemFairyTaleFog *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::StaticClassInit() */

void GridItemFairyTaleFog::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FogMovingData");
    (*pcVar3)(plVar2,asStack_10,FUN_04eca7dc,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GridItemFairyTaleFog");
    (*pcVar3)(plVar2,asStack_10,FUN_04ecc870,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFairyTaleFog::StaticGetClass() */

long * GridItemFairyTaleFog::StaticGetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFairyTaleFog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFairyTaleFog::GetClass() const */

long * GridItemFairyTaleFog::GetClass(void)

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
  uVar2 = GridItemBoardEntityConditionTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFairyTaleFog",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFairyTaleFog::GridItemFairyTaleFog() */

void __thiscall GridItemFairyTaleFog::GridItemFairyTaleFog(GridItemFairyTaleFog *this)

{
  undefined4 uVar1;
  
  GridItemBoardEntityConditionTarget::GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  *(undefined ***)this = &PTR_GetClass_069f72d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFairyTaleFog_069f75d8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1e8) = uVar1;
  FogMovingData::FogMovingData((FogMovingData *)(this + 0x1f0));
  return;
}


/* GridItemFairyTaleFog::StaticNew() */

GridItemFairyTaleFog * GridItemFairyTaleFog::StaticNew(void)

{
  GridItemFairyTaleFog *this;
  
  this = ::operator_new(0x200);
  GridItemFairyTaleFog(this);
  return this;
}


/* GridItemFairyTaleFog::GetCantPlantReason() const */

undefined8 GridItemFairyTaleFog::GetCantPlantReason(void)

{
  return 0x6f;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::canFogShieldActivated(Zombie*) */

void __thiscall
GridItemFairyTaleFog::canFogShieldActivated(GridItemFairyTaleFog *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  string *this_00;
  AttachedEffect *this_01;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = 1;
  this_00 = (string *)Zombie::GetAttachedEffects(param_1);
  std::string::string(asStack_10,"fogshield");
  cVar1 = GameObjectDictionary::Contains(this_00);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"fogshield");
    this_01 = (AttachedEffect *)
              GameObjectDictionary::FindOrCreate((GameObjectDictionary *)this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_20,"fog_shield_die_1");
    cVar1 = AttachedEffect::IsAnimActive(this_01,asStack_20);
    if (cVar1 == '\0') {
      std::string::string(asStack_18,"fog_shield_die_2");
      cVar1 = AttachedEffect::IsAnimActive(this_01,asStack_18);
      bVar2 = 0;
      if (cVar1 == '\0') {
        std::string::string(asStack_10,"fog_shield_die_3");
        bVar2 = AttachedEffect::IsAnimActive(this_01,asStack_10);
        bVar2 = bVar2 ^ 1;
        std::string::~string(asStack_10);
        nop();
      }
      std::string::~string(asStack_18);
      nop();
    }
    else {
      bVar2 = 0;
    }
    std::string::~string(asStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* GridItemFairyTaleFog::tryOverrideCondition(Zombie*, ZombieConditions) */

void __thiscall
GridItemFairyTaleFog::tryOverrideCondition(GridItemFairyTaleFog *this,Zombie *param_1,int param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  
  if (param_3 == 0x6c) {
    cVar1 = Zombie::HasCondition(param_1,0x6a);
    if (cVar1 != '\0') {
      Zombie::EndCondition(param_1,0x6a);
    }
    cVar1 = Zombie::HasCondition(param_1,0x6b);
    if (cVar1 != '\0') {
      Zombie::EndCondition(param_1,0x6b);
    }
    cVar1 = canFogShieldActivated(this,param_1);
    if (cVar1 != '\0') {
      auVar2 = PVZ_EOT();
      Zombie::ApplyCondition((Zombie *)auVar2,0,param_1,0x6c,1);
      return;
    }
  }
  else if (param_3 == 0x6b) {
    cVar1 = Zombie::HasCondition(param_1,0x6c);
    if (cVar1 == '\0') {
      cVar1 = Zombie::HasCondition(param_1,0x6a);
      if (cVar1 != '\0') {
        Zombie::EndCondition(param_1,0x6a);
      }
      cVar1 = canFogShieldActivated(this,param_1);
      if (cVar1 != '\0') {
        auVar2 = PVZ_EOT();
        Zombie::ApplyCondition((Zombie *)auVar2,0,param_1,0x6b,1);
        return;
      }
    }
  }
  else if (param_3 == 0x6a) {
    cVar1 = Zombie::HasCondition(param_1,0x6b);
    if (cVar1 == '\0') {
      cVar1 = Zombie::HasCondition(param_1,0x6c);
      if (cVar1 == '\0') {
        cVar1 = canFogShieldActivated(this,param_1);
        if (cVar1 != '\0') {
          auVar2 = PVZ_EOT();
          Zombie::ApplyCondition((Zombie *)auVar2,0,param_1,0x6a,1);
          return;
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::disappear() */

void __thiscall GridItemFairyTaleFog::disappear(GridItemFairyTaleFog *this)

{
  int iVar1;
  int iVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point(aPStack_10,iVar1 + *(int *)(this + 0x1f0),iVar2);
  (**(code **)(*(long *)this + 0x2d0))(*(undefined4 *)(this + 500),this,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFairyTaleFog::~GridItemFairyTaleFog() */

void __thiscall GridItemFairyTaleFog::~GridItemFairyTaleFog(GridItemFairyTaleFog *this)

{
  *(undefined ***)this = &PTR_GetClass_069f72d0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFairyTaleFog_069f75d8;
  GridItemBoardEntityConditionTarget::~GridItemBoardEntityConditionTarget
            ((GridItemBoardEntityConditionTarget *)this);
  return;
}


/* non-virtual thunk to GridItemFairyTaleFog::~GridItemFairyTaleFog() */

void __thiscall GridItemFairyTaleFog::~GridItemFairyTaleFog(GridItemFairyTaleFog *this)

{
  ~GridItemFairyTaleFog(this + -0x10);
  return;
}


/* GridItemFairyTaleFog::~GridItemFairyTaleFog() */

void __thiscall GridItemFairyTaleFog::~GridItemFairyTaleFog(GridItemFairyTaleFog *this)

{
  ~GridItemFairyTaleFog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemFairyTaleFog::~GridItemFairyTaleFog() */

void __thiscall GridItemFairyTaleFog::~GridItemFairyTaleFog(GridItemFairyTaleFog *this)

{
  ~GridItemFairyTaleFog(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::GetPlayAnimName() */

void __thiscall GridItemFairyTaleFog::GetPlayAnimName(GridItemFairyTaleFog *this)

{
  bool bVar1;
  long lVar2;
  string *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"fog_white_idle1");
  nop();
  std::string::string(asStack_48,"fog_white_idle2");
  nop();
  std::string::string(asStack_40,"fog_white_idle3");
  nop();
  std::string::string(asStack_38,"fog_blue_idle1");
  nop();
  std::string::string(asStack_30,"fog_blue_idle2");
  nop();
  std::string::string(asStack_28,"fog_blue_idle3");
  nop();
  std::string::string(asStack_20,"fog_purple_idle1");
  nop();
  std::string::string(asStack_18,"fog_purple_idle2");
  nop();
  std::string::string(asStack_10,"fog_purple_idle3");
  nop();
  GridItem::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  bVar1 = std::operator==((string *)(lVar2 + 8),"fairy_tale_fog_lvl1");
  if (!bVar1) {
    GridItem::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::operator==((string *)(lVar2 + 8),"fairy_tale_fog_lvl2");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
  this_00 = (string *)&local_8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  Sexy::Rand(3);
  FUN_05475d88();
  do {
    this_00 = this_00 + -8;
    std::string::~string(this_00);
  } while (this_00 != asStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::drawFogAnim(Sexy::Graphics*) */

void __thiscall GridItemFairyTaleFog::drawFogAnim(GridItemFairyTaleFog *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  PopAnimRig *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  RtMixedPtrBase aRStack_58 [16];
  int local_48 [2];
  GraphicsAutoState aGStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  else {
    GridItem::GetGridLocation();
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    fVar4 = (float)FUN_04ecacbc(*puVar3);
    fVar5 = (float)FUN_04ecacbc(puVar3[1]);
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar14 = (float)puVar3[2];
    (**(code **)(*(long *)this + 0xd0))(local_48,this);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar12 = 0.0;
    dVar10 = (double)FUN_04ecaccc(((double)local_48[0] + -1.0) * 0.5 * (double)iVar2);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar13 = fVar12;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar16 = *(float *)(param_1 + 0x18);
    fVar15 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar16,fVar13 * fVar15);
    FUN_04eca6a0((float)(int)((double)(int)fVar4 + dVar10),(float)(int)(fVar5 - fVar14 * fVar11),
                 auStack_28,auStack_1c);
    uVar8 = FUN_04ecacbc(-(fVar7 * fVar16 * fVar6));
    uVar9 = FUN_04ecacbc(-(fVar13 * fVar15 * fVar12));
    FUN_04eca6a0(uVar8,uVar9,auStack_28,auStack_1c);
    GridItemAnimation::GetAnimRig();
    this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    PopAnimRig::Draw(this_00,param_1,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::onDraw(Sexy::Graphics*) */

void __thiscall GridItemFairyTaleFog::onDraw(GridItemFairyTaleFog *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  PopAnimRig *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  RtMixedPtrBase aRStack_58 [16];
  int aiStack_48 [2];
  GraphicsAutoState aGStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  else {
    GridItem::GetGridLocation();
    puVar3 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    fVar4 = (float)FUN_04ecacbc(*puVar3);
    fVar5 = (float)FUN_04ecacbc(puVar3[1]);
    fVar11 = *(float *)(param_1 + 0x1c);
    fVar14 = (float)puVar3[2];
    (**(code **)(*(long *)this + 0xd0))(aiStack_48,this);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar12 = 0.0;
    dVar10 = (double)FUN_04ecaccc(((double)aiStack_48[0] + -1.0) * 0.5 * (double)iVar2);
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    (**(code **)(*(long *)this + 0xf8))(this,param_1);
    fVar6 = (float)(**(code **)(*(long *)this + 0x298))(this);
    fVar13 = fVar12;
    fVar7 = (float)(**(code **)(*(long *)this + 0x2a0))(this);
    fVar16 = *(float *)(param_1 + 0x18);
    fVar15 = *(float *)(param_1 + 0x1c);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30,true);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar7 * fVar16,fVar13 * fVar15);
    FUN_04eca6a0((float)(int)((double)(int)fVar4 + dVar10),(float)(int)(fVar5 - fVar14 * fVar11),
                 auStack_28,auStack_1c);
    uVar8 = FUN_04ecacbc(-(fVar7 * fVar16 * fVar6));
    uVar9 = FUN_04ecacbc(-(fVar13 * fVar15 * fVar12));
    FUN_04eca6a0(uVar8,uVar9,auStack_28,auStack_1c);
    GridItemAnimation::GetAnimRig();
    this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    PopAnimRig::Draw(this_00,param_1,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::appear() */

void __thiscall GridItemFairyTaleFog::appear(GridItemFairyTaleFog *this)

{
  int iVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetPlayAnimName(this);
  GridItemAnimation::GetAnimRig();
  pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,asStack_48,0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point((Point *)aRStack_40,iVar1 - *(int *)(this + 0x1f0),iVar2);
  (**(code **)(*(long *)this + 0x2d0))(*(undefined4 *)(this + 500),this,aRStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::setState(GridItemFairyTaleFogState) */

void __thiscall GridItemFairyTaleFog::setState(GridItemFairyTaleFog *this,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  char *__s;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 1:
    GridItem::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    bVar1 = std::operator==((string *)(lVar2 + 8),"fairy_tale_fog_lvl1");
    if (bVar1) {
      std::string::string(asStack_50,"fog_white_idle");
      nop();
    }
    else {
      GridItem::GetType();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      bVar1 = std::operator==((string *)(lVar2 + 8),"fairy_tale_fog_lvl2");
      if (bVar1) {
        __s = "fog_blue_idle";
      }
      else {
        __s = "fog_purple_idle";
      }
      std::string::string(asStack_50,__s);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
    param_2 = 2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    GridItemAnimation::GetAnimRig();
    pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar3,asStack_50,0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    std::string::~string(asStack_50);
    break;
  case 3:
    (**(code **)(*(long *)this + 0x48))(this);
    break;
  case 4:
    appear(this);
    break;
  case 5:
    disappear(this);
  }
  *(undefined4 *)(this + 0x1ec) = param_2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFairyTaleFog::DoAppear() */

void __thiscall GridItemFairyTaleFog::DoAppear(GridItemFairyTaleFog *this)

{
  setState(this,4);
  return;
}


/* GridItemFairyTaleFog::DoDisappear() */

void __thiscall GridItemFairyTaleFog::DoDisappear(GridItemFairyTaleFog *this)

{
  setState(this,5);
  return;
}


/* GridItemFairyTaleFog::onGridItemInitialize() */

void __thiscall GridItemFairyTaleFog::onGridItemInitialize(GridItemFairyTaleFog *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1e8) = uVar1;
  return;
}


/* GridItemFairyTaleFog::ResetTimer() */

void __thiscall GridItemFairyTaleFog::ResetTimer(GridItemFairyTaleFog *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1e8) = uVar1;
  setState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::isZombieTypeBlacklisted(std::string const&) */

void __thiscall
GridItemFairyTaleFog::isZombieTypeBlacklisted(GridItemFairyTaleFog *this,string *param_1)

{
  char cVar1;
  GridItemFairyTaleFogProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemFairyTaleFogProps>();
  local_18 = FUN_04ecc7d0(*(undefined8 *)(pGVar2 + 0x150));
  local_10 = FUN_04ecc820(*(undefined8 *)(pGVar2 + 0x158));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_04ecdb1c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    cVar1 = std::operator==(asStack_20,param_1);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_04ecdb1c;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::updatePosition() */

void GridItemFairyTaleFog::updatePosition(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItemAnimation *in_x0;
  GridItemFairyTaleFogProps *pGVar4;
  AttachedEffect *this;
  StandaloneEffect *this_00;
  long lVar5;
  float fVar6;
  float fVar7;
  float in_s1;
  float fVar8;
  undefined4 in_s2;
  float local_38;
  float local_34;
  float local_28;
  undefined4 local_20;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_38);
  cVar1 = (**(code **)(*(long *)in_x0 + 0x2f0))();
  if (cVar1 == '\0') {
    fVar6 = (float)(**(code **)(*(long *)in_x0 + 0x2e8))();
    lVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)in_x0);
    local_20 = *(undefined4 *)(lVar5 + 8);
    local_28 = fVar6;
    iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar6);
    iVar3 = BoardTransforms::BoardSpaceToGridYUnbounded(in_s1);
    Sexy::Point::Point((Point *)local_18,iVar2,iVar3);
    GridItem::SetGridLocationUnbounded();
    (**(code **)(*(long *)in_x0 + 0x78))();
    fVar8 = *(float *)(in_x0 + 0x1c);
    fVar7 = (float)FUN_04ecabe0(*(undefined4 *)(in_x0 + 0x18),fVar8,*(undefined4 *)(in_x0 + 0x20));
    in_s2 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)local_18,fVar6 - fVar7,in_s1 - fVar8,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)local_18);
    Sexy::FastCurve::SetOutRange((FastCurve *)local_18,local_38,local_34);
    FUN_04eca788(local_18[0],in_x0 + 0x1a8);
  }
  else if (*(int *)(in_x0 + 0x1ec) - 4U < 2) {
    setState();
  }
  cVar1 = GridItemAnimation::HasLinkedAnimRig(in_x0);
  if (cVar1 != '\0') {
    pGVar4 = GridItem::GetProps<GridItemFairyTaleFogProps>();
    this = (AttachedEffect *)GridItemAnimation::GetLinkedEffect(in_x0);
    if (this != (AttachedEffect *)0x0) {
      this_00 = (StandaloneEffect *)AttachedEffect::GetEffect(this);
      local_18[0] = Sexy::SexyVector3::operator+
                              ((SexyVector3 *)(pGVar4 + 0xc0),(SexyVector3 *)&local_38);
      local_10 = in_s2;
      StandaloneEffect::SetAttachmentOffset(this_00,(SexyVector3 *)local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::applyShield() */

void __thiscall GridItemFairyTaleFog::applyShield(GridItemFairyTaleFog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  GridItemFairyTaleFogProps *pGVar11;
  long *plVar12;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar13;
  float fVar14;
  undefined8 local_38;
  undefined8 local_30 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar8 = FUN_04eca780(*(undefined4 *)(this + 0x130));
  pGVar11 = GridItem::GetProps<GridItemFairyTaleFogProps>();
  iVar10 = *(int *)(pGVar11 + 0x13c);
  iVar9 = FUN_04eca784(*(undefined4 *)(this + 0x134));
  pGVar11 = GridItem::GetProps<GridItemFairyTaleFogProps>();
  iVar1 = *(int *)(pGVar11 + 0x140);
  pGVar11 = GridItem::GetProps<GridItemFairyTaleFogProps>();
  iVar2 = *(int *)(pGVar11 + 0x138);
  pGVar11 = GridItem::GetProps<GridItemFairyTaleFogProps>();
  iVar3 = *(int *)(pGVar11 + 0x13c);
  pGVar11 = GridItem::GetProps<GridItemFairyTaleFogProps>();
  iVar4 = *(int *)(pGVar11 + 0x140);
  pGVar11 = GridItem::GetProps<GridItemFairyTaleFogProps>();
  Sexy::Insets::Insets
            ((Insets *)local_30,iVar8 - iVar10,iVar9 - iVar1,iVar2 + 1 + iVar3,
             iVar4 + 1 + *(int *)(pGVar11 + 0x144));
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)local_30);
  pGVar11 = GridItem::GetProps<GridItemFairyTaleFogProps>();
  uVar5 = *(undefined4 *)(pGVar11 + 0x168);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar6 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar6) {
    plVar12 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    iVar10 = FUN_04eca77c(*(undefined4 *)(*plVar12 + 0x24));
    if (iVar10 == 2) {
      nop();
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      cVar7 = isZombieTypeBlacklisted(this,(string *)(lVar13 + 8));
      if ((((cVar7 == '\0') &&
           (cVar7 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar7 == '\0')) &&
          (cVar7 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar7 == '\0')) &&
         (((fVar14 = (float)FUN_04eca7c4(*(undefined4 *)(this_00 + 0x280)), 0.0 < fVar14 &&
           (cVar7 = Zombie::HasCondition(this_00,uVar5), cVar7 == '\0')) &&
          (cVar7 = FUN_04ecbdec(*(undefined4 *)(this_00 + 0x28)), cVar7 == '\0')))) {
        tryOverrideCondition(this,this_00,uVar5);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFairyTaleFog::onUpdate() */

void __thiscall GridItemFairyTaleFog::onUpdate(GridItemFairyTaleFog *this)

{
  GridItemFairyTaleFogProps *pGVar1;
  float fVar2;
  float fVar3;
  
  GridItemBoardEntityConditionTarget::onUpdate((GridItemBoardEntityConditionTarget *)this);
  if (*(int *)(this + 0x1ec) == 2) {
    fVar2 = (float)PVZ_T();
    fVar3 = *(float *)(this + 0x1e8);
    pGVar1 = GridItem::GetProps<GridItemFairyTaleFogProps>();
    if (*(float *)(pGVar1 + 0x148) < fVar2 - fVar3) {
      setState(this,3);
      applyShield(this);
      return;
    }
  }
  applyShield(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFairyTaleFog::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemFairyTaleFog::GatherPlantingRestrictions
          (GridItemFairyTaleFog *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GetCantPlantReason();
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


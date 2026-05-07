// Class: ComponentLinearBurst


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::StaticClassInit() */

void ComponentLinearBurst::StaticClassInit(void)

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
    std::string::string(asStack_10,"DamageWithWeight");
    (*pcVar3)(plVar2,asStack_10,FUN_03b99a9c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentLinearBurstProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03b9a474,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentLinearBurst");
    (*pcVar3)(plVar2,asStack_10,FUN_03b99c94,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentLinearBurst::StaticGetClass() */

long * ComponentLinearBurst::StaticGetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentLinearBurst",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentLinearBurst::GetClass() const */

long * ComponentLinearBurst::GetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentLinearBurst",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentLinearBurst::accountForDealingDamageEachColumnDraw(DamageInfo&) */

void __thiscall
ComponentLinearBurst::accountForDealingDamageEachColumnDraw
          (ComponentLinearBurst *this,DamageInfo *param_1)

{
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) / (float)*(int *)(this + 0x40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::calcCurrentDamageArea() */

void ComponentLinearBurst::calcCurrentDamageArea(void)

{
  char cVar1;
  long in_x0;
  long lVar2;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (cVar1 == '\0') {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    fVar5 = *(float *)(lVar2 + 0x1c);
    fVar3 = (float)FUN_03b99378(*(undefined4 *)(lVar2 + 0x18),fVar5,*(undefined4 *)(lVar2 + 0x20));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(in_x0 + 0x48));
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 != '\0') {
      fVar4 = (float)NewPVPUtils::GetBoardScale();
      local_10 = (int)(fVar4 * (float)local_10);
      local_c = (int)(fVar4 * (float)local_c);
      local_18 = (int)(fVar4 * (float)local_18);
      local_14 = (int)(fVar4 * (float)local_14);
    }
    local_18 = (int)((float)local_18 + fVar3);
    local_14 = (int)((float)local_14 + fVar5);
    Sexy::Insets::Insets(in_x8,(Insets *)&local_18);
  }
  else {
    Sexy::Insets::Insets(in_x8);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::getEntitiesInArea(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&, BoardEntityTypeFlag) */

void __thiscall
ComponentLinearBurst::getEntitiesInArea(undefined8 param_1_00,undefined8 param_1,undefined4 param_3)

{
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  calcCurrentDamageArea();
  EntityFinder::GetEntitiesInRectangle(param_1,param_3,auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentLinearBurst::GetPlantsInArea(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&)
    */

void __thiscall ComponentLinearBurst::GetPlantsInArea(ComponentLinearBurst *this,vector *param_1)

{
  getEntitiesInArea(this,param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::GetGridItemsInArea(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall ComponentLinearBurst::GetGridItemsInArea(ComponentLinearBurst *this,vector *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getEntitiesInArea(this,param_1,4);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  TargetInfoProps::FilterUntargetableGridItems((TargetInfoProps *)(this + 0x60),param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::GetZombiesInArea(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&)
    */

void __thiscall ComponentLinearBurst::GetZombiesInArea(ComponentLinearBurst *this,vector *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getEntitiesInArea(this,param_1,2);
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  TargetInfoProps::FilterUntargetableZombies((TargetInfoProps *)(this + 0x60),param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::calcCurrentAnimationArea() */

void ComponentLinearBurst::calcCurrentAnimationArea(void)

{
  char cVar1;
  long in_x0;
  Insets *in_x8;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (cVar1 == '\0') {
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    BoardEntity::CalcGridPosition();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::Insets::Insets((Insets *)&local_18,(Insets *)(in_x0 + 0x38));
    local_18 = local_18 + local_20;
    local_14 = local_14 + local_1c;
    Sexy::Insets::Insets(in_x8,(Insets *)&local_18);
  }
  else {
    Sexy::Insets::Insets(in_x8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentLinearBurst::calculateWhichColumnToEffect() */

void ComponentLinearBurst::calculateWhichColumnToEffect(void)

{
  int iVar1;
  long in_x0;
  int *in_x8;
  
  calcCurrentAnimationArea();
  iVar1 = *(int *)(in_x0 + 0x30);
  in_x8[2] = 1;
  *in_x8 = *in_x8 + iVar1;
  return;
}


/* ComponentLinearBurst::shouldAdvanceColumn() */

bool __thiscall ComponentLinearBurst::shouldAdvanceColumn(ComponentLinearBurst *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x2c) <= fVar1) {
    return *(int *)(this + 0x30) < *(int *)(this + 0x40) + -1;
  }
  return false;
}


/* ComponentLinearBurst::advanceColumn() */

void ComponentLinearBurst::advanceColumn(void)

{
  long in_x0;
  float fVar1;
  
  *(int *)(in_x0 + 0x30) = *(int *)(in_x0 + 0x30) + 1;
  fVar1 = (float)PVZ_T();
  *(float *)(in_x0 + 0x2c) = fVar1 + *(float *)(in_x0 + 0x58);
  calculateWhichColumnToEffect();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::createEffectAt(Sexy::TRect<int>, std::string const&) */

void __thiscall
ComponentLinearBurst::createEffectAt(undefined8 param_1,BoardTransforms *param_2,string *param_3)

{
  char cVar1;
  int iVar2;
  Effect_PopAnim *this;
  PopAnim *pPVar3;
  TRect *extraout_x1;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_3);
  if (cVar1 == '\0') {
    BoardTransforms::GridRectToBoardSpaceRect(param_2,extraout_x1);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_28,(TPoint *)aRStack_20);
    EATextSquish::Vec3::Vec3(aVStack_18,(float)local_28,(float)local_24,0.0);
    iVar2 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(param_2 + 4),1);
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(param_3);
    pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(this,pPVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Effect_PopAnim::SetCentered(this,true);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_18,iVar2);
    std::string::string((string *)aRStack_20,"animation");
    Effect_PopAnim::PlaySingleAnimation(this,aRStack_20,2);
    std::string::~string((string *)aRStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::createValidEffectsFor(Sexy::TRect<int>, std::string) */

void __thiscall
ComponentLinearBurst::createValidEffectsFor
          (ComponentLinearBurst *this,Insets *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  iVar1 = *(int *)(param_2 + 0xc);
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(param_2 + 0xc) = 1;
  if (0 < iVar1) {
    iVar3 = *(int *)(param_2 + 4);
    iVar4 = 0;
    do {
      while (cVar2 = Board::RowCanHaveZombies(*(Board **)(gLawnApp + 0x9f0),iVar3), cVar2 != '\0') {
        iVar4 = iVar4 + 1;
        Sexy::Insets::Insets(aIStack_18,param_2);
        createEffectAt(this,aIStack_18,param_3);
        iVar3 = *(int *)(param_2 + 4) + 1;
        *(int *)(param_2 + 4) = iVar3;
        if (iVar4 == iVar1) goto LAB_03b9a168;
      }
      iVar4 = iVar4 + 1;
      iVar3 = *(int *)(param_2 + 4) + 1;
      *(int *)(param_2 + 4) = iVar3;
    } while (iVar4 != iVar1);
  }
LAB_03b9a168:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::StartPulse() */

void __thiscall ComponentLinearBurst::StartPulse(ComponentLinearBurst *this)

{
  float fVar1;
  string asStack_30 [8];
  Insets aIStack_28 [8];
  undefined4 local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_T();
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(float *)(this + 0x2c) = fVar1 + *(float *)(this + 0x5c);
  calcCurrentAnimationArea();
  local_20 = 1;
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  FUN_05475d88(asStack_30,this + 0xa8);
  createValidEffectsFor(this,aIStack_18,asStack_30);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentLinearBurst::ComponentLinearBurst() */

void __thiscall ComponentLinearBurst::ComponentLinearBurst(ComponentLinearBurst *this)

{
  ComponentBase::ComponentBase((ComponentBase *)this);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_GetClass_067365f0;
  ComponentLinearBurstProps::ComponentLinearBurstProps((ComponentLinearBurstProps *)(this + 0x38));
  return;
}


/* ComponentLinearBurst::StaticNew() */

ComponentLinearBurst * ComponentLinearBurst::StaticNew(void)

{
  ComponentLinearBurst *this;
  
  this = ::operator_new(0xd0);
  ComponentLinearBurst(this);
  return this;
}


/* ComponentLinearBurst::SetProps(ComponentLinearBurstProps const&) */

void __thiscall
ComponentLinearBurst::SetProps(ComponentLinearBurst *this,ComponentLinearBurstProps *param_1)

{
  undefined4 uVar1;
  
  ComponentLinearBurstProps::operator=((ComponentLinearBurstProps *)(this + 0x38),param_1);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::createDamageInfo() */

void ComponentLinearBurst::createDamageInfo(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ComponentLinearBurst *in_x0;
  int *piVar6;
  long lVar7;
  RtObject *pRVar8;
  Plant *pPVar9;
  DamageInfo *in_x8;
  float fVar10;
  undefined8 local_98;
  RtMixedPtrBase aRStack_90 [8];
  RtMixedPtrBase aRStack_88 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_80 [48];
  undefined8 local_50 [9];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_80);
  iVar5 = 0;
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0xb8));
  do {
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(in_x0 + 0xb8));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_50);
    if (!bVar2) {
      iVar5 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_80);
      lVar7 = FUN_03b99204(*(undefined8 *)(in_x0 + 0xb8),(long)iVar5);
      DamageInfoProps::DamageInfoProps((DamageInfoProps *)local_50,(DamageInfoProps *)(lVar7 + 8));
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      DamageInfoProps::BuildDamageInfo((RtWeakPtr<Sexy::ResourceInfo> *)local_50,aRStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      accountForDealingDamageEachColumnDraw(in_x0,in_x8);
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_90);
      if (cVar3 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90)
        ;
      }
      else {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar8 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
        pPVar9 = Sexy::RtObject::Cast<Plant>(pRVar8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90)
        ;
        if (pPVar9 != (Plant *)0x0) {
          Sexy::ResourceInfoTypes::FontRes::GetFont();
          pRVar8 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
          pPVar9 = Sexy::RtObject::Cast<Plant>(pRVar8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
          fVar10 = (float)Plant::GetTotalDamageRate(pPVar9);
          *(float *)(in_x8 + 8) = *(float *)(in_x8 + 8) * fVar10;
        }
      }
      DamageInfoProps::~DamageInfoProps((DamageInfoProps *)local_50);
      ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_80);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    if (*(int *)(lVar7 + 4) == 1) {
LAB_03b9b00c:
      piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
      ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_80,iVar5,*piVar6);
    }
    else {
      Sexy::ResourceInfoTypes::FontRes::GetFont();
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_88);
      bVar2 = false;
      if (cVar3 != '\0') {
        lVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
        iVar1 = *(int *)(lVar7 + 4);
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
        iVar4 = FUN_03b991f4(*(undefined4 *)(lVar7 + 0x50));
        bVar2 = iVar1 == iVar4;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      if (bVar2) goto LAB_03b9b00c;
    }
    iVar5 = iVar5 + 1;
    FUN_03b99edc((exception_ptr *)&local_98);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::damageEntities() */

void __thiscall ComponentLinearBurst::damageEntities(ComponentLinearBurst *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  long extraout_x0;
  long *extraout_x0_00;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  createDamageInfo();
  GetGridItemsInArea(this,(vector *)avStack_80);
  GetZombiesInArea(this,(vector *)avStack_80);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  while( true ) {
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    (**(code **)(*(long *)*puVar3 + 0x110))((long *)*puVar3,aDStack_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_88);
  if ((cVar2 == '\0') || (*(int *)(this + 0x30) != *(int *)(this + 0x40) + -1)) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
    Sexy::ResourceInfoTypes::FontRes::GetFont();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
    if (extraout_x0 != 0) {
      nop();
      if (*(code **)(*extraout_x0_00 + 0x4a8) != PlantFramework::OnTakeDamageDoneWithComponent) {
        (**(code **)(*extraout_x0_00 + 0x4a8))();
      }
    }
  }
  DamageInfo::~DamageInfo(aDStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentLinearBurst::onUpdate() */

void __thiscall ComponentLinearBurst::onUpdate(ComponentLinearBurst *this)

{
  char cVar1;
  string asStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = shouldAdvanceColumn(this);
  if (cVar1 != '\0') {
    advanceColumn();
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    FUN_05475d88(asStack_30,this + 0xb0);
    createValidEffectsFor(this,aIStack_18,asStack_30);
    std::string::~string(asStack_30);
    damageEntities(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentLinearBurst::~ComponentLinearBurst() */

void __thiscall ComponentLinearBurst::~ComponentLinearBurst(ComponentLinearBurst *this)

{
  *(undefined ***)this = &PTR_GetClass_067365f0;
  ComponentLinearBurstProps::~ComponentLinearBurstProps((ComponentLinearBurstProps *)(this + 0x38));
  ComponentBase::~ComponentBase((ComponentBase *)this);
  return;
}


/* ComponentLinearBurst::~ComponentLinearBurst() */

void __thiscall ComponentLinearBurst::~ComponentLinearBurst(ComponentLinearBurst *this)

{
  ~ComponentLinearBurst(this);
  AK::FreeHook(this);
  return;
}


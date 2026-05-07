// Class: PlantPyreVine


/* PlantPyreVine::CanApplyPlantfood() */

byte __thiscall PlantPyreVine::CanApplyPlantfood(PlantPyreVine *this)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(long *)this + 0x180))();
  return bVar1 ^ 1;
}


/* PlantPyreVine::OnRelocationBegun() */

void __thiscall PlantPyreVine::OnRelocationBegun(PlantPyreVine *this)

{
  (**(code **)(*(long *)this + 0x380))();
  return;
}


/* PlantPyreVine::onApplyCondition(PlantConditions) */

void __thiscall PlantPyreVine::onApplyCondition(PlantPyreVine *this,int param_2)

{
  if (param_2 == 0x16) {
    (**(code **)(*(long *)this + 0x380))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::onPlantMove(Plant*) */

void __thiscall PlantPyreVine::onPlantMove(PlantPyreVine *this,Plant *param_1)

{
  code *pcVar1;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Plant **)(this + 0x10) == param_1) && (this[0x161] != (PlantPyreVine)0x0)) {
    pcVar1 = *(code **)(*(long *)this + 0x378);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
    (*pcVar1)(local_10,local_c,this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::StaticClassInit() */

void PlantPyreVine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPyreVine");
    (*pcVar2)(plVar1,asStack_10,FUN_04d2bb04,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPyreVine::StaticGetClass() */

long * PlantPyreVine::StaticGetClass(void)

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
  uVar2 = PlantVineFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPyreVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPyreVine::GetClass() const */

long * PlantPyreVine::GetClass(void)

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
  uVar2 = PlantVineFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPyreVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::removeGlowEffect(Plant*) */

void PlantPyreVine::removeGlowEffect(Plant *param_1)

{
  char cVar1;
  string *psVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(param_1 + 0x10));
  std::string::string(asStack_10,"pyrevine_booted");
  cVar1 = GameObjectDictionary::Contains(psVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    if (*(code **)(*(long *)param_1 + 0x388) != PlantFramework::ShowPersistentEffects) {
      (**(code **)(*(long *)param_1 + 0x388))(param_1,1);
    }
    psVar2 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(param_1 + 0x10));
    std::string::string(asStack_10,"pyrevine_booted");
    GameObjectDictionary::Remove(psVar2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPyreVine::skipFlamePos(Sexy::Point const&) */

undefined8 __thiscall PlantPyreVine::skipFlamePos(PlantPyreVine *this,Point *param_1)

{
  char cVar1;
  Board *this_00;
  
  if (((gLawnApp != 0) && (this_00 = *(Board **)(gLawnApp + 0x9f0), this_00 != (Board *)0x0)) &&
     ((cVar1 = Board::IsPitOfDoom(this_00,param_1), cVar1 != '\0' ||
      ((cVar1 = Board::IsSky(this_00,param_1), cVar1 != '\0' ||
       (cVar1 = Board::IsShallowWater(this_00,param_1), cVar1 != '\0')))))) {
    return 1;
  }
  return 0;
}


/* PlantPyreVine::canBeLaunchedByPlants(Zombie*) const */

byte __thiscall PlantPyreVine::canBeLaunchedByPlants(PlantPyreVine *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(param_1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  if (((((*(char *)(lVar4 + 0x3e) == '\0') ||
        (cVar1 = Zombie::HasCondition(param_1,0x27), cVar1 != '\0')) ||
       (cVar1 = Zombie::HasCondition(param_1,0x25), cVar1 != '\0')) ||
      (((cVar1 = Zombie::HasCondition(param_1,0x65), cVar1 != '\0' ||
        (cVar1 = Zombie::HasCondition(param_1,0x2c), cVar1 != '\0')) ||
       ((cVar1 = Zombie::HasCondition(param_1,0x29), cVar1 != '\0' ||
        ((cVar1 = Zombie::HasCondition(param_1,0x55), cVar1 != '\0' ||
         (cVar1 = Zombie::HasCondition(param_1,0x8c), cVar1 != '\0')))))))) ||
     ((iVar3 = Zombie::getZombieStateSerialization(param_1), iVar3 == 0x14 ||
      ((((iVar3 = Zombie::getZombieStateSerialization(param_1), iVar3 == 0x13 ||
         (cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0')) ||
        (cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0')) ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0')))))) {
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::addGlowEffect(Plant*, Plant*) */

void PlantPyreVine::addGlowEffect(Plant *param_1,Plant *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  GameObjectDictionary *this;
  AttachedEffect *this_00;
  PopAnim *pPVar5;
  long lVar6;
  StandaloneEffect *this_01;
  undefined8 uVar7;
  code *pcVar8;
  Plant *this_02;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  FastCurve aFStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_20);
  if (bVar1) {
    this_02 = *(Plant **)(param_1 + 0x10);
    iVar3 = FUN_04d285d4(this_02);
    if (iVar3 < 2) goto LAB_04d295b4;
    psVar4 = (string *)Plant::GetAttachedEffectManager(this_02);
    std::string::string((string *)&local_18,"vine_boosted");
    cVar2 = GameObjectDictionary::Contains(psVar4);
    std::string::~string((string *)&local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    if (cVar2 == '\0') {
      if (*(code **)(*(long *)param_1 + 0x388) != PlantFramework::ShowPersistentEffects) {
        (**(code **)(*(long *)param_1 + 0x388))(param_1,0);
      }
      this = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(param_1 + 0x10));
      std::string::string((string *)&local_18,"vine_boosted");
      this_00 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      std::string::string((string *)&local_20,"POPANIM_EFFECTS_PYREVINE_LV2");
      GetPAMByName((string *)&local_20);
      pPVar5 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      AttachedEffect::InitializeWithAnimation(this_00,pPVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_18,"animation");
      AttachedEffect::PlayAnimLooped(this_00,(string *)&local_18,2);
      std::string::~string((string *)&local_18);
      nop();
      fVar9 = (float)FUN_04d2874c(0xc0a00000);
      fVar10 = (float)FUN_04d2874c(0xc1200000);
      Sexy::FastCurve::SetOutRange(aFStack_28,fVar9,fVar10);
      lVar6 = *(long *)(param_1 + 0x10);
      uVar11 = *(undefined4 *)(lVar6 + 0x1c);
      local_20 = FUN_04d28680(*(undefined4 *)(lVar6 + 0x18),uVar11,*(undefined4 *)(lVar6 + 0x20));
      local_1c = uVar11;
      fVar9 = (float)FUN_04d2874c(0x3f800000);
      local_20 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_20,fVar9);
      local_1c = uVar11;
      this_01 = (StandaloneEffect *)AttachedEffect::GetEffect(this_00);
      local_18 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_20,(SexyVector2 *)aFStack_28);
      local_14 = uVar11;
      iVar3 = (**(code **)(*(long *)param_1 + 0x88))(param_1);
      StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)&local_18,iVar3 + 1);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      pcVar8 = *(code **)(*(long *)this_00 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,-5.0,-10.0,0.0);
      iVar3 = (**(code **)(*(long *)param_1 + 0x88))(param_1);
      (*pcVar8)(this_00,uVar7,(string *)&local_18,iVar3 + 1);
      goto LAB_04d295fc;
    }
  }
  else {
LAB_04d295b4:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  }
  psVar4 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(param_1 + 0x10));
  std::string::string((string *)&local_18,"vine_boosted");
  GameObjectDictionary::Remove(psVar4);
  std::string::~string((string *)&local_18);
  nop();
LAB_04d295fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::createFireTile(int, int, float, Sexy::RtWeakPtr<Sexy::PopAnim>, bool) */

void __thiscall
PlantPyreVine::createFireTile
          (float param_3,undefined8 param_2_00,int param_1,int param_2,
          RtWeakPtr<Sexy::ResourceInfo> *param_5,char param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Effect_PopAnim *this;
  PopAnim *pPVar4;
  RtClass *pRVar5;
  EffectAnimRig_JackOLanternFireSquare *this_00;
  EffectAnimRig_JackOLanternFireSquare *this_01;
  EffectAnimRig_JackOLanternFireSquare *this_02;
  EffectAnimRig_JackOLanternFireSquare *this_03;
  float fVar6;
  undefined4 uVar7;
  int local_30;
  int local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,param_1,param_2);
  BoardTransforms::GridToBoardSpace(aPStack_18);
  uVar2 = Board::MakeRenderOrder(0x65130,param_2,1);
  if (((DAT_06b96fa8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b96fa8), iVar3 != 0)) {
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b96f70,-98.0,-120.0,0.0);
    __cxa_guard_release(&DAT_06b96fa8);
  }
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 != '\0') {
    EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,-58.0,-83.0,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)&DAT_06b96f70,(SexyVector3 *)aPStack_18);
  }
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar6 = (float)Board::calculateRoofOffsetZ((float)local_30);
    local_2c = (int)((float)local_2c - fVar6);
  }
  fVar6 = (float)local_2c;
  uVar7 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,(float)local_30,fVar6,0.0);
  local_28 = Sexy::SexyVector3::operator+((SexyVector3 *)&DAT_06b96f70,(SexyVector3 *)aPStack_18);
  local_24 = fVar6;
  local_20 = uVar7;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (param_6 == '\0') {
    pPVar4 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    pRVar5 = (RtClass *)EffectAnimRig_JackOLanternFireSquare::StaticGetClass();
    Effect_PopAnim::CreatePopAnimRig(this,pPVar4,pRVar5);
    UIWidget::GetAtlasImage((UIWidget *)this);
    nop();
    EffectAnimRig_JackOLanternFireSquare::SetFireDelay(this_00,param_3);
    UIWidget::GetAtlasImage((UIWidget *)this);
    nop();
    EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_01,this);
  }
  else {
    pPVar4 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    pRVar5 = (RtClass *)EffectAnimRig_JalapenoFireSquare::StaticGetClass();
    Effect_PopAnim::CreatePopAnimRig(this,pPVar4,pRVar5);
    UIWidget::GetAtlasImage((UIWidget *)this);
    nop();
    EffectAnimRig_JackOLanternFireSquare::SetFireDelay(this_02,param_3);
    UIWidget::GetAtlasImage((UIWidget *)this);
    nop();
    EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_03,this);
  }
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_28,-1);
  FUN_04d285c0(this + 0x1c,uVar2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::createPFFireTiles() */

void __thiscall PlantPyreVine::createPFFireTiles(PlantPyreVine *this)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  UIWidget *pUVar8;
  EffectAnimRig_JalapenoFireSquare *this_00;
  EffectAnimRig_JalapenoFireSquare *this_01;
  EffectAnimRig_JalapenoFireSquare *this_02;
  int iVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"POPANIM_EFFECTS_PYREVINE_PF_FLAME");
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar4 = _FUN_04d29c80;
  lVar7 = *(long *)(this + 0x10);
  iVar9 = *(int *)(lVar7 + 0x114);
  if (-1 < iVar9) {
    do {
      while( true ) {
        Sexy::Point::Point((Point *)asStack_10,iVar9,*(int *)(lVar7 + 0x110));
        cVar5 = skipFlamePos(this,(Point *)asStack_10);
        if (cVar5 != '\0') break;
        uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
        uVar2 = iVar9 - *(int *)(*(long *)(this + 0x10) + 0x114);
        uVar3 = (int)uVar2 >> 0x1f;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
        iVar6 = iVar9 + -1;
        createFireTile((PlantPyreVine *)((float)(int)((uVar2 ^ uVar3) - uVar3) * fVar4),this,iVar9,
                       uVar1,asStack_10,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        lVar7 = *(long *)(this + 0x10);
        iVar9 = iVar6;
        if (iVar6 == -1) goto LAB_04d299ac;
      }
      iVar9 = iVar9 + -1;
      lVar7 = *(long *)(this + 0x10);
    } while (iVar9 != -1);
LAB_04d299ac:
    iVar9 = *(int *)(lVar7 + 0x114);
  }
  fVar4 = _FUN_04d29c80;
  iVar9 = iVar9 + 1;
  iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
  if (iVar9 < iVar6) {
    do {
      Sexy::Point::Point((Point *)asStack_10,iVar9,*(int *)(*(long *)(this + 0x10) + 0x110));
      cVar5 = skipFlamePos(this,(Point *)asStack_10);
      if (cVar5 == '\0') {
        uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
        uVar2 = iVar9 - *(int *)(*(long *)(this + 0x10) + 0x114);
        uVar3 = (int)uVar2 >> 0x1f;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
        pUVar8 = (UIWidget *)
                 createFireTile((PlantPyreVine *)((float)(int)((uVar2 ^ uVar3) - uVar3) * fVar4),
                                this,iVar9,uVar1,asStack_10,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        fVar10 = (float)PVZ_T();
        UIWidget::GetAtlasImage(pUVar8);
        nop();
        fVar11 = (float)EffectAnimRig_JalapenoFireSquare::CalculateActiveTime(this_01);
        *(float *)(this + 0x164) = fVar10 + fVar11 + fVar4;
      }
      iVar9 = iVar9 + 1;
      iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
    } while (iVar9 < iVar6);
  }
  cVar5 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  fVar4 = _FUN_04d29c80;
  if (cVar5 != '\0') {
    lVar7 = *(long *)(this + 0x10);
    iVar9 = *(int *)(lVar7 + 0x110);
    if (-1 < iVar9) {
      do {
        while( true ) {
          Sexy::Point::Point((Point *)asStack_10,*(int *)(lVar7 + 0x114),iVar9);
          cVar5 = skipFlamePos(this,(Point *)asStack_10);
          if (cVar5 != '\0') break;
          uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x114);
          uVar2 = iVar9 - *(int *)(*(long *)(this + 0x10) + 0x110);
          uVar3 = (int)uVar2 >> 0x1f;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
          iVar6 = iVar9 + -1;
          pUVar8 = (UIWidget *)
                   createFireTile((PlantPyreVine *)((float)(int)((uVar2 ^ uVar3) - uVar3) * fVar4),
                                  this,uVar1,iVar9,asStack_10,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          fVar10 = (float)PVZ_T();
          UIWidget::GetAtlasImage(pUVar8);
          nop();
          fVar11 = (float)EffectAnimRig_JalapenoFireSquare::CalculateActiveTime(this_00);
          lVar7 = *(long *)(this + 0x10);
          *(float *)(this + 0x164) = fVar10 + fVar11 + fVar4;
          iVar9 = iVar6;
          if (iVar6 == -1) goto LAB_04d29ae4;
        }
        iVar9 = iVar9 + -1;
        lVar7 = *(long *)(this + 0x10);
      } while (iVar9 != -1);
LAB_04d29ae4:
      iVar9 = *(int *)(lVar7 + 0x110);
    }
    fVar4 = _FUN_04d29c80;
    iVar9 = iVar9 + 1;
    iVar6 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar9 < iVar6) {
      do {
        Sexy::Point::Point((Point *)asStack_10,*(int *)(*(long *)(this + 0x10) + 0x114),iVar9);
        cVar5 = skipFlamePos(this,(Point *)asStack_10);
        if (cVar5 == '\0') {
          uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x114);
          uVar2 = iVar9 - *(int *)(*(long *)(this + 0x10) + 0x110);
          uVar3 = (int)uVar2 >> 0x1f;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
          pUVar8 = (UIWidget *)
                   createFireTile((PlantPyreVine *)((float)(int)((uVar2 ^ uVar3) - uVar3) * fVar4),
                                  this,uVar1,iVar9,asStack_10,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          fVar10 = (float)PVZ_T();
          UIWidget::GetAtlasImage(pUVar8);
          nop();
          fVar11 = (float)EffectAnimRig_JalapenoFireSquare::CalculateActiveTime(this_02);
          *(float *)(this + 0x164) = fVar10 + fVar11 + fVar4;
        }
        iVar9 = iVar9 + 1;
        iVar6 = BoardConstants::NUMBER_OF_ROWS();
      } while (iVar9 < iVar6);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::playFountainEffect(int, int) */

void __thiscall PlantPyreVine::playFountainEffect(PlantPyreVine *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  iVar7 = -0x87;
  if (cVar1 != '\0') {
    iVar7 = -0x50;
  }
  iVar6 = -100;
  if (cVar1 != '\0') {
    iVar6 = -0x3c;
  }
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(param_2);
  iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(param_1);
  fVar8 = 0.0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar8 = (float)Board::calculateRoofOffsetZ((float)(iVar2 + iVar6));
    fVar8 = (float)(int)fVar8;
  }
  EATextSquish::Vec3::Vec3(aVStack_18,(float)(iVar2 + iVar6),(float)(iVar3 + iVar7),fVar8);
  uVar4 = Board::MakeRenderOrder(0x65130,param_1,0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_PYREVINE_PF02_FLAME");
  GetPAMByName(asStack_28);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
  FUN_04d285c0(this_00 + 0x1c,uVar4);
  std::string::string((string *)aRStack_20,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPyreVine::PlantPyreVine() */

void __thiscall PlantPyreVine::PlantPyreVine(PlantPyreVine *this)

{
  PlantVineFramework::PlantVineFramework((PlantVineFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069ab460;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x158));
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  return;
}


/* PlantPyreVine::StaticNew() */

PlantPyreVine * PlantPyreVine::StaticNew(void)

{
  PlantPyreVine *this;
  
  this = ::operator_new(0x180);
  PlantPyreVine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::ApplyPlantfood() */

void __thiscall PlantPyreVine::ApplyPlantfood(PlantPyreVine *this)

{
  PlantAnimRig_PyreVine *pPVar1;
  RealObject *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::StartPlantfoodState(*(Plant **)(this + 0x10));
  (**(code **)(*(long *)this + 0x380))(this);
  pPVar1 = (PlantAnimRig_PyreVine *)FUN_04d2a53c(*(undefined8 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_PyreVine::PlayPlantFood(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_58,"Plant_Vine_Pyre_Plantfood_Start_01");
  RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::tryFlameDamage(bool) */

void __thiscall PlantPyreVine::tryFlameDamage(PlantPyreVine *this,bool param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  Zombie *this_00;
  GridItem *pGVar10;
  TRect *extraout_x1;
  code *pcVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_c0;
  undefined8 local_b8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  Insets aIStack_a0 [16];
  int local_90 [4];
  int local_80;
  undefined4 local_7c;
  Point aPStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 == '\0') {
    Sexy::Point::Point(aPStack_68,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
                       *(int *)(*(long *)(this + 0x10) + 0x110));
    cVar2 = skipFlamePos(this,aPStack_68);
    if (cVar2 == '\0') {
      lVar6 = FUN_04d2a3b4(*(undefined8 *)(this + 0x10));
      fVar14 = *(float *)(lVar6 + 0x3dc);
      fVar13 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      uVar7 = operator|(0x400,0x1000);
      uVar7 = operator|(uVar7,0x10000);
      uVar12 = *(undefined8 *)(this + 0x10);
      Sexy::Point::Point((Point *)local_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar13 * fVar14),local_80,local_7c,aPStack_68,uVar7,uVar12,
                 (Point *)local_90,0);
      local_90[0] = BoardConstants::NUMBER_OF_COLUMNS();
      lVar6 = *(long *)(this + 0x10);
      local_90[0] = local_90[0] + -1;
      iVar1 = *(int *)(lVar6 + 0x114);
      local_80 = iVar1 + *(int *)(this + 0x16c);
      piVar8 = eastl::min_alt<int>(local_90,&local_80);
      Sexy::Insets::Insets(aIStack_a0,iVar1 + 1,*(int *)(lVar6 + 0x110),*piVar8 - iVar1,1);
      BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aIStack_a0,extraout_x1);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      uVar4 = operator|(2,4);
      EntityFinder::GetEntitiesTouchingRectangle
                ((FastCurve *)&local_80,uVar4,(Point *)local_90,
                 *(undefined4 *)(*(long *)(this + 0x10) + 0x110),
                 *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
      local_c0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_80);
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8);
      uVar4 = 0;
      if (bVar3) {
        do {
          puVar9 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar9);
          pGVar10 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar9);
          BoardEntity::CalcGridPosition();
          cVar2 = skipFlamePos(this,(Point *)aRStack_a8);
          if (cVar2 == '\0') {
            if ((this_00 != (Zombie *)0x0) &&
               (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) {
              uVar5 = FUN_04d285c8(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
              cVar2 = RealObject::IsOnTeam(this_00,uVar5);
              if (cVar2 == '\0') {
                pcVar11 = *(code **)(*(long *)this_00 + 0x3d0);
                Plant::GetType();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          (aRStack_a8,(RtWeakPtrBase *)aRStack_b0);
                cVar2 = (*pcVar11)(this_00,aRStack_a8,0);
                if (cVar2 == '\0') {
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
                }
                else {
                  cVar2 = Zombie::IsFlying(this_00);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
                  if (cVar2 == '\0') {
                    uVar4 = 1;
                    if (!param_1) break;
                    uVar4 = 1;
                    (**(code **)(*(long *)this_00 + 0x110))(this_00,aPStack_68);
                  }
                }
              }
            }
            if ((pGVar10 != (GridItem *)0x0) &&
               (cVar2 = (**(code **)(*(long *)pGVar10 + 0x200))(pGVar10), cVar2 != '\0')) {
              uVar4 = 1;
              if (!param_1) break;
              uVar4 = 1;
              (**(code **)(*(long *)pGVar10 + 0x110))(pGVar10,aPStack_68);
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8);
        } while (bVar3);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      DamageInfo::~DamageInfo((DamageInfo *)aPStack_68);
      goto LAB_04d2a7b8;
    }
  }
  uVar4 = 0;
LAB_04d2a7b8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::clearFireTiles() */

void __thiscall PlantPyreVine::clearFireTiles(PlantPyreVine *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  long *plVar4;
  RtWeakPtrBase aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
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
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPyreVine::onSleeped(bool) */

void __thiscall PlantPyreVine::onSleeped(PlantPyreVine *this,bool param_1)

{
  long *plVar1;
  
  if (param_1) {
    clearFireTiles(this);
    plVar1 = (long *)FUN_04d2a53c(*(undefined8 *)(this + 0x10));
    (**(code **)(*plVar1 + 0x118))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::~PlantPyreVine() */

void __thiscall PlantPyreVine::~PlantPyreVine(PlantPyreVine *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069ab460;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Stop_Plant_Vine_Pyre_Attack_Loop_01");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x140));
  PlantVineFramework::~PlantVineFramework((PlantVineFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPyreVine::~PlantPyreVine() */

void __thiscall PlantPyreVine::~PlantPyreVine(PlantPyreVine *this)

{
  ~PlantPyreVine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::CancelOngoingEffects() */

void __thiscall PlantPyreVine::CancelOngoingEffects(PlantPyreVine *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char *pcVar2;
  RtWeakPtrBase *pRVar3;
  UIWidget *this_01;
  EffectAnimRig_JackOLanternFireSquare *this_02;
  PlantAnimRig_PyreVine *pPVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_Plant_PyreVine_Attack_End");
  if (this[0x161] != (PlantPyreVine)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x140);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,pRVar3);
      this_01 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      UIWidget::GetAtlasImage(this_01);
      nop();
      EffectAnimRig_JackOLanternFireSquare::PlayFade(this_02);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
    clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )this_00);
    pPVar4 = (PlantAnimRig_PyreVine *)FUN_04d2a53c(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_68);
    std::string::string((string *)&local_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (exception_ptr *)&local_60,(string *)&local_58);
    PlantAnimRig_PyreVine::PlayAttackEnd(pPVar4,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_58);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this[0x161] = (PlantPyreVine)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::shouldKnockback(Zombie*) */

void __thiscall PlantPyreVine::shouldKnockback(PlantPyreVine *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  SexyVector3 *pSVar4;
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((((param_1 != (Zombie *)0x0) && (cVar1 = Zombie::IsFriendZombie(param_1), cVar1 == '\0')) &&
       (cVar1 = Zombie::IsFlickedOff(param_1), cVar1 == '\0')) &&
      ((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0' &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')))) &&
     ((cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0' &&
      ((cVar1 = Zombie::IsInvisible(param_1), cVar1 == '\0' &&
       (cVar1 = canBeLaunchedByPlants(this,param_1), cVar1 != '\0')))))) {
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),pSVar4);
    if ((cVar1 == '\0') &&
       (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar4), cVar1 == '\0')) {
      cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar4);
      if ((cVar1 == '\0') && (iVar3 = Zombie::GetSizeType(param_1), iVar3 != 2)) {
        cVar1 = Zombie::IsBoss(param_1);
        bVar2 = 0;
        if (cVar1 == '\0') {
          Zombie::GetCurrentTitleStatus();
          if ((local_58 == '\0') &&
             (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0')) {
            bVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1);
            bVar2 = bVar2 ^ 1;
          }
          else {
            bVar2 = 0;
          }
          TitleStatus::~TitleStatus(aTStack_70);
        }
        goto LAB_04d2aef8;
      }
    }
  }
  bVar2 = 0;
LAB_04d2aef8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::knockbackZombie(Zombie*) */

void __thiscall PlantPyreVine::knockbackZombie(PlantPyreVine *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  ZombieTosserSubSystem *pZVar9;
  undefined8 local_88;
  undefined8 local_80;
  Vec3 aVStack_78 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Zombie *)0x0) {
    iVar3 = 0;
    iVar4 = 0;
  }
  else {
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  EntityFinder::GetEntitiesAtGridSquare(avStack_68,2,iVar3,iVar4);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar2) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
    if ((pZVar8 != (Zombie *)0x0) && (cVar1 = shouldKnockback(this,pZVar8), cVar1 != '\0')) {
      iVar5 = BoardTransforms::GridToBoardSpaceX(iVar3 + 1);
      iVar6 = BoardTransforms::GridToBoardSpaceY(iVar4);
      EATextSquish::Vec3::Vec3(aVStack_78,(float)iVar5,(float)iVar6,0.0);
      Zombie::ApplyCondition((Zombie *)0x3f800000,0,pZVar8,0x18,1);
      pZVar9 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pZVar9,pZVar8,aVStack_78,aRStack_50,
                 0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::causeFountainDamage(int, int) */

void __thiscall PlantPyreVine::causeFountainDamage(PlantPyreVine *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  GridItem *pGVar8;
  TRect *extraout_x1;
  undefined8 uVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  undefined8 local_c0;
  undefined8 local_b8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  Insets aIStack_a0 [16];
  Point aPStack_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_04d2a3b4(*(undefined8 *)(this + 0x10));
  fVar12 = *(float *)(lVar4 + 0x3e0);
  fVar11 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  uVar5 = operator|(0x400,0x1000);
  uVar5 = operator|(uVar5,0x10000);
  uVar9 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_90,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar11 * fVar12),local_80,local_7c,aDStack_68,uVar5,uVar9,aPStack_90,0);
  Sexy::Insets::Insets(aIStack_a0,param_2,param_1,1,1);
  BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aIStack_a0,extraout_x1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle
            ((FastCurve *)&local_80,uVar3,aPStack_90,*(undefined4 *)(*(long *)(this + 0x10) + 0x110)
             ,*(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  local_c0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
  local_b8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_80);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8);
  if (bVar1) {
    do {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0)
      ;
      pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
      BoardEntity::CalcGridPosition();
      cVar2 = skipFlamePos(this,(Point *)aRStack_a8);
      if (cVar2 == '\0') {
        if ((pZVar7 != (Zombie *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pZVar7 + 0x328))(pZVar7), cVar2 == '\0')) {
          uVar3 = FUN_04d285c8(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
          cVar2 = RealObject::IsOnTeam(pZVar7,uVar3);
          if (cVar2 == '\0') {
            pcVar10 = *(code **)(*(long *)pZVar7 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,(RtWeakPtrBase *)aRStack_b0);
            cVar2 = (*pcVar10)(pZVar7,aRStack_a8,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pZVar7 + 0x110))(pZVar7,aDStack_68);
              cVar2 = shouldKnockback(this,pZVar7);
              if (cVar2 != '\0') {
                knockbackZombie(this,pZVar7);
              }
            }
          }
        }
        if ((pGVar8 != (GridItem *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pGVar8 + 0x200))(pGVar8), cVar2 != '\0')) {
          (**(code **)(*(long *)pGVar8 + 0x110))(pGVar8,aDStack_68);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::updateFountain() */

void __thiscall PlantPyreVine::updateFountain(PlantPyreVine *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RealObject *this_00;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if ((fVar4 <= *(float *)(this + 0x178)) ||
     (iVar3 = *(int *)(this + 0x17c), iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar2 <= iVar3))
  {
    iVar3 = *(int *)(this + 0x17c);
  }
  else {
    Sexy::Point::Point(aPStack_10,*(int *)(this + 0x17c),*(int *)(*(long *)(this + 0x10) + 0x110));
    cVar1 = skipFlamePos(this,aPStack_10);
    if (cVar1 == '\0') {
      this_00 = *(RealObject **)(this + 0x10);
      std::string::string((string *)aPStack_10,"Play_FirePeaShooter_Avatar_PlantFood_Start");
      RealObject::PlayPositionalSound(this_00,(string *)aPStack_10,0.0);
      std::string::~string((string *)aPStack_10);
      nop();
      playFountainEffect(this,*(int *)(*(long *)(this + 0x10) + 0x110),*(int *)(this + 0x17c));
      causeFountainDamage(this,*(int *)(*(long *)(this + 0x10) + 0x110),*(int *)(this + 0x17c));
    }
    fVar4 = (float)PVZ_T();
    iVar3 = *(int *)(this + 0x17c) + 1;
    *(int *)(this + 0x17c) = iVar3;
    *(float *)(this + 0x178) = fVar4 + 0.2;
  }
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if ((iVar2 <= iVar3) || (*(int *)(*(long *)(this + 0x10) + 0x114) + 4 < *(int *)(this + 0x17c))) {
    *(undefined4 *)(this + 0x17c) = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::UpdateActions() */

void __thiscall PlantPyreVine::UpdateActions(PlantPyreVine *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  RtWeakPtrBase *pRVar4;
  UIWidget *this_01;
  EffectAnimRig_JackOLanternFireSquare *this_02;
  PlantAnimRig_PyreVine *pPVar5;
  char *__s;
  RealObject *pRVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = tryFlameDamage(this,false);
  if (cVar1 == '\0') {
    if (this[0x161] == (PlantPyreVine)0x0) goto LAB_04d2b710;
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x140);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2)
    {
      pRVar4 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,pRVar4);
      this_01 = (UIWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      UIWidget::GetAtlasImage(this_01);
      nop();
      EffectAnimRig_JackOLanternFireSquare::PlayFade(this_02);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
    clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )this_00);
    this[0x161] = (PlantPyreVine)0x0;
    pPVar5 = (PlantAnimRig_PyreVine *)FUN_04d2a53c(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_68);
    std::string::string((string *)&local_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
               (exception_ptr *)&local_60,(string *)&local_58);
    PlantAnimRig_PyreVine::PlayAttackEnd(pPVar5,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)&local_58);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    pRVar6 = *(RealObject **)(this + 0x10);
    std::string::string((string *)&local_58,"Stop_Plant_Vine_Pyre_Attack_Loop_01");
    RealObject::PlayPositionalSound(pRVar6,(string *)&local_58,0.0);
    std::string::~string((string *)&local_58);
    nop();
    pRVar6 = *(RealObject **)(this + 0x10);
    __s = "Plant_Vine_Pyre_Attack_End_01";
  }
  else {
    if (this[0x161] == (PlantPyreVine)0x0) {
      pPVar5 = (PlantAnimRig_PyreVine *)FUN_04d2a53c(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_68);
      std::string::string((string *)&local_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)&local_60,(string *)&local_58);
      PlantAnimRig_PyreVine::PlayAttackStart(pPVar5,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_58);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      pRVar6 = *(RealObject **)(this + 0x10);
      std::string::string((string *)&local_58,"Plant_Vine_Pyre_Attack_Start_01");
      RealObject::PlayPositionalSound(pRVar6,(string *)&local_58,0.0);
      std::string::~string((string *)&local_58);
      nop();
      fVar8 = *(float *)(this + 0x170);
      this[0x161] = (PlantPyreVine)0x1;
      fVar7 = (float)PVZ_T();
      if (fVar7 <= fVar8) goto LAB_04d2b710;
    }
    else {
      fVar8 = *(float *)(this + 0x170);
      fVar7 = (float)PVZ_T();
      if (fVar7 <= fVar8) goto LAB_04d2b710;
    }
    iVar3 = FUN_04d285d4(*(undefined8 *)(this + 0x10));
    if (((iVar3 == 5) && (*(int *)(this + 0x17c) == -1)) &&
       (fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0), fVar7 < _FUN_04d2bb00)) {
      pPVar5 = (PlantAnimRig_PyreVine *)FUN_04d2a53c(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_68);
      std::string::string((string *)&local_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)&local_60,(string *)&local_58);
      PlantAnimRig_PyreVine::PlayLv5AttackStart(pPVar5,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)&local_58);
      nop();
      Sexy::RtId::~RtId((RtId *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    tryFlameDamage(this,true);
    fVar7 = (float)PVZ_T();
    pRVar6 = *(RealObject **)(this + 0x10);
    *(float *)(this + 0x170) = fVar7 + 1.0;
    std::string::string((string *)&local_58,"Stop_Plant_Vine_Pyre_Attack_Loop_01");
    RealObject::PlayPositionalSound(pRVar6,(string *)&local_58,0.0);
    std::string::~string((string *)&local_58);
    nop();
    pRVar6 = *(RealObject **)(this + 0x10);
    __s = "Plant_Vine_Pyre_Attack_Loop_01";
  }
  std::string::string((string *)&local_58,__s);
  RealObject::PlayPositionalSound(pRVar6,(string *)&local_58,0.0);
  std::string::~string((string *)&local_58);
  nop();
LAB_04d2b710:
  if (*(int *)(this + 0x17c) != -1) {
    updateFountain(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::boostPlant(Plant*) */

void __thiscall PlantPyreVine::boostPlant(PlantPyreVine *this,Plant *param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  float fVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<PlantTag,std::allocator<PlantTag>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    std::vector<PlantTag,std::allocator<PlantTag>>::vector(avStack_20,(vector *)(lVar2 + 0xf0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      if (*piVar3 == 9) {
        addGlowEffect((Plant *)this,*(Plant **)(this + 0x10));
        fVar4 = (float)Plant::GetExtraLevelDamge(param_1);
        Plant::SetExtraLevelDamge(param_1,fVar4 + *(float *)(this + 0x168));
        std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
        goto LAB_04d2c1a8;
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
    }
    removeGlowEffect((Plant *)this);
    std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
  }
LAB_04d2c1a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::onBoostPlant(Plant*) */

void __thiscall PlantPyreVine::onBoostPlant(PlantPyreVine *this,Plant *param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  float fVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  vector<PlantTag,std::allocator<PlantTag>> avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_28);
    std::vector<PlantTag,std::allocator<PlantTag>>::vector(avStack_20,(vector *)(lVar2 + 0xf0));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_28);
    uStack_30 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_20);
    uStack_28 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_30,(__normal_iterator *)&uStack_28),
          bVar1) {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_30);
      if (*piVar3 == 9) {
        addGlowEffect((Plant *)this,*(Plant **)(this + 0x10));
        fVar4 = (float)Plant::GetExtraLevelDamge(param_1);
        Plant::SetExtraLevelDamge(param_1,fVar4 + *(float *)(this + 0x168));
        std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
        goto LAB_04d2c1a8;
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&uStack_30);
    }
    removeGlowEffect((Plant *)this);
    std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
  }
LAB_04d2c1a8:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::onPlantPlaced(Plant*) */

void __thiscall PlantPyreVine::onPlantPlaced(PlantPyreVine *this,Plant *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  TPoint<int> aTStack_28 [8];
  TPoint aTStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  cVar1 = Sexy::TPoint<int>::operator==(aTStack_28,aTStack_20);
  if (cVar1 != '\0') {
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    Plant::GetType();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar2 = std::operator!=((string *)(lVar3 + 8),(string *)(lVar4 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (bVar2) {
      boostPlant(this,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::createFireTiles(bool) */

void PlantPyreVine::createFireTiles(bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  PlantPyreVine *this;
  int *piVar4;
  int iVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  int local_18 [2];
  int local_10 [2];
  long local_8;
  
  this = (PlantPyreVine *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  FUN_04d2a3b4(*(undefined8 *)(this + 0x10));
  std::string::string((string *)local_10,"POPANIM_EFFECTS_PYREVINE_ATTACKFLAME");
  GetPAMByName((string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  local_18[0] = BoardConstants::NUMBER_OF_COLUMNS();
  lVar6 = *(long *)(this + 0x10);
  local_18[0] = local_18[0] + -1;
  local_10[0] = *(int *)(lVar6 + 0x114) + *(int *)(this + 0x16c);
  iVar5 = *(int *)(lVar6 + 0x114) + 2;
  piVar4 = eastl::min_alt<int>(local_18,local_10);
  iVar1 = *piVar4;
  if (iVar5 <= iVar1) {
    while( true ) {
      Sexy::Point::Point((Point *)local_10,iVar5,*(int *)(lVar6 + 0x110));
      cVar3 = skipFlamePos(this,(Point *)local_10);
      if (cVar3 == '\0') {
        uVar2 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)aRStack_20);
        createFireTile((PlantPyreVine *)0x0,this,iVar5,uVar2,(string *)local_10,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)local_18);
        std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
        ::push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
                     *)(this + 0x140),(RtWeakPtr *)local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      }
      if (iVar1 < iVar5 + 1) break;
      iVar5 = iVar5 + 1;
      lVar6 = *(long *)(this + 0x10);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::updateFireTiles() */

void __thiscall PlantPyreVine::updateFireTiles(PlantPyreVine *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d2a3b4(*(undefined8 *)(this + 0x10));
  local_10 = BoardConstants::NUMBER_OF_COLUMNS();
  local_10 = local_10 + -1;
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
  local_c = iVar1 + *(int *)(this + 0x16c);
  piVar3 = eastl::min_alt<int>(&local_10,&local_c);
  iVar2 = *piVar3;
  lVar4 = FUN_04d285e8(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
  if (lVar4 == iVar2 - iVar1) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    clearFireTiles(this);
    if (local_8 == ___stack_chk_guard) {
      createFireTiles(SUB81(this,0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPyreVine::OnRelocating(Sexy::SexyVector2) */

void PlantPyreVine::OnRelocating(PlantPyreVine *param_1)

{
  clearFireTiles(param_1);
  if (param_1[0x161] == (PlantPyreVine)0x0) {
    return;
  }
  updateFireTiles(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::applyPFFlameDamage() */

void __thiscall PlantPyreVine::applyPFFlameDamage(PlantPyreVine *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  BoardEntity **ppBVar8;
  Zombie *pZVar9;
  GridItem *pGVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  Point aPStack_98 [24];
  undefined4 local_80;
  undefined4 local_7c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_04d2a3b4(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar6 + 0x3e4);
  fVar12 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  uVar7 = operator|(0x400,0x1000);
  uVar7 = operator|(uVar7,0x10000);
  uVar11 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_98,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar12 * (float)iVar1),local_80,local_7c,aDStack_68,uVar7,uVar11,
             aPStack_98,0);
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets((Insets *)&local_b8,0,iVar1,iVar4,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_98);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(aPStack_98,uVar5,(Insets *)&local_b8);
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
    iVar4 = BoardConstants::NUMBER_OF_ROWS();
    Sexy::Insets::Insets((Insets *)&local_a8,iVar1,0,1,iVar4);
    local_b8 = local_a8;
    uStack_b0 = uStack_a0;
    EntityFinder::GetEntitiesInGridSquares(aPStack_98,uVar5,(Insets *)&local_b8);
  }
  local_d0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aPStack_98);
  local_c8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aPStack_98);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_d0,(__normal_iterator *)&local_c8), bVar3) {
    ppBVar8 = (BoardEntity **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_80);
    uVar11 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_80);
    local_c0 = std::
               find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                         (uVar7,uVar11,ppBVar8);
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
    bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_c0,(__normal_iterator *)&local_a8);
    if (bVar3) {
      pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)*ppBVar8);
      pGVar10 = Sexy::RtObject::Cast<GridItem>((RtObject *)*ppBVar8);
      BoardEntity::CalcGridPosition();
      cVar2 = skipFlamePos(this,(Point *)&local_a8);
      if (cVar2 == '\0') {
        if ((pZVar9 != (Zombie *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pZVar9 + 0x328))(pZVar9), cVar2 == '\0')) {
          uVar5 = FUN_04d285c8(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
          cVar2 = RealObject::IsOnTeam(pZVar9,uVar5);
          if (cVar2 == '\0') {
            (**(code **)(*(long *)pZVar9 + 0x110))(pZVar9,aDStack_68);
          }
        }
        if ((pGVar10 != (GridItem *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pGVar10 + 0x200))(pGVar10), cVar2 != '\0')) {
          (**(code **)(*(long *)pGVar10 + 0x110))(pGVar10,aDStack_68);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,ppBVar8);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_d0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_98);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04d2cba8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantPyreVine::Initialize() */

void __thiscall PlantPyreVine::Initialize(PlantPyreVine *this)

{
  int iVar1;
  undefined *puVar2;
  int extraout_w0;
  long lVar3;
  BoardEntity *this_00;
  ComponentWarmingRadius *this_01;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        (this + 0x140));
  lVar3 = FUN_04d2a3b4(*(undefined8 *)(this + 0x10));
  puVar2 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantMove);
  local_70 = local_20;
  uStack_68 = uStack_18;
  local_60 = local_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantPyreVine,void(PlantPyreVine::*)(Plant*)>>
            ((MessageRouter *)puVar2,Message::PlantPlaced,&local_70);
  this_00 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
  std::string::string(asStack_30,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this_00,aRStack_38,asStack_30);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x158),(RtWeakPtrBase *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  this_01 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x158));
  ComponentWarmingRadius::SetRadiusProps(this_01,(ComponentWarmingRadiusProps *)(lVar3 + 0x2b8));
  this[0x161] = (PlantPyreVine)0x0;
  this[0x174] = (PlantPyreVine)0x0;
  this[0x160] = (PlantPyreVine)0x1;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x164) = uVar5;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x170) = uVar5;
  uVar5 = PVZ_T();
  uVar4 = *(undefined8 *)(this + 0x10);
  iVar1 = *(int *)(lVar3 + 0x3d8);
  *(int *)(this + 0x16c) = iVar1;
  *(undefined4 *)(this + 0x17c) = 0xffffffff;
  *(undefined4 *)(this + 0x178) = uVar5;
  FUN_04d285d4(uVar4);
  extraout_w0 = (int)uVar4;
  if (extraout_w0 == 2) {
    uVar5 = *(undefined4 *)(lVar3 + 1000);
    *(int *)(this + 0x16c) = iVar1 + 1;
    *(undefined4 *)(this + 0x168) = uVar5;
  }
  else if (2 < extraout_w0) {
    uVar5 = *(undefined4 *)(lVar3 + 0x3ec);
    *(int *)(this + 0x16c) = iVar1 + 2;
    *(undefined4 *)(this + 0x168) = uVar5;
  }
  PlantVineFramework::Initialize((PlantVineFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::onDestroy() */

void __thiscall PlantPyreVine::onDestroy(PlantPyreVine *this)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  clearFireTiles(this);
  psVar1 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_10,"pyrevine_booted");
  GameObjectDictionary::Remove(psVar1);
  std::string::~string(asStack_10);
  nop();
  PlantFramework::onDestroy((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPyreVine::UpdateUnconditionally() */

void __thiscall PlantPyreVine::UpdateUnconditionally(PlantPyreVine *this)

{
  (**(code **)(*(long *)this + 0x6e0))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPyreVine::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantPyreVine::onAnimStoppedCallback(PlantPyreVine *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig_PyreVine *pPVar2;
  long *plVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantStatefulFramework::onAnimStoppedCallback((PlantStatefulFramework *)this,param_1);
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    pPVar2 = (PlantAnimRig_PyreVine *)FUN_04d2a53c(*(undefined8 *)(this + 0x10));
    PlantAnimRig_PyreVine::PlayAttackLoop(pPVar2);
    updateFireTiles(this);
    this[0x161] = (PlantPyreVine)0x1;
  }
  else {
    bVar1 = std::operator==(param_1,"attack_lv5");
    if (bVar1) {
      *(int *)(this + 0x17c) = *(int *)(*(long *)(this + 0x10) + 0x114) + 1;
      pPVar2 = (PlantAnimRig_PyreVine *)FUN_04d2a53c(*(long *)(this + 0x10));
      PlantAnimRig_PyreVine::PlayAttackLoop(pPVar2);
    }
    else {
      bVar1 = std::operator==(param_1,"attackend");
      if (bVar1) {
        plVar3 = (long *)FUN_04d2a53c(*(undefined8 *)(this + 0x10));
        (**(code **)(*plVar3 + 0x118))();
      }
      else {
        bVar1 = std::operator==(param_1,"plantfood");
        if (bVar1) {
          pPVar2 = (PlantAnimRig_PyreVine *)FUN_04d2a53c(*(undefined8 *)(this + 0x10));
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PlantAnimRig_PyreVine::PlayPFEnd(pPVar2,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          createPFFireTiles(this);
          applyPFFlameDamage(this);
        }
        else {
          bVar1 = std::operator==(param_1,"plantfoodend");
          if (bVar1) {
            PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


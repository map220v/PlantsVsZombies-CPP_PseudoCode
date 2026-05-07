// Class: PlantPeavine


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantPeavine::Fire(PlantPeavine *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    uVar2 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantPeavine::~PlantPeavine() */

void __thiscall PlantPeavine::~PlantPeavine(PlantPeavine *this)

{
  *(undefined ***)this = &PTR_GetClass_069a9e70;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PlantVineFramework::~PlantVineFramework((PlantVineFramework *)this);
  return;
}


/* PlantPeavine::~PlantPeavine() */

void __thiscall PlantPeavine::~PlantPeavine(PlantPeavine *this)

{
  ~PlantPeavine(this);
  AK::FreeHook(this);
  return;
}


/* PlantPeavine::PlantPeavine() */

void __thiscall PlantPeavine::PlantPeavine(PlantPeavine *this)

{
  PlantVineFramework::PlantVineFramework((PlantVineFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069a9e70;
  PeavinePlantgfood::PeavinePlantgfood((PeavinePlantgfood *)(this + 0x140));
  return;
}


/* PlantPeavine::StaticNew() */

PlantPeavine * PlantPeavine::StaticNew(void)

{
  PlantPeavine *this;
  
  this = ::operator_new(0x170);
  PlantPeavine(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::StaticClassInit() */

void PlantPeavine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PeavinePlantgfood");
    (*pcVar3)(plVar2,asStack_10,FUN_04d20a00,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantPeavine");
    (*pcVar3)(plVar2,asStack_10,FUN_04d21d84,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPeavine::StaticGetClass() */

long * PlantPeavine::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPeavine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPeavine::GetClass() const */

long * PlantPeavine::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPeavine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::removeGlowEffect(Plant*) */

void __thiscall PlantPeavine::removeGlowEffect(PlantPeavine *this,Plant *param_1)

{
  char cVar1;
  string *psVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Plant::GetAttachedEffectManager(param_1);
  std::string::string(asStack_10,"peavine_boosted");
  cVar1 = GameObjectDictionary::Contains(psVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    if (*(code **)(*(long *)this + 0x388) != PlantFramework::ShowPersistentEffects) {
      (**(code **)(*(long *)this + 0x388))(this,1);
    }
    std::string::string(asStack_10,"peavine_boosted");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::UpdatePlantfood() */

void __thiscall PlantPeavine::UpdatePlantfood(PlantPeavine *this)

{
  float *pfVar1;
  long lVar2;
  PlantAction *pPVar3;
  Plant *pPVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar1,pfVar1[1],0.0);
  pPVar4 = *(Plant **)(this + 0x10);
  fVar5 = *(float *)(pPVar4 + 0xc4);
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  pPVar3 = (PlantAction *)FUN_04d20ca4(*(undefined8 *)(lVar2 + 0x70));
  PeavinePlantgfood::Update
            ((PeavinePlantgfood *)(this + 0x140),pPVar4,(SexyVector3 *)aVStack_18,fVar5,pPVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::isAttackableMainPlant(Plant*) */

void PlantPeavine::isAttackableMainPlant(Plant *param_1)

{
  bool bVar1;
  long lVar2;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar2 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = std::operator==(asStack_18,"peashooter");
  if (((((bVar1) || (bVar1 = std::operator==(asStack_18,"splitpea"), bVar1)) ||
       (bVar1 = std::operator==(asStack_18,"peapod"), bVar1)) ||
      ((((bVar1 = std::operator==(asStack_18,"repeater"), bVar1 ||
         (bVar1 = std::operator==(asStack_18,"threepeater"), bVar1)) ||
        ((bVar1 = std::operator==(asStack_18,"gatlingpea"), bVar1 ||
         ((bVar1 = std::operator==(asStack_18,"snowpea"), bVar1 ||
          (bVar1 = std::operator==(asStack_18,"firepeashooter"), bVar1)))))) ||
       (bVar1 = std::operator==(asStack_18,"primalpeashooter"), bVar1)))) ||
     (((bVar1 = std::operator==(asStack_18,"electricpeashooter"), bVar1 ||
       (bVar1 = std::operator==(asStack_18,"shadowpeashooter"), bVar1)) ||
      (bVar1 = std::operator==(asStack_18,"slingpea"), bVar1)))) {
    bVar1 = true;
  }
  else {
    bVar1 = std::operator==(asStack_18,"poisonpeashooter");
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::addGlowEffect(Plant*, Plant*) */

void PlantPeavine::addGlowEffect(Plant *param_1,Plant *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  GameObjectDictionary *this;
  AttachedEffect *this_00;
  PopAnim *pPVar5;
  StandaloneEffect *this_01;
  long lVar6;
  undefined8 uVar7;
  Plant *this_02;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
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
    iVar3 = FUN_04d209ec(this_02);
    if (iVar3 < 2) goto LAB_04d21a80;
    psVar4 = (string *)Plant::GetAttachedEffectManager(this_02);
    std::string::string((string *)&local_18,"peavine_boosted");
    cVar2 = GameObjectDictionary::Contains(psVar4);
    std::string::~string((string *)&local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    if (cVar2 == '\0') {
      lVar6 = *(long *)param_1;
      if (*(code **)(lVar6 + 0x380) != PlantFramework::CancelOngoingEffects) {
        (**(code **)(lVar6 + 0x380))(param_1);
        lVar6 = *(long *)param_1;
      }
      if (*(code **)(lVar6 + 0x388) != PlantFramework::ShowPersistentEffects) {
        (**(code **)(lVar6 + 0x388))(param_1,0);
      }
      this = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(param_1 + 0x10));
      std::string::string((string *)&local_18,"peavine_boosted");
      this_00 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      std::string::string((string *)&local_20,"POPANIM_EFFECTS_PEAVINE_EFFECT");
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
      Plant::GetType();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      bVar1 = std::operator==((string *)(lVar6 + 8),"peapod");
      fVar12 = -10.0;
      if (bVar1) {
        fVar12 = -40.0;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      fVar9 = (float)FUN_04d20d04(0x40a00000);
      fVar10 = (float)FUN_04d20d04(fVar12);
      Sexy::FastCurve::SetOutRange(aFStack_28,fVar9,fVar10);
      lVar6 = *(long *)(param_1 + 0x10);
      uVar11 = *(undefined4 *)(lVar6 + 0x1c);
      local_20 = FUN_04d20ca8(*(undefined4 *)(lVar6 + 0x18),uVar11,*(undefined4 *)(lVar6 + 0x20));
      local_1c = uVar11;
      fVar9 = (float)FUN_04d20d04(0x3f800000);
      local_20 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_20,fVar9);
      local_1c = uVar11;
      this_01 = (StandaloneEffect *)AttachedEffect::GetEffect(this_00);
      local_18 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_20,(SexyVector2 *)aFStack_28);
      local_14 = uVar11;
      StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)&local_18,-2000);
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      pcVar8 = *(code **)(*(long *)this_00 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,fVar12,0.0);
      (*pcVar8)(this_00,uVar7,(string *)&local_18,0xfffff830);
      goto LAB_04d21ac8;
    }
  }
  else {
LAB_04d21a80:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  }
  psVar4 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(param_1 + 0x10));
  std::string::string((string *)&local_18,"peavine_boosted");
  GameObjectDictionary::Remove(psVar4);
  std::string::~string((string *)&local_18);
  nop();
LAB_04d21ac8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::getProjectileType() */

void __thiscall PlantPeavine::getProjectileType(PlantPeavine *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  PopAnimRig *this_00;
  undefined8 uVar4;
  Board *pBVar5;
  string asStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar5 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  lVar3 = Board::GetPlantAt(pBVar5,aPStack_10,1);
  if (lVar3 != 0) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    std::string::string((string *)aPStack_10,"attack2");
    cVar1 = PopAnimRig::IsAnimStringActive(this_00,(string *)aPStack_10);
    std::string::~string((string *)aPStack_10);
    nop();
    if (cVar1 != '\0') {
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      FUN_05475d88(asStack_18,lVar3 + 8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      bVar2 = std::operator==(asStack_18,"peashooter");
      if ((((bVar2) || (bVar2 = std::operator==(asStack_18,"splitpea"), bVar2)) ||
          (bVar2 = std::operator==(asStack_18,"peapod"), bVar2)) ||
         (((bVar2 = std::operator==(asStack_18,"repeater"), bVar2 ||
           (bVar2 = std::operator==(asStack_18,"threepeater"), bVar2)) ||
          (bVar2 = std::operator==(asStack_18,"gatlingpea"), bVar2)))) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
        bVar2 = std::operator==(asStack_18,"snowpea");
        if (!bVar2) {
          uVar4 = 2;
          bVar2 = std::operator==(asStack_18,"firepeashooter");
          if (!bVar2) {
            uVar4 = 3;
            bVar2 = std::operator==(asStack_18,"primalpeashooter");
            if (!bVar2) {
              uVar4 = 4;
              bVar2 = std::operator==(asStack_18,"electricpeashooter");
              if (!bVar2) {
                uVar4 = 5;
                bVar2 = std::operator==(asStack_18,"shadowpeashooter");
                if (!bVar2) {
                  uVar4 = 6;
                  bVar2 = std::operator==(asStack_18,"slingpea");
                  if (!bVar2) {
                    uVar4 = 7;
                    bVar2 = std::operator==(asStack_18,"poisonpeashooter");
                    if (!bVar2) {
                      uVar4 = 0;
                      std::string::~string(asStack_18);
                      goto LAB_04d21c00;
                    }
                  }
                }
              }
            }
          }
        }
      }
      std::string::~string(asStack_18);
      goto LAB_04d21c00;
    }
  }
  uVar4 = 0;
LAB_04d21c00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::FindTargetAndFire(PlantWeapon) */

void PlantPeavine::FindTargetAndFire(Plant *param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  PlantAnimRig_Peavine *pPVar4;
  Board *pBVar5;
  float fVar6;
  Point aPStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  cVar2 = '\0';
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    fVar6 = (float)Sexy::Rand(1.0);
    if (fVar6 <= *(float *)(param_1 + 0x168)) {
      pBVar5 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_58,*(int *)(*(long *)(param_1 + 0x10) + 0x114),
                         *(int *)(*(long *)(param_1 + 0x10) + 0x110));
      lVar3 = Board::GetPlantAt(pBVar5,aPStack_58,1);
      if ((lVar3 != 0) && (cVar2 = isAttackableMainPlant(param_1), cVar2 != '\0')) {
        pPVar4 = (PlantAnimRig_Peavine *)FUN_04d220ac(*(undefined8 *)(param_1 + 0x10));
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        PlantAnimRig_Peavine::PlaySecondAttack(pPVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        goto LAB_04d220f8;
      }
    }
    cVar2 = '\x01';
    (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
  }
LAB_04d220f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::boostPlant(Plant*) */

void __thiscall PlantPeavine::boostPlant(PlantPeavine *this,Plant *param_1)

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
      if (*piVar3 == 6) {
        addGlowEffect((Plant *)this,*(Plant **)(this + 0x10));
        fVar4 = (float)Plant::GetExtraLevelDamge(param_1);
        Plant::SetExtraLevelDamge(param_1,fVar4 + *(float *)(this + 0x16c));
        std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
        goto LAB_04d2236c;
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
    }
    removeGlowEffect(this,*(Plant **)(this + 0x10));
    std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
  }
LAB_04d2236c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::onPlantPlaced(Plant*) */

void __thiscall PlantPeavine::onPlantPlaced(PlantPeavine *this,Plant *param_1)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x110) == *(int *)(*(long *)(this + 0x10) + 0x110)) {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = std::operator!=((string *)(lVar2 + 8),"peavine");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (bVar1) {
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
/* PlantPeavine::onBoostPlant(Plant*) */

void __thiscall PlantPeavine::onBoostPlant(PlantPeavine *this,Plant *param_1)

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
      if (*piVar3 == 6) {
        addGlowEffect((Plant *)this,*(Plant **)(this + 0x10));
        fVar4 = (float)Plant::GetExtraLevelDamge(param_1);
        Plant::SetExtraLevelDamge(param_1,fVar4 + *(float *)(this + 0x16c));
        std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
        goto LAB_04d2236c;
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&uStack_30);
    }
    removeGlowEffect(this,*(Plant **)(this + 0x10));
    std::vector<PlantTag,std::allocator<PlantTag>>::~vector(avStack_20);
  }
LAB_04d2236c:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::initializeProjectile(int, Projectile*) */

void __thiscall
PlantPeavine::initializeProjectile(PlantPeavine *this,int param_1,Projectile *param_2)

{
  int iVar1;
  ElectricPeaProjectile *this_00;
  string *psVar2;
  PlantType *pPVar3;
  RtObject *pRVar4;
  ElectricPeashooterProps *pEVar5;
  PlantPoisonPeashooterProjectile *this_01;
  PoisonPeashooterProps *pPVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 7) {
    if ((param_2 == (Projectile *)0x0) ||
       (this_01 = Sexy::RtObject::Cast<PlantPoisonPeashooterProjectile>((RtObject *)param_2),
       this_01 == (PlantPoisonPeashooterProjectile *)0x0)) goto LAB_04d224c4;
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_10,"poisonpeashooter");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pRVar4 = (RtObject *)PlantType::GetProps(pPVar3);
    pPVar6 = Sexy::RtObject::Cast<PoisonPeashooterProps>(pRVar4);
    if (pPVar6 != (PoisonPeashooterProps *)0x0) {
      PlantPoisonPeashooterProjectile::InitializeValues
                (this_01,(float)*(int *)(pPVar6 + 0x2c4),*(float *)(pPVar6 + 0x2c8),
                 *(float *)(pPVar6 + 0x2cc),*(float *)(pPVar6 + 0x2d0));
    }
  }
  else {
    if (param_1 != 4) goto LAB_04d224c4;
    if (param_2 == (Projectile *)0x0) {
      this_00 = (ElectricPeaProjectile *)0x0;
    }
    else {
      this_00 = Sexy::RtObject::Cast<ElectricPeaProjectile>((RtObject *)param_2);
    }
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_10,"electricpeashooter");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::string::~string(asStack_10);
    nop();
    pPVar3 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    pRVar4 = (RtObject *)PlantType::GetProps(pPVar3);
    pEVar5 = Sexy::RtObject::Cast<ElectricPeashooterProps_const>(pRVar4);
    if (pEVar5 != (ElectricPeashooterProps *)0x0) {
      fVar8 = *(float *)(pEVar5 + 0x2c0);
      iVar1 = *(int *)(pEVar5 + 700);
      fVar9 = *(float *)(pEVar5 + 0x2c4);
      fVar10 = *(float *)(pEVar5 + 0x2b8);
      fVar7 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      ElectricPeaProjectile::SetProjectileData(this_00,fVar10,iVar1,fVar8,fVar7 * fVar9);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
LAB_04d224c4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPeavine::OnAnimCommand(std::string const&, std::string const&) */

void PlantPeavine::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Projectile *pPVar5;
  SharkMinion *this;
  long lVar6;
  long lVar7;
  code *pcVar8;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"fire");
  if (bVar1) {
    uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110);
    PlantFramework::FindTargetZombie(aRStack_18,param_1,0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar2 != '\0') {
      this = (SharkMinion *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      uVar4 = SharkMinion::getRow(this);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    uVar3 = getProjectileType((PlantPeavine *)param_1);
    lVar6 = *(long *)param_1;
    *(undefined4 *)(lVar7 + 0x150) = uVar3;
    pcVar8 = *(code **)(lVar6 + 0xb0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    pPVar5 = (Projectile *)
             (*pcVar8)(param_1,aRStack_10,uVar4,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    initializeProjectile((PlantPeavine *)param_1,*(int *)(*(long *)(param_1 + 0x10) + 0x150),pPVar5)
    ;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* PlantPeavine::ApplyPlantfood() */

void __thiscall PlantPeavine::ApplyPlantfood(PlantPeavine *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 != '\0') {
    return;
  }
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar2 = FUN_04d21fcc(*(undefined8 *)(this + 0x10));
  GatlingPeaPlantfood::Start
            ((GatlingPeaPlantfood *)(this + 0x140),*(float *)(lVar2 + 0x38),*(int *)(lVar2 + 0x2b8),
             1.0);
  return;
}


/* PlantPeavine::Initialize() */

void __thiscall PlantPeavine::Initialize(PlantPeavine *this)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_04d21fcc(*(undefined8 *)(this + 0x10));
  uVar1 = FUN_04d209ec(*(undefined8 *)(this + 0x10));
  switch(uVar1) {
  case 1:
    *(undefined4 *)(this + 0x168) = *(undefined4 *)(lVar2 + 700);
    *(undefined4 *)(this + 0x16c) = 0;
    PlantVineFramework::Initialize((PlantVineFramework *)this);
    return;
  case 2:
    uVar1 = *(undefined4 *)(lVar2 + 0x2c0);
    *(undefined4 *)(this + 0x16c) = *(undefined4 *)(lVar2 + 0x2c8);
    *(undefined4 *)(this + 0x168) = uVar1;
    PlantVineFramework::Initialize((PlantVineFramework *)this);
    return;
  case 3:
  case 4:
  case 5:
    uVar1 = *(undefined4 *)(lVar2 + 0x2cc);
    *(undefined4 *)(this + 0x168) = *(undefined4 *)(lVar2 + 0x2c4);
    *(undefined4 *)(this + 0x16c) = uVar1;
  }
  PlantVineFramework::Initialize((PlantVineFramework *)this);
  return;
}


/* PlantPeavine::onDestroy() */

void __thiscall PlantPeavine::onDestroy(PlantPeavine *this)

{
  removeGlowEffect(this,*(Plant **)(this + 0x10));
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


// Class: PlantBirthSunflower


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::StaticClassInit() */

void PlantBirthSunflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBirthSunflower");
    (*pcVar2)(plVar1,asStack_10,FUN_040dc4bc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBirthSunflower::StaticGetClass() */

long * PlantBirthSunflower::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBirthSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBirthSunflower::GetClass() const */

long * PlantBirthSunflower::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantBirthSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBirthSunflower::PlantBirthSunflower() */

void __thiscall PlantBirthSunflower::PlantBirthSunflower(PlantBirthSunflower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067dc860;
  return;
}


/* PlantBirthSunflower::StaticNew() */

PlantBirthSunflower * PlantBirthSunflower::StaticNew(void)

{
  PlantBirthSunflower *this;
  
  this = ::operator_new(0x28);
  PlantBirthSunflower(this);
  return this;
}


/* PlantBirthSunflower::~PlantBirthSunflower() */

void __thiscall PlantBirthSunflower::~PlantBirthSunflower(PlantBirthSunflower *this)

{
  *(undefined ***)this = &PTR_GetClass_067dc860;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBirthSunflower::~PlantBirthSunflower() */

void __thiscall PlantBirthSunflower::~PlantBirthSunflower(PlantBirthSunflower *this)

{
  ~PlantBirthSunflower(this);
  AK::FreeHook(this);
  return;
}


/* PlantBirthSunflower::Idle() */

void __thiscall PlantBirthSunflower::Idle(PlantBirthSunflower *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::onGroundCherryApplyPlantFood() */

void __thiscall PlantBirthSunflower::onGroundCherryApplyPlantFood(PlantBirthSunflower *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar1 == 1) {
    pcVar4 = *(code **)(*(long *)this + 0x1e8);
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar3 = FUN_040dc1e8(*(undefined8 *)(lVar2 + 0x70));
    (*pcVar4)(this,uVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Plant::ProduceExtraSun(*(Plant **)(this + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::registerForEvents() */

void __thiscall PlantBirthSunflower::registerForEvents(PlantBirthSunflower *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGroundCherryApplyPlantFood);
  Sexy::Delegate0::Delegate0<PlantBirthSunflower,void(PlantBirthSunflower::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PlantFoodByGroundCherry,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::PlaySpotLightEffect() */

void __thiscall PlantBirthSunflower::PlaySpotLightEffect(PlantBirthSunflower *this)

{
  int iVar1;
  undefined4 uVar2;
  ResourceInfo *pRVar3;
  undefined8 *puVar4;
  Effect_PopAnim *pEVar5;
  string asStack_30 [8];
  string asStack_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"POPANIM_EFFECTS_BIRTHSUNFLOWER_PLANTFOOD_TX");
  GetPAMByName(asStack_28);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,0.0,-28.0,0.0);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_18 = *puVar4;
  local_10 = *(undefined4 *)(puVar4 + 1);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_18,(Vec3 *)asStack_28);
  iVar1 = Board::MakeRenderOrder(0x65130,0,0);
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar3,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(pEVar5,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)&local_18,iVar1);
  std::string::string(asStack_30,"plantfood");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,asStack_30,0);
  std::string::~string(asStack_30);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,0.0,-28.0,0.0);
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_18 = *puVar4;
  local_10 = *(undefined4 *)(puVar4 + 1);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_18,(Vec3 *)asStack_28);
  uVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = Board::MakeRenderOrder(0x62250,uVar2,0);
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar3,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(pEVar5,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)&local_18,iVar1);
  std::string::string(asStack_30,"plantfood2");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,asStack_30,0);
  std::string::~string(asStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBirthSunflower::UpdateActions() */

void __thiscall PlantBirthSunflower::UpdateActions(PlantBirthSunflower *this)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *this_00;
  PlantAnimRig_BirthSunflower *this_01;
  Plant *this_02;
  Board *this_03;
  float fVar3;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar2 == 1) {
    fVar3 = (float)PVZ_T();
    this_02 = *(Plant **)(this + 0x10);
    if (*(float *)(this_02 + 300) < fVar3) {
      this_03 = *(Board **)(gLawnApp + 0x9f0);
      cVar1 = Board::IsPlaying(this_03);
      if (cVar1 != '\0') {
        cVar1 = Board::IsSunSpawningSuppressed(this_03);
        if (cVar1 == '\0') {
          this_01 = (PlantAnimRig_BirthSunflower *)FUN_040dd640(*(undefined8 *)(this + 0x10));
          PlantAnimRig_BirthSunflower::PlaySing(this_01);
          this_02 = *(Plant **)(this + 0x10);
        }
        else {
          this_02 = *(Plant **)(this + 0x10);
        }
      }
      Plant::ResetLaunchTimer(this_02,false);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::PlaySunDanceEffect() */

void __thiscall PlantBirthSunflower::PlaySunDanceEffect(PlantBirthSunflower *this)

{
  int iVar1;
  undefined8 *puVar2;
  LoveTwoSun *this_00;
  ResourceInfo *pRVar3;
  string asStack_38 [8];
  RtWeakPtr aRStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-115.0,0.0);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_18,aVStack_28);
  iVar1 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  this_00 = Board::AddEffect<LoveTwoSun>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_38,"POPANIM_EFFECTS_BIRTHSUNFLOWER_PLANTFOOD_SUNTX");
  GetPAMByName(asStack_38);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  std::string::~string(asStack_38);
  nop();
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this_00,true);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar1);
  LoveTwoSun::SetBoardPos(this_00,(SexyVector3 *)&local_18);
  FUN_040dd778(*(undefined8 *)(this + 0x10));
  ComponentPlantLauncher::SetCursorTexture((string *)this_00);
  LoveTwoSun::PlayDance(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBirthSunflower::getCollectableTypeName() */

void PlantBirthSunflower::getCollectableTypeName(void)

{
  long in_x0;
  
  FUN_040dd778(*(undefined8 *)(in_x0 + 0x10));
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::ApplyAccompaniment() */

void __thiscall PlantBirthSunflower::ApplyAccompaniment(PlantBirthSunflower *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *this_00;
  PlantBirthSunflower *pPVar4;
  PlantAnimRig_BirthSunflower *this_01;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    do {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
      if (((this_00 != (Plant *)0x0) && (*(Plant **)(this + 0x10) != this_00)) &&
         (pPVar4 = Sexy::RtObject::Cast<PlantBirthSunflower>(*(RtObject **)(this_00 + 0xa8)),
         pPVar4 != (PlantBirthSunflower *)0x0)) {
        if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
          cVar2 = Plant::IsInPlantFoodState(this_00);
        }
        else {
          cVar2 = (**(code **)(*(long *)this_00 + 0x1f8))();
        }
        if (((cVar2 == '\0') &&
            (cVar2 = FUN_040dc064(*(undefined4 *)(this_00 + 0x1d0)), cVar2 == '\0')) &&
           (cVar2 = Plant::IsSuspended(this_00), cVar2 == '\0')) {
          this_01 = (PlantAnimRig_BirthSunflower *)FUN_040dd640(*(undefined8 *)(pPVar4 + 0x10));
          PlantAnimRig_BirthSunflower::PlayAccompaniment(this_01);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::ApplyPlantfoodSongEffect() */

void __thiscall PlantBirthSunflower::ApplyPlantfoodSongEffect(PlantBirthSunflower *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  Plant *this_00;
  Zombie *pZVar6;
  undefined8 uVar7;
  Effect_AngerFlame *this_01;
  RtObject *this_02;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtrBase aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(1,2);
  EntityFinder::GetEntitiesOnBoard(avStack_20,uVar3);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_02 = (RtObject *)*puVar5;
    this_00 = Sexy::RtObject::Cast<Plant>(this_02);
    if ((this_00 == (Plant *)0x0) || (*(Plant **)(this + 0x10) == this_00)) {
      pZVar6 = Sexy::RtObject::Cast<Zombie>(this_02);
      if (pZVar6 != (Zombie *)0x0) {
        uVar7 = operator|(1,8);
        uVar3 = operator|(uVar7,0x200);
        cVar2 = Zombie::MatchesAny(pZVar6,uVar3);
        if (((cVar2 == '\0') &&
            (cVar2 = (**(code **)(*(long *)pZVar6 + 0x4d8))(pZVar6), cVar2 == '\0')) &&
           (cVar2 = (**(code **)(*(long *)pZVar6 + 0x508))(pZVar6), cVar2 == '\0')) {
          Zombie::ApplyCondition((Zombie *)0x3f800000,0,pZVar6,0x18,1);
        }
      }
    }
    else {
      cVar2 = FUN_040dc064(*(undefined4 *)(this_00 + 0x1d0));
      if (((cVar2 == '\0') && (cVar2 = Plant::IsSuspended(this_00), cVar2 == '\0')) &&
         ((cVar2 = Plant::CanBeWatered(this_00), cVar2 != '\0' &&
          (cVar2 = Plant::IsWatering(this_00), cVar2 == '\0')))) {
        Plant::GetType();
        Plant::GetType();
        cVar2 = Sexy::RtWeakPtrBase::operator==(aRStack_30,(RtWeakPtrBase *)aRStack_28);
        if (cVar2 != '\0') {
          this_01 = (Effect_AngerFlame *)
                    UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_00);
          iVar4 = Effect_AngerFlame::GetFlameCol(this_01);
          if (iVar4 == 0xf) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            goto LAB_040ddde4;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        Plant::Water(this_00,true,-1.0);
      }
    }
LAB_040ddde4:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* PlantBirthSunflower::UpdatePlantfood() */

void __thiscall PlantBirthSunflower::UpdatePlantfood(PlantBirthSunflower *this)

{
  ApplyPlantfoodSongEffect(this);
  Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::StopWaterPlant() */

void __thiscall PlantBirthSunflower::StopWaterPlant(PlantBirthSunflower *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,1);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if ((((this_00 != (Plant *)0x0) && (*(Plant **)(this + 0x10) != this_00)) &&
        (cVar2 = FUN_040dc064(*(undefined4 *)(this_00 + 0x1d0)), cVar2 == '\0')) &&
       ((cVar2 = Plant::IsSuspended(this_00), cVar2 == '\0' &&
        (cVar2 = Plant::IsWatering(this_00), cVar2 != '\0')))) {
      Plant::Water(this_00,false,-1.0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::ApplyPlantfood() */

void __thiscall PlantBirthSunflower::ApplyPlantfood(PlantBirthSunflower *this)

{
  char cVar1;
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  PlaySpotLightEffect(this);
  cVar1 = PlantHydrocotyledrummer::HavePlantfoodSinger((PlantHydrocotyledrummer *)this);
  if (cVar1 == '\0') {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_TwoYear_BGM");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
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
/* PlantBirthSunflower::CancelPlantfood() */

void __thiscall PlantBirthSunflower::CancelPlantfood(PlantBirthSunflower *this)

{
  char cVar1;
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  cVar1 = PlantHydrocotyledrummer::HavePlantfoodSinger((PlantHydrocotyledrummer *)this);
  if (cVar1 == '\0') {
    StopWaterPlant(this);
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Stop_TwoYear_BGM");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
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
/* PlantBirthSunflower::ProduceSun(PlantAction const&) */

void __thiscall PlantBirthSunflower::ProduceSun(PlantBirthSunflower *this,PlantAction *param_1)

{
  char cVar1;
  Collectable *this_00;
  undefined8 *puVar2;
  string asStack_40 [8];
  float local_38;
  float fStack_34;
  float local_30;
  float local_28 [4];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x1f0))();
  if (cVar1 != '\0') {
    getCollectableTypeName();
    this_00 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    local_38 = (float)*puVar2;
    local_30 = *(float *)(puVar2 + 1) - *(float *)(param_1 + 0x6c);
    fStack_34 = (float)((ulong)*puVar2 >> 0x20);
    _local_38 = CONCAT44(fStack_34,*(float *)(param_1 + 0x68) + local_38);
    DVec3::DVec3((DVec3 *)local_28);
    local_28[0] = (float)PlantFramework::Rand((PlantFramework *)this,80.0);
    local_28[0] = local_28[0] - 40.0;
    local_28[1] = 5.0;
    local_28[2] = (float)PlantFramework::Rand((PlantFramework *)this,170.0);
    local_28[2] = local_28[2] + 170.0;
    if (3 < *(int *)(*(long *)(this + 0x10) + 0x110)) {
      _local_38 = CONCAT44(fStack_34 - 10.0,local_38);
      local_28[1] = 0.0;
    }
    (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_38);
    EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,-600.0);
    Collectable::SetMotionNewtonian(this_00,(SexyVector3 *)local_28,(SexyVector3 *)aVStack_18,true);
    Collectable::StartExpirationTimerAfterMotion(this_00);
    MessageRouter::Post<CollectableSun*,CollectableSun*>
              ((MessageRouter *)gMessageRouter,Message::SunProducedByPlant,(CollectableSun *)this_00
              );
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::AttackUpPlant() */

void __thiscall PlantBirthSunflower::AttackUpPlant(PlantBirthSunflower *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  Plant *this_00;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_70;
  undefined8 local_68;
  Point aPStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets
            (aIStack_48,*(int *)(*(long *)(this + 0x10) + 0x114) + -1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,1,aIStack_48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  lVar4 = FUN_040dd778(*(undefined8 *)(this + 0x10));
  uVar9 = *(undefined8 *)(this + 0x10);
  iVar3 = FUN_040dc074(uVar9);
  lVar5 = FUN_040dd778(uVar9);
  pfVar6 = (float *)FUN_040dc080(*(undefined8 *)(lVar5 + 0x2b8),(long)(iVar3 + -1));
  fVar11 = *pfVar6;
  fVar10 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  lVar5 = FUN_040dd778(*(undefined8 *)(this + 0x10));
  pfVar6 = (float *)FUN_040dc080(*(undefined8 *)(lVar5 + 0x2d0),(long)(iVar3 + -1));
  fVar12 = *pfVar6;
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
    if (((this_00 != *(Plant **)(this + 0x10)) && (this_00 != (Plant *)0x0)) &&
       (cVar2 = PlantRestrictionSet::IsIncluded((Plant *)(lVar4 + 0x2f8)), cVar2 != '\0')) {
      Plant::SetAttackUpValue(this_00,true,fVar12,fVar11 + fVar10);
      Plant::ChangeSpeedModifier
                (this_00,(fVar11 + fVar10 + 1.0) * *(float *)(this_00 + 0xe0),fVar12);
      Sexy::Point::Point(aPStack_60,*(int *)(this_00 + 0x114),*(int *)(this_00 + 0x110));
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_20);
      local_58 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                           (uVar9,uVar8,aPStack_60);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
      if (bVar1) {
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,aPStack_60);
        iVar3 = FUN_040dc074(*(undefined8 *)(this + 0x10));
        Plant::PlaySongEffect(this_00,iVar3);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBirthSunflower::OnAnimCommand(std::string const&, std::string const&) */

void PlantBirthSunflower::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"song_effect");
  if (bVar1) {
    pcVar6 = *(code **)(*(long *)param_1 + 0x1e8);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar4 = FUN_040dc1e8(*(undefined8 *)(lVar3 + 0x70));
    (*pcVar6)(param_1,uVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    pcVar6 = *(code **)(*(long *)param_1 + 0x1e8);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar4 = FUN_040dc1e8(*(undefined8 *)(lVar3 + 0x70));
    (*pcVar6)(param_1,uVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Plant::ProduceExtraSun(*(Plant **)(param_1 + 0x10));
    MessageRouter::Post<BoardEntity*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::SunProductionTriggered,
               *(Plant **)(param_1 + 0x10));
    AttackUpPlant((PlantBirthSunflower *)param_1);
    uVar5 = 1;
  }
  else {
    bVar1 = std::operator==(param_2,"plantfood_love_begin");
    if (bVar1) {
      PlaySunDanceEffect((PlantBirthSunflower *)param_1);
      uVar5 = 1;
    }
    else {
      bVar1 = std::operator==(param_2,"plantfood_number_begin");
      uVar5 = (ulong)bVar1;
      if (!bVar1) {
        uVar5 = ___stack_chk_guard;
        if (local_8 == ___stack_chk_guard) {
          PlantFramework::OnAnimCommand(param_1,param_2);
          return;
        }
        goto LAB_040df070;
      }
      uVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
      if ((uVar2 & 0xff) != 0) {
        uVar5 = (ulong)(uVar2 & 0xff);
        ApplyAccompaniment((PlantBirthSunflower *)param_1);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_040df070:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// Class: PlantHurrikale


/* PlantHurrikale::PlantHurrikale() */

void __thiscall PlantHurrikale::PlantHurrikale(PlantHurrikale *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x2c] = (PlantHurrikale)0x0;
  *(undefined ***)this = &PTR_GetClass_067d2700;
  return;
}


/* PlantHurrikale::StaticNew() */

PlantHurrikale * PlantHurrikale::StaticNew(void)

{
  PlantHurrikale *this;
  
  this = ::operator_new(0x30);
  PlantHurrikale(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHurrikale::StaticClassInit() */

void PlantHurrikale::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHurrikale");
    (*pcVar2)(plVar1,asStack_10,FUN_040ab048,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHurrikale::StaticGetClass() */

long * PlantHurrikale::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHurrikale",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHurrikale::GetClass() const */

long * PlantHurrikale::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHurrikale",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHurrikale::stopBlowing() */

void __thiscall PlantHurrikale::stopBlowing(PlantHurrikale *this)

{
  undefined4 uVar1;
  
  this[0x2c] = (PlantHurrikale)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PlantHurrikale::onAnimStoppedCallback(std::string const&) */

void PlantHurrikale::onAnimStoppedCallback(string *param_1)

{
  stopBlowing((PlantHurrikale *)param_1);
  Plant::KillPlant(*(Plant **)(param_1 + 0x10),1,0,0x8000000000);
  return;
}


/* PlantHurrikale::canBeChilledByHurrikale(Zombie const*) const */

byte __thiscall PlantHurrikale::canBeChilledByHurrikale(PlantHurrikale *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
  if ((((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')
       ) || (cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0')) ||
     (((cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0' ||
       (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 != '\0')) ||
      ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0' ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0')))))) {
    bVar2 = 0;
  }
  else {
    bVar2 = Zombie::DoesIgnoresCollisions(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* PlantHurrikale::~PlantHurrikale() */

void __thiscall PlantHurrikale::~PlantHurrikale(PlantHurrikale *this)

{
  *(undefined ***)this = &PTR_GetClass_067d2700;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHurrikale::~PlantHurrikale() */

void __thiscall PlantHurrikale::~PlantHurrikale(PlantHurrikale *this)

{
  ~PlantHurrikale(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHurrikale::canBeMovedByHurrikale(Zombie const*) const */

void __thiscall PlantHurrikale::canBeMovedByHurrikale(PlantHurrikale *this,Zombie *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_05475d88(asStack_10,lVar4 + 8);
  bVar1 = std::operator==(asStack_10,"steam_gentleman");
  if (!bVar1) {
    bVar1 = std::operator==(asStack_10,"renai_gliding");
    if (!bVar1) {
      cVar3 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
      bVar2 = 0;
      if ((((((cVar3 != '\0') &&
             (cVar3 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar3 == '\0')) &&
            (cVar3 = Zombie::HasFogImmune(param_1), cVar3 == '\0')) &&
           ((cVar3 = Zombie::IsBerserk(param_1), cVar3 == '\0' &&
            (cVar3 = Zombie::IsIgnoringAllDamage(param_1), cVar3 == '\0')))) &&
          ((cVar3 = Zombie::CanBeLaunchedByPlants(param_1), cVar3 != '\0' &&
           ((cVar3 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar3 == '\0' &&
            (cVar3 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar3 == '\0')))))) &&
         (cVar3 = Zombie::CanTakeFatalDamage(param_1), cVar3 != '\0')) {
        bVar2 = Zombie::IsControlled(param_1);
        bVar2 = bVar2 ^ 1;
      }
      goto LAB_040ab3e0;
    }
  }
  bVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  bVar2 = bVar2 ^ 1;
LAB_040ab3e0:
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHurrikale::nudgeZombie(Zombie*, float, float) */

void __thiscall
PlantHurrikale::nudgeZombie(PlantHurrikale *this,Zombie *param_1,float param_2,float param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  local_18 = *puVar2;
  local_10 = *(float *)(puVar2 + 1);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  if (param_2 < (float)local_18) goto LAB_040ab550;
  fVar3 = (float)PVZ_Dt();
  fVar3 = (float)local_18 + fVar3 * (float)iVar1 * param_3;
  local_18 = CONCAT44(local_18._4_4_,fVar3);
  if (param_2 < fVar3) {
    local_18 = CONCAT44(local_18._4_4_,param_2);
LAB_040ab614:
    fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,10.0);
    fVar3 = -fVar3;
  }
  else {
    if (param_2 == fVar3) goto LAB_040ab614;
    dVar5 = sin((double)(fVar3 + fVar3));
    fVar3 = (float)((dVar5 + -1.0) * 0.5) * 10.0;
  }
  fVar3 = fVar3 - local_10;
  fVar4 = (float)PVZ_Dt();
  local_10 = (float)ClampFloat(fVar4 * 10.0 * fVar3,-10.0,0.0);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_18);
LAB_040ab550:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHurrikale::createCloudEffect() */

void __thiscall PlantHurrikale::createCloudEffect(PlantHurrikale *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  string asStack_50 [8];
  Vec3 aVStack_48 [16];
  Vec3 aVStack_38 [16];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(*(long *)(this + 0x10) + 0x114));
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(*(long *)(this + 0x10) + 0x110));
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  EATextSquish::Vec3::Vec3
            (aVStack_48,(float)iVar1 - (float)iVar2 * 1.5,(float)iVar3 - (float)iVar4 * 1.5,0.0);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3(aVStack_38,(float)iVar1,0.0,0.0);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  uVar8 = 0;
  uVar7 = 0xc1a00000;
  EATextSquish::Vec3::Vec3(aVStack_28,-(float)iVar1,-20.0,0.0);
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_50,"POPANIM_EFFECTS_HURRIKALE_EFFECT");
  GetPAMByName(asStack_50);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_50);
  nop();
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_48,(SexyVector3 *)aVStack_38);
  local_14 = uVar7;
  local_10 = uVar8;
  iVar1 = (**(code **)(*(long *)this + 0x88))(this);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar5,(SexyVector3 *)&local_18,iVar1 + 1);
  std::string::string((string *)&local_18,"attack");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  pEVar5 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_50,"POPANIM_EFFECTS_HURRIKALE_BACK_EFFECT");
  GetPAMByName(asStack_50);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_50);
  nop();
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_48,(SexyVector3 *)aVStack_28);
  local_14 = uVar7;
  local_10 = uVar8;
  iVar1 = (**(code **)(*(long *)this + 0x88))(this);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)pEVar5,(SexyVector3 *)&local_18,iVar1 + 1);
  std::string::string((string *)&local_18,"attack");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHurrikale::startBlowing() */

void __thiscall PlantHurrikale::startBlowing(PlantHurrikale *this)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  this[0x2c] = (PlantHurrikale)0x1;
  local_8 = ___stack_chk_guard;
  createCloudEffect(this);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar2;
  BoardEntity::CalcGridPosition();
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_18,0,local_1c,iVar1,1);
  Plant::SendHelpToPlants(*(Plant **)(this + 0x10),0,aIStack_18,0x7fffffff);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHurrikale::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantHurrikale::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==("use_action",param_2);
  if (!bVar1) {
    uVar2 = PlantFramework::OnAnimCommand(param_1,param_2);
    return uVar2;
  }
  startBlowing((PlantHurrikale *)param_1);
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHurrikale::Initialize() */

void __thiscall PlantHurrikale::Initialize(PlantHurrikale *this)

{
  char cVar1;
  long *plVar2;
  RealObject *this_00;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  stopBlowing(this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar3 = *(code **)(*plVar2 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_58,"Play_Plant_Hurrikale_Attack");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHurrikale::blowZombies() */

void __thiscall PlantHurrikale::blowZombies(PlantHurrikale *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  ZombieGentleman *this_02;
  ZombieBlowerSubSystem *pZVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  ZombieBlowerSubSystem *pZVar12;
  undefined8 local_90;
  undefined8 local_88;
  string asStack_80 [8];
  Insets aIStack_78 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  lVar7 = FUN_040aba5c(*(undefined8 *)(this + 0x10));
  fVar10 = *(float *)(lVar7 + 0x2c0);
  lVar7 = FUN_040aba5c(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  pZVar12._0_4_ = *(ZombieBlowerSubSystem **)(lVar7 + 0x2b8);
  lVar7 = FUN_040aba5c(*(undefined8 *)(this + 0x10));
  uVar11 = *(undefined4 *)(lVar7 + 700);
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  iVar6 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_78,-2,iVar1,iVar6 + 3,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  EntityFinder::GetEntitiesInGridSquares(avStack_68,2,aIStack_78);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
    if (!bVar2) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    nop();
    cVar3 = canBeMovedByHurrikale(this,this_00);
    if (cVar3 == '\0') {
LAB_040abd98:
      cVar3 = canBeChilledByHurrikale(this,this_00);
    }
    else {
      if (*(code **)(*(long *)this_00 + 0x340) != Zombie::OnBeforeBlown) {
        (**(code **)(*(long *)this_00 + 0x340))(this_00,*(undefined8 *)(this + 0x10));
      }
      cVar3 = Zombie::IsOnGround(this_00);
      if (cVar3 == '\0') {
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        FUN_05475d88(asStack_80,lVar7 + 8);
        bVar2 = std::operator==(asStack_80,"steam_gentleman");
        if (bVar2) {
          this_02 = Sexy::RtObject::Cast<ZombieGentleman>((RtObject *)this_00);
          if ((this_02 != (ZombieGentleman *)0x0) &&
             (cVar3 = Zombie::IsFlying((Zombie *)this_02), cVar3 != '\0')) {
            Zombie::setZombieState((Zombie *)this_02,0x24,0);
            ZombieGentleman::setIsHasUmbrella(this_02,false);
          }
        }
        else {
          pZVar8 = Board::GetGameSubSystem<ZombieBlowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          uVar9 = *(undefined8 *)(this + 0x10);
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
          ZombieBlowerSubSystem::BlowZombie(pZVar12._0_4_,uVar11,pZVar8,uVar9,this_00,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
        MessageRouter::Post<Plant*,Plant*>
                  ((MessageRouter *)gMessageRouter,Message::PlantBlow,*(Plant **)(this + 0x10));
        std::string::~string(asStack_80);
        goto LAB_040abd98;
      }
      nudgeZombie(this,this_00,(float)(iVar4 * iVar5 + 200),fVar10);
      cVar3 = canBeChilledByHurrikale(this,this_00);
    }
    if (cVar3 != '\0') {
      cVar3 = Zombie::HasCondition(this_00,0);
      if (cVar3 == '\0') {
        lVar7 = FUN_040aba5c(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(lVar7 + 0x2c8),0,this_00,0,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  } while( true );
}


/* PlantHurrikale::UpdateActions() */

void __thiscall PlantHurrikale::UpdateActions(PlantHurrikale *this)

{
  long lVar1;
  ZombieBlowerSubSystem *pZVar2;
  float fVar3;
  float fVar4;
  
  if (this[0x2c] != (PlantHurrikale)0x0) {
    fVar3 = (float)PVZ_T();
    fVar4 = *(float *)(this + 0x28);
    lVar1 = FUN_040aba5c(*(undefined8 *)(this + 0x10));
    if (*(float *)(lVar1 + 0x2c4) <= fVar3 - fVar4) {
      stopBlowing(this);
      return;
    }
    blowZombies(this);
    pZVar2 = Board::GetGameSubSystem<ZombieBlowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    if (pZVar2 != (ZombieBlowerSubSystem *)0x0) {
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::HurrikaleWind,
                 *(int *)(*(long *)(this + 0x10) + 0x110));
      return;
    }
  }
  return;
}


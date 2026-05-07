// Class: PlantVanilla


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::StaticClassInit() */

void PlantVanilla::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantVanilla");
    (*pcVar2)(plVar1,asStack_10,FUN_03969ac4,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantVanilla::StaticGetClass() */

long * PlantVanilla::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantVanilla",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantVanilla::GetClass() const */

long * PlantVanilla::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantVanilla",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::canBeMovedByVanilla(Zombie const*) const */

void __thiscall PlantVanilla::canBeMovedByVanilla(PlantVanilla *this,Zombie *param_1)

{
  bool bVar1;
  byte bVar2;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  FUN_05475d88(asStack_10,lVar3 + 8);
  bVar1 = std::operator==(asStack_10,"steam_gentleman");
  if (!bVar1) {
    bVar1 = std::operator==(asStack_10,"renai_gliding");
    if (!bVar1) {
      bVar2 = 0;
      goto LAB_03966300;
    }
  }
  bVar2 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  bVar2 = bVar2 ^ 1;
LAB_03966300:
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::CheckLv5SkillTriggle() */

void __thiscall PlantVanilla::CheckLv5SkillTriggle(PlantVanilla *this)

{
  char cVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_03964724(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar2 = (float)RandRangeFloat(0.0,1.0);
    if (fVar2 < *(float *)(extraout_x0 + 0x308)) {
      this[0x58] = (PlantVanilla)0x1;
      goto LAB_03966410;
    }
  }
  this[0x58] = (PlantVanilla)0x0;
  cVar1 = '\0';
LAB_03966410:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::PlaySuperAnimation() */

void __thiscall PlantVanilla::PlaySuperAnimation(PlantVanilla *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig *pPVar4;
  undefined1 *__n;
  UIEasyButtonWidget *this_00;
  undefined1 auStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  __n = auStack_48;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"attack");
  nop();
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  cVar1 = FUN_03964724(this_00);
  if (cVar1 != '\0') {
    std::string::append(asStack_40,"attack2",(size_t)__n);
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  }
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
  if (iVar2 == -1) {
    std::string::~string(asStack_40);
  }
  else {
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar4,2);
    std::string::~string(asStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantVanilla::FindTargetAndFire(PlantWeapon) */

PlantVanilla PlantVanilla::FindTargetAndFire(PlantVanilla *param_1)

{
  char cVar1;
  int iVar2;
  PlantVanilla PVar3;
  
  PVar3 = (PlantVanilla)0x0;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    iVar2 = FUN_0396471c(*(undefined8 *)(param_1 + 0x10));
    if ((iVar2 == 5) && (PVar3 = param_1[0x58], PVar3 != (PlantVanilla)0x0)) {
      PlaySuperAnimation(param_1);
      return PVar3;
    }
    PVar3 = (PlantVanilla)0x1;
    (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
  }
  return PVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::SpawnProjectiles() */

void __thiscall PlantVanilla::SpawnProjectiles(PlantVanilla *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  RtObject *this_00;
  VanillaPlantFoodProjectile *this_01;
  undefined8 *puVar4;
  Plant *this_02;
  float fVar5;
  float fVar6;
  undefined8 local_28;
  undefined4 local_20;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [16];
  long local_8;
  
  this_02 = *(Plant **)(this + 0x10);
  *(undefined4 *)(this_02 + 0x150) = 3;
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::GetAvatarEnable(this_02);
  if (cVar2 != '\0') {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 4;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  this_00 = (RtObject *)
            PlantFramework::Fire
                      ((PlantFramework *)this,a_Stack_18,
                       *(undefined4 *)(*(long *)(this + 0x10) + 0x110),
                       *(undefined4 *)(*(long *)(this + 0x10) + 0x150));
  this_01 = Sexy::RtObject::Cast<VanillaPlantFoodProjectile>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  puVar4 = (undefined8 *)Projectile::GetVelocity((Projectile *)this_01);
  local_28 = *puVar4;
  local_20 = *(undefined4 *)(puVar4 + 1);
  VanillaPlantFoodProjectile::MakePositionAdjustment(this_01);
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (iVar1 == iVar3 + -1) {
    fVar6 = -0.70710677;
  }
  else {
    fVar6 = 0.70710677;
  }
  fVar5 = (float)DVec3::getLength((DVec3 *)&local_28);
  EATextSquish::Vec3::Vec3((Vec3 *)a_Stack_18,fVar5 * fVar6,fVar5 * -0.70710677,0.0);
  Projectile::SetVelocity((Projectile *)this_01,(SexyVector3 *)a_Stack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantVanilla::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall PlantVanilla::OnAnimCommand(PlantVanilla *this,string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_1,"use_action");
  if ((bVar1) &&
     (cVar2 = (**(code **)(*(long *)this + 0x180))(this,*(code **)(*(long *)this + 0x180),param_2),
     cVar2 != '\0')) {
    SpawnProjectiles(this);
    PlantFramework::OnAnimCommand((string *)this,param_1);
    return;
  }
  PlantFramework::OnAnimCommand((string *)this,param_1);
  return;
}


/* PlantVanilla::PlantVanilla() */

void __thiscall PlantVanilla::PlantVanilla(PlantVanilla *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_066d4e20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PlantVanilla::StaticNew() */

PlantVanilla * PlantVanilla::StaticNew(void)

{
  PlantVanilla *this;
  
  this = ::operator_new(0x68);
  PlantVanilla(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::ApplyPlantfood() */

void __thiscall PlantVanilla::ApplyPlantfood(PlantVanilla *this)

{
  PopAnimRig *this_00;
  PlantTypeCaulipower *this_01;
  undefined8 uVar1;
  string *psVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = (PopAnimRig *)FUN_03967d88(*(undefined8 *)(this + 0x10));
  Plant::GetType();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  PlantTypeCaulipower::getAvatarPlantFoodLayer(this_01);
  uVar1 = FUN_0547429c();
  Sexy::OutputDebugStrF((wchar_t *)"PlantVanilla type getAvatarPlantFoodLayer() is %s",uVar1);
  psVar2 = (string *)PlantTypeCaulipower::getAvatarPlantFoodLayer(this_01);
  PopAnimRig::SetLayerVisibility(this_00,psVar2,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::CancelPlantfood() */

void __thiscall PlantVanilla::CancelPlantfood(PlantVanilla *this)

{
  PopAnimRig *this_00;
  PlantTypeCaulipower *this_01;
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  (**(code **)(*(long *)this + 0x260))(this);
  this_00 = (PopAnimRig *)FUN_03967d88(*(undefined8 *)(this + 0x10));
  Plant::GetType();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  psVar1 = (string *)PlantTypeCaulipower::getAvatarPlantFoodLayer(this_01);
  PopAnimRig::SetLayerVisibility(this_00,psVar1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::blowZombies() */

void __thiscall PlantVanilla::blowZombies(PlantVanilla *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  Zombie *this_01;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar6;
  SexyVector3 *this_03;
  ZombieGentleman *this_04;
  RealObject *this_05;
  ulong uVar7;
  ulong uVar8;
  Plant *this_06;
  undefined8 uVar9;
  code *pcVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  DamageInfo *pDVar15;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  Insets aIStack_108 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_f8 [24];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  DamageInfo aDStack_c8 [96];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardConstants::NUMBER_OF_COLUMNS();
  BoardConstants::GRIDSQUARE_WIDTH();
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  iVar4 = *(int *)(*(long *)(this + 0x10) + 0x110);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_108,-2,iVar4,iVar3 + 3,1);
  DamageInfo::DamageInfo(aDStack_c8);
  this_06 = *(Plant **)(this + 0x10);
  fVar14 = *(float *)(extraout_x0 + 0x314);
  iVar4 = FUN_0396471c(this_06);
  fVar11 = (float)Plant::GetExtraDPSmodifier(this_06);
  pDVar15._0_4_ = (DamageInfo *)(fVar11 * fVar14 * ((float)iVar4 * 0.5 + 1.0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_f8);
  EntityFinder::GetEntitiesInGridSquares(avStack_f8,2,aIStack_108);
  local_120 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_f8);
  local_118 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_f8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_120,(__normal_iterator *)&local_118), bVar1)
  {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_120);
    nop();
    cVar2 = canBeMovedByVanilla(this,this_01);
    if (cVar2 == '\0') {
      this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string((string *)&local_e0,"POPANIM_EFFECTS_VANILLA_NORMALPROJECTILE_HIT");
      GetPAMByName((string *)&local_e0);
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
      Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar6,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      std::string::~string((string *)&local_e0);
      nop();
      uVar12 = 0;
      uVar13 = 0;
      EATextSquish::Vec3::Vec3((Vec3 *)&local_e0,0.0,0.0,0.0);
      Effect_PopAnim::SetCentered(this_02,true);
      this_03 = (SexyVector3 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)this_01);
      local_68 = Sexy::SexyVector3::operator+(this_03,(SexyVector3 *)&local_e0);
      local_64 = uVar12;
      local_60 = uVar13;
      iVar4 = (**(code **)(*(long *)this + 0x88))(this);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_02,(SexyVector3 *)&local_68,iVar4 + 1);
      std::string::string((string *)&local_68,"idle");
      Effect_PopAnim::PlaySingleAnimation(this_02,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,0);
      std::string::~string((string *)&local_68);
      nop();
    }
    else {
      if (*(code **)(*(long *)this_01 + 0x340) != Zombie::OnBeforeBlown) {
        (**(code **)(*(long *)this_01 + 0x340))(this_01,*(undefined8 *)(this + 0x10));
      }
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_01);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,lVar5 + 8);
      bVar1 = std::operator==((string *)&local_68,"steam_gentleman");
      if (((bVar1) &&
          (this_04 = Sexy::RtObject::Cast<ZombieGentleman>((RtObject *)this_01),
          this_04 != (ZombieGentleman *)0x0)) &&
         (cVar2 = FUN_03964744(this_04[0x80a]), cVar2 != '\0')) {
        Zombie::setZombieState((Zombie *)this_04,0x24,0);
        ZombieGentleman::setIsHasUmbrella(this_04,false);
      }
      MessageRouter::Post<Plant*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::PlantBlow,*(Plant **)(this + 0x10));
      std::string::~string((string *)&local_68);
    }
    pcVar10 = *(code **)(*(long *)this_01 + 0x110);
    Sexy::Point::Point((Point *)&local_110,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_e0,1.0,0.0);
    DamageInfo::DamageInfo
              (pDVar15._0_4_,local_e0,uStack_dc,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,
               (Point *)&local_110,0);
    (*pcVar10)(this_01,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_120);
  }
  uVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_e0);
  EntityFinder::GetEntitiesInGridSquares((FastCurve *)&local_e0,4,aIStack_108);
  uVar9 = CONCAT44(uStack_dc,local_e0);
  lVar5 = FUN_03964758(uVar9,local_d8);
  if (lVar5 != 0) {
    do {
      FUN_03964764(uVar9,uVar8);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_120,(RtWeakPtrBase *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      cVar2 = (**(code **)(*(long *)this_05 + 0x200))(this_05);
      if ((cVar2 == '\0') ||
         (cVar2 = RealObject::IsOnOpposingTeam(*(RealObject **)(this + 0x10),this_05), cVar2 == '\0'
         )) {
LAB_03968cd0:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_120)
        ;
      }
      else {
        bVar1 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)this_05);
        if (bVar1) goto LAB_03968cd0;
        pcVar10 = *(code **)(*(long *)this_05 + 0x110);
        Sexy::Point::Point((Point *)&local_118,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_110,1.0,0.0);
        DamageInfo::DamageInfo
                  (pDVar15._0_4_,local_110,local_10c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,
                   (Point *)&local_118,0);
        (*pcVar10)(this_05,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_120)
        ;
      }
      uVar8 = uVar8 + 1;
      uVar9 = CONCAT44(uStack_dc,local_e0);
      uVar7 = FUN_03964758(uVar9,local_d8);
    } while (uVar8 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_e0);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_f8);
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::createCloudEffect() */

void __thiscall PlantVanilla::createCloudEffect(PlantVanilla *this)

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
  std::string::string(asStack_50,"POPANIM_EFFECTS_VANILLA_NORMALPROJECTILE");
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
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar5,(RtWeakPtr *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  blowZombies(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantVanilla::Fire(PlantVanilla *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  RtObject *pRVar3;
  VanillaTornadoProjectile *this_00;
  undefined8 *puVar4;
  long extraout_x0;
  VanillaProjectile *this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    if (4 < *(int *)(this + 0x5c)) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
      pRVar3 = (RtObject *)
               PlantFramework::Fire
                         ((PlantFramework *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_3
                          ,param_4);
      this_00 = Sexy::RtObject::Cast<VanillaTornadoProjectile>(pRVar3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      *(undefined4 *)(this + 0x5c) = 0;
      if (this_00 != (VanillaTornadoProjectile *)0x0) {
        Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
        FUN_03964628(this_00 + 0x184);
      }
      goto LAB_039691b0;
    }
    *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
    iVar2 = FUN_0396471c(*(undefined8 *)(this + 0x10));
    if (iVar2 != 1) {
      if (iVar2 < 2) goto LAB_03969248;
      cVar1 = CheckLv5SkillTriggle(this);
      if (cVar1 != '\0') {
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
        iVar2 = 0;
        do {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
          pRVar3 = (RtObject *)
                   PlantFramework::Fire
                             ((PlantFramework *)this,(RtWeakPtr<Sexy::SoundResource> *)&local_18,
                              param_3,param_4);
          this_00 = Sexy::RtObject::Cast<VanillaTornadoProjectile>(pRVar3);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
          puVar4 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_18 = (float)*puVar4;
          local_10 = *(undefined4 *)(puVar4 + 1);
          _local_18 = CONCAT44((int)((ulong)*puVar4 >> 0x20),local_18 + (float)iVar2 * 80.0);
          if (this_00 != (VanillaTornadoProjectile *)0x0) {
            (**(code **)(*(long *)this_00 + 0x78))
                      (this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
            VanillaTornadoProjectile::MakePositionAdjustment(this_00);
            Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
            FUN_03964628(this_00 + 0x184);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 3);
        goto LAB_039691b0;
      }
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      fVar7 = *(float *)(extraout_x0 + 0x310);
      iVar2 = FUN_0396471c(*(undefined8 *)(this + 0x10));
      if (2 < iVar2) {
        fVar7 = fVar7 + fVar7;
      }
      fVar6 = *(float *)(this + 0x60);
      fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      fVar7 = (float)NEON_fminnm(fVar7 + fVar6,0x3f800000);
      if (fVar5 < fVar7) {
        *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
        pRVar3 = (RtObject *)
                 PlantFramework::Fire
                           ((PlantFramework *)this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,
                            param_3,param_4);
        this_01 = Sexy::RtObject::Cast<VanillaProjectile>(pRVar3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_2);
        SpearProjectile::SetPlant
                  ((SpearProjectile *)this_01,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        GridItemVase::SetAllowPreGameplayInteraction((GridItemVase *)this_01,true);
        this_00 = (VanillaTornadoProjectile *)0x0;
        if (this_01 != (VanillaProjectile *)0x0) {
          Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
          FUN_03964628(this_01 + 0x184);
          this_00 = (VanillaTornadoProjectile *)this_01;
        }
        goto LAB_039691b0;
      }
    }
    createCloudEffect(this);
  }
LAB_03969248:
  this_00 = (VanillaTornadoProjectile *)0x0;
LAB_039691b0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PlantVanilla::~PlantVanilla() */

void __thiscall PlantVanilla::~PlantVanilla(PlantVanilla *this)

{
  *(undefined ***)this = &PTR_GetClass_066d4e20;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x40));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantVanilla::~PlantVanilla() */

void __thiscall PlantVanilla::~PlantVanilla(PlantVanilla *this)

{
  ~PlantVanilla(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVanilla::Initialize() */

void __thiscall PlantVanilla::Initialize(PlantVanilla *this)

{
  vector<int,std::allocator<int>> *this_00;
  char cVar1;
  int iVar2;
  long extraout_x0;
  UINFSLinkage *this_01;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x58] = (PlantVanilla)0x0;
  *(undefined4 *)(this + 0x5c) = 0;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::string((string *)aRStack_10,"vanilla_new_avatar_1");
  uVar3 = NewAvatar::GetGeneralBoostValueByNewAvatarName((string *)aRStack_10);
  *(undefined4 *)(this + 0x60) = uVar3;
  std::string::~string((string *)aRStack_10);
  nop();
  std::vector<int,std::allocator<int>>::clear(this_00);
  std::vector<int,std::allocator<int>>::push_back(this_00,(int *)(extraout_x0 + 0x2d4));
  std::vector<int,std::allocator<int>>::push_back(this_00,(int *)(extraout_x0 + 0x2d8));
  std::vector<int,std::allocator<int>>::push_back(this_00,(int *)(extraout_x0 + 0x2dc));
  this_01 = (UINFSLinkage *)FUN_03967d88(*(undefined8 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantAnimRig_DevilsFlower::SetPlantPtr((PlantAnimRig_DevilsFlower *)this_01,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') &&
     (iVar2 = PlantFramework::Rand((PlantFramework *)this),
     (float)iVar2 * _FUN_03969f00 <= *(float *)(extraout_x0 + 0x30c))) {
    iVar2 = UINFSLinkage::GetCurrentIntegral(this_01);
    PlantAnimRig_Caulipower::setPlantFoodPlayCount((PlantAnimRig_Caulipower *)this_01,iVar2 + 1);
  }
  (**(code **)(*(long *)this + 0x260))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


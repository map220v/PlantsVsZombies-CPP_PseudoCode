// Class: PlantThunderSnapdragon


/* PlantThunderSnapdragon::PlantThunderSnapdragon() */

void __thiscall PlantThunderSnapdragon::PlantThunderSnapdragon(PlantThunderSnapdragon *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06828460;
  return;
}


/* PlantThunderSnapdragon::StaticNew() */

PlantThunderSnapdragon * PlantThunderSnapdragon::StaticNew(void)

{
  PlantThunderSnapdragon *this;
  
  this = ::operator_new(0x28);
  PlantThunderSnapdragon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThunderSnapdragon::StaticClassInit() */

void PlantThunderSnapdragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantThunderSnapdragon");
    (*pcVar2)(plVar1,asStack_10,FUN_0429a274,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantThunderSnapdragon::StaticGetClass() */

long * PlantThunderSnapdragon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantThunderSnapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantThunderSnapdragon::GetClass() const */

long * PlantThunderSnapdragon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantThunderSnapdragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantThunderSnapdragon::~PlantThunderSnapdragon() */

void __thiscall PlantThunderSnapdragon::~PlantThunderSnapdragon(PlantThunderSnapdragon *this)

{
  *(undefined ***)this = &PTR_GetClass_06828460;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantThunderSnapdragon::~PlantThunderSnapdragon() */

void __thiscall PlantThunderSnapdragon::~PlantThunderSnapdragon(PlantThunderSnapdragon *this)

{
  ~PlantThunderSnapdragon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThunderSnapdragon::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantThunderSnapdragon::Fire
          (PlantThunderSnapdragon *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4
          )

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    uVar3 = 0;
    goto LAB_0429ac30;
  }
  lVar4 = *(long *)(this + 0x10);
  iVar2 = FUN_04299218(lVar4);
  if (iVar2 < 2) {
LAB_0429ac00:
    *(undefined4 *)(lVar4 + 0x150) = 0;
  }
  else {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (extraout_x0 == 0) {
      lVar4 = *(long *)(this + 0x10);
      goto LAB_0429ac00;
    }
    fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar4 = *(long *)(this + 0x10);
    fVar6 = *(float *)(extraout_x0 + 0x2b8);
    iVar2 = FUN_04299218(lVar4);
    if (2 < iVar2) {
      fVar6 = *(float *)(extraout_x0 + 700) * fVar6 + fVar6;
    }
    if (fVar6 <= fVar5) goto LAB_0429ac00;
    *(undefined4 *)(lVar4 + 0x150) = 1;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,param_2);
  uVar3 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
LAB_0429ac30:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThunderSnapdragon::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantThunderSnapdragon::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long extraout_x0;
  long lVar5;
  GridItemElectricField *pGVar6;
  RtObject *this;
  BoardEntity *this_00;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  this_00 = *(BoardEntity **)(param_1 + 0x10);
  iVar1 = FUN_04299218(this_00);
  iVar2 = BoardEntity::CalcColumnPosition(this_00);
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
  Sexy::Point::Point((Point *)&local_10,iVar2 + 2,iVar3);
  iVar2 = local_10;
  if ((((local_10 != -1) && (local_c != -1)) &&
      (iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), iVar2 < iVar3)) &&
     (lVar5 = FUN_0429bf5c(local_10,local_c), lVar5 == 0)) {
    pGVar6 = (GridItemElectricField *)FUN_0429c040(local_10,local_c);
    lVar5 = FUN_0429c124(local_10,local_c);
    if (pGVar6 == (GridItemElectricField *)0x0) {
      if (lVar5 == 0) {
        this = (RtObject *)
               Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(extraout_x0 + 0x2c0),
                                  local_10,local_c,iVar1);
        pGVar6 = Sexy::RtObject::Cast<GridItemElectricField>(this);
        uVar4 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
        FUN_04299220(pGVar6 + 0x1b4,uVar4);
        uVar4 = FUN_02fd435c(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24));
        FUN_02fd4360(pGVar6 + 0x24,uVar4);
        GridItemElectricField::SetIdle(pGVar6);
        Plant::GetTotalDamageRate(*(Plant **)(param_1 + 0x10));
        FUN_04299228(pGVar6 + 0x1b8);
        Plant::GetZombieConditionExtendRate(*(Plant **)(param_1 + 0x10),0x18);
        FUN_02fd4368(pGVar6 + 0x1bc);
      }
    }
    else {
      GridItemElectricField::ResetTimer(pGVar6);
      (**(code **)(*(long *)pGVar6 + 0x198))(pGVar6,iVar1);
      uVar4 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
      FUN_04299220(pGVar6 + 0x1b4,uVar4);
      Plant::GetTotalDamageRate(*(Plant **)(param_1 + 0x10));
      FUN_04299228(pGVar6 + 0x1b8);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThunderSnapdragon::CanFindTarget(PlantWeapon) */

void PlantThunderSnapdragon::CanFindTarget(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  undefined8 uVar6;
  GridItem *pGVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*param_1 + 0x2b8))(auStack_48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInRectangle(avStack_38,2,auStack_48);
  EntityFinder::GetEntitiesInRectangle(avStack_20,4,auStack_48);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (cVar1 != '\0') {
    bVar2 = false;
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if (cVar1 != '\0') goto LAB_0429c4e8;
  }
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
    if (pZVar5 != (Zombie *)0x0) {
      uVar6 = operator|(0x2d,0x800);
      uVar3 = operator|(uVar6,0x20000);
      cVar1 = Zombie::MatchesAny(pZVar5,uVar3,param_1[2]);
      bVar2 = true;
      if (cVar1 == '\0') goto LAB_0429c4e8;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
    if ((pGVar7 != (GridItem *)0x0) &&
       (cVar1 = GridItem::MatchesAny(pGVar7,0x802,param_1[2]), cVar1 == '\0')) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
LAB_0429c4e8:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThunderSnapdragon::FindTargetAndFire(PlantWeapon) */

void PlantThunderSnapdragon::FindTargetAndFire(PlantFramework *param_1)

{
  PlantAnimRig_ThunderSnapdragon PVar1;
  int iVar2;
  RtObject *this;
  PlantAnimRig_ThunderSnapdragon *this_00;
  long extraout_x0;
  PlantAnimRig_ThunderSnapdragon PVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVar1 = (PlantAnimRig_ThunderSnapdragon)CanFindTarget();
  PVar3 = PVar1;
  if (PVar1 != (PlantAnimRig_ThunderSnapdragon)0x0) {
    this = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
    this_00 = Sexy::RtObject::Cast<PlantAnimRig_ThunderSnapdragon>(this);
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    PVar3 = this_00[0x3bc];
    if (PVar3 == (PlantAnimRig_ThunderSnapdragon)0x0) {
      iVar2 = FUN_04299218(*(undefined8 *)(param_1 + 0x10));
      if ((iVar2 != 5) ||
         (fVar4 = (float)PlantFramework::Rand(param_1,1.0), *(float *)(extraout_x0 + 0x2c8) <= fVar4
         )) {
        (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
        PVar3 = PVar1;
      }
      else {
        PlantAnimRig_ThunderSnapdragon::PlayLevel5Attack(this_00);
        PVar3 = PVar1;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThunderSnapdragon::OnAnimCommand(std::string const&, std::string const&) */

void PlantThunderSnapdragon::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  PlantAnimRig_ThunderSnapdragon PVar2;
  char cVar3;
  undefined4 uVar4;
  RtObject *this;
  PlantAnimRig_ThunderSnapdragon *pPVar5;
  ThunderSnapdragonFlyDragon *pTVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  RtMixedPtr aRStack_c0 [8];
  string asStack_b8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if (((bVar1) || (bVar1 = std::operator==(param_2,"use_action_avatar1"), bVar1)) ||
     (bVar1 = std::operator==(param_2,"use_action_avatar2"), bVar1)) {
    PVar2 = (PlantAnimRig_ThunderSnapdragon)(**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (PVar2 != (PlantAnimRig_ThunderSnapdragon)0x0) {
      p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_1 + 0x10);
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var11);
      fVar15 = *pfVar8;
      FUN_042991f4(aRStack_68,p_Var11);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      fVar13 = *(float *)(lVar9 + 0x9c);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      p_Var11 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_1 + 0x10);
      lVar9 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(p_Var11);
      fVar16 = *(float *)(lVar9 + 4);
      FUN_042991f4(aRStack_68,p_Var11);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      fVar14 = *(float *)(lVar9 + 0xa0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      uVar4 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
      this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_b8,"POPANIM_EFFECTS_THUNDERSNAPDRAGON_PROJECTILE_PLANTFOOD");
      GetPAMByName(asStack_b8);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar10,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      std::string::~string(asStack_b8);
      nop();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)aRStack_68,(float)(int)((fVar15 + 45.0) - fVar13),
                 (float)(int)((fVar16 + 30.0) - fVar14),0.0);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_68,-1);
      FUN_042991c0(this_00 + 0x1c,uVar4);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_c0);
      std::string::string((string *)aRStack_68,"onStandaloneEffectFinishedCallback");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_b0,asStack_b8,
                 aRStack_68);
      StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_b0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_b0);
      std::string::~string((string *)aRStack_68);
      nop();
      Sexy::RtId::~RtId((RtId *)asStack_b8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
      std::string::string((string *)aRStack_68,"plantfood");
      Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_68,0);
      std::string::~string((string *)aRStack_68);
      nop();
      goto LAB_0429c708;
    }
  }
  else {
    PVar2 = (PlantAnimRig_ThunderSnapdragon)std::operator==(param_2,"use_action_attack5");
    if (!(bool)PVar2) goto LAB_0429c708;
    cVar3 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar3 == '\0') {
      this = (RtObject *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
      pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_ThunderSnapdragon>(this);
      if ((pPVar5 != (PlantAnimRig_ThunderSnapdragon *)0x0) &&
         (PVar2 = pPVar5[0x3bc], PVar2 != (PlantAnimRig_ThunderSnapdragon)0x0)) {
        pTVar6 = GameObject::Create<ThunderSnapdragonFlyDragon>();
        if (pTVar6 != (ThunderSnapdragonFlyDragon *)0x0) {
          Plant::GetProps();
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
          FUN_0429931c(*(undefined8 *)(lVar9 + 0x70));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
          Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
          uVar7 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(param_1 + 0x10));
          (**(code **)(*(long *)pTVar6 + 0x78))(pTVar6,uVar7);
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          pcVar12 = *(code **)(*(long *)pTVar6 + 0x1d8);
          std::string::string(asStack_b8,"POPANIM_EFFECTS_THUNDERSNAPDRAGON_THUNDER_RE");
          (*pcVar12)(pTVar6,uVar7,asStack_b8,0x62250);
          std::string::~string(asStack_b8);
          nop();
          FUN_04299230(local_60,pTVar6 + 0xc0);
          pcVar12 = *(code **)(*(long *)pTVar6 + 0x1e0);
          std::string::string(asStack_b8,"animation");
          (*pcVar12)(pTVar6,asStack_b8,1);
          std::string::~string(asStack_b8);
          nop();
          fVar13 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
          fVar14 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
          FUN_04299238(pTVar6 + 200,fVar13 < fVar14);
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
        if (*(code **)(*(long *)param_1 + 0x4a8) == PlantFramework::OnTakeDamageDoneWithComponent) {
          pPVar5[0x3bc] = (PlantAnimRig_ThunderSnapdragon)0x0;
        }
        else {
          (**(code **)(*(long *)param_1 + 0x4a8))(param_1);
          pPVar5[0x3bc] = (PlantAnimRig_ThunderSnapdragon)0x0;
        }
        goto LAB_0429c708;
      }
    }
  }
  PVar2 = (PlantAnimRig_ThunderSnapdragon)0x1;
LAB_0429c708:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(PVar2);
}


// Class: PlantElectricitea


/* PlantElectricitea::CanApplyPlantfood() */

bool __thiscall PlantElectricitea::CanApplyPlantfood(PlantElectricitea *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) != 0xc;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::StaticClassInit() */

void PlantElectricitea::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectriciteaBurstProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_0429dab4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlantElectricitea");
    (*pcVar3)(plVar2,asStack_10,FUN_0429ede0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricitea::StaticGetClass() */

long * PlantElectricitea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantElectricitea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElectricitea::GetClass() const */

long * PlantElectricitea::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantElectricitea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElectricitea::PlantElectricitea() */

void __thiscall PlantElectricitea::PlantElectricitea(PlantElectricitea *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_068292b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* PlantElectricitea::StaticNew() */

PlantElectricitea * PlantElectricitea::StaticNew(void)

{
  PlantElectricitea *this;
  
  this = ::operator_new(0x40);
  PlantElectricitea(this);
  return this;
}


/* PlantElectricitea::~PlantElectricitea() */

void __thiscall PlantElectricitea::~PlantElectricitea(PlantElectricitea *this)

{
  *(undefined ***)this = &PTR_GetClass_068292b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantElectricitea::~PlantElectricitea() */

void __thiscall PlantElectricitea::~PlantElectricitea(PlantElectricitea *this)

{
  ~PlantElectricitea(this);
  AK::FreeHook(this);
  return;
}


/* PlantElectricitea::isValidTargetZombie(Sexy::RtWeakPtr<BoardEntity>) */

byte __thiscall PlantElectricitea::isValidTargetZombie(undefined8 param_1,RtWeakPtr *param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  RtObject *this;
  Zombie *this_00;
  long *extraout_x0;
  long *extraout_x0_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
  if (bVar1) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar1 = Sexy::RtObject::IsA<Zombie>(this);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      nop();
      cVar2 = Zombie::IsTargetable(this_00);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        nop();
        cVar2 = (**(code **)(*extraout_x0 + 0x328))();
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
          nop();
          bVar3 = (**(code **)(*extraout_x0_00 + 0x330))();
          return bVar3 ^ 1;
        }
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::isValidTarget(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantElectricitea::isValidTarget(undefined8 param_1,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  GameObject *this;
  RtObject *this_00;
  Zombie *extraout_x0;
  undefined8 uVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    this = (GameObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    cVar1 = GameObject::IsDestroyed(this);
    if (cVar1 == '\0') {
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar2 = Sexy::RtObject::IsA<Zombie>(this_00);
      if (!bVar2) {
        uVar3 = 1;
        goto LAB_0429f0f8;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      nop();
      uVar5 = operator|(1,8);
      uVar4 = operator|(uVar5,4);
      cVar1 = Zombie::MatchesAny(extraout_x0,uVar4);
      if ((cVar1 == '\0') && (cVar1 = RealObject::IsOnTeam(extraout_x0,1), cVar1 == '\0')) {
        cVar1 = FUN_0429ef40(*(undefined4 *)(extraout_x0 + 0xcc));
        if (cVar1 == '\0') {
          pcVar6 = *(code **)(*(long *)extraout_x0 + 0x3d0);
          Plant::GetType();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
          uVar3 = (*pcVar6)(extraout_x0,aRStack_10,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          goto LAB_0429f0f8;
        }
      }
    }
  }
  uVar3 = 0;
LAB_0429f0f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::findPlantfoodTarget() */

void __thiscall PlantElectricitea::findPlantfoodTarget(PlantElectricitea *this)

{
  char cVar1;
  ResourceInfo *pRVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  UnchartedModePlantNumData aUStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_30);
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_28,1,0);
  PlantFramework::FindTargetZombie(aRStack_18,this,1,aUStack_28);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_30,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)a_Stack_30);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x2b0))(aRStack_18,this,1);
    (**(code **)(*(long *)this + 0x100))(aRStack_20,this,aRStack_18,1);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_30,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)a_Stack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::TriggerAdvancedAttack() */

void __thiscall PlantElectricitea::TriggerAdvancedAttack(PlantElectricitea *this)

{
  bool bVar1;
  int iVar2;
  RtObject *this_00;
  ElectriciteaProps *pEVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0429da50(aRStack_10,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pEVar3 = Sexy::RtObject::Cast<ElectriciteaProps_const>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (pEVar3 == (ElectriciteaProps *)0x0) {
    bVar1 = false;
  }
  else {
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar5 = *(float *)(pEVar3 + 0x2d8);
    iVar2 = FUN_0429da74(*(undefined8 *)(this + 0x10));
    if (2 < iVar2) {
      fVar5 = *(float *)(pEVar3 + 0x2dc) * fVar5 + fVar5;
    }
    bVar1 = fVar4 < fVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::TriggerSuperAttack() */

void __thiscall PlantElectricitea::TriggerSuperAttack(PlantElectricitea *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  ElectriciteaProps *pEVar3;
  undefined8 uVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_0429da7c(uVar4);
  if (cVar2 != '\0') {
    FUN_0429da50(aRStack_10,uVar4);
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pEVar3 = Sexy::RtObject::Cast<ElectriciteaProps_const>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (pEVar3 != (ElectriciteaProps *)0x0) {
      fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      bVar1 = fVar5 < *(float *)(pEVar3 + 0x2f4);
      goto LAB_0429f53c;
    }
  }
  bVar1 = false;
LAB_0429f53c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::tryStuckZombie(Zombie*) */

void __thiscall PlantElectricitea::tryStuckZombie(PlantElectricitea *this,Zombie *param_1)

{
  char cVar1;
  RtObject *this_00;
  ElectriciteaProps *pEVar2;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Zombie *)0x0) &&
     (cVar1 = GeraniiFencerSubsystem::shouldStun((GeraniiFencerSubsystem *)this,param_1),
     cVar1 != '\0')) {
    FUN_0429da50(aRStack_10,*(undefined8 *)(this + 0x10));
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pEVar2 = Sexy::RtObject::Cast<ElectriciteaProps_const>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    fVar4 = *(float *)(pEVar2 + 0x2f8);
    fVar3 = (float)Plant::GetZombieConditionExtendRate(*(Plant **)(this + 0x10),0x18);
    Zombie::ApplyCondition((Zombie *)(fVar3 * fVar4),0,param_1,0x18,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricitea::calculateNextAttackTime() */

void __thiscall PlantElectricitea::calculateNextAttackTime(PlantElectricitea *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_0429f674(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PVZ_T();
  lVar1 = FUN_0429dea0(*(undefined8 *)(lVar1 + 0x70),0);
  *(float *)(this + 0x28) = fVar2 + *(float *)(lVar1 + 0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::doAvatarAttack(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantElectricitea::doAvatarAttack(PlantElectricitea *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  long lVar6;
  Board *this_01;
  Effect_PopAnim *this_02;
  PopAnim *pPVar7;
  RtObject *this_03;
  ElectriciteaProps *pEVar8;
  Plant *this_04;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_a8;
  undefined8 local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  undefined8 local_90;
  undefined4 local_88;
  string asStack_80 [24];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    puVar5 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_90 = *puVar5;
    fVar13 = (float)local_90;
    local_88 = *(undefined4 *)(puVar5 + 1);
    FUN_0429da50((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,*(undefined8 *)(this + 0x10));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    fVar10 = *(float *)(lVar6 + 0x9c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    fVar12 = local_90._4_4_;
    FUN_0429da50((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,*(undefined8 *)(this + 0x10));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    fVar11 = *(float *)(lVar6 + 0xa0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    fVar13 = (float)(int)(fVar13 - fVar10);
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    if (this_01[0x119] == (Board)0x0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (float)Board::calculateRoofOffsetZ(fVar13);
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      fVar10 = (float)(int)fVar10;
    }
    this_02 = Board::AddEffect<Effect_PopAnim>(this_01);
    std::string::string(asStack_80,"POPANIM_EFFECTS_ELECTRICI_TEA_AVATAR_EFFECTS");
    GetPAMByName(asStack_80);
    pPVar7 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    Effect_PopAnim::CreatePopAnimRig(this_02,pPVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::string::~string(asStack_80);
    nop();
    uVar3 = Board::MakeRenderOrder
                      (0x62250,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0xffffffff);
    FUN_0429da28(this_02 + 0x1c,uVar3);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar13,(float)(int)(fVar12 - fVar11),fVar10);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)&local_68,-1);
    std::string::string((string *)&local_68,"plantfood_avatar");
    Effect_PopAnim::PlaySingleAnimation(this_02,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,0);
    std::string::~string((string *)&local_68);
    nop();
    this_04 = *(Plant **)(this + 0x10);
    fVar13 = (float)FUN_0429da34(*(undefined4 *)(this_04 + 0xf4),*(undefined4 *)(this_04 + 0x100),
                                 *(undefined4 *)(this_04 + 0x104),*(undefined4 *)(this_04 + 0x3b8));
    fVar12 = (float)FUN_0429da44(*(undefined4 *)(this_04 + 0x3bc));
    fVar10 = (float)Plant::GetExtraDPSmodifier(this_04);
    lVar6 = *(long *)(this + 0x10);
    fVar11 = (float)FUN_0429da48(*(undefined4 *)(lVar6 + 0x424));
    FUN_0429da50((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,lVar6);
    this_03 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    pEVar8 = Sexy::RtObject::Cast<ElectriciteaProps_const>(this_03);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_80);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesWithinCircle
              ((float)(iVar4 * *(int *)(pEVar8 + 0x2fc)),asStack_80,2,&local_90);
    local_a8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_80);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_80);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8)
      ;
      plVar9 = (long *)*puVar5;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_98);
      cVar1 = isValidTarget(this,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
      if (cVar1 != '\0') {
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        local_68 = *(undefined8 *)(this + 0x10);
        local_58 = 0x80;
        local_60 = fVar12 * fVar13 * fVar10 * fVar11 * *(float *)(pEVar8 + 0x300);
        (**(code **)(*plVar9 + 0x110))(plVar9,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::doPlantfoodDamagePulse(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantElectricitea::doPlantfoodDamagePulse
          (PlantElectricitea *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  RtObject *this_00;
  ElectriciteaProps *pEVar2;
  long lVar3;
  long *plVar4;
  Plant *this_01;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0429da50((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  pEVar2 = Sexy::RtObject::Cast<ElectriciteaProps_const>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  this_01 = *(Plant **)(this + 0x10);
  fVar5 = (float)FUN_0429da34(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar6 = (float)FUN_0429da44(*(undefined4 *)(this_01 + 0x3bc));
  fVar7 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar8 = (float)FUN_0429da48(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  DamageInfo::DamageInfo((DamageInfo *)&local_68);
  lVar3 = FUN_0429dec4(*(undefined8 *)(pEVar2 + 0x70),1);
  local_68 = *(undefined8 *)(this + 0x10);
  local_58 = 0x80;
  local_60 = fVar5 * fVar6 * (float)*(int *)(lVar3 + 0x2c) * fVar7 * fVar8;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar4 + 0x110))(plVar4,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,(RtWeakPtrBase *)param_2);
    doAvatarAttack(this,aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  }
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::onPlantfoodLooped() */

void __thiscall PlantElectricitea::onPlantfoodLooped(PlantElectricitea *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  RtWeakPtr *this_01;
  char cVar1;
  bool bVar2;
  long lVar3;
  NewLightningBolt *this_02;
  RayEntity *pRVar4;
  NewRayEntity *this_03;
  long *plVar5;
  char *__n;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)this_00);
  cVar1 = isValidTarget(this,aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (cVar1 == '\0') {
    lVar3 = findPlantfoodTarget(this);
    if (lVar3 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      cVar1 = isValidTarget(this,aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar1 != '\0') {
        ToolPacketData::GetProps();
        this_01 = (RtWeakPtr *)(this + 0x30);
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        RayEntityData::RayEntityData((RayEntityData *)aRStack_38);
        __n = "POPANIM_EFFECTS_ELECTRICI_TEA_BOLT";
        std::string::append((string *)aRStack_38,"POPANIM_EFFECTS_ELECTRICI_TEA_BOLT",0x55e6918);
        std::string::append(asStack_30,"POPANIM_EFFECTS_LIGHTNINGREED_HIT",(size_t)__n);
        std::string::append(asStack_28,"idle",(size_t)__n);
        std::string::append(asStack_20,"lightningreed_bolt_start_med",(size_t)__n);
        std::string::append(asStack_18,"lightningreed_bolt_middle_large",(size_t)__n);
        local_10 = 0x40cccccd;
        local_c = 0x41133333;
        this_02 = GameObject::Create<NewLightningBolt>();
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        **)(this + 0x10));
        BoardEntity::PlaceOnBoard((SexyVector3 *)this_02);
        std::string::string(asStack_48,"POPANIM_EFFECTS_ELECTRICI_TEA_BOLT");
        std::string::string((string *)aRStack_40,"electricitea");
        NewLightningBolt::InitializeBounceInfo(this_02,0,0.0,asStack_48,(string *)aRStack_40);
        std::string::~string((string *)aRStack_40);
        nop();
        std::string::~string(asStack_48);
        nop();
        NewLightningBolt::InitializeDamageInfo(this_02,0.0,0.0,0.0);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_40);
        PVZ_EOT();
        NewRayEntity::Initialize((NewRayEntity *)this_02,aRStack_38,aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
        if (bVar2) {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          (**(code **)(*plVar5 + 0x48))();
        }
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_01,(RtWeakPtrBase *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        pRVar4 = (RayEntity *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)asStack_48);
        RayEntity::InitiateWithTarget(pRVar4,aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48)
        ;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)this_00);
        doPlantfoodDamagePulse(this,aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aRStack_38);
        goto LAB_0429ffb8;
      }
    }
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
    if (bVar2) {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
      (**(code **)(*plVar5 + 0x48))();
    }
  }
  else {
    this_03 = (NewRayEntity *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    NewRayEntity::SpawnHitEffect(this_03);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)this_00);
    doPlantfoodDamagePulse(this,aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
LAB_0429ffb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::findTargets(int, int) */

void PlantElectricitea::findTargets(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  PlantElectricitea *pPVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int in_w2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [24];
  long local_8;
  
  pPVar4 = (PlantElectricitea *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  if (0 < param_2) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    uVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(pPVar4 + 0x10));
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesWithinCircle((float)(iVar3 * in_w2),avStack_38,2,uVar5);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar5,uVar6);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_40);
      cVar2 = isValidTarget(pPVar4,aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_40);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)in_x8,(RtWeakPtr *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        lVar8 = FUN_0429deb0(*(undefined8 *)in_x8,*(undefined8 *)(in_x8 + 8));
        if (lVar8 == param_2) goto LAB_042a02fc;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
    uVar5 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(pPVar4 + 0x10));
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesWithinCircle((float)(iVar3 * in_w2),aRStack_20,4,uVar5);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)aRStack_20);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)aRStack_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar5,uVar6);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      cVar2 = RealObject::IsOnTeam(*puVar7,2);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)&local_48);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)in_x8,(RtWeakPtr *)aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        lVar8 = FUN_0429deb0(*(undefined8 *)in_x8,*(undefined8 *)(in_x8 + 8));
        if (lVar8 == param_2) break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
LAB_042a02fc:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::shouldSpark() */

void __thiscall PlantElectricitea::shouldSpark(PlantElectricitea *this)

{
  byte bVar1;
  RtObject *this_00;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_0429da50(aRStack_20,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtObject::Cast<ElectriciteaProps_const>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x28) <= fVar2) {
    findTargets((int)this,1);
    bVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)aRStack_20);
    bVar1 = bVar1 ^ 1;
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               aRStack_20);
  }
  else {
    bVar1 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::findTargets(Sexy::SexyVector3, int, std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void PlantElectricitea::findTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,float param_2
               ,float param_3,PlantElectricitea *param_4,int param_5,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_6)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar4 = BoardTransforms::BoardSpaceToGridX(param_2);
  iVar5 = BoardTransforms::BoardSpaceToGridY(param_3);
  local_38._0_4_ = iVar4 + -1;
  local_30._0_4_ = 0;
  piVar6 = eastl::max_alt<int>((int *)&local_38,(int *)&local_30);
  iVar1 = *piVar6;
  local_38 = CONCAT44(local_38._4_4_,iVar5 + -1);
  local_30 = (ulong)local_30._4_4_ << 0x20;
  piVar6 = eastl::max_alt<int>((int *)&local_38,(int *)&local_30);
  Sexy::Insets::Insets
            ((Insets *)&local_30,iVar1,*piVar6,(iVar4 - iVar1) + param_5,(iVar5 - *piVar6) + param_5
            );
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)&local_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_38);
    cVar3 = isValidTargetZombie(param_4,(Insets *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    if (cVar3 != '\0') {
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(param_6);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(param_6);
      ToolPacketData::GetProps();
      local_38 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar7,uVar8,aRStack_40);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_6);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (bVar2) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_38);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                   *)param_1,(RtWeakPtr *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::createChainLightning(Zombie*) */

void __thiscall PlantElectricitea::createChainLightning(PlantElectricitea *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  Insets *pIVar3;
  RtWeakPtrBase *pRVar4;
  long lVar5;
  RtObject *this_00;
  ElectriciteaProps *pEVar6;
  NewLightningBolt *this_01;
  RtWeakPtr<Sexy::SoundResource> *__n;
  Plant *this_02;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar3 = (Insets *)(**(code **)(*(long *)param_1 + 0x178))(param_1);
  Sexy::Insets::Insets((Insets *)&local_78,pIVar3);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_88,(float)local_78 + (float)local_70 * 0.5,
             (float)local_74 + (float)local_6c * 0.33333334,0.0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)&local_50);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::push_back
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_68,(RtWeakPtr *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             aRStack_38,(vector *)avStack_68);
  __n = aRStack_38;
  findTargets((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,local_88,local_84,local_80,this,2);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             aRStack_38);
  cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )&local_50);
  if (cVar1 == '\0') {
    iVar2 = FUN_0429deb0(local_50,local_48);
    iVar2 = PlantFramework::Rand((PlantFramework *)this,iVar2);
    pRVar4 = (RtWeakPtrBase *)FUN_0429debc(local_50,(long)iVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,pRVar4);
    RayEntityData::RayEntityData((RayEntityData *)aRStack_38);
    std::string::append((string *)aRStack_38,"POPANIM_EFFECTS_ELECTRICI_TEA_BOLT",(size_t)__n);
    std::string::append(asStack_30,"POPANIM_EFFECTS_LIGHTNINGREED_HIT",(size_t)__n);
    std::string::append(asStack_28,"idle",(size_t)__n);
    std::string::append(asStack_20,"lightningreed_bolt_start_med",(size_t)__n);
    std::string::append(asStack_18,"lightningreed_bolt_middle_large",(size_t)__n);
    this_02 = *(Plant **)(this + 0x10);
    local_10 = 0x40cccccd;
    local_c = 0x41133333;
    fVar7 = (float)FUN_0429da34(*(undefined4 *)(this_02 + 0xf4),*(undefined4 *)(this_02 + 0x100),
                                *(undefined4 *)(this_02 + 0x104),*(undefined4 *)(this_02 + 0x3b8));
    fVar8 = (float)FUN_0429da44(*(undefined4 *)(this_02 + 0x3bc));
    fVar9 = (float)Plant::GetExtraDPSmodifier(this_02);
    lVar5 = *(long *)(this + 0x10);
    fVar10 = (float)FUN_0429da48(*(undefined4 *)(lVar5 + 0x424));
    FUN_0429da50(aRStack_90,lVar5);
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
    pEVar6 = Sexy::RtObject::Cast<ElectriciteaProps_const>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    this_01 = GameObject::Create<NewLightningBolt>();
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
    fVar11 = *(float *)(pEVar6 + 0x2ec);
    iVar2 = *(int *)(pEVar6 + 0x2e0);
    std::string::string((string *)aRStack_90,"electricitea");
    NewLightningBolt::InitializeBounceInfo
              (this_01,iVar2,fVar11,(string *)aRStack_38,(string *)aRStack_90);
    std::string::~string((string *)aRStack_90);
    nop();
    NewLightningBolt::InitializeDamageInfo
              (this_01,fVar7 * fVar8 * *(float *)(pEVar6 + 0x2f0) * fVar9 * fVar10,
               *(float *)(pEVar6 + 0x2e4),0.0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_90);
                    /* WARNING: Load size is inaccurate */
    NewRayEntity::Initialize(*(NewRayEntity **)(pEVar6 + 0x2e8),this_01,aRStack_38,aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,(RtWeakPtrBase *)aRStack_98);
    RayEntity::InitiateWithTarget((RayEntity *)this_01,aRStack_90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_50);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               avStack_68);
  }
  else {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               &local_50);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
               avStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::TakeDamage(DamageInfo const&) */

void PlantElectricitea::TakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 extraout_x0;
  PlantElectriciteaSubSystem *pPVar3;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  long lVar4;
  float fVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x40000,0x100000);
  bVar1 = TestFlag<DamageTypeFlags>(*(undefined8 *)(in_x1 + 0x10),uVar2);
  if (((bVar1) && (*(RtObject **)in_x1 != (RtObject *)0x0)) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>(*(RtObject **)in_x1), bVar1)) {
    lVar4 = *(long *)(param_1 + 0x10);
    fVar5 = *(float *)(lVar4 + 0xd8);
    if ((0.0 <= fVar5) && (fVar5 - *(float *)(in_x1 + 8) <= 0.0)) {
      nop();
      lVar4 = FUN_0429f674(lVar4);
      ElectriciteaBurstProperties::ElectriciteaBurstProperties
                ((ElectriciteaBurstProperties *)&local_28);
      uStack_24 = *(undefined4 *)(lVar4 + 0x2c4);
      local_28 = *(undefined4 *)(lVar4 + 0x2c0);
      uStack_14 = *(undefined4 *)(lVar4 + 0x2cc);
      local_20 = *(undefined4 *)(lVar4 + 0x2c8);
      local_c = *(undefined4 *)(lVar4 + 0x2d0);
      local_1c = *(undefined4 *)(lVar4 + 0x2d4);
      lVar4 = FUN_0429dea0(*(undefined8 *)(lVar4 + 0x70),2);
      local_18 = (float)*(int *)(lVar4 + 0x2c);
      pPVar3 = Board::GetGameSubSystem<PlantElectriciteaSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      local_50 = CONCAT44(uStack_24,local_28);
      uStack_48 = CONCAT44(local_1c,local_20);
      local_40 = CONCAT44(uStack_14,local_18);
      uStack_38 = CONCAT44(local_c,uStack_10);
      PlantElectriciteaSubSystem::StartZombieBurst(pPVar3,extraout_x0,&local_50);
    }
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricitea::GetEffectsAttackName(bool) */

void PlantElectricitea::GetEffectsAttackName(bool param_1)

{
  string *psVar1;
  char in_w1;
  size_t in_x2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)in_x8,2);
  if (in_w1 == '\0') {
    psVar1 = (string *)FUN_0429de98(*(undefined8 *)in_x8,0);
    std::string::append(psVar1,"POPANIM_EFFECTS_ELECTRICI_TEA_ATTACK_TOP_EFFECTS",in_x2);
    psVar1 = (string *)FUN_0429de98(*(undefined8 *)in_x8,1);
    std::string::append(psVar1,"POPANIM_EFFECTS_ELECTRICI_TEA_ATTACK_BOTTOM_EFFECTS",in_x2);
    return;
  }
  psVar1 = (string *)FUN_0429de98(*(undefined8 *)in_x8,0);
  std::string::append(psVar1,"POPANIM_EFFECTS_ELECTRICI_TEA_SUPER_TOP_EFFECTS",in_x2);
  psVar1 = (string *)FUN_0429de98(*(undefined8 *)in_x8,1);
  std::string::append(psVar1,"POPANIM_EFFECTS_ELECTRICI_TEA_SUPER_BOTTOM_EFFECTS",in_x2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::setState(unsigned int) */

void __thiscall PlantElectricitea::setState(PlantElectricitea *this,uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *extraout_x0;
  Effect_PopAnim *this_00;
  Effect_PopAnim *this_01;
  string *psVar4;
  PopAnim *pPVar5;
  float *pfVar6;
  long lVar7;
  RtObject *this_02;
  PlantAnimRig_Electricitea *pPVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [16];
  undefined8 local_68 [3];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  if (param_1 == 0xb) {
    cVar1 = TriggerSuperAttack(this);
    if (cVar1 != '\0') {
      this_02 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar8 = Sexy::RtObject::Cast<PlantAnimRig_Electricitea>(this_02);
      FUN_0429da9c(pPVar8 + 0x3b8,1);
    }
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    fVar12 = 0.0;
    pcVar10 = *(code **)(*extraout_x0 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
    std::string::string((string *)local_68,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
               (string *)local_68);
    (*pcVar10)(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)local_68);
    nop();
    Sexy::RtId::~RtId(aRStack_78);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    GetEffectsAttackName(SUB81(this,0));
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    psVar4 = (string *)FUN_0429de98(local_68[0],0);
    GetPAMByName(psVar4);
    pPVar5 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    Effect_PopAnim::CreatePopAnimRig(this_00,pPVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    psVar4 = (string *)FUN_0429de98(local_68[0],1);
    GetPAMByName(psVar4);
    pPVar5 = (PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    Effect_PopAnim::CreatePopAnimRig(this_01,pPVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    uVar2 = Board::MakeRenderOrder(0x62250,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
    uVar3 = Board::MakeRenderOrder
                      (0x62250,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0xffffffff);
    FUN_0429da28(this_00 + 0x1c,uVar2);
    FUN_0429da28(this_01 + 0x1c,uVar3);
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      p_Var9 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 **)(this + 0x10);
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var9);
      fVar12 = *pfVar6;
      FUN_0429da50(aRStack_78,p_Var9);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      fVar12 = (float)Board::calculateRoofOffsetZ(fVar12 - *(float *)(lVar7 + 0x9c));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      fVar12 = (float)(int)fVar12;
    }
    p_Var9 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var9);
    fVar13 = *pfVar6;
    FUN_0429da50(aRStack_88,p_Var9);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
    p_Var9 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    fVar11 = *(float *)(lVar7 + 0x9c);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var9);
    fVar14 = *(float *)(lVar7 + 4);
    FUN_0429da50(aRStack_80,p_Var9);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_78,fVar13 - fVar11,fVar14 - *(float *)(lVar7 + 0xa0),fVar12);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_78,-1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
    p_Var9 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var9);
    fVar13 = *pfVar6;
    FUN_0429da50(aRStack_88,p_Var9);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
    p_Var9 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(this + 0x10);
    fVar11 = *(float *)(lVar7 + 0x9c);
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var9);
    fVar14 = *(float *)(lVar7 + 4);
    FUN_0429da50(aRStack_80,p_Var9);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_78,fVar13 - fVar11,fVar14 - *(float *)(lVar7 + 0xa0),fVar12);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_78,-1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
    std::string::string((string *)aRStack_78,"attack");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_78,0);
    std::string::~string((string *)aRStack_78);
    nop();
    std::string::string((string *)aRStack_78,"attack");
    Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_78,0);
    std::string::~string((string *)aRStack_78);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricitea::Initialize() */

void __thiscall PlantElectricitea::Initialize(PlantElectricitea *this)

{
  calculateNextAttackTime(this);
  setState(this,10);
  PlantFramework::Initialize((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::ApplyPlantfood() */

void __thiscall PlantElectricitea::ApplyPlantfood(PlantElectricitea *this)

{
  Plant *pPVar1;
  RtMixedPtr aRStack_f8 [8];
  RtId aRStack_f0 [8];
  string asStack_e8 [8];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_e0);
  pPVar1 = *(Plant **)(this + 0x10);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_f8);
  std::string::string(asStack_e8,"onPlantfoodLoopedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_98,aRStack_f0,asStack_e8);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
  Plant::EnablePlantfoodAnimation(pPVar1,aRStack_e0,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_98);
  std::string::~string(asStack_e8);
  nop();
  Sexy::RtId::~RtId(aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_e0);
  setState(this,0xc);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::CancelPlantfood() */

void __thiscall PlantElectricitea::CancelPlantfood(PlantElectricitea *this)

{
  bool bVar1;
  long *plVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  calculateNextAttackTime(this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    (**(code **)(*plVar2 + 0x48))();
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  setState(this,10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricitea::UpdateActions() */

void __thiscall PlantElectricitea::UpdateActions(PlantElectricitea *this)

{
  char cVar1;
  PopAnimRig *this_00;
  long *plVar2;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if ((cVar1 == '\0') && (*(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200) == 10)) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar1 == '\0') {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar2 + 0x118))();
    }
    cVar1 = shouldSpark(this);
    if (cVar1 != '\0') {
      setState(this,0xb);
      return;
    }
  }
  return;
}


/* PlantElectricitea::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantElectricitea::onAnimStoppedCallback(PlantElectricitea *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"attack");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"attack5"), !bVar1)) {
    return;
  }
  setState(this,10);
  return;
}


/* PlantElectricitea::SetAttackState() */

void __thiscall PlantElectricitea::SetAttackState(PlantElectricitea *this)

{
  setState(this,0xb);
  return;
}


/* PlantElectricitea::DoProjectileCombo() */

void __thiscall PlantElectricitea::DoProjectileCombo(PlantElectricitea *this)

{
  setState(this,0xb);
  return;
}


/* PlantElectricitea::GetHitEffectNames(bool) */

void PlantElectricitea::GetHitEffectNames(bool param_1)

{
  string *psVar1;
  char in_w1;
  char *__s;
  size_t in_x2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<std::string,std::allocator<std::string>>::resize
            ((vector<std::string,std::allocator<std::string>> *)in_x8,2);
  if (in_w1 == '\0') {
    psVar1 = (string *)FUN_0429de98(*(undefined8 *)in_x8,0);
    __s = "POPANIM_EFFECTS_ELECTRIC_PEASHOOTER_ELECTROBALL_EFFECTS";
  }
  else {
    psVar1 = (string *)FUN_0429de98(*(undefined8 *)in_x8,0);
    __s = "POPANIM_EFFECTS_LIGHTNINGREED_BOLT_DEFAULT_RED";
  }
  std::string::append(psVar1,__s,in_x2);
  psVar1 = (string *)FUN_0429de98(*(undefined8 *)in_x8,1);
  std::string::append(psVar1,"animation",in_x2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricitea::findAndShockTargets() */

void __thiscall PlantElectricitea::findAndShockTargets(PlantElectricitea *this)

{
  char *__s;
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  RtObject *pRVar5;
  ElectriciteaProps *pEVar6;
  undefined8 uVar7;
  PlantAnimRig_Electricitea *pPVar8;
  long lVar9;
  RtMixedPtrBase *this_00;
  ElectricBoltEffect *extraout_x0;
  undefined8 uVar10;
  RtWeakPtrBase *pRVar11;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar12;
  long *plVar13;
  ulong uVar14;
  Zombie *extraout_x0_00;
  undefined8 *puVar15;
  ulong uVar16;
  Plant *this_01;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  string asStack_c8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  string local_b8 [8];
  undefined8 local_b0 [3];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined4 local_14;
  long local_8;
  
  cVar2 = '\0';
  local_8 = ___stack_chk_guard;
  FUN_0429da50((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,*(undefined8 *)(this + 0x10));
  pRVar5 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  pEVar6 = Sexy::RtObject::Cast<ElectriciteaProps_const>(pRVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  uVar7 = Sexy::RtClass::StaticGetClassNamed("ElectricBoltEffect");
  pRVar5 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar8 = Sexy::RtObject::Cast<PlantAnimRig_Electricitea>(pRVar5);
  cVar1 = FUN_0429daa4(pPVar8[0x3b8]);
  GetHitEffectNames(SUB81(this,0));
  iVar4 = FUN_0429da74(*(undefined8 *)(this + 0x10));
  if (1 < iVar4) {
    cVar2 = TriggerAdvancedAttack(this);
  }
  uVar16 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  findTargets((int)this,*(int *)(pEVar6 + 0x2b8));
  this_01 = *(Plant **)(this + 0x10);
  fVar17 = (float)FUN_0429da34(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                               *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar18 = (float)FUN_0429da44(*(undefined4 *)(this_01 + 0x3bc));
  fVar19 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar20 = (float)FUN_0429da48(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  uVar10 = local_80;
  lVar9 = FUN_0429deb0(local_80,local_78);
  if (lVar9 != 0) {
    do {
      this_00 = (RtMixedPtrBase *)FUN_0429debc(uVar10,uVar16);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
      if (cVar3 == '\0') goto LAB_042a1554;
      ToolPacketData::GetProps();
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      if (cVar3 == '\0') goto LAB_042a1554;
      GameObject::Create(uVar7,0x28);
      nop();
      uVar10 = FUN_0429de98(local_b0[0],0);
      FUN_05475d88(local_b8,uVar10);
      uVar10 = FUN_0429de98(local_b0[0],1);
      FUN_05475d88((RtWeakPtr<Sexy::ResourceInfo> *)&local_68,uVar10);
      ElectricBoltEffect::SetupEffect
                ((ElectricBoltEffect *)0x3e19999a,extraout_x0,local_b8,
                 (RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      std::string::~string((string *)&local_68);
      std::string::~string(local_b8);
      __s = "POPANIM_EFFECTS_LIGHTNINGREED_HIT_RED";
      if (cVar1 == '\0') {
        __s = "POPANIM_EFFECTS_LIGHTNINGREED_HIT";
      }
      std::string::string(asStack_c8,__s);
      nop();
      pRVar11 = (RtWeakPtrBase *)FUN_0429debc(local_80,uVar16);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_b8,pRVar11);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_c0);
      ElectricBoltEffect::SetActive
                (extraout_x0,local_b8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68,asStack_c8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_b8);
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      lVar9 = FUN_0429dec4(*(undefined8 *)(pEVar6 + 0x70),0);
      local_68 = *(undefined8 *)(this + 0x10);
      local_58 = 0x80;
      local_60 = fVar18 * fVar17 * fVar19 * fVar20 * (float)*(int *)(lVar9 + 0x2c);
      if (cVar1 == '\0') {
        pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0429debc(local_80,uVar16);
        plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
        (**(code **)(*plVar13 + 0x110))(plVar13,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      }
      else {
        local_14 = 0x41200000;
        pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0429debc(local_80,uVar16);
        plVar13 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
        (**(code **)(*plVar13 + 0x110))(plVar13,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        pRVar11 = (RtWeakPtrBase *)FUN_0429debc(local_80,uVar16);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_b8,pRVar11);
        cVar3 = isValidTargetZombie(this,local_b8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_b8);
        if (cVar3 != '\0') {
          pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0429debc(local_80,uVar16);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
          nop();
          tryStuckZombie(this,extraout_x0_00);
        }
      }
      if (cVar2 != '\0') {
        pRVar11 = (RtWeakPtrBase *)FUN_0429debc(local_80,uVar16);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_b8,pRVar11);
        cVar3 = isValidTargetZombie(this,local_b8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_b8);
        if (cVar3 != '\0') {
          pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_0429debc(local_80,uVar16);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
          nop();
          std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                    ((vector<Zombie*,std::allocator<Zombie*>> *)&local_98,(Zombie **)local_b8);
        }
      }
      uVar16 = uVar16 + 1;
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      std::string::~string(asStack_c8);
      uVar10 = local_80;
      uVar14 = FUN_0429deb0(local_80,local_78);
    } while (uVar16 < uVar14);
  }
  cVar2 = std::vector<Zombie*,std::allocator<Zombie*>>::empty
                    ((vector<Zombie*,std::allocator<Zombie*>> *)&local_98);
  if (cVar2 == '\0') {
    iVar4 = FUN_0429ded4(local_98,local_90);
    iVar4 = PlantFramework::Rand((PlantFramework *)this,iVar4);
    puVar15 = (undefined8 *)FUN_0429dee0(local_98,(long)iVar4);
    createChainLightning(this,(Zombie *)*puVar15);
  }
  if (cVar1 != '\0') {
    pRVar5 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar8 = Sexy::RtObject::Cast<PlantAnimRig_Electricitea>(pRVar5);
    FUN_0429da9c(pPVar8 + 0x3b8,0);
  }
  calculateNextAttackTime(this);
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantCombos,*(Plant **)(this + 0x10));
LAB_042a1554:
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_80);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_98);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricitea::OnAnimCommand(std::string const&, std::string const&) */

bool PlantElectricitea::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    findAndShockTargets((PlantElectricitea *)param_1);
  }
  return bVar1;
}


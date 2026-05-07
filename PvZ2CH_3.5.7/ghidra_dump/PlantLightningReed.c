// Class: PlantLightningReed


/* PlantLightningReed::Initialize() */

void __thiscall PlantLightningReed::Initialize(PlantLightningReed *this)

{
  float fVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantLightningReed)0x0;
  fVar1 = (float)GeneEnhancement::GetGeneEnhancementSkillBoost(10,1);
  *(float *)(this + 0x2c) = fVar1 + 1.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLightningReed::GetTargetParamsForWeapon(PlantWeapon) */

void PlantLightningReed::GetTargetParamsForWeapon(void)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UnchartedModePlantNumData::UnchartedModePlantNumData((UnchartedModePlantNumData *)&local_10,1,3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* PlantLightningReed::PlantLightningReed() */

void __thiscall PlantLightningReed::PlantLightningReed(PlantLightningReed *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantLightningReed)0x0;
  *(undefined ***)this = &PTR_GetClass_067bd230;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* PlantLightningReed::StaticNew() */

PlantLightningReed * PlantLightningReed::StaticNew(void)

{
  PlantLightningReed *this;
  
  this = ::operator_new(0x30);
  PlantLightningReed(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLightningReed::StaticClassInit() */

void PlantLightningReed::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantLightningReed");
    (*pcVar2)(plVar1,asStack_10,FUN_0403fcb0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLightningReed::StaticGetClass() */

long * PlantLightningReed::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLightningReed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLightningReed::GetClass() const */

long * PlantLightningReed::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLightningReed",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLightningReed::~PlantLightningReed() */

void __thiscall PlantLightningReed::~PlantLightningReed(PlantLightningReed *this)

{
  *(undefined ***)this = &PTR_GetClass_067bd230;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantLightningReed::~PlantLightningReed() */

void __thiscall PlantLightningReed::~PlantLightningReed(PlantLightningReed *this)

{
  ~PlantLightningReed(this);
  AK::FreeHook(this);
  return;
}


/* PlantLightningReed::CancelPlantfood() */

void __thiscall PlantLightningReed::CancelPlantfood(PlantLightningReed *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x88))();
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLightningReed::FindTargetAndFire(PlantWeapon) */

void PlantLightningReed::FindTargetAndFire(PlantFramework *param_1)

{
  char cVar1;
  PlantFramework PVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  char *__s;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  uVar6 = 0;
  if (cVar1 == '\0') goto LAB_040400d8;
  param_1[0x28] = (PlantFramework)0x0;
  cVar1 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10));
  if (cVar1 == '\0') {
    iVar3 = FUN_0403f9f0(*(undefined8 *)(param_1 + 0x10));
    if (iVar3 == 2) {
      fVar7 = (float)PlantFramework::Rand(param_1,1.0);
      lVar5 = FUN_0403ffac(*(undefined8 *)(param_1 + 0x10));
      PVar2 = (PlantFramework)(fVar7 < *(float *)(lVar5 + 0x2b8));
      param_1[0x28] = PVar2;
      goto LAB_0404012c;
    }
    if (iVar3 < 3) {
      PVar2 = param_1[0x28];
      goto LAB_0404012c;
    }
    fVar7 = (float)PlantFramework::Rand(param_1,1.0);
    lVar5 = FUN_0403ffac(*(undefined8 *)(param_1 + 0x10));
    PVar2 = (PlantFramework)(fVar7 < *(float *)(lVar5 + 700));
    param_1[0x28] = PVar2;
    if ((bool)PVar2) goto LAB_040401ac;
LAB_04040130:
    __s = "attack";
  }
  else {
    PVar2 = (PlantFramework)Plant::IsSkillActivate(*(Plant **)(param_1 + 0x10));
    param_1[0x28] = PVar2;
LAB_0404012c:
    if (PVar2 == (PlantFramework)0x0) goto LAB_04040130;
LAB_040401ac:
    __s = "attack2";
  }
  std::string::string(asStack_10,__s);
  nop();
  plVar4 = (long *)FUN_0404008c(*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*plVar4 + 600))(plVar4,asStack_10);
  std::string::~string(asStack_10);
  uVar6 = 1;
LAB_040400d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLightningReed::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void __thiscall
PlantLightningReed::FindTargetZombie
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
          PlantLightningReed *this,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ulong uVar6;
  float *pfVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
    uVar2 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar2 = (**(code **)(*(long *)this + 400))(this,param_4);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  uVar10 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::Insets::Insets((Insets *)local_30,-1,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,0x14,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
             (Insets *)local_30);
  uVar8 = local_20;
  fVar12 = 800.0;
  lVar5 = FUN_0403fa3c(local_20,local_18);
  if (lVar5 != 0) {
    do {
      FUN_0403fa48(uVar8,uVar10);
      nop();
      cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
      if (cVar1 == '\0') {
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_00);
        fVar11 = *pfVar7;
        lVar5 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
        if (fVar11 <= *(float *)(lVar5 + 0x10)) {
          pcVar9 = *(code **)(*(long *)this_00 + 0x3d0);
          Plant::GetType();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)aRStack_38);
          cVar1 = (*pcVar9)(this_00,(Insets *)local_30,0);
          if ((cVar1 == '\0') ||
             (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar2), cVar1 == '\0')) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          }
          else {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
            fVar11 = *pfVar7;
            if ((fVar11 < fVar12) && (Plant::GetCenterPt(), (float)local_30[0] <= fVar11)) {
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                        ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,(RtWeakPtrBase *)local_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
              fVar12 = fVar11;
            }
            pcVar9 = *(code **)(*(long *)this_00 + 0x20);
            uVar8 = Zomboss::StaticGetClass();
            cVar1 = (*pcVar9)(this_00,uVar8);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)this_00 + 0xd0))((Insets *)local_30,this_00);
              iVar4 = local_30[0] + -2;
              iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
              iVar4 = FUN_0403fab0(iVar4 * iVar3);
              fVar11 = (float)iVar4 + fVar11;
              if ((fVar11 < fVar12) && (Plant::GetCenterPt(), (float)local_30[0] <= fVar11)) {
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                          ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,(RtWeakPtrBase *)local_30
                          );
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
                fVar12 = fVar11;
              }
            }
          }
        }
      }
      uVar8 = local_20;
      uVar10 = uVar10 + 1;
      uVar6 = FUN_0403fa3c(local_20,local_18);
    } while (uVar10 < uVar6);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLightningReed::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantLightningReed::Fire
          (PlantLightningReed *this,RtWeakPtr *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long extraout_x0;
  LightningCloud *pLVar4;
  undefined8 uVar5;
  long lVar6;
  ResourceInfo *pRVar7;
  ResourceInfo *pRVar8;
  Insets *pIVar9;
  LightningBolt *this_00;
  string *psVar10;
  long extraout_x0_00;
  StarLightningCloud *pSVar11;
  char *pcVar12;
  RealObject *pRVar13;
  Plant *pPVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  RtWeakPtr<Sexy::SoundResource> aRStack_b8 [8];
  string asStack_b0 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  Point aPStack_98 [16];
  int local_88;
  int local_84;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [84];
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if (cVar2 != '\0') {
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 == '\0') {
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      pLVar4 = GameObject::Create<LightningCloud>();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)&local_78);
      CloudBase::SetOwner((CloudBase *)pLVar4,aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      **)(this + 0x10));
      BoardEntity::PlaceOnBoard((SexyVector3 *)pLVar4);
      uVar3 = FUN_0403f978(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
      RealObject::JoinTeam((RealObject *)pLVar4,uVar3);
      FUN_0403fa24(*(undefined4 *)(extraout_x0 + 0x2cc),pLVar4 + 0xd0);
      FUN_0403fa1c(*(undefined4 *)(extraout_x0 + 0x2d4),pLVar4 + 0xcc);
      fVar16 = (float)FUN_0403f9e8(*(undefined4 *)(*(long *)(this + 0x10) + 0x564));
      FUN_0403fa2c(fVar16 * *(float *)(extraout_x0 + 0x2d0),pLVar4 + 0xd4);
    }
    else {
      pSVar11 = GameObject::Create<StarLightningCloud>();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)&local_78);
      PoisonPeashooterCounter::SetPlant
                ((PoisonPeashooterCounter *)pSVar11,(RtWeakPtr<Sexy::SoundResource> *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
      uVar3 = FUN_0403f978(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
      RealObject::JoinTeam((RealObject *)pSVar11,uVar3);
    }
    pRVar13 = *(RealObject **)(this + 0x10);
    (**(code **)(*(long *)this + 0x300))((string *)aRStack_68,this);
    RealObject::PlayPositionalSound(pRVar13,(string *)aRStack_68,0.0);
    std::string::~string((string *)aRStack_68);
    goto LAB_04040678;
  }
  uVar5 = (**(code **)(*(long *)this + 0x198))(this);
  Plant::GetProps();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar6 = FUN_0403fa50(*(undefined8 *)(lVar6 + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Sexy::Insets::Insets((Insets *)&local_88,(Insets *)(lVar6 + 0x58));
  local_88 = local_88 + *(int *)(*(long *)(this + 0x10) + 0x114);
  local_84 = local_84 + *(int *)(*(long *)(this + 0x10) + 0x110);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  PlantFramework::FindTargetDamageableGridItem
            ((PlantFramework *)aRStack_68,this,(Insets *)&local_88,param_4);
  pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (pRVar8 == (ResourceInfo *)0x0) {
    if (pRVar7 == (ResourceInfo *)0x0) goto LAB_04040678;
  }
  else {
    if (pRVar7 != (ResourceInfo *)0x0) {
      fVar16 = (float)FUN_0403fa54(*(undefined4 *)(pRVar7 + 0x18),*(undefined4 *)(pRVar7 + 0x1c),
                                   *(undefined4 *)(pRVar7 + 0x20));
      fVar17 = (float)FUN_0403fa54(*(undefined4 *)(pRVar8 + 0x18),*(undefined4 *)(pRVar8 + 0x1c),
                                   *(undefined4 *)(pRVar8 + 0x20));
      if (fVar16 <= fVar17) goto LAB_040407c4;
    }
    pRVar7 = pRVar8;
  }
LAB_040407c4:
  pPVar14 = *(Plant **)(this + 0x10);
  fVar16 = (float)FUN_0403f9d0(*(undefined4 *)(pPVar14 + 0xf4),*(undefined4 *)(pPVar14 + 0x100),
                               *(undefined4 *)(pPVar14 + 0x104),*(undefined4 *)(pPVar14 + 0x3b8));
  fVar17 = (float)FUN_0403f9e0(*(undefined4 *)(pPVar14 + 0x3bc));
  iVar1 = *(int *)(lVar6 + 0x2c);
  fVar18 = (float)Plant::GetExtraDPSmodifier(pPVar14);
  pPVar14 = *(Plant **)(this + 0x10);
  fVar19 = (float)FUN_0403f9e4(*(undefined4 *)(pPVar14 + 0x424));
  fVar20 = (float)Plant::GetGeneSkillBoost(pPVar14);
  fVar21 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
  uVar15 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_98,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)
             (fVar21 + (fVar20 + 1.0) * fVar16 * fVar17 * (float)iVar1 * fVar18 * fVar19),local_78,
             local_74,aRStack_68,uVar5,uVar15,aPStack_98,0);
  if (this[0x28] != (PlantLightningReed)0x0) {
    local_14 = 0x41200000;
  }
  (**(code **)(*(long *)pRVar7 + 0x110))(pRVar7,aRStack_68);
  (**(code **)(*(long *)pRVar7 + 0x170))(pRVar7);
  pIVar9 = (Insets *)(**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_78,pIVar9);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aPStack_98,(float)local_78 + (float)local_70 * 0.5,
             (float)local_74 + (float)local_6c * 0.33333334,0.0);
  this_00 = GameObject::Create<LightningBolt>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
  TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_00,aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
  FUN_0403f9f8(this_00 + 0xa8,this[0x28]);
  FUN_0403fa14(*(undefined4 *)(this + 0x2c),this_00 + 0x128);
  if (this[0x28] == (PlantLightningReed)0x0) {
    std::string::string(asStack_b0,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT_DEFAULT");
    std::string::string((string *)aRStack_a8,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT");
    pcVar12 = "POPANIM_EFFECTS_LIGHTNINGREED_HIT";
  }
  else {
    std::string::string(asStack_b0,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT_DEFAULT_RED");
    std::string::string((string *)aRStack_a8,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT_RED");
    pcVar12 = "POPANIM_EFFECTS_LIGHTNINGREED_HIT_RED";
  }
  std::string::string((string *)aRStack_a0,pcVar12);
  LightningBolt::SetPopAnim(this_00,asStack_b0,(string *)aRStack_a8,(string *)aRStack_a0);
  std::string::~string((string *)aRStack_a0);
  nop();
  std::string::~string((string *)aRStack_a8);
  nop();
  std::string::~string(asStack_b0);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_b8,(RtWeakPtrBase *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  if (this[0x28] == (PlantLightningReed)0x0) {
    pcVar12 = "POPANIM_EFFECTS_LIGHTNINGREED_BOLT_DEFAULT";
  }
  else {
    pcVar12 = "POPANIM_EFFECTS_LIGHTNINGREED_BOLT_DEFAULT_RED";
  }
  std::string::string(asStack_b0,pcVar12);
  if (this[0x28] == (PlantLightningReed)0x0) {
    std::string::string((string *)aRStack_a8,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT");
    if (this[0x28] == (PlantLightningReed)0x0) goto LAB_04040a84;
LAB_04040c84:
    pcVar12 = "POPANIM_EFFECTS_LIGHTNINGREED_HIT_RED";
  }
  else {
    std::string::string((string *)aRStack_a8,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT_RED");
    if (this[0x28] != (PlantLightningReed)0x0) goto LAB_04040c84;
LAB_04040a84:
    pcVar12 = "POPANIM_EFFECTS_LIGHTNINGREED_HIT";
  }
  std::string::string((string *)aRStack_a0,pcVar12);
  LightningBolt::SetPopAnim(this_00,asStack_b0,(string *)aRStack_a8,(string *)aRStack_a0);
  std::string::~string((string *)aRStack_a0);
  nop();
  std::string::~string((string *)aRStack_a8);
  nop();
  std::string::~string(asStack_b0);
  nop();
  psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)aRStack_a8,"lightningreed");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar10);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  std::string::~string((string *)aRStack_a8);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar7 + 0x28));
  nop();
  FUN_0403fa00(this_00 + 0x118,*(undefined4 *)(extraout_x0_00 + 0x2c0));
  FUN_0403fa08(*(undefined4 *)(extraout_x0_00 + 0x2c8),*(undefined4 *)(extraout_x0_00 + 0x2c8),
               this_00 + 0x11c,this_00 + 0x120);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_b8);
  LightningBolt::SetInitialTarget(this_00,aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
  pRVar13 = *(RealObject **)(this + 0x10);
  (**(code **)(*(long *)this + 0x300))(aRStack_a0,this);
  RealObject::PlayPositionalSound(pRVar13,(string *)aRStack_a0,0.0);
  std::string::~string((string *)aRStack_a0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
LAB_04040678:
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::PlantCombos,*(Plant **)(this + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


// Class: GridItemWizardCrucible


/* GridItemWizardCrucible::canDoTrigger(std::string) */

bool GridItemWizardCrucible::canDoTrigger(long param_1)

{
  return *(int *)(param_1 + 0x1a8) == 3;
}


/* GridItemWizardCrucible::canActivated() */

bool __thiscall GridItemWizardCrucible::canActivated(GridItemWizardCrucible *this)

{
  return *(int *)(this + 0x1a8) == 1;
}


/* GridItemWizardCrucible::setValues(float, float, float, float) */

void __thiscall
GridItemWizardCrucible::setValues
          (GridItemWizardCrucible *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x1b0) = param_1;
  *(float *)(this + 0x1b4) = param_2;
  *(float *)(this + 0x1b8) = param_3;
  *(float *)(this + 0x1bc) = param_4;
  return;
}


/* GridItemWizardCrucible::CalcRenderOrder() const */

void __thiscall GridItemWizardCrucible::CalcRenderOrder(GridItemWizardCrucible *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_04c85fb0(*(undefined4 *)(this + 0x134));
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeGroundRenderOrder(iVar1,iVar2);
  return;
}


/* non-virtual thunk to GridItemWizardCrucible::CalcRenderOrder() const */

void __thiscall GridItemWizardCrucible::CalcRenderOrder(GridItemWizardCrucible *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::StaticClassInit() */

void GridItemWizardCrucible::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemWizardCrucible");
    (*pcVar2)(plVar1,asStack_10,FUN_04c870e8,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWizardCrucible::StaticGetClass() */

long * GridItemWizardCrucible::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemWizardCrucible",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWizardCrucible::GetClass() const */

long * GridItemWizardCrucible::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemWizardCrucible",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemWizardCrucible::GetCantPlantReason() const */

undefined4 __thiscall GridItemWizardCrucible::GetCantPlantReason(GridItemWizardCrucible *this)

{
  undefined4 uVar1;
  
  uVar1 = 0x74;
  if (*(int *)(this + 0x1a8) == 3) {
    uVar1 = 0x75;
  }
  return uVar1;
}


/* GridItemWizardCrucible::checkPlantTypeNameListVector() */

bool __thiscall GridItemWizardCrucible::checkPlantTypeNameListVector(GridItemWizardCrucible *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x1d0);
  lVar1 = FUN_04c86044(uVar3,*(undefined8 *)(this + 0x1d8));
  if (lVar1 == 4) {
    puVar2 = (undefined8 *)FUN_04c86010(uVar3,0);
    lVar1 = FUN_04c8601c(*puVar2,puVar2[1]);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_04c86010(uVar3,1);
      lVar1 = FUN_04c8601c(*puVar2,puVar2[1]);
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)FUN_04c86010(uVar3,2);
        lVar1 = FUN_04c8601c(*puVar2,puVar2[1]);
        if (lVar1 != 0) {
          puVar2 = (undefined8 *)FUN_04c86010(uVar3,3);
          lVar1 = FUN_04c8601c(*puVar2,puVar2[1]);
          return lVar1 != 0;
        }
      }
    }
  }
  return false;
}


/* GridItemWizardCrucible::OverrideProjectileCollision(Projectile*) */

undefined1 __thiscall
GridItemWizardCrucible::OverrideProjectileCollision
          (GridItemWizardCrucible *this,Projectile *param_1)

{
  bool bVar1;
  
  if (param_1 != (Projectile *)0x0) {
    bVar1 = Sexy::RtObject::IsA<HeathSeekerProjectile>((RtObject *)param_1);
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::onActivated() */

void GridItemWizardCrucible::onActivated(void)

{
  GridItemWizardCrucibleAnimRig *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  GridItemWizardCrucibleAnimRig::PlayCrucibleActivated(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::GridItemWizardCrucible() */

void __thiscall GridItemWizardCrucible::GridItemWizardCrucible(GridItemWizardCrucible *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = ___stack_chk_guard;
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_06994290;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWizardCrucible_06994560;
  uVar2 = PVZ_EOT();
  this[0x1c0] = (GridItemWizardCrucible)0x0;
  *(undefined4 *)(this + 0x1ac) = uVar2;
  *(undefined4 *)(this + 0x1b4) = 0x43fa0000;
  *(undefined4 *)(this + 0x1b0) = 0x40a00000;
  *(undefined4 *)(this + 0x1bc) = 0x40a00000;
  *(undefined4 *)(this + 0x1b8) = 0x42480000;
  std::string::string((string *)(this + 0x1c8),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWizardCrucible::StaticNew() */

GridItemWizardCrucible * GridItemWizardCrucible::StaticNew(void)

{
  GridItemWizardCrucible *this;
  
  this = ::operator_new(0x1e8);
  GridItemWizardCrucible(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::setState(WizardCrucibleState) */

void __thiscall GridItemWizardCrucible::setState(GridItemWizardCrucible *this,int param_2)

{
  GridItemMagicMirrorRig *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) == param_2) goto switchD_04c87aec_default;
  *(int *)(this + 0x1a8) = param_2;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  switch(param_2) {
  case 1:
    GridItemMagicMirrorRig::playWorkingAnim(this_00);
    goto switchD_04c87aec_default;
  case 2:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemWizardCrucibleAnimRig::PlayCrucibleActivating
              ((GridItemWizardCrucibleAnimRig *)this_00,aRStack_50);
    break;
  case 3:
    (**(code **)(*(long *)this + 0x2b0))(this);
    goto switchD_04c87aec_default;
  case 4:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemWizardCrucibleAnimRig::PlayCrucibleDisabling
              ((GridItemWizardCrucibleAnimRig *)this_00,aRStack_50);
    break;
  case 5:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,aRStack_58);
    GridItemMagicMirrorRig::playDisappearAnim(this_00,aRStack_50);
    break;
  default:
    goto switchD_04c87aec_default;
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
switchD_04c87aec_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemWizardCrucible::Activate() */

char __thiscall GridItemWizardCrucible::Activate(GridItemWizardCrucible *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = canActivated(this);
  if (cVar1 != '\0') {
    setState(this,2);
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x1ac) = fVar2 + *(float *)(this + 0x1b0);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::explode() */

void __thiscall GridItemWizardCrucible::explode(GridItemWizardCrucible *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  GridItemWizardCrucible *pGVar5;
  code *pcVar6;
  DamageInfo *pDVar7;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  Insets aIStack_90 [16];
  int local_80 [6];
  DamageInfo aDStack_68 [4];
  int local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x1c0] = (GridItemWizardCrucible)0x1;
  GridItem::GetGridLocation();
  GridItem::GetGridLocation();
  Sexy::Insets::Insets(aIStack_90,local_80[0] + -1,local_64 + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80);
  uVar3 = operator|(1,2);
  uVar2 = operator|(uVar3,4);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_80,uVar2,
             aIStack_90);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)local_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8), bVar1) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    pGVar5 = (GridItemWizardCrucible *)*puVar4;
    if ((pGVar5 != (GridItemWizardCrucible *)0x0) && (this != pGVar5)) {
                    /* WARNING: Load size is inaccurate */
      pDVar7._0_4_ = *(DamageInfo **)(this + 0x1b4);
      pcVar6 = *(code **)(*(long *)pGVar5 + 0x110);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo(pDVar7._0_4_,local_98,local_94,aDStack_68,aPStack_a0,0);
      (*pcVar6)(pGVar5,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemWizardCrucible::~GridItemWizardCrucible() */

void __thiscall GridItemWizardCrucible::~GridItemWizardCrucible(GridItemWizardCrucible *this)

{
  *(undefined ***)this = &PTR_GetClass_06994290;
  *(undefined ***)(this + 0x10) = &PTR__GridItemWizardCrucible_06994560;
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::~vector((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
             *)(this + 0x1d0));
  std::string::~string((string *)(this + 0x1c8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemWizardCrucible::~GridItemWizardCrucible() */

void __thiscall GridItemWizardCrucible::~GridItemWizardCrucible(GridItemWizardCrucible *this)

{
  ~GridItemWizardCrucible(this + -0x10);
  return;
}


/* GridItemWizardCrucible::~GridItemWizardCrucible() */

void __thiscall GridItemWizardCrucible::~GridItemWizardCrucible(GridItemWizardCrucible *this)

{
  ~GridItemWizardCrucible(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemWizardCrucible::~GridItemWizardCrucible() */

void __thiscall GridItemWizardCrucible::~GridItemWizardCrucible(GridItemWizardCrucible *this)

{
  ~GridItemWizardCrucible(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::outflowVenom() */

void __thiscall GridItemWizardCrucible::outflowVenom(GridItemWizardCrucible *this)

{
  RtObject *this_00;
  EffectObject_WizardCrucibleVenom *pEVar1;
  Board *this_01;
  int local_38;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  string asStack_18 [4];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  GridItem::GetGridLocation();
  Sexy::Insets::Insets(aIStack_28,local_30 + -1,local_14 + -1,3,3);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"EffectObject_WizardCrucibleVenom");
  GridItem::GetGridLocation();
  GridItem::GetGridLocation();
  this_00 = (RtObject *)Board::AddEffectObject(this_01,asStack_18,local_38,local_2c);
  pEVar1 = Sexy::RtObject::Cast<EffectObject_WizardCrucibleVenom>(this_00);
  std::string::~string(asStack_18);
  nop();
  if (pEVar1 != (EffectObject_WizardCrucibleVenom *)0x0) {
    Sexy::Insets::Insets((Insets *)asStack_18,aIStack_28);
                    /* WARNING: Load size is inaccurate */
    EffectObject_WizardCrucibleVenom::setVrnomValues
              (*(EffectObject_WizardCrucibleVenom **)(this + 0x1bc),*(undefined4 *)(this + 0x1b8),
               pEVar1,asStack_18);
  }
  (**(code **)(*(long *)this + 0x230))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::onAnimDone(std::string const&) */

void __thiscall GridItemWizardCrucible::onAnimDone(GridItemWizardCrucible *this,string *param_1)

{
  char cVar1;
  GridItemWizardCrucibleAnimRig *this_00;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  iVar2 = *(int *)(this + 0x1a8);
  if (iVar2 == 2) {
    GridItemWizardCrucibleAnimRig::getActivatingAnimName(this_00);
    cVar1 = std::operator==(param_1,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    if (cVar1 != '\0') {
      setState(this,3);
      goto LAB_04c88354;
    }
    iVar2 = *(int *)(this + 0x1a8);
  }
  if (iVar2 == 4) {
    PlantAnimRig_OlivePit::getPreviewAnimationName((PlantAnimRig_OlivePit *)this_00);
    cVar1 = std::operator==(param_1,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    if (cVar1 != '\0') {
      setState(this,1);
      goto LAB_04c88354;
    }
    iVar2 = *(int *)(this + 0x1a8);
  }
  if (iVar2 == 5) {
    GridItemMagicMirrorRig::getDisAppearingAnimLabel((GridItemMagicMirrorRig *)this_00);
    cVar1 = std::operator==(param_1,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    if (cVar1 != '\0') {
      outflowVenom(this);
    }
  }
LAB_04c88354:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::pickRandomSeedPacket() */

void GridItemWizardCrucible::pickRandomSeedPacket(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  GridItemWizardCrucible *in_x0;
  string *psVar4;
  long lVar5;
  vector *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  string *in_x8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(in_x0 + 0x1c8);
  if (cVar1 == '\0') {
    cVar1 = checkPlantTypeNameListVector(in_x0);
    if (cVar1 != '\0') {
      psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      iVar3 = *(int *)(lVar5 + 0xd0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      if (iVar3 < 4) {
        iVar3 = iVar3 + 1;
      }
      pvVar6 = (vector *)FUN_04c86010(*(undefined8 *)(in_x0 + 0x1d0),(long)(iVar3 + -1));
      std::vector<std::string,std::allocator<std::string>>::vector
                ((vector<std::string,std::allocator<std::string>> *)&local_20,pvVar6);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_20);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
      local_30 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar7,uVar8,in_x0 + 0x1c8);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      if (bVar2) {
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_28,(__normal_iterator *)&local_30);
        std::vector<std::string,std::allocator<std::string>>::erase
                  ((vector<std::string,std::allocator<std::string>> *)&local_20,local_28);
      }
      iVar3 = FUN_04c8601c(local_20,local_18);
      iVar3 = Sexy::Rand(iVar3);
      uVar7 = FUN_04c86028(local_20,(long)iVar3);
      FUN_05475d88((string *)&local_28,uVar7);
      FUN_05474148();
      std::string::~string((string *)&local_28);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_20);
      goto LAB_04c8858c;
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_04c8858c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::triggerRarityUpgrade() */

void __thiscall GridItemWizardCrucible::triggerRarityUpgrade(GridItemWizardCrucible *this)

{
  LawnApp *pLVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  string *psVar6;
  long lVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  Collectable *this_02;
  string *extraout_x0;
  Board *pBVar8;
  int local_60;
  int local_5c;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  DVec3 aDStack_28 [16];
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  BoardTransforms::GridToBoardSpace(aPStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_48,(float)local_60,(float)local_5c,20.0);
  pickRandomSeedPacket();
  cVar2 = FUN_0547419c(asStack_58);
  if (cVar2 == '\0') {
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar6);
    pLVar1 = gLawnApp;
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    cVar2 = LawnApp::CanLoadGroup(pLVar1,(string *)(lVar7 + 0x10));
    if (cVar2 != '\0') {
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      Board::LoadResourceGroupForGameplay(pBVar8,(string *)(lVar7 + 0x10));
    }
    pLVar1 = gLawnApp;
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    cVar2 = LawnApp::CanLoadGroups(pLVar1,(vector *)(lVar7 + 0x80));
    if (cVar2 != '\0') {
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      Board::LoadResourceGroupsForGameplay(pBVar8,(vector *)(lVar7 + 0x80));
    }
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    uVar3 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(this + 0x1c8),false);
    psVar6 = *(string **)(gLawnApp + 0x9f0);
    std::string::string((string *)aPStack_18,"wizardcrucible_packet");
    this_02 = (Collectable *)
              Board::AddCollectableWithDefaultMotion(psVar6,(SexyVector3 *)aPStack_18);
    std::string::~string((string *)aPStack_18);
    nop();
    nop();
    CollectableSeedPacket::SetSeedType(extraout_x0);
    FUN_04c85ff4(extraout_x0 + 0x208,uVar3);
    local_38 = local_48;
    local_30 = local_40;
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = Sexy::Rand(iVar4 * 3);
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    local_38._0_4_ = (float)(iVar4 - (iVar5 * 3) / 2) + (float)local_38;
    iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar4 = Sexy::Rand(iVar4 * 3);
    iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
    local_30 = 0;
    local_38 = CONCAT44((float)(iVar4 - (iVar5 * 3) / 2) + local_38._4_4_,(float)local_38);
    DVec3::DVec3(aDStack_28);
    DVec3::DVec3((DVec3 *)aPStack_18);
    CalculateTossVelocity
              ((SexyVector3 *)&local_48,(SexyVector3 *)&local_38,80.0,0.6,(SexyVector3 *)aDStack_28,
               (SexyVector3 *)aPStack_18);
    Collectable::SetMotionNewtonian
              (this_02,(SexyVector3 *)aDStack_28,(SexyVector3 *)aPStack_18,true);
    Collectable::SetKeepOnBoard(this_02,true);
    NewPVPHealthBar::FlashDamage((NewPVPHealthBar *)this_02);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    std::string::~string(asStack_58);
  }
  else {
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::tryToTrigger(std::string) */

void __thiscall
GridItemWizardCrucible::tryToTrigger(GridItemWizardCrucible *this,undefined8 param_2)

{
  uint uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  uVar1 = canDoTrigger(this,asStack_10);
  std::string::~string(asStack_10);
  if ((uVar1 & 0xff) != 0) {
    thunk_FUN_05475e00(this + 0x1c8,param_2);
    triggerRarityUpgrade(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::initializePlantTypeNameList() */

void __thiscall GridItemWizardCrucible::initializePlantTypeNameList(GridItemWizardCrucible *this)

{
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  *this_00;
  undefined4 uVar1;
  bool bVar2;
  Magento *this_01;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  GridItemWizardCrucibleProps *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  string *psVar7;
  ulong uVar8;
  ulong uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  string asStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar9 = 0;
  this_00 = (vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
             *)(this + 0x1d0);
  local_8 = ___stack_chk_guard;
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::clear(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  this_01 = (Magento *)
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Magento::GetPlantLevelUp(this_01);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
  lVar3 = FUN_04c86030(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
  if (lVar3 != 0) {
    do {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
      this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04c8603c(*(undefined8 *)(lVar3 + 0x60),uVar9);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
      FUN_05475d88(asStack_80,lVar3 + 0x80);
      pGVar4 = GridItem::GetProps<GridItemWizardCrucibleProps>();
      uVar5 = FUN_04c876f8(*(undefined8 *)(pGVar4 + 0x138));
      uVar6 = FUN_04c87748(*(undefined8 *)(pGVar4 + 0x140));
      local_78 = std::
                 find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar5,uVar6,asStack_80);
      local_70 = FUN_04c87748(*(undefined8 *)(pGVar4 + 0x140));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
      if (!bVar2) {
        psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_70)
        ;
        uVar1 = *(undefined4 *)(lVar3 + 0xd0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        switch(uVar1) {
        case 1:
          std::vector<std::string,std::allocator<std::string>>::push_back
                    ((vector<std::string,std::allocator<std::string>> *)avStack_68,asStack_80);
          break;
        case 2:
          std::vector<std::string,std::allocator<std::string>>::push_back
                    ((vector<std::string,std::allocator<std::string>> *)avStack_50,asStack_80);
          break;
        case 3:
          std::vector<std::string,std::allocator<std::string>>::push_back
                    ((vector<std::string,std::allocator<std::string>> *)avStack_38,asStack_80);
          break;
        case 4:
          std::vector<std::string,std::allocator<std::string>>::push_back
                    ((vector<std::string,std::allocator<std::string>> *)avStack_20,asStack_80);
        }
      }
      uVar9 = uVar9 + 1;
      std::string::~string(asStack_80);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
      uVar8 = FUN_04c86030(*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
    } while (uVar9 < uVar8);
  }
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::push_back(this_00,(vector *)avStack_68);
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::push_back(this_00,(vector *)avStack_50);
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::push_back(this_00,(vector *)avStack_38);
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::push_back(this_00,(vector *)avStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_38);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_50);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemWizardCrucible::onGridItemInitialize() */

void __thiscall GridItemWizardCrucible::onGridItemInitialize(GridItemWizardCrucible *this)

{
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  setState(this,1);
  FUN_04c86168(this + 0x24);
  initializePlantTypeNameList(this);
  return;
}


/* GridItemWizardCrucible::onUpdate() */

void __thiscall GridItemWizardCrucible::onUpdate(GridItemWizardCrucible *this)

{
  float fVar1;
  undefined4 uVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  if (((*(int *)(this + 0x1a8) != 0) &&
      ((**(code **)(*(long *)this + 0x2b8))(this), *(int *)(this + 0x1a8) == 3)) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x1ac) < fVar1)) {
    setState(this,4);
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x1ac) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemWizardCrucible::GatherPlantingRestrictions
          (GridItemWizardCrucible *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = GetCantPlantReason(this);
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemWizardCrucible::TakeDamage(DamageInfo const&) */

void __thiscall GridItemWizardCrucible::TakeDamage(GridItemWizardCrucible *this,DamageInfo *param_1)

{
  float fVar1;
  float fVar2;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1c0] == (GridItemWizardCrucible)0x0) {
    DamageInfo::DamageInfo(aDStack_68,param_1);
    fVar1 = local_60;
    if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
      fVar2 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar2 = (float)(**(code **)(*(long *)this + 0x1d8))();
    }
    if (fVar2 <= fVar1) {
      if (*(code **)(*(long *)this + 0x1d8) == GridItem::GetHitpoints) {
        local_60 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        local_60 = (float)(**(code **)(*(long *)this + 0x1d8))();
      }
      local_60 = local_60 - 1.0;
      if (this[0x1c0] == (GridItemWizardCrucible)0x0) {
        setState(this,5);
        explode(this);
      }
    }
    GridItem::TakeDamage((GridItem *)this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


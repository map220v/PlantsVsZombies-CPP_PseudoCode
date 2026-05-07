// Class: PlantSnowPea


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnowPea::StaticClassInit() */

void PlantSnowPea::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSnowPea");
    (*pcVar2)(plVar1,asStack_10,FUN_040645c4,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSnowPea::StaticGetClass() */

long * PlantSnowPea::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSnowPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSnowPea::GetClass() const */

long * PlantSnowPea::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSnowPea",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnowPea::UpdatePlantfood() */

void __thiscall PlantSnowPea::UpdatePlantfood(PlantSnowPea *this)

{
  char cVar1;
  float *pfVar2;
  long lVar3;
  PlantAction *pPVar4;
  Plant *pPVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    EATextSquish::Vec3::Vec3(aVStack_18,*pfVar2,pfVar2[1],pfVar2[2]);
    pPVar5 = *(Plant **)(this + 0x10);
    fVar6 = *(float *)(pPVar5 + 0xc4);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    pPVar4 = (PlantAction *)FUN_040634cc(*(undefined8 *)(lVar3 + 0x70),0);
    PeashooterPlantfood::Update
              ((PeashooterPlantfood *)(this + 0x28),pPVar5,(SexyVector3 *)aVStack_18,fVar6,pPVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSnowPea::PlantSnowPea() */

void __thiscall PlantSnowPea::PlantSnowPea(PlantSnowPea *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c40f0;
  ZombossSkyCityLineShoot::ZombossSkyCityLineShoot((ZombossSkyCityLineShoot *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* PlantSnowPea::StaticNew() */

PlantSnowPea * PlantSnowPea::StaticNew(void)

{
  PlantSnowPea *this;
  
  this = ::operator_new(0x50);
  PlantSnowPea(this);
  return this;
}


/* PlantSnowPea::~PlantSnowPea() */

void __thiscall PlantSnowPea::~PlantSnowPea(PlantSnowPea *this)

{
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_00;
  
  this_00 = (RtWeakPtr *)(this + 0x48);
  *(undefined ***)this = &PTR_GetClass_067c40f0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSnowPea::~PlantSnowPea() */

void __thiscall PlantSnowPea::~PlantSnowPea(PlantSnowPea *this)

{
  ~PlantSnowPea(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnowPea::onPlantfoodEnded() */

void __thiscall PlantSnowPea::onPlantfoodEnded(PlantSnowPea *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Effect_PopAnim *pEVar1;
  StandaloneEffect *this_01;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  pEVar1 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  std::string::string(asStack_10,"plantfood_off");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  this_01 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetKeepAlive(this_01,false);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnowPea::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantSnowPea::Fire(PlantSnowPea *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  Plant *pPVar6;
  undefined8 uVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  RealObject *this_01;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  if ((cVar2 != '\0') && (cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar2 != '\0'))
  {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 2;
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar4 = FUN_040634cc(*(undefined8 *)(lVar4 + 0x70),
                         (long)*(int *)(*(long *)(this + 0x10) + 0x150));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    fVar11 = *(float *)(this_00 + 0xc4);
    fVar13 = *pfVar5;
    fVar12 = pfVar5[2];
    fVar9 = *(float *)(lVar4 + 0x6c);
    fVar8 = *(float *)(lVar4 + 0x68);
    fVar10 = pfVar5[1];
    uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar4 + 8));
    lVar4 = Board::AddProjectile
                      ((Board *)(fVar13 + fVar8 * fVar11),fVar10,fVar12 - fVar11 * fVar9,uVar7,
                       (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10,*(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar7 = FUN_0406348c(*(undefined8 *)(lVar4 + 0xe0));
    uVar7 = operator|(uVar7,0x100);
    FUN_04063490((undefined8 *)(lVar4 + 0xe0),uVar7);
    this_01 = *(RealObject **)(this + 0x10);
    std::string::string((string *)aRStack_10,"Play_PeaPod_Fire_PF");
    RealObject::PlayPositionalSound(this_01,(string *)aRStack_10,0.0);
    std::string::~string((string *)aRStack_10);
    nop();
    goto LAB_04063bb0;
  }
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 != '\0') {
    lVar4 = 0;
    goto LAB_04063bb0;
  }
  fVar8 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  cVar2 = Plant::IsSkillCheat(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    iVar3 = FUN_040634c4(*(undefined8 *)(this + 0x10));
    if (iVar3 == 2) {
      if (fVar8 <= 0.15) goto LAB_04063d24;
    }
    else if ((2 < iVar3) && (fVar8 <= 0.3)) {
LAB_04063d24:
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_18);
      pPVar6 = *(Plant **)(this + 0x10);
      uVar1 = *(undefined4 *)(pPVar6 + 0x110);
      std::string::string((string *)aRStack_10,"IceLancePeaDefault");
      lVar4 = Plant::SpecialFire(pPVar6,a_Stack_18,uVar1,(string *)aRStack_10);
      std::string::~string((string *)aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
      goto LAB_04063bb0;
    }
  }
  else {
    cVar2 = Plant::IsSkillActivate(*(Plant **)(this + 0x10));
    if (cVar2 != '\0') goto LAB_04063d24;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  lVar4 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04063bb0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnowPea::CancelPlantfood() */

void __thiscall PlantSnowPea::CancelPlantfood(PlantSnowPea *this)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  Effect_PopAnim *pEVar4;
  StandaloneEffect *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_00 = (RtWeakPtr *)(this + 0x48);
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar3 + 0x88))();
    PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      pEVar4 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_10,"plantfood_off");
      Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_10,0);
      std::string::~string(asStack_10);
      nop();
      this_01 = (StandaloneEffect *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      StandaloneEffect::SetKeepAlive(this_01,false);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSnowPea::Idle() */

void __thiscall PlantSnowPea::Idle(PlantSnowPea *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnowPea::onPlantfoodStarted() */

void __thiscall PlantSnowPea::onPlantfoodStarted(PlantSnowPea *this)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x80))(0x41200000);
    FUN_040634a0(aRStack_10,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    fVar4 = *(float *)(lVar3 + 0x38);
    lVar3 = FUN_04063fd8(*(undefined8 *)(this + 0x10));
    ZombossSkyCityLineShoot::Start
              ((ZombossSkyCityLineShoot *)(this + 0x28),fVar4,*(int *)(lVar3 + 0x2b8),1.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSnowPea::ApplyPlantfood() */

void __thiscall PlantSnowPea::ApplyPlantfood(PlantSnowPea *this)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  float *pfVar6;
  Plant *pPVar7;
  ulong uVar8;
  RealObject *this_01;
  undefined8 uVar9;
  Zombie *pZVar10;
  RtMixedPtr aRStack_140 [8];
  RtId aRStack_138 [8];
  string asStack_130 [8];
  RtMixedPtr aRStack_128 [8];
  RtId aRStack_120 [8];
  string asStack_118 [8];
  RtMixedPtr aRStack_110 [8];
  RtId aRStack_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_140);
  std::string::string(asStack_130,"onPlantfoodStartedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_e0,aRStack_138,asStack_130);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_128);
  std::string::string(asStack_118,"onPlantfoodLoopedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98,aRStack_120,asStack_118);
  pPVar7 = *(Plant **)(this + 0x10);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_110);
  std::string::string((string *)&local_f8,"onPlantfoodEndedCallback");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            (aRStack_50,aRStack_108,(string *)&local_f8);
  Plant::EnablePlantfoodAnimation(pPVar7,aRStack_e0,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)&local_f8);
  nop();
  Sexy::RtId::~RtId(aRStack_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  std::string::~string(asStack_118);
  nop();
  Sexy::RtId::~RtId(aRStack_120);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_128);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_e0);
  std::string::~string(asStack_130);
  nop();
  Sexy::RtId::~RtId(aRStack_138);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_140);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_01 = *(RealObject **)(this + 0x10);
    std::string::string((string *)&local_f8,"Play_SnowPea_PF");
    RealObject::PlayPositionalSound(this_01,(string *)&local_f8,0.0);
    std::string::~string((string *)&local_f8);
    nop();
  }
  uVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_f8);
  Sexy::Insets::Insets
            ((Insets *)aRStack_108,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8),1
            );
  EntityFinder::GetEntitiesInGridSquares((string *)&local_f8,2,aRStack_108);
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_108);
  lVar2 = FUN_040634cc(*(undefined8 *)(lVar2 + 0x70),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_108);
  uVar9 = local_f8;
                    /* WARNING: Load size is inaccurate */
  pZVar10._0_4_ = *(Zombie **)(lVar2 + 0x3c);
  lVar2 = FUN_040634dc(local_f8,local_f0);
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_040634e8(uVar9,uVar8);
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)*puVar3,*(RealObject **)(this + 0x10));
      if (cVar1 != '\0') {
        FUN_040634e8(local_f8,uVar8);
        nop();
        Zombie::ApplyCondition(pZVar10._0_4_,0);
      }
      uVar9 = local_f8;
      uVar8 = uVar8 + 1;
      uVar4 = FUN_040634dc(local_f8,local_f0);
    } while (uVar8 < uVar4);
  }
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)aRStack_110,"POPANIM_EFFECTS_SNOWPEA_PLANTFOOD");
  GetPAMByName((string *)aRStack_110);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_108);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_108);
  std::string::~string((string *)aRStack_110);
  nop();
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_108,*pfVar6 - 110.0,pfVar6[1] - 115.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_108,-1);
  FUN_040634f0(this_00 + 0x1c);
  std::string::string((string *)aRStack_108,"plantfood_on");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_108,0);
  std::string::~string((string *)aRStack_108);
  nop();
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)this_00,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),(RtWeakPtrBase *)aRStack_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_108);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_f8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


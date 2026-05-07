// Class: PlantLemon


/* PlantLemon::CanApplyPlantfood() */

undefined8 __thiscall PlantLemon::CanApplyPlantfood(PlantLemon *this)

{
  undefined8 uVar1;
  
  if (2 < *(int *)(this + 0x88) - 1U) {
    uVar1 = FUN_04094530(*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
    return uVar1;
  }
  return 0;
}


/* PlantLemon::UpdateActions() */

void __thiscall PlantLemon::UpdateActions(PlantLemon *this)

{
  char cVar1;
  
  cVar1 = FUN_04094530(*(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
  if (cVar1 == '\0') {
    LemonPlantFoodCounter::Update((LemonPlantFoodCounter *)(this + 0x28));
  }
  cVar1 = FUN_04094530(*(undefined4 *)(this + 0x70),*(undefined4 *)(this + 0x74));
  if (cVar1 != '\0') {
    return;
  }
  LemonNormalShooter::Update((LemonNormalShooter *)(this + 0x60));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLemon::StaticClassInit() */

void PlantLemon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantLemon");
    (*pcVar2)(plVar1,asStack_10,FUN_040951b0,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLemon::StaticGetClass() */

long * PlantLemon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLemon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLemon::GetClass() const */

long * PlantLemon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLemon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLemon::GetBeachStage() */

BeachStage * PlantLemon::GetBeachStage(void)

{
  bool bVar1;
  RtObject *this;
  BeachStage *pBVar2;
  
  this = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  if ((this != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<BeachStage>(this), bVar1)) {
    pBVar2 = Sexy::RtObject::Cast<BeachStage>(this);
    return pBVar2;
  }
  return (BeachStage *)0x0;
}


/* PlantLemon::playBack() */

void __thiscall PlantLemon::playBack(PlantLemon *this)

{
  RtObject *this_00;
  PlantAnimRig_Lemon *pPVar1;
  
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_Lemon>(this_00);
  PlantAnimRig_Lemon::playBack(pPVar1);
  *(undefined4 *)(this + 0x88) = 0;
  pPVar1 = (PlantAnimRig_Lemon *)FUN_04095470(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Lemon::setIdleState(pPVar1,1);
  return;
}


/* PlantLemon::Initialize() */

void __thiscall PlantLemon::Initialize(PlantLemon *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = GetBeachStage();
  if (lVar1 != 0) {
    lVar1 = FUN_04095a6c(*(undefined8 *)(this + 0x10));
    fVar3 = *(float *)(lVar1 + 0x2c0);
    fVar2 = (float)Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
    lVar1 = GetBeachStage();
    FUN_040945c4((float)(int)(fVar2 * fVar3),lVar1 + 0xe8);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLemon::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantLemon::FindTargetAndFire(PlantLemon *this,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  PlantAnimRig_HollyKnight *this_00;
  float fVar4;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    cVar1 = '\0';
    goto LAB_04095c18;
  }
  cVar1 = '\0';
  if (*(int *)(this + 0x88) - 1U < 2) goto LAB_04095c18;
  Plant::FindTargetInRow
            (aRStack_10,*(long *)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             param_2);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  cVar1 = bVar2;
  if (bVar2) {
    cVar1 = FUN_04094510(*(undefined8 *)(this + 0x10));
    if (cVar1 != '\0') {
      fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      lVar3 = FUN_04095a6c(*(undefined8 *)(this + 0x10));
      if (fVar4 < *(float *)(lVar3 + 0x2c4)) {
        *(undefined4 *)(this + 0x88) = 1;
        this_00 = (PlantAnimRig_HollyKnight *)FUN_04095470(*(undefined8 *)(this + 0x10));
        PlantAnimRig_HollyKnight::SetNumDamageStates(this_00,2);
        (**(code **)(*(long *)this + 0x1a0))(this);
        goto LAB_04095c10;
      }
    }
    (**(code **)(*(long *)this + 0x1a0))(this);
    cVar1 = bVar2;
  }
LAB_04095c10:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04095c18:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantLemon::GetLemonAcidDamage() */

float __thiscall PlantLemon::GetLemonAcidDamage(PlantLemon *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_04095a6c(*(undefined8 *)(this + 0x10));
  fVar3 = *(float *)(lVar1 + 0x2b8);
  fVar2 = (float)Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
  return fVar2 * fVar3;
}


/* PlantLemon::PlantLemon() */

void __thiscall PlantLemon::PlantLemon(PlantLemon *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067ce220;
  LemonPlantFoodCounter::LemonPlantFoodCounter((LemonPlantFoodCounter *)(this + 0x28));
  LemonNormalShooter::LemonNormalShooter((LemonNormalShooter *)(this + 0x60));
  return;
}


/* PlantLemon::StaticNew() */

PlantLemon * PlantLemon::StaticNew(void)

{
  PlantLemon *this;
  
  this = ::operator_new(0x90);
  PlantLemon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLemon::OnAnimCommand(std::string const&, std::string const&) */

void PlantLemon::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  BeachStage *this;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"rain_action");
  if (bVar1) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    LemonPlantFoodCounter::Start((LemonPlantFoodCounter *)0x40400000,param_1 + 0x28,0x3c,aRStack_10)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    lVar3 = GetBeachStage();
    if ((lVar3 != 0) && (cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10)), cVar2 != '\0')
       ) {
      lVar3 = FUN_04095a6c(*(undefined8 *)(param_1 + 0x10));
      fVar5 = *(float *)(lVar3 + 700);
      this = (BeachStage *)GetBeachStage();
      BeachStage::SetLemonRainDelayTime(this,(int)fVar5);
    }
  }
  else {
    bVar1 = std::operator==(param_2,"sound_action");
    if (bVar1) {
      pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar4,"Play_Plant_Lemon_PlantFood_Loop");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLemon::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantLemon::Fire(PlantLemon *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ZombossCrosshair *extraout_x0;
  PlantAnimRig_Lemon *this_00;
  PlantAnimRig_HollyKnight *this_01;
  char *pcVar2;
  long lVar3;
  ZombossCrosshair *pZVar4;
  LemonNormalShooter *pLVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x88) == 1) {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 1;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    PlantFramework::Fire
              ((PlantFramework *)this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
               param_4);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    BombProjectile::SetOwningRocket(extraout_x0);
    *(undefined4 *)(this + 0x88) = 2;
    this_00 = (PlantAnimRig_Lemon *)FUN_04095470(*(undefined8 *)(this + 0x10));
    PlantAnimRig_Lemon::setIdleState(this_00,5);
    this_01 = (PlantAnimRig_HollyKnight *)FUN_04095470(*(undefined8 *)(this + 0x10));
    PlantAnimRig_HollyKnight::SetNumDamageStates(this_01,1);
    pZVar4 = extraout_x0;
  }
  else {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Plant_Lemon_Attack_Start");
    iVar1 = FUN_04094508(*(undefined8 *)(this + 0x10));
    if (iVar1 < 3) {
      pLVar5._0_4_ = (LemonNormalShooter *)((float)iVar1 * 0.16);
    }
    else {
      pLVar5._0_4_ = (LemonNormalShooter *)0x3ef5c28f;
      iVar1 = 3;
    }
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_20);
    lVar3 = FUN_04095a6c(*(undefined8 *)(this + 0x10));
    lVar3 = FUN_040945d4(*(undefined8 *)(lVar3 + 0x70));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)(lVar3 + 8));
    LemonNormalShooter::Start
              (pLVar5._0_4_,this + 0x60,iVar1,aRStack_18,
               (RtWeakPtr<Sexy::SoundResource> *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    pZVar4 = (ZombossCrosshair *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pZVar4);
}


/* PlantLemon::~PlantLemon() */

void __thiscall PlantLemon::~PlantLemon(PlantLemon *this)

{
  *(undefined ***)this = &PTR_GetClass_067ce220;
  LemonNormalShooter::~LemonNormalShooter((LemonNormalShooter *)(this + 0x60));
  LemonPlantFoodCounter::~LemonPlantFoodCounter((LemonPlantFoodCounter *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantLemon::~PlantLemon() */

void __thiscall PlantLemon::~PlantLemon(PlantLemon *this)

{
  ~PlantLemon(this);
  AK::FreeHook(this);
  return;
}


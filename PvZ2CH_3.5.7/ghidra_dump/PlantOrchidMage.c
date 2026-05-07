// Class: PlantOrchidMage


/* PlantOrchidMage::CancelPlantfood() */

void __thiscall PlantOrchidMage::CancelPlantfood(PlantOrchidMage *this)

{
  code *pcVar1;
  
  if (this[8] != (PlantOrchidMage)0x0) {
    Plant::DisablePlantfoodAnimation(*(Plant **)(this + 0x10));
    this[0x43] = (PlantOrchidMage)0x0;
    this[0x28] = (PlantOrchidMage)0x1;
    pcVar1 = *(code **)(*(long *)this + 0x150);
    this[0x2b] = (PlantOrchidMage)0x1;
    (*pcVar1)(this,0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::StaticClassInit() */

void PlantOrchidMage::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantOrchidMage");
    (*pcVar2)(plVar1,asStack_10,FUN_03465960,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantOrchidMage::StaticGetClass() */

long * PlantOrchidMage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantOrchidMage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantOrchidMage::GetClass() const */

long * PlantOrchidMage::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantOrchidMage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantOrchidMage::PlantOrchidMage() */

void __thiscall PlantOrchidMage::PlantOrchidMage(PlantOrchidMage *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06638bc0;
  Sexy::Insets::Insets((Insets *)(this + 0x2c));
  return;
}


/* PlantOrchidMage::StaticNew() */

PlantOrchidMage * PlantOrchidMage::StaticNew(void)

{
  PlantOrchidMage *this;
  
  this = ::operator_new(0x58);
  PlantOrchidMage(this);
  return this;
}


/* PlantOrchidMage::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantOrchidMage::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"passive_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0xa8))(param_1,0);
  }
  bVar1 = std::operator==(param_2,"attacking");
  if (bVar1) {
    param_1[0x44] = (string)0x1;
  }
  return 1;
}


/* PlantOrchidMage::~PlantOrchidMage() */

void __thiscall PlantOrchidMage::~PlantOrchidMage(PlantOrchidMage *this)

{
  *(undefined ***)this = &PTR_GetClass_06638bc0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantOrchidMage::~PlantOrchidMage() */

void __thiscall PlantOrchidMage::~PlantOrchidMage(PlantOrchidMage *this)

{
  ~PlantOrchidMage(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::findLayerLocation(std::string) */

void __thiscall PlantOrchidMage::findLayerLocation(PlantOrchidMage *this,string *param_2)

{
  int iVar1;
  int iVar2;
  PopAnimRig *this_00;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  RtWeakPtr<Sexy::ResourceInfo> local_28 [8];
  undefined4 local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18);
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  PopAnimRig::CalcSymbolRect(this_00,param_2,(TRect *)aIStack_18);
  lVar3 = *(long *)(this + 0x10);
  fVar6 = *(float *)(lVar3 + 0x1c);
  fVar4 = (float)FUN_03462184(*(undefined4 *)(lVar3 + 0x18),fVar6,*(undefined4 *)(lVar3 + 0x20));
  Sexy::TRect<int>::GetCenter();
  iVar1 = FUN_03462250(local_38);
  FUN_03461f3c(local_28,*(undefined8 *)(this + 0x10));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(local_28);
  fVar5 = *(float *)(lVar3 + 0x9c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_28);
  Sexy::TRect<int>::GetCenter();
  iVar2 = FUN_03462250(uStack_34);
  FUN_03461f3c(local_28,*(undefined8 *)(this + 0x10));
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(local_28);
  fVar7 = *(float *)(lVar3 + 0xa0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_28);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_38,(float)(int)((fVar4 - fVar5) + (float)iVar1),
             (float)(int)((fVar6 - fVar7) + (float)iVar2),0.0);
  local_20 = local_30;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}


/* PlantOrchidMage::Initialize() */

void __thiscall PlantOrchidMage::Initialize(PlantOrchidMage *this)

{
  long *plVar1;
  undefined4 uVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  plVar1 = (long *)FUN_0346689c(*(undefined8 *)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  this[0x29] = (PlantOrchidMage)0x0;
  this[0x2a] = (PlantOrchidMage)0x0;
  *(undefined4 *)(this + 0x3c) = 3;
  this[0x40] = (PlantOrchidMage)0x0;
  this[0x42] = (PlantOrchidMage)0x1;
  this[0x41] = (PlantOrchidMage)0x0;
  this[0x43] = (PlantOrchidMage)0x0;
  uVar2 = PVZ_EOT();
  this[0x44] = (PlantOrchidMage)0x0;
  *(undefined4 *)(this + 0x48) = uVar2;
  this[0x28] = (PlantOrchidMage)0x0;
  *(undefined4 *)(this + 0x54) = uVar2;
  this[0x2b] = (PlantOrchidMage)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0x41200000;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantOrchidMage::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  int iVar1;
  PopAnimRig *this;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PopAnimRig *)FUN_0346689c(*(undefined8 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 1) {
    std::string::string(asStack_10,"orchidmage_ball2");
    PopAnimRig::SetLayerVisibility(this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"gravityballs_spin3");
    PopAnimRig::SetLayerVisibility(this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  else if (iVar1 == 2) {
    std::string::string(asStack_10,"orchidmage_ball1");
    PopAnimRig::SetLayerVisibility(this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    uVar2 = PVZ_EOT();
    *(undefined4 *)(param_1 + 0x54) = uVar2;
  }
  else if (iVar1 == 0) {
    std::string::string(asStack_10,"orchidmage_ball3");
    PopAnimRig::SetLayerVisibility(this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"gravityballs_spin2");
    PopAnimRig::SetLayerVisibility(this,asStack_10,true);
    std::string::~string(asStack_10);
    nop();
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::hideGravitationalBall(int) */

void __thiscall PlantOrchidMage::hideGravitationalBall(PlantOrchidMage *this,int param_1)

{
  PopAnimRig *this_00;
  char *__s;
  float fVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)FUN_0346689c(*(undefined8 *)(this + 0x10));
  if (3 < (uint)param_1) goto LAB_03466bd4;
  switch(param_1) {
  case 0:
    std::string::string(asStack_10,"orchidmage_ball1");
    PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    fVar1 = (float)PVZ_T();
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + -1;
    *(float *)(this + 0x54) = fVar1 + *(float *)(this + 0x50);
    goto LAB_03466bd4;
  case 1:
    std::string::string(asStack_10,"orchidmage_ball2");
    PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    __s = "gravityballs_spin3";
    break;
  case 2:
    std::string::string(asStack_10,"orchidmage_ball3");
    PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    __s = "gravityballs_spin2";
    break;
  case 3:
    std::string::string(asStack_10,"orchidmage_ball1");
    PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"orchidmage_ball2");
    PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"orchidmage_ball3");
    PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"gravityballs_spin2");
    PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"gravityballs_spin3");
    PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
    std::string::~string(asStack_10);
    nop();
    fVar1 = (float)PVZ_T();
    *(undefined4 *)(this + 0x3c) = 0;
    *(float *)(this + 0x54) = fVar1 + *(float *)(this + 0x50);
    goto LAB_03466bd4;
  }
  std::string::string(asStack_10,__s);
  PopAnimRig::SetLayerVisibility(this_00,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + -1;
LAB_03466bd4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantOrchidMage::Fire(PlantOrchidMage *param_1,RtWeakPtrBase *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  RtObject *pRVar4;
  OrchidmageProjectile_1 *pOVar5;
  long lVar6;
  Plant *pPVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar1 == '\0') {
    pPVar7 = *(Plant **)(param_1 + 0x10);
    iVar2 = FUN_03461f60(pPVar7);
    if ((iVar2 == 5) && (*(int *)(param_1 + 0x3c) == 3)) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
      std::string::string(asStack_10,"Orchidmage_2_ProjectileDefault");
      pRVar4 = (RtObject *)Plant::SpecialFire(pPVar7,aRStack_18,param_3,asStack_10);
      std::string::~string(asStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      hideGravitationalBall(param_1,3);
      pOVar5 = Sexy::RtObject::Cast<OrchidmageProjectile_1>(pRVar4);
      lVar6 = *(long *)(param_1 + 0x10);
      pOVar5[0x1c0] = (OrchidmageProjectile_1)0x1;
      uVar3 = FUN_03461f38(*(undefined4 *)(lVar6 + 0x50));
      *(undefined4 *)(pOVar5 + 0x1b0) = uVar3;
      FUN_03461f2c(0x3f933333,pOVar5 + 0xc0);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
      std::string::string(asStack_10,"Orchidmage_1_ProjectileDefault");
      pRVar4 = (RtObject *)Plant::SpecialFire(pPVar7,aRStack_18,param_3,asStack_10);
      std::string::~string(asStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      pOVar5 = Sexy::RtObject::Cast<OrchidmageProjectile_1>(pRVar4);
      uVar3 = FUN_03461f38(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x50));
      *(undefined4 *)(pOVar5 + 0x1b0) = uVar3;
      FUN_03461f2c(0x3f99999a,pOVar5 + 0xc0);
    }
  }
  else {
    pOVar5 = (OrchidmageProjectile_1 *)0x0;
    param_1[0x29] = (PlantOrchidMage)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pOVar5);
}


/* PlantOrchidMage::AutoFire() */

void __thiscall PlantOrchidMage::AutoFire(PlantOrchidMage *this)

{
  long lVar1;
  float fVar2;
  
  FUN_03466ff8(*(undefined8 *)(this + 0x10));
  lVar1 = *(long *)(this + 0x10);
  fVar2 = (float)PVZ_T();
  *(float *)(lVar1 + 300) = fVar2 + 1.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantOrchidMage::onAnimStoppedCallback(PlantOrchidMage *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig_WizardThorns *pPVar4;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PopAnimRig *)FUN_0346689c(*(undefined8 *)(this + 0x10));
  bVar1 = std::operator==(param_1,"attack_on");
  if (bVar1) {
    iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
    if (iVar2 == 4) {
      std::string::string(asStack_58,"attack_idle");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
      iVar2 = PopAnimRig::PlayAndContinue(pPVar3,asStack_58,0,aDStack_50);
      std::string::~string(asStack_58);
      nop();
      if (iVar2 == -1) goto LAB_03467794;
      iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
    }
    if (iVar2 == 0xd) {
      pPVar4 = (PlantAnimRig_WizardThorns *)FUN_0346689c();
      std::string::string(asStack_58,"attack");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_68,
                 asStack_60);
      PlantAnimRig_WizardThorns::PlayTapAnimation
                (pPVar4,asStack_58,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
  }
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    (**(code **)(*(long *)pPVar3 + 0x88))(pPVar3);
  }
  bVar1 = std::operator==(param_1,"passive");
  if (bVar1) {
    (**(code **)(*(long *)pPVar3 + 0x118))(pPVar3);
  }
LAB_03467794:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::setState(unsigned int) */

void __thiscall PlantOrchidMage::setState(PlantOrchidMage *this,uint param_1)

{
  long *plVar1;
  PlantAnimRig_WizardThorns *pPVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  if (param_1 == 4) {
    plVar1 = (long *)FUN_0346689c();
    (**(code **)(*plVar1 + 0x118))();
    this[0x43] = (PlantOrchidMage)0x0;
    this[0x42] = (PlantOrchidMage)0x1;
  }
  else if (param_1 == 0xd) {
    this[0x40] = (PlantOrchidMage)0x0;
    if (this[0x43] == (PlantOrchidMage)0x0) {
      pPVar2 = (PlantAnimRig_WizardThorns *)FUN_0346689c();
      std::string::string(asStack_58,"attack_on");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar2,asStack_58,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
      this[0x43] = (PlantOrchidMage)0x1;
    }
    if ((this[0x42] != (PlantOrchidMage)0x0) && (this[0x29] == (PlantOrchidMage)0x0)) {
      pPVar2 = (PlantAnimRig_WizardThorns *)FUN_0346689c(*(undefined8 *)(this + 0x10));
      std::string::string(asStack_58,"attack");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar2,asStack_58,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
      this[0x42] = (PlantOrchidMage)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::FindTargetAndFire(PlantWeapon) */

void PlantOrchidMage::FindTargetAndFire(PlantOrchidMage *param_1)

{
  char cVar1;
  undefined8 uVar2;
  PlantAnimRig_WizardThorns *pPVar3;
  long lVar4;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    if (param_1[0x43] == (PlantOrchidMage)0x0) {
      FUN_03466ff8(*(undefined8 *)(param_1 + 0x10));
      pPVar3 = (PlantAnimRig_WizardThorns *)FUN_0346689c(*(undefined8 *)(param_1 + 0x10));
      std::string::string(asStack_58,"attack_on");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar3,asStack_58,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
      param_1[0x43] = (PlantOrchidMage)0x1;
    }
    Sexy::FastCurve::SetOutRange((FastCurve *)(*(long *)(param_1 + 0x10) + 0xbc),1.0,1.0);
    uVar2 = 0;
  }
  else if (param_1[0x2b] == (PlantOrchidMage)0x0) {
    setState(param_1,0xd);
    uVar2 = 1;
  }
  else {
    FUN_03466ff8(*(undefined8 *)(param_1 + 0x10));
    pPVar3 = (PlantAnimRig_WizardThorns *)FUN_0346689c(*(undefined8 *)(param_1 + 0x10));
    std::string::string(asStack_58,"attack_on");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar3,asStack_58,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    param_1[0x2b] = (PlantOrchidMage)0x0;
    lVar4 = *(long *)(param_1 + 0x10);
    param_1[0x43] = (PlantOrchidMage)0x1;
    param_1[0x42] = (PlantOrchidMage)0x1;
    *(undefined4 *)(lVar4 + 200) = 4;
    Sexy::FastCurve::SetOutRange((FastCurve *)(lVar4 + 0xbc),1.5,1.5);
    uVar2 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::appearGravitationalBall(int) */

void PlantOrchidMage::appearGravitationalBall(int param_1)

{
  Effect_PassiveBall *pEVar1;
  int in_w1;
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = Board::AddEffect<Effect_PassiveBall>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)local_80);
  std::string::string((string *)local_60,"onStandaloneEffectFinishedCallback");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,(RtId *)local_70
             ,(string *)local_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)local_60);
  nop();
  Sexy::RtId::~RtId((RtId *)local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_80);
  if (in_w1 == 1) {
    std::string::string((string *)local_60,"orchidmage_ball2");
    local_70[0] = findLayerLocation((PlantOrchidMage *)param_1,(string *)local_60);
    Effect_PassiveBall::startBallShowUp(pEVar1);
    std::string::~string((string *)local_60);
    nop();
  }
  else if (in_w1 == 2) {
    std::string::string((string *)local_70,"orchidmage_ball3");
    local_60[0] = findLayerLocation((PlantOrchidMage *)param_1,(RtId *)local_70);
    Effect_PassiveBall::startBallShowUp(pEVar1);
    std::string::~string((string *)local_70);
    nop();
  }
  else if (in_w1 == 0) {
    std::string::string((string *)local_60,"orchidmage_ball1");
    local_80[0] = findLayerLocation((PlantOrchidMage *)param_1,(string *)local_60);
    Effect_PassiveBall::startBallShowUp(pEVar1);
    std::string::~string((string *)local_60);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantOrchidMage::queueShot(float, Sexy::Point const&) */

void __thiscall PlantOrchidMage::queueShot(PlantOrchidMage *this,float param_1,Point *param_2)

{
  undefined1 uVar1;
  OrchidMageLauncherSubSystem *this_00;
  code *pcVar2;
  
  this_00 = Board::GetGameSubSystem<OrchidMageLauncherSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar2 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  if (pcVar2 == Plant::IsInPlantFoodState) {
    uVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    uVar1 = (*pcVar2)();
  }
  OrchidMageLauncherSubSystem::QueueShot(this_00,this,param_1,param_2,(bool)uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::ApplyPlantfood() */

void PlantOrchidMage::ApplyPlantfood(void)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  PlantFramework *in_x0;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  Zombie *this;
  BoardTransforms *pBVar9;
  Zombie *extraout_x0;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float in_s1;
  float fVar14;
  int local_9c;
  Zombie *local_98;
  Point local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70 [4];
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood(in_x0);
  in_x0[0x29] = (PlantFramework)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,2,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_20,0xffffffff,0xffffffff);
  uVar8 = local_50;
  iVar4 = FUN_03461fb0(local_50,local_48);
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    uVar6 = operator|(1,8);
    lVar10 = (long)(int)uVar1 + -1;
    uVar6 = operator|(uVar6,4);
    uVar6 = operator|(uVar6,0x80);
    operator|(uVar6,0x800);
    lVar7 = lVar10;
    lVar12 = (long)(int)uVar1;
    while( true ) {
      lVar11 = lVar7;
      FUN_03461fbc(uVar8,lVar12);
      nop();
      cVar2 = Zombie::MatchesAny();
      uVar8 = local_50;
      if (cVar2 != '\0') {
        local_60 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_50);
        local_38 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_60,lVar12);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_20,(__normal_iterator *)&local_38);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_20);
        uVar8 = local_50;
      }
      local_50 = uVar8;
      if (lVar11 == lVar10 - (ulong)uVar1) break;
      lVar7 = lVar11 + -1;
      lVar12 = lVar11;
    }
  }
  lVar7 = FUN_03466ff8(*(undefined8 *)(in_x0 + 0x10));
  local_9c = 0;
  fVar14 = *(float *)(lVar7 + 0x2c4);
  local_58 = fVar14;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,(vector *)&local_50);
  while ((lVar7 = FUN_03466ff8(*(undefined8 *)(in_x0 + 0x10)), local_9c < *(int *)(lVar7 + 0x2b8) &&
         (cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20),
         cVar2 == '\0'))) {
    iVar4 = FUN_03461fb0(local_20,local_18);
    iVar4 = Sexy::Rand(iVar4);
    FUN_03461fbc(local_20,(long)iVar4);
    nop();
    local_98 = extraout_x0;
    fVar13 = (float)(**(code **)(*(long *)extraout_x0 + 0x3a8))((float)(local_9c + 1) * fVar14);
    local_70[0] = fVar13;
    Sexy::Point::Point(local_90);
    iVar5 = Zombie::getZombieStateSerialization(local_98);
    if ((iVar5 == 1) && (iVar5 = Zombie::getZombieStateSerialization(local_98), iVar5 != 4)) {
      cVar2 = Zombie::IsFlying(local_98);
      if (cVar2 != '\0') goto LAB_0346c560;
      BoardTransforms::BoardSpaceToGrid((BoardTransforms *)0x0,fVar13,in_s1);
    }
    else {
LAB_0346c560:
      pBVar9 = (BoardTransforms *)BoardConstants::GRIDSQUARE_WIDTH();
      BoardTransforms::BoardSpaceToGrid(pBVar9,(float)(int)pBVar9 + fVar13,in_s1);
    }
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
    local_88 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                         (uVar8,uVar6,local_90);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_88,(__normal_iterator *)&local_80);
    if (bVar3) {
      Sexy::Point::Point((Point *)&local_78,-1,-1);
      cVar2 = Sexy::TPoint<int>::operator!=((TPoint<int> *)local_90,(TPoint *)&local_78);
      if (cVar2 != '\0') {
        FUN_0346c068(&local_60,&local_9c,local_90);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,local_90);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_50);
        uVar6 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_50);
        local_80 = std::
                   remove<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Zombie*>
                             (uVar8,uVar6,&local_98);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_78,(__normal_iterator *)&local_80);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_78);
      }
    }
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_80 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_88,(long)iVar4);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_78,(__normal_iterator *)&local_80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,local_78);
  }
  do {
    lVar7 = FUN_03466ff8(*(undefined8 *)(in_x0 + 0x10));
    if ((*(int *)(lVar7 + 0x2b8) <= local_9c) ||
       (cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50),
       cVar2 != '\0')) {
      while ((lVar7 = FUN_03466ff8(*(undefined8 *)(in_x0 + 0x10)),
             local_9c < *(int *)(lVar7 + 0x2b8) &&
             (cVar2 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38),
             cVar2 == '\0'))) {
        iVar4 = FUN_03461fc4(local_38,local_30);
        iVar4 = Sexy::Rand(iVar4);
        uVar8 = FUN_03461fd0(local_38,(long)iVar4);
        FUN_0346c068(&local_60,&local_9c,uVar8);
      }
      while (lVar7 = FUN_03466ff8(*(undefined8 *)(in_x0 + 0x10)), local_9c < *(int *)(lVar7 + 0x2b8)
            ) {
        Sexy::Point::Point((Point *)local_70,-1,-1);
        FUN_0346c068(&local_60,&local_9c,(Point *)local_70);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar4 = FUN_03461fb0(local_50,local_48);
    iVar4 = Sexy::Rand(iVar4);
    FUN_03461fbc(local_20,(long)iVar4);
    nop();
    fVar13 = (float)(**(code **)(*(long *)this + 0x3a8))((float)(local_9c + 1) * fVar14);
    local_70[0] = fVar13;
    Sexy::Point::Point(local_90);
    iVar5 = Zombie::getZombieStateSerialization(this);
    if ((iVar5 == 1) || (iVar5 = Zombie::getZombieStateSerialization(this), iVar5 == 4)) {
LAB_0346c4b8:
      pBVar9 = (BoardTransforms *)BoardConstants::GRIDSQUARE_WIDTH();
      BoardTransforms::BoardSpaceToGrid(pBVar9,(float)(int)pBVar9 + fVar13,in_s1);
    }
    else {
      cVar2 = Zombie::IsFlying(this);
      if (cVar2 != '\0') goto LAB_0346c4b8;
      BoardTransforms::BoardSpaceToGrid((BoardTransforms *)0x0,fVar13,in_s1);
    }
    FUN_0346c068(&local_60,&local_9c,local_90);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
    local_80 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_88,(long)iVar4);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_78,(__normal_iterator *)&local_80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_78);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::triggerPassive() */

void __thiscall PlantOrchidMage::triggerPassive(PlantOrchidMage *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  ulong uVar8;
  string *psVar9;
  BoardEntity **ppBVar10;
  ulong uVar11;
  undefined8 uVar12;
  code *pcVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar11 = 0;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar14 = pfVar5[1];
  *(int *)(this + 0x2c) = (int)*pfVar5;
  *(int *)(this + 0x30) = (int)(fVar14 - 54.0);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(this + 0x34) = (int)((double)iVar3 * 1.4);
  uVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(undefined4 *)(this + 0x38) = uVar4;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2,
             this + 0x2c,0xffffffff,0xffffffff);
  uVar12 = local_38;
  lVar6 = FUN_03461fb0(local_38,local_30);
  if (lVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_03461fbc(uVar12,uVar11);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      cVar1 = RealObject::IsOnTeam(this_00,1);
      if ((cVar1 == '\0') &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) {
        pcVar13 = *(code **)(*(long *)this_00 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
        cVar1 = (*pcVar13)(this_00,aRStack_40,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        if (cVar1 != '\0') {
          psVar9 = (string *)Zombie::GetTypeName(this_00);
          bVar2 = std::operator==(psVar9,"pumpkin_scarecrow_bird");
          if (!bVar2) {
            psVar9 = (string *)Zombie::GetTypeName(this_00);
            bVar2 = std::operator==(psVar9,"pirate_captain_parrot");
            if ((!bVar2) && (iVar3 = Zombie::GetSizeType(this_00), iVar3 != 2)) {
              ppBVar10 = (BoardEntity **)FUN_03461fbc(local_38,uVar11);
              std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,ppBVar10);
            }
          }
        }
      }
      uVar12 = local_38;
      uVar11 = uVar11 + 1;
      uVar8 = FUN_03461fb0(local_38,local_30);
    } while (uVar11 < uVar8);
  }
  lVar6 = FUN_03461fb0(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar6 != 0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::DoSpecial(int) */

void PlantOrchidMage::DoSpecial(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  PlantOrchidMage *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar3;
  long lVar4;
  Zombie *pZVar5;
  ulong uVar6;
  ulong uVar7;
  Plant *pPVar8;
  undefined8 uVar9;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  undefined8 local_30;
  string asStack_20 [24];
  long local_8;
  
  this = (PlantOrchidMage *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = triggerPassive(this);
  if (cVar1 != '\0') {
    uVar7 = 0;
    uVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    pPVar8 = *(Plant **)(this + 0x10);
    *(undefined4 *)(pPVar8 + 0x150) = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_38);
    std::string::string(asStack_20,"Orchidmage_3_ProjectileDefault");
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Plant::SpecialFire(pPVar8,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                            *)&local_38,uVar2,asStack_20);
    std::string::~string(asStack_20);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_58 = *puVar3;
    local_50 = *(float *)(puVar3 + 1);
    puVar3 = (undefined8 *)Projectile::GetVelocity((Projectile *)this_00);
    local_48 = *puVar3;
    local_40 = *(float *)(puVar3 + 1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    EntityFinder::GetEntitiesTouchingRectangle
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_38,2,
               this + 0x2c,0xffffffff,0xffffffff);
    uVar9 = local_38;
    lVar4 = FUN_03461fb0(local_38,local_30);
    if (lVar4 != 0) {
      do {
        puVar3 = (undefined8 *)FUN_03461fbc(uVar9,uVar7);
        pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
        if (((pZVar5 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(pZVar5,1), cVar1 == '\0'))
           && (cVar1 = (**(code **)(*(long *)pZVar5 + 0x328))(pZVar5), cVar1 == '\0')) {
          local_50 = 50.0;
          local_58 = CONCAT44(local_58._4_4_,(float)*(int *)(this + 0x2c));
          (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_58);
          local_40 = (-local_50 / (float)*(int *)(this + 0x34)) * (float)local_48;
          Projectile::SetVelocity((Projectile *)this_00,(SexyVector3 *)&local_48);
        }
        uVar9 = local_38;
        uVar7 = uVar7 + 1;
        uVar6 = FUN_03461fb0(local_38,local_30);
      } while (uVar7 < uVar6);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantOrchidMage::startPassive() */

void __thiscall PlantOrchidMage::startPassive(PlantOrchidMage *this)

{
  char cVar1;
  PopAnimRig *this_00;
  PlantAnimRig_WizardThorns *pPVar2;
  float fVar3;
  float fVar4;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = triggerPassive(this);
  if (((cVar1 != '\0') && (fVar3 = (float)PVZ_T(), *(float *)(this + 0x4c) < fVar3)) &&
     (0 < *(int *)(this + 0x3c))) {
    hideGravitationalBall(this,3 - *(int *)(this + 0x3c));
    if (*(int *)(this + 0x3c) < 0) {
      *(undefined4 *)(this + 0x3c) = 0;
    }
    fVar3 = (float)PVZ_T();
    this_00 = (PopAnimRig *)FUN_0346689c(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_58,"passive");
    fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_58);
    *(float *)(this + 0x4c) = fVar4 + fVar3;
    std::string::~string(asStack_58);
    nop();
    if (this[0x44] == (PlantOrchidMage)0x0) {
      pPVar2 = (PlantAnimRig_WizardThorns *)FUN_0346689c(*(undefined8 *)(this + 0x10));
      std::string::string(asStack_58,"passive");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar2,asStack_58,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
    else {
      (**(code **)(*(long *)this + 0xa8))(this,0);
      this[0x44] = (PlantOrchidMage)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantOrchidMage::UpdateActions() */

void __thiscall PlantOrchidMage::UpdateActions(PlantOrchidMage *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  FUN_0346689c(*(undefined8 *)(this + 0x10));
  startPassive(this);
  lVar5 = *(long *)(this + 0x10);
  iVar2 = FUN_03461f38(*(undefined4 *)(lVar5 + 0x50));
  if (iVar2 == 5) {
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x54) < fVar7) {
      *(float *)(this + 0x54) = *(float *)(this + 0x50) + *(float *)(this + 0x54);
      appearGravitationalBall((int)this);
      lVar5 = *(long *)(this + 0x10);
    }
    else {
      lVar5 = *(long *)(this + 0x10);
    }
  }
  iVar2 = *(int *)(lVar5 + 200);
  if (iVar2 == 0xc) {
    pPVar3 = (PopAnimRig *)FUN_0346689c(lVar5);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar1 == '\0') {
      plVar4 = (long *)FUN_0346689c(*(undefined8 *)(this + 0x10));
      (**(code **)(*plVar4 + 0x118))();
    }
  }
  else if (iVar2 == 0xd) {
    pPVar3 = (PopAnimRig *)FUN_0346689c(lVar5);
    cVar1 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar1 == '\0') {
      setState(this,4);
      return;
    }
  }
  else if ((iVar2 == 4) && (this[0x40] == (PlantOrchidMage)0x0)) {
    lVar5 = FUN_03466ff8(lVar5);
    lVar6 = *(long *)(this + 0x10);
    fVar7 = (float)PVZ_T();
    lVar5 = FUN_03461fa0(*(undefined8 *)(lVar5 + 0x70),0);
    *(float *)(lVar6 + 300) = fVar7 + *(float *)(lVar5 + 0x24);
    this[0x40] = (PlantOrchidMage)0x1;
  }
  return;
}


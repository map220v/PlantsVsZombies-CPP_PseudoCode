// Class: PlantHappyLeek


/* PlantHappyLeek::GetEntityHeight() const */

undefined4 __thiscall PlantHappyLeek::GetEntityHeight(PlantHappyLeek *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(int *)(this + 0x38) == 0xc) {
    uVar1 = 0;
  }
  return uVar1;
}


/* PlantHappyLeek::GetRefundSunAmount() */

undefined1  [16] __thiscall PlantHappyLeek::GetRefundSunAmount(PlantHappyLeek *this)

{
  float fVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if ((*(int *)(this + 0x38) != 0xc) &&
     (fVar1 = (float)Board::GetSunShovelRefundAmount(*(Board **)(gLawnApp + 0x9f0)), fVar1 != 1.0))
  {
    return ZEXT816(0);
  }
  PlantFramework::GetRefundSunAmount((PlantFramework *)this);
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


/* PlantHappyLeek::PlantHappyLeek() */

void __thiscall PlantHappyLeek::PlantHappyLeek(PlantHappyLeek *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067a6fd0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* PlantHappyLeek::StaticNew() */

PlantHappyLeek * PlantHappyLeek::StaticNew(void)

{
  PlantHappyLeek *this;
  
  this = ::operator_new(0x50);
  PlantHappyLeek(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::StaticClassInit() */

void PlantHappyLeek::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHappyLeek");
    (*pcVar2)(plVar1,asStack_10,FUN_03fadf54,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHappyLeek::StaticGetClass() */

long * PlantHappyLeek::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHappyLeek",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHappyLeek::GetClass() const */

long * PlantHappyLeek::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHappyLeek",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHappyLeek::canZombieLaunch(Zombie*) */

char __thiscall PlantHappyLeek::canZombieLaunch(PlantHappyLeek *this,Zombie *param_1)

{
  char cVar1;
  char cVar2;
  
  if ((((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0')) ||
        (cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0')) ||
       ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0' ||
        (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0')))) ||
      ((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0' ||
       ((cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0' ||
        (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 != '\0')))))) ||
     ((cVar1 = RealObject::IsOnTeam(param_1,2), cVar1 == '\0' ||
      ((cVar2 = Zombie::IsControlled(param_1), cVar2 != '\0' ||
       (cVar2 = Zombie::IsBoss(param_1), cVar2 != '\0')))))) {
    cVar1 = '\0';
  }
  return cVar1;
}


/* PlantHappyLeek::~PlantHappyLeek() */

void __thiscall PlantHappyLeek::~PlantHappyLeek(PlantHappyLeek *this)

{
  *(undefined ***)this = &PTR_GetClass_067a6fd0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHappyLeek::~PlantHappyLeek() */

void __thiscall PlantHappyLeek::~PlantHappyLeek(PlantHappyLeek *this)

{
  ~PlantHappyLeek(this);
  AK::FreeHook(this);
  return;
}


/* PlantHappyLeek::Idle() */

void __thiscall PlantHappyLeek::Idle(PlantHappyLeek *this)

{
  long *plVar1;
  
  this[8] = (PlantHappyLeek)0x0;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x44] = (PlantHappyLeek)0x0;
  this[8] = (PlantHappyLeek)0x1;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantHappyLeek::ApplyPlantfood() */

void __thiscall PlantHappyLeek::ApplyPlantfood(PlantHappyLeek *this)

{
  RtObject *this_00;
  PlantAnimRig_HappyLeek *pPVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(this_00);
  FUN_03fad684(pPVar1 + 0x3c0,*(undefined4 *)(this + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::SetState(unsigned int) */

void __thiscall PlantHappyLeek::SetState(PlantHappyLeek *this,uint param_1)

{
  RtObject *this_00;
  PlantAnimRig_HappyLeek *pPVar1;
  long *plVar2;
  size_t __n;
  float fVar3;
  string asStack_10 [8];
  size_t local_8;
  
  *(uint *)(this + 0x38) = param_1;
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  if (param_1 == 0xc) {
    std::string::append(asStack_10,"baby_idle",__n);
    *(undefined4 *)(this + 0x3c) = 0;
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x34) = fVar3 + *(float *)(this + 0x30);
  }
  else if (param_1 == 0xd) {
    std::string::append(asStack_10,"old_idle",__n);
    *(undefined4 *)(this + 0x28) = 0;
  }
  else if (param_1 == 0xb) {
    *(undefined4 *)(this + 0x3c) = 0;
    std::string::append(asStack_10,"young_idle",__n);
  }
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(this_00);
  PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar1);
  plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar2 + 0x118))();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHappyLeek::CancelPlantfood() */

void __thiscall PlantHappyLeek::CancelPlantfood(PlantHappyLeek *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  SetState(this,0xd);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::Initialize() */

void __thiscall PlantHappyLeek::Initialize(PlantHappyLeek *this)

{
  int iVar1;
  RtObject *this_00;
  PlantHappyLeekProps *pPVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  FUN_03fad658(aRStack_10,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar2 = Sexy::RtObject::Cast<PlantHappyLeekProps>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined4 *)(this + 0x28) = 0;
  fVar5 = *(float *)(pPVar2 + 0x2b8);
  *(undefined4 *)(this + 0x2c) = 0;
  *(float *)(this + 0x30) = fVar5;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x38) = 0xb;
  this[0x44] = (PlantHappyLeek)0x0;
  *(undefined4 *)(this + 0x34) = uVar3;
  *(undefined4 *)(this + 0x48) = uVar3;
  iVar1 = FUN_03fad67c(*(undefined8 *)(this + 0x10));
  if (iVar1 == 2) {
    fVar4 = *(float *)(pPVar2 + 700);
    *(undefined4 *)(this + 0x2c) = 1;
    *(float *)(this + 0x30) = fVar5 - fVar4;
  }
  else if ((1 < iVar1) && (iVar1 < 6)) {
    fVar4 = *(float *)(pPVar2 + 0x2c4);
    *(undefined4 *)(this + 0x2c) = 2;
    *(float *)(this + 0x30) = fVar5 - fVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::moveZombieByRows(Zombie*, int) */

void __thiscall PlantHappyLeek::moveZombieByRows(PlantHappyLeek *this,Zombie *param_1,int param_2)

{
  int iVar1;
  RtObject *this_00;
  PlantHappyLeekProps *pPVar2;
  ZombieLaneChangingSubsystem *pZVar3;
  ZombieLaneChangingSubsystem *pZVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03fad658(aRStack_10,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar2 = Sexy::RtObject::Cast<PlantHappyLeekProps>(this_00);
                    /* WARNING: Load size is inaccurate */
  pZVar4._0_4_ = *(ZombieLaneChangingSubsystem **)(pPVar2 + 0x2d4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pZVar3 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar1 = SharkMinion::getRow((SharkMinion *)param_1);
  ZombieLaneChangingSubsystem::ForceLaneChange(pZVar4._0_4_,0,pZVar3,param_1,iVar1 + param_2,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::ProduceSun(PlantAction const&, PowerContext) */

void __thiscall PlantHappyLeek::ProduceSun(PlantHappyLeek *this,long param_1,undefined8 param_3)

{
  RtObject *pRVar1;
  PlantHappyLeekProps *pPVar2;
  PowerPropsSunProducer *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03fad658(aRStack_28,*(undefined8 *)(this + 0x10));
  pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pPVar2 = Sexy::RtObject::Cast<PlantHappyLeekProps>(pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  PowerSet::Find(aRStack_28,pPVar2 + 0x58,1,param_3);
  pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  pPVar3 = Sexy::RtObject::Cast<PowerPropsSunProducer>(pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
                    /* WARNING: Load size is inaccurate */
  SunProducer::SunProducer
            (*(SunProducer **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),aRStack_28,
             *(undefined8 *)(this + 0x10),pPVar3);
  SunProducer::Execute((SunProducer *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHappyLeek::ProduceSun(PlantAction const&) */

void __thiscall PlantHappyLeek::ProduceSun(PlantHappyLeek *this,PlantAction *param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x180))();
  ProduceSun(this,param_1,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::ShovelKill() */

void __thiscall PlantHappyLeek::ShovelKill(PlantHappyLeek *this)

{
  int iVar1;
  RtObject *pRVar2;
  PlantAnimRig_HappyLeek *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  float fVar4;
  string asStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x38) == 0xc) ||
     (fVar4 = (float)Board::GetSunShovelRefundAmount(*(Board **)(gLawnApp + 0x9f0)), fVar4 == 1.0))
  {
    Plant::KillPlant(*(Plant **)(this + 0x10),0,0,0x40000000000);
  }
  FUN_03fad658(aRStack_58,*(undefined8 *)(this + 0x10));
  pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::RtObject::Cast<PlantHappyLeekProps>(pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  __n = aRStack_58;
  std::string::string(asStack_78,"jc_young_sg01");
  nop();
  if (*(int *)(this + 0x38) == 0xd) {
    iVar1 = *(int *)(this + 0x28);
    if (iVar1 == 1) {
      std::string::append(asStack_78,"jc_old_sg02",(size_t)__n);
    }
    else if (iVar1 == 2) {
      std::string::append(asStack_78,"jc_old_sg03",(size_t)__n);
    }
    else if (iVar1 == 0) {
      std::string::append(asStack_78,"jc_old_sg01",(size_t)__n);
    }
  }
  pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar2);
  FUN_05475d88(asStack_68,asStack_78);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             aRStack_58);
  PlantAnimRig_WizardThorns::PlayTapAnimation
            ((PlantAnimRig_WizardThorns *)pPVar3,asStack_68,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  std::string::~string(asStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantHappyLeek::onAnimStoppedCallback(PlantHappyLeek *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  RtObject *pRVar4;
  PlantHappyLeekProps *pPVar5;
  UIEasyButtonWidget *this_00;
  long *plVar6;
  PlantAnimRig_HappyLeek *pPVar7;
  PlantAction *pPVar8;
  char *__s;
  RtMixedPtr aRStack_e0 [8];
  string asStack_d8 [8];
  RtId aRStack_d0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_c8 [72];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03fad658(aRStack_80,*(undefined8 *)(this + 0x10));
  pRVar4 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  pPVar5 = Sexy::RtObject::Cast<PlantHappyLeekProps>(pRVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  this[0x44] = (PlantHappyLeek)0x0;
  bVar1 = std::operator==(param_1,"young_sun");
  if (bVar1) {
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    if ((float)*(int *)(this + 0x3c) < *(float *)(pPVar5 + 0x2c8)) {
LAB_03faf6c8:
      plVar6 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar6 + 0x118))();
      goto LAB_03faf6d8;
    }
    pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar7 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar4);
    __s = "young_bianlao";
    goto LAB_03faf738;
  }
  bVar1 = std::operator==(param_1,"young_bianlao");
  if (bVar1) {
    SetState(this,0xd);
    goto LAB_03faf6d8;
  }
  bVar1 = std::operator==(param_1,"baby_young");
  if (bVar1) {
    SetState(this,0xb);
    goto LAB_03faf6d8;
  }
  bVar1 = std::operator==(param_1,"jc_young_sg01");
  if ((((bVar1) || (bVar1 = std::operator==(param_1,"jc_old_sg01"), bVar1)) ||
      (bVar1 = std::operator==(param_1,"jc_old_sg02"), bVar1)) ||
     (bVar1 = std::operator==(param_1,"jc_old_sg03"), bVar1)) {
    uVar3 = 2;
    if (*(int *)(this + 0x38) == 0xd) {
      if (*(int *)(this + 0x28) == 0) {
        uVar3 = 10;
      }
      else {
        uVar3 = 3;
        if (*(int *)(this + 0x28) != 1) {
          uVar3 = 2;
        }
      }
    }
    pPVar8 = (PlantAction *)FUN_03fad698(*(undefined8 *)(pPVar5 + 0x70),0);
    PlantAction::PlantAction((PlantAction *)aRStack_80,pPVar8);
    ProduceSun(this,aRStack_80,uVar3);
    SetState(this,0xc);
    PlantAction::~PlantAction((PlantAction *)aRStack_80);
    goto LAB_03faf6d8;
  }
  bVar1 = std::operator==(param_1,"old_kc_ss02");
  if (bVar1) {
    SetState(this,0xc);
    goto LAB_03faf6d8;
  }
  bVar1 = std::operator==(param_1,"baby_plantfood");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"young_plantfood"), bVar1)) {
    pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar7 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar4);
    __s = "old_sun_plantfood";
LAB_03faf738:
    std::string::string(asStack_d8,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_e0);
    std::string::string((string *)aRStack_80,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_c8,aRStack_d0,
               aRStack_80);
    PlantAnimRig_WizardThorns::PlayTapAnimation
              ((PlantAnimRig_WizardThorns *)pPVar7,asStack_d8,aRStack_c8);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_c8);
    std::string::~string((string *)aRStack_80);
    nop();
    Sexy::RtId::~RtId(aRStack_d0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0);
    std::string::~string(asStack_d8);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"old_sun_plantfood");
    if (bVar1) {
      cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar2 != '\0') {
        pRVar4 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar7 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar4);
        __s = "old_plantfood_zb";
        goto LAB_03faf738;
      }
    }
    else {
      bVar1 = std::operator==(param_1,"old_plantfood_zb");
      if (!bVar1) {
        this_00 = *(UIEasyButtonWidget **)(this + 0x10);
        goto LAB_03faf6c8;
      }
    }
    (**(code **)(*(long *)this + 0x228))(this);
  }
LAB_03faf6d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::AutoFire() */

void __thiscall PlantHappyLeek::AutoFire(PlantHappyLeek *this)

{
  RtObject *this_00;
  PlantAnimRig_HappyLeek *pPVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x38) - 0xbU < 2) {
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(this_00);
    std::string::string(asStack_68,"young_bianlao");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_WizardThorns::PlayTapAnimation
              ((PlantAnimRig_WizardThorns *)pPVar1,asStack_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::hasValidTarget() */

void __thiscall PlantHappyLeek::hasValidTarget(PlantHappyLeek *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Insets::Insets(aIStack_30,iVar3,iVar4,2,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    cVar2 = RealObject::IsOnTeam();
    if ((((cVar2 == '\0') && (cVar2 = FUN_03faeeb8(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0'))
        && (iVar3 = Zombie::GetInvisibleState(this_00), iVar3 != 2)) &&
       (((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
         (cVar2 = Zombie::IsBoss(this_00), cVar2 == '\0')) &&
        ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')))))) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::UpdateActions() */

void __thiscall PlantHappyLeek::UpdateActions(PlantHappyLeek *this)

{
  char cVar1;
  int iVar2;
  RtObject *pRVar3;
  PlantHappyLeekProps *pPVar4;
  PlantAction *pPVar5;
  PlantAnimRig_HappyLeek *pPVar6;
  code *pcVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  RtMixedPtr aRStack_e0 [8];
  RtId aRStack_d8 [8];
  string asStack_d0 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_c8 [72];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [120];
  long local_8;
  
  pcVar7 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  local_8 = ___stack_chk_guard;
  if (pcVar7 == Plant::IsInPlantFoodState) {
    cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    cVar1 = (*pcVar7)();
  }
  if (cVar1 == '\0') {
    FUN_03fad658(aRStack_80,*(undefined8 *)(this + 0x10));
    pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
    pPVar4 = Sexy::RtObject::Cast<PlantHappyLeekProps>(pRVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    fVar9 = (float)PVZ_T();
    iVar2 = *(int *)(this + 0x38);
    if (iVar2 == 0xc) {
      fVar11 = *(float *)(this + 0x34);
      fVar9 = (float)PVZ_T();
      if (fVar11 <= fVar9) {
        pRVar3 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar3);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_d8);
        std::string::string((string *)aRStack_80,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_c8,
                   (RtId *)asStack_d0,aRStack_80);
        PlantAnimRig_HappyLeek::PlayGrow(pPVar6,3,aRStack_c8);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_c8);
        std::string::~string((string *)aRStack_80);
        nop();
        Sexy::RtId::~RtId((RtId *)asStack_d0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8)
        ;
        uVar10 = PVZ_EOT();
        *(undefined4 *)(this + 0x34) = uVar10;
      }
    }
    else if (iVar2 == 0xd) {
      cVar1 = hasValidTarget(this);
      if (cVar1 != '\0') {
        if (this[0x44] != (PlantHappyLeek)0x0) goto LAB_03fafee0;
        pPVar5 = (PlantAction *)FUN_03fad698(*(undefined8 *)(pPVar4 + 0x70),1);
        PlantAction::PlantAction((PlantAction *)aRStack_80,pPVar5);
        this[0x44] = (PlantHappyLeek)0x1;
        pRVar3 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar3);
        if (*(int *)(this + 0x2c) < 1) {
          iVar2 = *(int *)(this + 0x28);
          *(int *)(this + 0x28) = iVar2 + 1;
        }
        else {
          iVar2 = -1;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
        }
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_e0);
        std::string::string(asStack_d0,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_c8,
                   aRStack_d8,asStack_d0);
        PlantAnimRig_HappyLeek::PlayTapAttack(pPVar6,iVar2,aRStack_c8);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_c8);
        std::string::~string(asStack_d0);
        nop();
        Sexy::RtId::~RtId(aRStack_d8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0)
        ;
        pRVar3 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar3);
        FUN_03fad684(pPVar6 + 0x3c0,*(undefined4 *)(this + 0x28));
        if (*(int *)(this + 0x28) == 1) {
          fVar11 = (float)PVZ_T();
          *(float *)(this + 0x48) = fVar11 + *(float *)(pPVar4 + 0x2cc);
        }
        PlantAction::~PlantAction((PlantAction *)aRStack_80);
      }
      lVar8 = *(long *)(this + 0x10);
      iVar2 = FUN_03fad67c(lVar8);
      if ((iVar2 == 5) && (this[0x44] == (PlantHappyLeek)0x0)) {
        if (*(float *)(lVar8 + 300) < fVar9) {
          cVar1 = SunProducer::CanProduceSun();
          if (cVar1 != '\0') {
            pRVar3 = (RtObject *)
                     UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
            pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar3);
            ToolPacketData::GetProps();
            Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_d8);
            std::string::string((string *)aRStack_80,"onAnimStoppedCallback");
            RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_c8,
                       (RtId *)asStack_d0,aRStack_80);
            PlantAnimRig_HappyLeek::PlayTapProduceSun(pPVar6,aRStack_c8);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate(aRStack_c8);
            std::string::~string((string *)aRStack_80);
            nop();
            Sexy::RtId::~RtId((RtId *)asStack_d0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
          }
          Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
          this[0x44] = (PlantHappyLeek)0x1;
        }
        if (((0 < *(int *)(this + 0x28)) &&
            (fVar11 = *(float *)(this + 0x48), fVar9 = (float)PVZ_T(), fVar11 <= fVar9)) &&
           (this[0x44] == (PlantHappyLeek)0x0)) {
          pRVar3 = (RtObject *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar3);
          iVar2 = *(int *)(this + 0x28);
          *(int *)(this + 0x28) = iVar2 + -1;
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_d8);
          std::string::string((string *)aRStack_80,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_c8,
                     (RtId *)asStack_d0,aRStack_80);
          PlantAnimRig_HappyLeek::PlayGrow(pPVar6,iVar2,aRStack_c8);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_c8);
          std::string::~string((string *)aRStack_80);
          nop();
          Sexy::RtId::~RtId((RtId *)asStack_d0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
          pRVar3 = (RtObject *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar3);
          FUN_03fad684(pPVar6 + 0x3c0,*(undefined4 *)(this + 0x28));
          fVar9 = *(float *)(pPVar4 + 0x2cc);
          this[0x44] = (PlantHappyLeek)0x1;
          *(float *)(this + 0x48) = *(float *)(this + 0x48) + fVar9;
        }
      }
    }
    else if (((iVar2 == 0xb) && ((float)*(int *)(this + 0x3c) < *(float *)(pPVar4 + 0x2c8))) &&
            (*(float *)(*(long *)(this + 0x10) + 300) < fVar9)) {
      cVar1 = SunProducer::CanProduceSun();
      if (cVar1 != '\0') {
        pRVar3 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar6 = Sexy::RtObject::Cast<PlantAnimRig_HappyLeek>(pRVar3);
        std::string::string((string *)aRStack_d8,"young_sun");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_e0);
        std::string::string((string *)aRStack_80,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_c8,
                   (RtId *)asStack_d0,aRStack_80);
        PlantAnimRig_WizardThorns::PlayTapAnimation
                  ((PlantAnimRig_WizardThorns *)pPVar6,(string *)aRStack_d8,aRStack_c8);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_c8);
        std::string::~string((string *)aRStack_80);
        nop();
        Sexy::RtId::~RtId((RtId *)asStack_d0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_e0)
        ;
        std::string::~string((string *)aRStack_d8);
        nop();
        *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
      }
      Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
    }
  }
LAB_03fafee0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHappyLeek::tryAttackZombies() */

void __thiscall PlantHappyLeek::tryAttackZombies(PlantHappyLeek *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  float fVar5;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Insets::Insets(aIStack_30,iVar3,iVar4,4,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    cVar2 = RealObject::IsOnTeam();
    if ((((cVar2 == '\0') && (cVar2 = FUN_03faeeb8(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0'))
        && (iVar3 = Zombie::GetInvisibleState(this_00), iVar3 != 2)) &&
       (((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
        (cVar2 = canZombieLaunch(this,this_00), cVar2 != '\0')))) {
      fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      iVar3 = -1;
      if (fVar5 <= 0.5) {
        iVar3 = 1;
      }
      iVar4 = SharkMinion::getRow((SharkMinion *)this_00);
      cVar2 = ZombieLaneChangingSubsystem::CanZombieMoveTo(this_00,iVar4 + iVar3);
      if (cVar2 == '\0') {
        iVar4 = SharkMinion::getRow((SharkMinion *)this_00);
        cVar2 = ZombieLaneChangingSubsystem::CanZombieMoveTo(this_00,iVar4 - iVar3);
        if (cVar2 != '\0') {
          moveZombieByRows(this,this_00,-iVar3);
        }
      }
      else {
        moveZombieByRows(this,this_00,iVar3);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
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
/* PlantHappyLeek::OnAnimCommand(std::string const&, std::string const&) */

void PlantHappyLeek::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  HappyLeek_badsmelleffect *this;
  ResourceInfo *pRVar6;
  RtObject *this_00;
  PlantHappyLeekProps *pPVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar8;
  float fVar9;
  RtWeakPtr aRStack_48 [8];
  Insets aIStack_40 [16];
  string asStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action2");
  if (bVar1) {
    tryAttackZombies((PlantHappyLeek *)param_1);
    cVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar2 != '\0') {
      this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(param_1 + 0x10);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_01);
      fVar8 = *pfVar5;
      fVar9 = pfVar5[1];
      iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this_01);
      iVar4 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
      Sexy::Insets::Insets(aIStack_40,iVar3,iVar4,4,1);
      this = Board::AddEffect<HappyLeek_badsmelleffect>(*(Board **)(gLawnApp + 0x9f0));
      std::string::string(asStack_20,"POPANIM_EFFECTS_HAPPYLEEK_EFFECT");
      GetPAMByName(asStack_20);
      std::string::~string(asStack_20);
      nop();
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
      Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar6,(RtClass *)0x0);
      Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_20,fVar8 + 120.0,fVar9 - 20.0,0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)asStack_20,-1);
      FUN_03fad754(this + 0x1c);
      FUN_03fad658(asStack_20,*(undefined8 *)(param_1 + 0x10));
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      pPVar7 = Sexy::RtObject::Cast<PlantHappyLeekProps>(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
      std::string::string(asStack_30,"ks_plantfood01");
      AnimationSequence::AddSingleAnimation(asStack_20,asStack_30,0);
      std::string::~string(asStack_30);
      nop();
      std::string::string(asStack_30,"ks_plantfood");
      AnimationSequence::AddLoopingAnimation
                (*(undefined4 *)(pPVar7 + 0x2d0),asStack_20,asStack_30,0);
      std::string::~string(asStack_30);
      nop();
      std::string::string(asStack_30,"ks_plantfood02");
      AnimationSequence::AddSingleAnimation(asStack_20,asStack_30,0);
      std::string::~string(asStack_30);
      nop();
      Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)asStack_20);
      Sexy::Insets::Insets((Insets *)asStack_30,aIStack_40);
      Lightningeffect::SetRect((Lightningeffect *)this,asStack_30);
      AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


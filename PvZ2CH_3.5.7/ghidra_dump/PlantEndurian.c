// Class: PlantEndurian


/* PlantEndurian::CanBeWatered() */

byte __thiscall PlantEndurian::CanBeWatered(PlantEndurian *this)

{
  char cVar1;
  byte bVar2;
  Plant *this_00;
  
  this_00 = *(Plant **)(this + 0x10);
  cVar1 = FUN_040e4944(*(undefined4 *)(this_00 + 0x1d0));
  if (((cVar1 == '\0') && (*(int *)(this_00 + 200) != 3)) &&
     (cVar1 = Plant::IsSuspended(this_00), cVar1 == '\0')) {
    bVar2 = (**(code **)(*(long *)this + 0x180))(this);
    return bVar2 ^ 1;
  }
  return 0;
}


/* PlantEndurian::PlantEndurian() */

void __thiscall PlantEndurian::PlantEndurian(PlantEndurian *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067ddec0;
  return;
}


/* PlantEndurian::StaticNew() */

PlantEndurian * PlantEndurian::StaticNew(void)

{
  PlantEndurian *this;
  
  this = ::operator_new(0x38);
  PlantEndurian(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEndurian::StaticClassInit() */

void PlantEndurian::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantEndurian");
    (*pcVar2)(plVar1,asStack_10,FUN_040e4ce8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEndurian::StaticGetClass() */

long * PlantEndurian::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantEndurian",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEndurian::GetClass() const */

long * PlantEndurian::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantEndurian",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEndurian::~PlantEndurian() */

void __thiscall PlantEndurian::~PlantEndurian(PlantEndurian *this)

{
  *(undefined ***)this = &PTR_GetClass_067ddec0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantEndurian::~PlantEndurian() */

void __thiscall PlantEndurian::~PlantEndurian(PlantEndurian *this)

{
  ~PlantEndurian(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEndurian::ShowGasEffect(bool) */

void __thiscall PlantEndurian::ShowGasEffect(PlantEndurian *this,bool param_1)

{
  char cVar1;
  string *psVar2;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  UIWidget *this_02;
  PopAnimRig *this_03;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_10,"endurian_gas");
  cVar1 = GameObjectDictionary::Contains(psVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_10,"endurian_gas");
    this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    this_02 = (UIWidget *)AttachedEffect::GetEffect(this_01);
    this_03 = (PopAnimRig *)UIWidget::GetAtlasImage(this_02);
    PopAnimRig::SetDisabled(this_03,!param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEndurian::NotifySetHidden(bool, bool) */

void PlantEndurian::NotifySetHidden(bool param_1,bool param_2)

{
  ShowGasEffect((PlantEndurian *)(ulong)param_1,!param_2);
  return;
}


/* PlantEndurian::onApplyCondition(PlantConditions) */

void __thiscall PlantEndurian::onApplyCondition(PlantEndurian *this,int param_2)

{
  if (param_2 != 6) {
    return;
  }
  ShowGasEffect(this,false);
  return;
}


/* PlantEndurian::onEndCondition(PlantConditions) */

void __thiscall PlantEndurian::onEndCondition(PlantEndurian *this,int param_2)

{
  if (param_2 != 6) {
    return;
  }
  ShowGasEffect(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEndurian::CreateGasEffect() */

void __thiscall PlantEndurian::CreateGasEffect(PlantEndurian *this)

{
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  ResourceInfo *pRVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_18,"endurian_gas");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"POPANIM_EFFECTS_ENDURIAN_EFFECT");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_18,"attack");
  AttachedEffect::PlayAnimLooped(this_01,asStack_18,2);
  std::string::~string(asStack_18);
  nop();
  uVar2 = *(undefined8 *)(this + 0x10);
  pcVar3 = *(code **)(*(long *)this_01 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
  (*pcVar3)(this_01,uVar2,asStack_18,0xffffffff);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEndurian::GetFullSheldHealth() */

undefined4 __thiscall PlantEndurian::GetFullSheldHealth(PlantEndurian *this)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_040e6018(*(undefined8 *)(this + 0x10));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    return *(undefined4 *)(lVar2 + 0x2b8);
  }
  return *(undefined4 *)(lVar2 + 700);
}


/* PlantEndurian::CanApplyPlantfood() */

bool __thiscall PlantEndurian::CanApplyPlantfood(PlantEndurian *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x2c);
  fVar1 = (float)GetFullSheldHealth(this);
  return fVar2 != fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEndurian::onKilled(bool) */

void PlantEndurian::onKilled(bool param_1)

{
  EndurianGasSubsystem *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::GetGameSubSystem<EndurianGasSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  EndurianGasSubsystem::Unregister(this,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEndurian::setState(unsigned int) */

void __thiscall PlantEndurian::setState(PlantEndurian *this,uint param_1)

{
  UIEasyButtonWidget *this_00;
  PlantAnimRig_Endurian *extraout_x0;
  PlantAnimRig_Endurian *extraout_x0_00;
  PlantAnimRig_Endurian *extraout_x0_01;
  undefined4 uVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  if (param_1 == 0xb) {
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Endurian::LoopAttack
              (extraout_x0_01,
               (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
  }
  else {
    if (param_1 != 0xc) {
      if (param_1 == 10) {
        UIEasyButtonWidget::GetImageNormal(this_00);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        PlantAnimRig_Endurian::StartAttack(extraout_x0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        uVar1 = PVZ_T();
        *(undefined4 *)(this + 0x28) = uVar1;
      }
      goto LAB_040e6a84;
    }
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Endurian::StopAttacking
              (extraout_x0_00,
               (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_040e6a84:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEndurian::UpdateActions() */

void __thiscall PlantEndurian::UpdateActions(PlantEndurian *this)

{
  char cVar1;
  Plant *this_00;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_00 = *(Plant **)(this + 0x10);
    iVar3 = *(int *)(this_00 + 200);
    if (iVar3 == 4) goto LAB_040e6db0;
LAB_040e6ccc:
    if (iVar3 == 0xb) {
      if (*(float *)(this + 0x2c) <= 0.0) {
        uVar5 = 0;
        iVar3 = 0;
      }
      else {
        cVar1 = Plant::GetAvatarEnable(this_00);
        if (cVar1 == '\0') {
          uVar5 = 1;
          this_00 = *(Plant **)(this + 0x10);
          iVar3 = 1;
        }
        else {
          uVar5 = 2;
          this_00 = *(Plant **)(this + 0x10);
          iVar3 = 2;
        }
      }
      fVar8 = *(float *)(this + 0x28);
      FUN_040e49c8(aRStack_10,this_00);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar2 = FUN_040e4a08(*(undefined8 *)(lVar2 + 0x70),uVar5);
      fVar6 = *(float *)(lVar2 + 0x28);
      fVar7 = (float)PVZ_T();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (fVar8 + fVar6 <= fVar7) {
        if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
          local_18 = PlantFramework::GetDamageFlags();
        }
        else {
          local_18 = (**(code **)(*(long *)this + 0x198))(this,iVar3);
        }
        if (iVar3 - 1U < 2) {
          operator|=(&local_18,0x2000);
        }
        FUN_040e49c8(aRStack_10,*(undefined8 *)(this + 0x10));
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        lVar2 = FUN_040e4a08(*(undefined8 *)(lVar2 + 0x70),uVar5);
        iVar4 = *(int *)(lVar2 + 0x2c);
        fVar6 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Plant::DoRowAreaDamage
                  ((Plant *)(fVar6 * (float)iVar4),*(undefined8 *)(this + 0x10),local_18);
        FUN_040e49c8(aRStack_10,*(undefined8 *)(this + 0x10));
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        lVar2 = FUN_040e4a08(*(undefined8 *)(lVar2 + 0x70),uVar5);
        *(float *)(this + 0x28) = *(float *)(this + 0x28) + *(float *)(lVar2 + 0x28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      PlantFramework::FindTargetZombie(aRStack_10,this,iVar3);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      iVar3 = 0xb;
      if (cVar1 == '\0') {
        setState(this,0xc);
      }
      do {
        this_00 = *(Plant **)(this + 0x10);
        iVar4 = iVar3;
        iVar3 = *(int *)(this_00 + 200);
        while( true ) {
          if (iVar4 == iVar3) goto LAB_040e6cd4;
          if (iVar3 != 4) goto LAB_040e6ccc;
LAB_040e6db0:
          PlantFramework::FindTargetZombie(aRStack_10,this,0.0 < *(float *)(this + 0x2c));
          cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          if (cVar1 == '\0') break;
          setState(this,10);
          this_00 = *(Plant **)(this + 0x10);
          iVar4 = iVar3;
          iVar3 = *(int *)(this_00 + 200);
        }
      } while( true );
    }
  }
LAB_040e6cd4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEndurian::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantEndurian::onAnimStoppedCallback(PlantEndurian *this,string *param_1)

{
  long lVar1;
  PlantAnimRig_Endurian *extraout_x0;
  long *plVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474374(param_1,"attack_start",0);
  if (lVar1 == -1) {
    lVar1 = FUN_05474374(param_1,"attack_loop",0);
    if (lVar1 == -1) {
      lVar1 = FUN_05474374(param_1,"attack_end",0);
      if (lVar1 != -1) {
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        (**(code **)(*plVar2 + 0x118))();
        *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
      }
    }
    else {
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Endurian::LoopAttack(extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  else {
    setState(this,0xb);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEndurian::updateShieldLayers() */

void __thiscall PlantEndurian::updateShieldLayers(PlantEndurian *this)

{
  PlantAnimRig_Endurian *this_00;
  float fVar1;
  
  fVar1 = (float)GetFullSheldHealth(this);
  this_00 = (PlantAnimRig_Endurian *)FUN_040e616c(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Endurian::SetArmorPct(this_00,*(float *)(this + 0x2c) / fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEndurian::TakeDamage(DamageInfo const&) */

void PlantEndurian::TakeDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar1;
  float fVar2;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  fVar2 = 0.0;
  local_8 = ___stack_chk_guard;
  if (*(float *)(param_1 + 0x2c) <= 0.0) {
    PlantMagicbeans::TakeDamage(param_1);
    goto LAB_040e8bf4;
  }
  DamageInfo::DamageInfo(aDStack_68,in_x1);
  fVar1 = *(float *)(param_1 + 0x2c) - *(float *)(in_x1 + 8);
  if (fVar1 < 0.0) {
    fVar2 = -fVar1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    updateShieldLayers((PlantEndurian *)param_1);
    if (*(float *)(param_1 + 0x2c) <= 0.0) goto LAB_040e8c40;
LAB_040e8bd8:
    local_60 = 0.0;
    DamageInfo::DamageInfo(in_x8,aDStack_68);
  }
  else {
    *(float *)(param_1 + 0x2c) = fVar1;
    updateShieldLayers((PlantEndurian *)param_1);
    if (0.0 < *(float *)(param_1 + 0x2c)) goto LAB_040e8bd8;
LAB_040e8c40:
    local_60 = fVar2;
    PlantMagicbeans::TakeDamage(param_1);
  }
  DamageInfo::~DamageInfo(aDStack_68);
LAB_040e8bf4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEndurian::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void PlantEndurian::TakeSmashAttack(PlantEndurian *param_1)

{
  char cVar1;
  
  cVar1 = Plant::IsInvincible(*(Plant **)(param_1 + 0x10),false);
  if (cVar1 != '\0') {
    return;
  }
  if (0.0 < *(float *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    updateShieldLayers(param_1);
    return;
  }
  Plant::KillPlant(*(Plant **)(param_1 + 0x10),0,0,1);
  return;
}


/* PlantEndurian::ApplyPlantfood() */

void __thiscall PlantEndurian::ApplyPlantfood(PlantEndurian *this)

{
  undefined4 uVar1;
  
  Plant::Heal(*(Plant **)(this + 0x10));
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  uVar1 = GetFullSheldHealth(this);
  *(undefined4 *)(this + 0x2c) = uVar1;
  updateShieldLayers(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEndurian::Initialize() */

void __thiscall PlantEndurian::Initialize(PlantEndurian *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  EndurianGasSubsystem *this_00;
  Plant *this_01;
  undefined4 uVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar5;
  updateShieldLayers(this);
  this_01 = *(Plant **)(this + 0x10);
  iVar2 = FUN_040e49ec(this_01);
  if ((1 < iVar2) && (cVar1 = Plant::IsInPlantDefence(this_01), cVar1 == '\0')) {
    CreateGasEffect(this);
    lVar3 = FUN_040e6018(*(undefined8 *)(this + 0x10));
    iVar2 = FUN_040e49ec(*(undefined8 *)(this + 0x10));
    pfVar4 = (float *)FUN_040e4a00(*(undefined8 *)(lVar3 + 0x2c0),(long)(iVar2 + -1));
    fVar6 = *pfVar4;
    this_00 = Board::GetGameSubSystem<EndurianGasSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    EndurianGasSubsystem::Register(this_00,(RtWeakPtr *)aRStack_10,fVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


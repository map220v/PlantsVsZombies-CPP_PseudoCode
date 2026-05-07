// Class: PlantWizardThorns


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::ApplyPlantfood() */

void __thiscall PlantWizardThorns::ApplyPlantfood(PlantWizardThorns *this)

{
  Plant *pPVar1;
  RtReflectionDelegate<Sexy::Delegate0> aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Plant::EndCondition(*(Plant **)(this + 0x10),0xb);
  Plant::EndCondition(*(Plant **)(this + 0x10),0xd);
  Plant::EndCondition(*(Plant **)(this + 0x10),0xc);
  Plant::EndCondition(*(Plant **)(this + 0x10),9);
  Plant::EndCondition(*(Plant **)(this + 0x10),10);
  Plant::EndCondition(*(Plant **)(this + 0x10),0xe);
  pPVar1 = *(Plant **)(this + 0x10);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_e0);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98);
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50);
  Plant::EnablePlantfoodAnimation(pPVar1,aRStack_e0,aRStack_98,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_e0);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWizardThorns::GetTotalDamage(float) */

float __thiscall PlantWizardThorns::GetTotalDamage(PlantWizardThorns *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  fVar2 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
  return fVar2 + param_1 * fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::GetFireOriginOffset(PlantAction const&, float) */

void PlantWizardThorns::GetFireOriginOffset(PlantAction *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  PlantAction *in_x1;
  float fVar3;
  undefined4 local_38 [4];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = PlantFramework::GetFireOriginOffset((PlantFramework *)param_1,in_x1,param_2);
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar3 = (float)iVar2;
  }
  EATextSquish::Vec3::Vec3(aVStack_28,fVar3,0.0,0.0);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)local_38,(SexyVector3 *)aVStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWizardThorns::PlantWizardThorns() */

void __thiscall PlantWizardThorns::PlantWizardThorns(PlantWizardThorns *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069dfad0;
  return;
}


/* PlantWizardThorns::StaticNew() */

PlantWizardThorns * PlantWizardThorns::StaticNew(void)

{
  PlantWizardThorns *this;
  
  this = ::operator_new(0x38);
  PlantWizardThorns(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::StaticClassInit() */

void PlantWizardThorns::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWizardThorns");
    (*pcVar2)(plVar1,asStack_10,FUN_04e4f408,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWizardThorns::StaticGetClass() */

long * PlantWizardThorns::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWizardThorns",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWizardThorns::GetClass() const */

long * PlantWizardThorns::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWizardThorns",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWizardThorns::~PlantWizardThorns() */

void __thiscall PlantWizardThorns::~PlantWizardThorns(PlantWizardThorns *this)

{
  *(undefined ***)this = &PTR_GetClass_069dfad0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantWizardThorns::~PlantWizardThorns() */

void __thiscall PlantWizardThorns::~PlantWizardThorns(PlantWizardThorns *this)

{
  ~PlantWizardThorns(this);
  AK::FreeHook(this);
  return;
}


/* PlantWizardThorns::Initialize() */

void __thiscall PlantWizardThorns::Initialize(PlantWizardThorns *this)

{
  float fVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0xb;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x2c) = fVar1 + 1.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::PhantomEffect(int) */

void __thiscall PlantWizardThorns::PhantomEffect(PlantWizardThorns *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_30,"POPANIM_EFFECTS_WIZARDTHORNS_EFFECT");
  nop();
  GetPAMByName(asStack_30);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar1 != '\0') {
    iVar2 = PlantFramework::Rand((PlantFramework *)this,2);
    Sexy::StrFormat("anim01_%d",asStack_20,(ulong)(iVar2 + 1));
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(this_00,true);
    iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + 3);
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    iVar3 = BoardTransforms::GridToBoardSpaceY(iVar3 + param_1);
    EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar2,(float)(iVar3 + -0xf),0.0);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
    FUN_04e4e7cc(this_00 + 0x1c,0x7a121);
    Effect_PopAnim::PlaySingleAnimation(this_00,asStack_20,0);
    std::string::~string(asStack_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWizardThorns::SetProjectilePropertySheet(Projectile*, float, float, float, float, float,
   float, float, int, bool, float) */

PlantWizardThorns * __thiscall
PlantWizardThorns::SetProjectilePropertySheet
          (PlantWizardThorns *this,Projectile *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,int param_9,bool param_10,
          float param_11)

{
  ThornsProjectile *pTVar1;
  PlantfoodThornsProjectile *pPVar2;
  PlantWizardThorns *pPVar3;
  
  if (param_1 != (Projectile *)0x0) {
    pTVar1 = Sexy::RtObject::Cast<ThornsProjectile>((RtObject *)param_1);
    pPVar2 = Sexy::RtObject::Cast<PlantfoodThornsProjectile>((RtObject *)param_1);
    this = (PlantWizardThorns *)pPVar2;
    if (pTVar1 != (ThornsProjectile *)0x0) {
      FUN_04e4e85c(param_3,pTVar1 + 0x1ac);
      FUN_04e4e894(param_4,pTVar1 + 0x1c4);
      FUN_04e4e86c(param_5,pTVar1 + 0x1b0);
      FUN_04e4e87c(param_6,pTVar1 + 0x1b8);
      FUN_04e4e884(pTVar1 + 0x1c1,param_10);
      this = (PlantWizardThorns *)FUN_04e4e88c(param_2,pTVar1 + 0x1bc);
      if ((0.0 < param_7) && (0.0 < param_8)) {
        FUN_04e4e864(param_7,pTVar1 + 0x1a8);
        this = (PlantWizardThorns *)FUN_04e4e874(param_8,pTVar1 + 0x1b4);
      }
    }
    if (pPVar2 != (PlantfoodThornsProjectile *)0x0) {
      FUN_04e4e8a4(pPVar2 + 500,param_9);
      pPVar3 = (PlantWizardThorns *)FUN_04e4e8ac(param_11,pPVar2 + 0x1f0);
      return pPVar3;
    }
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::SetState(WizardThornsState) */

void __thiscall PlantWizardThorns::SetState(PlantWizardThorns *this,undefined4 param_2)

{
  RtObject *pRVar1;
  UIEasyButtonWidget *this_00;
  PlantAnimRig_WizardThorns *pPVar2;
  PopAnimRig *pPVar3;
  long *plVar4;
  char *__s;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04e4e7f0(aRStack_58,*(undefined8 *)(this + 0x10));
  pRVar1 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::RtObject::Cast<PlantWizardThornsProps>(pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = param_2;
  *(undefined4 *)(this + 0x28) = param_2;
  switch(param_2) {
  case 0xb:
    plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar4 + 0x118))();
    break;
  case 0xc:
    pRVar1 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_WizardThorns>(pRVar1);
    __s = "attack";
    goto LAB_04e50f20;
  case 0xe:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string((string *)aRStack_58,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar3,aRStack_58,0,(DummyInit *)aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    break;
  case 0x10:
    pRVar1 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_WizardThorns>(pRVar1);
    __s = "sleep01";
LAB_04e50f20:
    std::string::string(asStack_68,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar2,asStack_68,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
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


/* PlantWizardThorns::CancelPlantfood() */

void __thiscall PlantWizardThorns::CancelPlantfood(PlantWizardThorns *this)

{
  float fVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x2c) = fVar1 + 0.5;
  SetState(this,0xb);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantWizardThorns::onAnimStoppedCallback(PlantWizardThorns *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  RtObject *this_00;
  PlantWizardThornsProps *pPVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04e4e7f0(aRStack_40,*(undefined8 *)(this + 0x10));
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
  pPVar3 = Sexy::RtObject::Cast<PlantWizardThornsProps>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    if (*(int *)(this + 0x28) == 0xd) {
      if (this[0x30] == (PlantWizardThorns)0x0) {
        fVar5 = (float)PVZ_T();
        *(float *)(this + 0x2c) = fVar5 + *(float *)(pPVar3 + 700);
        SetState(this,0xe);
      }
      else {
        fVar5 = (float)PVZ_T();
        fVar5 = fVar5 + *(float *)(pPVar3 + 0x2b8);
        *(float *)(this + 0x2c) = fVar5;
        iVar2 = FUN_04e4e814(*(undefined8 *)(this + 0x10));
        if (1 < iVar2) {
          fVar5 = fVar5 - *(float *)(pPVar3 + 0x2cc);
        }
        *(float *)(this + 0x2c) = (fVar5 - *(float *)(pPVar3 + 700)) - 0.3;
        SetState(this,0x10);
      }
    }
  }
  else {
    bVar1 = std::operator==(param_1,"sleep01");
    if (bVar1) {
      pPVar4 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)aRStack_40,"sleep02");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
      PopAnimRig::PlayAndContinue(pPVar4,aRStack_40,0,aDStack_38);
      std::string::~string((string *)aRStack_40);
      nop();
    }
    else {
      bVar1 = std::operator==(param_1,"sleep03");
      if (bVar1) {
        SetState(this,0xb);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::SetAttackflag(bool) */

void __thiscall PlantWizardThorns::SetAttackflag(PlantWizardThorns *this,bool param_1)

{
  int iVar1;
  RtObject *this_00;
  PlantWizardThornsProps *pPVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((byte)this[0x30] < param_1) {
    FUN_04e4e7f0(aRStack_10,*(undefined8 *)(this + 0x10));
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar2 = Sexy::RtObject::Cast<PlantWizardThornsProps>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (*(int *)(this + 0x28) != 0xd) {
      fVar3 = (float)PVZ_T();
      fVar3 = fVar3 + *(float *)(pPVar2 + 0x2b8);
      *(float *)(this + 0x2c) = fVar3;
      iVar1 = FUN_04e4e814(*(undefined8 *)(this + 0x10));
      if (1 < iVar1) {
        fVar3 = fVar3 - *(float *)(pPVar2 + 0x2cc);
      }
      *(float *)(this + 0x2c) = (fVar3 - *(float *)(pPVar2 + 700)) - 0.3;
      SetState(this,0x10);
    }
    this[0x30] = (PlantWizardThorns)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::UpdateActions() */

void __thiscall PlantWizardThorns::UpdateActions(PlantWizardThorns *this)

{
  char cVar1;
  RtObject *pRVar2;
  PlantAnimRig_WizardThorns *pPVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  RtMixedPtr aRStack_78 [8];
  string asStack_70 [8];
  RtId aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  pcVar6 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  local_8 = ___stack_chk_guard;
  if (pcVar6 == Plant::IsInPlantFoodState) {
    cVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    cVar1 = (*pcVar6)();
  }
  if (cVar1 == '\0') {
    FUN_04e4e7f0(aRStack_60,*(undefined8 *)(this + 0x10));
    pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    Sexy::RtObject::Cast<PlantWizardThornsProps>(pRVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    if (*(int *)(this + 0x28) == 0xe) {
      fVar8 = *(float *)(this + 0x2c);
      fVar7 = (float)PVZ_T();
      if (fVar8 < fVar7) {
        SetState(this,0xb);
      }
    }
    else if ((*(int *)(this + 0x28) == 0x10) &&
            (fVar8 = *(float *)(this + 0x2c), fVar7 = (float)PVZ_T(), fVar8 < fVar7)) {
      pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_WizardThorns>(pRVar2);
      std::string::string(asStack_70,"sleep03");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
      std::string::string((string *)aRStack_60,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 aRStack_60);
      PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar3,asStack_70,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      std::string::~string(asStack_70);
      nop();
      std::string::string(asStack_70,"POPANIM_EFFECTS_WIZARDTHORNS_EFFECT");
      nop();
      GetPAMByName(asStack_70);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_68);
      if (cVar1 != '\0') {
        this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_68);
        Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(this_00,true);
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,*pfVar5,pfVar5[1] - 15.0,0.0);
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_60,-1);
        FUN_04e4e7cc(this_00 + 0x1c,0x62251);
        std::string::string((string *)aRStack_60,"anim06");
        Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_60,0);
        std::string::~string((string *)aRStack_60);
        nop();
      }
      SetState(this,0x11);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      std::string::~string(asStack_70);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::FindZombie() */

void __thiscall PlantWizardThorns::FindZombie(PlantWizardThorns *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  Zombie *this_00;
  GridItem *pGVar9;
  RtObject *this_01;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_30);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar6 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_20,iVar3,iVar4,iVar5 - iVar6,1);
  local_30 = local_20;
  uStack_28 = uStack_18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar7 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,uVar7,(Insets *)&local_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_01 = (RtObject *)*puVar8;
    this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
    pGVar9 = Sexy::RtObject::Cast<GridItem>(this_01);
    if (this_00 == (Zombie *)0x0) {
      if ((pGVar9 != (GridItem *)0x0) && (cVar2 = RealObject::IsOnTeam(pGVar9,2), cVar2 != '\0'))
      break;
    }
    else {
      cVar2 = RealObject::IsOnTeam(this_00,1);
      if ((((cVar2 == '\0') &&
           (cVar2 = FUN_04e4ff7c(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0')) &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
         ((iVar3 = Zombie::GetInvisibleState(this_00), iVar3 != 2 &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')))) break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* PlantWizardThorns::FindTargetAndFire(PlantWeapon) */

char PlantWizardThorns::FindTargetAndFire(PlantWizardThorns *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x2c);
  fVar2 = (float)PVZ_T();
  if (((fVar3 < fVar2) && (cVar1 = FindZombie(param_1), cVar1 != '\0')) &&
     (*(int *)(param_1 + 0x28) == 0xb)) {
    SetState(param_1,0xc);
    return cVar1;
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::ConfirmZombieTarget() */

void __thiscall PlantWizardThorns::ConfirmZombieTarget(PlantWizardThorns *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = false;
  Sexy::Insets::Insets((Insets *)&local_30);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar6 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_20,iVar3,iVar4,iVar5 - iVar6,1);
  local_30 = local_20;
  uStack_28 = uStack_18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,2,(Insets *)&local_30);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (cVar1 == '\0') {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      if ((((this_00 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(this_00,1), cVar1 == '\0'))
          && (cVar1 = FUN_04e4ff7c(*(undefined4 *)(this_00 + 0xcc)), cVar1 == '\0')) &&
         (((iVar3 = Zombie::GetInvisibleState(this_00), iVar3 != 2 &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
          ((cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0' &&
           (cVar1 = Zombie::HasCondition(this_00,0x8c), cVar1 == '\0')))))) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWizardThorns::OnAnimCommand(std::string const&, std::string const&) */

void PlantWizardThorns::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  RtObject *pRVar7;
  PlantWizardThornsProps *pPVar8;
  ThornsProjectile *pTVar9;
  float *pfVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  SharkMinion *pSVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if (!bVar1) goto LAB_04e51b5c;
  param_1[0x30] = (string)0x0;
  FUN_04e4e7f0(aRStack_10,*(undefined8 *)(param_1 + 0x10));
  pRVar7 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar8 = Sexy::RtObject::Cast<PlantWizardThornsProps>(pRVar7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar14 = (float)GetTotalDamage((PlantWizardThorns *)param_1,*(float *)(pPVar8 + 0x2c4));
  fVar15 = (float)GetTotalDamage((PlantWizardThorns *)param_1,*(float *)(pPVar8 + 0x2dc));
  fVar21 = *(float *)(pPVar8 + 0x2e4);
  fVar22 = *(float *)(pPVar8 + 0x2c0);
  fVar16 = (float)GetTotalDamage((PlantWizardThorns *)param_1,*(float *)(pPVar8 + 0x2c8));
  cVar2 = FUN_04e4e81c(*(undefined8 *)(param_1 + 0x10));
  if (cVar2 == '\0') {
    fVar17 = 0.0;
LAB_04e51c18:
    fVar18 = 0.0;
    cVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
  }
  else {
    fVar17 = (float)GetTotalDamage((PlantWizardThorns *)param_1,*(float *)(pPVar8 + 0x2d4));
    cVar2 = FUN_04e4e81c(*(undefined8 *)(param_1 + 0x10));
    if (cVar2 == '\0') goto LAB_04e51c18;
    fVar18 = (float)GetTotalDamage((PlantWizardThorns *)param_1,*(float *)(pPVar8 + 0x2e0));
    cVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
  }
  if (cVar2 == '\0') {
    iVar4 = FUN_04e4e814(*(undefined8 *)(param_1 + 0x10));
    bVar1 = iVar4 < 3;
    do {
      bVar1 = (bool)(bVar1 ^ 1);
      bVar3 = (bool)ConfirmZombieTarget((PlantWizardThorns *)param_1);
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
      pSVar12 = *(SharkMinion **)(param_1 + 0x10);
      uVar5 = SharkMinion::getRow(pSVar12);
      pRVar7 = (RtObject *)Plant::Fire((Plant *)pSVar12,aRStack_10,uVar5,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      SetProjectilePropertySheet
                ((PlantWizardThorns *)param_1,(Projectile *)pRVar7,fVar22,fVar14,fVar16,fVar15,
                 fVar21,fVar17,fVar18,0,bVar3,-1.0);
      pTVar9 = Sexy::RtObject::Cast<ThornsProjectile>(pRVar7);
      FUN_04e4e89c(pTVar9 + 0x1c8,bVar1);
    } while (bVar1 != false);
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0xd;
  }
  else {
    pSVar12 = *(SharkMinion **)(param_1 + 0x10);
    p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0;
    *(undefined4 *)(pSVar12 + 0x150) = 1;
    iVar4 = SharkMinion::getRow(pSVar12);
    if (0 < iVar4) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
      pSVar12 = *(SharkMinion **)(param_1 + 0x10);
      iVar4 = SharkMinion::getRow(pSVar12);
      p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Plant::Fire((Plant *)pSVar12,aRStack_10,iVar4 + -1,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(p_Var13);
      fVar19 = *pfVar10;
      fVar23 = pfVar10[1];
      iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
      Projectile::SetPosition((Projectile *)p_Var13,fVar19,fVar23 - (float)iVar4,pfVar10[2]);
      PhantomEffect((PlantWizardThorns *)param_1,-1);
    }
    this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)0x0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    pSVar12 = *(SharkMinion **)(param_1 + 0x10);
    uVar5 = SharkMinion::getRow(pSVar12);
    p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Plant::Fire((Plant *)pSVar12,aRStack_10,uVar5,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    PhantomEffect((PlantWizardThorns *)param_1,0);
    iVar4 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
    iVar6 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar4 + 1 < iVar6) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
      pSVar12 = *(SharkMinion **)(param_1 + 0x10);
      iVar4 = SharkMinion::getRow(pSVar12);
      this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Plant::Fire((Plant *)pSVar12,aRStack_10,iVar4 + 1,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(this);
      fVar23 = pfVar10[1];
      fVar19 = *pfVar10;
      iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
      Projectile::SetPosition((Projectile *)this,fVar19,(float)iVar4 + fVar23,pfVar10[2]);
      PhantomEffect((PlantWizardThorns *)param_1,1);
    }
    pfVar10 = (float *)std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(p_Var11);
    fVar19 = *pfVar10;
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar19 = (float)(iVar4 * 3) + fVar19;
    SetProjectilePropertySheet
              ((PlantWizardThorns *)param_1,(Projectile *)p_Var13,fVar22,fVar14,fVar16,fVar15,fVar21
               ,fVar17,fVar18,*(int *)(pPVar8 + 0x2d8),true,fVar19);
    SetProjectilePropertySheet
              ((PlantWizardThorns *)param_1,(Projectile *)p_Var11,fVar22,fVar14,fVar16,fVar15,fVar21
               ,fVar17,fVar18,*(int *)(pPVar8 + 0x2d8),true,fVar19);
    SetProjectilePropertySheet
              ((PlantWizardThorns *)param_1,(Projectile *)this,fVar22,fVar14,fVar16,fVar15,fVar21,
               fVar17,fVar18,*(int *)(pPVar8 + 0x2d8),true,fVar19);
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    if (cVar2 != '\0') {
      p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0;
      iVar4 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
      if (1 < iVar4) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
        pSVar12 = *(SharkMinion **)(param_1 + 0x10);
        iVar4 = SharkMinion::getRow(pSVar12);
        p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Plant::Fire((Plant *)pSVar12,aRStack_10,iVar4 + -2,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(p_Var13);
        fVar20 = *pfVar10;
        fVar23 = pfVar10[1];
        iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
        Projectile::SetPosition
                  ((Projectile *)p_Var13,fVar20,fVar23 - (float)(iVar4 << 1),pfVar10[2]);
        PhantomEffect((PlantWizardThorns *)param_1,-2);
      }
      p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0;
      iVar4 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
      iVar6 = BoardConstants::NUMBER_OF_ROWS();
      if (iVar4 + 2 < iVar6) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
        pSVar12 = *(SharkMinion **)(param_1 + 0x10);
        iVar4 = SharkMinion::getRow(pSVar12);
        p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Plant::Fire((Plant *)pSVar12,aRStack_10,iVar4 + 2,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost(p_Var11);
        fVar20 = *pfVar10;
        fVar23 = pfVar10[1];
        iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
        Projectile::SetPosition
                  ((Projectile *)p_Var11,fVar20,(float)(iVar4 << 1) + fVar23,pfVar10[2]);
        PhantomEffect((PlantWizardThorns *)param_1,2);
      }
      SetProjectilePropertySheet
                ((PlantWizardThorns *)param_1,(Projectile *)p_Var13,fVar22,fVar14,fVar16,fVar15,
                 fVar21,fVar17,fVar18,*(int *)(pPVar8 + 0x2d8),true,fVar19);
      SetProjectilePropertySheet
                ((PlantWizardThorns *)param_1,(Projectile *)p_Var11,fVar22,fVar14,fVar16,fVar15,
                 fVar21,fVar17,fVar18,*(int *)(pPVar8 + 0x2d8),true,fVar19);
    }
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
  }
LAB_04e51b5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


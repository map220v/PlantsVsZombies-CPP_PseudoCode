// Class: PlantMaybee


/* PlantMaybee::PlantMaybee() */

void __thiscall PlantMaybee::PlantMaybee(PlantMaybee *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069db100;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x34));
  return;
}


/* PlantMaybee::StaticNew() */

PlantMaybee * PlantMaybee::StaticNew(void)

{
  PlantMaybee *this;
  
  this = ::operator_new(0x40);
  PlantMaybee(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybee::StaticClassInit() */

void PlantMaybee::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMaybee");
    (*pcVar2)(plVar1,asStack_10,FUN_04e2df9c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMaybee::StaticGetClass() */

long * PlantMaybee::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMaybee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMaybee::GetClass() const */

long * PlantMaybee::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMaybee",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMaybee::~PlantMaybee() */

void __thiscall PlantMaybee::~PlantMaybee(PlantMaybee *this)

{
  *(undefined ***)this = &PTR_GetClass_069db100;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMaybee::~PlantMaybee() */

void __thiscall PlantMaybee::~PlantMaybee(PlantMaybee *this)

{
  ~PlantMaybee(this);
  AK::FreeHook(this);
  return;
}


/* PlantMaybee::GetPlantFoodPlayCount() */

undefined8 __thiscall PlantMaybee::GetPlantFoodPlayCount(PlantMaybee *this)

{
  FUN_04e30848(*(undefined8 *)(this + 0x10));
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybee::hasTargetInRange() */

void __thiscall PlantMaybee::hasTargetInRange(PlantMaybee *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  int in_w4;
  int iVar7;
  code *pcVar8;
  Ratio aRStack_38 [8];
  RtMixedPtrBase aRStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04e30848(*(undefined8 *)(this + 0x10));
  Sexy::Ratio::Ratio(aRStack_38);
  iVar1 = *(int *)(lVar5 + 0x318);
  uVar6 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar3 = FUN_04e2d844(*(undefined8 *)(this + 0x10));
  if (iVar3 == 2) {
    iVar7 = iVar1 + 1;
  }
  else {
    iVar7 = iVar1 + 2;
    if (iVar3 < 3) {
      iVar7 = iVar1;
    }
  }
  BoardTransforms::GridToBoardSpaceRect
            ((BoardTransforms *)(uVar6 & 0xffffffff),iVar2,iVar7 + 1,1,in_w4);
  uVar4 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
  pcVar8 = *(code **)(*(long *)this + 0xe8);
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  (*pcVar8)(aRStack_30,this,uVar4,0,0,aRStack_38,aIStack_18);
  uVar4 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybee::setState(unsigned int) */

void __thiscall PlantMaybee::setState(PlantMaybee *this,uint param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Plant *this_00;
  PlantAnimRig_Maybee *extraout_x0;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(*(long *)(this + 0x10) + 200) == param_1) goto switchD_04e30d0c_default;
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  lVar4 = FUN_04e30848();
  this_00 = *(Plant **)(this + 0x10);
  switch(*(undefined4 *)(this_00 + 200)) {
  case 10:
    plVar5 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_00);
    (**(code **)(*plVar5 + 0x118))();
    uVar7 = PVZ_EOT();
    *(undefined4 *)(this + 0x30) = uVar7;
    break;
  case 0xb:
    iVar1 = *(int *)(lVar4 + 0x2c4);
    *(int *)(this + 0x28) = iVar1;
    iVar3 = FUN_04e2d844();
    if (iVar3 == 2) {
      *(int *)(this + 0x28) = iVar1 + 1;
    }
    else if (2 < iVar3) {
      *(int *)(this + 0x28) = iVar1 + 2;
    }
    goto LAB_04e30e08;
  case 0xc:
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 == '\0') {
      fVar8 = *(float *)(lVar4 + 0x2d8);
    }
    else {
      (**(code **)(*(long *)this + 0x228))(this);
      fVar8 = *(float *)(lVar4 + 0x2dc);
    }
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x30) = fVar6 + fVar8;
    uVar7 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = uVar7;
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Maybee::PlayCooldownStart(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    break;
  case 0xd:
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar4 + 0x2c8);
    cVar2 = Plant::GetAvatarEnable(this_00);
    if (cVar2 != '\0') {
      *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar4 + 0x328);
    }
LAB_04e30e08:
    uVar7 = PVZ_T();
    *(undefined4 *)(this + 0x2c) = uVar7;
  }
switchD_04e30d0c_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybee::Initialize() */

void __thiscall PlantMaybee::Initialize(PlantMaybee *this)

{
  PlantAnimRig *pPVar1;
  long lVar2;
  UIEasyButtonWidget *this_00;
  undefined4 uVar3;
  float fVar4;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  uVar3 = PVZ_EOT();
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this + 0x30) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar3;
  *(undefined4 *)(this_00 + 200) = 0;
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,plantfoodCallback);
  Sexy::Delegate1<float>::Delegate1<PlantMaybee,void(PlantMaybee::*)(float)>(aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,attackCallback);
  Sexy::Delegate1<float>::Delegate1<PlantMaybee,void(PlantMaybee::*)(float)>(aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  setState(this,10);
  lVar2 = FUN_04e30848(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar2 + 0x310);
  lVar2 = FUN_04e30848(*(undefined8 *)(this + 0x10));
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x34),fVar4,*(float *)(lVar2 + 0x314));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMaybee::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantMaybee::onAnimStoppedCallback(PlantMaybee *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig_Maybee *this_00;
  undefined4 uVar2;
  
  if ((0 < *(int *)(this + 0x28)) && (bVar1 = std::operator==(param_1,"attack"), bVar1)) {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x2c) = uVar2;
  }
  bVar1 = std::operator==(param_1,"cooldown");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"recharge");
    if (!bVar1) {
      return;
    }
    setState(this,10);
    return;
  }
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  PlantAnimRig_Maybee::PlayCooldownLooped(this_00);
  return;
}


/* PlantMaybee::ApplyPlantfood() */

void __thiscall PlantMaybee::ApplyPlantfood(PlantMaybee *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0xd);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybee::UpdateActions() */

void __thiscall PlantMaybee::UpdateActions(PlantMaybee *this)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  PlantAnimRig_Maybee *extraout_x0;
  int iVar4;
  code *pcVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = *(int *)(*(long *)(this + 0x10) + 200);
  do {
    switch(iVar6) {
    case 10:
      cVar2 = hasTargetInRange(this);
      if (cVar2 == '\0') goto LAB_04e31200;
      setState(this,0xb);
      iVar4 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xb:
      fVar7 = (float)PVZ_T();
      if (fVar7 < *(float *)(this + 0x2c)) {
LAB_04e31118:
        iVar4 = *(int *)(*(long *)(this + 0x10) + 200);
      }
      else {
        plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pcVar5 = *(code **)(*plVar3 + 0x130);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        (*pcVar5)(plVar3,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        uVar8 = PVZ_EOT();
        *(undefined4 *)(this + 0x2c) = uVar8;
        iVar4 = *(int *)(*(long *)(this + 0x10) + 200);
      }
      break;
    case 0xc:
      fVar7 = (float)PVZ_T();
      if (fVar7 < *(float *)(this + 0x30)) goto LAB_04e31118;
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Maybee::PlayCooldownEnd(extraout_x0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      uVar8 = PVZ_EOT();
      *(undefined4 *)(this + 0x30) = uVar8;
      iVar4 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xd:
      PVZ_T();
LAB_04e31200:
      iVar4 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    default:
      goto switchD_04e31104_default;
    }
    bVar1 = iVar6 != iVar4;
    iVar6 = iVar4;
  } while (bVar1);
switchD_04e31104_default:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybee::createBee(bool) */

void __thiscall PlantMaybee::createBee(PlantMaybee *this,bool param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  MaybeeBee *this_00;
  SexyVector3 *this_01;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04e30848(*(undefined8 *)(this + 0x10));
  fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(this + 0x34));
  uVar8 = 0;
  uVar9 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,fVar5,0.0,0.0);
  fVar5 = *(float *)(lVar3 + 700);
  iVar2 = FUN_04e2d844(*(undefined8 *)(this + 0x10));
  if (iVar2 == 2) {
    fVar10 = fVar5 + 5.0;
  }
  else {
    fVar10 = fVar5;
    if (2 < iVar2) {
      fVar10 = fVar5 + 10.0;
    }
  }
  if (param_1) {
    fVar10 = fVar5 + 10.0;
  }
  this_00 = GameObject::Create<MaybeeBee>();
  FUN_04e2d84c(*(undefined4 *)(lVar3 + 0x2c0),this_00 + 0xd4);
  fVar5 = (float)PVZ_T();
  FUN_04e2d854(fVar5 + fVar10,this_00 + 0xc0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
  MaybeeBee::SetOwner(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar8;
  local_10 = uVar9;
  BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
  uVar8 = FUN_04e2d740(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
  RealObject::JoinTeam((RealObject *)this_00,uVar8);
  FUN_04e2d874(*(undefined4 *)(lVar3 + 0x2d4),this_00 + 0xe4);
  FUN_04e2da3c(this_00 + 0xe0);
  iVar2 = FUN_04e2d844(*(undefined8 *)(this + 0x10));
  FUN_04e2d88c(this_00 + 200,iVar2);
  if (iVar2 == 5) {
    fVar5 = (float)Sexy::Rand(1.0);
    FUN_04e2d884(this_00 + 0xc6,fVar5 < *(float *)(lVar3 + 0x31c));
    FUN_04e2d898(*(undefined4 *)(lVar3 + 800),this_00 + 0xcc);
  }
  if (param_1) {
    MaybeeBee::SetIsPlantfooded(this_00);
    FUN_04e2d87c(*(undefined4 *)(lVar3 + 0x2e4),this_00 + 0xe8);
  }
  iVar1 = *(int *)(lVar3 + 0x2cc);
  fVar5 = (float)Plant::GetExtraLevelDamge(*(Plant **)(this + 0x10));
  lVar4 = *(long *)(this + 0x10);
  fVar10 = (float)FUN_04e2d828(*(undefined4 *)(lVar4 + 0xf4),*(undefined4 *)(lVar4 + 0x100),
                               *(undefined4 *)(lVar4 + 0x104),*(undefined4 *)(lVar4 + 0x3b8));
  fVar6 = (float)FUN_04e2d838(*(undefined4 *)(lVar4 + 0x3bc));
  fVar7 = (float)FUN_04e2d83c(*(undefined4 *)(lVar4 + 0x424));
  if (param_1) {
    iVar1 = *(int *)(lVar3 + 0x324) + iVar2 * *(int *)(lVar3 + 0x324);
  }
  fVar5 = (float)(int)(fVar10 * fVar5 * fVar6 * fVar7 * (float)iVar1);
  FUN_04e2d868(fVar5,fVar5 * *(float *)(lVar3 + 0x2d0),this_00 + 0xd8,this_00 + 0xdc);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PlantMaybee::TakeDamage(DamageInfo const&) */

void PlantMaybee::TakeDamage(DamageInfo *param_1)

{
  bool bVar1;
  Zombie *pZVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *in_x1;
  
  if (((RtObject *)*in_x1 != (RtObject *)0x0) &&
     (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)*in_x1), pZVar2 != (Zombie *)0x0)) {
    uVar3 = operator|(0x40000,0x100000);
    bVar1 = TestFlag<DamageTypeFlags>(in_x1[2],uVar3);
    if (bVar1) {
      lVar4 = FUN_04e30848(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition
                (*(Zombie **)(lVar4 + 0x2e0),0,pZVar2,0x18,*(long *)(param_1 + 0x10) != 0);
    }
  }
  PlantMagicbeans::TakeDamage(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybee::attackCallback(float) */

void PlantMaybee::attackCallback(float param_1)

{
  PlantMaybee *in_x0;
  undefined8 uVar1;
  PlantMaybeeSubSystem *pPVar2;
  RealObject *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(int *)(in_x0 + 0x28) = *(int *)(in_x0 + 0x28) + -1;
  local_8 = ___stack_chk_guard;
  uVar1 = createBee(in_x0,false);
  pPVar2 = Board::GetGameSubSystem<PlantMaybeeSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantMaybeeSubSystem::AddBee(pPVar2,uVar1,aRStack_10,3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (*(int *)(in_x0 + 0x28) < 1) {
    setState(in_x0,0xc);
  }
  this = *(RealObject **)(in_x0 + 0x10);
  std::string::string((string *)aRStack_10,"Plant_MayBee_Attack_02");
  RealObject::PlayPositionalSound(this,(string *)aRStack_10,0.0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMaybee::plantfoodCallback(float) */

void PlantMaybee::plantfoodCallback(float param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PlantMaybee *in_x0;
  MaybeeBee *this;
  SexyVector3 *this_00;
  undefined8 uVar5;
  PlantMaybeeSubSystem *pPVar6;
  Vec3 *pVVar7;
  uint uVar8;
  RealObject *this_01;
  code *pcVar9;
  int iVar10;
  double dVar11;
  undefined4 uVar12;
  Vec3 aVStack_48 [4];
  float local_44;
  Vec3 aVStack_38 [4];
  float local_34;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x10));
  if (cVar1 == '\0') {
    *(int *)(in_x0 + 0x28) = *(int *)(in_x0 + 0x28) + -1;
    uVar5 = createBee(in_x0,true);
    pPVar6 = Board::GetGameSubSystem<PlantMaybeeSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aVStack_28);
    PlantMaybeeSubSystem::AddBee(pPVar6,uVar5,(RtWeakPtr<Sexy::SoundResource> *)&local_18,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_28);
    iVar2 = *(int *)(in_x0 + 0x28);
  }
  else {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar10 = 0;
    EATextSquish::Vec3::Vec3(aVStack_48,5.0,-((float)iVar2 * 0.6),0.0);
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    uVar12 = 0;
    dVar11 = (double)(ulong)(uint)((float)iVar2 * 1.7);
    EATextSquish::Vec3::Vec3(aVStack_38,5.0,(float)iVar2 * 1.7,0.0);
    iVar3 = 3;
    if (*(int *)(in_x0 + 0x28) < 3) {
      iVar3 = 2;
    }
    do {
      this = (MaybeeBee *)createBee(in_x0,true);
      iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(in_x0 + 0x10));
      iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
      MaybeeBee::SetCollision(this);
      FUN_04e2d8a0(this + 0xd0,(iVar2 + 4) * iVar4 + 200);
      uVar8 = *(uint *)(in_x0 + 0x28);
      if (uVar8 - 3 < 3) {
        iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
        local_44 = local_44 + (float)iVar2 * 0.5;
        iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
        uVar8 = *(uint *)(in_x0 + 0x28);
        dVar11 = (double)iVar2;
        local_34 = (float)((double)local_34 - dVar11 * 0.1);
        if (uVar8 == 5 || uVar8 == 8) goto LAB_04e345f8;
LAB_04e344c8:
        if (uVar8 == 2) goto LAB_04e345f8;
        if (((uVar8 & 0xfffffffd) == 1) || (uVar8 == 6)) {
          pcVar9 = *(code **)(*(long *)this + 0x78);
          this_00 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(in_x0 + 0x10));
          pVVar7 = aVStack_38;
        }
        else {
          pcVar9 = *(code **)(*(long *)this + 0x78);
          this_00 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(in_x0 + 0x10));
          iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
          uVar12 = 0;
          dVar11 = (double)(ulong)(uint)((float)iVar2 * 0.5);
          EATextSquish::Vec3::Vec3(aVStack_28,5.0,(float)iVar2 * 0.5,0.0);
          pVVar7 = aVStack_28;
        }
      }
      else {
        if ((int)uVar8 < 3) {
          iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
          local_44 = local_44 + (float)iVar2 * 0.8;
          iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
          uVar8 = *(uint *)(in_x0 + 0x28);
          dVar11 = (double)iVar2;
          local_34 = (float)((double)local_34 - dVar11 * 0.3);
        }
        if (uVar8 != 5 && uVar8 != 8) goto LAB_04e344c8;
LAB_04e345f8:
        pcVar9 = *(code **)(*(long *)this + 0x78);
        this_00 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(in_x0 + 0x10));
        pVVar7 = aVStack_48;
      }
      local_18 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)pVVar7);
      iVar10 = iVar10 + 1;
      local_14 = SUB84(dVar11,0);
      local_10 = uVar12;
      (*pcVar9)(this,&local_18);
      iVar2 = *(int *)(in_x0 + 0x28) + -1;
      *(int *)(in_x0 + 0x28) = iVar2;
    } while (iVar10 != iVar3);
  }
  if (iVar2 < 1) {
    setState(in_x0,0xc);
  }
  this_01 = *(RealObject **)(in_x0 + 0x10);
  std::string::string((string *)&local_18,"Plant_MayBee_Attack_02");
  RealObject::PlayPositionalSound(this_01,(string *)&local_18,0.0);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


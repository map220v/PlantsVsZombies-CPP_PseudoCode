// Class: PlantBeercoconut


/* PlantBeercoconut::PlantBeercoconut() */

void __thiscall PlantBeercoconut::PlantBeercoconut(PlantBeercoconut *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06727fd0;
  return;
}


/* PlantBeercoconut::StaticNew() */

PlantBeercoconut * PlantBeercoconut::StaticNew(void)

{
  PlantBeercoconut *this;
  
  this = ::operator_new(0x38);
  PlantBeercoconut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeercoconut::StaticClassInit() */

void PlantBeercoconut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBeercoconut");
    (*pcVar2)(plVar1,asStack_10,FUN_03afd904,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBeercoconut::StaticGetClass() */

long * PlantBeercoconut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBeercoconut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBeercoconut::GetClass() const */

long * PlantBeercoconut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBeercoconut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBeercoconut::~PlantBeercoconut() */

void __thiscall PlantBeercoconut::~PlantBeercoconut(PlantBeercoconut *this)

{
  *(undefined ***)this = &PTR_GetClass_06727fd0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBeercoconut::~PlantBeercoconut() */

void __thiscall PlantBeercoconut::~PlantBeercoconut(PlantBeercoconut *this)

{
  ~PlantBeercoconut(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeercoconut::Initialize() */

void __thiscall PlantBeercoconut::Initialize(PlantBeercoconut *this)

{
  int iVar1;
  long extraout_x0;
  long extraout_x0_00;
  long extraout_x0_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x34] = (PlantBeercoconut)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  iVar1 = FUN_03afd17c(*(undefined8 *)(this + 0x10));
  if (iVar1 < 3) {
    if (iVar1 == 2) {
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      *(undefined4 *)(this + 0x30) = *(undefined4 *)(extraout_x0 + 700);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    else {
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      *(undefined4 *)(this + 0x30) = *(undefined4 *)(extraout_x0_00 + 0x2b8);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  else {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(extraout_x0_01 + 0x2c0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeercoconut::setstate(unsigned int) */

void __thiscall PlantBeercoconut::setstate(PlantBeercoconut *this,uint param_1)

{
  char cVar1;
  long *plVar2;
  PlantAnimRig_Pinecone *this_00;
  PlantAnimRig_Beercoconut *pPVar3;
  long extraout_x0;
  UIEasyButtonWidget *this_01;
  code *pcVar4;
  float fVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_01 + 200) = param_1;
  if (param_1 == 0xb) {
    *(undefined4 *)(this + 0x2c) = 0;
    cVar1 = FUN_03afd184(this_01);
    if (cVar1 == '\0') {
      this[0x34] = (PlantBeercoconut)0x0;
    }
    else {
      fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
      nop();
      this[0x34] = (PlantBeercoconut)(fVar5 < *(float *)(extraout_x0 + 0x2c4));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
      this_01 = *(UIEasyButtonWidget **)(this + 0x10);
    }
    this_00 = (PlantAnimRig_Pinecone *)FUN_03afe238(this_01);
    PlantAnimRig_Pinecone::SetElec(this_00,(bool)this[0x34]);
    pPVar3 = (PlantAnimRig_Beercoconut *)FUN_03afe238(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Beercoconut::PlayStartAccumlation(pPVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  else {
    if (param_1 != 0xc) {
      if (param_1 == 4) {
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
        (**(code **)(*plVar2 + 0x118))();
      }
      goto LAB_03afe29c;
    }
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
    pcVar4 = *(code **)(*plVar2 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar4)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_03afe29c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBeercoconut::UpdateActions() */

void __thiscall PlantBeercoconut::UpdateActions(PlantBeercoconut *this)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(*(long *)(this + 0x10) + 200) == 0xb) {
    fVar1 = (float)PVZ_Dt();
    fVar2 = *(float *)(this + 0x2c);
    *(float *)(this + 0x2c) = fVar1 + fVar2;
    if (*(float *)(this + 0x30) < fVar1 + fVar2) {
      setstate(this,0xc);
      return;
    }
  }
  return;
}


/* PlantBeercoconut::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantBeercoconut::onAnimStoppedCallback(PlantBeercoconut *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig_Beercoconut *this_00;
  
  bVar1 = std::operator==("attack_ready",param_1);
  if ((bVar1) || (bVar1 = std::operator==("attack5_ready",param_1), bVar1)) {
    this_00 = (PlantAnimRig_Beercoconut *)FUN_03afe238(*(undefined8 *)(this + 0x10));
    PlantAnimRig_Beercoconut::PlayAccumlation(this_00);
    return;
  }
  bVar1 = std::operator==("attack_hit",param_1);
  if ((!bVar1) && (bVar1 = std::operator==("attack5_hit",param_1), !bVar1)) {
    return;
  }
  setstate(this,4);
  return;
}


/* PlantBeercoconut::ApplyPlantfood() */

void __thiscall PlantBeercoconut::ApplyPlantfood(PlantBeercoconut *this)

{
  setstate(this,5);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantBeercoconut::CancelPlantfood() */

void __thiscall PlantBeercoconut::CancelPlantfood(PlantBeercoconut *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setstate(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBeercoconut::OnAnimCommand(std::string const&, std::string const&) */

void PlantBeercoconut::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  BeercoconutSubsystem *pBVar2;
  char *__s;
  RealObject *pRVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("charge_attack",param_2);
  if (bVar1) {
    pBVar2 = Board::GetGameSubSystem<BeercoconutSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    BeercoconutSubsystem::BeercoconutTossZombies
              (pBVar2,*(Plant **)(param_1 + 0x10),(bool)param_1[0x34],false);
    pRVar3 = *(RealObject **)(param_1 + 0x10);
    if (param_1[0x34] == (string)0x0) {
      __s = "Play_Plant_Beercoconut_Attack";
    }
    else {
      __s = "Play_Plant_Beercoconut_LV5";
    }
    std::string::string(asStack_10,__s);
    RealObject::PlayPositionalSound(pRVar3,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    bVar1 = std::operator==("plantfood_hit",param_2);
    if ((bVar1) || (bVar1 = std::operator==("avatar_plantfood_hit",param_2), bVar1)) {
      pBVar2 = Board::GetGameSubSystem<BeercoconutSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      BeercoconutSubsystem::BeercoconutTossZombies(pBVar2,*(Plant **)(param_1 + 0x10),false,true);
      pRVar3 = *(RealObject **)(param_1 + 0x10);
      std::string::string(asStack_10,"Play_Plant_Beercoconut_Plantfood");
      RealObject::PlayPositionalSound(pRVar3,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


/* PlantBeercoconut::TakeDamage(DamageInfo const&) */

void PlantBeercoconut::TakeDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 4) {
    setstate((PlantBeercoconut *)param_1,0xb);
  }
  fVar1 = *(float *)(param_1 + 0x28);
  fVar2 = (float)PVZ_T();
  if (fVar1 + 0.1 < fVar2) {
    uVar3 = PVZ_T();
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  return;
}


// Class: PlantPrimalSunflower


/* PlantPrimalSunflower::Initialize() */

void __thiscall PlantPrimalSunflower::Initialize(PlantPrimalSunflower *this)

{
  PlantSunflower::Initialize((PlantSunflower *)this);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


/* PlantPrimalSunflower::ApplyPlantfood() */

void __thiscall PlantPrimalSunflower::ApplyPlantfood(PlantPrimalSunflower *this)

{
  PlantSunflower::ApplyPlantfood((PlantSunflower *)this);
  *(undefined4 *)(this + 0x30) = 1;
  return;
}


/* PlantPrimalSunflower::AddPot(PlantPot*) */

void __thiscall PlantPrimalSunflower::AddPot(PlantPrimalSunflower *this,PlantPot *param_1)

{
  int iVar1;
  
  PlantFramework::AddPot((PlantFramework *)this,param_1);
  if ((param_1 != (PlantPot *)0x0) &&
     (iVar1 = FUN_04187984(*(undefined4 *)(*(long *)(this + 0x10) + 0x294)), iVar1 == 2)) {
    (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  }
  return;
}


/* PlantPrimalSunflower::PlantPrimalSunflower() */

void __thiscall PlantPrimalSunflower::PlantPrimalSunflower(PlantPrimalSunflower *this)

{
  PlantSunflower::PlantSunflower((PlantSunflower *)this);
  *(undefined ***)this = &PTR_GetClass_067f9f10;
  return;
}


/* PlantPrimalSunflower::StaticNew() */

PlantPrimalSunflower * PlantPrimalSunflower::StaticNew(void)

{
  PlantPrimalSunflower *this;
  
  this = ::operator_new(0x38);
  PlantPrimalSunflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalSunflower::StaticClassInit() */

void PlantPrimalSunflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPrimalSunflower");
    (*pcVar2)(plVar1,asStack_10,FUN_04188850,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPrimalSunflower::StaticGetClass() */

long * PlantPrimalSunflower::StaticGetClass(void)

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
  uVar2 = PlantSunflower::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPrimalSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPrimalSunflower::GetClass() const */

long * PlantPrimalSunflower::GetClass(void)

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
  uVar2 = PlantSunflower::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPrimalSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPrimalSunflower::~PlantPrimalSunflower() */

void __thiscall PlantPrimalSunflower::~PlantPrimalSunflower(PlantPrimalSunflower *this)

{
  *(undefined ***)this = &PTR_GetClass_067f9f10;
  PlantSunflower::~PlantSunflower((PlantSunflower *)this);
  return;
}


/* PlantPrimalSunflower::~PlantPrimalSunflower() */

void __thiscall PlantPrimalSunflower::~PlantPrimalSunflower(PlantPrimalSunflower *this)

{
  ~PlantPrimalSunflower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalSunflower::UpdateActions() */

void __thiscall PlantPrimalSunflower::UpdateActions(PlantPrimalSunflower *this)

{
  int iVar1;
  char cVar2;
  RtObject *this_00;
  PlantAnimRig_PrimalSunflower *pPVar3;
  long lVar4;
  float fVar5;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  lVar4 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar2 = FUN_041879e4(lVar4);
  if (cVar2 == '\0') {
    PlantSunflower::UpdateActions((PlantSunflower *)this);
  }
  else if (*(int *)(lVar4 + 200) == 4) {
    fVar5 = (float)PVZ_T();
    if (*(float *)(*(UIEasyButtonWidget **)(this + 0x10) + 300) < fVar5) {
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_PrimalSunflower>(this_00);
      if ((pPVar3 != (PlantAnimRig_PrimalSunflower *)0x0) && (*(int *)(this + 0x34) < 3)) {
        iVar1 = *(int *)(this + 0x34) + 1;
        *(int *)(this + 0x34) = iVar1;
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnAnimStopped);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<PlantPrimalSunflower,void(PlantPrimalSunflower::*)(std::string_const&)>
                  (aDStack_38,aCStack_50);
        PlantAnimRig_PrimalSunflower::PlayLevel5Sun(pPVar3,iVar1,aDStack_38);
      }
      Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalSunflower::GenerateLevel5Sun() */

void __thiscall PlantPrimalSunflower::GenerateLevel5Sun(PlantPrimalSunflower *this)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  PlantAction *pPVar5;
  uint uVar6;
  string *__n;
  int iVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = asStack_18;
  bVar2 = true;
  iVar7 = 0x4b;
  lVar3 = FUN_04188d48(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar3 + 0x2e0);
  std::string::string(asStack_10,"sun_large");
  nop();
  for (; 0 < iVar1; iVar1 = iVar1 - iVar7) {
    while (uVar4 = PlantFramework::Rand((PlantFramework *)this), iVar1 < iVar7) {
      if (iVar7 == 0x4b) {
        iVar7 = 0x32;
        std::string::append(asStack_10,"sun",(size_t)__n);
      }
      else if (iVar7 == 0x32) {
        iVar7 = 0x19;
        std::string::append(asStack_10,"sun_medium",(size_t)__n);
      }
      else {
        iVar7 = 5;
        std::string::append(asStack_10,"sun_small",(size_t)__n);
      }
    }
    if ((!bVar2 && iVar7 != 5) &&
       (uVar6 = (uint)(uVar4 >> 0x1f) & 1, ((int)uVar4 + uVar6 & 1) != uVar6)) {
      if (iVar7 == 0x4b) {
        iVar7 = 0x32;
        std::string::append(asStack_10,"sun",(size_t)__n);
      }
      else if (iVar7 == 0x32) {
        iVar7 = 0x19;
        std::string::append(asStack_10,"sun_medium",(size_t)__n);
      }
      else {
        iVar7 = 5;
        std::string::append(asStack_10,"sun_small",(size_t)__n);
      }
    }
    bVar2 = false;
    lVar3 = FUN_04188d48(*(undefined8 *)(this + 0x10));
    pPVar5 = (PlantAction *)FUN_04187ac0(*(undefined8 *)(lVar3 + 0x70));
    __n = asStack_10;
    PlantSunflower::ProduceSun((PlantSunflower *)this,pPVar5,asStack_10);
  }
  Plant::ProduceExtraSun(*(Plant **)(this + 0x10));
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalSunflower::OnAnimStopped(std::string const&) */

void __thiscall PlantPrimalSunflower::OnAnimStopped(PlantPrimalSunflower *this,string *param_1)

{
  char cVar1;
  RtObject *this_00;
  PlantAnimRig_PrimalSunflower *this_01;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_PrimalSunflower>(this_00);
  if (this_01 != (PlantAnimRig_PrimalSunflower *)0x0) {
    PlantAnimRig_PrimalSunflower::getLevel5Sun1(this_01);
    cVar1 = std::operator==(asStack_50,param_1);
    std::string::~string(asStack_50);
    if (cVar1 == '\0') {
      PlantAnimRig_PrimalSunflower::getLevel5Sun2(this_01);
      cVar1 = std::operator==(asStack_50,param_1);
      std::string::~string(asStack_50);
      if (cVar1 == '\0') {
        PlantAnimRig_PrimalSunflower::getLevel5Sun3(this_01);
        cVar1 = std::operator==(asStack_50,param_1);
        std::string::~string(asStack_50);
        if (cVar1 == '\0') {
          PlantAnimRig_PrimalSunflower::getLevel5CoolDown(this_01);
          cVar1 = std::operator==(asStack_50,param_1);
          std::string::~string(asStack_50);
          if (cVar1 != '\0') {
            lVar3 = *(long *)this_01;
            *(undefined4 *)(this + 0x34) = 0;
            (**(code **)(lVar3 + 0x118))(this_01);
          }
        }
        else {
          GenerateLevel5Sun(this);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,OnAnimStopped);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<PlantPrimalSunflower,void(PlantPrimalSunflower::*)(std::string_const&)>
                    (aDStack_38,asStack_50);
          PlantAnimRig_PrimalSunflower::PlayLevel5CoolDown(this_01,aDStack_38);
        }
        goto LAB_0418905c;
      }
    }
    pcVar4 = *(code **)(*(long *)this + 0x1e8);
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    uVar2 = FUN_04187ac0(*(undefined8 *)(lVar3 + 0x70));
    (*pcVar4)(this,uVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_50);
    (**(code **)(*(long *)this_01 + 0x118))(this_01);
  }
LAB_0418905c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalSunflower::DoSpecial(int) */

void PlantPrimalSunflower::DoSpecial(int param_1)

{
  char cVar1;
  PlantSunflower *this;
  long lVar2;
  PlantAction *pPVar3;
  undefined8 uVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (PlantSunflower *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(this + 0x28)) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar3 = (PlantAction *)FUN_04187ac0(*(undefined8 *)(lVar2 + 0x70));
    PlantSunflower::ProduceSun(this,pPVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (*(int *)(this + 0x28) == 0) {
      MessageRouter::Post<BoardEntity*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::SunProductionTriggered,
                 *(Plant **)(this + 0x10));
      Plant::ProduceExtraSun(*(Plant **)(this + 0x10));
    }
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if ((cVar1 != '\0') && (0 < *(int *)(this + 0x30))) {
    pcVar5 = *(code **)(*(long *)this + 0x538);
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    uVar4 = FUN_04187ac0(*(undefined8 *)(lVar2 + 0x70));
    std::string::string((string *)aRStack_10,"large_coin_gold");
    (*pcVar5)(this,uVar4,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + -1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPrimalSunflower::ProduceSun(PlantAction const&) */

void PlantPrimalSunflower::ProduceSun(PlantAction *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  PlantAction *pPVar5;
  Plant *pPVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_1 + 0x1f0))();
  if (cVar2 == '\0') goto LAB_04189350;
  lVar4 = FUN_04188d48(*(undefined8 *)(param_1 + 0x10));
  pPVar5 = (PlantAction *)FUN_04187ac0(*(undefined8 *)(lVar4 + 0x70));
  lVar4 = FUN_04188d48(*(undefined8 *)(param_1 + 0x10));
  PlantSunflower::ProduceSun((PlantSunflower *)param_1,pPVar5,(string *)(lVar4 + 0x2c0));
  cVar2 = Plant::IsInHomeWorld();
  if (cVar2 != '\0') {
    lVar4 = FUN_04188d48(*(undefined8 *)(param_1 + 0x10));
    pPVar5 = (PlantAction *)FUN_04187ac0(*(undefined8 *)(lVar4 + 0x70));
    lVar4 = FUN_04188d48(*(undefined8 *)(param_1 + 0x10));
    PlantSunflower::ProduceSun((PlantSunflower *)param_1,pPVar5,(string *)(lVar4 + 0x2d8));
  }
  pPVar6 = *(Plant **)(param_1 + 0x10);
  iVar3 = FUN_041879dc(pPVar6);
  if (iVar3 == 2) {
    fVar8 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
    lVar4 = FUN_04188d48(*(undefined8 *)(param_1 + 0x10));
    pPVar6 = *(Plant **)(param_1 + 0x10);
    fVar9 = *(float *)(lVar4 + 0x2cc);
    iVar3 = FUN_041879dc(pPVar6);
    if (2 < iVar3) goto LAB_041894c0;
    bVar1 = fVar8 < fVar9;
LAB_04189438:
    if (bVar1) {
      lVar4 = FUN_04188d48(pPVar6);
      iVar3 = *(int *)(lVar4 + 0x2c8);
      if (0 < iVar3) {
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 1;
          lVar4 = FUN_04188d48(*(undefined8 *)(param_1 + 0x10));
          pPVar5 = (PlantAction *)FUN_04187ac0(*(undefined8 *)(lVar4 + 0x70));
          std::string::string(asStack_10,"sun_small");
          PlantSunflower::ProduceSun((PlantSunflower *)param_1,pPVar5,asStack_10);
          std::string::~string(asStack_10);
          nop();
        } while (iVar7 != iVar3);
      }
      pPVar6 = *(Plant **)(param_1 + 0x10);
    }
  }
  else if (2 < iVar3) {
LAB_041894c0:
    fVar8 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
    lVar4 = FUN_04188d48(*(undefined8 *)(param_1 + 0x10));
    pPVar6 = *(Plant **)(param_1 + 0x10);
    bVar1 = fVar8 < *(float *)(lVar4 + 0x2d0);
    goto LAB_04189438;
  }
  MessageRouter::Post<BoardEntity*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::SunProductionTriggered,pPVar6);
  Plant::ProduceExtraSun(*(Plant **)(param_1 + 0x10));
LAB_04189350:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


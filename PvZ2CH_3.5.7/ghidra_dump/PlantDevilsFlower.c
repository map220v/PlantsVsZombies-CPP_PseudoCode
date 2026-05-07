// Class: PlantDevilsFlower


/* PlantDevilsFlower::onKilled(bool) */

void PlantDevilsFlower::onKilled(bool param_1)

{
  MessageRouter::Post<Plant*,int,Plant*,int>
            ((MessageRouter *)gMessageRouter,Message::PlantDieCostChanged,
             *(Plant **)((ulong)param_1 + 0x10),0);
  return;
}


/* PlantDevilsFlower::OnPlantMoving(Plant*, Sexy::Point&) */

void PlantDevilsFlower::OnPlantMoving(Plant *param_1,Point *param_2)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::StaticClassInit() */

void PlantDevilsFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDevilsFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_04d66b84,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDevilsFlower::StaticGetClass() */

long * PlantDevilsFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDevilsFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDevilsFlower::GetClass() const */

long * PlantDevilsFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDevilsFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDevilsFlower::IsInParasiteStandby() */

bool __thiscall PlantDevilsFlower::IsInParasiteStandby(PlantDevilsFlower *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 0xe;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GetIdleName() */

void PlantDevilsFlower::GetIdleName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_04d6172c(*(undefined1 *)(in_x0 + 0x38));
  if (cVar2 == '\0') {
    __s = "idle01";
  }
  else {
    __s = "idle01_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GetSpawnStartName() */

void PlantDevilsFlower::GetSpawnStartName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_04d6172c(*(undefined1 *)(in_x0 + 0x38));
  if (cVar2 == '\0') {
    __s = "attack_start";
  }
  else {
    __s = "attack_start_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GetSpawnLoopName() */

void PlantDevilsFlower::GetSpawnLoopName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_04d6172c(*(undefined1 *)(in_x0 + 0x38));
  if (cVar2 == '\0') {
    __s = "attack_loop";
  }
  else {
    __s = "attack_loop_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GetSpawnParasiteName() */

void PlantDevilsFlower::GetSpawnParasiteName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_04d6172c(*(undefined1 *)(in_x0 + 0x38));
  if (cVar2 == '\0') {
    __s = "attack_over";
  }
  else {
    __s = "attack_over_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GetParasiteStandbyName() */

void __thiscall PlantDevilsFlower::GetParasiteStandbyName(PlantDevilsFlower *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle02");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GetAbsorbStartName() */

void PlantDevilsFlower::GetAbsorbStartName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_04d6172c(*(undefined1 *)(in_x0 + 0x38));
  if (cVar2 == '\0') {
    __s = "absorb_start";
  }
  else {
    __s = "absorb_start_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GetAbsorbLoopName() */

void PlantDevilsFlower::GetAbsorbLoopName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_04d6172c(*(undefined1 *)(in_x0 + 0x38));
  if (cVar2 == '\0') {
    __s = "absorb_loop";
  }
  else {
    __s = "absorb_loop_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GetAbsorbEndName() */

void PlantDevilsFlower::GetAbsorbEndName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_04d6172c(*(undefined1 *)(in_x0 + 0x38));
  if (cVar2 == '\0') {
    __s = "absorb_over";
  }
  else {
    __s = "absorb_over_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GetAbsorbFailName() */

void PlantDevilsFlower::GetAbsorbFailName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = FUN_04d6172c(*(undefined1 *)(in_x0 + 0x38));
  if (cVar2 == '\0') {
    __s = "absorb_fail";
  }
  else {
    __s = "absorb_fail_lv5";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDevilsFlower::CalcParasiteType(bool) */

undefined1 __thiscall PlantDevilsFlower::CalcParasiteType(PlantDevilsFlower *this,bool param_1)

{
  return param_1;
}


/* PlantDevilsFlower::PlantDevilsFlower() */

void __thiscall PlantDevilsFlower::PlantDevilsFlower(PlantDevilsFlower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069b41b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* PlantDevilsFlower::StaticNew() */

PlantDevilsFlower * PlantDevilsFlower::StaticNew(void)

{
  PlantDevilsFlower *this;
  
  this = ::operator_new(0x40);
  PlantDevilsFlower(this);
  return this;
}


/* PlantDevilsFlower::~PlantDevilsFlower() */

void __thiscall PlantDevilsFlower::~PlantDevilsFlower(PlantDevilsFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_069b41b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDevilsFlower::~PlantDevilsFlower() */

void __thiscall PlantDevilsFlower::~PlantDevilsFlower(PlantDevilsFlower *this)

{
  ~PlantDevilsFlower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GetRefundSunAmount() */

void PlantDevilsFlower::GetRefundSunAmount(void)

{
  int iVar1;
  RtObject *this;
  PlantTypeDevilsFlower *pPVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pPVar2 = Sexy::RtObject::Cast<PlantTypeDevilsFlower>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (pPVar2 == (PlantTypeDevilsFlower *)0x0) {
    fVar3 = 0.0;
  }
  else {
    iVar1 = (**(code **)(*(long *)pPVar2 + 0x98))(pPVar2);
    fVar3 = (float)iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}


/* PlantDevilsFlower::CalcSuperParasiteEnable() */

byte __thiscall PlantDevilsFlower::CalcSuperParasiteEnable(PlantDevilsFlower *this)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x10);
  iVar2 = FUN_04d616b8(*(undefined4 *)(lVar3 + 0x50));
  lVar3 = FUN_04d65188(lVar3);
  bVar1 = FUN_04d61a04(lVar3 + 0x2b8);
  return bVar1 & iVar2 == 5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::Initialize() */

void __thiscall PlantDevilsFlower::Initialize(PlantDevilsFlower *this)

{
  int iVar1;
  PlantDevilsFlower PVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  PlantAnimRig_DevilsFlower *pPVar6;
  ulong uVar7;
  undefined8 *puVar8;
  CthulhuSubSystem *pCVar9;
  long lVar10;
  undefined4 uVar11;
  CthulhuSubSystem *pCVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  pPVar6 = (PlantAnimRig_DevilsFlower *)FUN_04d65100(*(undefined8 *)(this + 0x10));
  if (pPVar6 != (PlantAnimRig_DevilsFlower *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    PlantAnimRig_DevilsFlower::SetPlantPtr(pPVar6,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  lVar10 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar10 + 200) = 10;
  uVar11 = PVZ_EOT();
  uVar5 = *(undefined4 *)(lVar10 + 0x50);
  *(undefined4 *)(this + 0x34) = uVar11;
  uVar4 = FUN_04d616b8(uVar5);
  FUN_04d65188(lVar10);
  PVar2 = (PlantDevilsFlower)CalcSuperParasiteEnable(this);
  this[0x38] = PVar2;
  iVar1 = uVar4 - 1;
  if (-1 < iVar1) {
    FUN_04d61708((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10,*(undefined8 *)(this + 0x10));
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar7 = FUN_04d61904(*(undefined8 *)(lVar10 + 0x208),*(undefined8 *)(lVar10 + 0x210));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if ((ulong)(long)iVar1 < uVar7) {
      FUN_04d61708((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10,*(undefined8 *)(this + 0x10));
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
      ;
      puVar8 = (undefined8 *)FUN_04d61910(*(undefined8 *)(lVar10 + 0x208),(long)iVar1);
                    /* WARNING: Load size is inaccurate */
      pCVar12._0_4_ = *puVar8;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_04d65364;
    }
  }
  pCVar12._0_4_ = (CthulhuSubSystem *)0x3f800000;
LAB_04d65364:
  cVar3 = (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x328))(*(long **)(gLawnApp + 0x9f0));
  if (cVar3 == '\0') {
    Sexy::StrFormat("devilsflower%d",(string *)aRStack_18,(ulong)uVar4);
    pCVar9 = Board::GetGameSubSystem<CthulhuSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    FUN_05475d88((string *)aRStack_10,(string *)aRStack_18);
    CthulhuSubSystem::InitButton(pCVar12._0_4_,pCVar9,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    std::string::~string((string *)aRStack_18);
  }
  uVar5 = FUN_04d616bc(*(undefined4 *)(*(long *)(this + 0x10) + 0x294));
  *(undefined4 *)(this + 0x3c) = uVar5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDevilsFlower::CalcAbsorbDuration(bool) */

undefined4 __thiscall PlantDevilsFlower::CalcAbsorbDuration(PlantDevilsFlower *this,bool param_1)

{
  long lVar1;
  
  lVar1 = FUN_04d65188(*(undefined8 *)(this + 0x10));
  if (!param_1) {
    return *(undefined4 *)(lVar1 + 0x2e4);
  }
  return *(undefined4 *)(lVar1 + 0x2e8);
}


/* PlantDevilsFlower::CalcParasiteParam(bool) */

float __thiscall PlantDevilsFlower::CalcParasiteParam(PlantDevilsFlower *this,bool param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_04d65188(*(undefined8 *)(this + 0x10));
  if (param_1) {
    fVar3 = *(float *)(lVar1 + 0x2f0);
    fVar2 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    BoardConstants::GRIDSQUARE_WIDTH();
    PVZ_Dt();
    return fVar2 * fVar3;
  }
  fVar3 = *(float *)(lVar1 + 0x2ec);
  fVar2 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  BoardConstants::GRIDSQUARE_WIDTH();
  PVZ_Dt();
  return fVar2 * fVar3;
}


/* PlantDevilsFlower::registerForEvents() */

void __thiscall PlantDevilsFlower::registerForEvents(PlantDevilsFlower *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantMoving);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Plant*,Sexy::Point&,Sexy::CBMemberTranslatorX<PlantDevilsFlower,void(PlantDevilsFlower::*)(Plant*,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PlantMoving,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DevilsParasiteTurnBack);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,bool,bool,Sexy::CBMemberTranslatorX<PlantDevilsFlower,void(PlantDevilsFlower::*)(Plant*,bool,bool)>>
            ((MessageRouter *)puVar1,Message::DevilsParasiteTurnBack,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::SetState(int) */

void __thiscall PlantDevilsFlower::SetState(PlantDevilsFlower *this,int param_1)

{
  PlantDevilsFlower PVar1;
  PlantAnimRig_DevilsFlower *pPVar2;
  RealObject *this_00;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == *(int *)(*(long *)(this + 0x10) + 200)) goto switchD_04d65ab8_default;
  FUN_04d65188();
  pPVar2 = (PlantAnimRig_DevilsFlower *)FUN_04d65100(*(undefined8 *)(this + 0x10));
  this_00 = *(RealObject **)(this + 0x10);
  *(int *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 10:
    PVar1 = (PlantDevilsFlower)CalcSuperParasiteEnable(this);
    this[0x38] = PVar1;
    GetIdleName();
    PlantAnimRig_DevilsFlower::playLoopAnimation(pPVar2,asStack_58);
    std::string::~string(asStack_58);
    goto switchD_04d65ab8_default;
  case 0xb:
    GetSpawnStartName();
    break;
  case 0xc:
    std::string::string(asStack_58,"Play_Plant_Devilsflower_Spawn_Loop");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    GetSpawnLoopName();
    PlantAnimRig_DevilsFlower::playLoopAnimation(pPVar2,asStack_58);
    std::string::~string(asStack_58);
    goto switchD_04d65ab8_default;
  case 0xd:
    std::string::string(asStack_58,"Play_Plant_Devilsflower_Spawn_Parasite");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    GetSpawnParasiteName();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_WizardThorns::PlayTapAnimation
              ((PlantAnimRig_WizardThorns *)pPVar2,asStack_70,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    goto LAB_04d65b54;
  case 0xe:
    GetParasiteStandbyName(this);
    goto LAB_04d65b80;
  case 0xf:
    GetAbsorbStartName();
    break;
  case 0x10:
    GetAbsorbLoopName();
LAB_04d65b80:
    PlantAnimRig_DevilsFlower::playLoopAnimation(pPVar2,asStack_58);
    std::string::~string(asStack_58);
    goto switchD_04d65ab8_default;
  case 0x11:
    GetAbsorbEndName();
    break;
  case 0x12:
    GetAbsorbFailName();
    break;
  default:
    goto switchD_04d65ab8_default;
  }
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_WizardThorns::PlayTapAnimation
            ((PlantAnimRig_WizardThorns *)pPVar2,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
LAB_04d65b54:
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
switchD_04d65ab8_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::UpdateActions() */

void __thiscall PlantDevilsFlower::UpdateActions(PlantDevilsFlower *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  long *plVar4;
  float fVar5;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x28));
  if (bVar2) {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
    (**(code **)(*plVar4 + 0x80))();
  }
  cVar3 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar3 != '\0') goto LAB_04d65de4;
  iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  if (iVar1 == 0xc) {
    fVar5 = (float)PVZ_T();
    if (fVar5 <= *(float *)(this + 0x30)) goto LAB_04d65de4;
    Plant::FindTarget(aRStack_10,*(undefined8 *)(this + 0x10),0);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar3 == '\0') {
      SetState(this,10);
    }
    else {
      SetState(this,0xd);
    }
  }
  else {
    if (iVar1 == 0x10) {
      fVar5 = (float)PVZ_T();
      if (*(float *)(this + 0x34) < fVar5) {
        SetState(this,0x11);
      }
      goto LAB_04d65de4;
    }
    if (iVar1 != 10) goto LAB_04d65de4;
    Plant::FindTarget(aRStack_10);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    if (cVar3 != '\0') {
      SetState(this,0xb);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_04d65de4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantDevilsFlower::onAnimStoppedCallback(PlantDevilsFlower *this,string *param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d65188(*(undefined8 *)(this + 0x10));
  GetSpawnStartName();
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    GetSpawnParasiteName();
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 == '\0') {
      GetAbsorbStartName();
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      if (cVar1 == '\0') {
        GetAbsorbEndName();
        cVar1 = std::operator==(param_1,asStack_10);
        std::string::~string(asStack_10);
        if (cVar1 == '\0') {
          GetAbsorbFailName();
          cVar1 = std::operator==(param_1,asStack_10);
          std::string::~string(asStack_10);
          if (cVar1 == '\0') goto LAB_04d65fec;
        }
        SetState(this,10);
      }
      else {
        SetState(this,0x10);
      }
    }
    else {
      SetState(this,0xe);
    }
  }
  else {
    SetState(this,0xc);
    lVar2 = FUN_04d65188(*(undefined8 *)(this + 0x10));
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x30) = fVar3 + *(float *)(lVar2 + 0x2d8);
  }
LAB_04d65fec:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDevilsFlower::DevilsParasiteTurnBack(Plant*, bool, bool) */

void __thiscall
PlantDevilsFlower::DevilsParasiteTurnBack
          (PlantDevilsFlower *this,Plant *param_1,bool param_2,bool param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(Plant **)(this + 0x10) == param_1) &&
     (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 == '\0')) {
    if (!param_3) {
      SetState(this,0x12);
      return;
    }
    uVar2 = CalcAbsorbDuration(this,param_2);
    *(undefined4 *)(this + 0x34) = uVar2;
    SetState(this,0xf);
    return;
  }
  return;
}


/* PlantDevilsFlower::DarkEffectFlyEnd(float) */

void PlantDevilsFlower::DarkEffectFlyEnd(float param_1)

{
  long in_x0;
  
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(in_x0 + 0x28));
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::CthulhuAbsorbDark,*(Plant **)(in_x0 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::IsZombieBlacklisted(Sexy::RtWeakPtr<Zombie>, std::vector<std::string,
   std::allocator<std::string > > const&) */

void __thiscall
PlantDevilsFlower::IsZombieBlacklisted(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_04d648c0(*param_3);
  uVar3 = FUN_04d64910(param_3[1]);
  local_18 = FUN_04d6756c(uVar2,uVar3,param_2);
  local_10 = FUN_04d64910(param_3[1]);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::IsAbsorbTarget(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall PlantDevilsFlower::IsAbsorbTarget(PlantDevilsFlower *this,RtWeakPtr *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  GameObject *this_00;
  undefined8 uVar4;
  long *plVar5;
  Zombie *pZVar6;
  long lVar7;
  int local_18;
  int local_14;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  BoardEntity::CalcGridPosition();
  this_00 = (GameObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  cVar1 = GameObject::IsDestroyed(this_00);
  if (cVar1 == '\0') {
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    cVar1 = RealObject::IsOnTeam(uVar4,2);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      cVar1 = Creature::IsOnBoard();
      if (cVar1 != '\0') {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        cVar1 = (**(code **)(*plVar5 + 0x328))();
        if (cVar1 == '\0') {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
          cVar1 = (**(code **)(*plVar5 + 0x330))();
          if (cVar1 == '\0') {
            pZVar6 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
            cVar1 = Zombie::HasHead(pZVar6);
            if (cVar1 != '\0') {
              pZVar6 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
              iVar3 = Zombie::GetSizeType(pZVar6);
              if (iVar3 != 2) {
                pZVar6 = (Zombie *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                cVar1 = Zombie::IsControlled(pZVar6);
                if (cVar1 == '\0') {
                  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                  cVar1 = FUN_02fd47ac(*(undefined4 *)(lVar7 + 0xcc));
                  if (cVar1 == '\0') {
                    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                    cVar1 = Zombie::HasCondition(uVar4,0x2e);
                    if (cVar1 == '\0') {
                      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                      cVar1 = Zombie::HasCondition(uVar4,0x5a);
                      if (cVar1 == '\0') {
                        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                  (aRStack_10,(RtWeakPtrBase *)param_1);
                        lVar7 = FUN_04d65188(*(undefined8 *)(this + 0x10));
                        cVar1 = IsZombieBlacklisted(this,aRStack_10,lVar7 + 0x2c0);
                        bVar2 = 0;
                        if (cVar1 == '\0') {
                          pZVar6 = (Zombie *)
                                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                             ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          cVar1 = Zombie::IsOnBoardOrClose(pZVar6,1);
                          if (cVar1 != '\0') {
                            plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                            cVar1 = (**(code **)(*plVar5 + 0x338))();
                            if ((cVar1 == '\0') &&
                               (cVar1 = PlantFramework::CanTargetGrid
                                                  ((PlantFramework *)this,local_18,local_14),
                               cVar1 != '\0')) {
                              pZVar6 = (Zombie *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                              cVar1 = Zombie::HasFogImmune(pZVar6);
                              if (cVar1 == '\0') {
                                pZVar6 = (Zombie *)
                                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                                cVar1 = Zombie::IsBerserk(pZVar6);
                                if (cVar1 == '\0') {
                                  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                             ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                              param_1);
                                  cVar1 = (**(code **)(*plVar5 + 0x4d8))();
                                  if (cVar1 == '\0') {
                                    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                               ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                                param_1);
                                    cVar1 = (**(code **)(*plVar5 + 0x508))();
                                    if (cVar1 == '\0') {
                                      pZVar6 = (Zombie *)
                                               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                         ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                                      bVar2 = Zombie::IsParkourJumping(pZVar6);
                                      bVar2 = bVar2 ^ 1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                        goto LAB_04d67684;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = 0;
LAB_04d67684:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::PlayDarkEffect(Sexy::SexyVector2 const&) */

void __thiscall PlantDevilsFlower::PlayDarkEffect(PlantDevilsFlower *this,SexyVector2 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *extraout_x0;
  char *pcVar3;
  code *pcVar4;
  float fVar5;
  FastCurve aFStack_70 [8];
  FastCurve aFStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  FastCurve aFStack_58 [8];
  undefined4 local_50;
  float local_4c;
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04d61ed8();
  Sexy::FastCurve::SetOutRange(aFStack_70,(float)iVar1,(float)iVar1);
  iVar1 = FUN_04d61f10();
  Sexy::FastCurve::SetOutRange(aFStack_68,(float)iVar1,(float)iVar1);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_60)
  ;
  local_60 = 0x43480000;
  local_5c = 0x43200000;
  fVar5 = 160.0 - (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  Sexy::FastCurve::SetOutRange
            (aFStack_58,200.0 - (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48),fVar5);
  uVar2 = AddCthulhuEnergyEffect::StaticGetClass();
  GameObject::Create(uVar2,0x27);
  nop();
  pcVar4 = *(code **)(*extraout_x0 + 0x88);
  local_50 = Sexy::SexyVector2::operator+(param_1,(SexyVector2 *)aFStack_70);
  local_4c = fVar5;
  (*pcVar4)(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pcVar4 = *(code **)(*extraout_x0 + 0x90);
  local_50 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_60,(SexyVector2 *)aFStack_68);
  local_4c = fVar5;
  (*pcVar4)(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pcVar4 = *(code **)(*extraout_x0 + 0xa0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DarkEffectFlyEnd);
  Sexy::Delegate1<float>::Delegate1<PlantDevilsFlower,void(PlantDevilsFlower::*)(float)>
            (aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  (*pcVar4)(extraout_x0,aDStack_38);
  (**(code **)(*extraout_x0 + 0x78))(extraout_x0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x28),(RtWeakPtrBase *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_PVP_Battle_Get_Energy");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::CancelPlantfood() */

void __thiscall PlantDevilsFlower::CancelPlantfood(PlantDevilsFlower *this)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  lVar2 = *(long *)(this + 0x10);
  if (*(int *)(lVar2 + 200) - 0xfU < 4) {
    uVar3 = *(undefined4 *)(lVar2 + 0x1c);
    local_10 = FUN_04d61a50(*(undefined4 *)(lVar2 + 0x18),uVar3,*(undefined4 *)(lVar2 + 0x20));
    local_c = uVar3;
    local_10 = FUN_04d61eec();
    local_c = FUN_04d61eec(uVar3);
    PlayDarkEffect(this,(SexyVector2 *)&local_10);
  }
  cVar1 = IsInParasiteStandby(this);
  if (cVar1 == '\0') {
    SetState(this,10);
  }
  else {
    SetState(this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::SpawnDevilsGargantuar() */

void __thiscall PlantDevilsFlower::SpawnDevilsGargantuar(PlantDevilsFlower *this)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  string *psVar5;
  ZombieType *this_00;
  Zombie *this_01;
  undefined8 *puVar6;
  PopAnimRig *pPVar7;
  char *__s;
  long *plVar8;
  code *pcVar9;
  string asStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [12];
  int local_4c;
  string asStack_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    __s = "devils_alien_gargantuar";
  }
  else {
    __s = "super_devils_alien_gargantuar";
  }
  std::string::string(asStack_60,__s);
  nop();
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_30 = FUN_04d616b8(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  local_2b = 1;
  local_29 = 1;
  local_2c = 0;
  plVar8 = *(long **)(gLawnApp + 0x9f0);
  pcVar9 = *(code **)(*plVar8 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_58);
  this_01 = (Zombie *)
            (*pcVar9)(plVar8,(RtWeakPtr<Sexy::SoundResource> *)&local_40,0,
                      (RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  if (this_01 != (Zombie *)0x0) {
    puVar6 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    local_40 = *puVar6;
    local_38 = *(undefined4 *)(puVar6 + 1);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    local_40 = CONCAT44(local_40._4_4_,(float)(iVar4 << 1) + (float)local_40);
    BoardEntity::CalcGridPosition();
    iVar4 = BoardTransforms::GridToBoardSpaceY(local_4c);
    local_40 = CONCAT44((float)iVar4,(float)local_40);
    (**(code **)(*(long *)this_01 + 0x278))(this_01,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
    RealObject::JoinTeam((RealObject *)this_01,1);
    Zombie::SetFacing(this_01,1);
    pPVar7 = (PopAnimRig *)Zombie::GetAnimRig(this_01);
    std::string::string(asStack_48,"Zombie_gargantuar_telephonepole_04");
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    bVar1 = false;
    if (cVar2 != '\0') {
      bVar1 = *(int *)(this + 0x3c) == 1;
    }
    PopAnimRig::SetLayerVisibility(pPVar7,asStack_48,bVar1);
    std::string::~string(asStack_48);
    nop();
    pPVar7 = (PopAnimRig *)Zombie::GetAnimRig(this_01);
    std::string::string(asStack_48,"Zombie_gargantuar_telephonepole_05");
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    bVar1 = false;
    if (cVar2 != '\0') {
      bVar1 = *(int *)(this + 0x3c) == 1;
    }
    PopAnimRig::SetLayerVisibility(pPVar7,asStack_48,bVar1);
    std::string::~string(asStack_48);
    nop();
    pPVar7 = (PopAnimRig *)Zombie::GetAnimRig(this_01);
    std::string::string(asStack_48,"Zombie_gargantuar_telephonepole_03");
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    bVar1 = false;
    if (cVar2 != '\0') {
      bVar1 = *(int *)(this + 0x3c) == 0;
    }
    PopAnimRig::SetLayerVisibility(pPVar7,asStack_48,bVar1);
    std::string::~string(asStack_48);
    nop();
    pPVar7 = (PopAnimRig *)Zombie::GetAnimRig(this_01);
    std::string::string(asStack_48,"Zombie_gargantuar_telephonepole_02");
    bVar1 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    PopAnimRig::SetLayerVisibility(pPVar7,asStack_48,bVar1);
    std::string::~string(asStack_48);
    nop();
    pPVar7 = (PopAnimRig *)Zombie::GetAnimRig(this_01);
    std::string::string(asStack_48,"Zombie_gargantuar_telephonepole_01");
    bVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    PopAnimRig::SetLayerVisibility(pPVar7,asStack_48,(bool)(bVar3 ^ 1));
    std::string::~string(asStack_48);
    nop();
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::GenerateParasite(bool, Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlantDevilsFlower::GenerateParasite(PlantDevilsFlower *this,bool param_1,RtMixedPtrBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  DevilsParasiteEntity *pDVar4;
  float *pfVar5;
  RtObject *this_00;
  Zombie *this_01;
  PopAnimRig *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_5c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_38 [4];
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_3);
  if (cVar1 != '\0') {
    pDVar4 = GameObject::Create<DevilsParasiteEntity>();
    DVec3::DVec3((DVec3 *)&local_48);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    fVar8 = pfVar5[1] - 97.0;
    uVar9 = 0x41f00000;
    local_48 = *pfVar5 - 30.0;
    local_40 = 0;
    local_44 = fVar8;
    (**(code **)(*(long *)pDVar4 + 0x78))(pDVar4,(DVec3 *)&local_48);
    uVar2 = CalcParasiteType(this,param_1);
    local_28 = CalcParasiteParam(this,param_1);
    local_24 = fVar8;
    local_20 = uVar9;
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)local_38);
    DevilsParasiteEntity::DevilsParasiteInitialize
              (local_28,local_24,local_20,pDVar4,uVar2,aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    Sexy::Insets::Insets((Insets *)aRStack_18);
    this_02 = (PopAnimRig *)Zombie::GetAnimRig(this_01);
    std::string::string((string *)local_38,"butter");
    PopAnimRig::CalcSymbolRect(this_02,(string *)local_38,(TRect *)aRStack_18);
    std::string::~string((string *)local_38);
    nop();
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)local_68,(TPoint *)local_38);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_01);
    fVar8 = *pfVar5;
    fVar10 = pfVar5[1];
    DVec3::DVec3((DVec3 *)local_38);
    iVar3 = FUN_04d61efc(local_68[0]);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(this_01);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    local_38[0] = (float)iVar3 - *(float *)(lVar7 + 0xc4);
    pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
    local_38[0] = -25.0;
    local_38[1] = -80.0;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_60,fVar8 - 25.0,fVar10 - 80.0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_58);
    DevilsParasiteEntity::SetTarget(pDVar4,aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    DevilsParasiteEntity::MoveToTarget(local_60,local_5c,pDVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::OnAnimCommand(std::string const&, std::string const&) */

void PlantDevilsFlower::OnAnimCommand(string *param_1,string *param_2)

{
  string sVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  undefined4 uVar5;
  RtMixedPtrBase aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04d65188(*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*(long *)param_1 + 0x180))(param_1);
  bVar2 = std::operator==(param_2,"use_action");
  if (bVar2) {
    Plant::FindTarget(aRStack_18,*(undefined8 *)(param_1 + 0x10),0);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar3 == '\0') {
      SetState((PlantDevilsFlower *)param_1,10);
    }
    else {
      sVar1 = param_1[0x38];
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_18);
      GenerateParasite((PlantDevilsFlower *)param_1,sVar1,
                       (RtWeakPtr<Sexy::SoundResource> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  else {
    bVar2 = std::operator==(param_2,"use_action_plantfood");
    if (bVar2) {
      SpawnDevilsGargantuar((PlantDevilsFlower *)param_1);
    }
    else {
      bVar2 = std::operator==(param_2,"dark_effect_action");
      if (bVar2) {
        lVar4 = *(long *)(param_1 + 0x10);
        uVar5 = *(undefined4 *)(lVar4 + 0x1c);
        local_10 = FUN_04d61a50(*(undefined4 *)(lVar4 + 0x18),uVar5,*(undefined4 *)(lVar4 + 0x20));
        local_c = uVar5;
        local_10 = FUN_04d61eec();
        local_c = FUN_04d61eec(uVar5);
        PlayDarkEffect((PlantDevilsFlower *)param_1,(SexyVector2 *)&local_10);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::FindAttackTargets(Sexy::TRect<int>) */

void PlantDevilsFlower::FindAttackTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               PlantDevilsFlower *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  Zombie *extraout_x0;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_58;
  undefined8 local_50;
  Zombie *local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,param_3);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (cVar1 == '\0') {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      nop();
      local_48 = extraout_x0;
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
      if (bVar2) {
        pcVar5 = *(code **)(*(long *)local_48 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
        cVar1 = (*pcVar5)(local_48,aRStack_30,0);
        if (cVar1 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        }
        else {
          cVar1 = IsAbsorbTarget(param_2,(RtWeakPtr *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          if (cVar1 != '\0') {
            std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                      ((vector<Zombie*,std::allocator<Zombie*>> *)param_1,&local_48);
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)param_1);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
    BoardEntity::CalcGridPosition();
    EntityFinder::BoardEntitySorter_Closest::BoardEntitySorter_Closest
              ((BoardEntitySorter_Closest *)aRStack_30,aRStack_38);
    std::
    sort<__gnu_cxx::__normal_iterator<Zombie**,std::vector<Zombie*,std::allocator<Zombie*>>>,EntityFinder::BoardEntitySorter_Closest>
              (uVar3,uVar4,aRStack_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDevilsFlower::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void PlantDevilsFlower::FindTargetZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               undefined8 param_1,Insets *param_3)

{
  long lVar1;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_30,param_3);
  FindAttackTargets((vector<Zombie*,std::allocator<Zombie*>> *)&local_20,param_1,aIStack_30);
  lVar1 = FUN_04d61918(local_20,local_18);
  if (lVar1 == 0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1_00);
  }
  else {
    FUN_04d61a34(local_20,lVar1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aIStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


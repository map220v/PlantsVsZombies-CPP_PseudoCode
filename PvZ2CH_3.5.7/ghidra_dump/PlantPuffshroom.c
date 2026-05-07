// Class: PlantPuffshroom


/* PlantPuffshroom::IsVanishing() const */

bool __thiscall PlantPuffshroom::IsVanishing(PlantPuffshroom *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 10;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPuffshroom::StaticClassInit() */

void PlantPuffshroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPuffshroom");
    (*pcVar2)(plVar1,asStack_10,FUN_0420cfc0,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPuffshroom::StaticGetClass() */

long * PlantPuffshroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPuffshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPuffshroom::GetClass() const */

long * PlantPuffshroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPuffshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPuffshroom::isPlantDecayPaused() */

bool __thiscall PlantPuffshroom::isPlantDecayPaused(PlantPuffshroom *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  return *(float *)(this + 100) < fVar1;
}


/* PlantPuffshroom::shouldPlantDecayBePaused() */

void __thiscall PlantPuffshroom::shouldPlantDecayBePaused(PlantPuffshroom *this)

{
  char cVar1;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    return;
  }
  Board::IsPlantGrowthAndDecayPaused(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* PlantPuffshroom::IsInvincible() const */

bool __thiscall PlantPuffshroom::IsInvincible(PlantPuffshroom *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 10;
}


/* PlantPuffshroom::onAnimStoppedCallback(std::string const&) */

void PlantPuffshroom::onAnimStoppedCallback(string *param_1)

{
  char cVar1;
  
  cVar1 = IsVanishing((PlantPuffshroom *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  Plant::KillPlant(*(Plant **)(param_1 + 0x10),1,0,0x8000000000);
  return;
}


/* PlantPuffshroom::FindTargetAndFire(PlantWeapon) */

undefined8 __thiscall PlantPuffshroom::FindTargetAndFire(PlantPuffshroom *this,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsVanishing(this);
  if ((cVar1 == '\0') && (cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0)), cVar1 != '\0')) {
    uVar2 = PlantFramework::FindTargetAndFire(this,param_2);
    return uVar2;
  }
  return 0;
}


/* PlantPuffshroom::canStateChange() */

byte __thiscall PlantPuffshroom::canStateChange(PlantPuffshroom *this)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    bVar1 = Board::IsPlantGrowthAndDecayPaused(*(Board **)(gLawnApp + 0x9f0));
    cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    if (cVar2 != '\0') {
      bVar3 = (**(code **)(*(long *)this + 0x180))(this);
      return (bVar3 | bVar1) ^ 1;
    }
  }
  return 0;
}


/* PlantPuffshroom::onPlantDecayPaused() */

void __thiscall PlantPuffshroom::onPlantDecayPaused(PlantPuffshroom *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 100) = uVar1;
  return;
}


/* PlantPuffshroom::onPlantDecayResumed() */

void __thiscall PlantPuffshroom::onPlantDecayResumed(PlantPuffshroom *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  
  cVar1 = shouldPlantDecayBePaused(this);
  if ((cVar1 == '\0') && (cVar1 = isPlantDecayPaused(this), cVar1 != '\0')) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x60) = (*(float *)(this + 0x60) - *(float *)(this + 100)) + fVar2;
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 100) = uVar3;
    return;
  }
  return;
}


/* PlantPuffshroom::NotifySetHidden(bool, bool) */

void __thiscall PlantPuffshroom::NotifySetHidden(PlantPuffshroom *this,bool param_1,bool param_2)

{
  if (param_2 < param_1) {
    onPlantDecayPaused(this);
    return;
  }
  if (param_2 <= param_1) {
    return;
  }
  onPlantDecayResumed(this);
  return;
}


/* PlantPuffshroom::Initialize() */

void __thiscall PlantPuffshroom::Initialize(PlantPuffshroom *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0x28));
  this[0x5c] = (PlantPuffshroom)0x1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x60) = uVar1;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 100) = uVar1;
  return;
}


/* PlantPuffshroom::CancelPlantfood() */

void __thiscall PlantPuffshroom::CancelPlantfood(PlantPuffshroom *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x88))();
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  if (this[0x5c] != (PlantPuffshroom)0x0) {
    return;
  }
  Plant::HidePlantfoodAnimationEffect(*(Plant **)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPuffshroom::PlantPuffshroom() */

void __thiscall PlantPuffshroom::PlantPuffshroom(PlantPuffshroom *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0680a8c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  ZombossSkyCityLineShoot::ZombossSkyCityLineShoot((ZombossSkyCityLineShoot *)(this + 0x40));
  this[0x5c] = (PlantPuffshroom)0x1;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x60) = uVar2;
  *(undefined4 *)(this + 100) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPuffshroomGotPlantfood);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,Sexy::CBMemberTranslatorX<PlantPuffshroom,void(PlantPuffshroom::*)(Sexy::Point_const&)>>
            ((MessageRouter *)puVar1,Message::PuffshroomGotPlantfood,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDecayPaused);
  Sexy::Delegate0::Delegate0<PlantPuffshroom,void(PlantPuffshroom::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantGrowthAndDecayPaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDecayResumed);
  Sexy::Delegate0::Delegate0<PlantPuffshroom,void(PlantPuffshroom::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantGrowthAndDecayResumed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPuffshroom::StaticNew() */

PlantPuffshroom * PlantPuffshroom::StaticNew(void)

{
  PlantPuffshroom *this;
  
  this = ::operator_new(0x70);
  PlantPuffshroom(this);
  return this;
}


/* PlantPuffshroom::CanApplyPlantfood() */

void __thiscall PlantPuffshroom::CanApplyPlantfood(PlantPuffshroom *this)

{
  std::vector<float,std::allocator<float>>::empty
            ((vector<float,std::allocator<float>> *)(this + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPuffshroom::ApplyPlantfood() */

void __thiscall PlantPuffshroom::ApplyPlantfood(PlantPuffshroom *this)

{
  undefined *puVar1;
  Point aPStack_10 [8];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  s_PuffshroomPlantfoodedSimultaneous = 0;
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x10) + 0x110),
                     *(int *)(*(long *)(this + 0x10) + 0x114));
  MessageRouter::Broadcast<Sexy::Point_const&,Sexy::Point>
            ((MessageRouter *)puVar1,Message::PuffshroomGotPlantfood,aPStack_10);
  if (0x13 < s_PuffshroomPlantfoodedSimultaneous) {
    std::string::string((string *)aPStack_10,"fungus_humongous");
    Achievement::Queue((string *)aPStack_10,100.0);
    std::string::~string((string *)aPStack_10);
    nop();
    Achievement::ShowAll();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPuffshroom::doPlantfoodEffect() */

void __thiscall PlantPuffshroom::doPlantfoodEffect(PlantPuffshroom *this)

{
  long *plVar1;
  long lVar2;
  UIEasyButtonWidget *this_00;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 4;
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  (**(code **)(*plVar1 + 0x80))(0x41200000);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  if (this[0x5c] == (PlantPuffshroom)0x0) {
    Plant::HidePlantfoodAnimationEffect(*(Plant **)(this + 0x10));
  }
  FUN_0420c9c4(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar3 = *(float *)(lVar2 + 0x38);
  lVar2 = FUN_0420d764(*(undefined8 *)(this + 0x10));
  ZombossSkyCityLineShoot::Start
            ((ZombossSkyCityLineShoot *)(this + 0x40),fVar3,*(int *)(lVar2 + 0x2b8),1.0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPuffshroom::GetExpirationDurationSeconds() */

float __thiscall PlantPuffshroom::GetExpirationDurationSeconds(PlantPuffshroom *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_0420d764(*(undefined8 *)(this + 0x10));
  fVar3 = *(float *)(lVar1 + 700);
  fVar2 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  return fVar2 + fVar3;
}


/* PlantPuffshroom::decayStageHasEnded(int) */

bool __thiscall PlantPuffshroom::decayStageHasEnded(PlantPuffshroom *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)GetExpirationDurationSeconds(this);
  fVar3 = (float)PlantAnimRig_Puffshroom::NUMBER_OF_DECAY_STAGES;
  fVar2 = (float)PVZ_T();
  return (float)(long)((fVar1 * (float)(param_1 + 1)) / fVar3) + *(float *)(this + 0x60) <= fVar2;
}


/* PlantPuffshroom::hasNoExpiration() */

bool __thiscall PlantPuffshroom::hasNoExpiration(PlantPuffshroom *this)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar1 = FUN_0420c9c0(uVar2);
    if ((lVar1 != 0) && (lVar1 = FUN_0420dcac(uVar2), lVar1 != 0)) {
      return true;
    }
  }
  fVar3 = (float)GetExpirationDurationSeconds(this);
  if (fVar3 <= 0.0) {
    return true;
  }
  fVar3 = (float)GetExpirationDurationSeconds(this);
  fVar4 = (float)PVZ_EOT();
  return fVar3 == fVar4;
}


/* PlantPuffshroom::getExpireTime() */

undefined1  [16] __thiscall PlantPuffshroom::getExpireTime(PlantPuffshroom *this)

{
  char cVar1;
  undefined4 extraout_s0;
  float fVar2;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar4;
  undefined1 auVar3 [16];
  
  cVar1 = hasNoExpiration(this);
  if ((cVar1 == '\0') && (cVar1 = isPlantDecayPaused(this), cVar1 == '\0')) {
    fVar4 = *(float *)(this + 0x60);
    fVar2 = (float)GetExpirationDurationSeconds(this);
    return ZEXT416((uint)(fVar2 + fVar4));
  }
  PVZ_EOT();
  auVar3._4_4_ = extraout_var;
  auVar3._0_4_ = extraout_s0;
  auVar3._8_8_ = extraout_var_00;
  return auVar3;
}


/* PlantPuffshroom::GetPlantAttackRect(PlantWeapon) */

long PlantPuffshroom::GetPlantAttackRect(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  PlantFramework::GetPlantAttackRect();
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar2 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar1 = FUN_0420c9c0(uVar2);
    if ((lVar1 != 0) && (lVar1 = FUN_0420dcac(uVar2), lVar1 != 0)) {
      *(undefined4 *)(param_1 + 8) = 800;
    }
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPuffshroom::UpdatePlantfood() */

void __thiscall PlantPuffshroom::UpdatePlantfood(PlantPuffshroom *this)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  PlantAction *pPVar4;
  ulong uVar5;
  Plant *pPVar6;
  undefined8 uVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  cVar1 = std::vector<PlantAction,std::allocator<PlantAction>>::empty
                    ((vector<PlantAction,std::allocator<PlantAction>> *)(lVar2 + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (cVar1 != '\0') goto LAB_0420de5c;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar3,pfVar3[1],pfVar3[2]);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
LAB_0420deb8:
    uVar7 = 0;
  }
  else {
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    uVar5 = FUN_0420c9f4(*(undefined8 *)(lVar2 + 0x70),*(undefined8 *)(lVar2 + 0x78));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    if (uVar5 < 2) goto LAB_0420deb8;
    uVar7 = 1;
    Sexy::OutputDebugStrF((wchar_t *)"ghzhou PlantPuffshroom UpdatePlantfood Call");
  }
  pPVar6 = *(Plant **)(this + 0x10);
  fVar8 = *(float *)(pPVar6 + 0xc4);
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  pPVar4 = (PlantAction *)FUN_0420ca08(*(undefined8 *)(lVar2 + 0x70),uVar7);
  PeashooterPlantfood::Update
            ((PeashooterPlantfood *)(this + 0x40),pPVar6,(SexyVector3 *)aRStack_18,fVar8,pPVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
LAB_0420de5c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPuffshroom::updateDecay() */

void __thiscall PlantPuffshroom::updateDecay(PlantPuffshroom *this)

{
  char cVar1;
  PlantAnimRig_Puffshroom *pPVar2;
  long lVar3;
  int iVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = hasNoExpiration(this);
  iVar4 = 0;
  if (cVar1 == '\0') {
    while (cVar1 = decayStageHasEnded(this,iVar4), cVar1 != '\0') {
      iVar4 = iVar4 + 1;
    }
    if ((*(int *)(this + 0x68) != iVar4) && (cVar1 = canStateChange(this), cVar1 != '\0')) {
      *(int *)(this + 0x68) = iVar4;
      if (iVar4 < PlantAnimRig_Puffshroom::NUMBER_OF_DECAY_STAGES) {
        pPVar2 = (PlantAnimRig_Puffshroom *)FUN_0420dc98(*(undefined8 *)(this + 0x10));
        PlantAnimRig_Puffshroom::SetLevel(pPVar2,*(int *)(this + 0x68));
      }
      else {
        lVar3 = *(long *)(this + 0x10);
        *(undefined4 *)(lVar3 + 200) = 10;
        pPVar2 = (PlantAnimRig_Puffshroom *)FUN_0420dc98(lVar3);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        PlantAnimRig_Puffshroom::Vanish(pPVar2,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantPuffshroom::~PlantPuffshroom() */

void __thiscall PlantPuffshroom::~PlantPuffshroom(PlantPuffshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_0680a8c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPuffshroom::~PlantPuffshroom() */

void __thiscall PlantPuffshroom::~PlantPuffshroom(PlantPuffshroom *this)

{
  ~PlantPuffshroom(this);
  AK::FreeHook(this);
  return;
}


/* PlantPuffshroom::triggerPlantfoodFromColony() */

void __thiscall PlantPuffshroom::triggerPlantfoodFromColony(PlantPuffshroom *this)

{
  char cVar1;
  char cVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar3 = FUN_0420d764(*(undefined8 *)(this + 0x10));
  cVar1 = removeExpiredEntries((vector *)(this + 0x28));
  cVar2 = IsVanishing(this);
  if (cVar2 == '\0') {
    if (cVar1 == '\0') {
      return;
    }
    if (*(char *)(lVar3 + 0x2cc) == '\0') {
      this[0x5c] = (PlantPuffshroom)0x0;
      doPlantfoodEffect(this);
      return;
    }
  }
  else if ((*(char *)(lVar3 + 0x2cc) == '\0') || (cVar1 == '\0')) {
    return;
  }
  uVar4 = PVZ_T();
  this[0x5c] = (PlantPuffshroom)0x0;
  *(undefined4 *)(this + 0x60) = uVar4;
  doPlantfoodEffect(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0420e578 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantPuffshroom::UpdateActions() */

void __thiscall PlantPuffshroom::UpdateActions(PlantPuffshroom *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  PopAnimRig *pPVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 extraout_var [12];
  undefined4 local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar2 != '\0') {
    triggerPlantfoodFromColony(this);
    updateDecay(this);
  }
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0xff);
  PopAnimRig::SetPAMColor(pPVar3,(Color *)local_18);
  fVar6 = (float)getExpireTime(this);
  fVar7 = (float)PVZ_EOT();
  if (fVar6 < fVar7) {
    fVar7 = (float)PVZ_T();
    fVar6 = fVar6 - fVar7;
    lVar4 = FUN_0420d764(*(undefined8 *)(this + 0x10));
    if ((0.0 < fVar6) && (fVar6 < *(float *)(lVar4 + 0x2c0))) {
      fVar6 = fmodf(fVar6,0.3);
      local_1c = 0;
      local_18[0] = 0x3f800000;
      auVar1._4_12_ = extraout_var;
      auVar1._0_4_ = fVar6;
      fVar6 = CurveLerp<float>(auVar1,0x3e99999a,fVar6,&local_1c,(Insets *)local_18,0xe);
      iVar5 = 0xff;
      if (fVar6 <= 0.236) {
        iVar5 = 0;
      }
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,iVar5);
      PopAnimRig::SetPAMColor(pPVar3,(Color *)local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPuffshroom::onPuffshroomGotPlantfood(Sexy::Point const&) */

void __thiscall PlantPuffshroom::onPuffshroomGotPlantfood(PlantPuffshroom *this,Point *param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  s_PuffshroomPlantfoodedSimultaneous = s_PuffshroomPlantfoodedSimultaneous + 1;
  Sexy::Point::Point((Point *)&local_10,*(int *)(*(long *)(this + 0x10) + 0x110),
                     *(int *)(*(long *)(this + 0x10) + 0x114));
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)&local_10,(TPoint *)param_1);
  if (cVar1 == '\0') {
    lVar2 = FUN_0420d764(*(undefined8 *)(this + 0x10));
    fVar3 = (float)Distance2D((float)local_10,(float)local_c,(float)*(int *)param_1,
                              (float)*(int *)(param_1 + 4));
    fVar6 = *(float *)(lVar2 + 0x2c4);
    fVar7 = *(float *)(lVar2 + 0x2c8);
    fVar4 = (float)PVZ_T();
    local_14 = fVar4 + fVar6 + fVar7 * fVar3;
    std::vector<float,std::allocator<float>>::push_back
              ((vector<float,std::allocator<float>> *)(this + 0x28),&local_14);
  }
  else {
    uVar5 = PVZ_T();
    this[0x5c] = (PlantPuffshroom)0x1;
    *(undefined4 *)(this + 0x60) = uVar5;
    doPlantfoodEffect(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


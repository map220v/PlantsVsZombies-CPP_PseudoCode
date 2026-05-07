// Class: PlantSunshroom


/* PlantSunshroom::onAnimStoppedCallback(std::string const&) */

void PlantSunshroom::onAnimStoppedCallback(string *param_1)

{
  long lVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)param_1);
  lVar1 = FUN_04070654(*(undefined8 *)(param_1 + 0x10));
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(lVar1 + 0x2b8);
  param_1[0x2c] = (string)0x1;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 200) = 5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunshroom::StaticClassInit() */

void PlantSunshroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSunshroom");
    (*pcVar2)(plVar1,asStack_10,FUN_0420eb5c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunshroom::StaticGetClass() */

long * PlantSunshroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSunshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunshroom::GetClass() const */

long * PlantSunshroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSunshroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunshroom::~PlantSunshroom() */

void __thiscall PlantSunshroom::~PlantSunshroom(PlantSunshroom *this)

{
  *(undefined ***)this = &PTR_GetClass_0680ae00;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PlantSunflower::~PlantSunflower((PlantSunflower *)this);
  return;
}


/* PlantSunshroom::~PlantSunshroom() */

void __thiscall PlantSunshroom::~PlantSunshroom(PlantSunshroom *this)

{
  ~PlantSunshroom(this);
  AK::FreeHook(this);
  return;
}


/* PlantSunshroom::onPlantGrowthPaused() */

void __thiscall PlantSunshroom::onPlantGrowthPaused(PlantSunshroom *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* PlantSunshroom::onPlantGrowthResumed() */

void __thiscall PlantSunshroom::onPlantGrowthResumed(PlantSunshroom *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x30) = (*(float *)(this + 0x30) - *(float *)(this + 0x34)) + fVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunshroom::PlantSunshroom() */

void __thiscall PlantSunshroom::PlantSunshroom(PlantSunshroom *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantSunflower::PlantSunflower((PlantSunflower *)this);
  *(undefined ***)this = &PTR_GetClass_0680ae00;
  uVar2 = PVZ_EOT();
  this[0x38] = (PlantSunshroom)0x0;
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x34) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantGrowthPaused);
  Sexy::Delegate0::Delegate0<PlantSunshroom,void(PlantSunshroom::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantGrowthAndDecayPaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantGrowthResumed);
  Sexy::Delegate0::Delegate0<PlantSunshroom,void(PlantSunshroom::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantGrowthAndDecayResumed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunshroom::StaticNew() */

PlantSunshroom * PlantSunshroom::StaticNew(void)

{
  PlantSunshroom *this;
  
  this = ::operator_new(0x40);
  PlantSunshroom(this);
  return this;
}


/* PlantSunshroom::GetGrowthTime(int) */

float __thiscall PlantSunshroom::GetGrowthTime(PlantSunshroom *this,int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  lVar2 = FUN_0420f550(*(undefined8 *)(this + 0x10));
  if (lVar2 == 0) {
    return 0.0;
  }
  uVar5 = *(undefined8 *)(lVar2 + 0x2c8);
  fVar6 = 0.0;
  uVar3 = FUN_0420e880(uVar5,*(undefined8 *)(lVar2 + 0x2d0));
  if ((ulong)(long)param_1 < uVar3) {
    lVar4 = FUN_0420e88c(uVar5);
    fVar6 = *(float *)(lVar4 + 8);
    iVar1 = FUN_0420e870(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  }
  else {
    iVar1 = FUN_0420e870(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  }
  if (iVar1 != 2) {
    if (1 < iVar1) {
      fVar6 = fVar6 * *(float *)(lVar2 + 0x2e4);
    }
    return fVar6;
  }
  return fVar6 * *(float *)(lVar2 + 0x2e0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunshroom::getMaxGrowthStage() */

void __thiscall PlantSunshroom::getMaxGrowthStage(PlantSunshroom *this)

{
  long lVar1;
  int *piVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0420f550(*(undefined8 *)(this + 0x10));
  local_10 = 0;
  local_c = FUN_0420e880(*(undefined8 *)(lVar1 + 0x2c8),*(undefined8 *)(lVar1 + 0x2d0));
  local_c = local_c + -1;
  piVar2 = eastl::max_alt<int>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar2);
}


/* PlantSunshroom::isFullyGrown() */

bool __thiscall PlantSunshroom::isFullyGrown(PlantSunshroom *this)

{
  uint uVar1;
  
  uVar1 = getMaxGrowthStage(this);
  return uVar1 == (byte)this[0x38];
}


/* PlantSunshroom::NotifySetHidden(bool, bool) */

void __thiscall PlantSunshroom::NotifySetHidden(PlantSunshroom *this,bool param_1,bool param_2)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = FUN_0420f550(*(undefined8 *)(this + 0x10));
  if ((lVar2 != 0) && (param_1 < param_2)) {
    cVar1 = isFullyGrown(this);
    if (cVar1 == '\0') {
      fVar4 = (float)PVZ_T();
      fVar5 = (float)GetGrowthTime(this,(uint)(byte)this[0x38]);
      *(float *)(this + 0x30) = fVar5 + fVar4;
      return;
    }
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x30) = uVar3;
  }
  return;
}


/* PlantSunshroom::Initialize() */

void __thiscall PlantSunshroom::Initialize(PlantSunshroom *this)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  PlantSunflower::Initialize((PlantSunflower *)this);
  this[0x38] = (PlantSunshroom)0x0;
  lVar2 = FUN_0420f550(*(undefined8 *)(this + 0x10));
  cVar1 = std::
          vector<SunshroomProps::SunshroomGrowthStates,std::allocator<SunshroomProps::SunshroomGrowthStates>>
          ::empty((vector<SunshroomProps::SunshroomGrowthStates,std::allocator<SunshroomProps::SunshroomGrowthStates>>
                   *)(lVar2 + 0x2c8));
  if (cVar1 != '\0') {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x30) = uVar3;
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 0x34) = uVar3;
    return;
  }
  fVar4 = (float)PVZ_T();
  fVar5 = (float)GetGrowthTime(this,0);
  *(float *)(this + 0x30) = fVar5 + fVar4;
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar3;
  return;
}


/* PlantSunshroom::getCollectableTypeName() */

void PlantSunshroom::getCollectableTypeName(void)

{
  char cVar1;
  long in_x0;
  long lVar2;
  
  lVar2 = FUN_0420f550(*(undefined8 *)(in_x0 + 0x10));
  cVar1 = std::
          vector<SunshroomProps::SunshroomGrowthStates,std::allocator<SunshroomProps::SunshroomGrowthStates>>
          ::empty((vector<SunshroomProps::SunshroomGrowthStates,std::allocator<SunshroomProps::SunshroomGrowthStates>>
                   *)(lVar2 + 0x2c8));
  if (cVar1 != '\0') {
    FUN_0420f550(*(undefined8 *)(in_x0 + 0x10));
    FUN_05475d88();
    return;
  }
  lVar2 = FUN_0420f550(*(undefined8 *)(in_x0 + 0x10));
  FUN_0420e88c(*(undefined8 *)(lVar2 + 0x2c8),*(undefined1 *)(in_x0 + 0x38));
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunshroom::setGrowthStage(int, RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantSunshroom::setGrowthStage(PlantSunshroom *this,int param_1,RtReflectionDelegate *param_3)

{
  PlantSunshroom PVar1;
  int *piVar2;
  PlantAnimRig_Sunshroom *extraout_x0;
  int local_64 [3];
  int local_58 [2];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_58[1] = 0;
  local_8 = ___stack_chk_guard;
  local_64[0] = param_1;
  local_58[0] = getMaxGrowthStage(this);
  piVar2 = eastl::min_alt<int>(local_58,local_64);
  piVar2 = eastl::max_alt<int>(local_58 + 1,piVar2);
  this[0x38] = SUB41(*piVar2,0);
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  PVar1 = this[0x38];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  PlantAnimRig_Sunshroom::SetGrowthStage(extraout_x0,PVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunshroom::UpdateActions() */

void __thiscall PlantSunshroom::UpdateActions(PlantSunshroom *this)

{
  PlantSunshroom PVar1;
  char cVar2;
  long lVar3;
  Board *this_00;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) == 4) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    cVar2 = Board::IsPlaying(this_00);
    if ((((cVar2 != '\0') && (cVar2 = Board::IsPlantGrowthAndDecayPaused(this_00), cVar2 == '\0'))
        && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x30) < fVar4)) &&
       (lVar3 = FUN_0420f550(*(undefined8 *)(this + 0x10)), lVar3 != 0)) {
      PVar1 = this[0x38];
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      setGrowthStage(this,(byte)PVar1 + 1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      cVar2 = isFullyGrown(this);
      if (cVar2 == '\0') {
        fVar4 = (float)PVZ_T();
        fVar6 = (float)GetGrowthTime(this,(uint)(byte)this[0x38]);
        *(float *)(this + 0x30) = fVar6 + fVar4;
      }
      else {
        uVar5 = PVZ_EOT();
        *(undefined4 *)(this + 0x30) = uVar5;
      }
    }
  }
  PlantSunflower::UpdateActions((PlantSunflower *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunshroom::ApplyPlantfood() */

void __thiscall PlantSunshroom::ApplyPlantfood(PlantSunshroom *this)

{
  char cVar1;
  undefined4 uVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isFullyGrown(this);
  if (cVar1 == '\0') {
    Plant::StartPlantfoodState(*(Plant **)(this + 0x10));
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
    uVar2 = getMaxGrowthStage(this);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    setGrowthStage(this,uVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this[0x2c] = (PlantSunshroom)0x1;
  }
  else {
    PlantSunflower::ApplyPlantfood((PlantSunflower *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunshroom::ProduceSun(PlantAction const&) */

void __thiscall PlantSunshroom::ProduceSun(PlantSunshroom *this,PlantAction *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  cVar2 = (**(code **)(*(long *)this + 0x1f0))();
  if (cVar2 != '\0') {
    if (*(int *)(*(Plant **)(this + 0x10) + 200) != 5) {
      Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      FUN_0420f550(*(undefined8 *)(this + 0x10));
      PlantSunflower::ProduceSun((PlantSunflower *)this,param_1);
      return;
    }
    lVar3 = FUN_0420f550();
    iVar1 = *(int *)(lVar3 + 0x2b8);
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    lVar3 = FUN_0420f550(*(undefined8 *)(this + 0x10));
    fVar6 = *(float *)(lVar3 + 0x2e8);
    if (0 < iVar1) {
      iVar4 = 0;
      if (cVar2 == '\0') {
        do {
          iVar4 = iVar4 + 1;
          PlantSunflower::ProduceSun((PlantSunflower *)this,param_1);
          if (this[0x2c] != (PlantSunshroom)0x0) {
            MessageRouter::Post<BoardEntity*,Plant*>
                      ((MessageRouter *)gMessageRouter,Message::SunProductionTriggered,
                       *(Plant **)(this + 0x10));
            this[0x2c] = (PlantSunshroom)0x0;
          }
        } while (iVar4 < iVar1);
      }
      else {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          PlantSunflower::ProduceSun((PlantSunflower *)this,param_1);
          if (this[0x2c] == (PlantSunshroom)0x0) {
            fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
          }
          else {
            MessageRouter::Post<BoardEntity*,Plant*>
                      ((MessageRouter *)gMessageRouter,Message::SunProductionTriggered,
                       *(Plant **)(this + 0x10));
            this[0x2c] = (PlantSunshroom)0x0;
            fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
          }
          if (fVar5 < fVar6) {
            (**(code **)(*(long *)this + 0x528))(this,param_1);
          }
        } while (iVar4 < iVar1);
      }
    }
  }
  return;
}


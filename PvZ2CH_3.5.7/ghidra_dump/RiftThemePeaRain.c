// Class: RiftThemePeaRain


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePeaRain::StaticClassInit() */

void RiftThemePeaRain::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemePeaRain");
    (*pcVar2)(plVar1,asStack_10,FUN_03702554,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemePeaRain::StaticGetClass() */

long * RiftThemePeaRain::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemePeaRain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePeaRain::GetClass() const */

long * RiftThemePeaRain::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemePeaRain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePeaRain::~RiftThemePeaRain() */

void __thiscall RiftThemePeaRain::~RiftThemePeaRain(RiftThemePeaRain *this)

{
  *(undefined ***)this = &PTR_GetClass_06689640;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemePeaRain::~RiftThemePeaRain() */

void __thiscall RiftThemePeaRain::~RiftThemePeaRain(RiftThemePeaRain *this)

{
  ~RiftThemePeaRain(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemePeaRain::RiftThemePeaRain() */

void __thiscall RiftThemePeaRain::RiftThemePeaRain(RiftThemePeaRain *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06689640;
  RainDropper::RainDropper((RainDropper *)(this + 0x1c));
  return;
}


/* RiftThemePeaRain::StaticNew() */

RiftThemePeaRain * RiftThemePeaRain::StaticNew(void)

{
  RiftThemePeaRain *this;
  
  this = ::operator_new(0x38);
  RiftThemePeaRain(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePeaRain::onZombieDamageTaken(Zombie*, DamageInfo const&) */

void __thiscall
RiftThemePeaRain::onZombieDamageTaken(RiftThemePeaRain *this,Zombie *param_1,DamageInfo *param_2)

{
  char cVar1;
  bool bVar2;
  long extraout_x0;
  Plant *pPVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((0.0 < *(float *)(param_2 + 8)) && (cVar1 = FUN_036f758c(this[0x30]), cVar1 == '\0')) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    if ((*(RtObject **)param_2 != (RtObject *)0x0) &&
       (((bVar2 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_2), bVar2 &&
         (pPVar3 = Sexy::RtObject::Cast<Plant>(*(RtObject **)param_2), pPVar3 != (Plant *)0x0)) &&
        (cVar1 = PlantRestrictionSet::IsIncluded((Plant *)(extraout_x0 + 0x28)), cVar1 != '\0')))) {
      fVar6 = *(float *)(extraout_x0 + 0x50);
      fVar5 = *(float *)(param_2 + 8) + *(float *)(this + 0x34);
      *(float *)(this + 0x34) = fVar5;
      if (fVar6 <= fVar5) {
        PeaRainDropper::Start
                  ((PeaRainDropper *)(this + 0x1c),*(float *)(extraout_x0 + 0x24),
                   *(int *)(extraout_x0 + 0x20));
        fVar5 = 0.0;
        fVar6 = *(float *)(extraout_x0 + 0x50);
        *(undefined4 *)(this + 0x34) = 0;
      }
      local_10[0] = 0x42c80000;
      local_14 = (fVar5 / fVar6) * 100.0;
      pfVar4 = eastl::min_alt<float>(&local_14,(float *)local_10);
      MessageRouter::Post<float,float>((_func_void_float *)gMessageRouter,*pfVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemePeaRain::Update() */

void __thiscall RiftThemePeaRain::Update(RiftThemePeaRain *this)

{
  PeaRainDropper::Update((PeaRainDropper *)(this + 0x1c));
  return;
}


/* RiftThemePeaRain::Activate() */

void __thiscall RiftThemePeaRain::Activate(RiftThemePeaRain *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  RiftTheme::Activate((RiftTheme *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieDamageTaken);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const&,Sexy::CBMemberTranslatorX<RiftThemePeaRain,void(RiftThemePeaRain::*)(Zombie*,DamageInfo_const&)>>
            ((MessageRouter *)puVar1,Message::ZombieDamageTaken,&local_40);
  return;
}


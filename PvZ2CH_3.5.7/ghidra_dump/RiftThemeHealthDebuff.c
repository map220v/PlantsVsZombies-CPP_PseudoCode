// Class: RiftThemeHealthDebuff


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeHealthDebuff::StaticClassInit() */

void RiftThemeHealthDebuff::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeHealthDebuff");
    (*pcVar2)(plVar1,asStack_10,FUN_036f9268,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeHealthDebuff::StaticGetClass() */

long * RiftThemeHealthDebuff::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeHealthDebuff",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeHealthDebuff::GetClass() const */

long * RiftThemeHealthDebuff::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeHealthDebuff",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeHealthDebuff::~RiftThemeHealthDebuff() */

void __thiscall RiftThemeHealthDebuff::~RiftThemeHealthDebuff(RiftThemeHealthDebuff *this)

{
  *(undefined ***)this = &PTR_GetClass_06686bd0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeHealthDebuff::~RiftThemeHealthDebuff() */

void __thiscall RiftThemeHealthDebuff::~RiftThemeHealthDebuff(RiftThemeHealthDebuff *this)

{
  ~RiftThemeHealthDebuff(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeHealthDebuff::RiftThemeHealthDebuff() */

void __thiscall RiftThemeHealthDebuff::RiftThemeHealthDebuff(RiftThemeHealthDebuff *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06686bd0;
  return;
}


/* RiftThemeHealthDebuff::StaticNew() */

RiftThemeHealthDebuff * RiftThemeHealthDebuff::StaticNew(void)

{
  RiftThemeHealthDebuff *this;
  
  this = ::operator_new(0x20);
  RiftThemeHealthDebuff(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeHealthDebuff::OnCreatePlant(Plant*) */

void __thiscall RiftThemeHealthDebuff::OnCreatePlant(RiftThemeHealthDebuff *this,Plant *param_1)

{
  char cVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = PlantRestrictionSet::IsIncluded((Plant *)(extraout_x0 + 0x20));
    if (cVar1 != '\0') {
      fVar2 = (float)FUN_036f7570(*(undefined4 *)(param_1 + 0xd8));
      Plant::SetHealth(param_1,fVar2 * *(float *)(extraout_x0 + 0x48));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeHealthDebuff::Activate() */

void __thiscall RiftThemeHealthDebuff::Activate(RiftThemeHealthDebuff *this)

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
            ((ReceivedDataCallback *)this,OnCreatePlant);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<RiftThemeHealthDebuff,void(RiftThemeHealthDebuff::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_40);
  return;
}


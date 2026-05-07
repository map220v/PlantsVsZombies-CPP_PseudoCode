// Class: ZombieZoybeanPodGargantuar


/* ZombieZoybeanPodGargantuar::calcEatDamage() */

void ZombieZoybeanPodGargantuar::calcEatDamage(void)

{
  long in_x0;
  long in_x8;
  
  Zombie::calcEatDamage();
  *(float *)(in_x8 + 8) = *(float *)(in_x8 + 8) + *(float *)(in_x0 + 0x80c);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodGargantuar::onTurnedToAsh() */

void __thiscall ZombieZoybeanPodGargantuar::onTurnedToAsh(ZombieZoybeanPodGargantuar *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  long lVar2;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  PopAnim *pPVar3;
  Effect_PopAnim *this_02;
  UIWidget *this_03;
  PopAnimRig *this_04;
  CreatureConditionTracker *this_05;
  float fVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  fVar4 = *(float *)(lVar2 + 0xc4);
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar4 * 1.5,-*(float *)(lVar2 + 200),0.0);
  this_00 = (GameObjectDictionary *)Zombie::GetAttachedEffects((Zombie *)this);
  std::string::string(asStack_20,"ash");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)this + 0x900))(asStack_28,this);
  GetPAMByName(asStack_28);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  AttachedEffect::InitializeWithAnimation(this_01,pPVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  std::string::~string(asStack_28);
  this_02 = (Effect_PopAnim *)AttachedEffect::GetEffect(this_01);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(this_02,0.0,0.0);
  std::string::string(asStack_20,"animation");
  AttachedEffect::PlayAnimAndDestroy(this_01,asStack_20,2);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)this_01 + 0x18))(this_01,this,aVStack_18,1);
  this_03 = (UIWidget *)AttachedEffect::GetEffect(this_01);
  this_04 = (PopAnimRig *)UIWidget::GetAtlasImage(this_03);
  PopAnimRig::SetMirrorX(this_04,true);
  AttachedEffect::SetAttachedSyncClipRect(this_01,true);
  this_05 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this);
  fVar4 = (float)CreatureConditionTracker::GetDrawScale(this_05);
  AttachedEffect::UpdateDynamicScale(fVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodGargantuar::onElectrocuted() */

void __thiscall ZombieZoybeanPodGargantuar::onElectrocuted(ZombieZoybeanPodGargantuar *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  long lVar2;
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  PopAnim *pPVar3;
  Effect_PopAnim *this_02;
  UIWidget *this_03;
  PopAnimRig *this_04;
  CreatureConditionTracker *this_05;
  float fVar4;
  string asStack_28 [8];
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  fVar4 = *(float *)(lVar2 + 0xc4);
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar4 * 1.5,-*(float *)(lVar2 + 200),0.0);
  this_00 = (GameObjectDictionary *)Zombie::GetAttachedEffects((Zombie *)this);
  std::string::string(asStack_20,"ash");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_20);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)this + 0x908))(asStack_28,this);
  GetPAMByName(asStack_28);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  AttachedEffect::InitializeWithAnimation(this_01,pPVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  std::string::~string(asStack_28);
  this_02 = (Effect_PopAnim *)AttachedEffect::GetEffect(this_01);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(this_02,0.0,0.0);
  std::string::string(asStack_20,"animation");
  AttachedEffect::PlayAnimAndDestroy(this_01,asStack_20,2);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)this_01 + 0x18))(this_01,this,aVStack_18,1);
  this_03 = (UIWidget *)AttachedEffect::GetEffect(this_01);
  this_04 = (PopAnimRig *)UIWidget::GetAtlasImage(this_03);
  PopAnimRig::SetMirrorX(this_04,true);
  AttachedEffect::SetAttachedSyncClipRect(this_01,true);
  this_05 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)this);
  fVar4 = (float)CreatureConditionTracker::GetDrawScale(this_05);
  AttachedEffect::UpdateDynamicScale(fVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodGargantuar::StaticClassInit() */

void ZombieZoybeanPodGargantuar::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZoybeanPodGargantuar");
    (*pcVar2)(plVar1,asStack_10,FUN_03460be0,0x830,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZoybeanPodGargantuar::StaticGetClass() */

long * ZombieZoybeanPodGargantuar::StaticGetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZoybeanPodGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZoybeanPodGargantuar::GetClass() const */

long * ZombieZoybeanPodGargantuar::GetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZoybeanPodGargantuar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZoybeanPodGargantuar::ZombieZoybeanPodGargantuar() */

void __thiscall
ZombieZoybeanPodGargantuar::ZombieZoybeanPodGargantuar(ZombieZoybeanPodGargantuar *this)

{
  undefined **__n;
  
  ZombieGargantuar::ZombieGargantuar((ZombieGargantuar *)this);
  __n = &PTR_GetClass_06637320;
  *(undefined ***)this = &PTR_GetClass_06637320;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZoybeanPodGargantuar_06637d78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x810));
  std::string::append((string *)(this + 0xb8),"spawn",(size_t)__n);
  *(undefined4 *)(this + 0x808) = 0;
  *(undefined4 *)(this + 0x80c) = 0;
  return;
}


/* ZombieZoybeanPodGargantuar::StaticNew() */

ZombieZoybeanPodGargantuar * ZombieZoybeanPodGargantuar::StaticNew(void)

{
  ZombieZoybeanPodGargantuar *this;
  
  this = ::operator_new(0x830);
  ZombieZoybeanPodGargantuar(this);
  return this;
}


/* ZombieZoybeanPodGargantuar::onTakeFatalDamage(DamageInfo const&) */

void ZombieZoybeanPodGargantuar::onTakeFatalDamage(DamageInfo *param_1)

{
  MessageRouter::Broadcast<ZombieGargantuar*,ZombieZoybeanPodGargantuar*>
            ((MessageRouter *)gMessageRouter,Message::GargantuarDefeated,
             (ZombieZoybeanPodGargantuar *)param_1);
  return;
}


/* ZombieZoybeanPodGargantuar::~ZombieZoybeanPodGargantuar() */

void __thiscall
ZombieZoybeanPodGargantuar::~ZombieZoybeanPodGargantuar(ZombieZoybeanPodGargantuar *this)

{
  *(undefined ***)this = &PTR_GetClass_06637320;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZoybeanPodGargantuar_06637d78;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x810));
  ZombieGargantuar::~ZombieGargantuar((ZombieGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieZoybeanPodGargantuar::~ZombieZoybeanPodGargantuar() */

void __thiscall
ZombieZoybeanPodGargantuar::~ZombieZoybeanPodGargantuar(ZombieZoybeanPodGargantuar *this)

{
  ~ZombieZoybeanPodGargantuar(this + -0x10);
  return;
}


/* ZombieZoybeanPodGargantuar::~ZombieZoybeanPodGargantuar() */

void __thiscall
ZombieZoybeanPodGargantuar::~ZombieZoybeanPodGargantuar(ZombieZoybeanPodGargantuar *this)

{
  ~ZombieZoybeanPodGargantuar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZoybeanPodGargantuar::~ZombieZoybeanPodGargantuar() */

void __thiscall
ZombieZoybeanPodGargantuar::~ZombieZoybeanPodGargantuar(ZombieZoybeanPodGargantuar *this)

{
  ~ZombieZoybeanPodGargantuar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodGargantuar::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieZoybeanPodGargantuar::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  RtObject *this;
  Plant *pPVar2;
  ZombieZoybeanPodGargantuarProps *pZVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  string *local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"smash_left");
  if (((bVar1) || (bVar1 = std::operator==(param_4,"smash_righ"), bVar1)) &&
     (this = (RtObject *)(**(code **)(*(long *)param_1 + 0x228))(param_1), this != (RtObject *)0x0))
  {
    pPVar2 = Sexy::RtObject::Cast<Plant>(this);
    if (pPVar2 == (Plant *)0x0) {
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      local_68 = param_1;
      pZVar3 = Zombie::GetProps<ZombieZoybeanPodGargantuarProps>((Zombie *)param_1);
      fVar4 = *(float *)(pZVar3 + 0x24c);
      local_60 = (float)Zombie::GetExtraDPSmodifier((Zombie *)param_1);
      local_60 = local_60 * fVar4;
      local_58 = operator|(0x4000000000,0x200000);
      (**(code **)(*(long *)this + 0x110))(this,(DamageInfo *)&local_68);
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
    else {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_68,(RtWeakPtrBase *)aRStack_70);
      Plant::TakeSmashAttack(pPVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


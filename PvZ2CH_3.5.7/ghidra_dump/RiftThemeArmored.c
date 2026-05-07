// Class: RiftThemeArmored


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeArmored::StaticClassInit() */

void RiftThemeArmored::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeArmored");
    (*pcVar2)(plVar1,asStack_10,FUN_036f9c40,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeArmored::StaticGetClass() */

long * RiftThemeArmored::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeArmored",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeArmored::GetClass() const */

long * RiftThemeArmored::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeArmored",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeArmored::~RiftThemeArmored() */

void __thiscall RiftThemeArmored::~RiftThemeArmored(RiftThemeArmored *this)

{
  *(undefined ***)this = &PTR_GetClass_06686f60;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeArmored::~RiftThemeArmored() */

void __thiscall RiftThemeArmored::~RiftThemeArmored(RiftThemeArmored *this)

{
  ~RiftThemeArmored(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeArmored::RiftThemeArmored() */

void __thiscall RiftThemeArmored::RiftThemeArmored(RiftThemeArmored *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06686f60;
  return;
}


/* RiftThemeArmored::StaticNew() */

RiftThemeArmored * RiftThemeArmored::StaticNew(void)

{
  RiftThemeArmored *this;
  
  this = ::operator_new(0x20);
  RiftThemeArmored(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeArmored::syncProps() */

void RiftThemeArmored::syncProps(void)

{
  undefined4 uVar1;
  bool bVar2;
  long extraout_x0;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar1 = *(undefined4 *)(extraout_x0 + 0x40);
  bVar2 = local_8 == ___stack_chk_guard;
  lVar3 = *(long *)(gLawnApp + 0x9f0);
  *(undefined1 *)(lVar3 + 0xdd4) = 1;
  *(undefined4 *)(lVar3 + 0xdd0) = uVar1;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeArmored::isValidKnightingTarget(Zombie*) */

void __thiscall RiftThemeArmored::isValidKnightingTarget(RiftThemeArmored *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  undefined8 uVar5;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if ((((param_1 != (Zombie *)0x0) &&
       (iVar2 = FUN_036f7598(*(undefined4 *)(param_1 + 0xb0)), iVar2 != *(int *)(extraout_x0 + 0x20)
       )) && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0')) {
    pEVar3 = (EntityConditionTracker<Zombie,ZombieConditions> *)Zombie::GetConditionTracker(param_1)
    ;
    cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar3,0x1b);
    if (cVar1 == '\0') {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(extraout_x0 + 0x28));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(extraout_x0 + 0x28));
      while( true ) {
        cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if (!(bool)cVar1) break;
        uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        FUN_05475d88(asStack_20,uVar5);
        cVar1 = std::operator==((string *)(lVar4 + 8),asStack_20);
        if (cVar1 != '\0') {
          std::string::~string(asStack_20);
          break;
        }
        std::string::~string(asStack_20);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
      }
      goto LAB_03708228;
    }
  }
  cVar1 = '\0';
LAB_03708228:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeArmored::onZombieReachLine(Zombie*) */

void __thiscall RiftThemeArmored::onZombieReachLine(RiftThemeArmored *this,Zombie *param_1)

{
  char cVar1;
  long extraout_x0;
  RtObject *this_00;
  ZombieAnimRig_Basic *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    cVar1 = isValidKnightingTarget(this,param_1);
    if (cVar1 != '\0') {
      Zombie::ApplyCondition((Zombie *)0x40a00000,0,param_1,0x1d,1);
                    /* WARNING: Load size is inaccurate */
      Zombie::setHelm(*(Zombie **)(extraout_x0 + 0x24),param_1,*(undefined4 *)(extraout_x0 + 0x20));
      this_00 = (RtObject *)Zombie::GetAnimRig(param_1);
      this_01 = Sexy::RtObject::Cast<ZombieAnimRig_Basic>(this_00);
      if (this_01 != (ZombieAnimRig_Basic *)0x0) {
        ZombieAnimRig_Basic::FlashHelm(this_01);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeArmored::Activate() */

void __thiscall RiftThemeArmored::Activate(RiftThemeArmored *this)

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
            ((ReceivedDataCallback *)this,onZombieReachLine);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<RiftThemeArmored,void(RiftThemeArmored::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieReachLine,&local_40);
  syncProps();
  return;
}


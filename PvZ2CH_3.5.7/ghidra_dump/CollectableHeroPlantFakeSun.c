// Class: CollectableHeroPlantFakeSun


/* CollectableHeroPlantFakeSun::setSunValue(int) */

void __thiscall
CollectableHeroPlantFakeSun::setSunValue(CollectableHeroPlantFakeSun *this,int param_1)

{
  *(int *)(this + 0x1f0) = param_1;
  return;
}


/* CollectableHeroPlantFakeSun::~CollectableHeroPlantFakeSun() */

void __thiscall
CollectableHeroPlantFakeSun::~CollectableHeroPlantFakeSun(CollectableHeroPlantFakeSun *this)

{
  *(undefined ***)this = &PTR_GetClass_06757a20;
  *(undefined ***)(this + 0x10) = &PTR__CollectableHeroPlantFakeSun_06757c70;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableHeroPlantFakeSun::~CollectableHeroPlantFakeSun() */

void __thiscall
CollectableHeroPlantFakeSun::~CollectableHeroPlantFakeSun(CollectableHeroPlantFakeSun *this)

{
  ~CollectableHeroPlantFakeSun(this + -0x10);
  return;
}


/* CollectableHeroPlantFakeSun::~CollectableHeroPlantFakeSun() */

void __thiscall
CollectableHeroPlantFakeSun::~CollectableHeroPlantFakeSun(CollectableHeroPlantFakeSun *this)

{
  ~CollectableHeroPlantFakeSun(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableHeroPlantFakeSun::~CollectableHeroPlantFakeSun() */

void __thiscall
CollectableHeroPlantFakeSun::~CollectableHeroPlantFakeSun(CollectableHeroPlantFakeSun *this)

{
  ~CollectableHeroPlantFakeSun(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableHeroPlantFakeSun::StaticClassInit() */

void CollectableHeroPlantFakeSun::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableHeroPlantFakeSun");
    (*pcVar2)(plVar1,asStack_10,FUN_03c694dc,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableHeroPlantFakeSun::StaticGetClass() */

long * CollectableHeroPlantFakeSun::StaticGetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableHeroPlantFakeSun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableHeroPlantFakeSun::GetClass() const */

long * CollectableHeroPlantFakeSun::GetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableHeroPlantFakeSun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableHeroPlantFakeSun::CollectableHeroPlantFakeSun() */

void __thiscall
CollectableHeroPlantFakeSun::CollectableHeroPlantFakeSun(CollectableHeroPlantFakeSun *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined ***)this = &PTR_GetClass_06757a20;
  *(undefined ***)(this + 0x10) = &PTR__CollectableHeroPlantFakeSun_06757c70;
  return;
}


/* CollectableHeroPlantFakeSun::StaticNew() */

CollectableHeroPlantFakeSun * CollectableHeroPlantFakeSun::StaticNew(void)

{
  CollectableHeroPlantFakeSun *this;
  
  this = ::operator_new(0x1f8);
  CollectableHeroPlantFakeSun(this);
  return this;
}


/* CollectableHeroPlantFakeSun::getSunValue() */

undefined4 __thiscall CollectableHeroPlantFakeSun::getSunValue(CollectableHeroPlantFakeSun *this)

{
  return *(undefined4 *)(this + 0x1f0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableHeroPlantFakeSun::onFinishMotion() */

void __thiscall CollectableHeroPlantFakeSun::onFinishMotion(CollectableHeroPlantFakeSun *this)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  Effect_PopAnim *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  undefined4 uVar5;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Collectable::SetMotionIdle((Collectable *)this);
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),4);
  if (bVar1) {
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x16c) = uVar5;
  }
  cVar2 = Collectable::IsCollecting((Collectable *)this);
  if (cVar2 == '\0') {
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),1);
    if (bVar1) {
      Collectable::TryToCollect((Collectable *)this);
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
      if (*(char *)(lVar3 + 0x90) != '\0') {
        Collectable::SetFlashing((Collectable *)this,true);
        this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        nop();
        std::string::string(asStack_10,"POPANIM_EFFECTS_PRIZE_TWINKLE");
        GetPAMByName(asStack_10);
        std::string::~string(asStack_10);
        nop();
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
        Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
        Effect_PopAnim::SetCentered(this_01,true);
        std::string::string(asStack_10,"animation");
        PVZ_EOT();
        Effect_PopAnim::PlayLoopingAnimation(this_01,asStack_10,0);
        std::string::~string(asStack_10);
        nop();
        if (this_00 != (Effect_PopAnim *)0x0) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x178),
                     (RtWeakPtrBase *)asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)asStack_10);
          StandaloneEffect::SetAttached
                    ((StandaloneEffect *)this_00,(RealObject *)this,(SexyVector2 *)asStack_10,2);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
    }
  }
  else {
    bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0xbc),2);
    if (bVar1) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      Collectable::FinishCollect((Collectable *)this);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: ZombossIceBall


/* ZombossIceBall::onExitState_IceBallMove(ZombieState) */

void ZombossIceBall::onExitState_IceBallMove(Zombie *param_1)

{
  PopAnimRig *this;
  
  this = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  PopAnimRig::SetPaused(this,false);
  return;
}


/* ZombossIceBall::~ZombossIceBall() */

void __thiscall ZombossIceBall::~ZombossIceBall(ZombossIceBall *this)

{
  *(undefined ***)this = &PTR_GetClass_068c6d50;
  *(undefined ***)(this + 0x10) = &PTR__ZombossIceBall_068c7780;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombossIceBall::~ZombossIceBall() */

void __thiscall ZombossIceBall::~ZombossIceBall(ZombossIceBall *this)

{
  ~ZombossIceBall(this + -0x10);
  return;
}


/* ZombossIceBall::~ZombossIceBall() */

void __thiscall ZombossIceBall::~ZombossIceBall(ZombossIceBall *this)

{
  ~ZombossIceBall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombossIceBall::~ZombossIceBall() */

void __thiscall ZombossIceBall::~ZombossIceBall(ZombossIceBall *this)

{
  ~ZombossIceBall(this + -0x10);
  return;
}


/* ZombossIceBall::ZombossIceBall() */

void __thiscall ZombossIceBall::ZombossIceBall(ZombossIceBall *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068c6d50;
  *(undefined ***)(this + 0x10) = &PTR__ZombossIceBall_068c7780;
  return;
}


/* ZombossIceBall::StaticNew() */

ZombossIceBall * ZombossIceBall::StaticNew(void)

{
  ZombossIceBall *this;
  
  this = ::operator_new(0x800);
  ZombossIceBall(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossIceBall::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombossIceBall::CanBeTargetedByPlant
          (ZombossIceBall *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined1 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  bVar1 = std::operator==((string *)(lVar3 + 8),"bamboo");
  if (!bVar1) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    uVar2 = Zombie::CanBeTargetedByPlant((Zombie *)this,aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossIceBall::updateState_IceBallMove() */

void __thiscall ZombossIceBall::updateState_IceBallMove(ZombossIceBall *this)

{
  char cVar1;
  undefined8 *puVar2;
  RtObject *this_00;
  Plant *pPVar3;
  PlantTurnip *pPVar4;
  ZombossIceBallProps *pZVar5;
  float fVar6;
  float fVar7;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_10 = *(undefined4 *)(puVar2 + 1);
    local_18 = (float)*puVar2;
    _local_18 = CONCAT44((int)((ulong)*puVar2 >> 0x20),local_18 - 2.0);
    (**(code **)(*(long *)this + 0x78))(this,&local_18);
    if (local_18 < 240.0) {
      Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
    }
    else {
      this_00 = (RtObject *)(**(code **)(*(long *)this + 0x228))(this);
      if ((this_00 != (RtObject *)0x0) &&
         (pPVar3 = Sexy::RtObject::Cast<Plant>(this_00), pPVar3 != (Plant *)0x0)) {
        pPVar4 = Sexy::RtObject::Cast<PlantTurnip>(*(RtObject **)(pPVar3 + 0xa8));
        if (pPVar4 == (PlantTurnip *)0x0) {
          Plant::KillPlant(pPVar3,0,0,1);
          fVar6 = (float)FUN_0474205c(*(undefined4 *)(this + 0x280));
          fVar7 = (float)FUN_04742060(*(undefined4 *)(this + 0x284));
          pZVar5 = Zombie::GetProps<ZombossIceBallProps>((Zombie *)this);
          if (fVar7 * *(float *)(pZVar5 + 0x210) < fVar6) {
            fVar6 = (float)FUN_0474205c(*(undefined4 *)(this + 0x280));
            fVar7 = (float)FUN_04742060(*(undefined4 *)(this + 0x284));
            pZVar5 = Zombie::GetProps<ZombossIceBallProps>((Zombie *)this);
            Zombie::SetHitpoints((Zombie *)this,fVar6 - *(float *)(pZVar5 + 0x210) * fVar7);
            goto LAB_04742464;
          }
        }
        Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)pPVar3);
      }
    }
  }
LAB_04742464:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossIceBall::onPlaceOnBoard() */

void __thiscall ZombossIceBall::onPlaceOnBoard(ZombossIceBall *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  MessageRouter::Post<Zombie*,ZombossIceBall*>
            ((MessageRouter *)gMessageRouter,Message::ZombieAddedToBoard,this);
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  GridItemBarrelAnimRig::PlayRoll((GridItemBarrelAnimRig *)this_00);
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossIceBall::StaticClassInit() */

void ZombossIceBall::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombossIceBall");
      (*pcVar4)(plVar1,asStack_150,FUN_0474298c,0x800,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombossIceBall,void(ZombossIceBall::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombossIceBall,void(ZombossIceBall::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombossIceBall,void(ZombossIceBall::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_B_IceBallMove");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04742730(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombossIceBall::StaticGetClass() */

long * ZombossIceBall::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossIceBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossIceBall::GetClass() const */

long * ZombossIceBall::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossIceBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossIceBall::onInitialized() */

void __thiscall ZombossIceBall::onInitialized(ZombossIceBall *this)

{
  Zombie::onInitialized((Zombie *)this);
  Zombie::SetIsFlying((Zombie *)this,true);
  return;
}


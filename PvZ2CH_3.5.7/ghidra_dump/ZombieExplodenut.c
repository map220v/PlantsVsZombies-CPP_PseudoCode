// Class: ZombieExplodenut


/* ZombieExplodenut::ZombieExplodenut() */

void __thiscall ZombieExplodenut::ZombieExplodenut(ZombieExplodenut *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06a02750;
  *(undefined ***)(this + 0x10) = &PTR__ZombieExplodenut_06a03190;
  return;
}


/* ZombieExplodenut::~ZombieExplodenut() */

void __thiscall ZombieExplodenut::~ZombieExplodenut(ZombieExplodenut *this)

{
  *(undefined ***)this = &PTR_GetClass_06a02750;
  *(undefined ***)(this + 0x10) = &PTR__ZombieExplodenut_06a03190;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieExplodenut::~ZombieExplodenut() */

void __thiscall ZombieExplodenut::~ZombieExplodenut(ZombieExplodenut *this)

{
  ~ZombieExplodenut(this + -0x10);
  return;
}


/* ZombieExplodenut::~ZombieExplodenut() */

void __thiscall ZombieExplodenut::~ZombieExplodenut(ZombieExplodenut *this)

{
  ~ZombieExplodenut(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieExplodenut::~ZombieExplodenut() */

void __thiscall ZombieExplodenut::~ZombieExplodenut(ZombieExplodenut *this)

{
  ~ZombieExplodenut(this + -0x10);
  return;
}


/* ZombieExplodenut::CanHideHead() */

undefined8 ZombieExplodenut::CanHideHead(void)

{
  return 1;
}


/* ZombieExplodenut::StaticNew() */

ZombieExplodenut * ZombieExplodenut::StaticNew(void)

{
  ZombieExplodenut *this;
  
  this = ::operator_new(0x810);
  ZombieExplodenut(this);
  return this;
}


/* ZombieExplodenut::GetBodyDamageLevel() */

undefined4 __thiscall ZombieExplodenut::GetBodyDamageLevel(ZombieExplodenut *this)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_04eed6b4(*(undefined4 *)(this + 0x280));
  fVar3 = (float)FUN_04eed6b8(*(undefined4 *)(this + 0x284));
  if (fVar2 / fVar3 <= *(float *)(this + 0x808)) {
    return 3;
  }
  uVar1 = 2;
  if (*(float *)(this + 0x804) < fVar2 / fVar3) {
    uVar1 = 1;
  }
  return uVar1;
}


/* ZombieExplodenut::OnSwallowZombie(Zombie*) */

void __thiscall ZombieExplodenut::OnSwallowZombie(ZombieExplodenut *this,Zombie *param_1)

{
  if (this != (ZombieExplodenut *)param_1) {
    return;
  }
  this[0x800] = (ZombieExplodenut)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplodenut::Explode() */

void __thiscall ZombieExplodenut::Explode(ZombieExplodenut *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  Effect_PopAnim *this_00;
  int local_30;
  int local_2c;
  RtWeakPtr aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar4 = SharkMinion::getRow((SharkMinion *)this);
  uVar5 = Board::MakeRenderOrder(0x64960,iVar4,iVar3);
  Sexy::Point::Point((Point *)&local_18,iVar3,iVar4);
  BoardTransforms::GridToBoardSpace((Point *)&local_18);
  FUN_05475d88(asStack_20,&DAT_06ba3980);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)local_30,(float)(local_2c + -10),0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_28,local_18,local_14,local_10,asStack_20,uVar5,0,1);
  std::string::~string(asStack_20);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
  if ((bVar1) &&
     (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28), cVar2 != '\0')) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    Effect_PopAnim::PlaySingleAnimation(this_00,&DAT_06ba39c8,0);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplodenut::UpdateLayers() */

void __thiscall ZombieExplodenut::UpdateLayers(ZombieExplodenut *this)

{
  int iVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetBodyDamageLevel(this);
  FUN_05475d88(asStack_18,&DAT_06ba38d8);
  if (iVar1 == 1) {
    thunk_FUN_05475e00(asStack_18,&DAT_06ba38d8);
  }
  else if (iVar1 == 2) {
    thunk_FUN_05475e00(asStack_18,&DAT_06ba39e0);
  }
  else if (iVar1 == 3) {
    thunk_FUN_05475e00(asStack_18,&DAT_06ba38e8);
  }
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_05475d88(asStack_10,asStack_18);
  ZombieAnimRig_Explodenut::ShowLayerSet(pZVar2,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplodenut::DamagePlant() */

void __thiscall ZombieExplodenut::DamagePlant(ZombieExplodenut *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ZombieExplodenutProps *pZVar5;
  long lVar6;
  undefined8 *puVar7;
  Plant *pPVar8;
  ulong uVar9;
  Zombie *pZVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 local_80;
  undefined8 local_78;
  Insets aIStack_68 [8];
  float local_60;
  undefined8 local_58;
  long local_8;
  
  uVar11 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar4 = operator|(1,2);
  Sexy::Insets::Insets(aIStack_68,iVar2 + -1,iVar3 + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,
             aIStack_68);
  DamageInfo::DamageInfo((DamageInfo *)aIStack_68);
  pZVar5 = Zombie::GetProps<ZombieExplodenutProps>((Zombie *)this);
  uVar12 = local_80;
  local_58 = 0x400;
  local_60 = (float)*(int *)(pZVar5 + 0x218);
  lVar6 = FUN_04eed6c8(local_80,local_78);
  if (lVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_04eed6d4(uVar12,uVar11);
      pPVar8 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
      if (pPVar8 == (Plant *)0x0) {
        puVar7 = (undefined8 *)FUN_04eed6d4(local_80,uVar11);
        pZVar10 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pZVar10);
        if ((this != (ZombieExplodenut *)pZVar10) && (cVar1 != '\0')) {
          (**(code **)(*(long *)pZVar10 + 0x110))(pZVar10,aIStack_68);
        }
      }
      else {
        (**(code **)(*(long *)pPVar8 + 0x110))(pPVar8,aIStack_68);
      }
      uVar12 = local_80;
      uVar11 = uVar11 + 1;
      uVar9 = FUN_04eed6c8(local_80,local_78);
    } while (uVar11 < uVar9);
  }
  DamageInfo::~DamageInfo((DamageInfo *)aIStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplodenut::StaticClassInit() */

void ZombieExplodenut::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieExplodenut");
      (*pcVar4)(plVar1,asStack_150,FUN_04eeeed8,0x810,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieExplodenut,void(ZombieExplodenut::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieExplodenut,void(ZombieExplodenut::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieExplodenut,void(ZombieExplodenut::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Explodenut_Explode");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04eeec7c(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieExplodenut::StaticGetClass() */

long * ZombieExplodenut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieExplodenut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieExplodenut::GetClass() const */

long * ZombieExplodenut::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieExplodenut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieExplodenut::onZombieInitialize() */

void __thiscall ZombieExplodenut::onZombieInitialize(ZombieExplodenut *this)

{
  ZombieExplodenutProps *pZVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x800] = (ZombieExplodenut)0x0;
  pZVar1 = Zombie::GetProps<ZombieExplodenutProps>((Zombie *)this);
  *(undefined4 *)(this + 0x804) = *(undefined4 *)(pZVar1 + 0x210);
  pZVar1 = Zombie::GetProps<ZombieExplodenutProps>((Zombie *)this);
  *(undefined4 *)(this + 0x808) = *(undefined4 *)(pZVar1 + 0x214);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  ZombieAnimRig_Explodenut::SetObjectPtr((ZombieAnimRig_Explodenut *)pZVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieExplodenut::DropHead() */

long * __thiscall ZombieExplodenut::DropHead(ZombieExplodenut *this)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = (long *)Zombie::DropHead((Zombie *)this);
  if (plVar2 != (long *)0x0) {
    if (*(code **)(*(long *)this + 0xa28) == CanHideHead) {
      cVar1 = CanHideHead();
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0xa28))(this);
    }
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x80))(plVar2,1);
    }
  }
  return plVar2;
}


/* ZombieExplodenut::onUpdate() */

void __thiscall ZombieExplodenut::onUpdate(ZombieExplodenut *this)

{
  Zombie::onUpdate((Zombie *)this);
  (**(code **)(*(long *)this + 0xa20))(this);
  return;
}


/* ZombieExplodenut::onEnterState_Die(ZombieState) */

void __thiscall ZombieExplodenut::onEnterState_Die(ZombieExplodenut *this,undefined8 param_2)

{
  Explode(this);
  DamagePlant(this);
  Zombie::onEnterState_Die(this,param_2);
  Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  return;
}


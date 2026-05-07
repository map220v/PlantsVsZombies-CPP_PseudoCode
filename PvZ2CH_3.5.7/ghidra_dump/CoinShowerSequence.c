// Class: CoinShowerSequence


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinShowerSequence::StaticClassInit() */

void CoinShowerSequence::StaticClassInit(void)

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
    std::string::string(asStack_10,"CoinShowerSequence");
    (*pcVar2)(plVar1,asStack_10,FUN_044f0bfc,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoinShowerSequence::StaticGetClass() */

long * CoinShowerSequence::StaticGetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"CoinShowerSequence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoinShowerSequence::GetClass() const */

long * CoinShowerSequence::GetClass(void)

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
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"CoinShowerSequence",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinShowerSequence::Update(float) */

void __thiscall CoinShowerSequence::Update(CoinShowerSequence *this,float param_1)

{
  int iVar1;
  char cVar2;
  Collectable *pCVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_044ee554(*(undefined4 *)(this + 0x10));
  iVar1 = *(int *)(this + 0x48);
  if (iVar1 == 1) {
    if (1.0 < param_1 - fVar4) {
      pCVar3 = (Collectable *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      Collectable::TryToCollect(pCVar3);
      *(undefined4 *)(this + 0x48) = 2;
    }
  }
  else if (iVar1 == 0) {
    *(undefined4 *)(this + 0x48) = 1;
    pCVar3 = (Collectable *)
             Board::AddCoin(*(SexyVector3 **)(gLawnApp + 0x9f0),(string *)(this + 0x28));
    Collectable::SetKeepOnBoard(pCVar3,false);
    Collectable::SetDisableTouch(pCVar3,true);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else if ((iVar1 == 2) &&
          (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x40)), cVar2 == '\0')) {
    *(undefined4 *)(this + 0x48) = 3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoinShowerSequence::CoinShowerSequence() */

void __thiscall CoinShowerSequence::CoinShowerSequence(CoinShowerSequence *this)

{
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined ***)this = &PTR_GetClass_06856a40;
  DVec3::DVec3((DVec3 *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  Set8BytesTo0(this + 0x50);
  return;
}


/* CoinShowerSequence::StaticNew() */

CoinShowerSequence * CoinShowerSequence::StaticNew(void)

{
  CoinShowerSequence *this;
  
  this = ::operator_new(0x58);
  CoinShowerSequence(this);
  return this;
}


/* CoinShowerSequence::~CoinShowerSequence() */

void __thiscall CoinShowerSequence::~CoinShowerSequence(CoinShowerSequence *this)

{
  *(undefined ***)this = &PTR_GetClass_06856a40;
  std::string::~string((string *)(this + 0x50));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* CoinShowerSequence::~CoinShowerSequence() */

void __thiscall CoinShowerSequence::~CoinShowerSequence(CoinShowerSequence *this)

{
  ~CoinShowerSequence(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoinShowerSequence::Create(VictoryOutroModule*, Sexy::SexyVector3, float, std::string) */

void CoinShowerSequence::Create
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
               undefined8 param_5,undefined8 param_6)

{
  CoinShowerSequence *this;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  this = GameObject::Create<CoinShowerSequence>();
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x28),(SexyVector3 *)&local_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined4 *)(this + 0x48) = 0;
  AnimationController::SetDuration((AnimationController *)this,param_4);
  FUN_044ee6a8(this + 0x1c);
  thunk_FUN_05475e00(this + 0x50,param_6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


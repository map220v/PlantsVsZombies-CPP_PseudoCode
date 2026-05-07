// Class: CardEffectProcessor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardEffectProcessor::StaticClassInit() */

void CardEffectProcessor::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardEffectProcessor");
    (*pcVar2)(plVar1,asStack_10,FUN_03602ba4,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardEffectProcessor::StaticGetClass() */

long * CardEffectProcessor::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"CardEffectProcessor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardEffectProcessor::GetClass() const */

long * CardEffectProcessor::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"CardEffectProcessor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardEffectProcessor::onUpdate() */

void __thiscall CardEffectProcessor::onUpdate(CardEffectProcessor *this)

{
  char cVar1;
  int iVar2;
  RtWeakPtrBase *pRVar3;
  BaseTask *pBVar4;
  long *plVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = GameObject::IsDestroyed((GameObject *)this);
  if (cVar1 == '\0') {
    cVar1 = std::
            queue<Sexy::RtWeakPtr<CardEffect>,std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>>
            ::empty((queue<Sexy::RtWeakPtr<CardEffect>,std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>>
                     *)(this + 0xa8));
    if (cVar1 == '\0') {
      pRVar3 = (RtWeakPtrBase *)
               std::
               queue<Sexy::RtWeakPtr<CardEffect>,std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>>
               ::front();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      pBVar4 = (BaseTask *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
      ;
      iVar2 = BaseTask::GetType(pBVar4);
      if (iVar2 == 1) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        (**(code **)(*plVar5 + 0x80))();
      }
      pBVar4 = (BaseTask *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
      ;
      iVar2 = BaseTask::GetType(pBVar4);
      if ((iVar2 == 3) || (iVar2 == 0)) {
        std::
        queue<Sexy::RtWeakPtr<CardEffect>,std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>>
        ::pop((queue<Sexy::RtWeakPtr<CardEffect>,std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>>
               *)(this + 0xa8));
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        if (cVar1 != '\0') {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          (**(code **)(*plVar5 + 0x48))();
        }
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)aRStack_10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardEffectProcessor::CardEffectProcessor() */

void __thiscall CardEffectProcessor::CardEffectProcessor(CardEffectProcessor *this)

{
  deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>> adStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06666690;
  *(undefined ***)(this + 0x10) = &PTR__CardEffectProcessor_06666878;
  std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>::deque();
  std::
  queue<Sexy::RtWeakPtr<CardEffect>,std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>>
  ::queue((queue<Sexy::RtWeakPtr<CardEffect>,std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>>
           *)(this + 0xa8),(deque *)adStack_58);
  std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>::~deque
            (adStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardEffectProcessor::StaticNew() */

CardEffectProcessor * CardEffectProcessor::StaticNew(void)

{
  CardEffectProcessor *this;
  
  this = ::operator_new(0xf8);
  CardEffectProcessor(this);
  return this;
}


/* CardEffectProcessor::~CardEffectProcessor() */

void __thiscall CardEffectProcessor::~CardEffectProcessor(CardEffectProcessor *this)

{
  *(undefined ***)this = &PTR_GetClass_06666690;
  *(undefined ***)(this + 0x10) = &PTR__CardEffectProcessor_06666878;
  std::
  queue<Sexy::RtWeakPtr<CardEffect>,std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>>
  ::~queue((queue<Sexy::RtWeakPtr<CardEffect>,std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>>
            *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to CardEffectProcessor::~CardEffectProcessor() */

void __thiscall CardEffectProcessor::~CardEffectProcessor(CardEffectProcessor *this)

{
  ~CardEffectProcessor(this + -0x10);
  return;
}


/* CardEffectProcessor::~CardEffectProcessor() */

void __thiscall CardEffectProcessor::~CardEffectProcessor(CardEffectProcessor *this)

{
  ~CardEffectProcessor(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardEffectProcessor::~CardEffectProcessor() */

void __thiscall CardEffectProcessor::~CardEffectProcessor(CardEffectProcessor *this)

{
  ~CardEffectProcessor(this + -0x10);
  return;
}


/* CardEffectProcessor::PushEffect(Sexy::RtWeakPtr<CardEffect>) */

void CardEffectProcessor::PushEffect(long param_1)

{
  std::
  queue<Sexy::RtWeakPtr<CardEffect>,std::deque<Sexy::RtWeakPtr<CardEffect>,std::allocator<Sexy::RtWeakPtr<CardEffect>>>>
  ::push((RtWeakPtr *)(param_1 + 0xa8));
  return;
}


// Class: ComponentZombieMovement


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentZombieMovement::StaticClassInit() */

void ComponentZombieMovement::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentZombieMovement");
    (*pcVar2)(plVar1,asStack_10,FUN_03b8c2bc,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentZombieMovement::StaticGetClass() */

long * ComponentZombieMovement::StaticGetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentZombieMovement",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentZombieMovement::GetClass() const */

long * ComponentZombieMovement::GetClass(void)

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
  uVar2 = ComponentBase::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentZombieMovement",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentZombieMovement::getStringForMotionType(ComponentZombieMovementMotionType) const */

undefined * __thiscall
ComponentZombieMovement::getStringForMotionType(undefined8 param_1,int param_2)

{
  if (param_2 == 2) {
    return &DAT_06accec8;
  }
  if (param_2 != 3) {
    if (param_2 != 1) {
      return &DAT_06acce88;
    }
    return &DAT_06acceb0;
  }
  return &DAT_06acce80;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentZombieMovement::onEnd() */

void ComponentZombieMovement::onEnd(void)

{
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  Zombie *this;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar3);
    if (bVar2) {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
      ;
      this = Sexy::RtObject::Cast<Zombie>(pRVar3);
      Zombie::SetIsControlled(this,false);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentZombieMovement::ComponentZombieMovement() */

void __thiscall ComponentZombieMovement::ComponentZombieMovement(ComponentZombieMovement *this)

{
  ComponentBase::ComponentBase((ComponentBase *)this);
  *(undefined ***)this = &PTR_GetClass_06735c20;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x30));
  return;
}


/* ComponentZombieMovement::StaticNew() */

ComponentZombieMovement * ComponentZombieMovement::StaticNew(void)

{
  ComponentZombieMovement *this;
  
  this = ::operator_new(0x60);
  ComponentZombieMovement(this);
  return this;
}


/* ComponentZombieMovement::~ComponentZombieMovement() */

void __thiscall ComponentZombieMovement::~ComponentZombieMovement(ComponentZombieMovement *this)

{
  *(undefined ***)this = &PTR_GetClass_06735c20;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x30));
  ComponentBase::~ComponentBase((ComponentBase *)this);
  return;
}


/* ComponentZombieMovement::~ComponentZombieMovement() */

void __thiscall ComponentZombieMovement::~ComponentZombieMovement(ComponentZombieMovement *this)

{
  ~ComponentZombieMovement(this);
  AK::FreeHook(this);
  return;
}


/* ComponentZombieMovement::AddCurve(ComponentZombieMovementMotionType, float, float const&, float
   const&, CurveType) */

void __thiscall
ComponentZombieMovement::AddCurve
          (undefined8 param_1,ComponentZombieMovement *this,undefined8 param_3,undefined4 *param_4,
          undefined8 param_5,undefined4 param_6)

{
  bool bVar1;
  string *psVar2;
  undefined8 uVar3;
  
  psVar2 = (string *)getStringForMotionType();
  bVar1 = std::operator!=(psVar2,(string *)&DAT_06acce88);
  if (!bVar1) {
    return;
  }
  uVar3 = CurveSequenceCollection<float>::operator[]((string *)(this + 0x30));
  FUN_03b8c524(param_1,*param_4,uVar3,param_5,param_6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentZombieMovement::onBegin() */

void __thiscall ComponentZombieMovement::onBegin(ComponentZombieMovement *this)

{
  string *psVar1;
  char cVar2;
  bool bVar3;
  RtObject *pRVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar5;
  Zombie *this_01;
  CurveSequence<float> *pCVar6;
  float fVar7;
  RtMixedPtrBase aRStack_20 [8];
  undefined8 local_18;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  if (cVar2 != '\0') {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    bVar3 = Sexy::RtObject::IsA<Zombie>(pRVar4);
    if (bVar3) {
      fVar7 = (float)PVZ_T();
      psVar1 = (string *)(this + 0x30);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      puVar5 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_18 = *puVar5;
      local_10[0] = *(float *)(puVar5 + 1);
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
      ;
      this_01 = Sexy::RtObject::Cast<Zombie>(pRVar4);
      Zombie::SetIsControlled(this_01,true);
      pCVar6 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
      CurveSequence<float>::StartSequence(pCVar6,fVar7,(float *)&local_18);
      pCVar6 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
      CurveSequence<float>::StartSequence(pCVar6,fVar7,(float *)((long)&local_18 + 4));
      pCVar6 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
      CurveSequence<float>::StartSequence(pCVar6,fVar7,local_10);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentZombieMovement::onUpdate() */

void __thiscall ComponentZombieMovement::onUpdate(ComponentZombieMovement *this)

{
  string *psVar1;
  char cVar2;
  CurveSequence<float> *this_00;
  CurveSequence<float> *this_01;
  CurveSequence<float> *this_02;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtMixedPtrBase aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceInfoTypes::FontRes::GetFont();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  if (cVar2 != '\0') {
    fVar4 = (float)PVZ_T();
    psVar1 = (string *)(this + 0x30);
    this_00 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    this_01 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    this_02 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    fVar5 = (float)CurveSequence<float>::GetValueAt(this_00,fVar4);
    fVar6 = (float)CurveSequence<float>::GetValueAt(this_01,fVar4);
    fVar7 = (float)CurveSequence<float>::GetValueAt(this_02,fVar4);
    EATextSquish::Vec3::Vec3(aVStack_18,fVar5,fVar6,fVar7);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    (**(code **)(*plVar3 + 0x78))(plVar3,aVStack_18);
    cVar2 = CurveSequence<float>::IsTimeInSequence(this_00,fVar4);
    if (((cVar2 == '\0') &&
        (cVar2 = CurveSequence<float>::IsTimeInSequence(this_01,fVar4), cVar2 == '\0')) &&
       (cVar2 = CurveSequence<float>::IsTimeInSequence(this_02,fVar4), cVar2 == '\0')) {
      ComponentBase::End((ComponentBase *)this);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


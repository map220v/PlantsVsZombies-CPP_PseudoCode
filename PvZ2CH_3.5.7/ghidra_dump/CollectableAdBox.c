// Class: CollectableAdBox


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBox::SetState(BoxState) */

void __thiscall CollectableAdBox::SetState(CollectableAdBox *this,int param_2)

{
  int iVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  StateDefinition *pSVar4;
  undefined4 uVar5;
  StateDefinition<CollectableState> aSStack_a8 [160];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  iVar1 = FUN_03c5dbd8(*(undefined4 *)(this + 200));
  if (iVar1 != param_2) {
    this_00 = (StateMachineTableBuilder *)
              Sexy::LazySingleton<StateMachineTableBuilder>::GetInstancePtr();
    pRVar2 = (RtClass *)(*(code *)**(undefined8 **)this)(this);
    pSVar3 = StateMachineTableBuilder::GetTable<CollectableState>(this_00,pRVar2);
    pSVar4 = (StateDefinition *)
             StateMachineTable<CollectableState>::GetStateDefinition
                       ((StateMachineTable<CollectableState> *)pSVar3,param_2);
    StateDefinition<CollectableState>::StateDefinition(aSStack_a8,pSVar4);
    StateDefinition<CollectableState>::SetContext(aSStack_a8,this);
    StateMachine<CollectableState>::SetState
              ((StateMachine<CollectableState> *)(this + 200),(StateDefinition *)aSStack_a8);
    uVar5 = PVZ_T();
    *(undefined4 *)(this + 0x168) = uVar5;
    StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_a8);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBox::InitNodes(Sexy::SexyVector3 const&) */

void __thiscall CollectableAdBox::InitNodes(CollectableAdBox *this,SexyVector3 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  undefined8 local_10;
  long local_8;
  
  fVar7 = *(float *)param_1;
  iVar6 = (int)*(float *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  iVar2 = (int)fVar7 + -0x32;
  puVar4 = (undefined8 *)FUN_038e4adc(*(undefined8 *)(this + 0x1f0),0);
  iVar1 = (int)fVar7 + 0x32;
  Sexy::Point::Point((Point *)&local_10,iVar2,iVar6);
  uVar5 = *(undefined8 *)(this + 0x1f0);
  *puVar4 = local_10;
  puVar4 = (undefined8 *)FUN_038e4adc(uVar5,1);
  Sexy::Point::Point((Point *)&local_10,iVar2,iVar6 + 100);
  uVar5 = *(undefined8 *)(this + 0x1f0);
  *puVar4 = local_10;
  puVar4 = (undefined8 *)FUN_038e4adc(uVar5,2);
  Sexy::Point::Point((Point *)&local_10,iVar1,iVar6 + 100);
  uVar5 = *(undefined8 *)(this + 0x1f0);
  *puVar4 = local_10;
  puVar4 = (undefined8 *)FUN_038e4adc(uVar5,3);
  Sexy::Point::Point((Point *)&local_10,iVar1,iVar6);
  lVar3 = ___stack_chk_guard;
  *puVar4 = local_10;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBox::updateState_RIGHT() */

void __thiscall CollectableAdBox::updateState_RIGHT(CollectableAdBox *this)

{
  float *pfVar1;
  TPoint *pTVar2;
  code *pcVar3;
  int local_18 [4];
  long local_8;
  
  pcVar3 = *(code **)(*(long *)this + 0x78);
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,*pfVar1 + 1.0,pfVar1[1],pfVar1[2]);
  (*pcVar3)(this,(Vec3 *)local_18);
  pTVar2 = (TPoint *)FUN_038e4adc(*(undefined8 *)(this + 0x1f0),2);
  Sexy::Point::Point((Point *)local_18,pTVar2);
  if ((float)local_18[0] <= *pfVar1) {
    Collectable::setState((Collectable *)this,5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBox::updateState_LEFT() */

void __thiscall CollectableAdBox::updateState_LEFT(CollectableAdBox *this)

{
  float *pfVar1;
  TPoint *pTVar2;
  code *pcVar3;
  int local_18 [4];
  long local_8;
  
  pcVar3 = *(code **)(*(long *)this + 0x78);
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,*pfVar1 - 1.0,pfVar1[1],pfVar1[2]);
  (*pcVar3)(this,(Vec3 *)local_18);
  pTVar2 = (TPoint *)FUN_038e4adc(*(undefined8 *)(this + 0x1f0),0);
  Sexy::Point::Point((Point *)local_18,pTVar2);
  if (*pfVar1 <= (float)local_18[0]) {
    Collectable::setState((Collectable *)this,6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBox::updateState_UP() */

void __thiscall CollectableAdBox::updateState_UP(CollectableAdBox *this)

{
  float *pfVar1;
  TPoint *pTVar2;
  code *pcVar3;
  Vec3 aVStack_18 [4];
  int local_14;
  long local_8;
  
  pcVar3 = *(code **)(*(long *)this + 0x78);
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar1,pfVar1[1] - 1.0,pfVar1[2]);
  (*pcVar3)(this,aVStack_18);
  pTVar2 = (TPoint *)FUN_038e4adc(*(undefined8 *)(this + 0x1f0),3);
  Sexy::Point::Point((Point *)aVStack_18,pTVar2);
  if (pfVar1[1] <= (float)local_14) {
    Collectable::setState((Collectable *)this,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBox::updateState_DOWN() */

void __thiscall CollectableAdBox::updateState_DOWN(CollectableAdBox *this)

{
  float *pfVar1;
  TPoint *pTVar2;
  code *pcVar3;
  Vec3 aVStack_18 [4];
  int local_14;
  long local_8;
  
  pcVar3 = *(code **)(*(long *)this + 0x78);
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3(aVStack_18,*pfVar1,pfVar1[1] + 1.0,pfVar1[2]);
  (*pcVar3)(this,aVStack_18);
  pTVar2 = (TPoint *)FUN_038e4adc(*(undefined8 *)(this + 0x1f0),1);
  Sexy::Point::Point((Point *)aVStack_18,pTVar2);
  if ((float)local_14 <= pfVar1[1]) {
    Collectable::setState((Collectable *)this,3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableAdBox::onTouchEvent(Sexy::Touch const&) */

char __thiscall CollectableAdBox::onTouchEvent(CollectableAdBox *this,Touch *param_1)

{
  char cVar1;
  CollectableAdBoxMgr *this_00;
  
  cVar1 = Collectable::IsTouched((Collectable *)this,param_1);
  if (((cVar1 != '\0') && (cVar1 = Collectable::IsTouchable((Collectable *)this), cVar1 != '\0')) &&
     (*(int *)(param_1 + 0x30) == 0)) {
    this_00 = (CollectableAdBoxMgr *)Sexy::LazySingleton<CollectableAdBoxMgr>::GetInstance();
    CollectableAdBoxMgr::PopUpRewardUI(this_00);
    (**(code **)(*(long *)this + 0x48))(this);
    return cVar1;
  }
  return '\0';
}


/* CollectableAdBox::~CollectableAdBox() */

void __thiscall CollectableAdBox::~CollectableAdBox(CollectableAdBox *this)

{
  *(undefined ***)this = &PTR_GetClass_066bd160;
  *(undefined ***)(this + 0x10) = &PTR__CollectableAdBox_066bd428;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x1f0));
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableAdBox::~CollectableAdBox() */

void __thiscall CollectableAdBox::~CollectableAdBox(CollectableAdBox *this)

{
  ~CollectableAdBox(this + -0x10);
  return;
}


/* CollectableAdBox::~CollectableAdBox() */

void __thiscall CollectableAdBox::~CollectableAdBox(CollectableAdBox *this)

{
  ~CollectableAdBox(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableAdBox::~CollectableAdBox() */

void __thiscall CollectableAdBox::~CollectableAdBox(CollectableAdBox *this)

{
  ~CollectableAdBox(this + -0x10);
  return;
}


/* CollectableAdBox::CollectableAdBox() */

void __thiscall CollectableAdBox::CollectableAdBox(CollectableAdBox *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_066bd160;
  *(undefined ***)(this + 0x10) = &PTR__CollectableAdBox_066bd428;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::resize
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x1f0),4);
  Collectable::setState((Collectable *)this,2);
  return;
}


/* CollectableAdBox::StaticNew() */

CollectableAdBox * CollectableAdBox::StaticNew(void)

{
  CollectableAdBox *this;
  
  this = ::operator_new(0x208);
  CollectableAdBox(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAdBox::StaticClassInit() */

void CollectableAdBox::StaticClassInit(void)

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
  Delegate1<CollectableState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<CollectableState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"CollectableAdBox");
      (*pcVar4)(plVar1,asStack_150,FUN_038e5dec,0x208,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<CollectableState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x240);
  Sexy::Delegate1<CollectableState>::
  Delegate1<CollectableAdBox,void(CollectableAdBox::*)(CollectableState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x248);
  Sexy::Delegate0::Delegate0<CollectableAdBox,void(CollectableAdBox::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x250);
  Sexy::Delegate1<CollectableState>::
  Delegate1<CollectableAdBox,void(CollectableAdBox::*)(CollectableState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BoxState_INIT");
  StateDefinition<CollectableState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_038e5790(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x258);
  Sexy::Delegate1<CollectableState>::
  Delegate1<CollectableAdBox,void(CollectableAdBox::*)(CollectableState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x260);
  Sexy::Delegate0::Delegate0<CollectableAdBox,void(CollectableAdBox::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x268);
  Sexy::Delegate1<CollectableState>::
  Delegate1<CollectableAdBox,void(CollectableAdBox::*)(CollectableState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BoxState_RIGHT");
  StateDefinition<CollectableState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_038e5790(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x270);
  Sexy::Delegate1<CollectableState>::
  Delegate1<CollectableAdBox,void(CollectableAdBox::*)(CollectableState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x278);
  Sexy::Delegate0::Delegate0<CollectableAdBox,void(CollectableAdBox::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x280);
  Sexy::Delegate1<CollectableState>::
  Delegate1<CollectableAdBox,void(CollectableAdBox::*)(CollectableState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BoxState_LEFT");
  StateDefinition<CollectableState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_038e5790(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x288);
  Sexy::Delegate1<CollectableState>::
  Delegate1<CollectableAdBox,void(CollectableAdBox::*)(CollectableState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x290);
  Sexy::Delegate0::Delegate0<CollectableAdBox,void(CollectableAdBox::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x298);
  Sexy::Delegate1<CollectableState>::
  Delegate1<CollectableAdBox,void(CollectableAdBox::*)(CollectableState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BoxState_UP");
  StateDefinition<CollectableState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_038e5790(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2a0);
  Sexy::Delegate1<CollectableState>::
  Delegate1<CollectableAdBox,void(CollectableAdBox::*)(CollectableState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2a8);
  Sexy::Delegate0::Delegate0<CollectableAdBox,void(CollectableAdBox::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x2b0);
  Sexy::Delegate1<CollectableState>::
  Delegate1<CollectableAdBox,void(CollectableAdBox::*)(CollectableState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"BoxState_DOWN");
  StateDefinition<CollectableState>::StateDefinition
            (aSStack_a8,6,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_038e5790(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CollectableAdBox::StaticGetClass() */

long * CollectableAdBox::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableAdBox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableAdBox::GetClass() const */

long * CollectableAdBox::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableAdBox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


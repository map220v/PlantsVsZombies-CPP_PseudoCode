// Class: ShowAdvice


/* ShowAdvice::Create() */

void ShowAdvice::Create(void)

{
  GameObject::Create<ShowAdvice>();
  return;
}


/* ShowAdvice::Create(std::wstring const&, MessageStyle) */

ShowAdvice * ShowAdvice::Create(undefined8 param_1,undefined4 param_2)

{
  ShowAdvice *pSVar1;
  
  pSVar1 = (ShowAdvice *)Create();
  SetLabel(pSVar1,param_1,param_2);
  return pSVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowAdvice::StaticClassInit() */

void ShowAdvice::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShowAdvice");
    (*pcVar2)(plVar1,asStack_10,FUN_03b4eb00,0x668,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShowAdvice::StaticGetClass() */

long * ShowAdvice::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShowAdvice",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShowAdvice::GetClass() const */

long * ShowAdvice::GetClass(void)

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
  (*pcVar3)(plVar1,"ShowAdvice",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowAdvice::ShowAdvice() */

void __thiscall ShowAdvice::ShowAdvice(ShowAdvice *this)

{
  Renderable *extraout_x1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  Renderable::Renderable((Renderable *)(this + 0x28),extraout_x1);
  *(undefined ***)this = &PTR_GetClass_067328b0;
  *(undefined ***)(this + 0x28) = &PTR__ShowAdvice_06732960;
  FUN_05476574(this + 0x30);
  *(undefined4 *)(this + 0x38) = 0;
  Sexy::Point::Point((Point *)(this + 0x3c),0,0);
  MessageWidget::MessageWidget((MessageWidget *)(this + 0x48));
  std::string::string(asStack_10,"ShowAdvice");
  AnimationController::SetDescription((string *)this);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShowAdvice::StaticNew() */

ShowAdvice * ShowAdvice::StaticNew(void)

{
  ShowAdvice *this;
  
  this = ::operator_new(0x668);
  ShowAdvice(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowAdvice::SetLabel(std::wstring const&, MessageStyle) */

void __thiscall ShowAdvice::SetLabel(ShowAdvice *this,wstring *param_1,uint param_3)

{
  char *__s;
  undefined8 uVar1;
  ShowAdvice *pSVar2;
  float fVar3;
  string asStack_128 [8];
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = this + 0x48;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     (pSVar2 = *(ShowAdvice **)(*(long *)(gLawnApp + 0x9f0) + 0x890), pSVar2 == (ShowAdvice *)0x0))
  {
    pSVar2 = this + 0x48;
  }
  MessageWidget::SetLabel((MessageWidget *)pSVar2,param_1,param_3);
  fVar3 = (float)FUN_03b4cd94(*(undefined4 *)(pSVar2 + 0x20c));
  AnimationController::SetDuration((AnimationController *)this,fVar3);
  thunk_FUN_05477b9c(this + 0x30,param_1);
  *(uint *)(this + 0x38) = param_3;
  Sexy::ToString(param_1);
  __s = (char *)FUN_0547429c(asStack_110);
  std::string::string(asStack_128,__s);
  nop();
  std::string::~string(asStack_110);
  uVar1 = FUN_0547429c(asStack_128);
  sprintf(acStack_108,"%s %d",uVar1,(ulong)param_3);
  std::string::string(asStack_120,"Advice ");
  std::string::string(asStack_118,acStack_108);
  std::operator+(asStack_120,asStack_118);
  AnimationController::SetDescription((string *)this);
  std::string::~string(asStack_110);
  std::string::~string(asStack_118);
  nop();
  std::string::~string(asStack_120);
  nop();
  std::string::~string(asStack_128);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ShowAdvice::Init(std::wstring const&, MessageStyle) */

undefined8 ShowAdvice::Init(undefined8 param_1)

{
  SetLabel();
  return param_1;
}


/* ShowAdvice::onPostLoad() */

void __thiscall ShowAdvice::onPostLoad(ShowAdvice *this)

{
  Init(this,this + 0x30,*(undefined4 *)(this + 0x38));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowAdvice::SetLabel(std::wstring const&, MessageStyle, float) */

void ShowAdvice::SetLabel(AnimationController *param_1,wstring *param_2,uint param_3)

{
  char *__s;
  undefined8 uVar1;
  AnimationController *pAVar2;
  float fVar3;
  string asStack_128 [8];
  string asStack_120 [8];
  string asStack_118 [8];
  string asStack_110 [8];
  char acStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar2 = param_1 + 0x48;
  if ((*(long *)(gLawnApp + 0x9f0) != 0) &&
     (pAVar2 = *(AnimationController **)(*(long *)(gLawnApp + 0x9f0) + 0x890),
     pAVar2 == (AnimationController *)0x0)) {
    pAVar2 = param_1 + 0x48;
  }
  MessageWidget::SetLabel((MessageWidget *)pAVar2,param_2,param_3);
  fVar3 = (float)FUN_03b4cd94(*(undefined4 *)(pAVar2 + 0x20c));
  AnimationController::SetDuration(param_1,fVar3);
  thunk_FUN_05477b9c(param_1 + 0x30,param_2);
  *(uint *)(param_1 + 0x38) = param_3;
  Sexy::ToString(param_2);
  __s = (char *)FUN_0547429c(asStack_110);
  std::string::string(asStack_128,__s);
  nop();
  std::string::~string(asStack_110);
  uVar1 = FUN_0547429c(asStack_128);
  sprintf(acStack_108,"%s %d",uVar1,(ulong)param_3);
  std::string::string(asStack_120,"Advice ");
  std::string::string(asStack_118,acStack_108);
  std::operator+(asStack_120,asStack_118);
  AnimationController::SetDescription((string *)param_1);
  std::string::~string(asStack_110);
  std::string::~string(asStack_118);
  nop();
  std::string::~string(asStack_120);
  nop();
  std::string::~string(asStack_128);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowAdvice::AddToRenderQueue(RenderQueue*) */

void __thiscall ShowAdvice::AddToRenderQueue(ShowAdvice *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x98);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<ShowAdvice,void(ShowAdvice::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,800000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowAdvice::Draw(Sexy::Graphics*) */

void __thiscall ShowAdvice::Draw(ShowAdvice *this,Graphics *param_1)

{
  int iVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  iVar1 = *(int *)(this + 0x40);
  *(float *)(param_1 + 0x10) = (float)*(int *)(this + 0x3c);
  *(float *)(param_1 + 0x14) = (float)iVar1;
  MessageWidget::Draw((MessageWidget *)(this + 0x48),param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ShowAdvice::Draw(Sexy::Graphics*) */

void __thiscall ShowAdvice::Draw(ShowAdvice *this,Graphics *param_1)

{
  Draw(this + -0x28,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowAdvice::InnerDraw(Sexy::Graphics*) */

void __thiscall ShowAdvice::InnerDraw(ShowAdvice *this,Graphics *param_1)

{
  int iVar1;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  iVar1 = *(int *)(this + 0x40);
  *(float *)(param_1 + 0x10) = (float)*(int *)(this + 0x3c);
  *(float *)(param_1 + 0x14) = (float)iVar1;
  MessageWidget::Draw((MessageWidget *)(this + 0x48),param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShowAdvice::~ShowAdvice() */

void __thiscall ShowAdvice::~ShowAdvice(ShowAdvice *this)

{
  *(undefined ***)this = &PTR_GetClass_067328b0;
  *(undefined ***)(this + 0x28) = &PTR__ShowAdvice_06732960;
  MessageWidget::~MessageWidget((MessageWidget *)(this + 0x48));
  FUN_05476c50(this + 0x30);
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* non-virtual thunk to ShowAdvice::~ShowAdvice() */

void __thiscall ShowAdvice::~ShowAdvice(ShowAdvice *this)

{
  ~ShowAdvice(this + -0x28);
  return;
}


/* ShowAdvice::~ShowAdvice() */

void __thiscall ShowAdvice::~ShowAdvice(ShowAdvice *this)

{
  ~ShowAdvice(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ShowAdvice::~ShowAdvice() */

void __thiscall ShowAdvice::~ShowAdvice(ShowAdvice *this)

{
  ~ShowAdvice(this + -0x28);
  return;
}


/* ShowAdvice::SetOffset(Sexy::Point const&) */

void __thiscall ShowAdvice::SetOffset(ShowAdvice *this,Point *param_1)

{
  *(undefined8 *)(this + 0x3c) = *(undefined8 *)param_1;
  return;
}


// Class: DrawMessage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DrawMessage::Draw(Sexy::Graphics*) */

void __thiscall DrawMessage::Draw(DrawMessage *this,Graphics *param_1)

{
  undefined8 uVar1;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  uVar1 = *(undefined8 *)(this + 0x58);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x48));
  WriteWordInRect(param_1,this + 0x30,this + 0x38,uVar1,aIStack_18,5,1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DrawMessage::Draw(Sexy::Graphics*) */

void __thiscall DrawMessage::Draw(DrawMessage *this,Graphics *param_1)

{
  Draw(this + -0x28,param_1);
  return;
}


/* DrawMessage::~DrawMessage() */

void __thiscall DrawMessage::~DrawMessage(DrawMessage *this)

{
  *(undefined ***)this = &PTR_GetClass_067327d0;
  *(undefined ***)(this + 0x28) = &PTR__DrawMessage_06732880;
  FUN_05476c50(this + 0x30);
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* non-virtual thunk to DrawMessage::~DrawMessage() */

void __thiscall DrawMessage::~DrawMessage(DrawMessage *this)

{
  ~DrawMessage(this + -0x28);
  return;
}


/* DrawMessage::~DrawMessage() */

void __thiscall DrawMessage::~DrawMessage(DrawMessage *this)

{
  ~DrawMessage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DrawMessage::~DrawMessage() */

void __thiscall DrawMessage::~DrawMessage(DrawMessage *this)

{
  ~DrawMessage(this + -0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DrawMessage::StaticClassInit() */

void DrawMessage::StaticClassInit(void)

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
    std::string::string(asStack_10,"DrawMessage");
    (*pcVar2)(plVar1,asStack_10,FUN_03b4ee58,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DrawMessage::StaticGetClass() */

long * DrawMessage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DrawMessage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DrawMessage::GetClass() const */

long * DrawMessage::GetClass(void)

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
  (*pcVar3)(plVar1,"DrawMessage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DrawMessage::SetDesc(std::wstring const&) */

void DrawMessage::SetDesc(wstring *param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x30);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DrawMessage::SetDesc(std::string const&) */

void __thiscall DrawMessage::SetDesc(DrawMessage *this,string *param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StringHelper::ToStringValue(param_1);
  FUN_054766c8(this + 0x30,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DrawMessage::SetRect(Sexy::TRect<int> const&) */

void __thiscall DrawMessage::SetRect(DrawMessage *this,TRect *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x40) = uVar1;
  return;
}


/* DrawMessage::SetColor(Sexy::Color const&) */

void __thiscall DrawMessage::SetColor(DrawMessage *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x50) = uVar1;
  return;
}


/* DrawMessage::SetFont(Sexy::PrimeTypeface*) */

void __thiscall DrawMessage::SetFont(DrawMessage *this,PrimeTypeface *param_1)

{
  *(PrimeTypeface **)(this + 0x58) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DrawMessage::DrawMessage() */

void __thiscall DrawMessage::DrawMessage(DrawMessage *this)

{
  undefined8 uVar1;
  Renderable *extraout_x1;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  Renderable::Renderable((Renderable *)(this + 0x28),extraout_x1);
  *(undefined ***)this = &PTR_GetClass_067327d0;
  *(undefined ***)(this + 0x28) = &PTR__DrawMessage_06732880;
  FUN_05476574(this + 0x30);
  Sexy::Insets::Insets((Insets *)(this + 0x38));
  Sexy::Color::Color((Color *)(this + 0x48));
  std::string::string((string *)&local_18,"DrawMessage");
  AnimationController::SetDescription((string *)this);
  std::string::~string((string *)&local_18);
  nop();
  FUN_054772c4(this + 0x30,&DAT_056f11a8);
  Board::GetBoardBaseOffset();
  Sexy::Insets::Insets
            ((Insets *)&local_18,-(local_20 / 2),-(local_1c / 2),*(int *)(gLawnApp + 0x724),
             *(int *)(gLawnApp + 0x728));
  *(undefined8 *)(this + 0x38) = local_18;
  *(undefined8 *)(this + 0x40) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x48) = local_18;
  *(undefined8 *)(this + 0x50) = uStack_10;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_32_ThickOutline);
  *(undefined8 *)(this + 0x58) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DrawMessage::StaticNew() */

DrawMessage * DrawMessage::StaticNew(void)

{
  DrawMessage *this;
  
  this = ::operator_new(0x60);
  DrawMessage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DrawMessage::AddToRenderQueue(RenderQueue*) */

void __thiscall DrawMessage::AddToRenderQueue(DrawMessage *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x98);
  Sexy::Delegate1<Sexy::Graphics*>::Delegate1<DrawMessage,void(DrawMessage::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,800000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DrawMessage::Create() */

void DrawMessage::Create(void)

{
  GameObject::Create<DrawMessage>();
  return;
}


/* DrawMessage::Create(std::wstring const&) */

wstring * DrawMessage::Create(wstring *param_1)

{
  wstring *pwVar1;
  
  pwVar1 = (wstring *)Create();
  SetDesc(pwVar1);
  return pwVar1;
}


/* DrawMessage::Create(std::string const&) */

DrawMessage * DrawMessage::Create(string *param_1)

{
  DrawMessage *this;
  
  this = (DrawMessage *)Create();
  SetDesc(this,param_1);
  return this;
}


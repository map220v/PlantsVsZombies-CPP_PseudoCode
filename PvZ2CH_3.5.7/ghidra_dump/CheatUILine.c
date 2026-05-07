// Class: CheatUILine


/* CheatUILine::getLabelColor() const */

undefined8 __thiscall CheatUILine::getLabelColor(CheatUILine *this)

{
  undefined8 in_x8;
  
  Sexy::Color::Color();
  return in_x8;
}


/* CheatUILine::~CheatUILine() */

void __thiscall CheatUILine::~CheatUILine(CheatUILine *this)

{
  *(undefined ***)this = &PTR_GetClass_067539d0;
  std::string::~string((string *)(this + 0x10));
  nop();
  return;
}


/* CheatUILine::~CheatUILine() */

void __thiscall CheatUILine::~CheatUILine(CheatUILine *this)

{
  ~CheatUILine(this);
  AK::FreeHook(this);
  return;
}


/* CheatUILine::StaticGetClass() */

long * CheatUILine::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CheatUILine",uVar2,StaticNew);
  return sClass;
}


/* CheatUILine::GetClass() const */

long * CheatUILine::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CheatUILine",uVar2,StaticNew);
  return sClass;
}


/* CheatUILine::Draw(Sexy::Graphics*) */

void __thiscall CheatUILine::Draw(CheatUILine *this,Graphics *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x14);
  if ((fVar2 <= (float)*(int *)(gLawnApp + 0xd8)) &&
     (fVar1 = (float)(**(code **)(*(long *)this + 0x48))(), 0.0 <= fVar1 + fVar2)) {
    (**(code **)(*(long *)this + 0x60))(this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILine::getDimensions() */

void __thiscall CheatUILine::getDimensions(CheatUILine *this)

{
  float fVar1;
  float fVar2;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)FUN_03c58574(DAT_06ad0bb8);
  fVar2 = (float)(**(code **)(*(long *)this + 0x48))();
  Sexy::FastCurve::SetOutRange(local_10,fVar1,fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* CheatUILine::SetValidContexts(CheatContext) */

void __thiscall CheatUILine::SetValidContexts(CheatUILine *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x48) = param_2;
  return;
}


/* CheatUILine::CheatUILine(Cheat*, std::string const&) */

void __thiscall CheatUILine::CheatUILine(CheatUILine *this,Cheat *param_1,string *param_2)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(Cheat **)(this + 8) = param_1;
  *(undefined ***)this = &PTR_GetClass_067539d0;
  FUN_05475d88(this + 0x10,param_2);
  Sexy::Delegate1<std::string&>::Delegate1((DummyInit *)(this + 0x18));
  *(undefined4 *)(this + 0x48) = 0x7f;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILine::CheatUILine() */

void __thiscall CheatUILine::CheatUILine(CheatUILine *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetClass_067539d0;
  std::string::string((string *)(this + 0x10),"#INVALID#");
  nop();
  Sexy::Delegate1<std::string&>::Delegate1((DummyInit *)(this + 0x18));
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x48) = 0x7f;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatUILine::StaticNew() */

CheatUILine * CheatUILine::StaticNew(void)

{
  CheatUILine *this;
  
  this = ::operator_new(0x50);
  CheatUILine(this);
  return this;
}


/* CheatUILine::GetLabel() */

void CheatUILine::GetLabel(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = FUN_03c5842c(*(undefined8 *)(in_x0 + 0x20),*(undefined8 *)(in_x0 + 0x30));
  if (iVar1 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(in_x0 + 0x18),(SexyURL *)(in_x0 + 0x10));
  }
  FUN_05475d88();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILine::onDraw(Sexy::Graphics*) */

void __thiscall CheatUILine::onDraw(CheatUILine *this,Graphics *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  string *extraout_x1;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_48 [8];
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  fVar5 = (float)FUN_03c58574(0x40800000);
  Sexy::Graphics::Translate(param_1,(int)fVar5,(int)fVar5);
  fVar5 = (float)FUN_03c58574(DAT_06ad0a88 + 4.0);
  Sexy::Graphics::Translate(param_1,(int)fVar5,0);
  iVar3 = FUN_03c58560(200);
  Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
  fVar5 = (float)CheatUIPanel::GetDefaultLineHeight();
  fVar6 = (float)FUN_03c58574(0x40800000);
  Sexy::Insets::Insets(aIStack_38,0,0,iVar3,(int)(fVar5 - fVar6 * 2.0));
  (**(code **)(*(long *)this + 0x50))(aIStack_28,this);
  Sexy::UTF8StringToWString((Sexy *)(this + 0x10),extraout_x1);
  if ((*(Cheat **)(this + 8) != (Cheat *)0x0) &&
     (cVar1 = Cheat::GetKeyboardShortcut(*(Cheat **)(this + 8)), cVar1 != '\0')) {
    uVar4 = FUN_054766ec(auStack_40);
    bVar2 = Cheat::GetKeyboardShortcut(*(Cheat **)(this + 8));
    Sexy::StrFormat(L"%ls (%c)",aIStack_18,uVar4,(ulong)bVar2);
    FUN_054766c8(auStack_40,aIStack_18);
    FUN_05476c50(aIStack_18);
  }
  if (PrimeText_Game::Typeface_CafeteriaBlack_26 == (PrimeText_PotentialTypeface *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_26);
  }
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  WriteWordInRect(param_1,auStack_40,aIStack_38,uVar4,aIStack_18,3,0);
  FUN_05476c50(auStack_40);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatUILine::GetHeight() */

void CheatUILine::GetHeight(void)

{
  Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
  CheatUIPanel::GetDefaultLineHeight();
  return;
}


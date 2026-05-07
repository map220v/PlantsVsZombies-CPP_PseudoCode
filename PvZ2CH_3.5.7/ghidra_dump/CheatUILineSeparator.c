// Class: CheatUILineSeparator


/* CheatUILineSeparator::~CheatUILineSeparator() */

void __thiscall CheatUILineSeparator::~CheatUILineSeparator(CheatUILineSeparator *this)

{
  *(undefined ***)this = &PTR_GetClass_06753f90;
  CheatUILine::~CheatUILine((CheatUILine *)this);
  return;
}


/* CheatUILineSeparator::~CheatUILineSeparator() */

void __thiscall CheatUILineSeparator::~CheatUILineSeparator(CheatUILineSeparator *this)

{
  ~CheatUILineSeparator(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineSeparator::onDraw(Sexy::Graphics*) */

void CheatUILineSeparator::onDraw(Graphics *param_1)

{
  Graphics *in_x1;
  float fVar1;
  float in_s1;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,in_x1);
  fVar1 = (float)CheatUILine::getDimensions((CheatUILine *)param_1);
  Sexy::Graphics::Translate(in_x1,(int)(fVar1 * 0.01),(int)((in_s1 - in_s1 * 0.1) * 0.5));
  Sexy::Insets::Insets(aIStack_18,200,200,200,0xff);
  Sexy::Graphics::SetColor(in_x1,(Color *)aIStack_18);
  Sexy::Graphics::FillRect(in_x1,0,0,(int)(fVar1 * 0.98),(int)(in_s1 * 0.1));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CheatUILineSeparator::StaticGetClass() */

long * CheatUILineSeparator::StaticGetClass(void)

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
  uVar2 = CheatUILine::StaticGetClass();
  (*pcVar3)(plVar1,"CheatUILineSeparator",uVar2,StaticNew);
  return sClass;
}


/* CheatUILineSeparator::GetClass() const */

long * CheatUILineSeparator::GetClass(void)

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
  uVar2 = CheatUILine::StaticGetClass();
  (*pcVar3)(plVar1,"CheatUILineSeparator",uVar2,StaticNew);
  return sClass;
}


/* CheatUILineSeparator::CheatUILineSeparator() */

void __thiscall CheatUILineSeparator::CheatUILineSeparator(CheatUILineSeparator *this)

{
  CheatUILine::CheatUILine((CheatUILine *)this);
  *(undefined ***)this = &PTR_GetClass_06753f90;
  return;
}


/* CheatUILineSeparator::StaticNew() */

CheatUILineSeparator * CheatUILineSeparator::StaticNew(void)

{
  CheatUILineSeparator *this;
  
  this = ::operator_new(0x50);
  CheatUILineSeparator(this);
  return this;
}


/* CheatUILineSeparator::GetHeight() */

float CheatUILineSeparator::GetHeight(void)

{
  float fVar1;
  
  fVar1 = (float)CheatUILine::GetHeight();
  return fVar1 * 0.2;
}


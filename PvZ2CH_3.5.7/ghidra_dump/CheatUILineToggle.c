// Class: CheatUILineToggle


/* CheatUILineToggle::~CheatUILineToggle() */

void __thiscall CheatUILineToggle::~CheatUILineToggle(CheatUILineToggle *this)

{
  *(undefined ***)this = &PTR_GetClass_06753a50;
  CheatUILine::~CheatUILine((CheatUILine *)this);
  return;
}


/* CheatUILineToggle::~CheatUILineToggle() */

void __thiscall CheatUILineToggle::~CheatUILineToggle(CheatUILineToggle *this)

{
  ~CheatUILineToggle(this);
  AK::FreeHook(this);
  return;
}


/* CheatUILineToggle::StaticGetClass() */

long * CheatUILineToggle::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CheatUILineToggle",uVar2,StaticNew);
  return sClass;
}


/* CheatUILineToggle::GetClass() const */

long * CheatUILineToggle::GetClass(void)

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
  (*pcVar3)(plVar1,"CheatUILineToggle",uVar2,StaticNew);
  return sClass;
}


/* CheatUILineToggle::CheatUILineToggle() */

void __thiscall CheatUILineToggle::CheatUILineToggle(CheatUILineToggle *this)

{
  CheatUILine::CheatUILine((CheatUILine *)this);
  *(undefined ***)this = &PTR_GetClass_06753a50;
  return;
}


/* CheatUILineToggle::StaticNew() */

CheatUILineToggle * CheatUILineToggle::StaticNew(void)

{
  CheatUILineToggle *this;
  
  this = ::operator_new(0x50);
  CheatUILineToggle(this);
  return this;
}


/* CheatUILineToggle::onTap(Sexy::Point const&) */

void CheatUILineToggle::onTap(Point *param_1)

{
  long *extraout_x0;
  
  Sexy::ProfileManager::GetListener((ProfileManager *)param_1);
  nop();
  (**(code **)(*extraout_x0 + 0x58))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CheatUILineToggle::onDraw(Sexy::Graphics*) */

void __thiscall CheatUILineToggle::onDraw(CheatUILineToggle *this,Graphics *param_1)

{
  int iVar1;
  char cVar2;
  long *extraout_x0;
  Image *pIVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  CachedResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  fVar5 = (float)FUN_03c58574(0x40800000);
  Sexy::Graphics::Translate(param_1,(int)fVar5,(int)fVar5);
  Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
  fVar5 = (float)CheatUIPanel::GetDefaultLineHeight();
  fVar6 = (float)FUN_03c58574(DAT_06ad0a88);
  Sexy::Insets::Insets(aIStack_28,0,(int)((fVar5 - fVar6) * 0.5),(int)fVar6,(int)fVar6);
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::ProfileManager::GetListener((ProfileManager *)this);
  nop();
  cVar2 = (**(code **)(*extraout_x0 + 0x48))();
  if (cVar2 == '\0') {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad0bc8;
  }
  else {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad0c30;
  }
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->(this_00);
  lVar4 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0bc8);
  iVar1 = *(int *)(lVar4 + 0x38);
  lVar4 = CachedResourcePtr<Sexy::Image>::operator->
                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad0bc8);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar1,*(int *)(lVar4 + 0x3c));
  Sexy::Graphics::DrawImage(param_1,pIVar3,(TRect *)aIStack_28,(TRect *)aIStack_18);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  CheatUILine::onDraw((CheatUILine *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


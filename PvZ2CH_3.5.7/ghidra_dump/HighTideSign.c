// Class: HighTideSign


/* HighTideSign::CalcRenderOrder() const */

undefined8 HighTideSign::CalcRenderOrder(void)

{
  return 0x24dda;
}


/* non-virtual thunk to HighTideSign::CalcRenderOrder() const */

void __thiscall HighTideSign::CalcRenderOrder(HighTideSign *this)

{
  CalcRenderOrder();
  return;
}


/* HighTideSign::~HighTideSign() */

void __thiscall HighTideSign::~HighTideSign(HighTideSign *this)

{
  *(undefined ***)this = &PTR_GetClass_067367f0;
  *(undefined ***)(this + 0x10) = &PTR__HighTideSign_067369d8;
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to HighTideSign::~HighTideSign() */

void __thiscall HighTideSign::~HighTideSign(HighTideSign *this)

{
  ~HighTideSign(this + -0x10);
  return;
}


/* HighTideSign::~HighTideSign() */

void __thiscall HighTideSign::~HighTideSign(HighTideSign *this)

{
  ~HighTideSign(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HighTideSign::~HighTideSign() */

void __thiscall HighTideSign::~HighTideSign(HighTideSign *this)

{
  ~HighTideSign(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HighTideSign::StaticClassInit() */

void HighTideSign::StaticClassInit(void)

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
    std::string::string(asStack_10,"HighTideSign");
    (*pcVar2)(plVar1,asStack_10,FUN_03b9cfa8,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HighTideSign::StaticGetClass() */

long * HighTideSign::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HighTideSign",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HighTideSign::GetClass() const */

long * HighTideSign::GetClass(void)

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
  (*pcVar3)(plVar1,"HighTideSign",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HighTideSign::Initialize(float, HIGH_TIDE_SIGN_TYPE) */

void __thiscall HighTideSign::Initialize(undefined4 param_1,HighTideSign *this,undefined4 param_3)

{
  *(undefined4 *)(this + 0xa4) = param_1;
  *(undefined4 *)(this + 0xa8) = param_3;
  return;
}


/* HighTideSign::HighTideSign() */

void __thiscall HighTideSign::HighTideSign(HighTideSign *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_067367f0;
  *(undefined ***)(this + 0x10) = &PTR__HighTideSign_067369d8;
  Sexy::Insets::Insets((Insets *)(this + 0xac));
  Sexy::Insets::Insets((Insets *)(this + 0xbc));
  return;
}


/* HighTideSign::StaticNew() */

HighTideSign * HighTideSign::StaticNew(void)

{
  HighTideSign *this;
  
  this = ::operator_new(0xd0);
  HighTideSign(this);
  return this;
}


/* HighTideSign::getSignImage() */

void __thiscall HighTideSign::getSignImage(HighTideSign *this)

{
  if (*(int *)(this + 0xa8) != 1) {
    CachedResourcePtr<Sexy::Image>::operator->((CachedResourcePtr<Sexy::Image> *)&DAT_06acd2d8);
    return;
  }
  CachedResourcePtr<Sexy::Image>::operator->((CachedResourcePtr<Sexy::Image> *)&DAT_06acd298);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HighTideSign::onDraw(Sexy::Graphics*) */

void __thiscall HighTideSign::onDraw(HighTideSign *this,Graphics *param_1)

{
  Color *pCVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  float fVar6;
  float fVar7;
  GraphicsAutoState aGStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  pCVar1 = (Color *)(this + 0xbc);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
  pIVar5 = (Image *)getSignImage(this);
  Sexy::Insets::Insets((Insets *)&local_18);
  cVar2 = Sexy::operator==(pCVar1,(Color *)&local_18);
  if (cVar2 != '\0') {
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded
                      ((int)((float)iVar3 - *(float *)(this + 0xa4)));
    iVar4 = BoardTransforms::GridToBoardSpaceYUnbounded(0);
    Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(pIVar5 + 0x38),*(int *)(pIVar5 + 0x3c));
    *(undefined8 *)(this + 0xac) = local_18;
    *(undefined8 *)(this + 0xb4) = uStack_10;
    fVar6 = (float)FUN_03b9cde8((float)iVar3 - 54.0);
    fVar7 = (float)FUN_03b9cde8((float)iVar4 - 130.0);
    Sexy::Insets::Insets
              ((Insets *)&local_18,(int)fVar6,(int)fVar7,
               (int)((float)*(int *)(pIVar5 + 0x38) * 0.35),
               (int)((float)*(int *)(pIVar5 + 0x3c) * 0.35));
    *(undefined8 *)pCVar1 = local_18;
    *(undefined8 *)(this + 0xc4) = uStack_10;
  }
  Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)pCVar1,(TRect *)(this + 0xac));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


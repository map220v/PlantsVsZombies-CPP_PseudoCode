// Class: Effect_ScreenFade


/* Effect_ScreenFade::onInitialized() */

void __thiscall Effect_ScreenFade::onInitialized(Effect_ScreenFade *this)

{
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ScreenFade::StaticClassInit() */

void Effect_ScreenFade::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SingleScreenFade");
    (*pcVar3)(plVar2,asStack_10,FUN_03cd1d94,0x24,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Effect_ScreenFade");
    (*pcVar3)(plVar2,asStack_10,FUN_03cd2280,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ScreenFade::StaticGetClass() */

long * Effect_ScreenFade::StaticGetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_ScreenFade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ScreenFade::GetClass() const */

long * Effect_ScreenFade::GetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_ScreenFade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ScreenFade::advanceSequence() */

void __thiscall Effect_ScreenFade::advanceSequence(Effect_ScreenFade *this)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(this + 0xb8);
  *(int *)(this + 0xb8) = iVar1 + 1;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar2 = FUN_03cd1830(*(undefined8 *)(this + 0xa0),*(undefined8 *)(this + 0xa8));
  if ((ulong)(long)(iVar1 + 1) < uVar2) {
    return;
  }
  StandaloneEffect::triggerCompletion((StandaloneEffect *)this);
  return;
}


/* Effect_ScreenFade::onUpdate() */

void __thiscall Effect_ScreenFade::onUpdate(Effect_ScreenFade *this)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_03cd1830(*(undefined8 *)(this + 0xa0),*(undefined8 *)(this + 0xa8));
  if ((ulong)(long)*(int *)(this + 0xb8) < uVar1) {
    fVar3 = (float)PVZ_Dt();
    fVar4 = *(float *)(this + 0xbc);
    *(float *)(this + 0xbc) = fVar3 + fVar4;
    lVar2 = FUN_03cd186c(*(undefined8 *)(this + 0xa0),(long)*(int *)(this + 0xb8));
    if (*(float *)(lVar2 + 0x14) <= fVar3 + fVar4) {
      advanceSequence(this);
      return;
    }
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03cd1c54 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Effect_ScreenFade::calcColor(ScreenFadeDirection, Sexy::Color, CurveType, float, float, float,
   float) */

Insets * Effect_ScreenFade::calcColor
                   (Insets *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined8 param_6,int param_7,Insets *param_8,
                   undefined4 param_9)

{
  float unaff_s8;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_5;
  local_4 = param_4;
  if (param_7 == 1) {
    unaff_s8 = CurveLerp<float>(param_2,param_2._0_4_,param_3,&local_4,&local_8,param_9);
  }
  else if (param_7 == 0) {
    unaff_s8 = CurveLerp<float>(param_2,param_2._0_4_,param_3,&local_8,&local_4,param_9);
  }
  else if (param_7 == 2) {
    unaff_s8 = 1.0;
  }
  Sexy::Insets::Insets(param_1,param_8);
  *(int *)(param_1 + 0xc) = (int)(unaff_s8 * (float)*(int *)(param_1 + 0xc));
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ScreenFade::onDraw(Sexy::Graphics*) */

void __thiscall Effect_ScreenFade::onDraw(Effect_ScreenFade *this,Graphics *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  uVar5 = *(undefined8 *)(this + 0xa0);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)(this + 0xb8);
  uVar3 = FUN_03cd1830(uVar5,*(undefined8 *)(this + 0xa8));
  if ((ulong)(long)iVar2 < uVar3) {
    puVar4 = (undefined4 *)FUN_03cd186c(uVar5,(long)iVar2);
    uVar1 = *puVar4;
    Sexy::Insets::Insets(aIStack_18,(Insets *)(puVar4 + 1));
    calcColor(aCStack_28,puVar4[5],*(undefined4 *)(this + 0xbc),puVar4[7],puVar4[8],this,uVar1,
              aIStack_18,puVar4[6]);
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)aIStack_18,param_1);
    Sexy::Graphics::SetLinearBlend(param_1,true);
    Sexy::Graphics::SetDrawMode(param_1,0);
    Sexy::Graphics::SetColor(param_1,aCStack_28);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    Sexy::Graphics::FillRect(param_1,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ScreenFade::Create() */

Effect_ScreenFade * Effect_ScreenFade::Create(void)

{
  Effect_ScreenFade *pEVar1;
  
  pEVar1 = GameObject::Create<Effect_ScreenFade>();
  FUN_03cd18f8(pEVar1 + 0x1c);
  return pEVar1;
}


/* Effect_ScreenFade::Effect_ScreenFade() */

void __thiscall Effect_ScreenFade::Effect_ScreenFade(Effect_ScreenFade *this)

{
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_0675f700;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  return;
}


/* Effect_ScreenFade::StaticNew() */

Effect_ScreenFade * Effect_ScreenFade::StaticNew(void)

{
  Effect_ScreenFade *this;
  
  this = ::operator_new(0xc0);
  Effect_ScreenFade(this);
  return this;
}


/* Effect_ScreenFade::~Effect_ScreenFade() */

void __thiscall Effect_ScreenFade::~Effect_ScreenFade(Effect_ScreenFade *this)

{
  *(undefined ***)this = &PTR_GetClass_0675f700;
  std::vector<SingleScreenFade,std::allocator<SingleScreenFade>>::~vector
            ((vector<SingleScreenFade,std::allocator<SingleScreenFade>> *)(this + 0xa0));
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_ScreenFade::~Effect_ScreenFade() */

void __thiscall Effect_ScreenFade::~Effect_ScreenFade(Effect_ScreenFade *this)

{
  ~Effect_ScreenFade(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ScreenFade::AddFade(ScreenFadeDirection, Sexy::Color, float, CurveType, float, float) */

void __thiscall
Effect_ScreenFade::AddFade
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,Effect_ScreenFade *this,
          undefined4 param_5,undefined8 *param_6,undefined4 param_7)

{
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SingleScreenFade::SingleScreenFade((SingleScreenFade *)&local_30);
  local_2c = *param_6;
  uStack_24 = param_6[1];
  local_30 = param_5;
  local_1c = param_1;
  local_18 = param_7;
  local_14 = param_2;
  local_10 = param_3;
  std::vector<SingleScreenFade,std::allocator<SingleScreenFade>>::push_back
            ((vector<SingleScreenFade,std::allocator<SingleScreenFade>> *)(this + 0xa0),
             (SingleScreenFade *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ScreenFade::Create(ScreenFadeDirection, Sexy::Color, float, CurveType) */

void Effect_ScreenFade::Create
               (Effect_ScreenFade *param_1,undefined4 param_2,Insets *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Create();
  Sexy::Insets::Insets(aIStack_18,param_3);
  AddFade(param_1,0,0x3f800000,uVar1,param_2,aIStack_18,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ScreenFade::Create(Sexy::Color, float, float, CurveType) */

void Effect_ScreenFade::Create
               (Effect_ScreenFade *param_1,Effect_ScreenFade *param_2,Insets *param_3,
               undefined4 param_4)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Create();
  Sexy::Insets::Insets(aIStack_18,param_3);
  AddFade(param_1,0,0x3f800000,uVar1,1,aIStack_18,param_4);
  Sexy::Insets::Insets(aIStack_18,param_3);
  AddFade(param_2._0_4_,0,0x3f800000,uVar1,0,aIStack_18,param_4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


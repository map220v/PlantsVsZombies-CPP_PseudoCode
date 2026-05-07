// Class: DropingImpEffectAnim


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropingImpEffectAnim::DoPowerupCuke() */

void __thiscall DropingImpEffectAnim::DoPowerupCuke(DropingImpEffectAnim *this)

{
  string asStack_10 [8];
  long local_8;
  
  this[0x114] = (DropingImpEffectAnim)0x1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"animation");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DropingImpEffectAnim::~DropingImpEffectAnim() */

void __thiscall DropingImpEffectAnim::~DropingImpEffectAnim(DropingImpEffectAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_067e4520;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* DropingImpEffectAnim::~DropingImpEffectAnim() */

void __thiscall DropingImpEffectAnim::~DropingImpEffectAnim(DropingImpEffectAnim *this)

{
  ~DropingImpEffectAnim(this);
  AK::FreeHook(this);
  return;
}


/* DropingImpEffectAnim::SetDate(Sexy::Point, int) */

void __thiscall
DropingImpEffectAnim::SetDate(DropingImpEffectAnim *this,undefined8 *param_2,undefined4 param_3)

{
  *(undefined8 *)(this + 0x10c) = *param_2;
  *(undefined4 *)(this + 0x118) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropingImpEffectAnim::StaticClassInit() */

void DropingImpEffectAnim::StaticClassInit(void)

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
    std::string::string(asStack_10,"DropingImpEffectAnim");
    (*pcVar2)(plVar1,asStack_10,FUN_04109534,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DropingImpEffectAnim::StaticGetClass() */

long * DropingImpEffectAnim::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"DropingImpEffectAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DropingImpEffectAnim::GetClass() const */

long * DropingImpEffectAnim::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"DropingImpEffectAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DropingImpEffectAnim::SetImpPosition(Sexy::SexyVector2) */

void DropingImpEffectAnim::SetImpPosition
               (undefined4 param_1,undefined4 param_2,StandaloneEffect *param_3)

{
  int iVar1;
  undefined8 local_8;
  
  local_8 = CONCAT44(param_2,param_1);
  iVar1 = FUN_041081f4(*(undefined4 *)(param_3 + 0x1c),param_3 + 0x20);
  StandaloneEffect::SetScreenSpaceOrigin(param_3,(SexyVector2 *)&local_8,iVar1);
  return;
}


/* DropingImpEffectAnim::DropingImpEffectAnim() */

void __thiscall DropingImpEffectAnim::DropingImpEffectAnim(DropingImpEffectAnim *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067e4520;
  Sexy::Point::Point((Point *)(this + 0x10c));
  this[0x114] = (DropingImpEffectAnim)0x0;
  *(undefined4 *)(this + 0x118) = 3;
  return;
}


/* DropingImpEffectAnim::StaticNew() */

DropingImpEffectAnim * DropingImpEffectAnim::StaticNew(void)

{
  DropingImpEffectAnim *this;
  
  this = ::operator_new(0x120);
  DropingImpEffectAnim(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropingImpEffectAnim::onUpdate() */

void __thiscall DropingImpEffectAnim::onUpdate(DropingImpEffectAnim *this)

{
  int iVar1;
  float *pfVar2;
  Point *extraout_x1;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_38;
  undefined4 local_34;
  TPoint<int> aTStack_30 [8];
  float local_28 [2];
  float local_20;
  undefined4 local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  if (this[0x114] == (DropingImpEffectAnim)0x0) {
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0x10c),extraout_x1);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)local_28,0,0);
    Sexy::TPoint<int>::operator+(aTStack_30,(TPoint *)local_28);
    Sexy::Point::Point((Point *)&local_38,(TPoint *)&local_20);
    pfVar2 = (float *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
    fVar6 = *pfVar2;
    fVar7 = pfVar2[1];
    iVar1 = FUN_0410856c(local_38);
    uVar3 = (ulong)(int)(fVar6 - (float)iVar1);
    uVar4 = (long)uVar3 >> 0x3f;
    uVar4 = (uVar3 ^ uVar4) - uVar4;
    local_28[0] = (float)PVZ_Dt();
    local_28[0] = local_28[0] * 80.0;
    iVar1 = (int)uVar4;
    if (iVar1 == 0) {
      this[0x114] = (DropingImpEffectAnim)0x1;
      std::string::string((string *)&local_20,"land");
      Effect_PopAnim::PlaySingleAnimation
                ((Effect_PopAnim *)this,(string *)&local_20,uVar4 & 0xffffffff);
      std::string::~string((string *)&local_20);
      nop();
    }
    else {
      fVar5 = (float)iVar1;
      local_20 = fVar5;
      pfVar2 = eastl::min_alt<float>(local_28,&local_20);
      fVar8 = *pfVar2;
      iVar1 = FUN_0410856c(local_34);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_20,fVar6 - fVar8,
                 fVar7 + fVar8 * (((float)iVar1 - fVar7) / fVar5));
      SetImpPosition(local_20,local_1c,this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropingImpEffectAnim::registerForEvents() */

void __thiscall DropingImpEffectAnim::registerForEvents(DropingImpEffectAnim *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DoPowerupCuke);
  Sexy::Delegate0::Delegate0<DropingImpEffectAnim,void(DropingImpEffectAnim::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PowerupTacticalCukeExplod,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropingImpEffectAnim::onAnimStopped(std::string const&) */

void __thiscall DropingImpEffectAnim::onAnimStopped(DropingImpEffectAnim *this,string *param_1)

{
  bool bVar1;
  long *plVar2;
  Board *pBVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"land");
  if (bVar1) {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"skycity_ggtimp");
    plVar2 = (long *)Board::AddZombie(pBVar3,asStack_10,*(undefined4 *)(this + 0x118),
                                      *(undefined4 *)(this + 0x10c),*(undefined4 *)(this + 0x110));
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*plVar2 + 0x260))(plVar2);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  else {
    bVar1 = std::operator==(param_1,"animation");
    if (bVar1) {
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  Effect_PopAnim::onAnimStopped((string *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


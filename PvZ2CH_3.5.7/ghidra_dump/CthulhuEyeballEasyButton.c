// Class: CthulhuEyeballEasyButton


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::GetEyeCloseSpawnName() */

void __thiscall CthulhuEyeballEasyButton::GetEyeCloseSpawnName(CthulhuEyeballEasyButton *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"spawn");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::GetEyeCloseTurnUpgradeName() */

void __thiscall CthulhuEyeballEasyButton::GetEyeCloseTurnUpgradeName(CthulhuEyeballEasyButton *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"expend_01");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::GetEyeOpenTurnUpgradeName() */

void CthulhuEyeballEasyButton::GetEyeOpenTurnUpgradeName(void)

{
  long lVar1;
  int iVar2;
  long *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  iVar2 = (**(code **)(*in_x0 + 0x238))();
  if (iVar2 == 2) {
    std::string::string(in_x8,"ready04");
    nop();
  }
  else {
    std::string::string(in_x8,"ready05");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::GetAbsorbDarkName() */

void __thiscall CthulhuEyeballEasyButton::GetAbsorbDarkName(CthulhuEyeballEasyButton *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"animation01");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* CthulhuEyeballEasyButton::unregisterForEvents() */

void CthulhuEyeballEasyButton::unregisterForEvents(void)

{
  void *in_x0;
  
  nop();
  Board::UnregisterTouchGameplayObject(*(Board **)(gLawnApp + 0x9f0),in_x0);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,in_x0);
  return;
}


/* CthulhuEyeballEasyButton::GetEyeCloseTurnOpenName() */

void CthulhuEyeballEasyButton::GetEyeCloseTurnOpenName(void)

{
  long *in_x0;
  ulong uVar1;
  
  uVar1 = (**(code **)(*in_x0 + 0x238))();
  Sexy::StrFormat("ready0%d",uVar1 & 0xffffffff);
  return;
}


/* CthulhuEyeballEasyButton::GetEyeOpenIdleName() */

void CthulhuEyeballEasyButton::GetEyeOpenIdleName(void)

{
  long *in_x0;
  ulong uVar1;
  
  uVar1 = (**(code **)(*in_x0 + 0x238))();
  Sexy::StrFormat("idle0%d",uVar1 & 0xffffffff);
  return;
}


/* CthulhuEyeballEasyButton::GetEyeOpenFireName() */

void CthulhuEyeballEasyButton::GetEyeOpenFireName(void)

{
  long *in_x0;
  ulong uVar1;
  
  uVar1 = (**(code **)(*in_x0 + 0x238))();
  Sexy::StrFormat("attack0%d",uVar1 & 0xffffffff);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::StaticClassInit() */

void CthulhuEyeballEasyButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"CthulhuEyeballEasyButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04d70270,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuEyeballEasyButton::StaticGetClass() */

long * CthulhuEyeballEasyButton::StaticGetClass(void)

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
  uVar2 = CthulhuEasyButton::StaticGetClass();
  (*pcVar3)(plVar1,"CthulhuEyeballEasyButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuEyeballEasyButton::GetClass() const */

long * CthulhuEyeballEasyButton::GetClass(void)

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
  uVar2 = CthulhuEasyButton::StaticGetClass();
  (*pcVar3)(plVar1,"CthulhuEyeballEasyButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuEyeballEasyButton::IsShowEffect() */

bool __thiscall CthulhuEyeballEasyButton::IsShowEffect(CthulhuEyeballEasyButton *this)

{
  return 0 < *(int *)(this + 0xb8);
}


/* CthulhuEyeballEasyButton::Activiate() */

void __thiscall CthulhuEyeballEasyButton::Activiate(CthulhuEyeballEasyButton *this)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = IsShowEffect(this);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0xb0) = 0;
    pcVar2 = *(code **)(*(long *)this + 0x1e8);
    *(undefined4 *)(this + 0xb4) = 0;
    (*pcVar2)(this,1);
  }
  return;
}


/* CthulhuEyeballEasyButton::IsEnableClick() */

bool __thiscall CthulhuEyeballEasyButton::IsEnableClick(CthulhuEyeballEasyButton *this)

{
  return 4 < *(int *)(this + 0xb8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::GenerateEffectPosition() */

void __thiscall CthulhuEyeballEasyButton::GenerateEffectPosition(CthulhuEyeballEasyButton *this)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar1 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  local_28 = (float)(200 - (iVar1 >> 2));
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar1 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  fStack_24 = (float)(0xa0 - (iVar1 >> 2));
  Sexy::Insets::Insets((Insets *)&local_18,(int)local_28 + -0xf,(int)fStack_24 + -0xf,0x1e,0x1e);
  uVar2 = CONCAT44(uStack_c,local_10);
  bVar3 = local_8 == ___stack_chk_guard;
  local_10 = local_20;
  *(undefined8 *)(this + 0xcc) = local_18;
  *(undefined8 *)(this + 0xd4) = uVar2;
  if (bVar3) {
    return;
  }
  local_18 = CONCAT44(fStack_24,local_28);
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28,fStack_24,local_20);
}


/* CthulhuEyeballEasyButton::onDraw(Sexy::Graphics*) */

void __thiscall CthulhuEyeballEasyButton::onDraw(CthulhuEyeballEasyButton *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  StandaloneEffect *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x110));
  if ((bVar1) && (cVar2 = IsShowEffect(this), cVar2 != '\0')) {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
    StandaloneEffect::Draw(this_00,param_1);
    return;
  }
  return;
}


/* CthulhuEyeballEasyButton::PlaySingleAnimation(std::string) */

void __thiscall
CthulhuEyeballEasyButton::PlaySingleAnimation(CthulhuEyeballEasyButton *this,undefined8 param_2)

{
  bool bVar1;
  Effect_PopAnim *pEVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x110));
  if (!bVar1) {
    return;
  }
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110))
  ;
  Effect_PopAnim::PlaySingleAnimation(pEVar2,param_2,0);
  return;
}


/* CthulhuEyeballEasyButton::PlayLoopAnimation(std::string) */

void __thiscall
CthulhuEyeballEasyButton::PlayLoopAnimation(CthulhuEyeballEasyButton *this,undefined8 param_2)

{
  bool bVar1;
  Effect_PopAnim *pEVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x110));
  if (!bVar1) {
    return;
  }
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110))
  ;
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar2,param_2,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::SetState(int) */

void __thiscall CthulhuEyeballEasyButton::SetState(CthulhuEyeballEasyButton *this,int param_1)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xb8) == param_1) goto switchD_04d6e848_default;
  *(int *)(this + 0xb8) = param_1;
  switch(param_1) {
  case 1:
    pcVar1 = *(code **)(*(long *)this + 0x240);
    break;
  case 2:
    pcVar1 = *(code **)(*(long *)this + 0x248);
    goto LAB_04d6e890;
  case 3:
    pcVar1 = *(code **)(*(long *)this + 0x250);
    break;
  case 4:
    pcVar1 = *(code **)(*(long *)this + 600);
    break;
  case 5:
    pcVar1 = *(code **)(*(long *)this + 0x260);
LAB_04d6e890:
    (*pcVar1)(asStack_10,this);
    PlayLoopAnimation(this,asStack_10);
    std::string::~string(asStack_10);
    goto switchD_04d6e848_default;
  case 6:
    pcVar1 = *(code **)(*(long *)this + 0x268);
    break;
  case 7:
    pcVar1 = *(code **)(*(long *)this + 0x270);
    break;
  case 8:
    pcVar1 = *(code **)(*(long *)this + 0x278);
    break;
  default:
    goto switchD_04d6e848_default;
  }
  (*pcVar1)(asStack_10,this);
  PlaySingleAnimation(this,asStack_10);
  std::string::~string(asStack_10);
switchD_04d6e848_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CthulhuEyeballEasyButton::GetStage() */

int __thiscall CthulhuEyeballEasyButton::GetStage(CthulhuEyeballEasyButton *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  iVar2 = FUN_04d6d668(*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20));
  iVar2 = iVar2 + -1;
  lVar3 = (long)iVar2;
  if (-1 < iVar2) {
    do {
      iVar1 = *(int *)(this + 0xb0);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
      piVar5 = (int *)FUN_04d6d67c(*(undefined8 *)(lVar4 + 0x18),lVar3);
      if (*piVar5 <= iVar1) {
        return iVar2 + 1;
      }
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + -1;
    } while (iVar2 != -1);
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::GetEyeCloseIdleName() */

void CthulhuEyeballEasyButton::GetEyeCloseIdleName(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  string *in_x8;
  float fVar3;
  
  lVar1 = ___stack_chk_guard;
  fVar3 = *(float *)(in_x0 + 0xb4);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xc0));
  if ((*(float *)(lVar2 + 0x30) <= fVar3) ||
     (fVar3 = *(float *)(in_x0 + 0xb4),
     lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0xc0)),
     *(float *)(lVar2 + 0x30) * 0.5 <= fVar3)) {
    std::string::string(in_x8,"prepare02");
    nop();
  }
  else {
    std::string::string(in_x8,"prepare01");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::SetDangerroomInfo(CthulhuDangerroomInfo) */

void __thiscall
CthulhuEyeballEasyButton::SetDangerroomInfo
          (CthulhuEyeballEasyButton *this,AnimationSequenceEntry *param_2)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  AnimationSequenceEntry aAStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationSequenceEntry::AnimationSequenceEntry(aAStack_18,param_2);
  CthulhuEasyButton::SetDangerroomInfo((CthulhuEasyButton *)this,aAStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aAStack_18);
  uVar1 = (**(code **)(*(long *)this + 0x238))(this);
  *(undefined4 *)(this + 0xbc) = uVar1;
  fVar3 = *(float *)(this + 0xb4);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  if (*(float *)(lVar2 + 0x30) <= fVar3) {
    (**(code **)(*(long *)this + 0x1e8))(this,5);
  }
  else {
    (**(code **)(*(long *)this + 0x1e8))(this,2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuEyeballEasyButton::onTouchEvent(Sexy::Touch const&) */

char __thiscall
CthulhuEyeballEasyButton::onTouchEvent(CthulhuEyeballEasyButton *this,Touch *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    fVar2 = (float)FUN_04d6d870((float)*(int *)(param_1 + 0x10));
    fVar3 = (float)FUN_04d6d870((float)*(int *)(param_1 + 0x14));
    cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0xcc),(int)fVar2,(int)fVar3);
    Sexy::OutputDebugStrF((wchar_t *)"Touch on me %f %f",(double)fVar2,(double)fVar3);
    if ((cVar1 != '\0') && (cVar1 = IsEnableClick(this), cVar1 != '\0')) {
      (**(code **)(*(long *)this + 0x1e8))(this,7);
      return cVar1;
    }
  }
  return '\0';
}


/* CthulhuEyeballEasyButton::UpdateTriggerTimeSum() */

void __thiscall CthulhuEyeballEasyButton::UpdateTriggerTimeSum(CthulhuEyeballEasyButton *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(int *)(this + 0xb8) != 0) && (*(int *)(this + 0xb8) < 4)) {
    fVar4 = *(float *)(this + 0xb4);
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0);
    fVar2 = (float)PVZ_Dt();
    fVar3 = *(float *)(this + 0xb4);
    *(float *)(this + 0xb4) = fVar2 + fVar3;
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if (*(float *)(lVar1 + 0x30) <= fVar2 + fVar3) {
      (**(code **)(*(long *)this + 0x1e8))(this,4);
      return;
    }
    fVar2 = *(float *)(this + 0xb4);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    if ((*(float *)(lVar1 + 0x30) * 0.5 <= fVar2) &&
       (lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00),
       fVar4 < *(float *)(lVar1 + 0x30) * 0.5)) {
      (**(code **)(*(long *)this + 0x1e8))(this,3);
    }
  }
  return;
}


/* CthulhuEyeballEasyButton::onUpdate() */

void __thiscall CthulhuEyeballEasyButton::onUpdate(CthulhuEyeballEasyButton *this)

{
  bool bVar1;
  char cVar2;
  StandaloneEffect *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x110));
  if ((bVar1) && (cVar2 = IsShowEffect(this), cVar2 != '\0')) {
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
    StandaloneEffect::Update(this_00);
    UpdateTriggerTimeSum(this);
    return;
  }
  UpdateTriggerTimeSum(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::PlayAbsorbEffect() */

void CthulhuEyeballEasyButton::PlayAbsorbEffect(void)

{
  CthulhuEyeballEasyButton *in_x0;
  Effect_PopAnim *this;
  ResourceInfo *pRVar1;
  string asStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_CTHULHUACTINIA_EYE_CONSUM");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar1,(RtClass *)0x0);
  local_18[0] = GenerateEffectPosition(in_x0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_18,900000);
  Effect_PopAnim::SetCentered(this,true);
  (**(code **)(*(long *)in_x0 + 0x278))(asStack_20);
  Effect_PopAnim::PlaySingleAnimation(this,asStack_20,0);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuEyeballEasyButton::CthulhuAbsorbDark(Plant*) */

void CthulhuEyeballEasyButton::CthulhuAbsorbDark(Plant *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  code *pcVar5;
  
  cVar2 = IsShowEffect((CthulhuEyeballEasyButton *)param_1);
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0xb8) != 7)) {
    iVar1 = *(int *)(param_1 + 0xbc);
    pcVar5 = *(code **)(*(long *)param_1 + 0x238);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    uVar3 = (*pcVar5)(param_1);
    *(undefined4 *)(param_1 + 0xbc) = uVar3;
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xc0));
    lVar4 = FUN_04d6d668(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20));
    if (lVar4 != iVar1) {
      PlayAbsorbEffect();
    }
    if ((*(int *)(param_1 + 0xbc) != iVar1) && (*(int *)(param_1 + 0xb8) == 5)) {
      (**(code **)(*(long *)param_1 + 0x1e8))(param_1,6);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::registerForEvents() */

void __thiscall CthulhuEyeballEasyButton::registerForEvents(CthulhuEyeballEasyButton *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)&DAT_00000228);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<CthulhuEyeballEasyButton,bool(CthulhuEyeballEasyButton::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_80);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_98,(RtWeakPtrBase *)aRStack_a0);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject
            (pBVar2,aDStack_68,9,(RtWeakPtr<Sexy::SoundResource> *)&local_98,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CthulhuAbsorbDark);
  local_b0 = local_88;
  local_c0 = local_98;
  uStack_b8 = uStack_90;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<CthulhuEyeballEasyButton,void(CthulhuEyeballEasyButton::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::CthulhuAbsorbDark,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,PlantDied);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<CthulhuEyeballEasyButton,void(CthulhuEyeballEasyButton::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDied,&local_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::Initialize() */

void CthulhuEyeballEasyButton::Initialize(void)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this;
  undefined4 uVar1;
  CthulhuEyeballEasyButton *in_x0;
  undefined8 uVar2;
  ResourceInfo *pRVar3;
  Effect_PopAnim *pEVar4;
  StandaloneEffect *pSVar5;
  long *plVar6;
  RtObject *this_00;
  CthulhuEyeballEffect *pCVar7;
  code *pcVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  this = (RtWeakPtr<SpartanBambooMatrixSystem> *)(in_x0 + 0x110);
  local_8 = ___stack_chk_guard;
  nop();
  FUN_05475d88(asStack_20,in_x0 + 0xa8);
  CthulhuUtils::GetPropertySheetPtr((CthulhuUtils *)local_18,asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(in_x0 + 0xc0),(RtWeakPtr *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_20);
  *(undefined4 *)(in_x0 + 0xb0) = 0;
  pcVar8 = *(code **)(*(long *)in_x0 + 0x238);
  *(undefined4 *)(in_x0 + 0xb4) = 0;
  uVar1 = (*pcVar8)();
  *(undefined4 *)(in_x0 + 0xbc) = uVar1;
  uVar2 = CthulhuEyeballEffect::StaticGetClass();
  GameObject::Create(uVar2,0x27);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this,(RtWeakPtrBase *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::string(asStack_20,"POPANIM_EFFECTS_CTHULHUACTINIA_EYE");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_20);
  nop();
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar3,(RtClass *)0x0);
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Effect_PopAnim::SetCentered(pEVar4,true);
  pSVar5 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  StandaloneEffect::SetVisibility(pSVar5,true);
  pSVar5 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  StandaloneEffect::SetKeepAlive(pSVar5,true);
  local_18[0] = GenerateEffectPosition(in_x0);
  pSVar5 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar5,(SexyVector3 *)local_18,900000);
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  (**(code **)(*plVar6 + 0xb8))(0x3f4ccccd,0x3f4ccccd);
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  pCVar7 = Sexy::RtObject::Cast<CthulhuEyeballEffect>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_20,(RtWeakPtrBase *)aRStack_28);
  CthulhuEyeballEffect::SetCthulhuEasyButton(pCVar7,asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  (**(code **)(*(long *)in_x0 + 0x1e8))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::RebuildParams(std::string, bool) */

void __thiscall
CthulhuEyeballEasyButton::RebuildParams
          (CthulhuEyeballEasyButton *this,undefined8 param_2,char param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == '\0') {
    FUN_05475d88(asStack_10);
    CthulhuUtils::GetPropertySheetPtr((CthulhuUtils *)aRStack_20,asStack_10);
    std::string::~string(asStack_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(this + 0xc0));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
    CthulhuUtils::CopyPropertySheetPtr(aRStack_18,asStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  else {
    FUN_05475d88((string *)aRStack_18);
    CthulhuUtils::GetPropertySheetPtr((CthulhuUtils *)asStack_10,(string *)aRStack_18);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0xc0),(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    std::string::~string((string *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::DamageZombies() */

void __thiscall CthulhuEyeballEasyButton::DamageZombies(CthulhuEyeballEasyButton *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  float *pfVar8;
  GridItem *pGVar9;
  undefined8 *puVar10;
  Zombie *this_00;
  code *pcVar11;
  float fVar12;
  DamageInfo *pDVar14;
  float fVar13;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [8];
  DamageInfo *local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = (**(code **)(*(long *)this + 0x238))();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  piVar7 = (int *)FUN_04d6d67c(*(undefined8 *)(lVar6 + 0x38),(long)(iVar3 + -1));
  iVar5 = *piVar7;
  fVar12 = *(float *)(this + 200);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  pfVar8 = (float *)FUN_04d6d684(*(undefined8 *)(lVar6 + 0x50),(long)(iVar3 + -1));
  fVar13 = *pfVar8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4);
  lVar6 = FUN_04d6d68c(local_80,local_78);
  if (lVar6 != 0) {
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
    pDVar14._0_4_ = (DamageInfo *)(float)(int)((float)iVar5 * fVar12);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1)
    {
      puVar10 = (undefined8 *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
      if ((((this_00 != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(this_00,2), cVar2 != '\0'))
          && (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')) &&
         (cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0')) {
        cVar2 = Zombie::IsBerserk(this_00);
        if (cVar2 == '\0') {
          iVar5 = Zombie::GetSizeType(this_00);
          if (iVar5 == 2) {
            pcVar11 = *(code **)(*(long *)this_00 + 0x110);
            Sexy::Point::Point(aPStack_90,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
            DamageInfo::DamageInfo(pDVar14._0_4_,local_88,local_84,aDStack_68,aPStack_90,0);
            (*pcVar11)(this_00,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
          }
          else {
            fVar12 = (float)FUN_04d6d658(*(undefined4 *)(this_00 + 0x284));
            DamageInfo::DamageInfo(aDStack_68);
            local_60._0_4_ = (DamageInfo *)((float)pDVar14._0_4_ + fVar13 * fVar12);
            (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
          }
        }
      }
      pGVar9 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
      if (((pGVar9 != (GridItem *)0x0) &&
          (cVar2 = (**(code **)(*(long *)pGVar9 + 0x1f8))(), cVar2 != '\0')) &&
         (cVar2 = RealObject::IsOnTeam(pGVar9,2), cVar2 != '\0')) {
        DamageInfo::DamageInfo(aDStack_68);
        local_60._0_4_ = pDVar14._0_4_;
        (**(code **)(*(long *)pGVar9 + 0x110))(pGVar9,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuEyeballEasyButton::OnAnimationStoppedCallback(std::string const&) */

void __thiscall
CthulhuEyeballEasyButton::OnAnimationStoppedCallback(CthulhuEyeballEasyButton *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = FUN_05474374(param_1,"expend",0);
  if (lVar3 == -1) {
    bVar1 = std::operator==(param_1,"ready01");
    if ((((bVar1) || (bVar1 = std::operator==(param_1,"ready02"), bVar1)) ||
        (bVar1 = std::operator==(param_1,"ready03"), bVar1)) ||
       ((bVar1 = std::operator==(param_1,"ready04"), bVar1 ||
        (bVar1 = std::operator==(param_1,"ready05"), bVar1)))) {
      (**(code **)(*(long *)this + 0x1e8))(this,5);
      return;
    }
    lVar3 = FUN_05474374(param_1,"attack",0);
    if (lVar3 != -1) {
      DamageZombies(this);
      *(undefined4 *)(this + 0xb0) = 0;
      pcVar4 = *(code **)(*(long *)this + 0x238);
      *(undefined4 *)(this + 0xb4) = 0;
      uVar2 = (*pcVar4)(this);
      *(undefined4 *)(this + 0xbc) = uVar2;
      (**(code **)(*(long *)this + 0x1e8))(this,2);
      return;
    }
    bVar1 = std::operator==(param_1,"spawn");
    if (!bVar1) {
      return;
    }
  }
  (**(code **)(*(long *)this + 0x1e8))(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::CthulhuEyeballEasyButton() */

void __thiscall CthulhuEyeballEasyButton::CthulhuEyeballEasyButton(CthulhuEyeballEasyButton *this)

{
  undefined **__n;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CthulhuEasyButton::CthulhuEasyButton((CthulhuEasyButton *)this);
  __n = &PTR__CthulhuEyeballEasyButton_069b6590;
  *(undefined ***)this = &PTR_GetClass_069b6300;
  *(undefined ***)(this + 0x10) = &PTR__CthulhuEyeballEasyButton_069b6590;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  std::string::append((string *)(this + 0xa8),"cthulhueyeball",(size_t)__n);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x110),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuEyeballEasyButton::StaticNew() */

CthulhuEyeballEasyButton * CthulhuEyeballEasyButton::StaticNew(void)

{
  CthulhuEyeballEasyButton *this;
  
  this = ::operator_new(0x118);
  CthulhuEyeballEasyButton(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::~CthulhuEyeballEasyButton() */

void __thiscall CthulhuEyeballEasyButton::~CthulhuEyeballEasyButton(CthulhuEyeballEasyButton *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ResourceInfo *pRVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x110);
  *(undefined ***)(this + 0x10) = &PTR__CthulhuEyeballEasyButton_069b6590;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069b6300;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (pRVar2 != (ResourceInfo *)0x0) {
      (**(code **)(*(long *)pRVar2 + 0x18))();
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  CthulhuEasyButton::~CthulhuEasyButton((CthulhuEasyButton *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to CthulhuEyeballEasyButton::~CthulhuEyeballEasyButton() */

void __thiscall CthulhuEyeballEasyButton::~CthulhuEyeballEasyButton(CthulhuEyeballEasyButton *this)

{
  ~CthulhuEyeballEasyButton(this + -0x10);
  return;
}


/* CthulhuEyeballEasyButton::~CthulhuEyeballEasyButton() */

void __thiscall CthulhuEyeballEasyButton::~CthulhuEyeballEasyButton(CthulhuEyeballEasyButton *this)

{
  ~CthulhuEyeballEasyButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CthulhuEyeballEasyButton::~CthulhuEyeballEasyButton() */

void __thiscall CthulhuEyeballEasyButton::~CthulhuEyeballEasyButton(CthulhuEyeballEasyButton *this)

{
  ~CthulhuEyeballEasyButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEyeballEasyButton::PlantDied(Plant*) */

void __thiscall CthulhuEyeballEasyButton::PlantDied(CthulhuEyeballEasyButton *this,Plant *param_1)

{
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
  *pmVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  ResourceInfo *pRVar10;
  ProfileMgr *pPVar11;
  PlayerInfo *pPVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int extraout_w1;
  code *pcVar15;
  RtMixedPtrBase aRStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  bVar4 = std::operator==((string *)(lVar8 + 8),"cthulhuactinia");
  if (bVar4) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  }
  else {
    Plant::GetType();
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    bVar4 = std::operator==((string *)(lVar8 + 8),"devilsflower");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    if (!bVar4) goto LAB_04d71498;
  }
  bVar3 = false;
  uVar9 = Sexy::LazySingleton<PVZDB>::GetInstance();
  bVar4 = false;
  PVZDB::GetObjectIteratorForTable((Iterator *)local_28,uVar9,0x2c);
  bVar5 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_28);
  bVar2 = bVar4;
  bVar7 = false;
  if (bVar5) {
    do {
      bVar3 = bVar7;
      Sexy::RtDbTable::Iterator::operator*((Iterator *)local_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)&local_30);
      Sexy::RtId::~RtId((RtId *)&local_30);
      uVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      cVar6 = RealObject::IsOnTeam(uVar9,1);
      if ((cVar6 != '\0') &&
         (pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_38),
         param_1 != (Plant *)pRVar10)) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        Plant::GetType();
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30)
        ;
        bVar7 = std::operator==((string *)(lVar8 + 8),"cthulhuactinia");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        if (bVar7) {
          bVar4 = true;
          bVar2 = bVar4;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        Plant::GetType();
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30)
        ;
        bVar7 = std::operator==((string *)(lVar8 + 8),"devilsflower");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        if (bVar7) {
          bVar3 = true;
          bVar4 = true;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)local_28,extraout_w1);
      bVar5 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_28);
      bVar7 = bVar3;
    } while (bVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_28);
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetActivatedArtifact();
  cVar6 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
  if (cVar6 == '\0') {
LAB_04d712b0:
    bVar7 = false;
    if (bVar4) goto LAB_04d712bc;
    (**(code **)(*(long *)this + 0x1e8))(this,0);
    if (!bVar2) goto LAB_04d714cc;
LAB_04d712c4:
    if (bVar3) {
      pcVar15 = *(code **)(*(long *)this + 0x1f8);
      std::string::string((string *)local_28,"cthulhueyeball");
      (*pcVar15)(this,(Iterator *)local_28,0);
      std::string::~string((string *)local_28);
      nop();
      pPVar11 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar12 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar11);
      std::string::string((string *)local_28,"devilsflower");
      uVar13 = PlayerInfo::GetPlantStarLevel(pPVar12,(string *)local_28,false);
      std::string::~string((string *)local_28);
      nop();
      Sexy::StrFormat("devilsflower%d",aRStack_38,uVar13 & 0xffffffff);
      pcVar15 = *(code **)(*(long *)this + 0x1f8);
      FUN_05475d88((Iterator *)local_28,aRStack_38);
      (*pcVar15)(this,(Iterator *)local_28,0);
      std::string::~string((string *)local_28);
LAB_04d715dc:
      std::string::~string((string *)aRStack_38);
      goto LAB_04d714d0;
    }
    pcVar15 = *(code **)(*(long *)this + 0x1f8);
    std::string::string((string *)local_28,"cthulhueyeball");
    pmVar1 = (map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
              *)(this + 0xe0);
    (*pcVar15)(this,(Iterator *)local_28,1);
    std::string::~string((string *)local_28);
    nop();
    std::string::string((string *)aRStack_38,"cthulhueyeball");
    local_30 = std::
               map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
               ::find(pmVar1,(string *)aRStack_38);
    local_28[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)pmVar1);
    bVar4 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_28);
    std::string::~string((string *)aRStack_38);
    nop();
    if (bVar4) {
      pcVar15 = *(code **)(*(long *)this + 0x210);
      std::string::string((string *)local_28,"cthulhueyeball");
      puVar14 = (undefined4 *)
                std::
                map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                ::operator[](pmVar1,(string *)local_28);
      (*pcVar15)(*puVar14,this);
      std::string::~string((string *)local_28);
      nop();
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    EntityComponent_GroundEffect::GetEffect();
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
    if (pRVar10 == (ResourceInfo *)0x0) goto LAB_04d712b0;
    bVar7 = true;
    bVar5 = std::operator==((string *)(pRVar10 + 0x10),"artifact_silverkey");
    if (!bVar5) goto LAB_04d712b0;
LAB_04d712bc:
    if (bVar2) goto LAB_04d712c4;
LAB_04d714cc:
    if (bVar3) {
      pPVar11 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar12 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar11);
      pmVar1 = (map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                *)(this + 0xe0);
      std::string::string((string *)local_28,"devilsflower");
      uVar13 = PlayerInfo::GetPlantStarLevel(pPVar12,(string *)local_28,bVar2);
      std::string::~string((string *)local_28);
      nop();
      Sexy::StrFormat("devilsflower%d",(string *)aRStack_38,uVar13 & 0xffffffff);
      pcVar15 = *(code **)(*(long *)this + 0x1f8);
      FUN_05475d88((Iterator *)local_28,(string *)aRStack_38);
      (*pcVar15)(this,(Iterator *)local_28,1);
      std::string::~string((string *)local_28);
      local_30 = std::
                 map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                 ::find(pmVar1,(string *)aRStack_38);
      local_28[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)pmVar1);
      bVar4 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)local_28);
      if (bVar4) {
        pcVar15 = *(code **)(*(long *)this + 0x210);
        puVar14 = (undefined4 *)
                  std::
                  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                  ::operator[](pmVar1,(string *)aRStack_38);
        (*pcVar15)(*puVar14,this);
      }
      goto LAB_04d715dc;
    }
LAB_04d714d0:
    if ((bVar7) && (bVar2 < (bVar3 ^ 1U))) {
      (**(code **)(*(long *)this + 0x210))(0x3f800000,this);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
LAB_04d71498:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


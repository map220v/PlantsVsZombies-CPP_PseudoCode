// Class: Effect_Whirlpool


/* Effect_Whirlpool::SetSpeedOfScale(float) */

void __thiscall Effect_Whirlpool::SetSpeedOfScale(Effect_Whirlpool *this,float param_1)

{
  *(float *)(this + 0x28) = param_1;
  return;
}


/* Effect_Whirlpool::SetSpeedOfRadius(float) */

void __thiscall Effect_Whirlpool::SetSpeedOfRadius(Effect_Whirlpool *this,float param_1)

{
  *(float *)(this + 0x24) = param_1;
  return;
}


/* Effect_Whirlpool::~Effect_Whirlpool() */

void __thiscall Effect_Whirlpool::~Effect_Whirlpool(Effect_Whirlpool *this)

{
  *(undefined ***)this = &PTR_GetClass_0697a970;
  nop();
  return;
}


/* Effect_Whirlpool::~Effect_Whirlpool() */

void __thiscall Effect_Whirlpool::~Effect_Whirlpool(Effect_Whirlpool *this)

{
  ~Effect_Whirlpool(this);
  AK::FreeHook(this);
  return;
}


/* Effect_Whirlpool::Effect_Whirlpool(Sexy::SexyVector2, int, int, float, float, bool, float) */

void __thiscall
Effect_Whirlpool::Effect_Whirlpool
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,Effect_Whirlpool *this,undefined4 param_7,undefined4 param_8,
          Effect_Whirlpool param_9)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  this[8] = param_9;
  this[9] = (Effect_Whirlpool)0x0;
  this[10] = (Effect_Whirlpool)0x0;
  *(undefined ***)this = &PTR_GetClass_0697a970;
  *(undefined4 *)(this + 0xc) = param_8;
  *(undefined4 *)(this + 0x10) = param_7;
  *(ulong *)(this + 0x30) = CONCAT44(param_2,param_1);
  *(undefined4 *)(this + 0x14) = param_3;
  *(undefined4 *)(this + 0x18) = param_4;
  *(undefined4 *)(this + 0x1c) = param_5;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* Effect_Whirlpool::IsEnd() */

Effect_Whirlpool __thiscall Effect_Whirlpool::IsEnd(Effect_Whirlpool *this)

{
  return this[10];
}


/* Effect_Whirlpool::IsActive() */

byte __thiscall Effect_Whirlpool::IsActive(Effect_Whirlpool *this)

{
  byte bVar1;
  
  bVar1 = 0;
  if (this[9] != (Effect_Whirlpool)0x0) {
    bVar1 = (byte)this[10] ^ 1;
  }
  return bVar1;
}


/* Effect_Whirlpool::OnUpdate() */

void __thiscall Effect_Whirlpool::OnUpdate(Effect_Whirlpool *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  cVar1 = IsActive(this);
  if ((cVar1 != '\0') &&
     ((fVar2 = (float)PVZ_T(),
      *(float *)(this + 0x14) +
      *(float *)(this + 0x24) *
      (fVar2 - *(float *)(this + 0x2c)) * (fVar2 - *(float *)(this + 0x2c)) <= 0.0 ||
      (fVar3 = *(float *)(this + 0x1c), fVar2 = (float)PVZ_T(),
      fVar3 + *(float *)(this + 0x28) * (fVar2 - *(float *)(this + 0x2c)) <= 0.0)))) {
    this[10] = (Effect_Whirlpool)0x1;
    return;
  }
  return;
}


/* Effect_Whirlpool::StartEffect() */

void __thiscall Effect_Whirlpool::StartEffect(Effect_Whirlpool *this)

{
  undefined4 uVar1;
  
  this[9] = (Effect_Whirlpool)0x1;
  *(undefined4 *)(this + 0x1c) = 0x3f800000;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Whirlpool::DrawCurrent(Sexy::Graphics*) */

void __thiscall Effect_Whirlpool::DrawCurrent(Effect_Whirlpool *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float local_20;
  float local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsActive(this);
  if (cVar1 != '\0') {
    fVar3 = (float)PVZ_T();
    fVar3 = fVar3 - *(float *)(this + 0x2c);
    fVar6 = *(float *)(this + 0x18);
    fVar8 = *(float *)(this + 0x20);
    fVar10 = *(float *)(this + 0x1c);
    fVar7 = *(float *)(this + 0x14) + *(float *)(this + 0x24) * fVar3 * fVar3;
    fVar4 = (float)PVZ_T();
    dVar9 = (double)(fVar6 + fVar8 * fVar3);
    fVar10 = fVar10 + *(float *)(this + 0x28) * (fVar4 - *(float *)(this + 0x2c));
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    iVar2 = (int)(fVar10 * (float)*(int *)(this + 0x10));
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_20);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    dVar5 = cos(dVar9);
    fVar3 = (float)((double)*(float *)(this + 0x30) + dVar5 * (double)fVar7);
    local_20 = fVar3;
    dVar9 = sin(dVar9);
    local_1c = (float)((double)*(float *)(this + 0x34) + dVar9 * (double)fVar7);
    Sexy::Insets::Insets
              (aIStack_18,(int)(fVar3 - (float)(iVar2 / 2)),(int)(local_1c - (float)(iVar2 / 2)),
               iVar2,iVar2);
    LawnApp::DrawPiecesInRect(gLawnApp,param_1,*(int *)(this + 0xc),(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_Whirlpool::OnDraw(Sexy::Graphics*) */

void __thiscall Effect_Whirlpool::OnDraw(Effect_Whirlpool *this,Graphics *param_1)

{
  if ((this[9] != (Effect_Whirlpool)0x0) && (this[10] == (Effect_Whirlpool)0x0)) {
    DrawCurrent(this,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Whirlpool::SetSpeedOfAng(float) */

void Effect_Whirlpool::SetSpeedOfAng(float param_1)

{
  char cVar1;
  long in_x0;
  wchar16 *pwVar2;
  LineBreakCategory *pLVar3;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar3 = aLStack_18;
  *(float *)(in_x0 + 0x20) = param_1;
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"Revise");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar2,(wchar16 *)asStack_10,pLVar3,in_x3,in_x4);
  if ((cVar1 == '\0') && (*(char *)(in_x0 + 8) == '\0')) {
    std::string::~string(asStack_10);
    nop();
  }
  else {
    std::string::~string(asStack_10);
    nop();
    *(float *)(in_x0 + 0x20) = -*(float *)(in_x0 + 0x20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


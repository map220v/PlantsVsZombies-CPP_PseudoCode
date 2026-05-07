// Class: TimeMgr


/* TimeMgr::~TimeMgr() */

void __thiscall TimeMgr::~TimeMgr(TimeMgr *this)

{
  *(undefined ***)this = &PTR__TimeMgr_066082f0;
  Sexy::LazySingleton<TimeMgr>::~LazySingleton((LazySingleton<TimeMgr> *)this);
  return;
}


/* TimeMgr::~TimeMgr() */

void __thiscall TimeMgr::~TimeMgr(TimeMgr *this)

{
  ~TimeMgr(this);
  AK::FreeHook(this);
  return;
}


/* TimeMgr::TimeMgr() */

void __thiscall TimeMgr::TimeMgr(TimeMgr *this)

{
  Sexy::LazySingleton<TimeMgr>::LazySingleton((LazySingleton<TimeMgr> *)this);
  *(undefined ***)this = &PTR__TimeMgr_066082f0;
  return;
}


/* TimeMgr::Init() */

void __thiscall TimeMgr::Init(TimeMgr *this)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  uVar1 = Sexy::SexyTime((Sexy *)this);
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar1;
  this[0x34] = (TimeMgr)0x0;
  this[0x35] = (TimeMgr)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x40] = (TimeMgr)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0xbf800000;
  *(undefined4 *)(this + 0x5c) = 0x41700000;
  return;
}


/* TimeMgr::Update() */

void __thiscall TimeMgr::Update(TimeMgr *this)

{
  int iVar1;
  TimeMgr TVar2;
  char cVar3;
  Sexy *this_00;
  long lVar4;
  undefined8 uVar5;
  uint extraout_w1;
  float fVar6;
  float fVar7;
  float fVar8;
  
  TVar2 = this[0x35];
  this_00 = (Sexy *)(ulong)(byte)TVar2;
  if (TVar2 != (TimeMgr)0x0) {
    if (TVar2 == (TimeMgr)0x1) {
      this_00 = (Sexy *)0x2;
      this[0x35] = (TimeMgr)0x2;
    }
    else if (TVar2 == (TimeMgr)0x2) {
      this[0x35] = (TimeMgr)0x0;
      this_00 = (Sexy *)FUN_044ad9a0(this + 0x34);
    }
  }
  lVar4 = Sexy::SexyTime(this_00);
  *(float *)(this + 0x1c) = (float)(Sexy *)(lVar4 - *(long *)(this + 0x10)) * 0.001;
  uVar5 = Sexy::SexyTime((Sexy *)(lVar4 - *(long *)(this + 0x10)));
  iVar1 = *(int *)(this + 0x50);
  fVar8 = *(float *)(this + 0x1c);
  *(undefined8 *)(this + 0x10) = uVar5;
  fVar6 = fVar8 + *(float *)(this + 0x54);
  *(uint *)(this + 0x50) = iVar1 + 1U;
  *(float *)(this + 0x54) = fVar6;
  if (0.1 < fVar6) {
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x54) = 0;
    *(float *)(this + 0x20) = (float)(iVar1 + 1U) / fVar6;
  }
  if (*(float *)(this + 0x5c) < fVar8) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    fVar8 = *(float *)(this + 0x1c);
  }
  if (0.04 < fVar8) {
    *(undefined4 *)(this + 0x1c) = 0x3d23d70a;
    fVar8 = 0.04;
  }
  cVar3 = FUN_044ad99c(this[0x34]);
  if (cVar3 == '\0') {
    if (this[0x40] == (TimeMgr)0x0) {
      fVar6 = *(float *)(this + 0x58);
      if (fVar6 <= 0.0) {
        fVar6 = fVar8 * *(float *)(this + 0x30);
        *(float *)(this + 0x28) = fVar6;
        fVar7 = fVar6;
      }
      else {
        if ((fVar8 < fVar6) && (fVar7 = (fVar6 - fVar8) * 1000.0, 1.0 < fVar7)) {
          Sexy::SexySleep((Sexy *)(ulong)(uint)(int)fVar7,extraout_w1);
          fVar6 = *(float *)(this + 0x58);
          fVar8 = *(float *)(this + 0x1c);
        }
        fVar6 = fVar6 * *(float *)(this + 0x30);
        *(float *)(this + 0x28) = fVar6;
        fVar7 = fVar8 * *(float *)(this + 0x30);
      }
    }
    else {
      fVar6 = 0.0;
      *(undefined4 *)(this + 0x28) = 0;
      fVar7 = fVar8 * *(float *)(this + 0x30);
    }
    *(float *)(this + 0x3c) = fVar7;
    *(float *)(this + 0x24) = *(float *)(this + 0x24) + fVar6;
    *(float *)(this + 0x18) = *(float *)(this + 0x18) + fVar8;
    *(float *)(this + 0x38) = *(float *)(this + 0x38) + fVar7;
    if (fVar6 != 0.0) {
      *(float *)(this + 0x2c) = 1.0 / fVar6;
      return;
    }
  }
  else {
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
    *(float *)(this + 0x18) = *(float *)(this + 0x18) + fVar8;
  }
  return;
}


/* TimeMgr::GetDate() */

long __thiscall TimeMgr::GetDate(TimeMgr *this)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  return tVar1 + *(long *)(this + 0x48);
}


/* TimeMgr::SetDateOverride(long) */

void __thiscall TimeMgr::SetDateOverride(TimeMgr *this,long param_1)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  *(long *)(this + 0x48) = param_1 - tVar1;
  return;
}


/* TimeMgr::ClearDateOverride() */

void __thiscall TimeMgr::ClearDateOverride(TimeMgr *this)

{
  SetDateOverride(this,0);
  return;
}


/* TimeMgr::SetFixedSPF(float) */

void __thiscall TimeMgr::SetFixedSPF(TimeMgr *this,float param_1)

{
  *(float *)(this + 0x58) = param_1;
  return;
}


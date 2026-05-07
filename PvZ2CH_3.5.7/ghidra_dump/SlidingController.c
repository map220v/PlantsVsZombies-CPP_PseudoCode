// Class: SlidingController


/* SlidingController::SlidingController() */

void __thiscall SlidingController::SlidingController(SlidingController *this)

{
  *(undefined4 *)this = 0xbf800000;
  *(undefined4 *)(this + 8) = 3;
  *(undefined4 *)(this + 4) = 0xbf800000;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xc));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x14));
  Set8BytesTo0(this + 0x20);
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


/* SlidingController::~SlidingController() */

void __thiscall SlidingController::~SlidingController(SlidingController *this)

{
  std::string::~string((string *)(this + 0x20));
  return;
}


/* SlidingController::StartSlide(Sexy::Widget*, Sexy::SexyVector2, Sexy::SexyVector2, float,
   CurveType) */

void SlidingController::StartSlide
               (float param_1_00,float param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 *param_1,long param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  *(long *)(param_1 + 10) = param_7;
  if (param_7 != 0) {
    *(ulong *)(param_1 + 5) = CONCAT44(param_4,param_3);
    param_1[2] = param_8;
    *(ulong *)(param_1 + 3) = CONCAT44(param_2,param_1_00);
    uVar2 = PVZ_T();
    pcVar1 = *(code **)(**(long **)(param_1 + 10) + 0x1a8);
    *param_1 = uVar2;
    param_1[1] = param_5;
    (*pcVar1)(*(long **)(param_1 + 10),(int)param_1_00,(int)param_2);
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04ba278c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* SlidingController::Update() */

void __thiscall SlidingController::Update(SlidingController *this)

{
  long *plVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)this;
  if (0.0 < fVar4) {
    fVar3 = *(float *)(this + 4);
    auVar2 = PVZ_T();
    fVar4 = CurveLerp<float>(auVar2,fVar4 + fVar3,auVar2._0_4_,this + 0xc,this + 0x14,
                             *(undefined4 *)(this + 8));
    fVar5 = *(float *)this;
    fVar3 = *(float *)(this + 4);
    auVar2 = PVZ_T();
    fVar3 = CurveLerp<float>(auVar2,fVar5 + fVar3,auVar2._0_4_,this + 0x10,this + 0x18,
                             *(undefined4 *)(this + 8));
    plVar1 = *(long **)(this + 0x28);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1a8))(plVar1,(int)fVar4,(int)fVar3);
    }
    fVar4 = (float)PVZ_T();
    if (*(float *)(this + 4) + *(float *)this <= fVar4) {
      plVar1 = *(long **)(this + 0x28);
      *(undefined4 *)this = 0xbf800000;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x1a8))
                  (plVar1,(int)*(float *)(this + 0x14),(int)*(float *)(this + 0x18));
      }
      *(undefined8 *)(this + 0x28) = 0;
    }
  }
  return;
}


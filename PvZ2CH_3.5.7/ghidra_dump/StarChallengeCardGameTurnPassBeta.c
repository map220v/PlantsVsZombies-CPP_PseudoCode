// Class: StarChallengeCardGameTurnPassBeta


/* StarChallengeCardGameTurnPassBeta::StaticGetClass() */

long * StarChallengeCardGameTurnPassBeta::StaticGetClass(void)

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
  uVar2 = StarChallengeCardGameTurnPass::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPassBeta",uVar2,StaticNew);
  return sClass;
}


/* StarChallengeCardGameTurnPassBeta::~StarChallengeCardGameTurnPassBeta() */

void __thiscall
StarChallengeCardGameTurnPassBeta::~StarChallengeCardGameTurnPassBeta
          (StarChallengeCardGameTurnPassBeta *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0665a390;
  StarChallengeCardGameTurnPass::~StarChallengeCardGameTurnPass
            ((StarChallengeCardGameTurnPass *)this);
  return;
}


/* StarChallengeCardGameTurnPassBeta::~StarChallengeCardGameTurnPassBeta() */

void __thiscall
StarChallengeCardGameTurnPassBeta::~StarChallengeCardGameTurnPassBeta
          (StarChallengeCardGameTurnPassBeta *this)

{
  ~StarChallengeCardGameTurnPassBeta(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengeCardGameTurnPassBeta::StarChallengeCardGameTurnPassBeta() */

void __thiscall
StarChallengeCardGameTurnPassBeta::StarChallengeCardGameTurnPassBeta
          (StarChallengeCardGameTurnPassBeta *this)

{
  StarChallengeCardGameTurnPass::StarChallengeCardGameTurnPass
            ((StarChallengeCardGameTurnPass *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0665a390;
  return;
}


/* StarChallengeCardGameTurnPassBeta::StaticNew() */

StarChallengeCardGameTurnPassBeta * StarChallengeCardGameTurnPassBeta::StaticNew(void)

{
  StarChallengeCardGameTurnPassBeta *this;
  
  this = ::operator_new(0x30);
  StarChallengeCardGameTurnPassBeta(this);
  return this;
}


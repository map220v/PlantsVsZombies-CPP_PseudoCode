// Class: StarChallengeCardGameTurnPassGamma


/* StarChallengeCardGameTurnPassGamma::StaticGetClass() */

long * StarChallengeCardGameTurnPassGamma::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPassGamma",uVar2,StaticNew);
  return sClass;
}


/* StarChallengeCardGameTurnPassGamma::~StarChallengeCardGameTurnPassGamma() */

void __thiscall
StarChallengeCardGameTurnPassGamma::~StarChallengeCardGameTurnPassGamma
          (StarChallengeCardGameTurnPassGamma *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0665a540;
  StarChallengeCardGameTurnPass::~StarChallengeCardGameTurnPass
            ((StarChallengeCardGameTurnPass *)this);
  return;
}


/* StarChallengeCardGameTurnPassGamma::~StarChallengeCardGameTurnPassGamma() */

void __thiscall
StarChallengeCardGameTurnPassGamma::~StarChallengeCardGameTurnPassGamma
          (StarChallengeCardGameTurnPassGamma *this)

{
  ~StarChallengeCardGameTurnPassGamma(this);
  AK::FreeHook(this);
  return;
}


/* StarChallengeCardGameTurnPassGamma::StarChallengeCardGameTurnPassGamma() */

void __thiscall
StarChallengeCardGameTurnPassGamma::StarChallengeCardGameTurnPassGamma
          (StarChallengeCardGameTurnPassGamma *this)

{
  StarChallengeCardGameTurnPass::StarChallengeCardGameTurnPass
            ((StarChallengeCardGameTurnPass *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0665a540;
  return;
}


/* StarChallengeCardGameTurnPassGamma::StaticNew() */

StarChallengeCardGameTurnPassGamma * StarChallengeCardGameTurnPassGamma::StaticNew(void)

{
  StarChallengeCardGameTurnPassGamma *this;
  
  this = ::operator_new(0x30);
  StarChallengeCardGameTurnPassGamma(this);
  return this;
}


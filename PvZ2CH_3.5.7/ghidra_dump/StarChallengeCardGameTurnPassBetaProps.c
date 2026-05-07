// Class: StarChallengeCardGameTurnPassBetaProps


/* StarChallengeCardGameTurnPassBetaProps::GetModuleClass() const */

long * StarChallengeCardGameTurnPassBetaProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeCardGameTurnPassBeta::sClass != (long *)0x0) {
    return StarChallengeCardGameTurnPassBeta::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeCardGameTurnPassBeta::sClass = plVar1;
  uVar2 = StarChallengeCardGameTurnPass::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPassBeta",uVar2,
            StarChallengeCardGameTurnPassBeta::StaticNew);
  return StarChallengeCardGameTurnPassBeta::sClass;
}


/* StarChallengeCardGameTurnPassBetaProps::StaticGetClass() */

long * StarChallengeCardGameTurnPassBetaProps::StaticGetClass(void)

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
  uVar2 = StarChallengeCardGameTurnPassProps::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPassBetaProps",uVar2,StaticNew);
  return sClass;
}


/* StarChallengeCardGameTurnPassBetaProps::GetClass() const */

long * StarChallengeCardGameTurnPassBetaProps::GetClass(void)

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
  uVar2 = StarChallengeCardGameTurnPassProps::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPassBetaProps",uVar2,StaticNew);
  return sClass;
}


/* StarChallengeCardGameTurnPassBetaProps::StarChallengeCardGameTurnPassBetaProps() */

void __thiscall
StarChallengeCardGameTurnPassBetaProps::StarChallengeCardGameTurnPassBetaProps
          (StarChallengeCardGameTurnPassBetaProps *this)

{
  StarChallengeCardGameTurnPassProps::StarChallengeCardGameTurnPassProps
            ((StarChallengeCardGameTurnPassProps *)this);
  *(undefined ***)this = &PTR_GetClass_0665a490;
  return;
}


/* StarChallengeCardGameTurnPassBetaProps::StaticNew() */

StarChallengeCardGameTurnPassBetaProps * StarChallengeCardGameTurnPassBetaProps::StaticNew(void)

{
  StarChallengeCardGameTurnPassBetaProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeCardGameTurnPassBetaProps(this);
  return this;
}


/* StarChallengeCardGameTurnPassBetaProps::~StarChallengeCardGameTurnPassBetaProps() */

void __thiscall
StarChallengeCardGameTurnPassBetaProps::~StarChallengeCardGameTurnPassBetaProps
          (StarChallengeCardGameTurnPassBetaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0665a490;
  StarChallengeCardGameTurnPassProps::~StarChallengeCardGameTurnPassProps
            ((StarChallengeCardGameTurnPassProps *)this);
  return;
}


/* StarChallengeCardGameTurnPassBetaProps::~StarChallengeCardGameTurnPassBetaProps() */

void __thiscall
StarChallengeCardGameTurnPassBetaProps::~StarChallengeCardGameTurnPassBetaProps
          (StarChallengeCardGameTurnPassBetaProps *this)

{
  ~StarChallengeCardGameTurnPassBetaProps(this);
  AK::FreeHook(this);
  return;
}


// Class: StarChallengeCardGameTurnPassGammaProps


/* StarChallengeCardGameTurnPassGammaProps::GetModuleClass() const */

long * StarChallengeCardGameTurnPassGammaProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeCardGameTurnPassGamma::sClass != (long *)0x0) {
    return StarChallengeCardGameTurnPassGamma::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeCardGameTurnPassGamma::sClass = plVar1;
  uVar2 = StarChallengeCardGameTurnPass::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPassGamma",uVar2,
            StarChallengeCardGameTurnPassGamma::StaticNew);
  return StarChallengeCardGameTurnPassGamma::sClass;
}


/* StarChallengeCardGameTurnPassGammaProps::StaticGetClass() */

long * StarChallengeCardGameTurnPassGammaProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPassGammaProps",uVar2,StaticNew);
  return sClass;
}


/* StarChallengeCardGameTurnPassGammaProps::GetClass() const */

long * StarChallengeCardGameTurnPassGammaProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPassGammaProps",uVar2,StaticNew);
  return sClass;
}


/* StarChallengeCardGameTurnPassGammaProps::StarChallengeCardGameTurnPassGammaProps() */

void __thiscall
StarChallengeCardGameTurnPassGammaProps::StarChallengeCardGameTurnPassGammaProps
          (StarChallengeCardGameTurnPassGammaProps *this)

{
  StarChallengeCardGameTurnPassProps::StarChallengeCardGameTurnPassProps
            ((StarChallengeCardGameTurnPassProps *)this);
  *(undefined ***)this = &PTR_GetClass_0665a640;
  return;
}


/* StarChallengeCardGameTurnPassGammaProps::StaticNew() */

StarChallengeCardGameTurnPassGammaProps * StarChallengeCardGameTurnPassGammaProps::StaticNew(void)

{
  StarChallengeCardGameTurnPassGammaProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeCardGameTurnPassGammaProps(this);
  return this;
}


/* StarChallengeCardGameTurnPassGammaProps::~StarChallengeCardGameTurnPassGammaProps() */

void __thiscall
StarChallengeCardGameTurnPassGammaProps::~StarChallengeCardGameTurnPassGammaProps
          (StarChallengeCardGameTurnPassGammaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0665a640;
  StarChallengeCardGameTurnPassProps::~StarChallengeCardGameTurnPassProps
            ((StarChallengeCardGameTurnPassProps *)this);
  return;
}


/* StarChallengeCardGameTurnPassGammaProps::~StarChallengeCardGameTurnPassGammaProps() */

void __thiscall
StarChallengeCardGameTurnPassGammaProps::~StarChallengeCardGameTurnPassGammaProps
          (StarChallengeCardGameTurnPassGammaProps *this)

{
  ~StarChallengeCardGameTurnPassGammaProps(this);
  AK::FreeHook(this);
  return;
}


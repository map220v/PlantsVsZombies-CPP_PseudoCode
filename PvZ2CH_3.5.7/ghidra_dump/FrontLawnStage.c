// Class: FrontLawnStage


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x044691e4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* FrontLawnStage::renderBackground(Sexy::Graphics*) */

void __thiscall FrontLawnStage::renderBackground(FrontLawnStage *this,Graphics *param_1)

{
  RtWeakPtr *pRVar1;
  FrontLawnStage FVar2;
  bool bVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  ResourceInfo *pRVar6;
  long lVar7;
  LotteryResultProgressBar *this_00;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  long lStack_8;
  
  FVar2 = this[0xcc];
  lStack_8 = ___stack_chk_guard;
  if (FVar2 != (FrontLawnStage)0x0) {
    fVar10 = *(float *)(this + 200);
    fVar8 = (float)PVZ_EOT();
    if (fVar10 < fVar8) {
      auVar9 = PVZ_T();
      iStack_28 = 0x3f800000;
      uStack_18 = 0x3f333333;
      fVar8 = CurveLerp<float>(auVar9,fVar10 + 0.25,auVar9._0_4_,&iStack_28,&uStack_18,3);
    }
    else {
      fVar8 = 0.0;
    }
    Sexy::Insets::Insets((Insets *)&iStack_28,0xff,0xff,0xff,0x96);
    Sexy::Color::Color((Color *)&uStack_18,(int)((float)iStack_28 * fVar8 + 255.0),
                       (int)((float)iStack_24 * fVar8 + 255.0),
                       (int)((float)iStack_20 * fVar8 + 255.0));
    *(ulong *)(this + 0xd0) = CONCAT44(uStack_14,uStack_18);
    *(undefined8 *)(this + 0xd8) = uStack_10;
    Sexy::Graphics::SetColor(param_1,(Color *)(this + 0xd0));
    Sexy::Graphics::SetColorizeImages(param_1,true);
    fVar8 = (float)PVZ_T();
    if (*(float *)(this + 200) + 0.25 < fVar8) {
      this[0xcc] = (FrontLawnStage)0x0;
    }
  }
  pRVar1 = (RtWeakPtr *)(this + 0x70);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if ((bVar3) &&
     (pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this),
     pRVar5[0x68] != (ResilienceTutorialIntroProperties)0x0)) {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar1);
    this_00 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,-iVar4,0);
  }
  pRVar1 = (RtWeakPtr *)(this + 0x60);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if ((bVar3) &&
     (pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this),
     pRVar5[0x69] != (ResilienceTutorialIntroProperties)0x0)) {
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar1);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,0,0);
  }
  if (FVar2 == (FrontLawnStage)0x0) {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
  }
  else {
    Sexy::Graphics::SetColorizeImages(param_1,false);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x68));
  }
  if (bVar3) {
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar5[0x6a] != (ResilienceTutorialIntroProperties)0x0) {
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x68));
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar6,*(int *)(lVar7 + 0x38),0);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FrontLawnStage::FrontLawnStage() */

void __thiscall FrontLawnStage::FrontLawnStage(FrontLawnStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06928d30;
  return;
}


/* FrontLawnStage::StaticNew() */

FrontLawnStage * FrontLawnStage::StaticNew(void)

{
  FrontLawnStage *this;
  
  this = ::operator_new(0xe8);
  FrontLawnStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FrontLawnStage::StaticClassInit() */

void FrontLawnStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"FrontLawnStage");
    (*pcVar2)(plVar1,asStack_10,FUN_049d0cc0,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FrontLawnStage::StaticGetClass() */

long * FrontLawnStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"FrontLawnStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FrontLawnStage::initializeModule() */

void __thiscall FrontLawnStage::initializeModule(FrontLawnStage *this)

{
  long lVar1;
  
  this[0xe4] = (FrontLawnStage)0x1;
  lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (*(char *)(lVar1 + 0x16c) != '\0') {
    this[0xe4] = (FrontLawnStage)0x1;
  }
  StageModule::initializeModule((StageModule *)this);
  return;
}


/* FrontLawnStage::~FrontLawnStage() */

void __thiscall FrontLawnStage::~FrontLawnStage(FrontLawnStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06928d30;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* FrontLawnStage::~FrontLawnStage() */

void __thiscall FrontLawnStage::~FrontLawnStage(FrontLawnStage *this)

{
  ~FrontLawnStage(this);
  AK::FreeHook(this);
  return;
}


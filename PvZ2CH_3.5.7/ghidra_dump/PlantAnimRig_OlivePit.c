// Class: PlantAnimRig_OlivePit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OlivePit::getPreviewAnimationName() */

void __thiscall PlantAnimRig_OlivePit::getPreviewAnimationName(PlantAnimRig_OlivePit *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"idle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OlivePit::getPlantFoodOffAnimName() */

void PlantAnimRig_OlivePit::getPlantFoodOffAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3bc) == '\0') {
    __s = "plantfood_end";
  }
  else {
    __s = "plantfood2_end";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OlivePit::getPlantFoodMainAnimName() */

void PlantAnimRig_OlivePit::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3bc) == '\0') {
    __s = "plantfood_loop";
  }
  else {
    __s = "plantfood2_loop";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OlivePit::getPlantFoodOnAnimName() */

void PlantAnimRig_OlivePit::getPlantFoodOnAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x3bc) == '\0') {
    __s = "plantfood_start";
  }
  else {
    __s = "plantfood2_start";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_OlivePit::~PlantAnimRig_OlivePit() */

void __thiscall PlantAnimRig_OlivePit::~PlantAnimRig_OlivePit(PlantAnimRig_OlivePit *this)

{
  *(undefined ***)this = &PTR_GetClass_069a3ce0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_OlivePit_069a3f48;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_OlivePit::~PlantAnimRig_OlivePit() */

void __thiscall PlantAnimRig_OlivePit::~PlantAnimRig_OlivePit(PlantAnimRig_OlivePit *this)

{
  ~PlantAnimRig_OlivePit(this + -0x10);
  return;
}


/* PlantAnimRig_OlivePit::~PlantAnimRig_OlivePit() */

void __thiscall PlantAnimRig_OlivePit::~PlantAnimRig_OlivePit(PlantAnimRig_OlivePit *this)

{
  ~PlantAnimRig_OlivePit(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_OlivePit::~PlantAnimRig_OlivePit() */

void __thiscall PlantAnimRig_OlivePit::~PlantAnimRig_OlivePit(PlantAnimRig_OlivePit *this)

{
  ~PlantAnimRig_OlivePit(this + -0x10);
  return;
}


/* PlantAnimRig_OlivePit::PlantAnimRig_OlivePit() */

void __thiscall PlantAnimRig_OlivePit::PlantAnimRig_OlivePit(PlantAnimRig_OlivePit *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069a3ce0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_OlivePit_069a3f48;
  return;
}


/* PlantAnimRig_OlivePit::StaticNew() */

PlantAnimRig_OlivePit * PlantAnimRig_OlivePit::StaticNew(void)

{
  PlantAnimRig_OlivePit *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_OlivePit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OlivePit::StaticClassInit() */

void PlantAnimRig_OlivePit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_OlivePit");
    (*pcVar2)(plVar1,asStack_10,FUN_04cef464,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_OlivePit::StaticGetClass() */

long * PlantAnimRig_OlivePit::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_OlivePit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_OlivePit::GetClass() const */

long * PlantAnimRig_OlivePit::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_OlivePit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OlivePit::PlayZenGardenIdleAnim() */

void __thiscall PlantAnimRig_OlivePit::PlayZenGardenIdleAnim(PlantAnimRig_OlivePit *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getPreviewAnimationName(this);
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,2,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OlivePit::playChewStart() */

void __thiscall PlantAnimRig_OlivePit::playChewStart(PlantAnimRig_OlivePit *this)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantAnimRig_OlivePit,void(PlantAnimRig_OlivePit::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,&DAT_06b965c0,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_OlivePit::PlayChewingAnim(float) */

void __thiscall PlantAnimRig_OlivePit::PlayChewingAnim(PlantAnimRig_OlivePit *this,float param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x3b8) = uVar1;
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,(string *)&DAT_06b96638);
  fVar3 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,(string *)&DAT_06b965c0);
  if (fVar3 < param_1 - fVar2) {
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x3b8) = fVar3 + (param_1 - fVar2);
  }
  playChewStart(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OlivePit::playChewLooped() */

void __thiscall PlantAnimRig_OlivePit::playChewLooped(PlantAnimRig_OlivePit *this)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantAnimRig_OlivePit,void(PlantAnimRig_OlivePit::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,&DAT_06b96670,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_OlivePit::playChewEnded() */

void __thiscall PlantAnimRig_OlivePit::playChewEnded(PlantAnimRig_OlivePit *this)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimFinished);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantAnimRig_OlivePit,void(PlantAnimRig_OlivePit::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,&DAT_06b96638,0,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_OlivePit::onAnimFinished(std::string const&) */

void __thiscall PlantAnimRig_OlivePit::onAnimFinished(PlantAnimRig_OlivePit *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  float fVar3;
  
  cVar1 = std::operator==(param_1,(string *)&DAT_06b965c0);
  if (cVar1 == '\0') {
    cVar1 = std::operator==(param_1,(string *)&DAT_06b96670);
    if (cVar1 == '\0') {
      cVar1 = std::operator==(param_1,(string *)&DAT_06b96638);
      if ((cVar1 == '\0') && (bVar2 = std::operator==(param_1,"plantfood_end"), bVar2)) {
        PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
        return;
      }
      return;
    }
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x3b8) <= fVar3) goto LAB_04cf0844;
  }
  else {
    fVar3 = (float)PVZ_EOT();
    if (fVar3 <= *(float *)(this + 0x3b8)) {
LAB_04cf0844:
      playChewEnded(this);
      return;
    }
  }
  playChewLooped(this);
  return;
}


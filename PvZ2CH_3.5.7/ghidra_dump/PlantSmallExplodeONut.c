// Class: PlantSmallExplodeONut


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallExplodeONut::StaticClassInit() */

void PlantSmallExplodeONut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSmallExplodeONut");
    (*pcVar2)(plVar1,asStack_10,FUN_039033c4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSmallExplodeONut::StaticGetClass() */

long * PlantSmallExplodeONut::StaticGetClass(void)

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
  uVar2 = PlantExplodeONut::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSmallExplodeONut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSmallExplodeONut::GetClass() const */

long * PlantSmallExplodeONut::GetClass(void)

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
  uVar2 = PlantExplodeONut::StaticGetClass();
  (*pcVar3)(plVar1,"PlantSmallExplodeONut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSmallExplodeONut::PlantSmallExplodeONut() */

void __thiscall PlantSmallExplodeONut::PlantSmallExplodeONut(PlantSmallExplodeONut *this)

{
  PlantExplodeONut::PlantExplodeONut((PlantExplodeONut *)this);
  *(undefined ***)this = &PTR_GetClass_066c01b0;
  return;
}


/* PlantSmallExplodeONut::StaticNew() */

PlantSmallExplodeONut * PlantSmallExplodeONut::StaticNew(void)

{
  PlantSmallExplodeONut *this;
  
  this = ::operator_new(0x40);
  PlantSmallExplodeONut(this);
  return this;
}


/* PlantSmallExplodeONut::~PlantSmallExplodeONut() */

void __thiscall PlantSmallExplodeONut::~PlantSmallExplodeONut(PlantSmallExplodeONut *this)

{
  *(undefined ***)this = &PTR_GetClass_066c01b0;
  PlantExplodeONut::~PlantExplodeONut((PlantExplodeONut *)this);
  return;
}


/* PlantSmallExplodeONut::~PlantSmallExplodeONut() */

void __thiscall PlantSmallExplodeONut::~PlantSmallExplodeONut(PlantSmallExplodeONut *this)

{
  ~PlantSmallExplodeONut(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSmallExplodeONut::explode() */

void __thiscall PlantSmallExplodeONut::explode(PlantSmallExplodeONut *this)

{
  ComponentDamageRadius *this_00;
  float *pfVar1;
  Effect_PopAnim *this_01;
  PopAnim *pPVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  fVar5 = 0.0;
  local_8 = ___stack_chk_guard;
  this_00 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  ComponentDamageRadius::StartApply(this_00);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar3 = *pfVar1;
  fVar4 = pfVar1[1];
  if ((*(Board **)(gLawnApp + 0x9f0))[0x119] != (Board)0x0) {
    fVar5 = (float)(int)pfVar1[2];
  }
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_GENERIC_EXPLOSION_BACK");
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  (**(code **)(*(long *)this_01 + 0x80))(0x3fc00000,this_01);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(fVar3 - 145.0),(float)(int)(fVar4 - 200.0),fVar5);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_18,-1);
  FUN_03902d94(this_01 + 0x1c);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSmallExplodeONut::TakeDamage(DamageInfo const&) */

void PlantSmallExplodeONut::TakeDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar1;
  
  fVar1 = (float)FUN_03902cf8(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0xd8));
  if (fVar1 <= *(float *)(in_x1 + 8)) {
    (**(code **)(*(long *)param_1 + 0x528))();
  }
  DamageInfo::DamageInfo(in_x8,in_x1);
  return;
}


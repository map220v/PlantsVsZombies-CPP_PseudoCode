// Class: PlantAnimRig_Ultomato


/* PlantAnimRig_Ultomato::PlayWatering() */

undefined8 __thiscall PlantAnimRig_Ultomato::PlayWatering(PlantAnimRig_Ultomato *this)

{
  *(undefined4 *)(this + 0x218) = 0xd;
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ultomato::getPlantFoodMainAnimName() */

void PlantAnimRig_Ultomato::getPlantFoodMainAnimName(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if ((*(char *)(in_x0 + 0x220) == '\0') || (1 < *(int *)(in_x0 + 0x3b8) - 1U)) {
    __s = "plantfood";
  }
  else {
    __s = "plantfood2_1";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PlantAnimRig_Ultomato::~PlantAnimRig_Ultomato() */

void __thiscall PlantAnimRig_Ultomato::~PlantAnimRig_Ultomato(PlantAnimRig_Ultomato *this)

{
  *(undefined ***)this = &PTR_GetClass_067f04a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Ultomato_067f0708;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x3c0));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Ultomato::~PlantAnimRig_Ultomato() */

void __thiscall PlantAnimRig_Ultomato::~PlantAnimRig_Ultomato(PlantAnimRig_Ultomato *this)

{
  ~PlantAnimRig_Ultomato(this + -0x10);
  return;
}


/* PlantAnimRig_Ultomato::~PlantAnimRig_Ultomato() */

void __thiscall PlantAnimRig_Ultomato::~PlantAnimRig_Ultomato(PlantAnimRig_Ultomato *this)

{
  ~PlantAnimRig_Ultomato(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Ultomato::~PlantAnimRig_Ultomato() */

void __thiscall PlantAnimRig_Ultomato::~PlantAnimRig_Ultomato(PlantAnimRig_Ultomato *this)

{
  ~PlantAnimRig_Ultomato(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ultomato::StaticClassInit() */

void PlantAnimRig_Ultomato::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_Ultomato");
    (*pcVar2)(plVar1,asStack_10,FUN_04152ba4,0x408,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Ultomato::StaticGetClass() */

long * PlantAnimRig_Ultomato::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Ultomato",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Ultomato::GetClass() const */

long * PlantAnimRig_Ultomato::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_Ultomato",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ultomato::PlayAttack(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAnimRig_Ultomato::PlayAttack(PlantAnimRig_Ultomato *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"");
  nop();
  iVar1 = *(int *)(this + 0x3b8);
  if (iVar1 == 1) {
    std::string::append(asStack_58,"attack2_start",(size_t)__n);
  }
  else if (iVar1 == 2) {
    std::string::append(asStack_58,"attack3_start",(size_t)__n);
  }
  else if (iVar1 == 0) {
    std::string::append(asStack_58,"attack1_start",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x3c0),param_2);
  PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,(RtReflectionDelegate *)(this + 0x3c0));
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  *(int *)(this + 0x3bc) = iVar1;
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ultomato::PlayAttackLoop(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Ultomato::PlayAttackLoop(PlantAnimRig_Ultomato *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"");
  nop();
  iVar1 = *(int *)(this + 0x3b8);
  if (iVar1 == 1) {
    std::string::append(asStack_58,"attack2_loop",(size_t)__n);
  }
  else if (iVar1 == 2) {
    std::string::append(asStack_58,"attack3_loop",(size_t)__n);
  }
  else if (iVar1 == 0) {
    std::string::append(asStack_58,"attack1_loop",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x3c0),param_2);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,(RtReflectionDelegate *)(this + 0x3c0));
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  *(int *)(this + 0x3bc) = iVar1;
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ultomato::PlayAttackEnd(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantAnimRig_Ultomato::PlayAttackEnd(PlantAnimRig_Ultomato *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  undefined1 *__n;
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  __n = auStack_60;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"");
  nop();
  iVar1 = *(int *)(this + 0x3b8);
  if (iVar1 == 1) {
    std::string::append(asStack_58,"attack2_end",(size_t)__n);
  }
  else if (iVar1 == 2) {
    std::string::append(asStack_58,"attack3_end",(size_t)__n);
  }
  else if (iVar1 == 0) {
    std::string::append(asStack_58,"attack1_end",(size_t)__n);
  }
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x3c0),param_2);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,(RtReflectionDelegate *)(this + 0x3c0));
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  *(int *)(this + 0x3bc) = iVar1;
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* PlantAnimRig_Ultomato::PlantAnimRig_Ultomato() */

void __thiscall PlantAnimRig_Ultomato::PlantAnimRig_Ultomato(PlantAnimRig_Ultomato *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067f04a0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Ultomato_067f0708;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)(this + 0x3c0));
  *(undefined4 *)(this + 0x3b8) = 0;
  *(undefined4 *)(this + 0x3bc) = 0xffffffff;
  return;
}


/* PlantAnimRig_Ultomato::StaticNew() */

PlantAnimRig_Ultomato * PlantAnimRig_Ultomato::StaticNew(void)

{
  PlantAnimRig_Ultomato *this;
  
  this = ::operator_new(0x408);
  PlantAnimRig_Ultomato(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Ultomato::SetLevel(int) */

void __thiscall PlantAnimRig_Ultomato::SetLevel(PlantAnimRig_Ultomato *this,int param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *__s;
  code *pcVar6;
  float fVar7;
  float fVar8;
  int local_b8 [2];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_b0 [48];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  amStack_80 [48];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_b8[0] = -1;
  local_b8[1] = 0xffffffff;
  *(int *)(this + 0x3b8) = param_1;
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0415057c(*(undefined8 *)(this + 0x20));
  Sexy::PASpriteDef::GetLabelFrameRange
            (*(PASpriteDef **)(*(long *)(lVar3 + 0x50) + 0x18),(string *)(lVar3 + 0x48),local_b8,
             local_b8 + 1);
  lVar3 = FUN_0415057c(*(undefined8 *)(this + 0x20));
  fVar8 = *(float *)(*(long *)(lVar3 + 0x50) + 0xc);
  fVar7 = (float)local_b8[0];
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_b0);
  iVar1 = *(int *)(this + 0x3b8);
  if (iVar1 == 1) {
    std::string::string((string *)amStack_80,"idle2_1");
    puVar4 = (undefined4 *)
             std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                           *)amStack_b0,(string *)amStack_80);
    *puVar4 = 10;
    std::string::~string((string *)amStack_80);
    nop();
    __s = "idle2_2";
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 0) {
        std::string::string((string *)amStack_80,"idle1_1");
        puVar4 = (undefined4 *)
                 std::
                 map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                 ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                               *)amStack_b0,(string *)amStack_80);
        *puVar4 = 10;
        std::string::~string((string *)amStack_80);
        nop();
        std::string::string((string *)amStack_80,"idle1_2");
        puVar4 = (undefined4 *)
                 std::
                 map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                 ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                               *)amStack_b0,(string *)amStack_80);
        *puVar4 = 1;
        std::string::~string((string *)amStack_80);
        nop();
      }
      goto LAB_04154710;
    }
    std::string::string((string *)amStack_80,"idle3_1");
    puVar4 = (undefined4 *)
             std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                           *)amStack_b0,(string *)amStack_80);
    *puVar4 = 10;
    std::string::~string((string *)amStack_80);
    nop();
    std::string::string((string *)amStack_80,"idle3_2");
    puVar4 = (undefined4 *)
             std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                           *)amStack_b0,(string *)amStack_80);
    *puVar4 = 2;
    std::string::~string((string *)amStack_80);
    nop();
    __s = "idle3_3";
  }
  std::string::string((string *)amStack_80,__s);
  piVar5 = (int *)std::
                  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                  ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                *)amStack_b0,(string *)amStack_80);
  *piVar5 = iVar1;
  std::string::~string((string *)amStack_80);
  nop();
LAB_04154710:
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map(amStack_80,(map *)amStack_b0);
  PlantAnimRig::SetIdleAnimationWeights((PlantAnimRig *)this,amStack_80);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map(amStack_80);
  cVar2 = PopAnimRig::IsAnimActive((PopAnimRig *)this,*(undefined4 *)(this + 0x3bc));
  if ((cVar2 == '\0') || (*(int *)(this + 0x3bc) == -1)) {
    (**(code **)(*(long *)this + 0x118))(this);
  }
  else {
    pcVar6 = *(code **)(*(long *)this + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,(RtReflectionDelegate *)(this + 0x3c0));
    (*pcVar6)(this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  lVar3 = FUN_0415057c(*(undefined8 *)(this + 0x20));
  *(float *)(*(long *)(lVar3 + 0x50) + 0xc) =
       (fVar8 + *(float *)(*(long *)(lVar3 + 0x50) + 0xc)) - fVar7;
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)amStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Ultomato::onPostLoad() */

void __thiscall PlantAnimRig_Ultomato::onPostLoad(PlantAnimRig_Ultomato *this)

{
  SetLevel(this,*(int *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_Ultomato::PlayPreviewAnim(bool) */

void PlantAnimRig_Ultomato::PlayPreviewAnim(bool param_1)

{
  SetLevel((PlantAnimRig_Ultomato *)(ulong)param_1,2);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)(ulong)param_1);
  return;
}


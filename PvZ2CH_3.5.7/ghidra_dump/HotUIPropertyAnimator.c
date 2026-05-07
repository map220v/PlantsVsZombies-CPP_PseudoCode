// Class: HotUIPropertyAnimator


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPropertyAnimator::StaticClassInit() */

void HotUIPropertyAnimator::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIPropertyAnimator");
    (*pcVar2)(plVar1,asStack_10,FUN_0364a684,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPropertyAnimator::StaticGetClass() */

long * HotUIPropertyAnimator::StaticGetClass(void)

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
  uVar2 = HotUIComponent::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPropertyAnimator",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPropertyAnimator::applyValueToProperty(float, PropertyAnimatorTarget, HotUIWidget*) */

void HotUIPropertyAnimator::applyValueToProperty(undefined8 param_1,int param_2,long *param_3)

{
  float fVar1;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      fVar1 = (float)FUN_0364a540();
      (**(code **)(*param_3 + 0x1a8))(param_3,(int)param_3[9],(int)fVar1);
    }
    return;
  }
  fVar1 = (float)FUN_0364a540();
  (**(code **)(*param_3 + 0x1a8))(param_3,(int)fVar1,*(undefined4 *)((long)param_3 + 0x4c));
  return;
}


/* HotUIPropertyAnimator::onInitializeComponent() */

void __thiscall HotUIPropertyAnimator::onInitializeComponent(HotUIPropertyAnimator *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_RealT();
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPropertyAnimator::Update() */

void __thiscall HotUIPropertyAnimator::Update(HotUIPropertyAnimator *this)

{
  bool bVar1;
  HotUIPropertyAnimatorProperties *pHVar2;
  undefined8 *puVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar2 = HotUIComponent::getProps<HotUIPropertyAnimatorProperties>((HotUIComponent *)this);
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar5 = (float)PVZ_RealT();
  fVar6 = *(float *)(this + 0x30);
  local_18 = *(undefined8 *)(pHVar2 + 0x38);
  local_10 = *(undefined8 *)(pHVar2 + 0x40);
  local_28 = FUN_0364a804(*puVar3);
  local_20 = FUN_0364a854(puVar3[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    fmodf((fVar5 - fVar6) / (float)local_10 + local_10._4_4_,1.0);
    CurveEvaluate<float>(&local_18,(long)&local_18 + 4,*(undefined4 *)(pHVar2 + 0x30));
    applyValueToProperty(this,*(undefined4 *)(pHVar2 + 0x34),uVar4);
    local_18 = CONCAT44(*(float *)(pHVar2 + 0x4c) + local_18._4_4_,
                        *(float *)(pHVar2 + 0x48) + (float)local_18);
    local_10 = CONCAT44(*(float *)(pHVar2 + 0x54) + local_10._4_4_,
                        *(float *)(pHVar2 + 0x50) + (float)local_10);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPropertyAnimator::HotUIPropertyAnimator() */

void __thiscall HotUIPropertyAnimator::HotUIPropertyAnimator(HotUIPropertyAnimator *this)

{
  HotUIComponent::HotUIComponent((HotUIComponent *)this);
  *(undefined ***)this = &PTR_GetComponentClass_066708e0;
  return;
}


/* HotUIPropertyAnimator::StaticNew() */

HotUIPropertyAnimator * HotUIPropertyAnimator::StaticNew(void)

{
  HotUIPropertyAnimator *this;
  
  this = ::operator_new(0x38);
  HotUIPropertyAnimator(this);
  return this;
}


/* HotUIPropertyAnimator::~HotUIPropertyAnimator() */

void __thiscall HotUIPropertyAnimator::~HotUIPropertyAnimator(HotUIPropertyAnimator *this)

{
  *(undefined ***)this = &PTR_GetComponentClass_066708e0;
  HotUIComponent::~HotUIComponent((HotUIComponent *)this);
  return;
}


/* HotUIPropertyAnimator::~HotUIPropertyAnimator() */

void __thiscall HotUIPropertyAnimator::~HotUIPropertyAnimator(HotUIPropertyAnimator *this)

{
  ~HotUIPropertyAnimator(this);
  AK::FreeHook(this);
  return;
}


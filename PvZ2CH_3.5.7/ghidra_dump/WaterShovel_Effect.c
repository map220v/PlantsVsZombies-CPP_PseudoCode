// Class: WaterShovel_Effect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaterShovel_Effect::StaticClassInit() */

void WaterShovel_Effect::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaterShovel_Effect");
    (*pcVar2)(plVar1,asStack_10,FUN_04461180,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaterShovel_Effect::StaticGetClass() */

long * WaterShovel_Effect::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"WaterShovel_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaterShovel_Effect::GetClass() const */

long * WaterShovel_Effect::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"WaterShovel_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaterShovel_Effect::WaterShovel_Effect() */

void __thiscall WaterShovel_Effect::WaterShovel_Effect(WaterShovel_Effect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0684c8f0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* WaterShovel_Effect::StaticNew() */

WaterShovel_Effect * WaterShovel_Effect::StaticNew(void)

{
  WaterShovel_Effect *this;
  
  this = ::operator_new(0x118);
  WaterShovel_Effect(this);
  return this;
}


/* WaterShovel_Effect::~WaterShovel_Effect() */

void __thiscall WaterShovel_Effect::~WaterShovel_Effect(WaterShovel_Effect *this)

{
  *(undefined ***)this = &PTR_GetClass_0684c8f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* WaterShovel_Effect::~WaterShovel_Effect() */

void __thiscall WaterShovel_Effect::~WaterShovel_Effect(WaterShovel_Effect *this)

{
  ~WaterShovel_Effect(this);
  AK::FreeHook(this);
  return;
}


/* WaterShovel_Effect::Shovle() */

void __thiscall WaterShovel_Effect::Shovle(WaterShovel_Effect *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *this_01;
  Plant *this_02;
  
  this_00 = (RtWeakPtr *)(this + 0x110);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<Plant>(this_01);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      Plant::ClearPvz1Sleep(this_02);
      Plant::SetIsSleepping(this_02,false,-1.0);
      return;
    }
  }
  return;
}


/* WaterShovel_Effect::onAnimStopped(std::string const&) */

void __thiscall WaterShovel_Effect::onAnimStopped(WaterShovel_Effect *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==("animation",param_1);
  if (!bVar1) {
    return;
  }
  Shovle(this);
  return;
}


// Class: GluttonyFire_Effect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GluttonyFire_Effect::StaticClassInit() */

void GluttonyFire_Effect::StaticClassInit(void)

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
    std::string::string(asStack_10,"GluttonyFire_Effect");
    (*pcVar2)(plVar1,asStack_10,FUN_04d22f94,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GluttonyFire_Effect::StaticGetClass() */

long * GluttonyFire_Effect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GluttonyFire_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GluttonyFire_Effect::GetClass() const */

long * GluttonyFire_Effect::GetClass(void)

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
  (*pcVar3)(plVar1,"GluttonyFire_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GluttonyFire_Effect::~GluttonyFire_Effect() */

void __thiscall GluttonyFire_Effect::~GluttonyFire_Effect(GluttonyFire_Effect *this)

{
  *(undefined ***)this = &PTR_GetClass_069aae20;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* GluttonyFire_Effect::~GluttonyFire_Effect() */

void __thiscall GluttonyFire_Effect::~GluttonyFire_Effect(GluttonyFire_Effect *this)

{
  ~GluttonyFire_Effect(this);
  AK::FreeHook(this);
  return;
}


/* GluttonyFire_Effect::GluttonyFire_Effect() */

void __thiscall GluttonyFire_Effect::GluttonyFire_Effect(GluttonyFire_Effect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_069aae20;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* GluttonyFire_Effect::StaticNew() */

GluttonyFire_Effect * GluttonyFire_Effect::StaticNew(void)

{
  GluttonyFire_Effect *this;
  
  this = ::operator_new(0x118);
  GluttonyFire_Effect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GluttonyFire_Effect::OnAnimCommand(std::string const&, std::string const&) */

void GluttonyFire_Effect::OnAnimCommand(string *param_1,string *param_2)

{
  RtWeakPtr *this;
  bool bVar1;
  long *extraout_x0;
  long lVar2;
  code *pcVar3;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    this = (RtWeakPtr *)(param_1 + 0x110);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      nop();
      pcVar3 = *(code **)(*extraout_x0 + 0xb0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      (*pcVar3)(extraout_x0,a_Stack_10,*(undefined4 *)(lVar2 + 0x110),1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


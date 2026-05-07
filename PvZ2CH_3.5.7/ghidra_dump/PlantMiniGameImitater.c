// Class: PlantMiniGameImitater


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMiniGameImitater::StaticClassInit() */

void PlantMiniGameImitater::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMiniGameImitater");
    (*pcVar2)(plVar1,asStack_10,FUN_04039300,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMiniGameImitater::StaticGetClass() */

long * PlantMiniGameImitater::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMiniGameImitater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMiniGameImitater::GetClass() const */

long * PlantMiniGameImitater::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMiniGameImitater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMiniGameImitater::~PlantMiniGameImitater() */

void __thiscall PlantMiniGameImitater::~PlantMiniGameImitater(PlantMiniGameImitater *this)

{
  *(undefined ***)this = &PTR_GetClass_067bb900;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMiniGameImitater::~PlantMiniGameImitater() */

void __thiscall PlantMiniGameImitater::~PlantMiniGameImitater(PlantMiniGameImitater *this)

{
  ~PlantMiniGameImitater(this);
  AK::FreeHook(this);
  return;
}


/* PlantMiniGameImitater::PlantMiniGameImitater() */

void __thiscall PlantMiniGameImitater::PlantMiniGameImitater(PlantMiniGameImitater *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067bb900;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  this[0x30] = (PlantMiniGameImitater)0x0;
  return;
}


/* PlantMiniGameImitater::StaticNew() */

PlantMiniGameImitater * PlantMiniGameImitater::StaticNew(void)

{
  PlantMiniGameImitater *this;
  
  this = ::operator_new(0x38);
  PlantMiniGameImitater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMiniGameImitater::OnAnimCommand(std::string const&, std::string const&) */

void PlantMiniGameImitater::OnAnimCommand(string *param_1,string *param_2)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_2,"use_special");
  if (bVar2) {
    cVar3 = CustomLevelUtils::IsCustomLevel();
    uVar4 = 1;
    if (cVar3 != '\0') {
      uVar4 = FUN_040381c0(*(undefined8 *)(param_1 + 0x10));
    }
    puVar1 = gMessageRouter;
    BoardEntity::CalcGridPosition();
    MessageRouter::Broadcast<Sexy::Point_const&,int,Sexy::Point,int>
              ((MessageRouter *)puVar1,Message::CopycatsSpawn,auStack_10,uVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMiniGameImitater::Initialize() */

void __thiscall PlantMiniGameImitater::Initialize(PlantMiniGameImitater *this)

{
  char cVar1;
  long *plVar2;
  RealObject *this_00;
  code *pcVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x30] = (PlantMiniGameImitater)0x0;
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar3 = *(code **)(*plVar2 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_58,"Play_Magicshroom_PlantFood");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


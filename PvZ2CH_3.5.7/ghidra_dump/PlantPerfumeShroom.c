// Class: PlantPerfumeShroom


/* PlantPerfumeShroom::StaticGetClass() */

long * PlantPerfumeShroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPerfumeShroom",uVar2,StaticNew);
  return sClass;
}


/* PlantPerfumeShroom::GetClass() const */

long * PlantPerfumeShroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPerfumeShroom",uVar2,StaticNew);
  return sClass;
}


/* PlantPerfumeShroom::PlantPerfumeShroom() */

void __thiscall PlantPerfumeShroom::PlantPerfumeShroom(PlantPerfumeShroom *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f7d60;
  return;
}


/* PlantPerfumeShroom::StaticNew() */

PlantPerfumeShroom * PlantPerfumeShroom::StaticNew(void)

{
  PlantPerfumeShroom *this;
  
  this = ::operator_new(0x28);
  PlantPerfumeShroom(this);
  return this;
}


/* PlantPerfumeShroom::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantPerfumeShroom::onAnimStoppedCallback(PlantPerfumeShroom *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    (**(code **)(**(long **)(this + 0x10) + 0x80))(*(long **)(this + 0x10),1);
  }
  return;
}


/* PlantPerfumeShroom::~PlantPerfumeShroom() */

void __thiscall PlantPerfumeShroom::~PlantPerfumeShroom(PlantPerfumeShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_067f7d60;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPerfumeShroom::~PlantPerfumeShroom() */

void __thiscall PlantPerfumeShroom::~PlantPerfumeShroom(PlantPerfumeShroom *this)

{
  ~PlantPerfumeShroom(this);
  AK::FreeHook(this);
  return;
}


/* PlantPerfumeShroom::Initialize() */

void __thiscall PlantPerfumeShroom::Initialize(PlantPerfumeShroom *this)

{
  char cVar1;
  long *plVar2;
  PlantAnimRig *pPVar3;
  
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar2 + 0x118))();
  pPVar3 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetState(pPVar3,0xe);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPerfumeShroom::UpdateActions() */

void __thiscall PlantPerfumeShroom::UpdateActions(PlantPerfumeShroom *this)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *this_00;
  long *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    this_00 = (Effect_AngerFlame *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
    if (iVar2 == 0xe) {
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar4 = *(code **)(*plVar3 + 0x130);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      (*pcVar4)(plVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      uVar5 = PVZ_EOT();
      *(undefined4 *)(*(long *)(this + 0x10) + 0x124) = uVar5;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPerfumeShroom::explode() */

void __thiscall PlantPerfumeShroom::explode(PlantPerfumeShroom *this)

{
  int iVar1;
  ComponentPropagatedBurst *this_00;
  long lVar2;
  ComponentRunner *pCVar3;
  undefined8 uVar4;
  int iVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  string asStack_40 [8];
  ComponentPropagatedBurstProps aCStack_38 [44];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  this_00 = GameObject::Create<ComponentPropagatedBurst>();
  ComponentPropagatedBurstProps::ComponentPropagatedBurstProps(aCStack_38);
  lVar2 = FUN_04180c18(*(undefined8 *)(this + 0x10));
  ComponentPropagatedBurstProps::operator=
            (aCStack_38,(ComponentPropagatedBurstProps *)(lVar2 + 0x2b8));
  uVar4 = *(undefined8 *)(this + 0x10);
  iVar1 = FUN_04180638(uVar4);
  if (iVar1 == 2) {
    lVar2 = FUN_04180c18(uVar4);
    uVar4 = *(undefined8 *)(this + 0x10);
    iVar5 = *(int *)(lVar2 + 0x2e8);
    iVar1 = FUN_04180638(uVar4);
  }
  if (2 < iVar1) {
    lVar2 = FUN_04180c18(uVar4);
    iVar5 = *(int *)(lVar2 + 0x2ec);
  }
  local_c = local_c + iVar5;
  ComponentPropagatedBurst::SetProps(this_00,aCStack_38);
  pCVar3 = (ComponentRunner *)BoardEntity::GetComponentRunner(*(BoardEntity **)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
  std::string::string(asStack_40,"burst");
  ComponentRunner::Add(pCVar3,this_00,aRStack_48,asStack_40);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  ComponentPropagatedBurstProps::~ComponentPropagatedBurstProps(aCStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPerfumeShroom::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantPerfumeShroom::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    explode((PlantPerfumeShroom *)param_1);
  }
  return 0;
}


// Class: PlantCoffeeBean


/* PlantCoffeeBean::GetCollisionFlags(PlantWeapon) */

undefined8 PlantCoffeeBean::GetCollisionFlags(void)

{
  return 0xf0;
}


/* PlantCoffeeBean::CalcRenderOrder() */

void __thiscall PlantCoffeeBean::CalcRenderOrder(PlantCoffeeBean *this)

{
  Board::MakeRenderOrder(0x639c0,*(int *)(*(long *)(this + 0x10) + 0x110) + 1,2);
  return;
}


/* PlantCoffeeBean::StaticGetClass() */

long * PlantCoffeeBean::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCoffeeBean",uVar2,StaticNew);
  return sClass;
}


/* PlantCoffeeBean::GetClass() const */

long * PlantCoffeeBean::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCoffeeBean",uVar2,StaticNew);
  return sClass;
}


/* PlantCoffeeBean::PlantCoffeeBean() */

void __thiscall PlantCoffeeBean::PlantCoffeeBean(PlantCoffeeBean *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0680c0d0;
  return;
}


/* PlantCoffeeBean::StaticNew() */

PlantCoffeeBean * PlantCoffeeBean::StaticNew(void)

{
  PlantCoffeeBean *this;
  
  this = ::operator_new(0x28);
  PlantCoffeeBean(this);
  return this;
}


/* PlantCoffeeBean::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantCoffeeBean::onAnimStoppedCallback(PlantCoffeeBean *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"plantfood");
  if (!bVar1) {
    return;
  }
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
  return;
}


/* PlantCoffeeBean::~PlantCoffeeBean() */

void __thiscall PlantCoffeeBean::~PlantCoffeeBean(PlantCoffeeBean *this)

{
  *(undefined ***)this = &PTR_GetClass_0680c0d0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCoffeeBean::~PlantCoffeeBean() */

void __thiscall PlantCoffeeBean::~PlantCoffeeBean(PlantCoffeeBean *this)

{
  ~PlantCoffeeBean(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoffeeBean::Initialize() */

void __thiscall PlantCoffeeBean::Initialize(PlantCoffeeBean *this)

{
  char cVar1;
  PlantAnimRig_CoffeeBean *pPVar2;
  PlantAnimRig *pPVar3;
  undefined4 uVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    pPVar2 = (PlantAnimRig_CoffeeBean *)FUN_04212d38(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_CoffeeBean::PlayWakeUp(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    pPVar3 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar3,0xe);
    uVar4 = PVZ_EOT();
    *(undefined4 *)(*(long *)(this + 0x10) + 0x124) = uVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoffeeBean::OnAnimCommand(std::string const&, std::string const&) */

void PlantCoffeeBean::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  Plant *this;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_special");
  uVar7 = 0;
  if (bVar1) {
    uVar8 = 0;
    (**(code **)(*(long *)param_1 + 0x2b8))(auStack_30,param_1,0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
               auStack_30,*(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1,
               *(int *)(*(long *)(param_1 + 0x10) + 0x110) + 1);
    uVar7 = local_20;
    lVar3 = FUN_0421272c(local_20,local_18);
    if (lVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_04212738(uVar7,uVar8);
        this = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
        if (this != (Plant *)0x0) {
          cVar2 = PlantPeach::PlantCanBeCured(this);
          if (cVar2 != '\0') {
            Plant::PlayAttackUpEffect(this);
            Plant::SetAttackUpValue(this,true,6.0,0.1);
          }
          cVar2 = FUN_04212728(this[0x278]);
          if (cVar2 != '\0') {
            Plant::SetIsSleepping(this,false,-1.0);
          }
        }
        uVar7 = local_20;
        uVar8 = uVar8 + 1;
        uVar5 = FUN_0421272c(local_20,local_18);
      } while (uVar8 < uVar5);
    }
    pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar6,"Play_Plant_DarkAges_CoffeeBean");
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    uVar7 = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


// Class: HotUIPlant


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPlant::StaticClassInit() */

void HotUIPlant::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIPlant");
    (*pcVar2)(plVar1,asStack_10,FUN_033c4700,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPlant::StaticGetClass() */

long * HotUIPlant::StaticGetClass(void)

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
  uVar2 = HotUIAnim::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIPlant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIPlant::HotUIPlant() */

void __thiscall HotUIPlant::HotUIPlant(HotUIPlant *this)

{
  HotUIAnim::HotUIAnim((HotUIAnim *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_06619550;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x250));
  *(undefined4 *)(this + 0x248) = 0xffffffff;
  return;
}


/* HotUIPlant::StaticNew() */

HotUIPlant * HotUIPlant::StaticNew(void)

{
  HotUIPlant *this;
  
  this = ::operator_new(600);
  HotUIPlant(this);
  return this;
}


/* HotUIPlant::~HotUIPlant() */

void __thiscall HotUIPlant::~HotUIPlant(HotUIPlant *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06619550;
  if (*(long **)(this + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x238) + 0x18))();
    *(undefined8 *)(this + 0x238) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x250));
  HotUIAnim::~HotUIAnim((HotUIAnim *)this);
  return;
}


/* HotUIPlant::~HotUIPlant() */

void __thiscall HotUIPlant::~HotUIPlant(HotUIPlant *this)

{
  ~HotUIPlant(this);
  AK::FreeHook(this);
  return;
}


/* HotUIPlant::GetAnimOffset() */

void HotUIPlant::GetAnimOffset(void)

{
  bool bVar1;
  long in_x0;
  PlantType *this;
  long lVar2;
  Point *in_x8;
  float fVar3;
  float fVar4;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x250));
  if (bVar1) {
    this = (PlantType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x250));
    lVar2 = PlantType::GetProps(this);
    if (lVar2 != 0) {
      fVar3 = (float)FUN_033be218(*(undefined4 *)(lVar2 + 0x2a8));
      fVar4 = (float)FUN_033be218(*(undefined4 *)(lVar2 + 0x2ac));
      Sexy::Point::Point(in_x8,(int)fVar3,(int)fVar4);
      return;
    }
  }
  Sexy::Point::Point(in_x8,0,0);
  return;
}


/* HotUIPlant::IsWaterAnimAlive() */

void HotUIPlant::IsWaterAnimAlive(void)

{
  PlantAnimRig *this;
  
  nop();
  if (this != (PlantAnimRig *)0x0) {
    PlantAnimRig::IsWaterAnimAlive(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPlant::setState(HotUIPlantState) */

void __thiscall HotUIPlant::setState(HotUIPlant *this,int param_2)

{
  long *extraout_x0;
  long *extraout_x0_00;
  code *pcVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(int *)(this + 0x248) = param_2;
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    nop();
    if (extraout_x0_00 != (long *)0x0) {
      (**(code **)(*extraout_x0_00 + 0x1a0))();
    }
  }
  else if ((param_2 == 1) && (nop(), extraout_x0 != (long *)0x0)) {
    pcVar1 = *(code **)(*extraout_x0 + 0x128);
    HotUIWidget::GetPtr();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onWaterAnimStopped");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar1)(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIPlant::onWaterAnimStopped(std::string const&) */

void HotUIPlant::onWaterAnimStopped(string *param_1)

{
  setState((HotUIPlant *)param_1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIPlant::SetPlantAndPlay(int) */

void HotUIPlant::SetPlantAndPlay(int param_1)

{
  RtWeakPtr<PowerPropertySheet> *this;
  int iVar1;
  HotUIWidget *this_00;
  string *psVar2;
  PlantAnimRig *this_01;
  long lVar3;
  HotUIZPSMeterProperties *pHVar4;
  float fVar5;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (HotUIWidget *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(long **)(this_00 + 0x238) != (long *)0x0) {
    (**(code **)(**(long **)(this_00 + 0x238) + 0x18))();
    *(undefined8 *)(this_00 + 0x238) = 0;
  }
  iVar1 = PlantNameMapperServerID::GetInstance();
  this = (RtWeakPtr<PowerPropertySheet> *)(this_00 + 0x250);
  NameMapperBase::GetNameForId(iVar1);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)this);
  this_01 = (PlantAnimRig *)CreateStandalonePlantAnimRig(aRStack_10,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  iVar1 = NewAvatar::GetAvatarIndexForPlant((string *)(lVar3 + 8));
  if (iVar1 != -1) {
    PlantAnimRig::SetAvatarIndex(this_01,iVar1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)this);
    PlantAnimRig::ShowAvatarLayers(this_01,aRStack_10,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  *(PlantAnimRig **)(this_00 + 0x238) = this_01;
  fVar5 = (float)PopAnimRig::GetDrawScale((PopAnimRig *)this_01);
  pHVar4 = HotUIWidget::getProps<HotUIZPSMeterProperties>(this_00);
  HotUIAnim::SetScaleOverride((HotUIAnim *)this_00,fVar5 * *(float *)(pHVar4 + 0x140));
  setState((HotUIPlant *)this_00,0);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: GuideStartDoor


/* GuideStartDoor::~GuideStartDoor() */

void __thiscall GuideStartDoor::~GuideStartDoor(GuideStartDoor *this)

{
  *(undefined ***)this = &PTR_GetClass_06923c80;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* GuideStartDoor::~GuideStartDoor() */

void __thiscall GuideStartDoor::~GuideStartDoor(GuideStartDoor *this)

{
  ~GuideStartDoor(this);
  AK::FreeHook(this);
  return;
}


/* GuideStartDoor::GuideStartDoor() */

void __thiscall GuideStartDoor::GuideStartDoor(GuideStartDoor *this)

{
  undefined4 uVar1;
  
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_06923c80;
  Sexy::Point::Point((Point *)(this + 0x10c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x120) = uVar1;
  return;
}


/* GuideStartDoor::manualDestroy() */

undefined8 GuideStartDoor::manualDestroy(void)

{
  return 0;
}


/* GuideStartDoor::GetSelfPosition() */

GuideStartDoor * __thiscall GuideStartDoor::GetSelfPosition(GuideStartDoor *this)

{
  return this + 0x10c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideStartDoor::StaticClassInit() */

void GuideStartDoor::StaticClassInit(void)

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
    std::string::string(asStack_10,"GuideStartDoor");
    (*pcVar2)(plVar1,asStack_10,FUN_049a6f1c,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GuideStartDoor::StaticGetClass() */

long * GuideStartDoor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GuideStartDoor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GuideStartDoor::GetClass() const */

long * GuideStartDoor::GetClass(void)

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
  (*pcVar3)(plVar1,"GuideStartDoor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GuideStartDoor::InitDate(Sexy::Point&, Sexy::RtWeakPtr<GuideEndDoor>) */

void __thiscall
GuideStartDoor::InitDate(GuideStartDoor *this,undefined8 *param_1,RtWeakPtr *param_3)

{
  *(undefined8 *)(this + 0x10c) = *param_1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),param_3);
  return;
}


/* GuideStartDoor::StaticNew() */

GuideStartDoor * GuideStartDoor::StaticNew(void)

{
  GuideStartDoor *this;
  
  this = ::operator_new(0x128);
  GuideStartDoor(this);
  return this;
}


/* GuideStartDoor::registerForEvents() */

void __thiscall GuideStartDoor::registerForEvents(GuideStartDoor *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGatherPlantingRestrictions);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<GuideStartDoor,void(GuideStartDoor::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideStartDoor::OnFadeOut(RealObject*) */

void __thiscall GuideStartDoor::OnFadeOut(GuideStartDoor *this,RealObject *param_1)

{
  char cVar1;
  GuideEndDoor *this_00;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (RealObject *)0x0) {
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      this_00 = (GuideEndDoor *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
      GuideEndDoor::DoFadeIn(this_00,param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideStartDoor::OnGatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
GuideStartDoor::OnGatherPlantingRestrictions
          (GuideStartDoor *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  char cVar1;
  TPoint<int> *this_00;
  long lVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (TPoint<int> *)GetSelfPosition(this);
  cVar1 = Sexy::TPoint<int>::operator==(this_00,(TPoint *)param_1);
  if ((cVar1 != '\0') &&
     (lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_2 + 0x28)),
     *(char *)(lVar2 + 0x24d) == '\0')) {
    local_c = 0x4a;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
               (PlantingReason *)&local_c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuideStartDoor::onUpdate() */

void __thiscall GuideStartDoor::onUpdate(GuideStartDoor *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  Zombie *pZVar5;
  ActionSubSystem *pAVar6;
  GuideEndDoor *this_00;
  RtObject *pRVar7;
  float fVar8;
  float fVar9;
  undefined8 local_a0;
  undefined8 local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtMixedPtr aRStack_88 [8];
  RtId aRStack_80 [8];
  string asStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  if (*(code **)(*(long *)this + 0xd0) == manualDestroy) {
    cVar1 = manualDestroy();
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0xd0))(this);
  }
  if ((cVar1 != '\0') ||
     (fVar8 = *(float *)(this + 0x120), fVar9 = (float)PVZ_T(), fVar9 < fVar8 + 10.0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
    EntityFinder::GetEntitiesAtGridSquare
              (avStack_68,2,*(undefined4 *)(this + 0x10c),*(undefined4 *)(this + 0x110));
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2)
    {
      plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
      if (*plVar4 != 0) {
        ToolPacketData::GetProps();
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_70);
        if (cVar1 != '\0') {
          pRVar7 = (RtObject *)*plVar4;
          cVar1 = FUN_049a5a64(pRVar7[0xa0]);
          if (cVar1 == '\0') {
            pZVar5 = Sexy::RtObject::Cast<Zombie>(pRVar7);
            cVar1 = Zombie::HasCondition(pZVar5,0x65);
            if (cVar1 == '\0') {
              pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*plVar4);
              cVar1 = Zombie::HasCondition(pZVar5,0x27);
              if (cVar1 == '\0') {
                pRVar7 = (RtObject *)*plVar4;
                cVar1 = FUN_049a64dc(*(undefined4 *)(pRVar7 + 0x28));
                if (cVar1 == '\0') {
                  pZVar5 = Sexy::RtObject::Cast<Zombie>(pRVar7);
                  iVar3 = Zombie::getZombieStateSerialization(pZVar5);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
                  if (iVar3 == 1) {
                    FUN_049a5a5c(*plVar4 + 0xa0,1);
                    pAVar6 = Board::GetGameSubSystem<ActionSubSystem>(*(Board **)(gLawnApp + 0x9f0))
                    ;
                    ToolPacketData::GetProps();
                    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,
                               (RtWeakPtrBase *)aRStack_90);
                    ToolPacketData::GetProps();
                    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
                    std::string::string(asStack_78,"OnFadeOut");
                    RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::RtReflectionDelegate
                              (aRStack_50,aRStack_80,asStack_78);
                    ActionSubSystem::AddActionEntityFade
                              ((ActionSubSystem *)0x40000000,pAVar6,aRStack_70,1,aRStack_50);
                    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    ::~RtReflectionDelegate
                              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                                *)aRStack_50);
                    std::string::~string(asStack_78);
                    nop();
                    Sexy::RtId::~RtId(aRStack_80);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
                  }
                  goto LAB_049a8610;
                }
              }
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      }
LAB_049a8610:
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
  }
  else {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x118));
    if (cVar1 != '\0') {
      this_00 = (GuideEndDoor *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
      GuideEndDoor::DoDestory(this_00);
    }
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


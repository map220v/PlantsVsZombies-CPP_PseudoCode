// Class: GridItemCthulhuActiniaTentacleArtifact


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacleArtifact::StaticClassInit() */

void GridItemCthulhuActiniaTentacleArtifact::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCthulhuActiniaTentacleArtifact");
    (*pcVar2)(plVar1,asStack_10,FUN_03767030,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCthulhuActiniaTentacleArtifact::StaticGetClass() */

long * GridItemCthulhuActiniaTentacleArtifact::StaticGetClass(void)

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
  uVar2 = GridItemCthulhuActiniaTentacle::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCthulhuActiniaTentacleArtifact",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCthulhuActiniaTentacleArtifact::GetClass() const */

long * GridItemCthulhuActiniaTentacleArtifact::GetClass(void)

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
  uVar2 = GridItemCthulhuActiniaTentacle::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCthulhuActiniaTentacleArtifact",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCthulhuActiniaTentacleArtifact::UpdateIdle() */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::UpdateIdle(GridItemCthulhuActiniaTentacleArtifact *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0x200);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar1 = (**(code **)(*plVar2 + 0x328))();
    if (cVar1 == '\0') {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar1 = (**(code **)(*plVar2 + 0x330))();
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this + 0x2e0))(this,6);
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacleArtifact::GridItemCthulhuActiniaTentacleArtifact() */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::GridItemCthulhuActiniaTentacleArtifact
          (GridItemCthulhuActiniaTentacleArtifact *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemCthulhuActiniaTentacle::GridItemCthulhuActiniaTentacle
            ((GridItemCthulhuActiniaTentacle *)this);
  *(undefined ***)this = &PTR_GetClass_06693530;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCthulhuActiniaTentacleArtifact_06693838;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x208));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x200),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCthulhuActiniaTentacleArtifact::StaticNew() */

GridItemCthulhuActiniaTentacleArtifact * GridItemCthulhuActiniaTentacleArtifact::StaticNew(void)

{
  GridItemCthulhuActiniaTentacleArtifact *this;
  
  this = ::operator_new(0x210);
  GridItemCthulhuActiniaTentacleArtifact(this);
  return this;
}


/* GridItemCthulhuActiniaTentacleArtifact::~GridItemCthulhuActiniaTentacleArtifact() */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::~GridItemCthulhuActiniaTentacleArtifact
          (GridItemCthulhuActiniaTentacleArtifact *this)

{
  *(undefined ***)this = &PTR_GetClass_06693530;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCthulhuActiniaTentacleArtifact_06693838;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x208));
  GridItemCthulhuActiniaTentacle::~GridItemCthulhuActiniaTentacle
            ((GridItemCthulhuActiniaTentacle *)this);
  return;
}


/* non-virtual thunk to
   GridItemCthulhuActiniaTentacleArtifact::~GridItemCthulhuActiniaTentacleArtifact() */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::~GridItemCthulhuActiniaTentacleArtifact
          (GridItemCthulhuActiniaTentacleArtifact *this)

{
  ~GridItemCthulhuActiniaTentacleArtifact(this + -0x10);
  return;
}


/* GridItemCthulhuActiniaTentacleArtifact::~GridItemCthulhuActiniaTentacleArtifact() */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::~GridItemCthulhuActiniaTentacleArtifact
          (GridItemCthulhuActiniaTentacleArtifact *this)

{
  ~GridItemCthulhuActiniaTentacleArtifact(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemCthulhuActiniaTentacleArtifact::~GridItemCthulhuActiniaTentacleArtifact() */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::~GridItemCthulhuActiniaTentacleArtifact
          (GridItemCthulhuActiniaTentacleArtifact *this)

{
  ~GridItemCthulhuActiniaTentacleArtifact(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacleArtifact::SetState(int) */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::SetState
          (GridItemCthulhuActiniaTentacleArtifact *this,int param_1)

{
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x1a8) != param_1) {
    *(int *)(this + 0x1a8) = param_1;
    if (param_1 == 6) {
      std::string::string(asStack_58,"drag");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"OnAttackAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      GridItemCthulhuActiniaTentacle::PlaySingleAnimation
                ((GridItemCthulhuActiniaTentacle *)this,asStack_58,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
    else if (param_1 == 10) {
      (**(code **)(*(long *)this + 0x230))();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCthulhuActiniaTentacleArtifact::DarkEffectFlyEnd(float) */

void GridItemCthulhuActiniaTentacleArtifact::DarkEffectFlyEnd(float param_1)

{
  long *in_x0;
  
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(in_x0 + 0x41));
  thunk_FUN_0376732c(gMessageRouter);
  (**(code **)(*in_x0 + 0x2e0))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacleArtifact::PlayDarkEffect(Sexy::SexyVector2 const&) */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::PlayDarkEffect
          (GridItemCthulhuActiniaTentacleArtifact *this,SexyVector2 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *extraout_x0;
  char *pcVar3;
  code *pcVar4;
  float fVar5;
  FastCurve aFStack_70 [8];
  FastCurve aFStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  FastCurve aFStack_58 [8];
  undefined4 local_50;
  float local_4c;
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03728aac(0);
  Sexy::FastCurve::SetOutRange(aFStack_70,(float)iVar1,(float)iVar1);
  iVar1 = FUN_03728ae0();
  Sexy::FastCurve::SetOutRange(aFStack_68,(float)iVar1,(float)iVar1);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_60)
  ;
  local_60 = 0x43480000;
  local_5c = 0x43200000;
  fVar5 = 160.0 - (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  Sexy::FastCurve::SetOutRange
            (aFStack_58,200.0 - (float)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48),fVar5);
  uVar2 = AddCthulhuEnergyEffect::StaticGetClass();
  GameObject::Create(uVar2,0x27);
  nop();
  pcVar4 = *(code **)(*extraout_x0 + 0x88);
  local_50 = Sexy::SexyVector2::operator+(param_1,(SexyVector2 *)aFStack_70);
  local_4c = fVar5;
  (*pcVar4)(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pcVar4 = *(code **)(*extraout_x0 + 0x90);
  local_50 = Sexy::SexyVector2::operator+((SexyVector2 *)&local_60,(SexyVector2 *)aFStack_68);
  local_4c = fVar5;
  (*pcVar4)(extraout_x0,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pcVar4 = *(code **)(*extraout_x0 + 0xa0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DarkEffectFlyEnd);
  Sexy::Delegate1<float>::
  Delegate1<GridItemCthulhuActiniaTentacleArtifact,void(GridItemCthulhuActiniaTentacleArtifact::*)(float)>
            (aDStack_38,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  (*pcVar4)(extraout_x0,aDStack_38);
  (**(code **)(*extraout_x0 + 0x78))(extraout_x0);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x208),(RtWeakPtrBase *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_PVP_Battle_Get_Energy");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacleArtifact::OnAttackAnimDone(std::string const&) */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::OnAttackAnimDone
          (GridItemCthulhuActiniaTentacleArtifact *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"drag");
  if (bVar1) {
    uVar2 = *(undefined4 *)(this + 0x1c);
    local_10 = FUN_03726f28(*(undefined4 *)(this + 0x18),uVar2,*(undefined4 *)(this + 0x20));
    local_c = uVar2;
    local_10 = FUN_03728ac0();
    local_c = FUN_03728ac0(uVar2);
    PlayDarkEffect(this,(SexyVector2 *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacleArtifact::OnPopAnimCommand(std::string const&, float, std::string
   const&, std::string const&) */

void GridItemCthulhuActiniaTentacleArtifact::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  RtMixedPtrBase *this;
  bool bVar1;
  char cVar2;
  char *pcVar3;
  long *plVar4;
  code *pcVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  ResourceInfo *local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"drag_action");
  if (bVar1) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    this = (RtMixedPtrBase *)(param_1 + 0x200);
    AudioMgr::SendEvent(pcVar3,"Play_Plant_CthulhuActinia_Attack");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
    if (cVar2 != '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = (**(code **)(*plVar4 + 0x328))();
      if (cVar2 == '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)this);
        cVar2 = (**(code **)(*plVar4 + 0x330))();
        if (cVar2 == '\0') {
          local_20[0] = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38,
                     (BoardEntity **)local_20);
          pcVar5 = *(code **)(*(long *)param_1 + 0x2d8);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20,
                     (vector *)avStack_38);
          (*pcVar5)(param_1,(vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
        }
      }
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacleArtifact::SwallowZombies(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >) */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::SwallowZombies
          (GridItemCthulhuActiniaTentacleArtifact *this,
          vector<BoardEntity*,std::allocator<BoardEntity*>> *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Zombie *this_00;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  float local_58;
  Vec3 aVStack_50 [16];
  Vec3 aVStack_40 [16];
  Insets aIStack_30 [12];
  int local_24;
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(param_2);
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)param_2;
    uVar6 = 0;
    uVar2 = FUN_03724708(uVar5,*(undefined8 *)(param_2 + 8));
    if (uVar2 != 0) {
      do {
        puVar3 = (undefined8 *)FUN_03724714(uVar5,uVar6);
        if ((RtObject *)*puVar3 != (RtObject *)0x0) {
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
          if (this_00 != (Zombie *)0x0) {
            GridItemCthulhuActiniaTentacle::SetupZombieToBeSwallowed
                      ((GridItemCthulhuActiniaTentacle *)this,this_00);
            Sexy::Insets::Insets(aIStack_30);
            plVar4 = (long *)Zombie::GetAnimRig(this_00);
            (**(code **)(*plVar4 + 0x90))(plVar4,aIStack_30);
            puVar3 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this_00);
            local_70 = *puVar3;
            local_68 = *(undefined4 *)(puVar3 + 1);
            puVar3 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            local_60 = *puVar3;
            local_58 = *(float *)(puVar3 + 1);
            Sexy::PIInterpolator::PIInterpolator(aPStack_20);
            fVar7 = (float)PVZ_T();
            CurveSequence<Sexy::SexyVector3>::StartSequence
                      ((CurveSequence<Sexy::SexyVector3> *)aPStack_20,fVar7,(SexyVector3 *)&local_70
                      );
            CurveSequence<Sexy::SexyVector3>::AddCurve
                      ((CurveSequence<Sexy::SexyVector3> *)0x3e19999a,aPStack_20,
                       (SexyVector3 *)&local_70,&local_60,1);
            fVar7 = local_58;
            fVar8 = (float)FUN_03728ad0(0x3f800000);
            EATextSquish::Vec3::Vec3
                      (aVStack_40,(float)local_60,local_60._4_4_,
                       fVar7 - fVar8 * (float)local_24 * 0.25);
            CurveSequence<Sexy::SexyVector3>::AddCurve
                      ((CurveSequence<Sexy::SexyVector3> *)0x3e800000,aPStack_20,&local_60,
                       aVStack_40,1);
            fVar7 = local_58;
            fVar8 = (float)FUN_03728ad0(0x3f800000);
            EATextSquish::Vec3::Vec3
                      (aVStack_50,(float)local_60,local_60._4_4_,
                       fVar7 - fVar8 * (float)local_24 * 0.25);
            fVar7 = local_58;
            fVar8 = (float)FUN_03728ad0(0x3f800000);
            EATextSquish::Vec3::Vec3
                      (aVStack_40,(float)local_60,local_60._4_4_,
                       fVar7 - fVar8 * (float)local_24 * 0.25);
            CurveSequence<Sexy::SexyVector3>::AddCurve
                      ((CurveSequence<Sexy::SexyVector3> *)0x3f4ccccd,aPStack_20,aVStack_50,
                       aVStack_40,1);
            fVar7 = local_58;
            fVar8 = (float)FUN_03728ad0(0x3f800000);
            EATextSquish::Vec3::Vec3
                      (aVStack_50,(float)local_60,local_60._4_4_,
                       fVar7 - fVar8 * (float)local_24 * 0.25);
            fVar7 = local_58;
            fVar8 = (float)FUN_03728ad0(0x3f800000);
            EATextSquish::Vec3::Vec3
                      (aVStack_40,(float)local_60,local_60._4_4_,
                       fVar7 - fVar8 * (float)local_24 * 0.5);
            CurveSequence<Sexy::SexyVector3>::AddCurve
                      ((CurveSequence<Sexy::SexyVector3> *)0x3e19999a,aPStack_20,aVStack_50,
                       aVStack_40,1);
            std::
            vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
            ::push_back((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>
                         *)(this + 0x1e0),(CurveSequence *)aPStack_20);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aVStack_40,(RtWeakPtrBase *)aVStack_50);
            std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                       (this + 0x1c8),(RtWeakPtr *)aVStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_50);
            CurveSequence<Sexy::SexyVector3>::~CurveSequence
                      ((CurveSequence<Sexy::SexyVector3> *)aPStack_20);
          }
          uVar5 = *(undefined8 *)param_2;
          uVar2 = FUN_03724708(uVar5,*(undefined8 *)(param_2 + 8));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCthulhuActiniaTentacleArtifact::onGridItemInitialize() */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::onGridItemInitialize
          (GridItemCthulhuActiniaTentacleArtifact *this)

{
  TimeChallengeEndLevelUI *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimController::onGridItemInitialize((GridItemAnimController *)this);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c8));
  std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
  clear((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>> *
        )(this + 0x1e0));
  *(undefined4 *)(this + 0x1a8) = 5;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c8));
  std::vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>>::
  clear((vector<CurveSequence<Sexy::SexyVector3>,std::allocator<CurveSequence<Sexy::SexyVector3>>> *
        )(this + 0x1e0));
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2f0);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemCthulhuActiniaTentacleArtifact,void(GridItemCthulhuActiniaTentacleArtifact::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCthulhuActiniaTentacleArtifact::onUpdate() */

void __thiscall
GridItemCthulhuActiniaTentacleArtifact::onUpdate(GridItemCthulhuActiniaTentacleArtifact *this)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  
  GridItemAnimController::onUpdate((GridItemAnimController *)this);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x208));
  if (bVar2) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x208));
    (**(code **)(*plVar3 + 0x80))();
    iVar1 = *(int *)(this + 0x1a8);
  }
  else {
    iVar1 = *(int *)(this + 0x1a8);
  }
  if (iVar1 == 6) {
    (**(code **)(*(long *)this + 0x2e0))(this,7);
    return;
  }
  if (iVar1 == 7) {
    GridItemCthulhuActiniaTentacle::UpdateSwallowZombies();
    return;
  }
  if (iVar1 == 5) {
    (**(code **)(*(long *)this + 0x2d0))(this);
    return;
  }
  return;
}


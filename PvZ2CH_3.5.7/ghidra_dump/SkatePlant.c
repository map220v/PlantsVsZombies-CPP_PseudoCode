// Class: SkatePlant


/* SkatePlant::OnUseSpecialAnimCommand(float) */

void SkatePlant::OnUseSpecialAnimCommand(float param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant::onDraw(Sexy::Graphics*) */

void __thiscall SkatePlant::onDraw(SkatePlant *this,Graphics *param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  lVar1 = *(long *)(this + 8);
  uVar4 = (ulong)*(uint *)(lVar1 + 0x1c);
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_037dbe60(*(undefined4 *)(lVar1 + 0x18),uVar4,*(undefined4 *)(lVar1 + 0x20));
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar3 = (float)FUN_037dc020(uVar2);
  fVar6 = *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + fVar5 +
       (float)(int)((fVar3 - fVar5) * *(float *)(param_1 + 0x18));
  fVar3 = (float)FUN_037dc020(uVar4 & 0xffffffff);
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x14) + fVar6 +
       (float)(int)((fVar3 - fVar6) * *(float *)(param_1 + 0x1c));
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  fVar3 = *(float *)(this + 0x28);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  fVar3 = (float)FUN_037dc020(fVar3 - *(float *)(lVar1 + 0x9c));
  fVar6 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(this + 0x2c);
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  fVar5 = (float)FUN_037dc020(fVar5 - *(float *)(lVar1 + 0xa0));
  FUN_037dbccc(fVar3 * fVar6,fVar5 * *(float *)(param_1 + 0x1c),auStack_28,auStack_1c);
  PopAnimRig::Draw(*(PopAnimRig **)(this + 0x20),param_1,aSStack_30);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkatePlant::~SkatePlant() */

void __thiscall SkatePlant::~SkatePlant(SkatePlant *this)

{
  *(undefined ***)this = &PTR__SkatePlant_0669aec0;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 0x18))();
    *(undefined8 *)(this + 0x20) = 0;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


/* SkatePlant::~SkatePlant() */

void __thiscall SkatePlant::~SkatePlant(SkatePlant *this)

{
  ~SkatePlant(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant::SkatePlant(SkateBoardMower*) */

void __thiscall SkatePlant::SkatePlant(SkatePlant *this,SkateBoardMower *param_1)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  *(SkateBoardMower **)(this + 8) = param_1;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__SkatePlant_0669aec0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  *(undefined8 *)(this + 0x20) = 0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x28));
  *(undefined4 *)(this + 0x34) = 0;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,23.0,-35.0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x28) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkatePlant::UpdateAction() */

void __thiscall SkatePlant::UpdateAction(SkatePlant *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = *(PopAnimRig **)(this + 0x20);
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant::Initialize(std::string const&) */

void SkatePlant::Initialize(string *param_1)

{
  RtWeakPtr<PowerPropertySheet> *this;
  undefined4 uVar1;
  string *psVar2;
  long lVar3;
  undefined8 uVar4;
  ArtifactMgr *pAVar5;
  NameMapperBase *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x18),(RtWeakPtr *)(lVar3 + 0x28));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)this);
  uVar4 = CreateStandalonePlantAnimRig(aRStack_10,1);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pAVar5 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
  std::string::string((string *)aRStack_10,"artifact_skateboard");
  uVar1 = NameMapperBase::GetIdForName(this_00,(string *)aRStack_10);
  uVar1 = ArtifactMgr::GetBoostValue(pAVar5,uVar1,1);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// Class: PrismBeamTracker


/* PrismBeamTracker::GetColor() const */

Insets * PrismBeamTracker::GetColor(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0x10));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrismBeamTracker::InitBeam(Plant*, Plant*, Sexy::Color, float, float, float, MagnifyingGrassProps
   const*) */

void __thiscall
PrismBeamTracker::InitBeam
          (float param_1_00,float param_2_00,float param_3,PrismBeamTracker *this,
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *param_1,_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *param_2,undefined8 *param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  SexyVector3 *pSVar3;
  float fVar4;
  float fVar5;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = param_2_00;
  fVar5 = param_3;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 8),(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  uVar1 = param_7[1];
  *(undefined8 *)(this + 0x10) = *param_7;
  *(undefined8 *)(this + 0x18) = uVar1;
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_1);
  local_18 = Sexy::SexyVector3::operator+(pSVar3,(SexyVector3 *)(param_8 + 0x2f8));
  local_14 = fVar4;
  local_10 = fVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x20),(SexyVector3 *)&local_18);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(param_2);
  local_18 = Sexy::SexyVector3::operator+(pSVar3,(SexyVector3 *)(param_8 + 0x304));
  local_14 = fVar4;
  local_10 = fVar5;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x2c),(SexyVector3 *)&local_18);
  lVar2 = ___stack_chk_guard;
  fVar4 = *(float *)(param_8 + 800);
  fVar5 = param_2_00 - *(float *)(param_8 + 0x324);
  this[0x50] = (PrismBeamTracker)0x0;
  *(float *)(this + 0x38) = param_1_00;
  *(float *)(this + 0x44) = param_2_00;
  *(float *)(this + 0x3c) = param_1_00 + fVar4;
  *(float *)(this + 0x40) = fVar5;
  *(float *)(this + 0x48) = fVar5;
  *(float *)(this + 0x4c) = fVar5 + param_3;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrismBeamTracker::IsContracting() const */

bool __thiscall PrismBeamTracker::IsContracting(PrismBeamTracker *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x40) < fVar1;
}


/* PrismBeamTracker::IsBeamVisible() const */

bool __thiscall PrismBeamTracker::IsBeamVisible(PrismBeamTracker *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  bVar1 = false;
  if (*(float *)(this + 0x38) < fVar2) {
    fVar2 = (float)PVZ_T();
    bVar1 = fVar2 < *(float *)(this + 0x44);
  }
  return bVar1;
}


/* PrismBeamTracker::IsPulseVisible() const */

bool __thiscall PrismBeamTracker::IsPulseVisible(PrismBeamTracker *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  bVar1 = false;
  if (*(float *)(this + 0x48) < fVar2) {
    fVar2 = (float)PVZ_T();
    bVar1 = fVar2 < *(float *)(this + 0x4c);
  }
  return bVar1;
}


/* PrismBeamTracker::IsDone() const */

bool __thiscall PrismBeamTracker::IsDone(PrismBeamTracker *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x4c) < fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrismBeamTracker::GetBeamEndPoints(Sexy::SexyVector3&, Sexy::SexyVector3&) const */

void __thiscall
PrismBeamTracker::GetBeamEndPoints(PrismBeamTracker *this,SexyVector3 *param_1,SexyVector3 *param_2)

{
  SexyVector3 *pSVar1;
  float fVar2;
  float fVar3;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  if (fVar2 < *(float *)(this + 0x38)) {
    pSVar1 = (SexyVector3 *)Sexy::SexyVector3::operator=(param_2,(SexyVector3 *)(this + 0x20));
    Sexy::SexyVector3::operator=(param_1,pSVar1);
  }
  else if (fVar2 < *(float *)(this + 0x3c)) {
    Sexy::SexyVector3::operator=(param_1,(SexyVector3 *)(this + 0x20));
    fVar3 = *(float *)(this + 0x3c);
    local_10 = fVar2;
    local_18 = CurveLerp(*(undefined4 *)(this + 0x38),(SexyVector3 *)(this + 0x20),this + 0x2c,3);
    local_14 = fVar3;
    Sexy::SexyVector3::operator=(param_2,(SexyVector3 *)&local_18);
  }
  else if (fVar2 < *(float *)(this + 0x40)) {
    Sexy::SexyVector3::operator=(param_1,(SexyVector3 *)(this + 0x20));
    Sexy::SexyVector3::operator=(param_2,(SexyVector3 *)(this + 0x2c));
  }
  else {
    fVar3 = *(float *)(this + 0x44);
    if (fVar2 < fVar3) {
      local_10 = fVar2;
      local_18 = CurveLerp(this + 0x20,(SexyVector3 *)(this + 0x2c),3);
      local_14 = fVar3;
      Sexy::SexyVector3::operator=(param_1,(SexyVector3 *)&local_18);
      Sexy::SexyVector3::operator=(param_2,(SexyVector3 *)(this + 0x2c));
    }
    else {
      pSVar1 = (SexyVector3 *)Sexy::SexyVector3::operator=(param_2,(SexyVector3 *)(this + 0x2c));
      Sexy::SexyVector3::operator=(param_1,pSVar1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04041d98 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PrismBeamTracker::GetPulseProgress() const */

void __thiscall PrismBeamTracker::GetPulseProgress(PrismBeamTracker *this)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar2 = *(undefined4 *)(this + 0x4c);
  local_8 = ___stack_chk_guard;
  auVar1 = PVZ_T();
  local_10 = 0;
  local_c = 0x3f800000;
  CurveLerp<float>(auVar1,uVar2,auVar1._0_4_,&local_10,&local_c,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrismBeamTracker::GetOriginatingPlant() const */

undefined8 __thiscall PrismBeamTracker::GetOriginatingPlant(PrismBeamTracker *this)

{
  char cVar1;
  RtId *pRVar2;
  undefined8 uVar3;
  
  cVar1 = Sexy::CompiledMap::Initialized((CompiledMap *)this);
  if (cVar1 != '\0') {
    pRVar2 = (RtId *)Sexy::RtDb::GetDb();
    uVar3 = Sexy::RtDb::GetObjectForId(pRVar2);
    return uVar3;
  }
  return 0;
}


/* PrismBeamTracker::PlayContractionSound() */

void __thiscall PrismBeamTracker::PlayContractionSound(PrismBeamTracker *this)

{
  char *pcVar1;
  
  if (this[0x50] != (PrismBeamTracker)0x0) {
    return;
  }
  this[0x50] = (PrismBeamTracker)0x1;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_MagGrass_Nitro_Recharge");
  return;
}


/* PrismBeamTracker::PrismBeamTracker() */

void __thiscall PrismBeamTracker::PrismBeamTracker(PrismBeamTracker *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  Sexy::Color::Color((Color *)(this + 0x10));
  DVec3::DVec3((DVec3 *)(this + 0x20));
  DVec3::DVec3((DVec3 *)(this + 0x2c));
  return;
}


/* PrismBeamTracker::PrismBeamTracker(PrismBeamTracker const&) */

void __thiscall PrismBeamTracker::PrismBeamTracker(PrismBeamTracker *this,PrismBeamTracker *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  PrismBeamTracker PVar7;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)this,(RtWeakPtrBase *)param_1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 8),(RtWeakPtrBase *)(param_1 + 8));
  Sexy::Insets::Insets((Insets *)(this + 0x10),(Insets *)(param_1 + 0x10));
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  PVar7 = param_1[0x50];
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  this[0x50] = PVar7;
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar5;
  *(undefined4 *)(this + 0x3c) = uVar6;
  *(undefined4 *)(this + 0x48) = uVar3;
  *(undefined4 *)(this + 0x4c) = uVar4;
  return;
}


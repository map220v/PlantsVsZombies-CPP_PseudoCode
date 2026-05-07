// Class: SkatePlant_HomingThistle


/* SkatePlant_HomingThistle::GetDamageAmount() */

float __thiscall SkatePlant_HomingThistle::GetDamageAmount(SkatePlant_HomingThistle *this)

{
  float fVar1;
  
  fVar1 = (float)(*(int *)(this + 0x30) * 3 + 0x50);
  return *(float *)(this + 0x34) * fVar1 + fVar1;
}


/* SkatePlant_HomingThistle::~SkatePlant_HomingThistle() */

void __thiscall SkatePlant_HomingThistle::~SkatePlant_HomingThistle(SkatePlant_HomingThistle *this)

{
  *(undefined ***)this = &PTR__SkatePlant_HomingThistle_0669afe0;
  SkatePlant::~SkatePlant((SkatePlant *)this);
  return;
}


/* SkatePlant_HomingThistle::~SkatePlant_HomingThistle() */

void __thiscall SkatePlant_HomingThistle::~SkatePlant_HomingThistle(SkatePlant_HomingThistle *this)

{
  ~SkatePlant_HomingThistle(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_HomingThistle::SkatePlant_HomingThistle(SkateBoardMower*) */

void __thiscall
SkatePlant_HomingThistle::SkatePlant_HomingThistle
          (SkatePlant_HomingThistle *this,SkateBoardMower *param_1)

{
  undefined4 uVar1;
  FastCurve aFStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SkatePlant::SkatePlant((SkatePlant *)this,param_1);
  *(undefined ***)this = &PTR__SkatePlant_HomingThistle_0669afe0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0x1e;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3e19999a;
  Sexy::FastCurve::SetOutRange(aFStack_10,5.0,-5.0);
  Sexy::TPoint<float>::operator+=((TPoint<float> *)(this + 0x28),(TPoint *)aFStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_HomingThistle::Initialize(std::string const&) */

void SkatePlant_HomingThistle::Initialize(string *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SkatePlant::Initialize(param_1);
  pPVar1 = *(PopAnimRig **)(param_1 + 0x20);
  std::string::string(asStack_40,"plantfood_loop");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkatePlant_HomingThistle::Fire() */

void __thiscall SkatePlant_HomingThistle::Fire(SkatePlant_HomingThistle *this)

{
  bool bVar1;
  char cVar2;
  RtObject *pRVar3;
  HomingThistleProps *pHVar4;
  float *pfVar5;
  long lVar6;
  HomingThistleLeaf *this_00;
  DVec3 *this_01;
  long *plVar7;
  ulong uVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 *puVar9;
  char *pcVar10;
  int extraout_w1;
  int iVar11;
  int extraout_w1_00;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  float fVar15;
  Board *pBVar17;
  float fVar16;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  ResourceInfo *local_58;
  Vec3 aVStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x40) == 0) {
    pcVar10 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar10,"Play_Plant_Thistle_PlantFood_Start");
  }
  pRVar3 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  pHVar4 = Sexy::RtObject::Cast<HomingThistleProps>(pRVar3);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 8));
  lVar6 = FUN_037dbdbc(*(undefined8 *)(pHVar4 + 0x70),1);
  pBVar17._0_4_ = (Board *)(*pfVar5 + *(float *)(lVar6 + 0x68) + 15.0);
  fVar15 = pfVar5[1] + *(float *)(lVar6 + 0x6c) + -30.0;
  EATextSquish::Vec3::Vec3(aVStack_50,(float)pBVar17._0_4_,fVar15,0.0);
  lVar6 = FUN_037dbdbc(*(undefined8 *)(pHVar4 + 0x70),1);
  uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)(lVar6 + 8));
  pRVar3 = (RtObject *)Board::AddProjectile(pBVar17._0_4_,fVar15,0,uVar13,aRStack_28,0,0);
  this_00 = Sexy::RtObject::Cast<HomingThistleLeaf>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::SexyMath::DegToRad
            ((float)((*(int *)(this + 0x48) + *(int *)(pHVar4 + 0x2c4)) * *(int *)(pHVar4 + 0x2c8)))
  ;
  FUN_037dbd4c(this_00 + 0xc4);
  this_01 = (DVec3 *)Projectile::GetVelocity((Projectile *)this_00);
  fVar15 = (float)DVec3::getLength(this_01);
  HomingThistleLeaf::SetRotatedVelocity(this_00,fVar15);
  FUN_037dbe54(this_00 + 0x24);
  (**(code **)(*(long *)this + 0x40))(this);
  FUN_037dbd54(this_00 + 0xd8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  uVar13 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aRStack_28,uVar13,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,(RtWeakPtrBase *)&local_58);
    Sexy::RtId::~RtId((RtId *)&local_58);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    cVar2 = (**(code **)(*plVar7 + 0x328))();
    if (cVar2 == '\0') {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      pcVar14 = *(code **)(*plVar7 + 0x3d0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)(this + 0x10));
      cVar2 = (*pcVar14)(plVar7,(RtId *)&local_58,0);
      if (cVar2 == '\0') {
LAB_037e0c0c:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        goto LAB_037e0b78;
      }
      uVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      cVar2 = RealObject::IsOnOpposingTeam(uVar13,1);
      if (cVar2 == '\0') goto LAB_037e0c0c;
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_02);
      fVar16 = *pfVar5;
      lVar6 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
      fVar15 = *(float *)(lVar6 + 0x10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      if (fVar15 < fVar16) goto LAB_037e0b78;
      local_58 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_60);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_40,
                 (BoardEntity **)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      iVar11 = extraout_w1_00;
    }
    else {
LAB_037e0b78:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      iVar11 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_28,iVar11);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_28);
  uVar13 = local_40;
  uVar12 = (ulong)*(int *)(this + 0x48);
  uVar8 = FUN_037dbdd4(local_40,local_38);
  if (uVar8 <= uVar12) {
    cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_40);
    if (cVar2 != '\0') goto LAB_037e0c4c;
    uVar12 = FUN_037dbdd4(local_40,local_38);
    uVar8 = 0;
    if (uVar12 != 0) {
      uVar8 = (ulong)(long)*(int *)(this + 0x48) / uVar12;
    }
    uVar12 = (long)*(int *)(this + 0x48) - uVar8 * uVar12;
    uVar13 = local_40;
  }
  puVar9 = (undefined8 *)FUN_037dbde0(uVar13,uVar12);
  PineconePlantfoodProjectile::SetOverrideTarget
            ((PineconePlantfoodProjectile *)this_00,(BoardEntity *)*puVar9);
LAB_037e0c4c:
  *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkatePlant_HomingThistle::UpdateAction() */

void __thiscall SkatePlant_HomingThistle::UpdateAction(SkatePlant_HomingThistle *this)

{
  float fVar1;
  
  SkatePlant::UpdateAction((SkatePlant *)this);
  if ((*(int *)(this + 0x40) < *(int *)(this + 0x44)) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x38) < fVar1)) {
    Fire(this);
    fVar1 = (float)PVZ_T();
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    *(float *)(this + 0x38) = fVar1 + *(float *)(this + 0x3c);
    return;
  }
  return;
}


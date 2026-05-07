// Class: PeavinePlantgfood


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeavinePlantgfood::Update(Plant*, Sexy::SexyVector3 const&, float, PlantAction const&) */

void __thiscall
PeavinePlantgfood::Update
          (PeavinePlantgfood *this,Plant *param_1,SexyVector3 *param_2,float param_3,
          PlantAction *param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar7;
  float *pfVar8;
  RtWeakPtrBase *pRVar9;
  wchar_t *pwVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Board *pBVar18;
  undefined4 uVar17;
  wchar_t *local_c0;
  wchar_t *local_b8;
  undefined4 local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar12 = (float)PVZ_T();
  local_40 = CONCAT44(local_40._4_4_,*(int *)(this + 0x14) - *(int *)(this + 0x10));
  local_50 = CONCAT44(local_50._4_4_,
                      (int)((fVar12 - *(float *)(this + 0xc)) * *(float *)(this + 8)) -
                      *(int *)(this + 0x10));
  piVar5 = eastl::min_alt<int>((int *)&local_50,(int *)&local_40);
  iVar2 = *piVar5;
  if (0 < iVar2) {
    pBVar18._0_4_ = (Board *)(*(float *)param_2 + *(float *)(param_4 + 0x68) * param_3);
    fVar16 = *(float *)(param_2 + 8) - *(float *)(param_4 + 0x6c) * param_3;
    uVar17 = *(undefined4 *)(param_2 + 4);
    Sexy::SexyTransform2D::SexyTransform2D(local_30);
    fVar12 = *(float *)(this + 0x1c);
    cVar3 = Sexy::IsNearZero(fVar12,0.001);
    bVar1 = cVar3 == '\0';
    if (bVar1) {
      Sexy::SexyTransform2D::CreateRotation((SexyTransform2D *)0x0,fVar12);
    }
    iVar11 = 0;
    local_b8 = L"SnowPeaDefault";
    local_c0 = L"UltraFirePeaDefault";
    do {
      cVar3 = Plant::GetAvatarEnable(param_1);
      if (cVar3 == '\0') {
        uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)(param_4 + 8));
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Board::AddProjectile
                               (pBVar18._0_4_,uVar17,fVar16,uVar6,(RtName *)&local_40,param_1,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      else {
        fVar12 = (float)Sexy::Rand(1.0);
        if (fVar12 < 0.15) {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58);
          uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
          pwVar10 = L"FirePeaDefault";
LAB_03fdf768:
          Sexy::RtName::RtName((RtName *)&local_40,pwVar10);
          PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,uVar6,0xc,(RtName *)&local_40);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)&local_58,(RtWeakPtr *)&local_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
          Sexy::RtName::~RtName((RtName *)&local_40);
          pRVar9 = (RtWeakPtrBase *)&local_58;
        }
        else {
          if (fVar12 < 0.3) {
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58);
            uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
            pwVar10 = local_b8;
            goto LAB_03fdf768;
          }
          if (fVar12 < 0.45000002) {
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58);
            uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
            pwVar10 = local_c0;
            goto LAB_03fdf768;
          }
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58);
          pRVar9 = (RtWeakPtrBase *)(param_4 + 8);
        }
        uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,pRVar9);
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Board::AddProjectile
                               (pBVar18._0_4_,uVar17,fVar16,uVar6,(RtName *)&local_40,param_1,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      }
      uVar6 = FUN_03fdc120(*(undefined8 *)(this_00 + 0xe0));
      uVar6 = operator|(uVar6,0x2000);
      FUN_03fdc124(this_00 + 0xe0,uVar6);
      FUN_03fdc140(*(undefined4 *)(this + 0x20),this_00 + 0x184);
      puVar7 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_50 = *puVar7;
      local_48 = *(float *)(puVar7 + 1);
      dVar13 = sin((double)(*(int *)(this + 0x10) * 0xf));
      fVar15 = (float)dVar13 * 10.0;
      fVar12 = fVar15;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.0,fVar15);
      if (bVar1) {
        local_58 = Sexy::PopTransformMatrix::operator*
                             ((PopTransformMatrix *)local_30,(SexyVector2 *)&local_58);
        local_54 = fVar12;
      }
      fVar12 = (float)Sexy::Rand(120.0);
      iVar4 = Sexy::Rand(0xc);
      fVar14 = (float)iVar4;
      if (fVar12 - 60.0 <= 0.0) {
        fVar14 = -fVar14;
      }
      local_48 = local_48 - fVar15;
      local_50 = CONCAT44(local_54 + local_50._4_4_ + fVar14,fVar14 + (float)local_50);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      if (bVar1) {
        Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_00);
      }
      pfVar8 = (float *)Projectile::GetVelocityScale((Projectile *)this_00);
      local_40 = *(undefined8 *)pfVar8;
      local_38 = pfVar8[2];
      fVar12 = (float)Sexy::Rand(0.7);
      local_40 = CONCAT44(local_40._4_4_,(fVar12 + 1.0) * (float)local_40);
      Projectile::SetVelocityScale((Projectile *)this_00,(SexyVector3 *)&local_40);
      if (this[0x18] != (PeavinePlantgfood)0x0) {
        fVar12 = *pfVar8;
        Projectile::SetVelocityScale((Projectile *)this_00,-fVar12,pfVar8[1],pfVar8[2]);
        FUN_03fdc12c(this_00 + 0xd4,0.0 < fVar12);
      }
      iVar11 = iVar11 + 1;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    } while (iVar11 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PeavinePlantgfood::PeavinePlantgfood() */

void __thiscall PeavinePlantgfood::PeavinePlantgfood(PeavinePlantgfood *this)

{
  GatlingPeaPlantfood::GatlingPeaPlantfood((GatlingPeaPlantfood *)this);
  *(undefined ***)this = &PTR_Update_067afe90;
  return;
}


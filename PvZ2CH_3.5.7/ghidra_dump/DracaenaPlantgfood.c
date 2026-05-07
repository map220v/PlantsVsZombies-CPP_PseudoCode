// Class: DracaenaPlantgfood


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DracaenaPlantgfood::Update(Plant*, Sexy::SexyVector3 const&, float, PlantAction const&) */

void __thiscall
DracaenaPlantgfood::Update
          (DracaenaPlantgfood *this,Plant *param_1,SexyVector3 *param_2,float param_3,
          PlantAction *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  Projectile *this_00;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar9 = (float)PVZ_T();
  local_40 = CONCAT44(local_40._4_4_,*(int *)(this + 0x14) - *(int *)(this + 0x10));
  local_50 = CONCAT44(local_50._4_4_,
                      (int)((fVar9 - *(float *)(this + 0xc)) * *(float *)(this + 8)) -
                      *(int *)(this + 0x10));
  piVar4 = eastl::min_alt<int>((int *)&local_50,(int *)&local_40);
  iVar1 = *piVar4;
  if (0 < iVar1) {
    fVar16 = *(float *)(param_4 + 0x68);
    fVar15 = *(float *)(param_4 + 0x6c);
    fVar11 = *(float *)param_2;
    fVar9 = *(float *)(param_2 + 8);
    uVar17 = *(undefined4 *)(param_2 + 4);
    Sexy::SexyTransform2D::SexyTransform2D(local_30);
    fVar13 = *(float *)(this + 0x1c);
    cVar2 = Sexy::IsNearZero(fVar13,0.001);
    if (cVar2 == '\0') {
      Sexy::SexyTransform2D::CreateRotation((SexyTransform2D *)0x1,fVar13);
    }
    iVar8 = 0;
    do {
      while( true ) {
        uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)(param_4 + 8));
        this_00 = (Projectile *)
                  Board::AddProjectile
                            ((Board *)(fVar11 + fVar16 * param_3),uVar17,fVar9 - fVar15 * param_3,
                             uVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_40,param_1,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        uVar7 = FUN_03fdc120(*(undefined8 *)(this_00 + 0xe0));
        uVar7 = operator|(uVar7,0x2000);
        FUN_03fdc124(this_00 + 0xe0,uVar7);
        FUN_03fdc140(*(undefined4 *)(this + 0x20),this_00 + 0x184);
        puVar6 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_00);
        local_50 = *puVar6;
        local_48 = *(float *)(puVar6 + 1);
        dVar10 = sin((double)(*(int *)(this + 0x10) * 0xf));
        fVar14 = (float)dVar10 * 10.0;
        fVar13 = fVar14;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.0,fVar14);
        if (cVar2 == '\0') {
          local_58 = Sexy::PopTransformMatrix::operator*
                               ((PopTransformMatrix *)local_30,(SexyVector2 *)&local_58);
          local_54 = fVar13;
          Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_00);
          iVar3 = Sexy::Rand(10);
          fVar13 = (float)iVar3;
          if (*(float *)(this + 0x1c) <= 0.0) {
            fVar13 = -fVar13;
          }
          local_50 = CONCAT44(fVar13 + local_50._4_4_,(float)local_50);
          (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_50);
          FUN_03fdc118(*(undefined4 *)(this + 0x1c),this_00 + 0xc4);
        }
        else {
          fVar13 = (float)Sexy::Rand(120.0);
          iVar3 = Sexy::Rand(0xc);
          fVar12 = (float)iVar3;
          if (fVar13 - 60.0 <= 0.0) {
            fVar12 = -fVar12;
          }
          local_48 = local_48 - fVar14;
          local_50 = CONCAT44(local_54 + local_50._4_4_ + fVar12,fVar12 + (float)local_50);
          (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_50);
        }
        pfVar5 = (float *)Projectile::GetVelocityScale(this_00);
        local_40 = *(undefined8 *)pfVar5;
        local_38 = pfVar5[2];
        fVar13 = (float)Sexy::Rand(0.7);
        local_40 = CONCAT44(local_40._4_4_,(fVar13 + 1.0) * (float)local_40);
        Projectile::SetVelocityScale(this_00,(SexyVector3 *)&local_40);
        if (this[0x18] != (DracaenaPlantgfood)0x0) break;
        iVar8 = iVar8 + 1;
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
        if (iVar8 == iVar1) goto LAB_03fdd8bc;
      }
      fVar13 = *pfVar5;
      iVar8 = iVar8 + 1;
      Projectile::SetVelocityScale(this_00,-fVar13,pfVar5[1],pfVar5[2]);
      FUN_03fdc12c(this_00 + 0xd4,0.0 < fVar13);
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    } while (iVar8 != iVar1);
  }
LAB_03fdd8bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DracaenaPlantgfood::DracaenaPlantgfood() */

void __thiscall DracaenaPlantgfood::DracaenaPlantgfood(DracaenaPlantgfood *this)

{
  GatlingPeaPlantfood::GatlingPeaPlantfood((GatlingPeaPlantfood *)this);
  *(undefined ***)this = &PTR_Update_067afe70;
  return;
}


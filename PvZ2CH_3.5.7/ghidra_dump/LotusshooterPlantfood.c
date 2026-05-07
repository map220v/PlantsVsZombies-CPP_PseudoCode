// Class: LotusshooterPlantfood


/* LotusshooterPlantfood::LotusshooterPlantfood() */

void __thiscall LotusshooterPlantfood::LotusshooterPlantfood(LotusshooterPlantfood *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (LotusshooterPlantfood)0x0;
  this[0x1c] = (LotusshooterPlantfood)0x0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  return;
}


/* LotusshooterPlantfood::Start(float, int, float, bool) */

void __thiscall
LotusshooterPlantfood::Start
          (LotusshooterPlantfood *this,float param_1,int param_2,float param_3,bool param_4)

{
  undefined4 uVar1;
  
  *(float *)this = (float)param_2 / param_1;
  uVar1 = PVZ_T();
  this[0x1c] = (LotusshooterPlantfood)param_4;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 4) = uVar1;
  *(float *)(this + 0x18) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotusshooterPlantfood::Update(Plant*, Sexy::SexyVector3 const&, float, std::vector<PlantAction,
   std::allocator<PlantAction> > const&) */

void __thiscall
LotusshooterPlantfood::Update
          (LotusshooterPlantfood *this,Plant *param_1,SexyVector3 *param_2,float param_3,
          vector *param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  float *pfVar5;
  PlantAction *pPVar6;
  Projectile *this_00;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  SexyTransform2D local_a8 [40];
  int local_80 [2];
  RtWeakPtrBase aRStack_78 [96];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar10 = (float)PVZ_T();
  local_80[0] = *(int *)(this + 0xc) - *(int *)(this + 8);
  local_b8 = CONCAT44(local_b8._4_4_,
                      (int)((fVar10 - *(float *)(this + 4)) * *(float *)this) - *(int *)(this + 8));
  piVar4 = eastl::min_alt<int>((int *)&local_b8,local_80);
  iVar2 = *piVar4;
  if (0 < iVar2) {
    Sexy::SexyTransform2D::SexyTransform2D(local_a8);
    fVar10 = *(float *)(this + 0x14);
    cVar3 = Sexy::IsNearZero(fVar10,0.001);
    bVar1 = cVar3 == '\0';
    if (bVar1) {
      Sexy::SexyTransform2D::CreateRotation((SexyTransform2D *)0x0,fVar10);
    }
    iVar9 = 0;
    do {
      pPVar6 = (PlantAction *)FUN_03fdc16c(*(undefined8 *)param_4,0);
      PlantAction::PlantAction((PlantAction *)local_80,pPVar6);
      if ((this[0x1c] != (LotusshooterPlantfood)0x0) && ((*(uint *)(this + 8) & 1) != 0)) {
        pPVar6 = (PlantAction *)FUN_03fdc16c(*(undefined8 *)param_4,1);
        PlantAction::operator=((PlantAction *)local_80,pPVar6);
      }
      fVar14 = *(float *)param_2;
      fVar13 = *(float *)(param_2 + 8);
      fVar10 = local_18 * param_3;
      fVar12 = local_14 * param_3;
      uVar11 = *(undefined4 *)(param_2 + 4);
      uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_b8,aRStack_78);
      Board::AddProjectile
                ((Board *)(fVar14 + fVar10),uVar11,fVar13 - fVar12,uVar8,
                 (RtWeakPtr<Sexy::SoundResource> *)&local_b8,param_1,0);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_b8);
      uVar8 = FUN_03fdc120(*(undefined8 *)(this_00 + 0xe0));
      uVar8 = operator|(uVar8,0x2000);
      FUN_03fdc124(this_00 + 0xe0,uVar8);
      FUN_03fdc140(*(undefined4 *)(this + 0x18),this_00 + 0x184);
      FUN_03fdc45c(this_00 + 0x1a5);
      puVar7 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
      local_c8 = *puVar7;
      local_c0 = *(float *)(puVar7 + 1);
      fVar10 = sinf((float)*(int *)(this + 8) * 10.0);
      fVar12 = fVar10 * 5.0;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,0.0,fVar12);
      if (bVar1) {
        local_d0 = (float)Sexy::PopTransformMatrix::operator*
                                    ((PopTransformMatrix *)local_a8,(SexyVector2 *)&local_d0);
        local_cc = fVar12;
      }
      local_c0 = local_c0 - fVar10 * 10.0;
      local_c8 = CONCAT44(local_cc + local_c8._4_4_,local_d0 + (float)local_c8);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_c8);
      if (bVar1) {
        Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_00);
      }
      pfVar5 = (float *)Projectile::GetVelocityScale(this_00);
      local_b8 = *(undefined8 *)pfVar5;
      local_b0 = pfVar5[2];
      fVar10 = (float)Sexy::Rand(0.7);
      local_b8 = CONCAT44(local_b8._4_4_,(fVar10 + 1.0) * (float)local_b8);
      Projectile::SetVelocityScale(this_00,(SexyVector3 *)&local_b8);
      if (this[0x10] != (LotusshooterPlantfood)0x0) {
        fVar10 = *pfVar5;
        Projectile::SetVelocityScale(this_00,-fVar10,pfVar5[1],pfVar5[2]);
        FUN_03fdc12c(this_00 + 0xd4,0.0 < fVar10);
      }
      iVar9 = iVar9 + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      PlantAction::~PlantAction((PlantAction *)local_80);
    } while (iVar9 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


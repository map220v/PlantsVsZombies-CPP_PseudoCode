// Class: ZombossSkyCityLineShoot


/* ZombossSkyCityLineShoot::ZombossSkyCityLineShoot() */

void __thiscall ZombossSkyCityLineShoot::ZombossSkyCityLineShoot(ZombossSkyCityLineShoot *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (ZombossSkyCityLineShoot)0x0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  return;
}


/* ZombossSkyCityLineShoot::SetRotation(float) */

void __thiscall ZombossSkyCityLineShoot::SetRotation(ZombossSkyCityLineShoot *this,float param_1)

{
  *(float *)(this + 0x14) = param_1;
  return;
}


/* ZombossSkyCityLineShoot::Start(float, int, float) */

void __thiscall
ZombossSkyCityLineShoot::Start
          (ZombossSkyCityLineShoot *this,float param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  
  *(float *)this = (float)param_2 / param_1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 4) = uVar1;
  *(float *)(this + 0x18) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityLineShoot::Update(ZombieZombossMech*, Sexy::SexyVector3 const&, float) */

void __thiscall
ZombossSkyCityLineShoot::Update
          (ZombossSkyCityLineShoot *this,ZombieZombossMech *param_1,SexyVector3 *param_2,
          float param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  float *pfVar5;
  undefined8 uVar6;
  Projectile *this_00;
  undefined8 *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar9 = (float)PVZ_T();
  local_40 = CONCAT44(local_40._4_4_,*(int *)(this + 0xc) - *(int *)(this + 8));
  local_50 = CONCAT44(local_50._4_4_,
                      (int)((fVar9 - *(float *)(this + 4)) * *(float *)this) - *(int *)(this + 8));
  piVar4 = eastl::min_alt<int>((int *)&local_50,(int *)&local_40);
  iVar2 = *piVar4;
  if (0 < iVar2) {
    fVar9 = *(float *)param_2;
    uVar12 = *(undefined4 *)(param_2 + 4);
    Sexy::SexyTransform2D::SexyTransform2D(local_30);
    fVar11 = *(float *)(this + 0x14);
    cVar3 = Sexy::IsNearZero(fVar11,0.001);
    bVar1 = cVar3 == '\0';
    if (bVar1) {
      Sexy::SexyTransform2D::CreateRotation((SexyTransform2D *)0x0,fVar11);
    }
    iVar8 = 0;
    do {
      uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
      std::string::string((string *)&local_58,"ZombossSkyCityLineShootDefault");
      Sexy::ToWString((string *)&local_58);
      Sexy::RtName::RtName((RtName *)&local_40,(wstring *)&local_50);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_60,uVar6,0xc,(RtName *)&local_40);
      Sexy::RtName::~RtName((RtName *)&local_40);
      FUN_05476c50((wstring *)&local_50);
      std::string::~string((string *)&local_58);
      nop();
      uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_60);
      this_00 = (Projectile *)
                Board::AddProjectile
                          ((Board *)(fVar9 + param_3 * 35.0),uVar12,param_3 * 32.0,uVar6,
                           (RtName *)&local_40,param_1,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      uVar6 = FUN_04725fa0(*(undefined8 *)(this_00 + 0xe0));
      uVar6 = operator|(uVar6,0x2000);
      FUN_04725fa4(this_00 + 0xe0,uVar6);
      FUN_04725fb4(*(undefined4 *)(this + 0x18),this_00 + 0x184);
      RealObject::JoinTeam((RealObject *)this_00,2);
      puVar7 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_00);
      local_50 = *puVar7;
      local_48 = *(float *)(puVar7 + 1);
      fVar11 = sinf((float)*(int *)(this + 8) * 10.0);
      fVar10 = fVar11 * 5.0;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.0,fVar10);
      if (bVar1) {
        local_58 = (float)Sexy::PopTransformMatrix::operator*
                                    ((PopTransformMatrix *)local_30,(SexyVector2 *)&local_58);
        local_54 = fVar10;
      }
      local_48 = local_48 - fVar11 * 10.0;
      local_50 = CONCAT44(local_54 + local_50._4_4_,local_58 + (float)local_50);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,(wstring *)&local_50);
      if (bVar1) {
        Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_00);
      }
      pfVar5 = (float *)Projectile::GetVelocityScale(this_00);
      local_40 = *(undefined8 *)pfVar5;
      local_38 = pfVar5[2];
      fVar11 = (float)Sexy::Rand(0.7);
      local_40 = CONCAT44(local_40._4_4_,(fVar11 + 1.0) * (float)local_40);
      Projectile::SetVelocityScale(this_00,(SexyVector3 *)&local_40);
      if (this[0x10] != (ZombossSkyCityLineShoot)0x0) {
        fVar11 = *pfVar5;
        Projectile::SetVelocityScale(this_00,-fVar11,pfVar5[1],pfVar5[2]);
        FUN_04725fac(this_00 + 0xd4,0.0 < fVar11);
      }
      iVar8 = iVar8 + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    } while (iVar8 != iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

